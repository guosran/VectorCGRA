"""
Analyze the deadlock by examining what each tile needs at its stuck step.
Uses the 'times' values from the simulation trace to determine which step each tile is at.
"""
import sys, io, yaml
sys.path.insert(0, '/home/x/shiran/VectorCGRA')
import os; os.chdir('/home/x/shiran/VectorCGRA')

from pymtl3 import *
from lib.messages import *
from lib.opt_type import *

yaml_path = 'validation/test/spmv.yaml'
ii_val = 15

data_bitwidth = 32
num_fu_inports = 4; num_fu_outports = 2; num_tile_inports = 4; num_tile_outports = 4
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

old_stdout = sys.stdout; sys.stdout = io.StringIO()
from validation.script_generator import ScriptFactory
sf = ScriptFactory(
    path=yaml_path, CtrlType=CtrlType, IntraCgraPktType=IntraCgraPktType,
    CgraPayloadType=CgraPayloadType, TileInType=TileInType, FuOutType=FuOutType,
    CMD_CONFIG_input=CMD_CONFIG, FuInType=FuInType, ii=ii_val, loop_times=70,
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

tile_ctrls = {}
tile_prologues = {}
for (x,y), pkt_list in pkts.items():
    ctrls = {}
    pro = {'fu': set(), 'fu_xbar': set(), 'routing': {}}
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
                'wi': [int(ctrl.write_reg_idx[i]) for i in range(4)],
                'ri': [int(ctrl.read_reg_idx[i]) for i in range(4)],
            }
        elif cmd == int(CMD_CONFIG_PROLOGUE_ROUTING_CROSSBAR):
            addr = int(pkt.payload.ctrl_addr)
            routing = [int(pkt.payload.ctrl.routing_xbar_outport[i]) for i in range(8)]
            inport_1based = routing[0]
            if addr not in pro['routing']:
                pro['routing'][addr] = []
            pro['routing'][addr].append(inport_1based)
        elif cmd == int(CMD_CONFIG_PROLOGUE_FU):
            pro['fu'].add(int(pkt.payload.ctrl_addr))
        elif cmd == int(CMD_CONFIG_PROLOGUE_FU_CROSSBAR):
            pro['fu_xbar'].add(int(pkt.payload.ctrl_addr))
    tile_ctrls[(x,y)] = ctrls
    tile_prologues[(x,y)] = pro

PORT_NAMES = ['N','S','W','E']
opt_names = {0:'START',1:'NAH',2:'ADD',7:'MUL',0x0b:'NOT',0x0c:'LD',0x0d:'STR',
             0x0e:'EQ',0x10:'GRT_PRED',0x11:'PHI',0x19:'ADD_CONST',0x1f:'PAS',
             0x21:'EQ_CONST',0x2f:'GRT_ONCE',0x40:'RET_VOID',0x50:'CONST',
             0x54:'PHI_START',0x58:'GRT_ONCE_CONST',0x5b:'LT_CONST',0x5c:'GT_CONST',
             0x5d:'AND_CONST',0x5e:'OR_CONST'}

# stuck_times from trace: tile_id -> times counter value
stuck_times = {0:6, 1:6, 2:4, 3:3, 4:5, 5:3, 6:8, 7:16, 8:14, 9:8, 10:10, 11:17, 12:17, 13:15, 14:22, 15:0}

print("=== STUCK STEP ANALYSIS ===")
print("tile_id = col + row*4")
print("step = (times - 1) % ii_val")
print()

