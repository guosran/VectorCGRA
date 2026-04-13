import yaml

with open('validation/test/spmv.yaml') as f:
    y = yaml.load(f, Loader=yaml.FullLoader)

# Build a map: tile_id -> step -> list of (opcode, srcs, dsts, is_prologue)
cores = y['array_config']['cores']
tile_ops = {}  # tile_id -> {step: [(opcode, srcs, dsts, is_prologue)]}

# Also build: tile_id -> step -> set of output_ports
# And: tile_id -> step -> set of input_ports_needed
tile_output_ports = {}  # tile_id -> {step: set of port_names}
tile_input_ports = {}   # tile_id -> {step: set of (port_name, is_prologue)}

dir_to_opposite = {'NORTH': 'SOUTH', 'SOUTH': 'NORTH', 'WEST': 'EAST', 'EAST': 'WEST'}
dir_to_neighbor_offset = {'NORTH': 4, 'SOUTH': -4, 'WEST': -1, 'EAST': 1}

for core in cores:
    tid = core['column'] + core['row'] * 4
    tile_ops[tid] = {}
    tile_output_ports[tid] = {}
    tile_input_ports[tid] = {}
    for entry in core['entries']:
        for instr in entry['instructions']:
            idx = instr['index_per_ii']
            if idx not in tile_ops[tid]:
                tile_ops[tid][idx] = []
                tile_output_ports[tid][idx] = set()
                tile_input_ports[tid][idx] = set()
            for op in instr['operations']:
                is_prol = op.get('invalid_iterations', 0) > 0
                srcs = [s['operand'] for s in op.get('src_operands', [])]
                dsts = [d['operand'] for d in op.get('dst_operands', [])]
                tile_ops[tid][idx].append((op['opcode'], srcs, dsts, is_prol))
                for d in dsts:
                    if d.upper() in ('NORTH', 'SOUTH', 'WEST', 'EAST'):
                        tile_output_ports[tid][idx].add(d.upper())
                for s in srcs:
                    if s.upper() in ('NORTH', 'SOUTH', 'WEST', 'EAST'):
                        tile_input_ports[tid][idx].add((s.upper(), is_prol))

# Now check: for each tile, for each step, for each input port needed,
# check if the neighbor tile produces data on the opposite port at the same step.
print("=== Checking inter-tile data flow ===")
problems = []
for tid in sorted(tile_input_ports.keys()):
    for step in sorted(tile_input_ports[tid].keys()):
        for port_name, is_prol in tile_input_ports[tid][step]:
            neighbor_tid = tid + dir_to_neighbor_offset[port_name]
            opposite_port = dir_to_opposite[port_name]
            
            # Check if neighbor produces data at this step
            neighbor_produces = False
            neighbor_prol = None
            if neighbor_tid in tile_output_ports:
                if step in tile_output_ports[neighbor_tid]:
                    if opposite_port in tile_output_ports[neighbor_tid][step]:
                        neighbor_produces = True
                        # Check if neighbor's output is prologue
                        for (opc, srcs, dsts, np_flag) in tile_ops.get(neighbor_tid, {}).get(step, []):
                            if opposite_port in [d.upper() for d in dsts]:
                                neighbor_prol = np_flag
            
            status = ""
            if not neighbor_produces:
                status = "NO_PRODUCER"
                problems.append((tid, step, port_name, is_prol, neighbor_tid, status))
            elif neighbor_prol and not is_prol:
                status = "MISMATCH: consumer normal but producer IS prologue"
                problems.append((tid, step, port_name, is_prol, neighbor_tid, status))
            elif not neighbor_prol and is_prol:
                status = "WARN: consumer prologue but producer NOT prologue"
            else:
                status = "OK"
            
            prol_str = "*" if is_prol else " "
            print(f"  Tile {tid:2d} step {step:2d} {prol_str} needs {port_name:5s} <- Tile {neighbor_tid:2d} sends {opposite_port:5s}: {status}")

print("\n=== PROBLEMS ===")
for (tid, step, port, is_prol, ntid, status) in problems:
    prol_str = "prologue" if is_prol else "normal"
    print(f"  Tile {tid:2d} step {step:2d} ({prol_str}) needs {port} from Tile {ntid}: {status}")
    if tid in tile_ops and step in tile_ops[tid]:
        for (opc, srcs, dsts, np_flag) in tile_ops[tid][step]:
            np_str = "*" if np_flag else " "
            print(f"    {np_str} {opc}: src={srcs} dst={dsts}")
    if ntid in tile_ops and step in tile_ops[ntid]:
        print(f"    Neighbor Tile {ntid} step {step}:")
        for (opc, srcs, dsts, np_flag) in tile_ops[ntid][step]:
            np_str = "*" if np_flag else " "
            print(f"      {np_str} {opc}: src={srcs} dst={dsts}")
    else:
        print(f"    Neighbor Tile {ntid} has NO operations at step {step}")
