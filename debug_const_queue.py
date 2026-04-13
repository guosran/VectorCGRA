#!/usr/bin/env python3
"""
Debug script to trace the const queue behavior for tile7 in the conv kernel.
Prints const queue state (rd_cur, wr_cur, entries) and ctrl_proceed signal
for the first N cycles to identify desynchronization.
"""
import sys, os
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))

# Need to import all the same things the test uses
from pymtl3 import *
from pymtl3.stdlib.test_utils import *
import yaml

from lib.util.common import *
from lib.messages import *
from lib.opt_type import *
from lib.cmd_type import *
from fu.flexible.FlexibleFuRTL import FlexibleFuRTL
from fu.single.AdderRTL import AdderRTL
from fu.single.MulRTL import MulRTL
from fu.single.DivRTL import DivRTL
from fu.single.GepRTL import GepRTL
from fu.single.LogicRTL import LogicRTL
from fu.single.ShifterRTL import ShifterRTL
from fu.single.PhiRTL import PhiRTL
from fu.single.CompRTL import CompRTL
from fu.single.GrantRTL import GrantRTL
from fu.single.MemUnitRTL import MemUnitRTL
from fu.single.SelRTL import SelRTL
from fu.single.RetRTL import RetRTL
from cgra.MeshMultiCgraRTL import MeshMultiCgraRTL
from validation.script_generator import ScriptFactory

FunctionUnit = FlexibleFuRTL

# Import the test harness class  
from cgra.test.CgraRTL_conv4x4_test_from_yaml import TestHarness

cmdline_opts = {
    'dump_vcd': '',
    'test_verilog': '',
    'dump_vtb': '',
    'trace': False,  # Disable line trace for speed
    'max_cycles': 500,
}

# Build the test harness (same as the test)
mem_access_is_combinational = True

# -- parameters from the test --
yaml_path = os.path.join(os.path.dirname(__file__), 'validation', 'test', 'conv', 'conv_small.yaml')
with open(yaml_path, 'r') as f:
    config = yaml.safe_load(f)

# ... (need to replicate setup)
# Actually let's just import and call the setup differently
# Let's build th directly

NI = 2; NJ = 3; total = NI * NJ
base_A = 0; base_B = total
gep_stride = NJ
expected_result = sum((i+1)*1 for i in range(total))  # 21

print(f"NI={NI}, NJ={NJ}, total={total}, base_A={base_A}, base_B={base_B}, gep_stride={gep_stride}")
print(f"Expected result: {expected_result}")

x_tiles = 4; y_tiles = 4
num_cgra_rows = 1; num_cgra_columns = 1
cgra_id = 0
ctrl_mem_size = 6
data_mem_size_global = 16
data_mem_size_per_bank = 16
num_banks_per_cgra = 2
num_registers_per_reg_bank = 4
kCtrlCountPerIter = 5
kTotalCtrlSteps = 40

CtrlAddrType = mk_bits(clog2(ctrl_mem_size))
num_mesh_ports = 8
num_tile_inports = num_mesh_ports
num_tile_outports = num_mesh_ports
DataType = mk_data(32, 1, 1, 1)
CmdType = mk_bits(CMD_BITS)
CtrlType = mk_ctrl(num_tile_inports, num_tile_outports, num_registers_per_reg_bank)

NocPktType = mk_multi_cgra_noc_pkt(nrouters=num_cgra_rows*num_cgra_columns,
                                    addr_nbits=clog2(x_tiles*y_tiles),
                                    data_nbits=32,
                                    predicate_nbits=1,
                                    ctrl_actions=ctrl_mem_size,
                                    ctrl_mem_size=ctrl_mem_size,
                                    num_tile_inports=num_tile_inports,
                                    num_tile_outports=num_tile_outports,
                                    num_registers_per_reg_bank=num_registers_per_reg_bank)
CgraPayloadType = NocPktType.get_field_type('payload')
IntraCgraPktType = mk_intra_cgra_pkt(x_tiles * y_tiles,
                                      payload_nbits=NocPktType.get_field_type('payload').nbits)

controller2addr_map = {0: [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15]}
idTo2d_map = {}
for r in range(y_tiles):
    for c in range(x_tiles):
        tile_id = r * x_tiles + c
        idTo2d_map[tile_id] = (c, r)

FuList = [AdderRTL, MulRTL, DivRTL, GepRTL, LogicRTL, ShifterRTL, PhiRTL, CompRTL,
          GrantRTL, MemUnitRTL, SelRTL, RetRTL]

arg_map = {'arg6': base_A, 'arg7': base_B}

