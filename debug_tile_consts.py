#!/usr/bin/env python3
"""
Debug script: Print const packets for each tile from conv_small.yaml
Run from project root: python3 -m debug_tile_consts
"""
import sys, os
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))

from pymtl3 import *
from lib.messages import *
from lib.opt_type import *
from lib.cmd_type import *
from lib.util.common import *

# Same parameters as the test
data_bitwidth = 32
num_tile_inports = 4
num_tile_outports = 4
num_fu_inports = 4
num_fu_outports = 2
ctrl_mem_size = 6
data_mem_size_global = 128
num_cgra_columns = 4
num_cgra_rows = 1
num_cgras = num_cgra_columns * num_cgra_rows
num_tiles = 16
num_rd_tiles = 7
num_registers_per_reg_bank = 8

TileInType = mk_bits(clog2(num_tile_inports + num_fu_inports + 1))
FuInType = mk_bits(clog2(num_fu_inports + 1))
FuOutType = mk_bits(clog2(num_fu_outports + 1))
addr_nbits = clog2(data_mem_size_global)
DataAddrType = mk_bits(addr_nbits)
RegIdxType = mk_bits(clog2(num_registers_per_reg_bank))
DataType = mk_data(data_bitwidth, 1)
PredicateType = mk_predicate(1, 1)
CtrlType = mk_ctrl(num_fu_inports, num_fu_outports, num_tile_inports, num_tile_outports, num_registers_per_reg_bank)
CtrlAddrType = mk_bits(clog2(ctrl_mem_size))
CgraPayloadType = mk_cgra_payload(DataType, DataAddrType, CtrlType, CtrlAddrType)
IntraCgraPktType = mk_intra_cgra_pkt(num_cgra_columns, num_cgra_rows, num_tiles, CgraPayloadType)

NI = 2
NJ = 3
total = 6
base_A = 0
base_B = 6
kCtrlCountPerIter = 5
kTotalCtrlSteps = kCtrlCountPerIter * total + 10

from validation.script_generator import ScriptFactory

script_factory = ScriptFactory(
    path="validation/test/conv/conv_small.yaml",
    CtrlType=CtrlType,
    IntraCgraPktType=IntraCgraPktType,
    CgraPayloadType=CgraPayloadType,
    TileInType=TileInType,
    FuOutType=FuOutType,
    CMD_CONFIG_input=CMD_CONFIG,
    FuInType=FuInType,
    ii=kCtrlCountPerIter,
    loop_times=kTotalCtrlSteps,
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
    arg_map={"arg6": base_A, "arg7": base_B},
    gep_stride=NJ,
)

pkts_dict = script_factory.makeVectorCGRAPkts()

print("\n" + "=" * 70)
print("=== PER-TILE PACKET SUMMARY ===")
print("=" * 70)

for (x, y) in sorted(pkts_dict.keys()):
    tile_pkts = pkts_dict[(x, y)]
    # tile_id = dst field
    tile_id = None
    for pkt in tile_pkts:
        tile_id = int(pkt.dst)
        break

    print(f"\n--- Tile ({x},{y}), id={tile_id} ---")
    
    const_idx = 0
    for pkt in tile_pkts:
        cmd = int(pkt.payload.cmd)
        if cmd == int(CMD_CONST):
            data_val = int(pkt.payload.data.payload)
            print(f"  CMD_CONST[{const_idx}]: value={data_val} (0x{data_val:08x})")
            const_idx += 1
        elif cmd == int(CMD_CONFIG_GEP_STRIDE):
            data_val = int(pkt.payload.data.payload)
            print(f"  CMD_CONFIG_GEP_STRIDE: value={data_val}")
        elif cmd == int(CMD_CONFIG_COUNT_PER_ITER):
            data_val = int(pkt.payload.data.payload)
            print(f"  CMD_CONFIG_COUNT_PER_ITER: value={data_val}")
        elif cmd == int(CMD_CONFIG_TOTAL_CTRL_COUNT):
            data_val = int(pkt.payload.data.payload)
            print(f"  CMD_CONFIG_TOTAL_CTRL_COUNT: value={data_val}")
        elif cmd == int(CMD_CONFIG):
            ctrl = pkt.payload.ctrl
            ctrl_addr = int(pkt.payload.ctrl_addr)
            op = int(ctrl.operation)
            fu_in = [int(ctrl.fu_in[i]) for i in range(num_fu_inports)]
            print(f"  CMD_CONFIG[addr={ctrl_addr}]: op={op} (0x{op:02x}), fu_in={fu_in}")
        elif cmd == int(CMD_LAUNCH):
            print(f"  CMD_LAUNCH")
        elif cmd == int(CMD_CONFIG_PROLOGUE_FU):
            print(f"  CMD_CONFIG_PROLOGUE_FU: addr={int(pkt.payload.ctrl_addr)}, data={int(pkt.payload.data.payload)}")
        elif cmd == int(CMD_CONFIG_PROLOGUE_ROUTING_CROSSBAR):
            print(f"  CMD_CONFIG_PROLOGUE_ROUTING_CROSSBAR: addr={int(pkt.payload.ctrl_addr)}, data={int(pkt.payload.data.payload)}")
        elif cmd == int(CMD_CONFIG_PROLOGUE_FU_CROSSBAR):
            print(f"  CMD_CONFIG_PROLOGUE_FU_CROSSBAR: addr={int(pkt.payload.ctrl_addr)}, data={int(pkt.payload.data.payload)}")
        else:
            print(f"  CMD={cmd}: {pkt}")

