#!/usr/bin/env python3
"""
Analyze SpMV YAML to find circular dependencies and prologue issues.
"""

import yaml
import sys
from collections import defaultdict

def direction_to_idx(d):
    return {'NORTH': 0, 'SOUTH': 1, 'WEST': 2, 'EAST': 3}[d]

def idx_to_direction(i):
    return ['NORTH', 'SOUTH', 'WEST', 'EAST'][i]

def tile_id(col, row, width=4):
    return col + row * width

def neighbor(tid, direction, width=4, height=4):
    """Given tile_id and direction, return the tile that SENDS data to this tile from that direction."""
    col = tid % width
    row = tid // width
    if direction == 'NORTH':
        # Data from NORTH means from tile above (row+1), which sends SOUTH
        if row + 1 < height:
            return tile_id(col, row + 1, width)
        return None
    elif direction == 'SOUTH':
        if row - 1 >= 0:
            return tile_id(col, row - 1, width)
        return None  # boundary
    elif direction == 'WEST':
        if col - 1 >= 0:
            return tile_id(col - 1, row, width)
        return None
    elif direction == 'EAST':
        if col + 1 < width:
            return tile_id(col + 1, row, width)
        return None
    return None

# Actually in mesh: tile[i].send_data[NORTH] → tile[i+width].recv_data[SOUTH]
# So if tile X needs data from NORTH inport, it comes from tile X+width's SOUTH outport.
# Wait, the prompt says: "In CgraRTL mesh: tile[i].send_data[NORTH] → tile[i+width].recv_data[SOUTH]"
# So tile[i] SENDS NORTH → goes to tile[i+width] SOUTH inport.
# If tile X reads from NORTH inport, that data came from tile X+width (the tile above), which sent it SOUTH? No.
# Actually: tile[i].send_data[NORTH] -> tile[i+width].recv_data[SOUTH]
# This means: tile i's NORTH outport connects to tile (i+width)'s SOUTH inport.
# So tile i SENDS data NORTH, and tile i+width RECEIVES it at its SOUTH inport.
# 
# If tile X is reading from its NORTH inport, who sends to tile X's NORTH inport?
# tile X's NORTH inport = tile[X].recv_data[NORTH] = tile[X].recv_data[0]
# In the mesh: tile[j].send_data[SOUTH] -> tile[j-width].recv_data[NORTH]
# So tile X+width sends SOUTH, which goes to tile X's NORTH inport? No...
# tile[j].send_data[SOUTH] = tile[j].send_data[1] -> tile[j-width].recv_data[NORTH] = tile[j-width].recv_data[0]
# So j-width = X => j = X+width. So tile X+width's SOUTH outport feeds tile X's NORTH inport.
# 
# Correcting the neighbor function:
def sender_of(tid, inport_direction, width=4, height=4):
    """Given tile tid receiving on inport_direction, who is the sender and what outport direction?"""
    col = tid % width
    row = tid // width
    if inport_direction == 'NORTH':
        # tile[X+width].send_data[SOUTH] -> tile[X].recv_data[NORTH]
        sender_row = row + 1
        if sender_row < height:
            return (tile_id(col, sender_row, width), 'SOUTH')
        return None
    elif inport_direction == 'SOUTH':
        # tile[X-width].send_data[NORTH] -> tile[X].recv_data[SOUTH]
        sender_row = row - 1
        if sender_row >= 0:
            return (tile_id(col, sender_row, width), 'NORTH')
        return None
    elif inport_direction == 'WEST':
        # tile[X-1].send_data[EAST] -> tile[X].recv_data[WEST]
        sender_col = col - 1
        if sender_col >= 0:
            return (tile_id(sender_col, row, width), 'EAST')
        return None
    elif inport_direction == 'EAST':
        # tile[X+1].send_data[WEST] -> tile[X].recv_data[EAST]
        sender_col = col + 1
        if sender_col < width:
            return (tile_id(sender_col, row, width), 'WEST')
        return None
    return None

def _type(operand):
    impl = operand['operand']
    if impl[0] == "$":
        return 'REG'
    elif impl.upper() in ['NORTH', 'SOUTH', 'WEST', 'EAST']:
        return 'PORT'
    else:
        return 'IMM'

def _is_take_up_fu_operation(operation):
    if operation['opcode'] in ('MOV', 'DATA_MOV', 'CTRL_MOV'):
        src = operation.get('src_operands', [])
        if len(src) == 1 and _type(src[0]) in ('PORT', 'REG'):
            return False
    return True

with open('validation/test/spmv.yaml', 'r') as f:
    data = yaml.safe_load(f)

cores = data['array_config']['cores']
ii = data['array_config']['compiled_ii']  # 15

print(f"Compiled II = {ii}")
print(f"Cores: {len(cores)}")

# Build per-tile, per-step info
# tile_steps[tile_id][step] = list of operations with their src/dst
tile_info = {}  # tile_id -> {col, row, steps: {step -> {operations, ...}}}

for core in cores:
    col, row = core['column'], core['row']
    tid = tile_id(col, row)
    instructions = core['entries'][0]['instructions']
    steps = {}
    for instr in instructions:
        step = instr['index_per_ii']
        ops = instr['operations']
        steps[step] = ops
    tile_info[tid] = {'col': col, 'row': row, 'steps': steps}