factory = ScriptFactory(yaml_path, CtrlType, IntraCgraPktType, CgraPayloadType,
                        DataType, CtrlAddrType, cgra_id, idTo2d_map, arg_map, gep_stride)
src_opt_pkt0, complete_expected = factory.makeVectorCGRAPkts()

# Preload data memory
preload_data = []
for i in range(total):
    pkt = IntraCgraPktType(0, 0, payload=CgraPayloadType(CMD_STORE_REQUEST,
                            data=DataType(i+1, 1, 0, 0),
                            data_addr=mk_bits(clog2(data_mem_size_per_bank))(base_A + i)))
    preload_data.append([pkt])
for i in range(total):
    pkt = IntraCgraPktType(0, 0, payload=CgraPayloadType(CMD_STORE_REQUEST,
                            data=DataType(1, 1, 0, 0),
                            data_addr=mk_bits(clog2(data_mem_size_per_bank))(base_B + i)))
    preload_data.append([pkt])

src_ctrl_pkt = []
complete_signal_sink_out = []
src_query_pkt = []

expected_complete_sink_out_pkg = [
    IntraCgraPktType(src=2, dst=16,
                     payload=CgraPayloadType(CMD_COMPLETE, DataType(expected_result, 0, 0, 0)))
]

for activation in preload_data:
    src_ctrl_pkt.extend(activation)
for tile_pkts in src_opt_pkt0:
    src_ctrl_pkt.extend(tile_pkts)

complete_signal_sink_out.extend(expected_complete_sink_out_pkg)

DUT = MeshMultiCgraRTL

th = TestHarness(DUT, FunctionUnit, FuList,
                 IntraCgraPktType,
                 cgra_id, x_tiles, y_tiles,
                 ctrl_mem_size, data_mem_size_global,
                 data_mem_size_per_bank, num_banks_per_cgra,
                 num_registers_per_reg_bank,
                 src_ctrl_pkt, kCtrlCountPerIter, kTotalCtrlSteps,
                 mem_access_is_combinational,
                 controller2addr_map, idTo2d_map, complete_signal_sink_out,
                 num_cgra_rows, num_cgra_columns,
                 src_query_pkt)

th.elaborate()
th.dut.set_metadata(VerilogVerilatorImportPass.vl_Wno_list,
                     ['UNSIGNED', 'UNOPTFLAT', 'WIDTH', 'WIDTHCONCAT',
                      'ALWCOMBORDER'])
th = config_model_with_cmdline_opts(th, cmdline_opts, duts=['dut'])
th.apply(DefaultPassGroup())
th.sim_reset()

# Now step through cycles and print tile7 const queue state
tile7 = th.dut.tile[7]
max_cycles = 300

for cycle in range(max_cycles):
    th.sim_tick()
    
    # Get tile7 const queue state
    cq = tile7.const_mem
    cm = tile7.ctrl_mem
    elem = tile7.element
    
    rd_cur = int(cq.rd_cur)
    wr_cur = int(cq.wr_cur)
    ctrl_proceed = int(cq.ctrl_proceed)
    send_const_val = int(cq.send_const.val)
    send_const_rdy = int(cq.send_const.rdy)
    send_const_payload = int(cq.send_const.msg.payload)
    
    raddr = int(cm.reg_file.raddr[0])
    times = int(cm.times)
    send_ctrl_val = int(cm.send_ctrl.val)
    send_ctrl_rdy = int(cm.send_ctrl.rdy)
    
    # Print on interesting events
    if ctrl_proceed or (send_const_val and send_const_rdy) or cycle < 50 or (cycle % 10 == 0):
        # Get op name
        if hasattr(elem, 'recv_opt') and int(elem.recv_opt.val):
            op_code = int(elem.recv_opt.msg.operation)
        else:
            op_code = -1
        
        # Get const queue entries
        entries = []
        for i in range(min(6, ctrl_mem_size)):
            try:
                val = int(cq.reg_file.regs[i].payload)
                v = int(cq.reg_file.regs[i].val) if hasattr(cq.reg_file.regs[i], 'val') else '?'
                entries.append(f"{val}")
            except:
                entries.append("?")
        
        print(f"cyc={cycle:4d} tile7: raddr={raddr} times={times:3d} op=0x{op_code:02x} | "
              f"const_q: rd={rd_cur} wr={wr_cur} val={send_const_val} rdy={send_const_rdy} "
              f"payload={send_const_payload} proceed={ctrl_proceed} | "
              f"ctrl: val={send_ctrl_val} rdy={send_ctrl_rdy} | "
              f"entries=[{','.join(entries)}]")

print("\nDone.")
