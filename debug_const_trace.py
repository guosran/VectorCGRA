"""
Debug script: Run conv test manually with cycle-by-cycle const queue tracing for tile 7.
"""
import sys, os
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))

import importlib, types

# Create a dummy top-level package so relative imports work
import VectorCGRA as _pkg  # __init__.py at project root

from pymtl3 import *
from pymtl3.passes.backends.verilog import VerilogVerilatorImportPass
from pymtl3.stdlib.test_utils import config_model_with_cmdline_opts

# We need to run the test's imports. Easiest: exec the test module.
# But since it uses relative imports, let's just import from the test.
# Actually, the simplest is to copy the test's approach and import from
# the package structure. Since VectorCGRA/ has __init__.py, it's a package.

# The test file is at cgra/test/CgraRTL_conv4x4_test_from_yaml.py
# and does: from ..CgraRTL import CgraRTL  etc.
# We can import the test module
import cgra.test.CgraRTL_conv4x4_test_from_yaml as test_mod

# ---- Same parameters as the test ----
FuList = [AdderRTL, MulRTL, DivRTL, GepRTL, LogicRTL, ShifterRTL, PhiRTL, CompRTL, GrantRTL, MemUnitRTL, SelRTL, RetRTL]
x_tiles = 4
y_tiles = 4
data_bitwidth = 32
num_tile_inports = 4
num_tile_outports = 4
num_fu_inports = 4
num_fu_outports = 2
ctrl_mem_size = 6
data_mem_size_global = 128
data_mem_size_per_bank = 16
num_banks_per_cgra = 2
num_cgra_columns = 4
num_cgra_rows = 1
num_cgras = num_cgra_columns * num_cgra_rows
num_tiles = x_tiles * y_tiles
num_rd_tiles = x_tiles + y_tiles - 1
per_cgra_data_size = int(data_mem_size_global / num_cgras)
num_registers_per_reg_bank = 8

TileInType = mk_bits(clog2(num_tile_inports + num_fu_inports + 1))
FuInType = mk_bits(clog2(num_fu_inports + 1))
FuOutType = mk_bits(clog2(num_fu_outports + 1))
addr_nbits = clog2(data_mem_size_global)
DataAddrType = mk_bits(addr_nbits)
RegIdxType = mk_bits(clog2(num_registers_per_reg_bank))
DataType = mk_data(data_bitwidth, 1)
CtrlType = mk_ctrl(num_fu_inports, num_fu_outports, num_tile_inports, num_tile_outports, num_registers_per_reg_bank)
CtrlAddrType = mk_bits(clog2(ctrl_mem_size))
CgraPayloadType = mk_cgra_payload(DataType, DataAddrType, CtrlType, CtrlAddrType)
InterCgraPktType = mk_inter_cgra_pkt(num_cgra_columns, num_cgra_rows, num_tiles, num_rd_tiles, CgraPayloadType)
IntraCgraPktType = mk_intra_cgra_pkt(num_cgra_columns, num_cgra_rows, num_tiles, CgraPayloadType)

NI = 2; NJ = 3; total = 6; base_A = 0; base_B = 6
A_values = [1, 2, 3, 4, 5, 6]; B_values = [1]*6
expected_result = sum(a*b for a, b in zip(A_values, B_values))

cgra_id = 0
controller2addr_map = {}
for i in range(num_cgras):
    controller2addr_map[i] = [i*per_cgra_data_size, (i+1)*per_cgra_data_size - 1]
idTo2d_map = {0: [0,0], 1: [1,0], 2: [2,0], 3: [3,0]}

preload_data = [
    IntraCgraPktType(0, 0, payload=CgraPayloadType(CMD_STORE_REQUEST, data=DataType(A_values[i], 1), data_addr=base_A+i))
    for i in range(total)
] + [
    IntraCgraPktType(0, 0, payload=CgraPayloadType(CMD_STORE_REQUEST, data=DataType(B_values[i], 1), data_addr=base_B+i))
    for i in range(total)
]

kCtrlCountPerIter = 5
kTotalCtrlSteps = kCtrlCountPerIter * total + 10

from validation.script_generator import ScriptFactory
script_factory = ScriptFactory(
    path="validation/test/conv/conv_small.yaml",
    CtrlType=CtrlType, IntraCgraPktType=IntraCgraPktType,
    CgraPayloadType=CgraPayloadType, TileInType=TileInType,
    FuOutType=FuOutType, CMD_CONFIG_input=CMD_CONFIG,
    FuInType=FuInType, ii=kCtrlCountPerIter, loop_times=kTotalCtrlSteps,
    CMD_CONST_input=CMD_CONST,
    CMD_CONFIG_COUNT_PER_ITER_input=CMD_CONFIG_COUNT_PER_ITER,
    CMD_CONFIG_TOTAL_CTRL_COUNT_input=CMD_CONFIG_TOTAL_CTRL_COUNT,
    CMD_CONFIG_PROLOGUE_FU_input=CMD_CONFIG_PROLOGUE_FU,
    CMD_CONFIG_PROLOGUE_ROUTING_CROSSBAR_input=CMD_CONFIG_PROLOGUE_ROUTING_CROSSBAR,
    CMD_CONFIG_PROLOGUE_FU_CROSSBAR_input=CMD_CONFIG_PROLOGUE_FU_CROSSBAR,
    CMD_LAUNCH_input=CMD_LAUNCH,
    DataType=DataType, B1Type=b1, B2Type=b2,
    RegIdxType=RegIdxType, CtrlAddrType=CtrlAddrType, DataAddrType=DataAddrType,
    num_registers_per_reg_bank=num_registers_per_reg_bank,
    arg_map={"arg6": base_A, "arg7": base_B}, gep_stride=NJ,
)

