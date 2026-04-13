"""
Check that every routing crossbar input used at each step either:
1. Has a producer that sends data at the right time (with 1-cycle latency), OR
2. Has a prologue that allows bypassing the wait for data.

The routing crossbar has 8 inputs:
  0-3: tile inports (NORTH, SOUTH, WEST, EAST) - data from neighbor tiles
  4-7: register bank send_data_to_routing_crossbar[0..3]

If routing_xbar_outport[j] = X (X > 0), then inport X-1 must have valid data.
For inports 0-3 (tile ports): data comes from neighbor tile's outport.
For inports 4-7 (reg banks): data comes from register bank read with read_reg_towards in {2,3}.
"""
import sys, io, yaml
sys.path.insert(0, '/home/x/shiran/VectorCGRA')
import os
os.chdir('/home/x/shiran/VectorCGRA')

from pymtl3 import *
from lib.messages import *
from lib.opt_type import *

yaml_path = sys.argv[1] if len(sys.argv) > 1 else 'validation/test/spmv.yaml'
ii_val = int(sys.argv[2]) if len(sys.argv) > 2 else 15
loop_times = int(sys.argv[3]) if len(sys.argv) > 3 else 70

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
num_cgra_columns = 4; num_cgra_rows = 1; num_tiles = 16; num_rd_tiles = 7

CgraPayloadType = mk_cgra_payload(DataType, DataAddrType, CtrlType, CtrlAddrType)
InterCgraPktType = mk_inter_cgra_pkt(num_cgra_columns, num_cgra_rows, num_tiles, num_rd_tiles, CgraPayloadType)
IntraCgraPktType = mk_intra_cgra_pkt(num_cgra_columns, num_cgra_rows, num_tiles, CgraPayloadType)

old_stdout = sys.stdout
sys.stdout = io.StringIO()
from validation.script_generator import ScriptFactory
sf = ScriptFactory(
    path=yaml_path, CtrlType=CtrlType, IntraCgraPktType=IntraCgraPktType,
    CgraPayloadType=CgraPayloadType, TileInType=TileInType, FuOutType=FuOutType,
    CMD_CONFIG_input=CMD_CONFIG, FuInType=FuInType, ii=ii_val, loop_times=loop_times,
    CMD_CONST_input=CMD_CONST, CMD_CONFIG_COUNT_PER_ITER_input=CMD_CONFIG_COUNT_PER_ITER,
    CMD_CONFIG_TOTAL_CTRL_COUNT_input=CMD_CONFIG_TOTAL_CTRL_COUNT,
    CMD_CONFIG_PROLOGUE_FU_input=CMD_CONFIG_PROLOGUE_FU,
    CMD_CONFIG_PROLOGUE_ROUTING_CROSSBAR_input=CMD_CONFIG_PROLOGUE_ROUTING_CROSSBAR,
    CMD_CONFIG_PROLOGUE_FU_CROSSBAR_input=CMD_CONFIG_PROLOGUE_FU_CROSSBAR,
    CMD_LAUNCH_input=CMD_LAUNCH, DataType=DataType, B1Type=b1, B2Type=b2,
    RegIdxType=RegIdxType, CtrlAddrType=CtrlAddrType, DataAddrType=DataAddrType,
    num_registers_per_reg_bank=num_registers_per_reg_bank,
)
pkts = sf.makeVectorCGRAPkts()
sys.stdout = old_stdout

with open(yaml_path) as f:
    data = yaml.safe_load(f)

PORT_NAMES = ['NORTH', 'SOUTH', 'WEST', 'EAST']
# Tile neighbor mapping: tile_id = col + row*4
# NORTH output of tile(col,row) -> SOUTH input of tile(col,row+1)
# SOUTH output of tile(col,row) -> NORTH input of tile(col,row-1)
# WEST output -> EAST input of tile(col-1,row)
# EAST output -> WEST input of tile(col+1,row)

WIDTH = 4
HEIGHT = 4

def tile_id(col, row):
    return col + row * WIDTH

def neighbor(col, row, port):
    """Returns (neighbor_col, neighbor_row, neighbor_outport_idx) for a given input port."""
    # Input port 0 (NORTH) receives from tile above's SOUTH output (1)
    # Input port 1 (SOUTH) receives from tile below's NORTH output (0)
    # Input port 2 (WEST) receives from tile left's EAST output (3)
    # Input port 3 (EAST) receives from tile right's WEST output (2)
    if port == 0:  # NORTH input
        return (col, row+1, 1)  # from above tile's SOUTH
    elif port == 1:  # SOUTH input
        return (col, row-1, 0)  # from below tile's NORTH
    elif port == 2:  # WEST input
        return (col-1, row, 3)  # from left tile's EAST
    elif port == 3:  # EAST input
        return (col+1, row, 2)  # from right tile's WEST
    return None

# Extract ctrl packets and prologues per tile
tile_ctrls = {}  # (col, row) -> {addr: ctrl_dict}
tile_prologues = {}  # (col, row) -> {'routing': {addr: set(inport_0based)}, 'fu': set(addr), 'fu_xbar': set(addr)}