for tid in range(16):
    col = tid % 4
    row = tid // 4
    key = (col, row)
    times = stuck_times[tid]
    if times == 0:
        print(f"tile{tid:2d} ({col},{row}): not started (tile15 unused)")
        continue
    step = (times - 1) % ii_val
    iteration = (times - 1) // ii_val
    ctrl = tile_ctrls.get(key, {}).get(step, None)
    pro = tile_prologues.get(key, {})
    if ctrl is None:
        print(f"tile{tid:2d} ({col},{row}): times={times} step={step} iter={iteration} NO CTRL")
        continue
    
    # Which routing xbar inports need external data (tile ports 0-3)?
    needed_inports = set()
    for i in range(8):
        v = ctrl['routing'][i]
        if 0 < v <= 4:
            needed_inports.add(v-1)
    
    opt_name = opt_names.get(ctrl['opt'], f'0x{ctrl["opt"]:02x}')
    pro_routing = pro.get('routing', {}).get(step, [])
    pro_fu = step in pro.get('fu', set())
    pro_fuxbar = step in pro.get('fu_xbar', set())
    
    needs_str = ','.join(PORT_NAMES[p] for p in sorted(needed_inports)) if needed_inports else 'none'
    pro_str = ""
    if pro_routing:
        pro_str += f" pro_r={pro_routing}"
    if pro_fu:
        pro_str += " PRO_FU"
    if pro_fuxbar:
        pro_str += " PRO_FUXBAR"
    
    # Check: which outports does this tile send data on?
    sends_to = []
    for i in range(4):
        if ctrl['routing'][i] > 0 or ctrl['fu_xbar'][i] > 0:
            sends_to.append(PORT_NAMES[i])
    sends_str = ','.join(sends_to) if sends_to else 'none'
    
    print(f"tile{tid:2d} ({col},{row}): times={times:3d} step={step:2d} iter={iteration} opt={opt_name:15s} needs={needs_str:10s} sends={sends_str:10s} rxo={ctrl['routing']} fxo={ctrl['fu_xbar']}{pro_str}")

print()
print("=== DEPENDENCY CHAIN ANALYSIS ===")
print("For each stuck tile, trace what it needs and from where")
print()

# Build mesh connectivity: tile_id -> {dir: neighbor_tile_id}
# tile_id = col + row * 4
# NORTH(0): row+1, SOUTH(1): row-1, WEST(2): col-1, EAST(3): col+1
def neighbor(tid, direction):
    col = tid % 4
    row = tid // 4
    if direction == 0:  # N
        nrow = row + 1
        if nrow >= 4: return None
        return col + nrow * 4
    elif direction == 1:  # S
        nrow = row - 1
        if nrow < 0: return None
        return col + nrow * 4
    elif direction == 2:  # W
        ncol = col - 1
        if ncol < 0: return None
        return ncol + row * 4
    elif direction == 3:  # E
        ncol = col + 1
        if ncol >= 4: return None
        return ncol + row * 4
    return None

# Reverse direction: if I receive from NORTH, neighbor sent via SOUTH
recv_to_send = {0: 1, 1: 0, 2: 3, 3: 2}

