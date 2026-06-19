"""
Packet-level debug checks for the generated conv4x4 schedule.

These tests intentionally stop before RTL elaboration. They are meant to catch
generator/prologue mistakes that otherwise only show up after a long Verilator
run near the final loop iterations.
"""

import contextlib
import io

from . import CgraRTL_conv4x4_test_from_yaml as conv
from ...validation.script_generator import ScriptFactory


def _loop_times(extra=0):
  return conv.conv_ctrl_count_per_iter * conv.total + \
         conv.conv_max_scheduled_time_step - conv.conv_ctrl_count_per_iter + \
         1 + extra


def _make_conv_packets(extra=0):
  loop_times = _loop_times(extra)
  script_factory = ScriptFactory(
      path = "validation/test/conv/tmp-generated-instructions.yaml",
      CtrlType = conv.CtrlType,
      IntraCgraPktType = conv.IntraCgraPktType,
      CgraPayloadType = conv.CgraPayloadType,
      TileInType = conv.TileInType,
      FuOutType = conv.FuOutType,
      CMD_CONFIG_input = conv.CMD_CONFIG,
      FuInType = conv.FuInType,
      ii = conv.conv_ctrl_count_per_iter,
      loop_times = loop_times,
      CMD_CONST_input = conv.CMD_CONST,
      CMD_CONFIG_COUNT_PER_ITER_input = conv.CMD_CONFIG_COUNT_PER_ITER,
      CMD_CONFIG_TOTAL_CTRL_COUNT_input = conv.CMD_CONFIG_TOTAL_CTRL_COUNT,
      CMD_CONFIG_PROLOGUE_FU_input = conv.CMD_CONFIG_PROLOGUE_FU,
      CMD_CONFIG_PROLOGUE_ROUTING_CROSSBAR_input = conv.CMD_CONFIG_PROLOGUE_ROUTING_CROSSBAR,
      CMD_CONFIG_PROLOGUE_FU_CROSSBAR_input = conv.CMD_CONFIG_PROLOGUE_FU_CROSSBAR,
      CMD_LAUNCH_input = conv.CMD_LAUNCH,
      DataType = conv.DataType,
      B1Type = conv.b1,
      B2Type = conv.b2,
      RegIdxType = conv.RegIdxType,
      CtrlAddrType = conv.CtrlAddrType,
      DataAddrType = conv.DataAddrType,
      num_registers_per_reg_bank = conv.num_registers_per_reg_bank,
      arg_map = {
          "arg6": conv.base_A,
          "arg7": conv.base_B,
      },
      gep_stride = conv.NJ,
      accumulate_add_to_src_reg = True,
  )
  with contextlib.redirect_stdout(io.StringIO()):
    return script_factory.makeVectorCGRAPkts()


def _config_ctrl(pkts, xy, addr):
  for pkt in pkts[xy]:
    payload = pkt.payload
    if int(payload.cmd) == int(conv.CMD_CONFIG) and int(payload.ctrl_addr) == addr:
      return payload.ctrl
  raise AssertionError(f"missing CONFIG packet for tile {xy} addr {addr}")


def _routing_prologue_counts(pkts, xy, addr, routing_xbar_idx):
  counts = []
  for pkt in pkts[xy]:
    payload = pkt.payload
    if int(payload.cmd) != int(conv.CMD_CONFIG_PROLOGUE_ROUTING_CROSSBAR):
      continue
    if int(payload.ctrl_addr) != addr:
      continue
    if int(payload.ctrl.routing_xbar_outport[0]) != routing_xbar_idx:
      continue
    counts.append(int(payload.data.payload))
  return counts


def _as_ints(values):
  return [int(value) for value in values]


def _total_ctrl_count(pkts, xy):
  counts = []
  for pkt in pkts[xy]:
    payload = pkt.payload
    if int(payload.cmd) == int(conv.CMD_CONFIG_TOTAL_CTRL_COUNT):
      counts.append(int(payload.data.payload))
  return counts


def _const_values(pkts, xy):
  return [
      int(pkt.payload.data.payload)
      for pkt in pkts[xy]
      if int(pkt.payload.cmd) == int(conv.CMD_CONST)
  ]


def test_conv4x4_total_ctrl_count_packet_snapshot():
  pkts = _make_conv_packets()
  active_tiles = [(2, 0), (3, 0), (1, 1), (2, 1),
                  (3, 1), (1, 2), (2, 2), (3, 2)]

  for xy in active_tiles:
    assert _total_ctrl_count(pkts, xy) == [_loop_times()]


