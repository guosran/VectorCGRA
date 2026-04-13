"""
Verify control packets against YAML operations.
For each tile and each step, check that the routing, FU, and register
configurations correctly implement the YAML operations.
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

# Build types
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

# Generate packets
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

# Parse YAML
with open(yaml_path) as f:
    data = yaml.safe_load(f)

PORT_NAMES = ['NORTH', 'SOUTH', 'WEST', 'EAST']
PORT_IDX = {'NORTH': 0, 'SOUTH': 1, 'WEST': 2, 'EAST': 3}

FU_OPS = {
    'PHI', 'PHI_START', 'ADD', 'MUL', 'ICMP_ULT', 'ICMP_SGT', 'ICMP_EQ',
    'AND', 'OR', 'NOT', 'ZEXT', 'LD', 'STR', 'GRANT_ONCE', 'GRANT_PREDICATE',
    'CONSTANT', 'RETURN_VOID', 'ADD_CONST', 'SEL',
}
NON_FU_OPS = {'DATA_MOV', 'CTRL_MOV'}

def is_port(s):
    return s in PORT_IDX

def is_reg(s):
    return s.startswith('$')

def is_const(s):
    return s.startswith('#')

def reg_bank(s):
    """Register $N -> bank index (0-based)"""
    n = int(s[1:])
    return n // 8  # $0-$7 -> bank 0, $8-$15 -> bank 1, $16-$23 -> bank 2

def reg_intra(s):
    """Register $N -> intra-bank index"""
    n = int(s[1:])
    return n % 8

# Extract ctrl packets per tile
tile_ctrls = {}  # (col, row) -> {addr: ctrl_dict}
tile_prologues = {}  # (col, row) -> {'fu': set(addr), 'fu_xbar': set(addr), 'routing': {addr: [inports]}}

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
        elif cmd == int(CMD_CONFIG_PROLOGUE_FU):
            addr = int(pkt.payload.ctrl_addr)
            pro['fu'].add(addr)
        elif cmd == int(CMD_CONFIG_PROLOGUE_FU_CROSSBAR):
            addr = int(pkt.payload.ctrl_addr)
            pro['fu_xbar'].add(addr)
        elif cmd == int(CMD_CONFIG_PROLOGUE_ROUTING_CROSSBAR):
            addr = int(pkt.payload.ctrl_addr)
            routing = [int(pkt.payload.ctrl.routing_xbar_outport[i]) for i in range(8)]
            # routing[0] is the 1-based inport index
            inport_1based = routing[0]
            if addr not in pro['routing']:
                pro['routing'][addr] = []
            pro['routing'][addr].append(inport_1based)
    tile_ctrls[(x,y)] = ctrls
    tile_prologues[(x,y)] = pro

# Parse YAML operations per tile
tile_ops = {}  # (col, row) -> {step: [op_dict]}
for core in data['array_config']['cores']:
    col, row = core['column'], core['row']
    ops = {}
    for instr in core['entries'][0]['instructions']:
        step = instr['index_per_ii']
        if step not in ops:
            ops[step] = []
        for op in instr['operations']:
            ops[step].append({
                'opcode': op['opcode'],
                'src': [s['operand'] for s in op.get('src_operands', [])],
                'dst': [d['operand'] for d in op.get('dst_operands', [])],
                'invalid_iterations': op.get('invalid_iterations', 0),
                'time_step': op.get('time_step', 0),
            })
    tile_ops[(col,row)] = ops

errors = []

def err(tile, step, msg):
    errors.append(f"Tile ({tile[0]},{tile[1]}) step={step}: {msg}")

# Check each tile
for core in data['array_config']['cores']:
    col, row = core['column'], core['row']
    key = (col, row)
    if key not in tile_ctrls:
        errors.append(f"Tile ({col},{row}): no ctrl packets generated")
        continue
    
    ops = tile_ops.get(key, {})
    ctrls = tile_ctrls[key]
    pro = tile_prologues[key]
    
    for step in range(ii_val):
        if step not in ctrls:
            if step in ops:
                err(key, step, f"has YAML ops but no ctrl packet")
            continue
        
        ctrl = ctrls[step]
        step_ops = ops.get(step, [])
        
        if not step_ops:
            # Should be NAH
            if ctrl['opt'] != 1:  # OPT_NAH
                err(key, step, f"no YAML ops but opt={ctrl['opt']:#x} (not NAH)")
            continue
        
        # Classify operations
        fu_ops = []
        non_fu_ops = []
        for op in step_ops:
            opcode = op['opcode']
            if opcode in NON_FU_OPS:
                # But check if it's really non-FU
                # DATA_MOV/CTRL_MOV from port or reg to port or reg = non-FU (routing only)
                non_fu_ops.append(op)
            else:
                fu_ops.append(op)
        
        # ===== Check routing crossbar =====
        # For non-FU ops: PORT→REG or PORT→PORT routing
        # routing_xbar_outport[i] encodes which input feeds outport i
        # outport 0-3 = tile outports (N,S,W,E)
        # outport 4-7 = register_cluster lanes 0-3
        # value: 0=nothing, 1=inport0(N), 2=inport1(S), 3=inport2(W), 4=inport3(E), 5-8=reg_bank[0-3]
        
        # Check: each non-FU PORT→PORT op should have routing[dst_port] = src_port+1
        for op in non_fu_ops:
            src = op['src']
            dst = op['dst']
            for s in src:
                if is_port(s):
                    src_port_idx = PORT_IDX[s]
                    for d in dst:
                        if is_port(d):
                            dst_port_idx = PORT_IDX[d]
                            expected = src_port_idx + 1  # 1-indexed
                            actual = ctrl['routing'][dst_port_idx]
                            if actual != expected:
                                err(key, step, f"PORT→PORT {s}→{d}: routing[{dst_port_idx}]={actual}, expected {expected}")
                        elif is_reg(d):
                            bank = reg_bank(d)
                            intra = reg_intra(d)
                            # routing[bank+4] should route the port data
                            expected = src_port_idx + 1  # 1-indexed
                            actual = ctrl['routing'][bank + 4]
                            if actual != expected:
                                err(key, step, f"PORT→REG {s}→{d}: routing[{bank+4}]={actual}, expected {expected}")
                            # wr[bank] should be 1 (FROM_PORT/ROUTING_CROSSBAR)
                            if ctrl['wr'][bank] != 1:
                                err(key, step, f"PORT→REG {s}→{d}: wr[{bank}]={ctrl['wr'][bank]}, expected 1")
                            # wi[bank] should be intra index
                            if ctrl['wi'][bank] != intra:
                                err(key, step, f"PORT→REG {s}→{d}: wi[{bank}]={ctrl['wi'][bank]}, expected {intra}")
                elif is_reg(s):
                    bank = reg_bank(s)
                    intra = reg_intra(s)
                    for d in dst:
                        if is_port(d):
                            dst_port_idx = PORT_IDX[d]
                            # routing[dst_port_idx] should read from reg_bank: value = bank+4+1 = bank+5
                            expected = bank + 4 + 1
                            actual = ctrl['routing'][dst_port_idx]
                            if actual != expected:
                                err(key, step, f"REG→PORT {s}→{d}: routing[{dst_port_idx}]={actual}, expected {expected}")
                            # rr[bank] should include ROUTING (2 or 3)
                            if ctrl['rr'][bank] not in (2, 3):
                                err(key, step, f"REG→PORT {s}→{d}: rr[{bank}]={ctrl['rr'][bank]}, expected 2 or 3")
                            # ri[bank] should be intra index
                            if ctrl['ri'][bank] != intra:
                                err(key, step, f"REG→PORT {s}→{d}: ri[{bank}]={ctrl['ri'][bank]}, expected {intra}")
                        elif is_reg(d):
                            src_bank = reg_bank(s)
                            dst_bank = reg_bank(d)
                            dst_intra = reg_intra(d)
                            src_intra = reg_intra(s)
                            # REG→REG: read src reg via routing xbar → write to dst reg
                            # routing[dst_bank+4] = src_bank+4+1
                            expected = src_bank + 4 + 1
                            actual = ctrl['routing'][dst_bank + 4]
                            if actual != expected:
                                err(key, step, f"REG→REG {s}→{d}: routing[{dst_bank+4}]={actual}, expected {expected}")
        
        # ===== Check FU operations =====
        if not fu_ops:
            continue
        
        # There should be exactly one FU op (the one that takes the FU)
        # Multiple FU ops at the same step = problem, but let's check
        if len(fu_ops) > 1:
            err(key, step, f"multiple FU ops: {[op['opcode'] for op in fu_ops]}")
        
        fu_op = fu_ops[0]
        
        # Check FU input routing
        # For _CONST ops, the const operand doesn't use an FU input - it comes via recv_const
        # The non-const operands get remapped to sequential FU input indices
        # For STORE, HW expects [addr, data] but YAML gives [data, addr], so script_generator swaps
        fu_src_list = list(fu_op['src'])
        if fu_op['opcode'] == 'STORE' and len(fu_src_list) >= 2:
            fu_src_list[0], fu_src_list[1] = fu_src_list[1], fu_src_list[0]
        
        fu_input_idx = 0  # track actual FU input index (skipping consts)
        for src_idx, s in enumerate(fu_src_list):
            if is_const(s):
                continue  # const comes via recv_const, doesn't use fu_in
            
            if is_reg(s):
                bank = reg_bank(s)
                intra = reg_intra(s)
                # rr[bank] should include FU (1 or 3)
                if ctrl['rr'][bank] not in (1, 3):
                    err(key, step, f"FU src[{src_idx}]={s}: rr[{bank}]={ctrl['rr'][bank]}, expected 1 or 3")
                # ri[bank] should be intra index
                if ctrl['ri'][bank] != intra:
                    err(key, step, f"FU src[{src_idx}]={s}: ri[{bank}]={ctrl['ri'][bank]}, expected {intra}")
                # fu_in[fu_input_idx] should point to the bank's lane
                expected_fu_in = bank + 1  # bank 0 → lane 0 → fu_in=1
                actual_fu_in = ctrl['fu_in'][fu_input_idx]
                if actual_fu_in != expected_fu_in:
                    err(key, step, f"FU src[{src_idx}]={s}: fu_in[{fu_input_idx}]={actual_fu_in}, expected {expected_fu_in}")
            
            elif is_port(s):
                port_idx = PORT_IDX[s]
                # Find which lane this port is routed to with rr==0 (pass-through to FU)
                # The fu_in value tells us which lane the FU actually reads from
                actual_fu_in = ctrl['fu_in'][fu_input_idx]
                if actual_fu_in == 0:
                    err(key, step, f"FU src[{src_idx}]={s}: fu_in[{fu_input_idx}]=0 (unrouted)")
                else:
                    actual_lane = actual_fu_in - 1  # 0-based lane
                    # Verify that this lane carries the correct port data
                    if ctrl['routing'][actual_lane + 4] != port_idx + 1:
                        err(key, step, f"FU src[{src_idx}]={s}: fu_in[{fu_input_idx}]={actual_fu_in} (lane={actual_lane}) but routing[{actual_lane+4}]={ctrl['routing'][actual_lane+4]}, expected {port_idx+1}")
                    # Verify rr[lane]==0 (pass-through, not reg override)
                    if ctrl['rr'][actual_lane] != 0:
                        err(key, step, f"FU src[{src_idx}]={s}: fu_in[{fu_input_idx}]={actual_fu_in} (lane={actual_lane}) but rr[{actual_lane}]={ctrl['rr'][actual_lane]}, expected 0")
            
            fu_input_idx += 1
        
        # Check FU output routing
        for d in fu_op['dst']:
            if is_port(d):
                port_idx = PORT_IDX[d]
                # fu_xbar[port_idx] should be non-zero (routes FU output to tile outport)
                if ctrl['fu_xbar'][port_idx] == 0:
                    err(key, step, f"FU dst={d}: fu_xbar[{port_idx}]=0, expected non-zero")
            elif is_reg(d):
                bank = reg_bank(d)
                intra = reg_intra(d)
                # wr[bank] should be 2 (FROM_FU)
                if ctrl['wr'][bank] != 2:
                    err(key, step, f"FU dst={d}: wr[{bank}]={ctrl['wr'][bank]}, expected 2")
                # wi[bank] should be intra index
                if ctrl['wi'][bank] != intra:
                    err(key, step, f"FU dst={d}: wi[{bank}]={ctrl['wi'][bank]}, expected {intra}")
                # fu_xbar[bank+4] should be non-zero
                if ctrl['fu_xbar'][bank + 4] == 0:
                    err(key, step, f"FU dst={d}: fu_xbar[{bank+4}]=0, expected non-zero")

# ===== Check prologue consistency =====
for core in data['array_config']['cores']:
    col, row = core['column'], core['row']
    key = (col, row)
    if key not in tile_ctrls:
        continue
    
    ops = tile_ops.get(key, {})
    pro = tile_prologues[key]
    ctrls = tile_ctrls[key]
    
    for step in range(ii_val):
        step_ops = ops.get(step, [])
        
        # Check which ports are used by prologue FU ops at this step
        prologue_fu_ops = [op for op in step_ops if op['invalid_iterations'] > 0 and op['opcode'] not in NON_FU_OPS]
        normal_fu_ops = [op for op in step_ops if op['invalid_iterations'] == 0 and op['opcode'] not in NON_FU_OPS]
        
        # If there's a prologue FU op, the step should have PROLOGUE_FU
        if prologue_fu_ops and not normal_fu_ops:
            if step not in pro['fu']:
                err(key, step, f"prologue FU op exists but no PROLOGUE_FU packet")
        
        # Check that prologue routing is set for ports that carry data from
        # prologue operations (data not available in first iteration)
        for op in step_ops:
            if op['invalid_iterations'] > 0:
                # This op is prologue - its SOURCE ports need prologue routing
                for s in op['src']:
                    if is_port(s):
                        port_idx = PORT_IDX[s]
                        # Check if routing xbar uses this port
                        port_1based = port_idx + 1
                        uses_port = False
                        for i in range(8):
                            if step in ctrls and ctrls[step]['routing'][i] == port_1based:
                                uses_port = True
                                break
                        if uses_port:
                            # Should have prologue routing for this port
                            if step not in pro['routing'] or port_1based not in pro['routing'][step]:
                                err(key, step, f"prologue op uses port {s} but no PROLOGUE_ROUTING_XBAR for inport {port_1based}")

# Print results
if errors:
    print(f"\n{'='*60}")
    print(f"ERRORS FOUND: {len(errors)}")
    print(f"{'='*60}")
    for e in errors:
        print(f"  {e}")
else:
    print("\nAll checks passed!")
