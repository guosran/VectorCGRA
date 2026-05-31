"""
==========================================================================
CgraRTL_conv4x4_test_from_yaml.py
==========================================================================
Test cases for CGRA with crossbar-based data memory and ring-based control
memory of each tile, using the generated conv kernel.

Conv kernel semantics (SMALL_DATASET, NI=60, NJ=70, total=4200):
  out = 0
  for x = 0 to 4199:        (ICMP_EQ #4200)
    i = x / 70              (DIV #70)
    j = x % 70              (REM #70)
    out += A[i][j] * B[i][j]  (GEP + LOAD + MUL + ADD)
  return out                 (RETURN_VALUE)

A is stored at addresses [0..4199], B at addresses [4200..8399].
A[i][j] = A[i*70+j], B[i][j] = B[i*70+j].

Author : Shiran Guo
  Date : Apr 6, 2026
"""

import os
import time

from pymtl3.datatypes import b1, b2
from pymtl3.passes.backends.verilog import (VerilogVerilatorImportPass)
from pymtl3.stdlib.test_utils import (run_sim,
                                      config_model_with_cmdline_opts)

from ..CgraRTL import CgraRTL
from ...fu.double.SeqMulAdderRTL import SeqMulAdderRTL
from ...fu.flexible.FlexibleFuRTL import FlexibleFuRTL
from ...fu.float.FpAddRTL import FpAddRTL
from ...fu.float.FpMulRTL import FpMulRTL
from ...fu.single.AdderRTL import AdderRTL
from ...fu.single.DivRTL import DivRTL
from ...fu.single.GepRTL import GepRTL
from ...fu.single.GrantRTL import GrantRTL
from ...fu.single.CompRTL import CompRTL
from ...fu.single.LogicRTL import LogicRTL
from ...fu.single.MemUnitRTL import MemUnitRTL
from ...fu.single.MulRTL import MulRTL
from ...fu.single.PhiRTL import PhiRTL
from ...fu.single.RetRTL import RetRTL
from ...fu.single.SelRTL import SelRTL
from ...fu.single.ShifterRTL import ShifterRTL
from ...fu.vector.VectorAdderComboRTL import VectorAdderComboRTL
from ...fu.vector.VectorMulComboRTL import VectorMulComboRTL
from ...fu.vector.VectorAllReduceRTL import VectorAllReduceRTL
from ...lib.basic.val_rdy.SinkRTL import SinkRTL as TestSinkRTL
from ...lib.basic.val_rdy.SourceRTL import SourceRTL as TestSrcRTL
from ...lib.messages import *
from ...lib.opt_type import *
from ...lib.util.common import *
from ...lib.trace_logger import init_trace_logger, close_trace_logger

#-------------------------------------------------------------------------
# Test harness
#-------------------------------------------------------------------------