# For each tile and step, determine:
# 1. What port inputs are needed (for routing crossbar)
# 2. What port outputs are produced
# 3. Whether it's prologued (invalid_iterations > 0)
print("\n" + "="*80)
print("PER-TILE, PER-STEP ANALYSIS")
print("="*80)

# Collect all port reads and writes per tile per step
# port_reads[tid][step] = set of (direction, is_prologued)
# port_writes[tid][step] = set of direction (outport)
port_reads = defaultdict(lambda: defaultdict(list))
port_writes = defaultdict(lambda: defaultdict(list))
step_fu_op = defaultdict(dict)  # tid -> step -> fu_opcode

for tid, info in sorted(tile_info.items()):
    for step in range(ii):
        if step in info['steps']:
            ops = info['steps'][step]
            # Determine the FU operation
            fu_idx = -1
            for i, op in enumerate(ops):
                if _is_take_up_fu_operation(op):
                    fu_idx = i
            if fu_idx == -1:
                step_fu_op[tid][step] = 'NAH'
            else:
                step_fu_op[tid][step] = ops[fu_idx]['opcode']
            
            for op in ops:
                is_prologue = op.get('invalid_iterations', 0) > 0
                for src in op.get('src_operands', []):
                    if _type(src) == 'PORT':
                        port_reads[tid][step].append((src['operand'], is_prologue, op['opcode']))
                for dst in op.get('dst_operands', []):
                    if _type(dst) == 'PORT':
                        port_writes[tid][step].append((dst['operand'], is_prologue, op['opcode']))
        else:
            step_fu_op[tid][step] = 'NAH(empty)'

# Print summary for each tile
for tid in sorted(tile_info.keys()):
    info = tile_info[tid]
    print(f"\n--- Tile {tid} (col={info['col']}, row={info['row']}) ---")
    for step in range(ii):
        fu_op = step_fu_op[tid].get(step, 'NAH(empty)')
        reads = port_reads[tid][step]
        writes = port_writes[tid][step]
        if reads or writes or fu_op not in ('NAH(empty)', 'NAH'):
            read_str = ', '.join([f"{d}({'P' if p else 'NP'},{op})" for d, p, op in reads])
            write_str = ', '.join([f"{d}({'P' if p else 'NP'},{op})" for d, p, op in writes])
            print(f"  step {step:2d}: FU={fu_op:20s} reads=[{read_str}] writes=[{write_str}]")

# Now analyze circular dependencies
# At each step, a tile's routing crossbar needs ALL required port inputs to be present.
# If tile A at step X needs input from tile B, but tile B is stuck at step Y needing
# input from tile A, we have a circular dependency.

# For iteration 0 (first iteration), prologued inputs are skipped.
# For subsequent iterations, all inputs must be satisfied.

# Let's check: for each pair of vertically/horizontally adjacent tiles,
# can they have steps where they simultaneously need each other's output?

print("\n" + "="*80)
print("CIRCULAR DEPENDENCY ANALYSIS (Iteration > 0, no prologue)")
print("="*80)

# Build: for each tile at each step, what tile+outport does it need?
# needs[tid][step] = list of (sender_tid, sender_outport_dir)
needs = defaultdict(lambda: defaultdict(list))
produces = defaultdict(lambda: defaultdict(list))

for tid in tile_info:
    for step in range(ii):
        for (dir_name, is_prologue, op_name) in port_reads[tid][step]:
            sender_info = sender_of(tid, dir_name)
            if sender_info:
                sender_tid, sender_outport = sender_info
                needs[tid][step].append((sender_tid, sender_outport, dir_name, is_prologue))
        for (dir_name, is_prologue, op_name) in port_writes[tid][step]:
            produces[tid][step].append((dir_name, is_prologue))

# Check all pairs for circular dependencies
# The crossbar is ALL-OR-NOTHING: a tile at step X blocks until ALL port inputs for step X are present.
# The 1-cycle channel latency means data sent at cycle T arrives at cycle T+1.
# 
# Critical insight: If tile A is at step X and needs data from tile B,
# tile B must have ALREADY sent that data on a previous step (which then sits in the channel).
# If tile B hasn't reached that step yet, tile A blocks.
# But if tile B is also blocked waiting for tile A, we have a deadlock.

# For the FIRST iteration: prologued inputs can be skipped (prologue counter mechanism).
# For subsequent iterations: ALL inputs must be present.

# Let's see what the expected step progression looks like.
# All tiles start at step 0 and ideally progress in lockstep.
# But with 1-cycle channel latency, a tile producing on step X means the consumer 
# can see it when the consumer is at step X+1 (or later).
#
# Key question: Can two adjacent tiles reach their respective steps at the same time,
# where each needs the other's output from that same step?

