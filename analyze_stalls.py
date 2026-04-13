#!/usr/bin/env python3
"""
Analyze stall patterns in BiCG 4x4 CGRA simulation.

Cross-references the YAML operations with per-tile stall data from the trace
to identify which operations cause stalls and why.
"""

import yaml
import json
import sys
from collections import defaultdict

# Load YAML
with open("validation/test/bicg/bicg.yaml") as f:
    yaml_data = yaml.safe_load(f)

# Build per-tile operation map: tile_id -> {pc_step -> [operations]}
cores = yaml_data["array_config"]["cores"]
compiled_ii = yaml_data["array_config"]["compiled_ii"]
print(f"compiled_ii = {compiled_ii}")
print(f"Number of cores: {len(cores)}")

# Map (col, row) -> flat tile id (row * 4 + col)
tile_ops = {}  # tile_id -> {pc_step -> [(opcode, id, src_operands, dst_operands)]}
for core in cores:
    col = core["column"]
    row = core["row"]
    tile_id = row * 4 + col
    tile_ops[tile_id] = {}
    
    for entry in core.get("entries", []):
        for instr in entry.get("instructions", []):
            pc_step = instr["index_per_ii"]
            ops = []
            for op in instr.get("operations", []):
                opcode = op["opcode"]
                op_id = op.get("id", "?")
                srcs = [s["operand"] for s in op.get("src_operands", [])]
                dsts = [d["operand"] for d in op.get("dst_operands", [])]
                time_step = op.get("time_step", "?")
                invalid_iters = op.get("invalid_iterations", 0)
                ops.append({
                    "opcode": opcode,
                    "id": op_id,
                    "time_step": time_step,
                    "invalid_iterations": invalid_iters,
                    "srcs": srcs,
                    "dsts": dsts,
                })
            tile_ops[tile_id][pc_step] = ops

# Print per-tile operation schedule
print("\n" + "=" * 80)
print("Per-tile operation schedule (PC step -> operation)")
print("=" * 80)
for tid in sorted(tile_ops.keys()):
    print(f"\n--- Tile {tid} (col={tid%4}, row={tid//4}) ---")
    for step in range(compiled_ii):
        ops = tile_ops[tid].get(step, [])
        if ops:
            for op in ops:
                inv = f" [skip first {op['invalid_iterations']} iters]" if op['invalid_iterations'] > 0 else ""
                src_str = ", ".join(op["srcs"])
                dst_str = ", ".join(op["dsts"])
                print(f"  step {step}: {op['opcode']}(id={op['id']}) "
                      f"src=[{src_str}] dst=[{dst_str}]{inv}")
        else:
            print(f"  step {step}: (empty / NOP)")

# Now analyze stalls from the trace
print("\n\n" + "=" * 80)
print("Loading trace for stall analysis...")
print("=" * 80)

# We'll read the trace line by line to avoid loading 59MB into memory
active_tiles = [0, 1, 2, 4, 5, 6, 8, 9, 12, 13]
ii = compiled_ii

# Track per-tile: prev_raddr, prev_times, stall_at_step
prev_state = {}  # tid -> (raddr, times, started)
stall_at_step = defaultdict(lambda: defaultdict(int))  # tid -> step -> count
stall_runs = defaultdict(lambda: defaultdict(list))  # tid -> step -> [run_lengths]
current_run = defaultdict(int)  # tid -> current consecutive stall count

# For II measurement
iter_wrap_cycles = defaultdict(list)
prev_raddr_track = defaultdict(lambda: -1)

total_lines = 0
with open("trace_output/trace_bicg4x4_4x4_Mesh.jsonl") as f:
    for line_num, line in enumerate(f):
        if not line.strip():
            continue
        data = json.loads(line)
        cycle = data["cycle"]
        total_lines += 1
        
        for tile_data in data["tiles"]:
            tid = tile_data["id"]
            if tid not in active_tiles:
                continue
            
            cm = tile_data["ctrl_mem"]
            raddr = cm["addr"]
            times = cm["times"]
            started = cm["started"]
            
            if tid in prev_state:
                p_raddr, p_times, p_started = prev_state[tid]
                
                if started and p_started:
                    # Check for stall: same raddr AND same times
                    if raddr == p_raddr and times == p_times:
                        stall_at_step[tid][raddr] += 1
                        current_run[tid] += 1
                    else:
                        if current_run[tid] > 0:
                            stall_runs[tid][p_raddr].append(current_run[tid])
                            current_run[tid] = 0
                    
                    # PC wrap detection
                    if p_raddr == ii - 1 and raddr == 0:
                        iter_wrap_cycles[tid].append(cycle)
            
            prev_state[tid] = (raddr, times, started)

print(f"Processed {total_lines} cycles from trace.")

# Flush remaining stall runs
for tid in active_tiles:
    if current_run[tid] > 0 and tid in prev_state:
        stall_runs[tid][prev_state[tid][0]].append(current_run[tid])