class TestHarness(Component):

  def construct(s, DUT, FunctionUnit, FuList,
                CtrlPktType,
                cgra_id, width, height,
                ctrl_mem_size, data_mem_size_global,
                data_mem_size_per_bank, num_banks_per_cgra,
                num_registers_per_reg_bank,
                src_ctrl_pkt, kCtrlCountPerIter, kTotalCtrlSteps,
                mem_access_is_combinational, controller2addr_map,
                idTo2d_map, complete_signal_sink_out,
                multi_cgra_rows, multi_cgra_columns, src_query_pkt,
                preload_pkt_count = 0, preload_drain_cycles = 0):

    CgraPayloadType = CtrlPktType.get_field_type(kAttrPayload)
    DataType = CgraPayloadType.get_field_type(kAttrData)
    DataAddrType = mk_bits(clog2(data_mem_size_global))
    s.num_tiles = width * height
    s.src_ctrl_pkt = TestSrcRTL(CtrlPktType, src_ctrl_pkt)
    s.src_query_pkt = TestSrcRTL(CtrlPktType, src_query_pkt)

    s.dut = DUT(CgraPayloadType,
                # CGRA terminals on x/y. Assume in total 4, though this
                # test is for single CGRA.
                multi_cgra_rows, multi_cgra_columns,
                width, height, ctrl_mem_size,
                data_mem_size_global, data_mem_size_per_bank,
                num_banks_per_cgra, num_registers_per_reg_bank,
                kCtrlCountPerIter, kTotalCtrlSteps,
                mem_access_is_combinational,
                FunctionUnit, FuList, "Mesh",
                controller2addr_map, idTo2d_map,
                is_multi_cgra = False)

    cmp_fn = lambda a, b : a.payload.data == b.payload.data and a.payload.cmd == b.payload.cmd
    s.complete_signal_sink_out = TestSinkRTL(CtrlPktType, complete_signal_sink_out, cmp_fn = cmp_fn)

    # Connections
    s.dut.cgra_id //= cgra_id

    expected_return_src = int(complete_signal_sink_out[0].src) \
        if complete_signal_sink_out else -1
    expected_return_data = int(complete_signal_sink_out[0].payload.data.payload) \
        if complete_signal_sink_out else 0

    complete_count_value = \
            sum(1 for pkt in complete_signal_sink_out \
                if pkt.payload.cmd == CMD_COMPLETE)

    CompleteCountType = mk_bits(clog2(complete_count_value + 1))
    s.complete_count = Wire(CompleteCountType)
    StoreCountType = mk_bits(clog2(max(preload_pkt_count, 1) + 1))
    DrainCountType = mk_bits(clog2(max(preload_drain_cycles, 1) + 1))
    s.preload_sent_count = Wire(StoreCountType)
    s.preload_drain_count = Wire(DrainCountType)
    s.preload_draining = Wire(1)

    @update
    def update_preload_draining():
      if preload_pkt_count > 0:
        s.preload_draining @= \
            (s.preload_sent_count >= StoreCountType(preload_pkt_count)) & \
            (s.preload_drain_count < DrainCountType(preload_drain_cycles))
      else:
        s.preload_draining @= 0

    @update
    def conditional_issue_ctrl_or_query():
      s.dut.recv_from_cpu_pkt.val @= s.src_ctrl_pkt.send.val
      s.dut.recv_from_cpu_pkt.msg @= s.src_ctrl_pkt.send.msg
      s.src_ctrl_pkt.send.rdy @= 0
      s.src_query_pkt.send.rdy @= 0
      if (s.complete_count >= complete_count_value) & \
         ~s.src_ctrl_pkt.send.val:
        s.dut.recv_from_cpu_pkt.val @= s.src_query_pkt.send.val
        s.dut.recv_from_cpu_pkt.msg @= s.src_query_pkt.send.msg
        s.src_query_pkt.send.rdy @= s.dut.recv_from_cpu_pkt.rdy
      else:
        s.src_ctrl_pkt.send.rdy @= s.dut.recv_from_cpu_pkt.rdy

      if s.preload_draining:
        s.dut.recv_from_cpu_pkt.val @= 0
        s.src_ctrl_pkt.send.rdy @= 0

    @update
    def filter_return_complete():
      s.complete_signal_sink_out.recv.val @= 0
      s.complete_signal_sink_out.recv.msg @= s.dut.send_to_cpu_pkt.msg
      s.dut.send_to_cpu_pkt.rdy @= 1

      if s.dut.send_to_cpu_pkt.val & \
         (s.dut.send_to_cpu_pkt.msg.src == expected_return_src) & \
         (s.dut.send_to_cpu_pkt.msg.payload.cmd == CMD_COMPLETE):
        s.complete_signal_sink_out.recv.val @= 1
        s.dut.send_to_cpu_pkt.rdy @= s.complete_signal_sink_out.recv.rdy

    @update_ff
    def update_complete_count():
      if s.reset:
        s.complete_count <<= 0
      else:
        if s.complete_signal_sink_out.recv.val & s.complete_signal_sink_out.recv.rdy & \
           (s.complete_count < complete_count_value):
          s.complete_count <<= s.complete_count + CompleteCountType(1)

    @update_ff
    def update_preload_counts():
      if s.reset:
        s.preload_sent_count <<= 0
        s.preload_drain_count <<= 0
      else:
        if preload_pkt_count > 0:
          if s.dut.recv_from_cpu_pkt.val & s.dut.recv_from_cpu_pkt.rdy & \
             (s.dut.recv_from_cpu_pkt.msg.payload.cmd == CMD_STORE_REQUEST) & \
             (s.preload_sent_count < StoreCountType(preload_pkt_count)):
            s.preload_sent_count <<= s.preload_sent_count + StoreCountType(1)
          if (s.preload_sent_count >= StoreCountType(preload_pkt_count)) & \
             (s.preload_drain_count < DrainCountType(preload_drain_cycles)):
            s.preload_drain_count <<= s.preload_drain_count + DrainCountType(1)

    # Connects memory address upper and lower bound for each CGRA.
    s.dut.address_lower //= DataAddrType(controller2addr_map[cgra_id][0])
    s.dut.address_upper //= DataAddrType(controller2addr_map[cgra_id][1])

    for tile_col in range(width):
      s.dut.send_data_on_boundary_north[tile_col].rdy //= 0
      s.dut.recv_data_on_boundary_north[tile_col].val //= 0
      s.dut.recv_data_on_boundary_north[tile_col].msg //= DataType()

      s.dut.send_data_on_boundary_south[tile_col].rdy //= 0
      s.dut.recv_data_on_boundary_south[tile_col].val //= 0
      s.dut.recv_data_on_boundary_south[tile_col].msg //= DataType()

    for tile_row in range(height):
      s.dut.send_data_on_boundary_west[tile_row].rdy //= 0
      s.dut.recv_data_on_boundary_west[tile_row].val //= 0
      s.dut.recv_data_on_boundary_west[tile_row].msg //= DataType()

      s.dut.send_data_on_boundary_east[tile_row].rdy //= 0
      s.dut.recv_data_on_boundary_east[tile_row].val //= 0
      s.dut.recv_data_on_boundary_east[tile_row].msg //= DataType()

  def done(s):
    return (s.src_ctrl_pkt.done() and s.src_query_pkt.done()
            and s.complete_signal_sink_out.done())

  def line_trace(s):
    return s.dut.line_trace()