src_opt_pkt0_ = script_factory.makeVectorCGRAPkts()
src_opt_pkt0 = []
for x, y in src_opt_pkt0_:
    src_opt_pkt0.append(src_opt_pkt0_[(x, y)])

src_ctrl_pkt = list(preload_data)
for tile_pkts in src_opt_pkt0:
    src_ctrl_pkt.extend(tile_pkts)

expected_complete_sink_out_pkg = [
    IntraCgraPktType(src=2, dst=16, payload=CgraPayloadType(CMD_COMPLETE, DataType(expected_result, 0, 0, 0)))
]

# ---- Build test harness (same as in test file) ----
class TestHarness(Component):
    def construct(s, DUT, FunctionUnit, FuList, CtrlPktType,
                  cgra_id, width, height, ctrl_mem_size,
                  data_mem_size_global, data_mem_size_per_bank,
                  num_banks_per_cgra, num_registers_per_reg_bank,
                  src_ctrl_pkt, kCtrlCountPerIter, kTotalCtrlSteps,
                  mem_access_is_combinational, controller2addr_map, idTo2d_map,
                  complete_signal_sink_out,
                  multi_cgra_rows, multi_cgra_columns, src_query_pkt):
        CgraPayloadType = CtrlPktType.get_field_type(kAttrPayload)
        DataType = CgraPayloadType.get_field_type(kAttrData)
        DataAddrType = mk_bits(clog2(data_mem_size_global))
        s.num_tiles = width * height
        s.src_ctrl_pkt = TestSrcRTL(CtrlPktType, src_ctrl_pkt)
        s.src_query_pkt = TestSrcRTL(CtrlPktType, src_query_pkt)
        s.dut = DUT(CgraPayloadType, multi_cgra_rows, multi_cgra_columns,
                    width, height, ctrl_mem_size, data_mem_size_global,
                    data_mem_size_per_bank, num_banks_per_cgra,
                    num_registers_per_reg_bank, kCtrlCountPerIter, kTotalCtrlSteps,
                    mem_access_is_combinational, FunctionUnit, FuList, "Mesh",
                    controller2addr_map, idTo2d_map, is_multi_cgra=False)
        cmp_fn = lambda a, b: a.payload.data == b.payload.data and a.payload.cmd == b.payload.cmd
        s.complete_signal_sink_out = TestSinkRTL(CtrlPktType, complete_signal_sink_out, cmp_fn=cmp_fn)
        s.dut.cgra_id //= cgra_id
        s.complete_signal_sink_out.recv //= s.dut.send_to_cpu_pkt
        complete_count_value = sum(1 for pkt in complete_signal_sink_out if pkt.payload.cmd == CMD_COMPLETE)
        CompleteCountType = mk_bits(clog2(complete_count_value + 1))
        s.complete_count = Wire(CompleteCountType)
        @update
        def conditional_issue_ctrl_or_query():
            s.dut.recv_from_cpu_pkt.val @= s.src_ctrl_pkt.send.val
            s.dut.recv_from_cpu_pkt.msg @= s.src_ctrl_pkt.send.msg
            s.src_ctrl_pkt.send.rdy @= 0
            s.src_query_pkt.send.rdy @= 0
            if (s.complete_count >= complete_count_value) & ~s.src_ctrl_pkt.send.val:
                s.dut.recv_from_cpu_pkt.val @= s.src_query_pkt.send.val
                s.dut.recv_from_cpu_pkt.msg @= s.src_query_pkt.send.msg
                s.src_query_pkt.send.rdy @= s.dut.recv_from_cpu_pkt.rdy
            else:
                s.src_ctrl_pkt.send.rdy @= s.dut.recv_from_cpu_pkt.rdy
        @update_ff
        def update_complete_count():
            if s.reset:
                s.complete_count <<= 0
            else:
                if s.complete_signal_sink_out.recv.val & s.complete_signal_sink_out.recv.rdy & (s.complete_count < complete_count_value):
                    s.complete_count <<= s.complete_count + CompleteCountType(1)
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
        return s.src_ctrl_pkt.done() and s.src_query_pkt.done() and s.complete_signal_sink_out.done()
    def line_trace(s):
        return s.dut.line_trace()

