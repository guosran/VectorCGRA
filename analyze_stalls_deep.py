#!/usr/bin/env python3
"""
Deep dive into the 4-cycle overhead per iteration.

The gap distribution shows 89.5% of iterations take exactly 14 cycles 
(compiled II = 10). This script traces the exact cause of those 4 extra cycles.

Key hypotheses:
  H1: RTL bug #281 (multi-dst compute + shared src/dst reg causes +1 stall per 
      CTRL_MOV after back pressure)
  H2: Memory port contention (shared memory bank conflicts)
  H3: Routing congestion (back pressure from tile interconnect)
"""

import json
import yaml
from collections import defaultdict

# Load YAML
with open("validation/test/bicg/bicg.yaml") as f:
    yaml_data = yaml.safe_load(f)

cores = yaml_data["array_config"]["cores"]
compiled_ii = 10
active_tiles = [0, 1, 2, 4, 5, 6, 8, 9, 12, 13]

# Build tile_ops map
tile_ops_map = {}
for core in cores:
    col = core["column"]
    row = core["row"]
    tid = row * 4 + col
    tile_ops_map[tid] = {}
    for entry in core.get("entries", []):
        for instr in entry.get("instructions", []):
            step = instr["index_per_ii"]
            ops = []
            for op in instr.get("operations", []):
                ops.append({
                    "opcode": op["opcode"],
                    "id": op.get("id", "?"),
                    "srcs": [s["operand"] for s in op.get("src_operands", [])],
                    "dsts": [d["operand"] for d in op.get("dst_operands", [])],
                    "invalid_iterations": op.get("invalid_iterations", 0),
                })
            tile_ops_map[tid][step] = ops

# Read trace and do cycle-by-cycle analysis for a few representative "gap=14" iterations
# Focus on one tile (e.g., tile 5) to understand why 10 steps take 14 cycles

print("=" * 100)
print("CYCLE-BY-CYCLE ANALYSIS: Why does 10 ctrl steps take 14 wall-clock cycles?")
print("=" * 100)

# Read the trace
tile_traces = {tid: [] for tid in active_tiles}
with open("trace_output/trace_bicg4x4_4x4_Mesh.jsonl") as f:
    for line in f:
        if not line.strip():
            continue
        data = json.loads(line)
        cycle = data["cycle"]
        for tile_data in data["tiles"]:
            tid = tile_data["id"]
            if tid in active_tiles:
                cm = tile_data["ctrl_mem"]
                fu = tile_data["fu"]
                tile_traces[tid].append({
                    "cycle": cycle,
                    "pc": cm["addr"],
                    "times": cm["times"],
                    "started": cm["started"],
                    "complete": cm["complete"],
                    "ctrl_val": cm["ctrl_val"],
                    "ctrl_rdy": cm["ctrl_rdy"],
                    "op": fu["operation"],
                    "op_sym": fu["operation_symbol"],
                    "fu_in_val": [inp["val"] for inp in fu["inputs"]],
                    "fu_in_rdy": [inp["rdy"] for inp in fu["inputs"]],
                    "fu_out_val": [out["val"] for out in fu["outputs"]],
                    "fu_out_rdy": [out["rdy"] for out in fu["outputs"]],
                    "done_e": tile_data["done_flags"]["element"],
                    "done_fx": tile_data["done_flags"]["fu_xbar"],
                    "done_rx": tile_data["done_flags"]["routing_xbar"],
                    "recv_val": [rd["val"] for rd in tile_data["recv_data"]],
                    "recv_rdy": [rd["rdy"] for rd in tile_data["recv_data"]],
                    "send_val": [sd["val"] for sd in tile_data["send_data"]],
                    "send_rdy": [sd["rdy"] for sd in tile_data["send_data"]],
                    "mem_raddr_val": tile_data["mem_access"]["raddr"]["val"],
                    "mem_waddr_val": tile_data["mem_access"]["waddr"]["val"],
                })

# For each tile, find a stable "gap=14" iteration and print cycle-by-cycle
print("\nPicking a stable iteration (times ~ 300-310) for detailed analysis...\n")

