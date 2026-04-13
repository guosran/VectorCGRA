import yaml
with open('validation/test/fir4x4.yaml') as f:
    y = yaml.load(f, Loader=yaml.FullLoader)

cores = y['array_config']['cores']
tile_ops = {}
tile_out = {}
tile_in = {}

d2o = {'NORTH': 'SOUTH', 'SOUTH': 'NORTH', 'WEST': 'EAST', 'EAST': 'WEST'}
d2n = {'NORTH': 4, 'SOUTH': -4, 'WEST': -1, 'EAST': 1}

for core in cores:
    tid = core['column'] + core['row'] * 4
    tile_ops[tid] = {}
    tile_out[tid] = {}
    tile_in[tid] = {}
    for entry in core['entries']:
        for instr in entry['instructions']:
            idx = instr['index_per_ii']
            if idx not in tile_ops[tid]:
                tile_ops[tid][idx] = []
                tile_out[tid][idx] = set()
                tile_in[tid][idx] = set()
            for op in instr['operations']:
                ip = op.get('invalid_iterations', 0) > 0
                srcs = [s['operand'] for s in op.get('src_operands', [])]
                dsts = [d['operand'] for d in op.get('dst_operands', [])]
                tile_ops[tid][idx].append((op['opcode'], srcs, dsts, ip))
                for d in dsts:
                    if d.upper() in d2o:
                        tile_out[tid][idx].add(d.upper())
                for s in srcs:
                    if s.upper() in d2o:
                        tile_in[tid][idx].add((s.upper(), ip))

mc = 0
nc = 0
for tid in sorted(tile_in.keys()):
    for step in sorted(tile_in[tid].keys()):
        for pn, ip in tile_in[tid][step]:
            nt = tid + d2n[pn]
            op = d2o[pn]
            np2 = False
            npl = None
            if nt in tile_out and step in tile_out[nt] and op in tile_out[nt][step]:
                np2 = True
                for (o2, s2, d2, f2) in tile_ops.get(nt,{}).get(step,[]):
                    if op in [x.upper() for x in d2]:
                        npl = f2
            if not np2 and not ip:
                nc += 1
                print(f'NO_PROD: T{tid} s{step} needs {pn} from T{nt}')
            elif npl and not ip:
                mc += 1
                print(f'MISMATCH: T{tid} s{step} needs {pn} from T{nt}(prol)')
print(f'MISMATCH={mc} NO_PROD={nc}')
