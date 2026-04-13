import yaml

with open('validation/test/fir4x4.yaml') as f:
    y = yaml.load(f, Loader=yaml.FullLoader)

# Print FIR operations for tiles/steps that have NO_PROD:
# NO_PROD: T2 s3 needs NORTH from T6
# NO_PROD: T3 s4 needs NORTH from T7
# NO_PROD: T6 s2 needs NORTH from T10
# NO_PROD: T7 s3 needs NORTH from T11
# NO_PROD: T8 s4 needs SOUTH from T4
# NO_PROD: T10 s1 needs EAST from T11
# NO_PROD: T11 s2 needs WEST from T10

targets = [(2,3), (3,4), (6,2), (7,3), (8,4), (10,1), (11,2)]
cores = y['array_config']['cores']
for core in cores:
    tid = core['column'] + core['row'] * 4
    for entry in core['entries']:
        for instr in entry['instructions']:
            idx = instr['index_per_ii']
            if (tid, idx) in targets:
                print(f'Tile {tid} step {idx}:')
                for op in instr['operations']:
                    ip = op.get('invalid_iterations', 0) > 0
                    srcs = [s['operand'] for s in op.get('src_operands', [])]
                    dsts = [d['operand'] for d in op.get('dst_operands', [])]
                    print(f'  {"*" if ip else " "} {op["opcode"]}: src={srcs} dst={dsts}')