# Common configurations/setups.
FuList = [AdderRTL,
          MulRTL,
          DivRTL,
          GepRTL,
          LogicRTL,
          ShifterRTL,
          PhiRTL,
          CompRTL,
          GrantRTL,
          MemUnitRTL,
          SelRTL,
          RetRTL,
          ]
x_tiles = 4
y_tiles = 4
data_bitwidth = 32
tile_ports = 4
num_tile_inports  = tile_ports
num_tile_outports = tile_ports
num_fu_inports = 4
num_fu_outports = 2
num_routing_outports = num_tile_outports + num_fu_inports
ctrl_mem_size = 6
data_mem_size_global = 65536
data_mem_size_per_bank = 8192
num_banks_per_cgra = 2
num_cgra_columns = 4
num_cgra_rows = 1
num_cgras = num_cgra_columns * num_cgra_rows
num_ctrl_operations = 64
num_registers_per_reg_bank = 8
TileInType = mk_bits(clog2(num_tile_inports + num_fu_inports + 1))
FuInType = mk_bits(clog2(num_fu_inports + 1))
FuOutType = mk_bits(clog2(num_fu_outports + 1))
addr_nbits = clog2(data_mem_size_global)
num_tiles = x_tiles * y_tiles
num_rd_tiles = x_tiles + y_tiles - 1
per_cgra_data_size = int(data_mem_size_global / num_cgras)

DUT = CgraRTL
FunctionUnit = FlexibleFuRTL

