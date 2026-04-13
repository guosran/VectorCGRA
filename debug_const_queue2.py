#!/usr/bin/env python3
"""
Debug: run conv test for limited cycles, then inspect tile7 const queue.
"""
import subprocess
import sys
import os

# Run the test but with a hook to print const queue state.
# Instead of modifying the test, let's use a simpler approach:
# Add a temporary tick callback.

# Actually, let's just use pytest with a modified max_cycles and inspect after sim.
# For quick debug, run a minimal version:

os.chdir('/home/x/shiran/VectorCGRA')

# Import everything needed
sys.path.insert(0, '.')

# Avoid relative import issues by going through pytest
# Instead, let's write a focused standalone script that replicates the essential setup

code = '''
import sys, os
os.chdir('/home/x/shiran/VectorCGRA')
sys.path.insert(0, '.')

from pymtl3 import *
from pymtl3.stdlib.test_utils import config_model_with_cmdline_opts, run_sim

# The trick: import the test module's sim_conv function internals
# by reading the test file and exec'ing the relevant setup

import yaml
from lib.util.common import *
from lib.messages import *
from lib.opt_type import *
from lib.cmd_type import *

# Check tile7's const queue entries
# First, let's just verify what packets are generated for tile7
from validation.script_generator import ScriptFactory

yaml_path = 'validation/test/conv/conv_small.yaml'
with open(yaml_path) as f:
    config = yaml.safe_load(f)

NI = 2; NJ = 3; total = 6
base_A = 0; base_B = 6
gep_stride = NJ

ctrl_mem_size = 6
x_tiles = 4; y_tiles = 4
num_mesh_ports = 8
num_tile_inports = num_mesh_ports
num_tile_outports = num_mesh_ports
num_registers_per_reg_bank = 4

DataType = mk_data(32, 1, 1, 1)
CtrlAddrType = mk_bits(clog2(ctrl_mem_size))
CtrlType = mk_ctrl(num_tile_inports, num_tile_outports, num_registers_per_reg_bank)

num_cgra_rows = 1; num_cgra_columns = 1
NocPktType = mk_multi_cgra_noc_pkt(nrouters=num_cgra_rows*num_cgra_columns,
                                    addr_nbits=clog2(x_tiles*y_tiles),
                                    data_nbits=32,
                                    predicate_nbits=1,
                                    ctrl_actions=ctrl_mem_size,
                                    ctrl_mem_size=ctrl_mem_size,
                                    num_tile_inports=num_tile_inports,
                                    num_tile_outports=num_tile_outports,
                                    num_registers_per_reg_bank=num_registers_per_reg_bank)
CgraPayloadType = NocPktType.get_field_type('payload')
IntraCgraPktType = mk_intra_cgra_pkt(x_tiles * y_tiles,
                                      payload_nbits=NocPktType.get_field_type('payload').nbits)

idTo2d_map = {}
for r in range(y_tiles):
    for c in range(x_tiles):
        tile_id = r * x_tiles + c
        idTo2d_map[tile_id] = (c, r)

arg_map = {'arg6': base_A, 'arg7': base_B}

factory = ScriptFactory(yaml_path, CtrlType, IntraCgraPktType, CgraPayloadType,
                        DataType, CtrlAddrType, 0, idTo2d_map, arg_map, gep_stride)
src_opt_pkt0, complete_expected = factory.makeVectorCGRAPkts()

# Print packets for tile7
print("\\n=== Packets destined for tile 7 ===")
for tile_pkts in src_opt_pkt0:
    for pkt in tile_pkts:
        dst = int(pkt.dst)
        if dst == 7:
            cmd = int(pkt.payload.cmd)
            cmd_name = "?"
            for name, val in [("CMD_CONST", CMD_CONST), ("CMD_CONFIG", CMD_CONFIG),
                              ("CMD_CONFIG_COUNT_PER_ITER", CMD_CONFIG_COUNT_PER_ITER),
                              ("CMD_CONFIG_TOTAL_CTRL_COUNT", CMD_CONFIG_TOTAL_CTRL_COUNT),
                              ("CMD_LAUNCH", CMD_LAUNCH), ("CMD_CONFIG_GEP_STRIDE", CMD_CONFIG_GEP_STRIDE)]:
                if cmd == val:
                    cmd_name = name
                    break
            if cmd_name == "CMD_CONST":
                data_val = int(pkt.payload.data.payload)
                data_v = int(pkt.payload.data.val) if hasattr(pkt.payload.data, 'val') else '?'
                print(f"  CMD_CONST: data={data_val}, val={data_v}")
            elif cmd_name == "CMD_CONFIG":
                ctrl_addr = int(pkt.payload.ctrl_addr)
                op = int(pkt.payload.ctrl.operation)
                fu_in = [int(pkt.payload.ctrl.fu_in[i]) for i in range(4)]
                print(f"  CMD_CONFIG: ctrl_addr={ctrl_addr}, op=0x{op:02x}, fu_in={fu_in}")
            elif cmd_name == "CMD_CONFIG_GEP_STRIDE":
                data_val = int(pkt.payload.data.payload)
                print(f"  CMD_CONFIG_GEP_STRIDE: data={data_val}")
            else:
                data_val = int(pkt.payload.data.payload) if hasattr(pkt.payload.data, 'payload') else '?'
                print(f"  {cmd_name}: data={data_val}")

# Also print for tile 11 to see its consts
print("\\n=== Packets destined for tile 11 ===")
for tile_pkts in src_opt_pkt0:
    for pkt in tile_pkts:
        dst = int(pkt.dst)
        if dst == 11:
            cmd = int(pkt.payload.cmd)
            cmd_name = "?"
            for name, val in [("CMD_CONST", CMD_CONST), ("CMD_CONFIG", CMD_CONFIG),
                              ("CMD_CONFIG_COUNT_PER_ITER", CMD_CONFIG_COUNT_PER_ITER),
                              ("CMD_CONFIG_TOTAL_CTRL_COUNT", CMD_CONFIG_TOTAL_CTRL_COUNT),
                              ("CMD_LAUNCH", CMD_LAUNCH), ("CMD_CONFIG_GEP_STRIDE", CMD_CONFIG_GEP_STRIDE)]:
                if cmd == val:
                    cmd_name = name
                    break
            if cmd_name == "CMD_CONST":
                data_val = int(pkt.payload.data.payload)
                print(f"  CMD_CONST: data={data_val}")
            elif cmd_name == "CMD_CONFIG":
                ctrl_addr = int(pkt.payload.ctrl_addr)
                op = int(pkt.payload.ctrl.operation)
                fu_in = [int(pkt.payload.ctrl.fu_in[i]) for i in range(4)]
                print(f"  CMD_CONFIG: ctrl_addr={ctrl_addr}, op=0x{op:02x}, fu_in={fu_in}")
            else:
                data_val = int(pkt.payload.data.payload) if hasattr(pkt.payload.data, 'payload') else '?'
                print(f"  {cmd_name}: data={data_val}")

# Print for tile10
print("\\n=== Packets destined for tile 10 ===")
for tile_pkts in src_opt_pkt0:
    for pkt in tile_pkts:
        dst = int(pkt.dst)
        if dst == 10:
            cmd = int(pkt.payload.cmd)
            for name, val in [("CMD_CONST", CMD_CONST), ("CMD_CONFIG", CMD_CONFIG),
                              ("CMD_CONFIG_COUNT_PER_ITER", CMD_CONFIG_COUNT_PER_ITER),
                              ("CMD_CONFIG_TOTAL_CTRL_COUNT", CMD_CONFIG_TOTAL_CTRL_COUNT),
                              ("CMD_LAUNCH", CMD_LAUNCH)]:
                if cmd == val:
                    cmd_name = name
                    break
            else:
                cmd_name = f"CMD_{cmd}"
            if cmd_name == "CMD_CONST":
                data_val = int(pkt.payload.data.payload)
                print(f"  CMD_CONST: data={data_val}")
            elif cmd_name == "CMD_CONFIG":
                ctrl_addr = int(pkt.payload.ctrl_addr)
                op = int(pkt.payload.ctrl.operation)
                print(f"  CMD_CONFIG: ctrl_addr={ctrl_addr}, op=0x{op:02x}")
            else:
                data_val = int(pkt.payload.data.payload) if hasattr(pkt.payload.data, 'payload') else '?'
                print(f"  {cmd_name}: data={data_val}")
'''

exec(code)