for tid in range(16):
    col = tid % 4
    row = tid // 4
    key = (col, row)
    times = stuck_times[tid]
    if times == 0:
        continue
    step = (times - 1) % ii_val
    iteration = (times - 1) // ii_val
    ctrl = tile_ctrls.get(key, {}).get(step)
    if ctrl is None:
        continue
    
    pro = tile_prologues.get(key, {})
    pro_routing = pro.get('routing', {}).get(step, [])
    
    # Find which tile ports this step needs data from
    needed_inports = set()
    for i in range(8):
        v = ctrl['routing'][i]
        if 0 < v <= 4:
            needed_inports.add(v-1)
    
    if not needed_inports:
        opt_name = opt_names.get(ctrl['opt'], '?')
        # Check if routing xbar uses reg bank inputs
        needs_reg = False
        for i in range(8):
            v = ctrl['routing'][i]
            if v >= 5:
                needs_reg = True
                break
        if needs_reg:
            print(f"tile{tid:2d} step={step:2d} opt={opt_name}: routing xbar needs reg bank data (not tile ports)")
            # Check if the reg bank can provide data
            for i in range(8):
                v = ctrl['routing'][i]
                if v >= 5:
                    bank = v - 5  # 0-based
                    rr_val = ctrl['rr'][bank]
                    print(f"  routing[{i}] needs reg_bank[{bank}], rr[{bank}]={rr_val} (0=passthru, 1=FU, 2=routing, 3=both)")
        else:
            print(f"tile{tid:2d} step={step:2d} opt={opt_name}: no port or reg input needed by routing xbar - WHY STUCK?")
            # Maybe the FU output isn't ready? Or the outport isn't accepted?
            for i in range(4):
                if ctrl['routing'][i] > 0:
                    nbr = neighbor(tid, i)
                    if nbr is not None:
                        print(f"  sends via {PORT_NAMES[i]} to tile{nbr} but neighbor might not accept")
                if ctrl['fu_xbar'][i] > 0:
                    nbr = neighbor(tid, i)
                    if nbr is not None:
                        print(f"  FU output via {PORT_NAMES[i]} to tile{nbr} but neighbor might not accept")
        continue
    
    # This tile needs data from ports
    for port in sorted(needed_inports):
        nbr = neighbor(tid, port)
        send_dir = recv_to_send[port]
        is_prologued = (port + 1) in pro_routing
        
        if nbr is None:
            print(f"tile{tid:2d} step={step:2d}: needs {PORT_NAMES[port]} but NO NEIGHBOR (boundary!)")
            continue
        
        nbr_times = stuck_times[nbr]
        nbr_step = (nbr_times - 1) % ii_val if nbr_times > 0 else -1
        nbr_iter = (nbr_times - 1) // ii_val if nbr_times > 0 else -1
        nbr_key = (nbr % 4, nbr // 4)
        nbr_ctrl = tile_ctrls.get(nbr_key, {}).get(nbr_step)
        
        # Does the neighbor send on the reverse direction at its current step?
        nbr_sends = False
        if nbr_ctrl:
            if nbr_ctrl['routing'][send_dir] > 0 or nbr_ctrl['fu_xbar'][send_dir] > 0:
                nbr_sends = True
        
        nbr_opt_name = opt_names.get(nbr_ctrl['opt'], '?') if nbr_ctrl else '?'
        
        pro_note = " (PROLOGUED)" if is_prologued else ""
        send_note = "SENDS" if nbr_sends else "DOES NOT SEND"
        
        print(f"tile{tid:2d} step={step:2d} iter={iteration}: needs {PORT_NAMES[port]} from tile{nbr:2d} (step={nbr_step} iter={nbr_iter} opt={nbr_opt_name} {send_note} on {PORT_NAMES[send_dir]}){pro_note}")

print()
print("=== CHECKING: Which tiles have routing xbar outputs going to tile outports? ===")
print("(These need the neighbor to accept, which requires neighbor's routing_crossbar_done)")
print()
for tid in range(16):
    col = tid % 4
    row = tid // 4
    key = (col, row)
    times = stuck_times[tid]
    if times == 0: continue
    step = (times - 1) % ii_val
    ctrl = tile_ctrls.get(key, {}).get(step)
    if ctrl is None: continue
    
    for i in range(4):
        routing_sends = ctrl['routing'][i] > 0
        fuxbar_sends = ctrl['fu_xbar'][i] > 0
        if routing_sends or fuxbar_sends:
            nbr = neighbor(tid, i)
            src_type = []
            if routing_sends:
                src_val = ctrl['routing'][i]
                if src_val <= 4:
                    src_type.append(f"routing[{i}]={src_val}(port {PORT_NAMES[src_val-1]})")
                else:
                    src_type.append(f"routing[{i}]={src_val}(reg_bank[{src_val-5}])")
            if fuxbar_sends:
                src_type.append(f"fu_xbar[{i}]={ctrl['fu_xbar'][i]}")
            nbr_str = f"tile{nbr}" if nbr is not None else "BOUNDARY"
            print(f"tile{tid:2d} step={step:2d}: sends on {PORT_NAMES[i]} to {nbr_str} via {', '.join(src_type)}")