DataAddrType = mk_bits(addr_nbits)
RegIdxType = mk_bits(clog2(num_registers_per_reg_bank))
DataType = mk_data(data_bitwidth, 1)
PredicateType = mk_predicate(1, 1)
ControllerIdType = mk_bits(max(1, clog2(num_cgras)))
cgra_id = 0
controller2addr_map = {}
for i in range(num_cgras):
  controller2addr_map[i] = [i * per_cgra_data_size,
                            (i + 1) * per_cgra_data_size - 1]
idTo2d_map = {
        0: [0, 0],
        1: [1, 0],
        2: [2, 0],
        3: [3, 0],
}

cgra_id_nbits = clog2(num_cgras)
addr_nbits = clog2(data_mem_size_global)
predicate_nbits = 1

CtrlType = mk_ctrl(num_fu_inports,
                    num_fu_outports,
                    num_tile_inports,
                    num_tile_outports,
                    num_registers_per_reg_bank)

CtrlAddrType = mk_bits(clog2(ctrl_mem_size))

CgraPayloadType = mk_cgra_payload(DataType,
                                  DataAddrType,
                                  CtrlType,
                                  CtrlAddrType)

InterCgraPktType = mk_inter_cgra_pkt(num_cgra_columns,
                                      num_cgra_rows,
                                      num_tiles,
                                      num_rd_tiles,
                                      CgraPayloadType)

IntraCgraPktType = mk_intra_cgra_pkt(num_cgra_columns,
                                      num_cgra_rows,
                                      num_tiles,
                                      CgraPayloadType)

# Helper to convert signed int to unsigned 32-bit representation.
def to_uint32(val):
  """Convert signed Python int to 32-bit unsigned representation."""
  if val < 0:
    return val + (1 << data_bitwidth)
  return val


# ========================================================================
# Conv kernel parameters (generated SMALL_DATASET: NI=60, NJ=70, total=4200)
# ========================================================================
# Memory layout:
#   A[0..4199] at addresses 0..4199       (base_A = 0)
#   B[0..4199] at addresses 4200..8399    (base_B = 4200)
#
# Use explicit non-zero data so the numerical check is meaningful.

NI = 60
NJ = 70
total = NI * NJ  # 4200
base_A = 0
base_B = total

A_values = [1 for _ in range(total)]
B_values = [1 for _ in range(total)]

expected_result = sum(a * b for a, b in zip(A_values, B_values))  # 4200

def preload_word(dut, addr, value):
  bank = addr // data_mem_size_per_bank
  bank_addr = addr % data_mem_size_per_bank
  dut.data_mem.memory_wrapper[bank].memory.regs[bank_addr] @= \
      DataType(value, 1)


def preload_conv_data(dut):
  for i in range(total):
    preload_word(dut, base_A + i, A_values[i])
    preload_word(dut, base_B + i, B_values[i])


def make_preload_packets():
  return [
      IntraCgraPktType(0, 0, payload = CgraPayloadType(CMD_STORE_REQUEST,
          data = DataType(A_values[i], 1), data_addr = base_A + i))
      for i in range(total)
  ] + [
      IntraCgraPktType(0, 0, payload = CgraPayloadType(CMD_STORE_REQUEST,
          data = DataType(B_values[i], 1), data_addr = base_B + i))
      for i in range(total)
  ]


def make_preload_probe_packets():
  return [
      IntraCgraPktType(0, 0, payload = CgraPayloadType(CMD_LOAD_REQUEST,
          data_addr = base_A)),
      IntraCgraPktType(0, 0, payload = CgraPayloadType(CMD_LOAD_REQUEST,
          data_addr = base_B)),
  ]


