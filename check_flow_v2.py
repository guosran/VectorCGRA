"""
Check inter-tile data flow accounting for 1-cycle channel latency.

Data sent at time_step T arrives at the neighboring tile at time_step T+1.
So the consumer at time_step T needs data produced at time_step T-1 from the neighbor.

Since operations are indexed by index_per_ii = time_step % ii,
and different time_steps can map to the same index_per_ii,
we need to check based on time_step, not index_per_ii.

For each consumer operation at time_step T needing PORT data:
  - The producer at the neighbor tile must have an operation at time_step T-1
    that sends on the mesh port that delivers to this consumer. E/W use opposite
    faces. Vertical ports follow CgraRTL: recv NORTH is fed by the tile below
    (dst SOUTH); recv SOUTH is fed by the tile above (dst NORTH).
  - If the consumer is not prologue but the producer is prologue, it's a MISMATCH.
"""
import yaml, sys

yaml_path = sys.argv[1] if len(sys.argv) > 1 else 'validation/test/spmv.yaml'
with open(yaml_path) as f:
    y = yaml.load(f, Loader=yaml.FullLoader)

ii = y['array_config']['compiled_ii']
rows = y['array_config'].get('rows', 4)
cols = y['array_config'].get('columns', 4)
ntiles = rows * cols
print(f"II = {ii}, YAML = {yaml_path}")

cores = y['array_config']['cores']

# Build: tile_id -> {time_step: [(opcode, srcs, dsts, is_prologue, index_per_ii)]}
# Also: tile_id -> {time_step: {port_name: is_prologue}} for outputs
tile_ops = {}
tile_output_by_ts = {}  # tile_id -> {time_step: {port_name: is_prologue}}
tile_input_by_ts = {}   # tile_id -> {time_step: [(port_name, is_prologue, opcode)]}

d2o = {'NORTH': 'SOUTH', 'SOUTH': 'NORTH', 'WEST': 'EAST', 'EAST': 'WEST'}
# tile_id = column + row * cols; NORTH = id - cols, SOUTH = id + cols
d2n = {'NORTH': -cols, 'SOUTH': cols, 'WEST': -1, 'EAST': 1}

for core in cores:
    tid = core['column'] + core['row'] * cols
    tile_ops[tid] = {}
    tile_output_by_ts[tid] = {}
    tile_input_by_ts[tid] = {}
    for entry in core['entries']:
        for instr in entry['instructions']:
            for op in instr['operations']:
                ts = op['time_step']
                ip = op.get('invalid_iterations', 0) > 0
                srcs = [s['operand'] for s in op.get('src_operands', [])]
                dsts = [d['operand'] for d in op.get('dst_operands', [])]
                
                if ts not in tile_ops[tid]:
                    tile_ops[tid][ts] = []
                tile_ops[tid][ts].append((op['opcode'], srcs, dsts, ip, instr['index_per_ii']))
                
                for d in dsts:
                    if d.upper() in d2o:
                        if ts not in tile_output_by_ts[tid]:
                            tile_output_by_ts[tid][ts] = {}
                        tile_output_by_ts[tid][ts][d.upper()] = ip
                
                for s in srcs:
                    if s.upper() in d2o:
                        if ts not in tile_input_by_ts[tid]:
                            tile_input_by_ts[tid][ts] = []
                        tile_input_by_ts[tid][ts].append((s.upper(), ip, op['opcode']))

# Now check: for each consumer at time_step T needing port P:
#   The neighbor at tile_id + offset[P] must produce opposite_port at time_step T-1.
#   Account for wrapping: time_step T-1 could be negative; if T < ii, check T-1+ii for pipelined version
print("\n=== Checking data flow with 1-cycle latency ===")
mismatches = []
no_producers = []
for tid in sorted(tile_input_by_ts.keys()):
    for ts in sorted(tile_input_by_ts[tid].keys()):
        for (port, is_prol, opc) in tile_input_by_ts[tid][ts]:
            # CgraRTL vertical wiring (cgra/CgraRTL.py):
            #   tile[i].send[NORTH] //= tile[i+width].recv[SOUTH]
            #   tile[i].send[SOUTH] //= tile[i-width].recv[NORTH]
            # So recv NORTH on this tile is driven by the tile BELOW (it sends SOUTH).
            # recv SOUTH is driven by the tile ABOVE (it sends NORTH).
            if port == 'NORTH':
                if tid >= (rows - 1) * cols:
                    continue  # bottom row: NORTH from boundary / harness
                ntid = tid + cols
                opp = 'SOUTH'
            elif port == 'SOUTH':
                if tid < cols:
                    continue  # top row: SPM / harness
                ntid = tid - cols
                opp = 'NORTH'
            else:
                ntid = tid + d2n[port]
                opp = d2o[port]
            producer_ts = ts - 1  # 1-cycle latency

            if ntid < 0 or ntid >= ntiles:
                continue  # Mesh boundary: no neighbor tile

            # Check producer at time_step T-1
            found = False
            prod_prol = None
            if ntid in tile_output_by_ts:
                if producer_ts in tile_output_by_ts[ntid]:
                    if opp in tile_output_by_ts[ntid][producer_ts]:
                        found = True
                        prod_prol = tile_output_by_ts[ntid][producer_ts][opp]
                # Also check producer_ts + ii (for wrap-around in pipelined execution)
                if not found and (producer_ts + ii) in tile_output_by_ts[ntid]:
                    if opp in tile_output_by_ts[ntid][producer_ts + ii]:
                        found = True
                        prod_prol = tile_output_by_ts[ntid][producer_ts + ii][opp]
                # Also check producer_ts - ii
                if not found and (producer_ts - ii) in tile_output_by_ts[ntid]:
                    if opp in tile_output_by_ts[ntid][producer_ts - ii]:
                        found = True
                        prod_prol = tile_output_by_ts[ntid][producer_ts - ii][opp]
            
            prol_str = "*" if is_prol else " "
            if not found and not is_prol:
                no_producers.append((tid, ts, port, opc, ntid, producer_ts))
                # print(f"  {prol_str} T{tid} ts={ts} {opc}: needs {port} <- T{ntid} ts={producer_ts}: NO_PRODUCER (normal)")
            elif not found and is_prol:
                pass  # prologue consumer, no producer - expected
            elif found and prod_prol and not is_prol:
                mismatches.append((tid, ts, port, opc, ntid, producer_ts))
                # print(f"  {prol_str} T{tid} ts={ts} {opc}: needs {port} <- T{ntid} ts={producer_ts}: MISMATCH")
            # else: OK

print(f"\n=== RESULTS ===")
print(f"Normal NO_PRODUCER: {len(no_producers)}")
for (tid, ts, port, opc, ntid, pts) in no_producers:
    idx = ts % ii
    print(f"  T{tid} ts={ts}(step={idx}) {opc}: needs {port} <- T{ntid} ts={pts}: NO_PRODUCER")
    # Show what the producer has at that time
    if ntid in tile_ops and pts in tile_ops[ntid]:
        for (o,s,d,p,i) in tile_ops[ntid][pts]:
            print(f"    T{ntid} ts={pts}: {'*' if p else ' '} {o}: src={s} dst={d}")
    else:
        print(f"    T{ntid} has NO ops at ts={pts}")

print(f"\nMISMATCH (normal consumer, prologue producer): {len(mismatches)}")
for (tid, ts, port, opc, ntid, pts) in mismatches:
    idx = ts % ii
    print(f"  T{tid} ts={ts}(step={idx}) {opc}: needs {port} <- T{ntid} ts={pts}: MISMATCH")
