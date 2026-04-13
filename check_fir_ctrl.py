import sys, io
sys.path.insert(0, '/home/x/shiran/VectorCGRA')
import os
os.chdir('/home/x/shiran/VectorCGRA')
from pymtl3 import *
from lib.messages import *
from lib.opt_type import *

data_bitwidth = 32
num_fu_inports = 4
num_fu_outports = 2
num_tile_inports = 4
num_tile_outports = 4
num_registers_per_reg_bank = 8

TileInType = mk_bits(clog2(num_tile_inports + num_fu_inports + 1))
FuInType = mk_bits(clog2(num_fu_inports + 1))
FuOutType = mk_bits(clog2(num_fu_outports + 1))
DataType = mk_data(data_bitwidth, 1)
CtrlType = mk_ctrl(num_fu_inports, num_fu_outports, num_tile_inports, num_tile_outports, num_registers_per_reg_bank)
DataAddrType = mk_bits(clog2(128))
CtrlAddrType = mk_bits(clog2(16))
RegIdxType = mk_bits(clog2(num_registers_per_reg_bank))

num_cgra_columns = 4
num_cgra_rows = 1
num_tiles = 16
num_rd_tiles = 7

CgraPayloadType = mk_cgra_payload(DataType, DataAddrType, CtrlType, CtrlAddrType)
IntraCgraPktType = mk_intra_cgra_pkt(num_cgra_columns, num_cgra_rows, num_tiles, CgraPayloadType)

old_stdout = sys.stdout
sys.stdout = io.StringIO()
from validation.script_generator import ScriptFactory
sf = ScriptFactory(
    path='validation/test/fir4x4.yaml',
    CtrlType=CtrlType,
    IntraCgraPktType=IntraCgraPktType,
    CgraPayloadType=CgraPayloadType,
    TileInType=TileInType,
    FuOutType=FuOutType,
    CMD_CONFIG_input=CMD_CONFIG,
    FuInType=FuInType,
    ii=5,
    loop_times=20,
    CMD_CONST_input=CMD_CONST,
    CMD_CONFIG_COUNT_PER_ITER_input=CMD_CONFIG_COUNT_PER_ITER,
    CMD_CONFIG_TOTAL_CTRL_COUNT_input=CMD_CONFIG_TOTAL_CTRL_COUNT,
    CMD_CONFIG_PROLOGUE_FU_input=CMD_CONFIG_PROLOGUE_FU,
    CMD_CONFIG_PROLOGUE_ROUTING_CROSSBAR_input=CMD_CONFIG_PROLOGUE_ROUTING_CROSSBAR,
    CMD_CONFIG_PROLOGUE_FU_CROSSBAR_input=CMD_CONFIG_PROLOGUE_FU_CROSSBAR,
    CMD_LAUNCH_input=CMD_LAUNCH,
    DataType=DataType,
    B1Type=b1,
    B2Type=b2,
    RegIdxType=RegIdxType,
    CtrlAddrType=CtrlAddrType,
    DataAddrType=DataAddrType,
    num_registers_per_reg_bank=num_registers_per_reg_bank,
)
pkts = sf.makeVectorCGRAPkts()
sys.stdout = old_stdout

# Print routing config for NO_PROD steps in FIR
targets = [(2,3), (3,4), (6,2), (7,3), (8,4), (10,1), (11,2)]
for (x,y), pkt_list in sorted(pkts.items()):
    tid = x + y * 4
    for pkt in pkt_list:
        cmd = int(pkt.payload.cmd)
        if cmd == int(CMD_CONFIG):
            ctrl = pkt.payload.ctrl
            addr = int(pkt.payload.ctrl_addr)
            if (tid, addr) in targets:
                routing = [int(ctrl.routing_xbar_outport[i]) for i in range(8)]
                fu_in = [int(ctrl.fu_in[i]) for i in range(4)]
                opt = int(ctrl.operation)
                rr = [int(ctrl.read_reg_towards[i]) for i in range(4)]
                print(f'Tile {tid} addr={addr}: opt=0x{opt:02x} routing={routing} fu_in={fu_in} rr={rr}')
