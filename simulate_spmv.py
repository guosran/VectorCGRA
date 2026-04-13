#!/usr/bin/env python3
"""
Simulate the step-by-step progression of tiles in SPMV to find where deadlock occurs.
Models: all-or-nothing crossbar, 1-cycle channel latency, 2-entry channel buffers.
Prologue mechanism: during first iteration, prologued inputs are not required.
"""

import yaml
from collections import defaultdict

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

def tile_id(col, row, width=4):
    return col + row * width

def sender_of(tid, inport_direction, width=4, height=4):
    col = tid % width
    row = tid // width
    if inport_direction == 'NORTH':
        sender_row = row + 1
        if sender_row < height: return (tile_id(col, sender_row, width), 'SOUTH')
    elif inport_direction == 'SOUTH':
        sender_row = row - 1
        if sender_row >= 0: return (tile_id(col, sender_row, width), 'NORTH')
    elif inport_direction == 'WEST':
        sender_col = col - 1
        if sender_col >= 0: return (tile_id(sender_col, row, width), 'EAST')
    elif inport_direction == 'EAST':
        sender_col = col + 1
        if sender_col < width: return (tile_id(sender_col, row, width), 'WEST')
    return None

def receiver_of(tid, outport_direction, width=4, height=4):
    col = tid % width
    row = tid // width
    if outport_direction == 'NORTH':
        recv_row = row + 1
        if recv_row < height: return (tile_id(col, recv_row, width), 'SOUTH')
    elif outport_direction == 'SOUTH':
        recv_row = row - 1
        if recv_row >= 0: return (tile_id(col, recv_row, width), 'NORTH')
    elif outport_direction == 'EAST':
        recv_col = col + 1
        if recv_col < width: return (tile_id(recv_col, row, width), 'WEST')
    elif outport_direction == 'WEST':
        recv_col = col - 1
        if recv_col >= 0: return (tile_id(recv_col, row, width), 'EAST')
    return None

with open('validation/test/spmv.yaml', 'r') as f:
    data = yaml.safe_load(f)

cores = data['array_config']['cores']
ii = data['array_config']['compiled_ii']

# Build per-tile step info
tile_steps = {}  # tid -> step -> {port_reads: [(dir, is_prologue)], port_writes: [dir]}

for core in cores:
    col, row = core['column'], core['row']
    tid = tile_id(col, row)
    instructions = core['entries'][0]['instructions']
    steps = {}
    for instr in instructions:
        step = instr['index_per_ii']
        reads = []
        writes = []
        for op in instr['operations']:
            is_prol = op.get('invalid_iterations', 0) > 0
            opcode = op.get('opcode', '')
            src_list = op.get('src_operands', [])
            dst_list = op.get('dst_operands', [])
            
            for idx, src in enumerate(src_list):
                if _type(src) == 'PORT':
                    # PHI_START/PHI_CONST: src_operands[1] is always prologued (recurrence edge)
                    src_prol = is_prol
                    if opcode in ('PHI_START', 'PHI_CONST') and idx == 1:
                        src_prol = True
                    reads.append((src['operand'], src_prol))
            for dst in dst_list:
                if _type(dst) == 'PORT':
                    writes.append((dst['operand'], is_prol))
        steps[step] = {'reads': reads, 'writes': writes}
    tile_steps[tid] = steps

# Fill empty steps
for tid in range(16):
    if tid not in tile_steps:
        tile_steps[tid] = {}
    for step in range(ii):
        if step not in tile_steps[tid]:
            tile_steps[tid][step] = {'reads': [], 'writes': []}

# Simulate the all-or-nothing progression
# Each tile has a current_step (within [0, ii-1])
# Each tile also has an iteration counter
# Channels between tiles: 2-entry FIFO with 1-cycle latency

# For simplicity, model just the routing crossbar blocking.
# A tile can advance its step if:
#   For each port read at current step:
#     If prologue and iteration == 0: skip (prologue allows it)
#     Else: data must be present in the inport channel

# When a tile advances, it:
#   Consumes data from required inport channels
#   Produces data to outport channels (which arrive at neighbor's inport after 1 cycle)

# Channel model: (sender_tid, outport_dir) -> list of data items in flight
# channels[receiver_tid][inport_dir] = deque of items (max 2)

from collections import deque

class Channel:
    def __init__(self):
        self.buffer = deque()  # items in buffer (arrived, ready to consume)
        self.in_flight = None  # item sent this cycle, arrives next cycle
        
    def has_data(self):
        return len(self.buffer) > 0
    
    def can_accept(self):
        return len(self.buffer) < 2
    
    def send(self, data):
        """Send data into channel (will be available next cycle)"""
        assert self.in_flight is None, "Already sent this cycle"
        self.in_flight = data
        
    def consume(self):
        """Consume one item from buffer"""
        assert len(self.buffer) > 0
        return self.buffer.popleft()
    
    def tick(self):
        """Advance one cycle: in_flight item arrives in buffer"""
        if self.in_flight is not None:
            self.buffer.append(self.in_flight)
            self.in_flight = None

# Initialize channels
channels = {}  # (recv_tid, inport_dir) -> Channel
for tid in range(16):
    for d in ['NORTH', 'SOUTH', 'WEST', 'EAST']:
        channels[(tid, d)] = Channel()

# Tile state
current_step = [0] * 16
current_iter = [0] * 16
done_for_cycle = [False] * 16  # whether the tile has already advanced this cycle