def sim_conv(cmdline_opts, mem_access_is_combinational):
  src_ctrl_pkt = []
  complete_signal_sink_out = []
  src_query_pkt = []

  # Kernel specific parameters matching tmp-generated-instructions.yaml.
  kLoopLowerBound = 0         # GRANT_ONCE #0
  kLoopIncrement = 1          # ADD #1
  kLoopUpperBound = total     # ICMP_EQ #4200
  kCtrlCountPerIter = 5       # compiled_ii: 5
  # RETURN_VALUE is at time_step 12, so the final scheduled cycle is
  # II * (total - 1) + 12.
  kMaxScheduledTimeStep = 12
  kTotalCtrlSteps = kCtrlCountPerIter * \
                    (kLoopUpperBound - kLoopLowerBound - 1) + \
                    kMaxScheduledTimeStep + 1
  kDutTotalCtrlSteps = kTotalCtrlSteps
  kTotalCtrlSteps += int(os.environ.get("CGRA_TOTAL_CTRL_STEPS_EXTRA", "0"))

  from ...validation.script_generator import ScriptFactory
  script_factory = ScriptFactory(path = "validation/test/conv/tmp-generated-instructions.yaml",
                                    CtrlType = CtrlType,
                                    IntraCgraPktType = IntraCgraPktType,
                                    CgraPayloadType = CgraPayloadType,
                                    TileInType = TileInType,
                                    FuOutType = FuOutType,
                                    CMD_CONFIG_input = CMD_CONFIG,
                                    FuInType=FuInType,
                                    ii = kCtrlCountPerIter,
                                    loop_times = kTotalCtrlSteps,
                                    CMD_CONST_input = CMD_CONST,
                                    CMD_CONFIG_COUNT_PER_ITER_input = CMD_CONFIG_COUNT_PER_ITER,
                                    CMD_CONFIG_TOTAL_CTRL_COUNT_input = CMD_CONFIG_TOTAL_CTRL_COUNT,
                                    CMD_CONFIG_PROLOGUE_FU_input = CMD_CONFIG_PROLOGUE_FU,
                                    CMD_CONFIG_PROLOGUE_ROUTING_CROSSBAR_input = CMD_CONFIG_PROLOGUE_ROUTING_CROSSBAR,
                                    CMD_CONFIG_PROLOGUE_FU_CROSSBAR_input = CMD_CONFIG_PROLOGUE_FU_CROSSBAR,
                                    CMD_LAUNCH_input = CMD_LAUNCH,
                                    DataType = DataType,
                                    B1Type = b1,
                                    B2Type = b2,
                                    RegIdxType = RegIdxType,
                                    CtrlAddrType = CtrlAddrType,
                                    DataAddrType = DataAddrType,
                                    num_registers_per_reg_bank = num_registers_per_reg_bank,
                                    arg_map = {
                                        "arg6": base_A,   # base address of array A
                                        "arg7": base_B,   # base address of array B
                                    },
                                    gep_stride = NJ)  # stride for 2D GEP = NJ

  src_opt_pkt0_ = script_factory.makeVectorCGRAPkts()

  # order the packets according to the x (first) and y (second) coordinates
  src_opt_pkt0 = []
  for x, y in src_opt_pkt0_:
    src_opt_pkt0.append(src_opt_pkt0_[(x, y)])

  src_query_pkt = \
      [
      ]

  # RETURN_VALUE is at core 2 (col 2, row 0), so src = 2.
  # RETURN_VALUE sends CMD_COMPLETE with data = expected_result.
  expected_complete_sink_out_pkg = \
      [
          IntraCgraPktType(src = 2, dst = 16,
                           payload = CgraPayloadType(CMD_COMPLETE,
                                                      DataType(expected_result, 1, 0, 0)))
          for _ in range(1)
      ]
  expected_mem_sink_out_pkt = \
      [
      ]

  print("src_opt_pkt0 tiles:", [len(tile_pkts) for tile_pkts in src_opt_pkt0],
        flush=True)

  use_verilator = os.environ.get("CGRA_USE_VERILATOR", "0") == "1"
  preload_pkt_count = 0
  preload_drain_cycles = 0

  if use_verilator:
    src_ctrl_pkt.extend(make_preload_packets())
    preload_pkt_count = 2 * total
    preload_drain_cycles = int(os.environ.get("CGRA_PRELOAD_DRAIN_CYCLES", "10000"))
    if os.environ.get("CGRA_PRELOAD_PROBE", "0") == "1":
      src_ctrl_pkt.extend(make_preload_probe_packets())

  for tile_pkts in src_opt_pkt0:
      src_ctrl_pkt.extend(tile_pkts)

  complete_signal_sink_out.extend(expected_complete_sink_out_pkg)
  complete_signal_sink_out.extend(expected_mem_sink_out_pkt)

  t0 = time.time()
  print("[timing] construct harness", flush=True)
  th = TestHarness(DUT, FunctionUnit, FuList,
                   IntraCgraPktType,
                   cgra_id, x_tiles, y_tiles,
                   ctrl_mem_size, data_mem_size_global,
                   data_mem_size_per_bank, num_banks_per_cgra,
                   num_registers_per_reg_bank,
                   src_ctrl_pkt, kCtrlCountPerIter, kDutTotalCtrlSteps,
                   mem_access_is_combinational,
                   controller2addr_map, idTo2d_map, complete_signal_sink_out,
                   num_cgra_rows, num_cgra_columns,
                   src_query_pkt,
                   preload_pkt_count = preload_pkt_count,
                   preload_drain_cycles = preload_drain_cycles)

  from pymtl3 import DefaultPassGroup
  if use_verilator:
    print(f"[timing] harness constructed in {time.time() - t0:.2f}s",
          flush=True)
    t0 = time.time()
    print("[timing] elaborate", flush=True)
    th.elaborate()
    print(f"[timing] elaborate done in {time.time() - t0:.2f}s", flush=True)
    t0 = time.time()
    print("[timing] Verilator translate/import", flush=True)
    th.dut.set_metadata(VerilogVerilatorImportPass.vl_Wno_list,
                         ['UNSIGNED', 'UNOPTFLAT', 'WIDTH', 'WIDTHCONCAT',
                          'ALWCOMBORDER'])
    verilator_opts = dict(cmdline_opts)
    verilator_opts["test_verilog"] = "zeros"
    th = config_model_with_cmdline_opts(th, verilator_opts, duts = ['dut'])
    print(f"[timing] Verilator import done in {time.time() - t0:.2f}s",
          flush=True)
    t0 = time.time()
    print("[timing] apply DefaultPassGroup", flush=True)
    th.apply(DefaultPassGroup(linetrace=False))
    print(f"[timing] apply done in {time.time() - t0:.2f}s", flush=True)
    t0 = time.time()
    print("[timing] reset", flush=True)
    th.sim_reset()
    print(f"[timing] reset done in {time.time() - t0:.2f}s", flush=True)
  else:
    # Use pure-Python simulation so we can inspect internal signals for
    # debugging. Direct preload avoids spending thousands of cycles on
    # store packets.
    print(f"[timing] harness constructed in {time.time() - t0:.2f}s",
          flush=True)
    t0 = time.time()
    print("[timing] elaborate", flush=True)
    th.elaborate()
    print(f"[timing] elaborate done in {time.time() - t0:.2f}s", flush=True)
    t0 = time.time()
    print("[timing] apply DefaultPassGroup", flush=True)
    th.apply(DefaultPassGroup(linetrace=False))
    print(f"[timing] apply done in {time.time() - t0:.2f}s", flush=True)
    t0 = time.time()
    print("[timing] reset/preload", flush=True)
    th.sim_reset()
    preload_conv_data(th.dut)
    print(f"[timing] reset/preload done in {time.time() - t0:.2f}s",
          flush=True)

  trace_dir = os.path.join(os.path.dirname(__file__), '..', '..', 'trace_output')
  trace_file = os.path.join(trace_dir, 'trace_conv4x4_4x4_Mesh.jsonl')
  trace_enabled = (os.environ.get("CGRA_TRACE_EVERY_CYCLE", "0") == "1") \
      and not use_verilator
  progress_enabled = os.environ.get("CGRA_PROGRESS_LOG", "0") == "1"
  heartbeat_enabled = os.environ.get("CGRA_HEARTBEAT", "1") != "0"
  trace_logger = init_trace_logger(trace_file, x_tiles, y_tiles, "Mesh", cgra_id) \
      if trace_enabled else None

  MAX_CYCLES = int(os.environ.get("CGRA_MAX_CYCLES", "60000"))
  active_tiles = {} if use_verilator else {
      2: th.dut.tile[2], 3: th.dut.tile[3],
      5: th.dut.tile[5], 6: th.dut.tile[6],
      7: th.dut.tile[7], 9: th.dut.tile[9],
      10: th.dut.tile[10], 11: th.dut.tile[11],
  }

  prev_state = {}
  for tid in active_tiles:
    prev_state[tid] = (-1, -1)  # (raddr, rdcur)
  stall_count = 0

  for cycle in range(MAX_CYCLES):
    th.sim_tick()
    if trace_enabled:
      trace_logger.log_cycle(th.dut)
    if int(th.dut.send_to_cpu_pkt.val) & int(th.dut.send_to_cpu_pkt.rdy):
      cpu_pkt = th.dut.send_to_cpu_pkt.msg
      print("cpu_pkt:",
            "cycle", cycle,
            "src", int(cpu_pkt.src),
            "cmd", int(cpu_pkt.payload.cmd),
            "data", int(cpu_pkt.payload.data.payload),
            flush=True)
    if use_verilator:
      if heartbeat_enabled and cycle and cycle % 1000 == 0:
        print(f"[heartbeat] cycle={cycle}/{MAX_CYCLES}", flush=True)
      if th.done():
        print(f"\n=== SIMULATION DONE at cycle {cycle} ===")
        break
      continue
    # Collect state for all active tiles
    cur_state = {}
    for tid, t in active_tiles.items():
      cq = t.const_mem
      cm = t.ctrl_mem
      raddr = int(cm.reg_file.raddr[0])
      rdcur = int(cq.rd_cur)
      cur_state[tid] = (raddr, rdcur)

    if heartbeat_enabled and cycle and cycle % 100 == 0:
      max_times = max(int(t.ctrl_mem.times) for t in active_tiles.values())
      print(f"[heartbeat] cycle={cycle} max_times={max_times}/{kTotalCtrlSteps}",
            flush=True)

    any_changed = any(cur_state[tid] != prev_state[tid] for tid in active_tiles)
    kernel_started = any(
        int(t.ctrl_mem.start_iterate_ctrl) or int(t.ctrl_mem.times)
        for t in active_tiles.values()
    )

    if any_changed or not kernel_started:
      stall_count = 0
    else:
      stall_count += 1
      if stall_count >= 50:
        print(f"\n=== EARLY DEADLOCK DETECTED at cycle {cycle} (stalled {stall_count} cycles) ===")
        break

    if progress_enabled and \
       (any_changed or (cycle < 5) or (cycle % 200 == 0)):
      parts = []
      for tid, t in sorted(active_tiles.items()):
        cm = t.ctrl_mem
        cq = t.const_mem
        raddr = int(cm.reg_file.raddr[0])
        times = int(cm.times)
        start = int(cm.start_iterate_ctrl)
        op = int(cm.send_ctrl.msg.operation) if start else 0
        e = int(t.element_done)
        r = int(t.routing_crossbar_done)
        f = int(t.fu_crossbar_done)
        rdcur = int(cq.rd_cur)
        cv = int(cq.send_const.val)
        cr = int(cq.send_const.rdy)
        cc = int(t.const_consumed)
        pf = int(cm.prologue_count_outport_fu)
        changed = "*" if cur_state[tid] != prev_state[tid] else " "
        parts.append(f"t{tid}{changed}a{raddr}:0x{op:02x}t{times}e{e}r{r}f{f}q{rdcur}c{cv}{cr}{cc}p{pf}")
      print(f"[cyc={cycle:4d}] {' | '.join(parts)}")

    prev_state = cur_state

    if th.done():
      print(f"\n=== SIMULATION DONE at cycle {cycle} ===")
      break

  if not th.done() and use_verilator:
    print(f"\n=== TIMEOUT after {MAX_CYCLES} cycles ===")

  if not th.done() and not use_verilator:
    print(f"\n=== DEADLOCK after {MAX_CYCLES} cycles ===")
    # Print final state of all active tiles (1D flat index in CgraRTL)
    tile_map = {
        "tile2": th.dut.tile[2], "tile3": th.dut.tile[3],
        "tile5": th.dut.tile[5], "tile6": th.dut.tile[6],
        "tile7": th.dut.tile[7], "tile9": th.dut.tile[9],
        "tile10": th.dut.tile[10], "tile11": th.dut.tile[11],
    }
    dir_names = ["N", "S", "W", "E"]
    for name, t in tile_map.items():
      cq = t.const_mem
      cm = t.ctrl_mem
      raddr = int(cm.reg_file.raddr[0])
      times = int(cm.times)
      op = int(cm.send_ctrl.msg.operation)
      rdcur = int(cq.rd_cur)
      wrcur = int(cq.wr_cur)
      cval = int(cq.send_const.msg.payload)
      cv = int(cq.send_const.val)
      cr = int(cq.send_const.rdy)
      cp = int(cq.ctrl_proceed)
      ed = int(t.element_done)
      rd = int(t.routing_crossbar_done)
      fd = int(t.fu_crossbar_done)
      print(f"  {name}: raddr={raddr} op=0x{op:02x} times={times} | rd_cur={rdcur} wr_cur={wrcur} const={cval}.v={cv}.rdy={cr} | "
            f"ctrl_proceed={cp} e={ed} r={rd} f={fd}")
      # Show channel states (recv_data val/rdy on each port)
      ch_parts = []
      for pi in range(4):
        rv = int(t.recv_data[pi].val)
        rr = int(t.recv_data[pi].rdy)
        sv = int(t.send_data[pi].val)
        sr = int(t.send_data[pi].rdy)
        ch_parts.append(f"{dir_names[pi]}:rv{rv}rr{rr}sv{sv}sr{sr}")
      print(f"          channels: {' | '.join(ch_parts)}")
      # Show routing crossbar outport config and prologue counters
      rxbar = t.routing_crossbar
      rxbar_out = []
      for oi in range(len(rxbar.crossbar_outport)):
        rxbar_out.append(int(rxbar.crossbar_outport[oi]))
      print(f"          routing_xbar outport={rxbar_out} recv_opt.val={int(rxbar.recv_opt.val)} recv_opt.rdy={int(rxbar.recv_opt.rdy)}")
      # Prologue counters for current addr
      prologue_parts = []
      for inp in range(4):
        pc = int(rxbar.prologue_counter[raddr][inp])
        pcfg = int(rxbar.prologue_count_wire[raddr][inp])
        if pcfg > 0:
          prologue_parts.append(f"in{inp}:{pc}/{pcfg}")
      if prologue_parts:
        print(f"          routing prologue[addr{raddr}]: {' '.join(prologue_parts)}")
      consts = []
      for idx in range(wrcur):
        consts.append(int(cq.reg_file.regs[idx].payload))
      if consts:
        print(f"          const_queue: {consts}")

  if trace_enabled:
    close_trace_logger()

  cycles = cycle + 1
  print("\n\n\ncycles: ", cycles)
  assert th.done(), f"conv4x4 did not complete in {cycles} cycles"


def test_homogeneous_4x4_conv_combinational_mem_access(cmdline_opts):
  sim_conv(cmdline_opts, mem_access_is_combinational = True)
