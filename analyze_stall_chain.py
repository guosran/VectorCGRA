#!/usr/bin/env python3
"""
Analyze the stall chain in the BiCG CGRA simulation.

For each tile, print the cycle-by-cycle view of ctrl_addr (step), 
and show exactly where stalls occur and what causes them.

Focus on tiles 0, 4, 5 and the channels between them.
"""

import sys
import os
import json

# Add VectorCGRA to the path
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))

# We'll modify the test to dump detailed per-cycle channel state.
# But first, let's just analyze the existing ii_trace data by running
# a shorter simulation and capturing crossbar val/rdy signals.

# Actually, let's create a minimal test that dumps the critical signals.

from pymtl3 import *
from pymtl3.datatypes import b1, b2
from pymtl3.stdlib.test_utils import config_model_with_cmdline_opts

from cgra.CgraRTL import CgraRTL
from fu.double.SeqMulAdderRTL import SeqMulAdderRTL
from fu.flexible.FlexibleFuRTL import FlexibleFuRTL
from fu.single.AdderRTL import AdderRTL
from fu.single.DivRTL import DivRTL
from fu.single.GepRTL import GepRTL
from fu.single.GrantRTL import GrantRTL
from fu.single.CompRTL import CompRTL
from fu.single.LogicRTL import LogicRTL
from fu.single.MemUnitRTL import MemUnitRTL
from fu.single.MulRTL import MulRTL
from fu.single.PhiRTL import PhiRTL
from fu.single.RetRTL import RetRTL
from fu.single.SelRTL import SelRTL
from fu.single.ShifterRTL import ShifterRTL
from fu.vector.VectorAdderComboRTL import VectorAdderComboRTL
from fu.vector.VectorMulComboRTL import VectorMulComboRTL
from fu.vector.VectorAllReduceRTL import VectorAllReduceRTL
from lib.basic.val_rdy.SinkRTL import SinkRTL as TestSinkRTL
from lib.basic.val_rdy.SourceRTL import SourceRTL as TestSrcRTL
from lib.messages import *
from lib.opt_type import *
from lib.util.common import *

print("=== Channel latency and stall analysis ===")
print()
print("Tile 0 (row=0,col=0) sends NORTH to tile 4 (row=1,col=0)")
print("Tile 4 (row=1,col=0) sends EAST to tile 5 (row=1,col=1)")
print("Tile 5 (row=1,col=1) sends WEST to tile 4")
print()
print("tile_in_channel latency = 1 (NormalQueueRTL, 2-entry)")
print()
print("Schedule analysis:")
print("  Tile 0 step 1: PHI_START src=($0, EAST) dst=($1, NORTH)")
print("  Tile 4 step 1: PHI_START src=(SOUTH, NORTH) dst=(NORTH, EAST, $1)")
print("  -> Tile 4 step 1 needs SOUTH from tile 0 step 1 output")
print("  -> Same-step dependency with 1-cycle channel latency = 1 cycle stall")
print()
print("  Tile 0 step 8: DATA_MOV src=EAST dst=NORTH")
print("  Tile 4 step 9: ADD src=(SOUTH, NORTH) dst=(EAST, NORTH)")
print("  -> Tile 4 step 9 needs SOUTH from tile 0 step 8")
print("  -> 1-step gap, matches channel latency = 0 stall (in theory)")
print()
print("  Tile 4 step 1: PHI_START dst=(..., EAST)")
print("  Tile 5 step 2: SHL src=WEST (from tile 4 EAST)")
print("  -> 1-step gap, matches channel latency = 0 stall (in theory)")
print()
print("  But cascading effect:")
print("  If tile 4 step 1 is 1 cycle late, ALL tile 4 steps shift by 1 cycle.")
print("  Tile 4 step 1 output (EAST) arrives at tile 5 at step 3 instead of 2.")
print("  Tile 5 step 2 now stalls 1 cycle waiting for tile 4 step 1.")
print()
print("  Then tile 5's stall propagates to tile 1 (tile 5 → tile 1),")
print("  and tile 1's stall propagates to tile 0 (tile 1 → tile 0).")
print("  This creates a full-loop stall chain:")
print("  tile 0 → tile 4 → tile 5 → tile 1 → tile 0")
print()
print("=== Theoretical stall overhead ===")
print("Each tile in the stall chain adds 1 cycle of latency per iteration.")
print("The longest chain in the loop determines the total overhead.")
print()
print("For the same-step dependency (tile 0 step 1 → tile 4 step 1):")
print("  Channel latency = 1 cycle, step gap = 0 → 1 cycle stall")
print()
print("For subsequent dependencies in the chain:")
print("  The stall at tile 4 delays its output by 1 cycle.")
print("  Tile 5 step 2 needs tile 4 step 1 output (1-step gap + channel latency = OK)")
print("  But tile 4's output is 1 cycle late → tile 5 stalls 1 cycle at step 2.")
print("  Similarly, tile 1 stalls 1 cycle, tile 0 stalls 1 cycle.")
print()
print("Total: Each tile in the loop stalls 1 cycle per iteration.")
print("Since the stalls are chained (tile 0 stalls because tile 4 backpressures,")
print("which stalls because tile 5 backpressures, etc.), the total overhead")
print("is determined by the number of SAME-STEP dependencies in the loop.")
print()
print("In this case, only 1 same-step dependency exists (tile 0 → tile 4 at step 1).")
print("But the cascade causes 2 cycles of overhead because:")
print("  1. Tile 4 stalls at step 1 (1 cycle, waiting for tile 0)")
print("  2. Tile 0 stalls at its NEXT step 1 (1 cycle, backpressure from")
print("     downstream tile 4 not consuming data fast enough)")
print()
print("=== Potential fixes ===")
print()
print("1. Change tile_in_channel to BypassQueueRTL (0-cycle when empty)")
print("   Risk: combinational cycle in mesh topology")
print()
print("2. Change tile_in_channel latency to 0 (pure wire)")
print("   Risk: combinational cycle in mesh topology")
print()
print("3. The compiler should account for 1-cycle routing latency")
print("   and NOT schedule same-step producer-consumer across tiles.")
print("   This is the correct long-term fix.")
print()
print("4. Use a PIPE queue instead of NORMAL queue for tile_in_channel.")
print("   PipeQueueRTL allows dequeue and enqueue in the same cycle")
print("   from the perspective of the downstream. Specifically:")
print("   - NormalQueue: send_val depends on registered count (stable)")
print("   - PipeQueue: send_val depends on registered count OR recv_val")
print("   Wait, that's BypassQueue. PipeQueue is different:")
print("   - PipeQueue: recv_rdy is always 1 if send_rdy (pipe-through)")
print()
print("5. Add a channel bypass path that only activates when the routing")
print("   crossbar needs data from a specific inport at the current step.")
print("   This is a selective bypass that avoids combinational cycles")
print("   by only creating the bypass path when needed (controlled by")
print("   the ctrl_mem's current step configuration).")