def test_conv4x4_total_ctrl_count_extra_reaches_packets():
  pkts = _make_conv_packets(extra=20)

  assert _total_ctrl_count(pkts, (2, 1)) == [_loop_times(extra=20)]
  assert _total_ctrl_count(pkts, (2, 2)) == [_loop_times(extra=20)]


def test_conv4x4_const_queue_order_matches_ctrl_order():
  pkts = _make_conv_packets()

  # Tile 7 executes const-consuming ops in addr order: GEP(arg7),
  # GEP(arg6), DIV(#70). Sorting by time_step would produce [70, 4200, 0].
  assert _const_values(pkts, (3, 1)) == [conv.base_B, conv.base_A, conv.NJ]
  assert _const_values(pkts, (3, 2)) == [0, conv.NJ]


def test_conv4x4_terminal_route_packet_snapshot():
  pkts = _make_conv_packets()

  # Tile 10 creates the terminal predicate at addr3 and sends the FU result
  # west. Its same-cycle WEST->SOUTH move is the feedback path.
  tile10_addr3 = _config_ctrl(pkts, (2, 2), 3)
  assert int(tile10_addr3.operation) == int(conv.OPT_EQ_CONST)
  assert _as_ints(tile10_addr3.routing_xbar_outport) == [0, 3, 0, 0, 0, 0, 0, 0]
  assert _as_ints(tile10_addr3.fu_xbar_outport) == [0, 0, 1, 0, 1, 0, 0, 0]

  # Tile 9 is the first hop after tile 10's westward terminal predicate. Keep a
  # snapshot of the current PHI_START route/prologue packets.
  tile9_addr2 = _config_ctrl(pkts, (1, 2), 2)
  assert int(tile9_addr2.operation) == int(conv.OPT_PHI_START)
  assert _as_ints(tile9_addr2.routing_xbar_outport) == [0, 0, 0, 0, 4, 2, 0, 0]
  assert _as_ints(tile9_addr2.write_reg_from) == [1, 0, 0, 0]
  assert _routing_prologue_counts(pkts, (1, 2), 2, 2) == [1, 1]

  # Tile 6 accumulates the multiply results, forwards the accumulator, and
  # writes the ADD result back locally to avoid the long modulo feedback delay.
  tile6_addr0 = _config_ctrl(pkts, (2, 1), 0)
  assert int(tile6_addr0.operation) == int(conv.OPT_ADD)
  assert _as_ints(tile6_addr0.fu_xbar_outport) == [0, 1, 1, 0, 1, 0, 0, 0]
  assert _as_ints(tile6_addr0.write_reg_from) == [2, 0, 0, 0]
  assert _routing_prologue_counts(pkts, (2, 1), 0, 1) == []
  assert _routing_prologue_counts(pkts, (2, 1), 0, 2) == [2]

  # The old external accumulator feedback is still present in the scheduled
  # graph. With local accumulation enabled, tile 6 must drain that NORTH token
  # stream without overwriting the live accumulator in $0.
  tile6_addr4 = _config_ctrl(pkts, (2, 1), 4)
  assert int(tile6_addr4.operation) == int(conv.OPT_NAH)
  assert _as_ints(tile6_addr4.routing_xbar_outport) == [0, 0, 0, 0, 1, 0, 0, 0]
  assert _as_ints(tile6_addr4.write_reg_from) == [1, 0, 0, 0]
  assert _as_ints(tile6_addr4.write_reg_idx) == [7, 0, 0, 0]
  assert _routing_prologue_counts(pkts, (2, 1), 4, 1) == [1]

  # Tile 2 receives the terminal accumulator and returns it to the CPU.
  tile2_addr2 = _config_ctrl(pkts, (2, 0), 2)
  assert int(tile2_addr2.operation) == int(conv.OPT_RET)
  assert _as_ints(tile2_addr2.routing_xbar_outport) == [0, 0, 0, 0, 1, 0, 0, 0]
  assert _as_ints(tile2_addr2.write_reg_from) == [1, 0, 0, 0]
  assert _as_ints(tile2_addr2.read_reg_towards) == [1, 0, 0, 0]
  assert _as_ints(tile2_addr2.read_reg_idx) == [0, 0, 0, 0]
