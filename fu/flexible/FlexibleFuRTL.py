"""
==========================================================================
FlexibleFuRTL.py
==========================================================================
A flexible functional unit whose functionality can be parameterized.

Author : Cheng Tan
  Date : Dec 24, 2019

"""

from pymtl3 import *
from ...fu.single.MemUnitRTL import MemUnitRTL
from ...fu.single.StreamingMemUnitRTL import StreamingMemUnitRTL
from ...fu.single.AdderRTL  import AdderRTL
from ...fu.single.RetRTL  import RetRTL
from ...fu.single.NahRTL  import NahRTL
from ...lib.basic.val_rdy.ifcs import ValRdyRecvIfcRTL as RecvIfcRTL
from ...lib.basic.val_rdy.ifcs import ValRdySendIfcRTL as SendIfcRTL
from ...lib.messages import *
from ...lib.opt_type import *
from ...lib.util.common import *

class FlexibleFuRTL(Component):
  def construct(s,
                CtrlPktType,
                num_inports,
                num_outports,
                num_tiles,
                FuList,
                exec_lantency = {}):

    # Constants.
    num_entries = 2
    if NahRTL not in FuList:
      FuList.append(NahRTL)
    s.fu_list_size = len(FuList)
    s.DataType = CtrlPktType.get_field_type(kAttrPayload).get_field_type(kAttrData)
    s.AddrType = CtrlPktType.get_field_type(kAttrPayload).get_field_type(kAttrDataAddr)
    s.CtrlType = CtrlPktType.get_field_type(kAttrPayload).get_field_type(kAttrCtrl)
    s.CtrlAddrType = CtrlPktType.get_field_type(kAttrPayload).get_field_type(kAttrCtrlAddr)
    s.CgraPayloadType = CtrlPktType.get_field_type(kAttrPayload)
    s.PayloadType = s.DataType.get_field_type(kAttrPayload)
    s.PredicateType = s.DataType.get_field_type(kAttrPredicate)
    s.CmdType = s.CgraPayloadType.get_field_type(kAttrCmd)
    s.OpType = s.CtrlType.get_field_type(kAttrOperation)
    s.FuInType = s.CtrlType.get_field_type(kAttrFuIn)[0]
    s.VectorFactorPowerType = s.CtrlType.get_field_type(kAttrVectorFactorPower)
    s.VectorFactorCounterType = mk_bits(8)
    CountType = mk_bits(clog2(num_entries + 1))
    s.ctrl_addr_inport = InPort(s.CtrlAddrType)
    PrologueCountType = mk_bits(clog2(PROLOGUE_MAX_COUNT + 1))

    # Interfaces.
    s.recv_in = [RecvIfcRTL(s.DataType) for _ in range(num_inports)]
    s.recv_const = RecvIfcRTL(s.DataType)
    s.recv_opt = RecvIfcRTL(s.CtrlType)
    s.send_out = [SendIfcRTL(s.DataType) for _ in range(num_outports)]
    # Serves as the bridge between the RetRTL and the ctrl memory controller.
    s.send_to_ctrl_mem = SendIfcRTL(s.CgraPayloadType)
    s.recv_from_ctrl_mem = RecvIfcRTL(s.CgraPayloadType)
    # Interfaces for streaming LD.
    s.recv_pkt_from_controller = RecvIfcRTL(CtrlPktType)

    s.debug_recv_opt_val = OutPort(b1)
    s.debug_recv_opt_rdy = OutPort(b1)
    s.debug_recv_opt_op = OutPort(s.OpType)
    s.debug_recv_opt_fu_in0 = OutPort(s.FuInType)
    s.debug_recv_opt_fu_in1 = OutPort(s.FuInType)
    s.debug_recv_opt_vfp = OutPort(s.VectorFactorPowerType)
    s.debug_recv_opt_is_last = OutPort(b1)
    s.debug_selected_reached_vf = OutPort(b1)
    s.debug_selected_vf_counter = OutPort(s.VectorFactorCounterType)
    s.debug_recv_in_val = [OutPort(b1) for _ in range(num_inports)]
    s.debug_recv_in_rdy = [OutPort(b1) for _ in range(num_inports)]
    s.debug_recv_in_data = [OutPort(s.PayloadType) for _ in range(num_inports)]
    s.debug_recv_in_pred = [OutPort(s.PredicateType) for _ in range(num_inports)]
    s.debug_send_out_val = [OutPort(b1) for _ in range(num_outports)]
    s.debug_send_out_rdy = [OutPort(b1) for _ in range(num_outports)]
    s.debug_send_out_data = [OutPort(s.PayloadType) for _ in range(num_outports)]
    s.debug_send_out_pred = [OutPort(s.PredicateType) for _ in range(num_outports)]
    s.debug_send_ctrl_val = OutPort(b1)
    s.debug_send_ctrl_rdy = OutPort(b1)
    s.debug_send_ctrl_cmd = OutPort(s.CmdType)
    s.debug_send_ctrl_data = OutPort(s.PayloadType)
    s.debug_send_ctrl_pred = OutPort(s.PredicateType)

    s.to_mem_raddr = [SendIfcRTL(s.AddrType) for _ in range(s.fu_list_size)]
    s.from_mem_rdata = [RecvIfcRTL(s.DataType) for _ in range(s.fu_list_size)]
    s.to_mem_waddr = [SendIfcRTL(s.AddrType) for _ in range(s.fu_list_size)]
    s.to_mem_wdata = [SendIfcRTL(s.DataType) for _ in range(s.fu_list_size)]
    s.clear = [InPort(b1) for _ in range(s.fu_list_size)]

    s.prologue_count_inport = InPort(PrologueCountType)
    s.tile_id = InPort(mk_bits(clog2(num_tiles + 1)))

    # Components.
    s.fu = [FuList[i](CtrlPktType, num_inports, num_outports) 
            if FuList[i] not in exec_lantency.keys() else FuList[i](CtrlPktType, num_inports, 
                num_outports, latency=exec_lantency[FuList[i]]) for i in range(s.fu_list_size)]

    s.fu_recv_const_rdy_vector = Wire(s.fu_list_size)
    s.fu_recv_opt_rdy_vector = Wire(s.fu_list_size)
    s.recv_from_controller_rdy_vector = Wire(s.fu_list_size)
    s.fu_recv_in_rdy_vector = [Wire(s.fu_list_size) for i in range(num_inports)]

    # Wire to indicate whether the real operation (before prologue NAH override)
    # consumes a const from the const queue.
    s.op_uses_const = Wire(b1)

    # Connection.
    s.debug_recv_opt_val //= s.recv_opt.val
    s.debug_recv_opt_rdy //= s.recv_opt.rdy
    s.debug_recv_opt_op //= s.recv_opt.msg.operation
    s.debug_recv_opt_fu_in0 //= s.recv_opt.msg.fu_in[0]
    s.debug_recv_opt_fu_in1 //= s.recv_opt.msg.fu_in[1]
    s.debug_recv_opt_vfp //= s.recv_opt.msg.vector_factor_power
    s.debug_recv_opt_is_last //= s.recv_opt.msg.is_last_ctrl
    for i in range(num_inports):
      s.debug_recv_in_val[i] //= s.recv_in[i].val
      s.debug_recv_in_rdy[i] //= s.recv_in[i].rdy
      s.debug_recv_in_data[i] //= s.recv_in[i].msg.payload
      s.debug_recv_in_pred[i] //= s.recv_in[i].msg.predicate
    for i in range(num_outports):
      s.debug_send_out_val[i] //= s.send_out[i].val
      s.debug_send_out_rdy[i] //= s.send_out[i].rdy
      s.debug_send_out_data[i] //= s.send_out[i].msg.payload
      s.debug_send_out_pred[i] //= s.send_out[i].msg.predicate
    s.debug_send_ctrl_val //= s.send_to_ctrl_mem.val
    s.debug_send_ctrl_rdy //= s.send_to_ctrl_mem.rdy
    s.debug_send_ctrl_cmd //= s.send_to_ctrl_mem.msg.cmd
    s.debug_send_ctrl_data //= s.send_to_ctrl_mem.msg.data.payload
    s.debug_send_ctrl_pred //= s.send_to_ctrl_mem.msg.data.predicate

    @update
    def update_debug_selected_fu():
      s.debug_selected_reached_vf @= b1(0)
      s.debug_selected_vf_counter @= s.VectorFactorCounterType(0)

    for i in range(len(FuList)):
      s.to_mem_raddr[i] //= s.fu[i].to_mem_raddr
      s.from_mem_rdata[i] //= s.fu[i].from_mem_rdata
      s.to_mem_waddr[i] //= s.fu[i].to_mem_waddr
      s.to_mem_wdata[i] //= s.fu[i].to_mem_wdata
      s.clear[i] //= s.fu[i].clear
      if FuList[i] == StreamingMemUnitRTL:
        s.recv_pkt_from_controller //= s.fu[i].recv_from_controller_pkt
    
    @update
    def connect_to_controller():
      for i in range(s.fu_list_size):
        # const connection.
        s.fu[i].recv_from_ctrl_mem.msg @= s.recv_from_ctrl_mem.msg
        s.fu[i].recv_from_ctrl_mem.val @= s.recv_from_ctrl_mem.val
        s.recv_from_controller_rdy_vector[i] @= s.fu[i].recv_from_ctrl_mem.rdy
      s.recv_from_ctrl_mem.rdy @= reduce_or(s.recv_from_controller_rdy_vector)

      s.send_to_ctrl_mem.msg @= s.CgraPayloadType(0, 0, 0, 0, 0)
      s.send_to_ctrl_mem.val @= 0
      for i in range(s.fu_list_size):
        if s.fu[i].send_to_ctrl_mem.val:
          s.send_to_ctrl_mem.msg @= s.fu[i].send_to_ctrl_mem.msg
          s.send_to_ctrl_mem.val @= s.fu[i].send_to_ctrl_mem.val
        s.fu[i].send_to_ctrl_mem.rdy @= s.send_to_ctrl_mem.rdy
        s.fu[i].ctrl_addr_inport @= s.ctrl_addr_inport

    @update
    def comb_logic():
      for j in range(num_outports):
        s.send_out[j].val @= b1(0)
        s.send_out[j].msg @= s.DataType()

      # Determines if the REAL operation (before prologue NAH override) consumes
      # a const from the const queue. This is needed so that during prologue,
      # we can still advance the const queue rd_cur to keep it in sync with
      # the ctrl pointer.
      s.op_uses_const @= \
          (s.recv_opt.msg.operation == OPT_CONST) | \
          (s.recv_opt.msg.operation == OPT_ADD_CONST) | \
          (s.recv_opt.msg.operation == OPT_SUB_CONST) | \
          (s.recv_opt.msg.operation == OPT_DIV_CONST) | \
          (s.recv_opt.msg.operation == OPT_EQ_CONST) | \
          (s.recv_opt.msg.operation == OPT_NE_CONST) | \
          (s.recv_opt.msg.operation == OPT_PHI_CONST) | \
          (s.recv_opt.msg.operation == OPT_LD_CONST) | \
          (s.recv_opt.msg.operation == OPT_STR_CONST) | \
          (s.recv_opt.msg.operation == OPT_MUL_CONST) | \
          (s.recv_opt.msg.operation == OPT_MUL_CONST_ADD) | \
          (s.recv_opt.msg.operation == OPT_ADD_CONST_LD) | \
          (s.recv_opt.msg.operation == OPT_INC_NE_CONST_NOT_GRT) | \
          (s.recv_opt.msg.operation == OPT_FADD_CONST) | \
          (s.recv_opt.msg.operation == OPT_FMUL_CONST) | \
          (s.recv_opt.msg.operation == OPT_VEC_ADD_CONST) | \
          (s.recv_opt.msg.operation == OPT_VEC_SUB_CONST) | \
          (s.recv_opt.msg.operation == OPT_VEC_ADD_CONST_COMBINED) | \
          (s.recv_opt.msg.operation == OPT_VEC_SUB_CONST_COMBINED) | \
          (s.recv_opt.msg.operation == OPT_GTE_CONST) | \
          (s.recv_opt.msg.operation == OPT_GRT_ONCE_CONST) | \
          (s.recv_opt.msg.operation == OPT_LT_CONST) | \
          (s.recv_opt.msg.operation == OPT_GT_CONST) | \
          (s.recv_opt.msg.operation == OPT_AND_CONST) | \
          (s.recv_opt.msg.operation == OPT_OR_CONST) | \
          (s.recv_opt.msg.operation == OPT_LLS_CONST) | \
          (s.recv_opt.msg.operation == OPT_REM_CONST) | \
          (s.recv_opt.msg.operation == OPT_GEP_CONST) | \
          (s.recv_opt.msg.operation == OPT_GEP_2D_CONST) | \
          (s.recv_opt.msg.operation == OPT_STR_DATA_CONST)

      for i in range(s.fu_list_size):
        # const connection.
        s.fu[i].recv_const.msg @= s.recv_const.msg
        s.fu[i].recv_const.val @= s.recv_const.val
        s.fu_recv_const_rdy_vector[i] @= s.fu[i].recv_const.rdy

        # opt connection.
        s.fu[i].recv_opt.msg @= s.recv_opt.msg
        # During FU prologue, crossbars still need the real ctrl word for
        # routing, but the selected FU must not execute the real operation.
        if s.prologue_count_inport != 0:
          s.fu[i].recv_opt.msg.operation @= OPT_NAH
        s.fu[i].recv_opt.val @= s.recv_opt.val
        s.fu_recv_opt_rdy_vector[i] @= s.fu[i].recv_opt.rdy

        # send_out connection.
        for j in range(num_outports):
          # FIXME: need reduce_or here: https://github.com/tancheng/VectorCGRA/issues/51.
          if s.fu[i].send_out[j].val:
            s.send_out[j].msg @= s.fu[i].send_out[j].msg
            s.send_out[j].val @= s.fu[i].send_out[j].val
          s.fu[i].send_out[j].rdy @= s.send_out[j].rdy

      # During prologue, FUs see OPT_NAH so none assert recv_const.rdy.
      # If the skipped real op would have consumed a const, advance the const
      # queue with the ctrl pointer to keep later const reads aligned.
      s.recv_const.rdy @= reduce_or(s.fu_recv_const_rdy_vector) | \
                           ((s.prologue_count_inport != 0) & s.op_uses_const & s.recv_const.val)
      # Operation (especially mem access) won't perform more than once, because once the
      # operation is performance (i.e., the recv_opt.rdy would be set), the `element_done`
      # register would be set and be respected.
      s.recv_opt.rdy @= reduce_or(s.fu_recv_opt_rdy_vector) | (s.prologue_count_inport != 0)

      for j in range(num_inports):
        s.recv_in[j].rdy @= b1(0)

      # recv_in connection.
      for port in range(num_inports):
        for i in range(s.fu_list_size):
          s.fu[i].recv_in[port].msg @= s.recv_in[port].msg
          s.fu[i].recv_in[port].val @= s.recv_in[port].val
          # s.recv_in[j].rdy       @= s.fu[i].recv_in[j].rdy | s.recv_in[j].rdy
          s.fu_recv_in_rdy_vector[port][i] @= s.fu[i].recv_in[port].rdy
        s.recv_in[port].rdy @= reduce_or(s.fu_recv_in_rdy_vector[port])

  def line_trace(s):
    opt_str = " #"
    if s.recv_opt.val:
      opt_str = OPT_SYMBOL_DICT[s.recv_opt.msg.operation]
    out_str = " | ".join([(str(x.msg) + ", val: " + str(x.val) + ", rdy: " + str(x.rdy)) for x in s.send_out])
    recv_str = " | ".join([str(x.msg) for x in s.recv_in])
    return f'[recv: {recv_str}] {opt_str} (const: {s.recv_const.msg}, val: {s.recv_const.val}, rdy: {s.recv_const.rdy}) ] = [out: {out_str}] (recv_opt.rdy: {s.recv_opt.rdy}, recv_in[0].rdy: {s.recv_in[0].rdy}, recv_in[1].rdy: {s.recv_in[1].rdy}, {OPT_SYMBOL_DICT[s.recv_opt.msg.operation]}, recv_opt.val: {s.recv_opt.val}, send[0].val: {s.send_out[0].val}) '