print("\nChecking for same-step circular dependencies between adjacent tiles:")
for tid_a in sorted(tile_info.keys()):
    for step_a in range(ii):
        for (sender_tid, sender_outport, my_inport, is_prologue_a) in needs[tid_a][step_a]:
            # Does the sender also need something from tid_a at the same step?
            for (their_sender, their_outport, their_inport, is_prologue_b) in needs[sender_tid][step_a]:
                if their_sender == tid_a:
                    prol_note = ""
                    if is_prologue_a:
                        prol_note += " [A is prologued]"
                    if is_prologue_b:
                        prol_note += " [B is prologued]"
                    print(f"  SAME-STEP CIRCULAR: tile{tid_a}(s{step_a}) needs tile{sender_tid}.{sender_outport} "
                          f"AND tile{sender_tid}(s{step_a}) needs tile{tid_a}.{their_outport}{prol_note}")

# Also check cross-step circular dependencies where one is 1 step ahead
print("\nChecking for step+1 circular dependencies:")
for tid_a in sorted(tile_info.keys()):
    for step_a in range(ii):
        for (sender_tid, sender_outport, my_inport, is_prologue_a) in needs[tid_a][step_a]:
            step_b = (step_a + 1) % ii
            for (their_sender, their_outport, their_inport, is_prologue_b) in needs[sender_tid][step_b]:
                if their_sender == tid_a:
                    prol_note = ""
                    if is_prologue_a:
                        prol_note += " [A is prologued]"
                    if is_prologue_b:
                        prol_note += " [B is prologued]"
                    print(f"  STEP+1 CIRCULAR: tile{tid_a}(s{step_a}) needs tile{sender_tid}.{sender_outport} "
                          f"AND tile{sender_tid}(s{step_b}) needs tile{tid_a}.{their_outport}{prol_note}")

# Now check the actual deadlock scenario from the prompt
print("\n" + "="*80)
print("STUCK STATE ANALYSIS (from prompt)")
print("="*80)

stuck_steps = {
    0: 6, 1: 6, 2: 4, 3: 3, 4: 5, 5: 3, 6: 8, 7: 1,
    8: None, 9: 8, 10: None, 11: 2, 12: 2, 13: 0, 14: 7
}

for tid in sorted(stuck_steps.keys()):
    step = stuck_steps[tid]
    if step is None:
        print(f"  Tile {tid}: stuck step unknown")
        continue
    fu_op = step_fu_op[tid].get(step, '?')
    reads = port_reads[tid][step]
    writes = port_writes[tid][step]
    read_str = ', '.join([f"{d}({'P' if p else 'NP'},{op})" for d, p, op in reads])
    write_str = ', '.join([f"{d}({'P' if p else 'NP'},{op})" for d, p, op in writes])
    
    # Check what this tile needs
    need_info = needs[tid][step]
    need_str = ', '.join([f"t{s_tid}.{s_out}(inport={my_in},prol={prol})" for s_tid, s_out, my_in, prol in need_info])
    
    print(f"  Tile {tid:2d} step {step:2d}: FU={fu_op:20s} needs=[{need_str}]")
    print(f"      reads=[{read_str}] writes=[{write_str}]")

# Check for prologue that should break cycles
print("\n" + "="*80)
print("PROLOGUE STATUS FOR CIRCULAR PAIRS")
print("="*80)

# The key circular pairs from prompt:
# t0(s6) <-> t4(s5): t0 needs NORTH(from t4), t4 needs SOUTH(from t0)
pairs = [
    (0, 6, 4, 5),
    (1, 6, 5, 3),
    (2, 4, 6, 8),
]

for tid_a, step_a, tid_b, step_b in pairs:
    print(f"\n  --- t{tid_a}(s{step_a}) vs t{tid_b}(s{step_b}) ---")
    for (d, p, op) in port_reads[tid_a][step_a]:
        sender = sender_of(tid_a, d)
        if sender and sender[0] == tid_b:
            print(f"    t{tid_a}(s{step_a}) reads {d} from t{tid_b}, prologue={p}, op={op}")
    for (d, p, op) in port_reads[tid_b][step_b]:
        sender = sender_of(tid_b, d)
        if sender and sender[0] == tid_a:
            print(f"    t{tid_b}(s{step_b}) reads {d} from t{tid_a}, prologue={p}, op={op}")

# Understand what step each tile first produces output going to the other
print("\n" + "="*80)
print("FIRST PRODUCTION STEPS")
print("="*80)
for tid in sorted(tile_info.keys()):
    info = tile_info[tid]
    for step in range(ii):
        for (d, p, op) in port_writes[tid][step]:
            # who receives this?
            col, row = info['col'], info['row']
            if d == 'NORTH':
                recv_tid = tile_id(col, row + 1) if row + 1 < 4 else None
            elif d == 'SOUTH':
                recv_tid = tile_id(col, row - 1) if row - 1 >= 0 else None
            elif d == 'EAST':
                recv_tid = tile_id(col + 1, row) if col + 1 < 4 else None
            elif d == 'WEST':
                recv_tid = tile_id(col - 1, row) if col - 1 >= 0 else None
            else:
                recv_tid = None
            if recv_tid is not None and recv_tid in tile_info:
                prol_str = "PROL" if p else "NOPROL"
                print(f"  t{tid}(s{step:2d}) sends {d:5s} -> t{recv_tid} [{prol_str}] op={op}")
