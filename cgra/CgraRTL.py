"""
=========================================================================
CgraRTL.py
=========================================================================

Author : Cheng Tan
  Date : Dec 22, 2024
"""
from ..controller.ControllerRTL import ControllerRTL
from ..lib.basic.val_rdy.ifcs import ValRdyRecvIfcRTL as RecvIfcRTL
from ..lib.basic.val_rdy.ifcs import ValRdySendIfcRTL as SendIfcRTL
from ..lib.basic.val_rdy.queues import BypassQueueRTL
from ..lib.opt_type import *
from ..lib.util.common import *
from ..mem.data.DataMemControllerRTL import DataMemControllerRTL
from ..noc.PyOCN.pymtl3_net.ocnlib.ifcs.positions import mk_ring_pos
from ..noc.PyOCN.pymtl3_net.ringnet.RingNetworkRTL import RingNetworkRTL
from ..tile.TileRTL import TileRTL
from ..lib.util.data_struct_attr import *
from ..lib.messages import *
from ..lib.util.common import *


class CgraRTL(Component):

  def construct(s, CgraPayloadType,
                multi_cgra_rows,
                multi_cgra_columns,
                width, height,
                ctrl_mem_size, data_mem_size_global,
                data_mem_size_per_bank, num_banks_per_cgra,
                num_registers_per_reg_bank, num_ctrl,
                total_steps, mem_access_is_combinational,
                FunctionUnit, FuList, cgra_topology,
                controller2addr_map, idTo2d_map,
                is_multi_cgra = True,
                has_ctrl_ring = True):

    # Derives all types from CgraPayloadType.
    DataType = CgraPayloadType.get_field_type(kAttrData)
    PredicateType = DataType.get_field_type(kAttrPredicate)
    PayloadType = DataType.get_field_type(kAttrPayload)
    CtrlSignalType = CgraPayloadType.get_field_type(kAttrCtrl)
    CmdType = CgraPayloadType.get_field_type(kAttrCmd)
    data_bitwidth = DataType.get_field_type(kAttrPayload).nbits
    
    
    num_tiles = width * height
    num_rd_tiles = height + width - 1
    
    CgraIdType = mk_cgra_id_type(multi_cgra_columns, multi_cgra_rows)
    
    CtrlPktType = mk_intra_cgra_pkt(multi_cgra_columns, multi_cgra_rows,
                                    num_tiles, CgraPayloadType)
    
    NocPktType = mk_inter_cgra_pkt(multi_cgra_columns, multi_cgra_rows,
                                   num_tiles, num_rd_tiles,
                                   CgraPayloadType)

    # Other topology can simply modify the tiles connections, or
    # leverage the template for modeling.
    assert(cgra_topology == MESH or cgra_topology == KING_MESH)
    s.num_mesh_ports = 4
    if cgra_topology == MESH:
      s.num_mesh_ports = 4
    elif cgra_topology == KING_MESH:
      s.num_mesh_ports = 8

    s.has_ctrl_ring = has_ctrl_ring
    s.num_tiles = width * height
    # The left and bottom tiles are connected to the data memory.
    data_mem_num_rd_tiles = height + width - 1
    data_mem_num_wr_tiles = height + width - 1

    num_cgras = multi_cgra_rows * multi_cgra_columns
    # An additional router for controller to receive CMD_COMPLETE signal from Ring to CPU.
    CtrlRingPos = mk_ring_pos(s.num_tiles + 1)
    CtrlAddrType = mk_bits(clog2(ctrl_mem_size))
    DataAddrType = mk_bits(clog2(data_mem_size_global))
    DebugTimeType = mk_bits(clog2(max(MAX_CTRL_COUNT, total_steps) + 1))
    DebugOpType = CtrlSignalType.get_field_type(kAttrOperation)
    debug_num_fu_inports = 4
    debug_num_fu_outports = 2
    debug_num_tile_ports = 4
    FuInType = mk_bits(clog2(debug_num_fu_inports + 1))
    PrologueCountType = mk_bits(clog2(PROLOGUE_MAX_COUNT + 1))
    assert(data_mem_size_per_bank * num_banks_per_cgra <= \
           data_mem_size_global)

    # Interfaces
    s.recv_from_cpu_pkt = RecvIfcRTL(CtrlPktType)
    s.recv_from_inter_cgra_noc = RecvIfcRTL(NocPktType)
    s.send_to_inter_cgra_noc = SendIfcRTL(NocPktType)
    s.send_to_cpu_pkt = SendIfcRTL(CtrlPktType)

    # Debug observation ports used by long-running Verilator regressions.
    s.debug_tile_times = [OutPort(DebugTimeType) for _ in range(num_tiles)]
    s.debug_tile_ctrl_addr = [OutPort(CtrlAddrType) for _ in range(num_tiles)]
    s.debug_tile_start = [OutPort(b1) for _ in range(num_tiles)]
    s.debug_tile_send_ctrl_val = [OutPort(b1) for _ in range(num_tiles)]
    s.debug_tile_send_ctrl_rdy = [OutPort(b1) for _ in range(num_tiles)]
    s.debug_tile_op = [OutPort(DebugOpType) for _ in range(num_tiles)]
    s.debug_tile_prologue_count_fu = [
        OutPort(PrologueCountType) for _ in range(num_tiles)]
    s.debug_tile_to_ctrl_val = [OutPort(b1) for _ in range(num_tiles)]
    s.debug_tile_to_ctrl_cmd = [OutPort(CmdType) for _ in range(num_tiles)]
    s.debug_tile_to_ctrl_data = [OutPort(PayloadType) for _ in range(num_tiles)]
    s.debug_tile_to_ctrl_pred = [OutPort(PredicateType) for _ in range(num_tiles)]
    s.debug_tile_elem_recv_opt_val = [OutPort(b1) for _ in range(num_tiles)]
    s.debug_tile_elem_recv_opt_rdy = [OutPort(b1) for _ in range(num_tiles)]
    s.debug_tile_elem_recv_opt_op = [OutPort(DebugOpType) for _ in range(num_tiles)]
    s.debug_tile_elem_recv_opt_fu_in0 = [OutPort(FuInType) for _ in range(num_tiles)]
    s.debug_tile_elem_recv_opt_fu_in1 = [OutPort(FuInType) for _ in range(num_tiles)]
    s.debug_tile_elem_recv_opt_vfp = [OutPort(mk_bits(3)) for _ in range(num_tiles)]
    s.debug_tile_elem_recv_opt_is_last = [OutPort(b1) for _ in range(num_tiles)]
    s.debug_tile_elem_selected_reached_vf = [OutPort(b1) for _ in range(num_tiles)]
    s.debug_tile_elem_selected_vf_counter = [OutPort(mk_bits(8)) for _ in range(num_tiles)]
    s.debug_tile_elem_recv_in_val = [
        [OutPort(b1) for _ in range(debug_num_fu_inports)]
        for _ in range(num_tiles)]
    s.debug_tile_elem_recv_in_rdy = [
        [OutPort(b1) for _ in range(debug_num_fu_inports)]
        for _ in range(num_tiles)]
    s.debug_tile_elem_recv_in_data = [
        [OutPort(PayloadType) for _ in range(debug_num_fu_inports)]
        for _ in range(num_tiles)]
    s.debug_tile_elem_recv_in_pred = [
        [OutPort(PredicateType) for _ in range(debug_num_fu_inports)]
        for _ in range(num_tiles)]
    s.debug_tile_elem_send_out_val = [
        [OutPort(b1) for _ in range(debug_num_fu_outports)]
        for _ in range(num_tiles)]
    s.debug_tile_elem_send_out_rdy = [
        [OutPort(b1) for _ in range(debug_num_fu_outports)]
        for _ in range(num_tiles)]
    s.debug_tile_elem_send_out_data = [
        [OutPort(PayloadType) for _ in range(debug_num_fu_outports)]
        for _ in range(num_tiles)]
    s.debug_tile_elem_send_out_pred = [
        [OutPort(PredicateType) for _ in range(debug_num_fu_outports)]
        for _ in range(num_tiles)]
    s.debug_tile_elem_send_ctrl_val = [OutPort(b1) for _ in range(num_tiles)]
    s.debug_tile_elem_send_ctrl_rdy = [OutPort(b1) for _ in range(num_tiles)]
    s.debug_tile_elem_send_ctrl_cmd = [OutPort(CmdType) for _ in range(num_tiles)]
    s.debug_tile_elem_send_ctrl_data = [OutPort(PayloadType) for _ in range(num_tiles)]
    s.debug_tile_elem_send_ctrl_pred = [OutPort(PredicateType) for _ in range(num_tiles)]
    s.debug_tile_route_recv_val = [
        [OutPort(b1) for _ in range(debug_num_tile_ports)]
        for _ in range(num_tiles)]
    s.debug_tile_route_recv_rdy = [
        [OutPort(b1) for _ in range(debug_num_tile_ports)]
        for _ in range(num_tiles)]
    s.debug_tile_route_recv_data = [
        [OutPort(PayloadType) for _ in range(debug_num_tile_ports)]
        for _ in range(num_tiles)]
    s.debug_tile_route_recv_pred = [
        [OutPort(PredicateType) for _ in range(debug_num_tile_ports)]
        for _ in range(num_tiles)]
    s.debug_tile_send_val = [
        [OutPort(b1) for _ in range(debug_num_tile_ports)]
        for _ in range(num_tiles)]
    s.debug_tile_send_rdy = [
        [OutPort(b1) for _ in range(debug_num_tile_ports)]
        for _ in range(num_tiles)]
    s.debug_tile_send_data = [
        [OutPort(PayloadType) for _ in range(debug_num_tile_ports)]
        for _ in range(num_tiles)]
    s.debug_tile_send_pred = [
        [OutPort(PredicateType) for _ in range(debug_num_tile_ports)]
        for _ in range(num_tiles)]
    s.debug_tile_route_local_val = [
        [OutPort(b1) for _ in range(debug_num_fu_inports)]
        for _ in range(num_tiles)]
    s.debug_tile_route_local_rdy = [
        [OutPort(b1) for _ in range(debug_num_fu_inports)]
        for _ in range(num_tiles)]
    s.debug_tile_route_local_data = [
        [OutPort(PayloadType) for _ in range(debug_num_fu_inports)]
        for _ in range(num_tiles)]
    s.debug_tile_route_local_pred = [
        [OutPort(PredicateType) for _ in range(debug_num_fu_inports)]
        for _ in range(num_tiles)]
    s.debug_tile_reg_write_val = [
        [OutPort(b1) for _ in range(debug_num_fu_inports)]
        for _ in range(num_tiles)]
    s.debug_tile_reg_write_data = [
        [OutPort(PayloadType) for _ in range(debug_num_fu_inports)]
        for _ in range(num_tiles)]
    s.debug_tile_reg_write_pred = [
        [OutPort(PredicateType) for _ in range(debug_num_fu_inports)]
        for _ in range(num_tiles)]
    s.debug_tile_reg_read_data = [
        [OutPort(PayloadType) for _ in range(debug_num_fu_inports)]
        for _ in range(num_tiles)]
    s.debug_tile_reg_read_pred = [
        [OutPort(PredicateType) for _ in range(debug_num_fu_inports)]
        for _ in range(num_tiles)]
    s.debug_tile_reg0_data = [
        [OutPort(PayloadType) for _ in range(debug_num_fu_inports)]
        for _ in range(num_tiles)]
    s.debug_tile_reg0_pred = [
        [OutPort(PredicateType) for _ in range(debug_num_fu_inports)]
        for _ in range(num_tiles)]

    # Interfaces on the boundary of the CGRA.
    s.recv_data_on_boundary_south = [RecvIfcRTL(DataType) for _ in range(width )]
    s.send_data_on_boundary_south = [SendIfcRTL(DataType) for _ in range(width )]
    s.recv_data_on_boundary_north = [RecvIfcRTL(DataType) for _ in range(width )]
    s.send_data_on_boundary_north = [SendIfcRTL(DataType) for _ in range(width )]

    s.recv_data_on_boundary_east  = [RecvIfcRTL(DataType) for _ in range(height)]
    s.send_data_on_boundary_east  = [SendIfcRTL(DataType) for _ in range(height)]
    s.recv_data_on_boundary_west  = [RecvIfcRTL(DataType) for _ in range(height)]
    s.send_data_on_boundary_west  = [SendIfcRTL(DataType) for _ in range(height)]

    # Components
    s.tile = [TileRTL(CtrlPktType,
                      ctrl_mem_size,
                      data_mem_size_global, num_ctrl,
                      total_steps, 4, 2, s.num_mesh_ports,
                      s.num_mesh_ports, num_cgras, s.num_tiles,
                      num_registers_per_reg_bank,
                      FuList = FuList)
              for i in range(s.num_tiles)]
    s.data_mem = DataMemControllerRTL(NocPktType,
                                      data_mem_size_global,
                                      data_mem_size_per_bank,
                                      num_banks_per_cgra,
                                      data_mem_num_rd_tiles,
                                      data_mem_num_wr_tiles,
                                      multi_cgra_rows,
                                      multi_cgra_columns,
                                      s.num_tiles,
                                      mem_access_is_combinational,
                                      idTo2d_map)
    s.controller = ControllerRTL(NocPktType,
                                  multi_cgra_rows, multi_cgra_columns,
                                  s.num_tiles, controller2addr_map, idTo2d_map)
    # An additional router for controller to receive CMD_COMPLETE signal from Ring to CPU.
    # The last argument of 1 is for the latency per hop.
    if has_ctrl_ring:
      s.ctrl_ring = RingNetworkRTL(CtrlPktType, CtrlRingPos, s.num_tiles + 1, 1)
    s.cgra_id = InPort(CgraIdType)

    # Address lower and upper bound.
    s.address_lower = InPort(DataAddrType)
    s.address_upper = InPort(DataAddrType)

    # Connections
    # Connects the controller id.
    s.controller.cgra_id //= s.cgra_id
    s.data_mem.cgra_id //= s.cgra_id

    # Connects the address lower and upper bound.
    s.data_mem.address_lower //= s.address_lower
    s.data_mem.address_upper //= s.address_upper

    # Connects data memory with controller.
    s.data_mem.recv_from_noc_load_request //= s.controller.send_to_mem_load_request
    s.data_mem.recv_from_noc_store_request //= s.controller.send_to_mem_store_request
    s.data_mem.recv_from_noc_load_response_pkt //= s.controller.send_to_tile_load_response
    s.data_mem.send_to_noc_load_request_pkt //= s.controller.recv_from_tile_load_request_pkt
    s.data_mem.send_to_noc_load_response_pkt //= s.controller.recv_from_tile_load_response_pkt
    s.data_mem.send_to_noc_store_pkt //= s.controller.recv_from_tile_store_request_pkt

    if is_multi_cgra:
      s.recv_from_inter_cgra_noc //= s.controller.recv_from_inter_cgra_noc
      s.send_to_inter_cgra_noc //= s.controller.send_to_inter_cgra_noc
    else:
      s.bypass_queue = BypassQueueRTL(NocPktType, 1)
      s.bypass_queue.send //= s.controller.recv_from_inter_cgra_noc
      s.bypass_queue.recv //= s.controller.send_to_inter_cgra_noc

    # Connects the ctrl interface between CPU and controller.
    s.recv_from_cpu_pkt //= s.controller.recv_from_cpu_pkt
    s.send_to_cpu_pkt //=  s.controller.send_to_cpu_pkt

    # Assigns tile id.
    for i in range(s.num_tiles):
      s.tile[i].tile_id //= i
      s.tile[i].cgra_id //= s.cgra_id
      s.debug_tile_times[i] //= s.tile[i].debug_times
      s.debug_tile_ctrl_addr[i] //= s.tile[i].debug_ctrl_addr
      s.debug_tile_start[i] //= s.tile[i].debug_start
      s.debug_tile_send_ctrl_val[i] //= s.tile[i].debug_send_ctrl_val
      s.debug_tile_send_ctrl_rdy[i] //= s.tile[i].debug_send_ctrl_rdy
      s.debug_tile_op[i] //= s.tile[i].debug_op
      s.debug_tile_prologue_count_fu[i] //= s.tile[i].debug_prologue_count_fu
      s.debug_tile_to_ctrl_val[i] //= s.tile[i].debug_to_ctrl_val
      s.debug_tile_to_ctrl_cmd[i] //= s.tile[i].debug_to_ctrl_cmd
      s.debug_tile_to_ctrl_data[i] //= s.tile[i].debug_to_ctrl_data
      s.debug_tile_to_ctrl_pred[i] //= s.tile[i].debug_to_ctrl_pred
      s.debug_tile_elem_recv_opt_val[i] //= s.tile[i].debug_elem_recv_opt_val
      s.debug_tile_elem_recv_opt_rdy[i] //= s.tile[i].debug_elem_recv_opt_rdy
      s.debug_tile_elem_recv_opt_op[i] //= s.tile[i].debug_elem_recv_opt_op
      s.debug_tile_elem_recv_opt_fu_in0[i] //= s.tile[i].debug_elem_recv_opt_fu_in0
      s.debug_tile_elem_recv_opt_fu_in1[i] //= s.tile[i].debug_elem_recv_opt_fu_in1
      s.debug_tile_elem_recv_opt_vfp[i] //= s.tile[i].debug_elem_recv_opt_vfp
      s.debug_tile_elem_recv_opt_is_last[i] //= s.tile[i].debug_elem_recv_opt_is_last
      s.debug_tile_elem_selected_reached_vf[i] //= s.tile[i].debug_elem_selected_reached_vf
      s.debug_tile_elem_selected_vf_counter[i] //= s.tile[i].debug_elem_selected_vf_counter
      for j in range(debug_num_fu_inports):
        s.debug_tile_elem_recv_in_val[i][j] //= s.tile[i].debug_elem_recv_in_val[j]
        s.debug_tile_elem_recv_in_rdy[i][j] //= s.tile[i].debug_elem_recv_in_rdy[j]
        s.debug_tile_elem_recv_in_data[i][j] //= s.tile[i].debug_elem_recv_in_data[j]
        s.debug_tile_elem_recv_in_pred[i][j] //= s.tile[i].debug_elem_recv_in_pred[j]
      for j in range(debug_num_fu_outports):
        s.debug_tile_elem_send_out_val[i][j] //= s.tile[i].debug_elem_send_out_val[j]
        s.debug_tile_elem_send_out_rdy[i][j] //= s.tile[i].debug_elem_send_out_rdy[j]
        s.debug_tile_elem_send_out_data[i][j] //= s.tile[i].debug_elem_send_out_data[j]
        s.debug_tile_elem_send_out_pred[i][j] //= s.tile[i].debug_elem_send_out_pred[j]
      s.debug_tile_elem_send_ctrl_val[i] //= s.tile[i].debug_elem_send_ctrl_val
      s.debug_tile_elem_send_ctrl_rdy[i] //= s.tile[i].debug_elem_send_ctrl_rdy
      s.debug_tile_elem_send_ctrl_cmd[i] //= s.tile[i].debug_elem_send_ctrl_cmd
      s.debug_tile_elem_send_ctrl_data[i] //= s.tile[i].debug_elem_send_ctrl_data
      s.debug_tile_elem_send_ctrl_pred[i] //= s.tile[i].debug_elem_send_ctrl_pred
      for j in range(debug_num_tile_ports):
        s.debug_tile_route_recv_val[i][j] //= s.tile[i].debug_route_recv_val[j]
        s.debug_tile_route_recv_rdy[i][j] //= s.tile[i].debug_route_recv_rdy[j]
        s.debug_tile_route_recv_data[i][j] //= s.tile[i].debug_route_recv_data[j]
        s.debug_tile_route_recv_pred[i][j] //= s.tile[i].debug_route_recv_pred[j]
        s.debug_tile_send_val[i][j] //= s.tile[i].debug_tile_send_val[j]
        s.debug_tile_send_rdy[i][j] //= s.tile[i].debug_tile_send_rdy[j]
        s.debug_tile_send_data[i][j] //= s.tile[i].debug_tile_send_data[j]
        s.debug_tile_send_pred[i][j] //= s.tile[i].debug_tile_send_pred[j]
      for j in range(debug_num_fu_inports):
        s.debug_tile_route_local_val[i][j] //= s.tile[i].debug_route_local_val[j]
        s.debug_tile_route_local_rdy[i][j] //= s.tile[i].debug_route_local_rdy[j]
        s.debug_tile_route_local_data[i][j] //= s.tile[i].debug_route_local_data[j]
        s.debug_tile_route_local_pred[i][j] //= s.tile[i].debug_route_local_pred[j]
        s.debug_tile_reg_write_val[i][j] //= s.tile[i].debug_reg_write_val[j]
        s.debug_tile_reg_write_data[i][j] //= s.tile[i].debug_reg_write_data[j]
        s.debug_tile_reg_write_pred[i][j] //= s.tile[i].debug_reg_write_pred[j]
        s.debug_tile_reg_read_data[i][j] //= s.tile[i].debug_reg_read_data[j]
        s.debug_tile_reg_read_pred[i][j] //= s.tile[i].debug_reg_read_pred[j]
        s.debug_tile_reg0_data[i][j] //= s.tile[i].debug_reg0_data[j]
        s.debug_tile_reg0_pred[i][j] //= s.tile[i].debug_reg0_pred[j]

    if has_ctrl_ring:
      # Connects ring with each control memory.
      for i in range(s.num_tiles):
        s.ctrl_ring.send[i] //= s.tile[i].recv_from_controller_pkt
        s.ctrl_ring.recv[i] //= s.tile[i].send_to_controller_pkt
      s.ctrl_ring.recv[s.num_tiles] //= s.controller.send_to_ctrl_ring_pkt
      s.ctrl_ring.send[s.num_tiles] //= s.controller.recv_from_ctrl_ring_pkt

    for i in range(s.num_tiles):

      if i // width > 0:
        s.tile[i].send_data[PORT_INDEX_SOUTH] //= s.tile[i-width].recv_data[PORT_INDEX_NORTH]

      if i // width < height - 1:
        s.tile[i].send_data[PORT_INDEX_NORTH] //= s.tile[i+width].recv_data[PORT_INDEX_SOUTH]

      if i % width > 0:
        s.tile[i].send_data[PORT_INDEX_WEST] //= s.tile[i-1].recv_data[PORT_INDEX_EAST]

      if i % width < width - 1:
        s.tile[i].send_data[PORT_INDEX_EAST] //= s.tile[i+1].recv_data[PORT_INDEX_WEST]

      if cgra_topology == KING_MESH:
        if i % width > 0 and i // width < height - 1:
          s.tile[i].send_data[PORT_INDEX_NORTHWEST] //= s.tile[i+width-1].recv_data[PORT_INDEX_SOUTHEAST]
          s.tile[i+width-1].send_data[PORT_INDEX_SOUTHEAST] //= s.tile[i].recv_data[PORT_INDEX_NORTHWEST]

        if i % width < width - 1 and i // width < height - 1:
          s.tile[i].send_data[PORT_INDEX_NORTHEAST] //= s.tile[i+width+1].recv_data[PORT_INDEX_SOUTHWEST]
          s.tile[i+width+1].send_data[PORT_INDEX_SOUTHWEST] //= s.tile[i].recv_data[PORT_INDEX_NORTHEAST]

        if i // width == 0:
          s.tile[i].send_data[PORT_INDEX_SOUTHWEST].rdy //= 0
          s.tile[i].recv_data[PORT_INDEX_SOUTHWEST].val //= 0
          s.tile[i].recv_data[PORT_INDEX_SOUTHWEST].msg //= DataType(0, 0)
          s.tile[i].send_data[PORT_INDEX_SOUTHEAST].rdy //= 0
          s.tile[i].recv_data[PORT_INDEX_SOUTHEAST].val //= 0
          s.tile[i].recv_data[PORT_INDEX_SOUTHEAST].msg //= DataType(0, 0)

        if i // width == height - 1:
          s.tile[i].send_data[PORT_INDEX_NORTHWEST].rdy //= 0
          s.tile[i].recv_data[PORT_INDEX_NORTHWEST].val //= 0
          s.tile[i].recv_data[PORT_INDEX_NORTHWEST].msg //= DataType(0, 0)
          s.tile[i].send_data[PORT_INDEX_NORTHEAST].rdy //= 0
          s.tile[i].recv_data[PORT_INDEX_NORTHEAST].val //= 0
          s.tile[i].recv_data[PORT_INDEX_NORTHEAST].msg //= DataType(0, 0)

        if i % width == 0 and i // width > 0:
          s.tile[i].send_data[PORT_INDEX_SOUTHWEST].rdy //= 0
          s.tile[i].recv_data[PORT_INDEX_SOUTHWEST].val //= 0
          s.tile[i].recv_data[PORT_INDEX_SOUTHWEST].msg //= DataType(0, 0)

        if i % width == 0 and i // width < height - 1:
          s.tile[i].send_data[PORT_INDEX_NORTHWEST].rdy //= 0
          s.tile[i].recv_data[PORT_INDEX_NORTHWEST].val //= 0
          s.tile[i].recv_data[PORT_INDEX_NORTHWEST].msg //= DataType(0, 0)

        if i % width == width - 1 and i // width > 0:
          s.tile[i].send_data[PORT_INDEX_SOUTHEAST].rdy //= 0
          s.tile[i].recv_data[PORT_INDEX_SOUTHEAST].val //= 0
          s.tile[i].recv_data[PORT_INDEX_SOUTHEAST].msg //= DataType(0, 0)

        if i % width == width - 1 and i // width < height - 1:
          s.tile[i].send_data[PORT_INDEX_NORTHEAST].rdy //= 0
          s.tile[i].recv_data[PORT_INDEX_NORTHEAST].val //= 0
          s.tile[i].recv_data[PORT_INDEX_NORTHEAST].msg //= DataType(0, 0)


      if i // width == 0:
        s.tile[i].send_data[PORT_INDEX_SOUTH] //= s.send_data_on_boundary_south[i % width]
        s.tile[i].recv_data[PORT_INDEX_SOUTH] //= s.recv_data_on_boundary_south[i % width]

      if i // width == height - 1:
        s.tile[i].send_data[PORT_INDEX_NORTH] //= s.send_data_on_boundary_north[i % width]
        s.tile[i].recv_data[PORT_INDEX_NORTH] //= s.recv_data_on_boundary_north[i % width]

      if i % width == 0:
        s.tile[i].send_data[PORT_INDEX_WEST] //= s.send_data_on_boundary_west[i // width]
        s.tile[i].recv_data[PORT_INDEX_WEST] //= s.recv_data_on_boundary_west[i // width]

      if i % width == width - 1:
        s.tile[i].send_data[PORT_INDEX_EAST] //= s.send_data_on_boundary_east[i // width]
        s.tile[i].recv_data[PORT_INDEX_EAST] //= s.recv_data_on_boundary_east[i // width]

      if i % width == 0 or i // width == 0:
        s.tile[i].to_mem_raddr   //= s.data_mem.recv_raddr[width + i // width - 1 if i >= width else i % width]
        s.tile[i].from_mem_rdata //= s.data_mem.send_rdata[width + i // width - 1 if i >= width else i % width]
        s.tile[i].to_mem_waddr   //= s.data_mem.recv_waddr[width + i // width - 1 if i >= width else i % width]
        s.tile[i].to_mem_wdata   //= s.data_mem.recv_wdata[width + i // width - 1 if i >= width else i % width]
      else:
        s.tile[i].to_mem_raddr.rdy   //= 0
        s.tile[i].from_mem_rdata.val //= 0
        s.tile[i].from_mem_rdata.msg //= DataType(0, 0)
        s.tile[i].to_mem_waddr.rdy   //= 0
        s.tile[i].to_mem_wdata.rdy   //= 0

  # Line trace
  def line_trace(s):
    # Structured JSONL logging for visualization.
    from ..lib.trace_logger import get_trace_logger
    logger = get_trace_logger()
    if logger is not None:
      logger.log_cycle(s)

    res = "||\n".join([(("\n[cgra"+str(s.cgra_id)+"_tile"+str(i)+"]: ") + x.line_trace() + x.ctrl_mem.line_trace())
                       for (i,x) in enumerate(s.tile)])
    if s.has_ctrl_ring:
      res += "\n :: [" + s.ctrl_ring.line_trace() + "]    \n"
    res += "\n :: [" + s.data_mem.line_trace() + "]    \n"
    return res




