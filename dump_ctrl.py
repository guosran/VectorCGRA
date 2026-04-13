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
addr_nbits = clog2(128)
DataAddrType = mk_bits(addr_nbits)
CtrlAddrType = mk_bits(clog2(16))
RegIdxType = mk_bits(clog2(num_registers_per_reg_bank))

num_cgra_columns = 4
num_cgra_rows = 1
num_tiles = 16
num_rd_tiles = 7

CgraPayloadType = mk_cgra_payload(DataType, DataAddrType, CtrlType, CtrlAddrType)
InterCgraPktType = mk_inter_cgra_pkt(num_cgra_columns, num_cgra_rows, num_tiles, num_rd_tiles, CgraPayloadType)
IntraCgraPktType = mk_intra_cgra_pkt(num_cgra_columns, num_cgra_rows, num_tiles, CgraPayloadType)

# Suppress script_generator debug output
old_stdout = sys.stdout
sys.stdout = io.StringIO()

from validation.script_generator import ScriptFactory
sf = ScriptFactory(
    path="validation/test/spmv.yaml",
    CtrlType=CtrlType,
    IntraCgraPktType=IntraCgraPktType,
    CgraPayloadType=CgraPayloadType,
    TileInType=TileInType,
    FuOutType=FuOutType,
    CMD_CONFIG_input=CMD_CONFIG,
    FuInType=FuInType,
    ii=15,
    loop_times=70,
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

opt_names = {
    0x54:'PHI_START', 0x19:'ADD_CONST', 0x58:'GRT_ONCE_C',
    0x10:'GRT_PRED', 0x5b:'LT_CONST', 0x1f:'PAS',
    0x5d:'AND_CONST', 0x21:'EQ_CONST', 0x0b:'NOT',
    0x0c:'LD', 0x0d:'STR', 0x3a:'STR_CONST',
    0x40:'RET_VOID', 0x50:'CONST', 0x01:'NAH',
    0x02:'ADD', 0x04:'MUL', 0x5e:'OR_CONST',
}

out = open('/home/x/shiran/VectorCGRA/ctrl_dump.txt', 'w')
for (x,y), pkt_list in sorted(pkts.items()):
    tile_id = x + y * 4
    out.write(f"\n=== Tile {tile_id} (col={x}, row={y}) ===\n")
    for pkt in pkt_list:
        cmd = int(pkt.payload.cmd)
        if cmd == int(CMD_CONFIG):
            ctrl = pkt.payload.ctrl
            addr = int(pkt.payload.ctrl_addr)
            opt = int(ctrl.operation)
            fu_in = [int(ctrl.fu_in[i]) for i in range(4)]
            routing = [int(ctrl.routing_xbar_outport[i]) for i in range(8)]
            fu_xbar = [int(ctrl.fu_xbar_outport[i]) for i in range(8)]
            read_reg = [int(ctrl.read_reg_towards[i]) for i in range(4)]
            write_reg = [int(ctrl.write_reg_from[i]) for i in range(4)]
            write_idx = [int(ctrl.write_reg_idx[i]) for i in range(4)]
            read_idx = [int(ctrl.read_reg_idx[i]) for i in range(4)]
            opt_name = opt_names.get(opt, f'0x{opt:02x}')
            out.write(f"  addr={addr:2d}: {opt_name:12s} fu_in={fu_in} routing={routing} fu_xbar={fu_xbar} rr={read_reg} wr={write_reg} wi={write_idx} ri={read_idx}\n")
        elif cmd == int(CMD_CONST):
            out.write(f"  CONST: data={int(pkt.payload.data.payload)}, addr={int(pkt.payload.ctrl_addr)}\n")
        elif cmd == int(CMD_LAUNCH):
            out.write(f"  LAUNCH\n")
        elif cmd == int(CMD_CONFIG_COUNT_PER_ITER):
            out.write(f"  CONFIG_COUNT_PER_ITER\n")
        elif cmd == int(CMD_CONFIG_TOTAL_CTRL_COUNT):
            out.write(f"  CONFIG_TOTAL_CTRL_COUNT\n")
        elif cmd == int(CMD_CONFIG_PROLOGUE_FU):
            addr = int(pkt.payload.ctrl_addr)
            out.write(f"  PROLOGUE_FU addr={addr}\n")
        elif cmd == int(CMD_CONFIG_PROLOGUE_FU_CROSSBAR):
            addr = int(pkt.payload.ctrl_addr)
            out.write(f"  PROLOGUE_FU_XBAR addr={addr}\n")
        elif cmd == int(CMD_CONFIG_PROLOGUE_ROUTING_CROSSBAR):
            addr = int(pkt.payload.ctrl_addr)
            routing = [int(pkt.payload.ctrl.routing_xbar_outport[i]) for i in range(8)]
            out.write(f"  PROLOGUE_ROUTING_XBAR addr={addr} routing={routing}\n")
        else:
            out.write(f"  UNKNOWN_CMD cmd={cmd}\n")
out.close()
print("Done", file=sys.stderr)