for tid in sorted(active_tiles):
    trace = tile_traces[tid]
    
    # Find wrap-around points
    wraps = []
    for i in range(1, len(trace)):
        if trace[i]["started"] and trace[i-1]["started"]:
            if trace[i-1]["pc"] == compiled_ii - 1 and trace[i]["pc"] == 0:
                wraps.append(i)
    
    # Find a wrap with gap=14
    target_wrap = None
    for wi in range(len(wraps) - 1):
        gap = trace[wraps[wi+1]]["cycle"] - trace[wraps[wi]]["cycle"]
        if gap == 14:
            # Use the middle of the simulation
            if trace[wraps[wi]]["times"] > 200:
                target_wrap = wi
                break
    
    if target_wrap is None:
        # Just use the first gap=14
        for wi in range(len(wraps) - 1):
            gap = trace[wraps[wi+1]]["cycle"] - trace[wraps[wi]]["cycle"]
            if gap == 14:
                target_wrap = wi
                break
    
    if target_wrap is None:
        print(f"Tile {tid}: No gap=14 iteration found")
        continue
    
    start_idx = wraps[target_wrap]
    end_idx = wraps[target_wrap + 1]
    
    print(f"--- Tile {tid} (col={tid%4}, row={tid//4}): "
          f"cycle {trace[start_idx]['cycle']}..{trace[end_idx]['cycle']} "
          f"(gap=14, times={trace[start_idx]['times']}) ---")
    
    dir_names = ["N", "S", "W", "E"]
    for i in range(start_idx, end_idx + 1):
        t = trace[i]
        pc = t["pc"]
        ops = tile_ops_map.get(tid, {}).get(pc, [])
        op_str = "; ".join([op["opcode"] for op in ops]) if ops else "(NOP)"
        
        # Identify stall: same PC as previous
        stall = ""
        if i > start_idx and trace[i-1]["pc"] == pc and trace[i-1]["times"] == t["times"]:
            stall = " *** STALL"
        
        # done flags
        done = f"e{t['done_e']}r{t['done_rx']}f{t['done_fx']}"
        
        # Channel activity
        ch = []
        for pi in range(4):
            rv = t["recv_val"][pi]
            rr = t["recv_rdy"][pi]
            sv = t["send_val"][pi]
            sr = t["send_rdy"][pi]
            if rv or sv:
                ch.append(f"{dir_names[pi]}:r{rv}{rr}s{sv}{sr}")
        ch_str = " ".join(ch) if ch else ""
        
        # Ctrl val/rdy
        cv_str = f"ctrl_v{t['ctrl_val']}r{t['ctrl_rdy']}"
        
        # Memory
        mem_str = ""
        if t["mem_raddr_val"]:
            mem_str += " LD"
        if t["mem_waddr_val"]:
            mem_str += " ST"
        
        print(f"  cyc={t['cycle']:4d} pc={pc} {done} {cv_str} | {op_str:<30s} | {ch_str}{mem_str}{stall}")
    
    print()

# Summary: categorize what stalls the most
print("\n" + "=" * 100)
print("STALL CAUSE CATEGORIZATION")
print("=" * 100)

# For each tile, at each stalling step, check:
#  - Is it waiting for input from a direction? (recv_rdy=1 but recv_val=0)
#  - Is it blocked sending? (send_val=1 but send_rdy=0) 
#  - Is memory busy? (mem request val=1 but not completing)

stall_causes = defaultdict(lambda: defaultdict(int))  # cause -> tile -> count

for tid in sorted(active_tiles):
    trace = tile_traces[tid]
    for i in range(1, len(trace)):
        t = trace[i]
        p = trace[i-1]
        
        if not (t["started"] and p["started"]):
            continue
        if t["pc"] != p["pc"] or t["times"] != p["times"]:
            continue  # Not a stall
        
        # This is a stall cycle. Why?
        pc = t["pc"]
        ops = tile_ops_map.get(tid, {}).get(pc, [])
        
        # Check done flags: which is NOT done?
        e_done = t["done_e"]
        rx_done = t["done_rx"]
        fx_done = t["done_fx"]
        
        if not e_done:
            stall_causes["FU not done (element)"][tid] += 1
        if not rx_done:
            stall_causes["Routing xbar not done"][tid] += 1
        if not fx_done:
            stall_causes["FU xbar not done"][tid] += 1
        
        # Check if any send is blocked (val=1, rdy=0)
        for pi in range(4):
            if t["send_val"][pi] and not t["send_rdy"][pi]:
                dir_name = ["N", "S", "W", "E"][pi]
                stall_causes[f"Send blocked ({dir_name})"][tid] += 1
        
        # Check if waiting for recv (rdy=1 but val=0 on a direction that's needed)
        for pi in range(4):
            if t["recv_rdy"][pi] and not t["recv_val"][pi]:
                # This might be normal if tile doesn't need data from this direction
                pass  # Hard to distinguish from normal idle

print()
for cause in sorted(stall_causes.keys()):
    tiles = stall_causes[cause]
    total = sum(tiles.values())
    tile_str = ", ".join([f"t{tid}:{cnt}" for tid, cnt in sorted(tiles.items())])
    print(f"  {cause}: {total} total ({tile_str})")

print("\n\nDone.")