for (x,y), pkt_list in pkts.items():
    ctrls = {}
    pro = {'routing': {}, 'fu': set(), 'fu_xbar': set()}
    for pkt in pkt_list:
        cmd = int(pkt.payload.cmd)
        if cmd == int(CMD_CONFIG):
            ctrl = pkt.payload.ctrl
            addr = int(pkt.payload.ctrl_addr)
            ctrls[addr] = {
                'opt': int(ctrl.operation),
                'fu_in': [int(ctrl.fu_in[i]) for i in range(4)],
                'routing': [int(ctrl.routing_xbar_outport[i]) for i in range(8)],
                'fu_xbar': [int(ctrl.fu_xbar_outport[i]) for i in range(8)],
                'rr': [int(ctrl.read_reg_towards[i]) for i in range(4)],
                'wr': [int(ctrl.write_reg_from[i]) for i in range(4)],
            }
        elif cmd == int(CMD_CONFIG_PROLOGUE_FU):
            pro['fu'].add(int(pkt.payload.ctrl_addr))
        elif cmd == int(CMD_CONFIG_PROLOGUE_FU_CROSSBAR):
            pro['fu_xbar'].add(int(pkt.payload.ctrl_addr))
        elif cmd == int(CMD_CONFIG_PROLOGUE_ROUTING_CROSSBAR):
            addr = int(pkt.payload.ctrl_addr)
            routing = [int(pkt.payload.ctrl.routing_xbar_outport[i]) for i in range(8)]
            inport_1based = routing[0]
            if addr not in pro['routing']:
                pro['routing'][addr] = set()
            pro['routing'][addr].add(inport_1based - 1)  # store 0-based
    tile_ctrls[(x,y)] = ctrls
    tile_prologues[(x,y)] = pro

errors = []

def err(msg):
    errors.append(msg)

# For each tile, for each step, check all routing crossbar inputs that are selected
for (col, row) in sorted(tile_ctrls.keys()):
    ctrls = tile_ctrls[(col, row)]
    pro = tile_prologues[(col, row)]
    
    for addr in range(ii_val):
        if addr not in ctrls:
            continue
        ctrl = ctrls[addr]
        
        # Find all unique inports referenced by routing_xbar_outport
        used_inports = set()
        for j in range(8):
            x_val = ctrl['routing'][j]
            if x_val > 0:
                used_inports.add(x_val - 1)  # 0-based inport
        
        for inport in used_inports:
            if inport < 4:
                # Tile input port — needs data from neighbor
                # Check if there's a prologue for this inport at this addr
                has_prologue = (addr in pro['routing'] and inport in pro['routing'][addr])
                
                if not has_prologue:
                    # Need actual data from neighbor — check if neighbor sends at addr-1 (1-cycle latency)
                    # For now just note that it needs data
                    ncol, nrow, noutport = neighbor(col, row, inport)
                    if 0 <= ncol < WIDTH and 0 <= nrow < HEIGHT:
                        # Check if neighbor has a producer at addr-1 (wrapping with II)
                        prev_addr = (addr - 1) % ii_val
                        nkey = (ncol, nrow)
                        if nkey in tile_ctrls and prev_addr in tile_ctrls[nkey]:
                            nctrl = tile_ctrls[nkey][prev_addr]
                            # Check if neighbor's routing xbar or fu xbar sends to noutport
                            sends_routing = nctrl['routing'][noutport] > 0
                            sends_fu = nctrl['fu_xbar'][noutport] > 0
                            if not sends_routing and not sends_fu:
                                err(f"T({col},{row}) addr={addr}: routing needs inport {inport} ({PORT_NAMES[inport]}) "
                                    f"but neighbor T({ncol},{nrow}) addr={prev_addr} doesn't send to outport {noutport} ({PORT_NAMES[noutport]}), "
                                    f"and NO prologue set")
                    else:
                        err(f"T({col},{row}) addr={addr}: routing needs inport {inport} ({PORT_NAMES[inport]}) "
                            f"but neighbor ({ncol},{nrow}) is out of bounds and NO prologue set")
            elif inport >= 4:
                # Register bank input — needs register bank to read towards routing
                bank = inport - 4
                rr = ctrl['rr'][bank]
                # rr must be 2 (routing) or 3 (both) for the bank to send to routing xbar
                if rr not in (2, 3):
                    err(f"T({col},{row}) addr={addr}: routing needs inport {inport} (reg bank {bank}) "
                        f"but rr[{bank}]={rr} (not 2 or 3)")
        
        # Also check FU crossbar: outports that are non-zero need FU to produce output
        # FU xbar inputs come from FU outports. If FU is NAH, it doesn't produce.
        fu_xbar_any = any(ctrl['fu_xbar'][j] > 0 for j in range(8))
        if fu_xbar_any and ctrl['opt'] == 1:  # OPT_NAH
            err(f"T({col},{row}) addr={addr}: fu_xbar routes data but operation is NAH")

# Print results
if errors:
    print(f"\n{'='*60}")
    print(f"ROUTING CROSSBAR DEPENDENCY ERRORS: {len(errors)}")
    print(f"{'='*60}")
    for e in errors:
        print(f"  {e}")
else:
    print("\nAll routing crossbar dependency checks passed!")