# Print combined analysis: stall step + YAML operation
print("\n" + "=" * 80)
print("STALL ANALYSIS: Which operations cause stalls?")
print("=" * 80)

for tid in sorted(active_tiles):
    total_stalls = sum(stall_at_step[tid].values())
    print(f"\n--- Tile {tid} (col={tid%4}, row={tid//4}): {total_stalls} total stall cycles ---")
    
    # Sort by stall count descending
    sorted_steps = sorted(stall_at_step[tid].items(), key=lambda x: -x[1])
    
    for step, count in sorted_steps:
        ops = tile_ops.get(tid, {}).get(step, [])
        runs = stall_runs[tid].get(step, [])
        
        # Compute run length statistics
        if runs:
            avg_run = sum(runs) / len(runs)
            max_run = max(runs)
            run_info = f"  ({len(runs)} bursts, avg={avg_run:.1f}, max={max_run})"
        else:
            run_info = f"  ({count} stall cycles)"
        
        if ops:
            for op in ops:
                src_str = ", ".join(op["srcs"])
                dst_str = ", ".join(op["dsts"])
                inv = f" [skip {op['invalid_iterations']}]" if op["invalid_iterations"] > 0 else ""
                print(f"  step {step}: {count:4d} stalls → {op['opcode']}(id={op['id']}) "
                      f"src=[{src_str}] dst=[{dst_str}]{inv}{run_info}")
        else:
            print(f"  step {step}: {count:4d} stalls → (NOP / empty ctrl step){run_info}")

# II gap analysis
print("\n" + "=" * 80)
print("II GAP DISTRIBUTION")
print("=" * 80)

all_gaps = []
for tid in sorted(active_tiles):
    wraps = iter_wrap_cycles[tid]
    if len(wraps) < 2:
        continue
    gaps = [wraps[i+1] - wraps[i] for i in range(len(wraps)-1)]
    all_gaps.extend(gaps)
    
    # Distribution of gaps
    gap_dist = defaultdict(int)
    for g in gaps:
        gap_dist[g] += 1
    
    avg_gap = sum(gaps) / len(gaps)
    print(f"\n  Tile {tid}: avg_rtl_ii={avg_gap:.2f}, {len(wraps)} wraps")
    for g in sorted(gap_dist.keys()):
        bar = "█" * gap_dist[g]
        print(f"    gap={g:3d}: {gap_dist[g]:4d} times  {bar}")

if all_gaps:
    gap_dist_all = defaultdict(int)
    for g in all_gaps:
        gap_dist_all[g] += 1
    print(f"\n  GLOBAL distribution ({len(all_gaps)} gaps):")
    for g in sorted(gap_dist_all.keys()):
        bar = "█" * min(gap_dist_all[g], 100)
        pct = gap_dist_all[g] / len(all_gaps) * 100
        print(f"    gap={g:3d}: {gap_dist_all[g]:4d} ({pct:5.1f}%)  {bar}")

# Identify the back-pressure pattern
print("\n" + "=" * 80)
print("BACK-PRESSURE ANALYSIS (multi-dst compute with same src/dst reg)")
print("=" * 80)
print("Known RTL bug #281: compute ops with >=2 dst ports sharing src/dst reg")
print("cause extra stall cycle on CTRL_MOV/routing ops if back pressure occurs.")
print()

for tid in sorted(tile_ops.keys()):
    for step, ops in sorted(tile_ops[tid].items()):
        for op in ops:
            # Check for multi-dst
            if len(op["dsts"]) >= 2:
                # Check if any dst register is also a src register
                src_regs = [s for s in op["srcs"] if s.startswith("$")]
                dst_regs = [d for d in op["dsts"] if d.startswith("$")]
                shared = set(src_regs) & set(dst_regs)
                if shared:
                    stalls = stall_at_step[tid].get(step, 0)
                    flag = " *** SUSPICIOUS" if stalls > 0 else ""
                    print(f"  Tile {tid} step {step}: {op['opcode']}(id={op['id']}) "
                          f"dsts={op['dsts']} srcs={op['srcs']} "
                          f"shared_regs={shared} stalls={stalls}{flag}")

# Look for routing/CTRL_MOV ops that stall heavily  
print("\n  Routing/CTRL_MOV ops with high stalls:")
for tid in sorted(tile_ops.keys()):
    for step, ops in sorted(tile_ops[tid].items()):
        for op in ops:
            if op["opcode"] in ("CTRL_MOV", "DATA_MOV"):
                stalls = stall_at_step[tid].get(step, 0)
                if stalls > 10:
                    print(f"  Tile {tid} step {step}: {op['opcode']}(id={op['id']}) "
                          f"src=[{', '.join(op['srcs'])}] dst=[{', '.join(op['dsts'])}] "
                          f"stalls={stalls}")

print("\nDone.")