active_tiles = set(tile_steps.keys()) & set(range(16))

print(f"Active tiles: {sorted(active_tiles)}")
print(f"II = {ii}")

max_cycles = 100
for cycle in range(max_cycles):
    # Phase 1: Check which tiles can advance
    can_advance = {}
    for tid in range(16):
        if tid not in active_tiles and tid not in tile_steps:
            can_advance[tid] = True  # inactive tile always "advances"
            continue
        
        step = current_step[tid]
        iteration = current_iter[tid]
        step_info = tile_steps[tid][step]
        
        # Check all port reads
        blocked = False
        blocked_on = []
        for (dir_name, is_prologue) in step_info['reads']:
            if is_prologue and iteration == 0:
                continue  # prologue allows skipping on first iteration
            ch = channels[(tid, dir_name)]
            if not ch.has_data():
                blocked = True
                sender = sender_of(tid, dir_name)
                blocked_on.append(f"{dir_name}(from t{sender[0] if sender else '?'})")
        
        # Also check: can all outports accept? (channel not full)
        for (dir_name, is_prologue) in step_info['writes']:
            recv = receiver_of(tid, dir_name)
            if recv:
                recv_tid, recv_inport = recv
                ch = channels[(recv_tid, recv_inport)]
                if not ch.can_accept():
                    blocked = True
                    blocked_on.append(f"OUT_{dir_name}(to t{recv_tid} full)")
        
        can_advance[tid] = not blocked
        if blocked and cycle < 50:
            pass  # will print below
    
    # Print status
    if cycle < 50 or cycle % 10 == 0:
        print(f"\n=== Cycle {cycle} ===")
        for tid in sorted(active_tiles):
            step = current_step[tid]
            it = current_iter[tid]
            adv = "ADV" if can_advance.get(tid, False) else "BLK"
            step_info = tile_steps[tid][step]
            reads = step_info['reads']
            writes = step_info['writes']
            
            read_status = []
            for (d, p) in reads:
                ch = channels[(tid, d)]
                has = ch.has_data()
                skip = p and it == 0
                if skip:
                    read_status.append(f"{d}:SKIP")
                elif has:
                    read_status.append(f"{d}:OK")
                else:
                    sender = sender_of(tid, d)
                    read_status.append(f"{d}:WAIT(t{sender[0] if sender else '?'})")
            
            write_status = []
            for (d, p) in writes:
                recv = receiver_of(tid, d)
                if recv:
                    ch = channels[(recv[0], recv[1])]
                    if ch.can_accept():
                        write_status.append(f"{d}:OK")
                    else:
                        write_status.append(f"{d}:FULL(t{recv[0]})")
                else:
                    write_status.append(f"{d}:BOUNDARY")
            
            r_str = ','.join(read_status) if read_status else 'none'
            w_str = ','.join(write_status) if write_status else 'none'
            print(f"  t{tid:2d} iter={it} step={step:2d} {adv} reads=[{r_str}] writes=[{w_str}]")
    
    # Phase 2: Advance tiles that can
    any_advanced = False
    for tid in range(16):
        if not can_advance.get(tid, False):
            continue
        if tid not in active_tiles:
            continue
            
        step = current_step[tid]
        step_info = tile_steps[tid][step]
        iteration = current_iter[tid]
        
        # Consume required inputs
        for (dir_name, is_prologue) in step_info['reads']:
            if is_prologue and iteration == 0:
                continue
            ch = channels[(tid, dir_name)]
            if ch.has_data():
                ch.consume()
        
        # Produce outputs (send into channels)
        # During first iteration, prologued writes don't produce data
        for (dir_name, is_prologue) in step_info['writes']:
            if is_prologue and iteration == 0:
                continue  # prologue: FU doesn't execute, no output
            recv = receiver_of(tid, dir_name)
            if recv:
                recv_tid, recv_inport = recv
                ch = channels[(recv_tid, recv_inport)]
                if ch.in_flight is None:  # only one send per cycle
                    ch.send(f"t{tid}s{step}")
        
        # Advance step
        current_step[tid] = (step + 1) % ii
        if current_step[tid] == 0:
            current_iter[tid] += 1
        
        any_advanced = True
    
    # Phase 3: Tick all channels (in-flight items arrive)
    for key in channels:
        channels[key].tick()
    
    if not any_advanced and cycle > 2:
        print(f"\n*** DEADLOCK DETECTED at cycle {cycle} ***")
        print("All tiles blocked:")
        for tid in sorted(active_tiles):
            step = current_step[tid]
            it = current_iter[tid]
            step_info = tile_steps[tid][step]
            reads = step_info['reads']
            blocked_on = []
            for (d, p) in reads:
                ch = channels[(tid, d)]
                if not ch.has_data():
                    if not (p and it == 0):
                        sender = sender_of(tid, d)
                        blocked_on.append(f"{d}(from t{sender[0] if sender else '?'}, s{current_step[sender[0]] if sender else '?'})")
            for (d, p) in step_info['writes']:
                recv = receiver_of(tid, d)
                if recv:
                    ch = channels[(recv[0], recv[1])]
                    if not ch.can_accept():
                        blocked_on.append(f"OUT_{d}(to t{recv[0]} buf={len(ch.buffer)})")
            print(f"  t{tid:2d} iter={it} step={step:2d} blocked_on: {blocked_on}")
        break

print("\nDone.")