print("Building test harness...")
th = TestHarness(CgraRTL, FlexibleFuRTL, FuList, IntraCgraPktType,
                 cgra_id, x_tiles, y_tiles, ctrl_mem_size, data_mem_size_global,
                 data_mem_size_per_bank, num_banks_per_cgra, num_registers_per_reg_bank,
                 src_ctrl_pkt, kCtrlCountPerIter, kTotalCtrlSteps,
                 True, controller2addr_map, idTo2d_map,
                 expected_complete_sink_out_pkg,
                 num_cgra_rows, num_cgra_columns, [])

print("Elaborating...")
th.elaborate()
th.dut.set_metadata(VerilogVerilatorImportPass.vl_Wno_list,
                    ['UNSIGNED', 'UNOPTFLAT', 'WIDTH', 'WIDTHCONCAT', 'ALWCOMBORDER'])

print("Applying passes...")
from pymtl3 import DefaultPassGroup
th.apply(DefaultPassGroup(linetrace=True))

print("Resetting...")
th.sim_reset()

# Tile 7 = row 1, col 3 = tiles[1][3]
tile7 = th.dut.tile[1][3]
tile11 = th.dut.tile[2][3]
tile10 = th.dut.tile[2][2]

# OPT_SYMBOL_DICT might help
try:
    from lib.opt_type import OPT_SYMBOL_DICT
except:
    OPT_SYMBOL_DICT = {}

MAX_CYCLES = 1400

print("\n" + "=" * 100)
print(f"Starting simulation for {MAX_CYCLES} cycles, tracking tile 7 const queue")
print("=" * 100)

prev_raddr7 = -1
prev_rdcur7 = -1

for cycle in range(MAX_CYCLES):
    th.sim_tick()
    
    # Get tile 7 state
    t7_cq = tile7.const_mem
    t7_cm = tile7.ctrl_mem
    
    raddr7 = int(t7_cm.reg_file.raddr[0])
    rdcur7 = int(t7_cq.rd_cur)
    wrcur7 = int(t7_cq.wr_cur)
    const_val7 = int(t7_cq.send_const.msg.payload)
    const_sval7 = int(t7_cq.send_const.val)
    const_srdy7 = int(t7_cq.send_const.rdy)
    ctrl_proceed7 = int(t7_cq.ctrl_proceed)
    times7 = int(t7_cm.times)
    start7 = int(t7_cm.start_iterate_ctrl)
    op7 = int(t7_cm.send_ctrl.msg.operation) if start7 else 0
    elem_done7 = int(tile7.element_done)
    rout_done7 = int(tile7.routing_crossbar_done)
    fu_xbar_done7 = int(tile7.fu_crossbar_done)
    ctrl_rdy7 = int(t7_cm.send_ctrl.rdy)
    ctrl_val7 = int(t7_cm.send_ctrl.val)
    prologue_fu7 = int(t7_cm.prologue_count_outport_fu)
    
    # Print on const queue transitions or every N cycles
    rdcur_changed = (rdcur7 != prev_rdcur7)
    raddr_changed = (raddr7 != prev_raddr7)
    
    if rdcur_changed or raddr_changed or (cycle < 5) or (cycle % 100 == 0):
        op_name = OPT_SYMBOL_DICT.get(op7, f"0x{op7:02x}")
        print(f"[cyc={cycle:4d}] tile7: raddr={raddr7} op={op_name} times={times7} start={start7} | "
              f"rd_cur={rdcur7} wr_cur={wrcur7} const_val={const_val7} const_v={const_sval7} const_rdy={const_srdy7} | "
              f"ctrl_proceed={ctrl_proceed7} ctrl_rdy={ctrl_rdy7} ctrl_val={ctrl_val7} | "
              f"elem_done={elem_done7} rout_done={rout_done7} fuxbar_done={fu_xbar_done7} | "
              f"prologue_fu={prologue_fu7}")
    
    prev_raddr7 = raddr7
    prev_rdcur7 = rdcur7
    
    if th.done():
        print(f"\n=== SIMULATION DONE at cycle {cycle} ===")
        break

if not th.done():
    print(f"\n=== SIMULATION DID NOT COMPLETE after {MAX_CYCLES} cycles (deadlock?) ===")
    
    # Print final state of all active tiles
    print("\n--- Final state of all tiles ---")
    tile_map = {
        "tile2": th.dut.tile[0][2],
        "tile3": th.dut.tile[0][3],
        "tile5": th.dut.tile[1][1],
        "tile6": th.dut.tile[1][2],
        "tile7": th.dut.tile[1][3],
        "tile9": th.dut.tile[2][1],
        "tile10": th.dut.tile[2][2],
        "tile11": th.dut.tile[2][3],
    }
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
        op_name = OPT_SYMBOL_DICT.get(op, f"0x{op:02x}")
        print(f"  {name}: raddr={raddr} op={op_name} times={times} | rd_cur={rdcur} wr_cur={wrcur} const={cval}.v={cv}.rdy={cr} | "
              f"ctrl_proceed={cp} elem_done={ed} rout_done={rd} fuxbar_done={fd}")
        # Print const queue contents
        consts = []
        for idx in range(wrcur):
            consts.append(int(cq.reg_file.regs[idx].payload))
        if consts:
            print(f"          const_queue contents: {consts}")