print("\n" + "=" * 70)
print("=== CONST QUEUE ANALYSIS (focus on tile 7) ===")
print("=" * 70)

# Look at tile 7 specifically
for (x, y) in sorted(pkts_dict.keys()):
    tile_pkts = pkts_dict[(x, y)]
    tile_id = int(tile_pkts[0].dst) if tile_pkts else None
    if tile_id != 7:
        continue
    
    consts = []
    ctrl_steps = []
    for pkt in tile_pkts:
        cmd = int(pkt.payload.cmd)
        if cmd == int(CMD_CONST):
            consts.append(int(pkt.payload.data.payload))
        elif cmd == int(CMD_CONFIG):
            ctrl = pkt.payload.ctrl
            ctrl_addr = int(pkt.payload.ctrl_addr)
            op = int(ctrl.operation)
            ctrl_steps.append((ctrl_addr, op))
    
    print(f"\nTile 7 has {len(consts)} consts: {consts}")
    print(f"Tile 7 ctrl steps:")
    
    # Map operation codes to names
    op_names = {
        int(OPT_NAH): "NAH",
        int(OPT_GEP_2D_CONST): "GEP_2D_CONST",
        int(OPT_DIV_CONST): "DIV_CONST",
        int(OPT_REM_CONST): "REM_CONST",
        int(OPT_LD): "LD",
        int(OPT_PAS): "PAS",
        int(OPT_ADD): "ADD",
        int(OPT_ADD_CONST): "ADD_CONST",
        int(OPT_MUL): "MUL",
        int(OPT_RET): "RET",
        int(OPT_EQ_CONST): "EQ_CONST",
        int(OPT_GRT_ONCE): "GRT_ONCE",
        int(OPT_GRT_ONCE_CONST): "GRT_ONCE_CONST",
        int(OPT_GRT_PRED): "GRT_PRED",
        int(OPT_PHI): "PHI",
        int(OPT_PHI_CONST): "PHI_CONST",
        int(OPT_PHI_START): "PHI_START",
    }
    
    for addr, op in ctrl_steps:
        op_name = op_names.get(op, f"UNKNOWN({op})")
        # Determine which const index this step uses
        # Steps with const ops consume one const in order
        print(f"  addr={addr}: op={op_name} (0x{op:02x})")
    
    print(f"\nConst queue cycling analysis:")
    print(f"  ctrl_mem_size = {ctrl_mem_size}")
    print(f"  num_consts = {len(consts)}")
    print(f"  Consts: {consts}")
    print(f"  The const queue wraps: rd_cur cycles 0..{len(consts)-1}")
    
    # Figure out which ctrl_addr uses const
    # A ctrl step uses const if its operation is a *_CONST variant
    const_ops = {int(OPT_DIV_CONST), int(OPT_REM_CONST), int(OPT_ADD_CONST),
                 int(OPT_EQ_CONST), int(OPT_GRT_ONCE_CONST), int(OPT_GEP_2D_CONST),
                 int(OPT_MUL_CONST), int(OPT_PHI_CONST), int(OPT_GTE_CONST),
                 int(OPT_LT_CONST), int(OPT_GT_CONST), int(OPT_NE_CONST),
                 int(OPT_AND_CONST), int(OPT_OR_CONST), int(OPT_CONST)}
    
    print(f"\n  Iteration trace (first 3 iterations):")
    rd_cur = 0
    num_consts = len(consts)
    for iteration in range(3):
        print(f"  --- Iteration {iteration} ---")
        for addr, op in ctrl_steps:
            uses_const = op in const_ops
            if uses_const:
                const_val = consts[rd_cur] if rd_cur < num_consts else "OUT_OF_RANGE"
                print(f"    addr={addr}: op={op_names.get(op, hex(op))}, USES CONST[rd_cur={rd_cur}] = {const_val}")
                # advance rd_cur (mimic ConstQueueDynamicRTL wrapping)
                if rd_cur < num_consts - 1:
                    rd_cur += 1
                else:
                    rd_cur = 0
            else:
                print(f"    addr={addr}: op={op_names.get(op, hex(op))}, no const")
