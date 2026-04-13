import sys
sys.path.insert(0, '/home/x/shiran/VectorCGRA')
from pymtl3.datatypes import b1, b2
from pymtl3 import *
from lib.messages import *
from lib.opt_type import *
from lib.util.common import *

data_bitwidth = 32
num_fu_inports = 4
num_fu_outports = 2
num_tile_inports = 4
num_tile_outports = 4
ctrl_mem_size = 6
data_mem_size_global = 128
num_cgra_columns = 4
num_cgra_rows = 1
num_tiles = 16
num_registers_per_reg_bank = 8
TileInType = mk_bits(clog2(num_tile_inports + num_fu_inports + 1))
FuInType = mk_bits(clog2(num_fu_inports + 1))
FuOutType = mk_bits(clog2(num_fu_outports + 1))
DataAddrType = mk_bits(clog2(data_mem_size_global))
RegIdxType = mk_bits(clog2(num_registers_per_reg_bank))
DataType = mk_data(data_bitwidth, 1)
CtrlType = mk_ctrl(num_fu_inports, num_fu_outports, num_tile_inports, num_tile_outports, num_registers_per_reg_bank)
CtrlAddrType = mk_bits(clog2(ctrl_mem_size))
CgraPayloadType = mk_cgra_payload(DataType, DataAddrType, CtrlType, CtrlAddrType)
IntraCgraPktType = mk_intra_cgra_pkt(num_cgra_columns, num_cgra_rows, num_tiles, CgraPayloadType)

from validation.script_generator import ScriptFactory

sf = ScriptFactory(
    path='validation/test/conv/conv_small.yaml',
    CtrlType=CtrlType, IntraCgraPktType=IntraCgraPktType,
    CgraPayloadType=CgraPayloadType, TileInType=TileInType, FuOutType=FuOutType,
    CMD_CONFIG_input=CMD_CONFIG, FuInType=FuInType,
    ii=5, loop_times=40,
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
    arg_map={'arg6': 0, 'arg7': 6},
    gep_stride=3)

pkts = sf.makeVectorCGRAPkts()

# Print command name mapping for reference
from lib.util.common import *
cmd_names = {
    int(CMD_CONFIG): "CMD_CONFIG",
    int(CMD_LAUNCH): "CMD_LAUNCH",
    int(CMD_CONST): "CMD_CONST",
    int(CMD_CONFIG_COUNT_PER_ITER): "CMD_CONFIG_COUNT_PER_ITER",
    int(CMD_CONFIG_TOTAL_CTRL_COUNT): "CMD_CONFIG_TOTAL_CTRL_COUNT",
    int(CMD_CONFIG_PROLOGUE_FU): "CMD_CONFIG_PROLOGUE_FU",
    int(CMD_CONFIG_PROLOGUE_ROUTING_CROSSBAR): "CMD_CONFIG_PROLOGUE_ROUTING_CROSSBAR",
    int(CMD_CONFIG_PROLOGUE_FU_CROSSBAR): "CMD_CONFIG_PROLOGUE_FU_CROSSBAR",
    int(CMD_CONFIG_GEP_STRIDE): "CMD_CONFIG_GEP_STRIDE",
}

print("TILES:", list(pkts.keys()))
for (x,y), tile_pkts in pkts.items():
    print(f"\nTile ({x},{y}): {len(tile_pkts)} pkts")
    for i, p in enumerate(tile_pkts):
        try:
            cmd = int(p.payload.cmd)
            cmd_name = cmd_names.get(cmd, f"UNKNOWN({cmd})")
            dst = int(p.dst)
            ctrl_addr = int(p.payload.ctrl_addr)
            data_val = int(p.payload.data.payload)
            ctrl = p.payload.ctrl
            opt_val = int(ctrl.operation)
            opt_name = OPT_SYMBOL_DICT.get(opt_val, f"UNKNOWN({opt_val})")
            print(f"  [{i:2d}] dst={dst:2d} cmd={cmd_name:40s} ctrl_addr={ctrl_addr} data={data_val} opt={opt_name}")
        except Exception as e:
            # Try raw string
            try:
                print(f"  [{i:2d}] dst={int(p.dst):2d} cmd={cmd_names.get(int(p.payload.cmd),'?'):40s} RAW: {str(p.payload)[:120]}")
            except Exception as e2:
                print(f"  [{i:2d}] ERROR: {e} / {e2}")
            import traceback
            traceback.print_exc()
