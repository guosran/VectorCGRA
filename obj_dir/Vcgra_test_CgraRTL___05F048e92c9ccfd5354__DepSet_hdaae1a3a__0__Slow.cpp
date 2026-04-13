// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcgra_test.h for the primary calling header

#include "Vcgra_test__pch.h"
#include "Vcgra_test_CgraRTL___05F048e92c9ccfd5354.h"

VL_ATTR_COLD void Vcgra_test_CgraRTL___05F048e92c9ccfd5354___stl_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__7(Vcgra_test_CgraRTL___05F048e92c9ccfd5354* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcgra_test_CgraRTL___05F048e92c9ccfd5354___stl_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__7\n"); );
    // Body
    vlSelf->__PVT__data_mem__DOT__response_crossbar__DOT__input_units___05F0__DOT__queue__DOT__ctrl___05Fwen 
        = (vlSelf->__PVT__data_mem__DOT__read_crossbar___05Fsend___05Fval
           [0U] & (2U > (IData)(vlSelf->__PVT__data_mem__DOT__response_crossbar__DOT__input_units___05F0__DOT__queue__DOT__ctrl___05Fcount)));
    vlSelf->__PVT__data_mem__DOT__response_crossbar__DOT__input_units___05F1__DOT__queue__DOT__ctrl___05Fwen 
        = (vlSelf->__PVT__data_mem__DOT__read_crossbar___05Fsend___05Fval
           [1U] & (2U > (IData)(vlSelf->__PVT__data_mem__DOT__response_crossbar__DOT__input_units___05F1__DOT__queue__DOT__ctrl___05Fcount)));
    vlSelf->__PVT__data_mem__DOT__response_crossbar___05Frecv___05Fval[0U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar___05Fsend___05Fval
        [0U];
    vlSelf->__PVT__data_mem__DOT__response_crossbar___05Frecv___05Fval[1U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar___05Fsend___05Fval
        [1U];
    vlSelf->__PVT__data_mem__DOT__response_crossbar__DOT__input_units___05F0__DOT__queue__DOT__ctrl___05Fsend_val 
        = ((0U < (IData)(vlSelf->__PVT__data_mem__DOT__response_crossbar__DOT__input_units___05F0__DOT__queue__DOT__ctrl___05Fcount)) 
           | vlSelf->__PVT__data_mem__DOT__read_crossbar___05Fsend___05Fval
           [0U]);
    vlSelf->__PVT__data_mem__DOT__response_crossbar__DOT__input_units___05F1__DOT__queue__DOT__ctrl___05Fsend_val 
        = ((0U < (IData)(vlSelf->__PVT__data_mem__DOT__response_crossbar__DOT__input_units___05F1__DOT__queue__DOT__ctrl___05Fcount)) 
           | vlSelf->__PVT__data_mem__DOT__read_crossbar___05Fsend___05Fval
           [1U]);
    vlSelf->__PVT__data_mem__DOT__response_crossbar__DOT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fwen[0U] 
        = vlSelf->__PVT__data_mem__DOT__response_crossbar__DOT__input_units___05F0__DOT__queue__DOT__ctrl___05Fwen;
    vlSelf->__PVT__data_mem__DOT__response_crossbar__DOT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fwen[0U] 
        = vlSelf->__PVT__data_mem__DOT__response_crossbar__DOT__input_units___05F1__DOT__queue__DOT__ctrl___05Fwen;
    vlSelf->__PVT__data_mem__DOT__response_crossbar__DOT__input_units___05F2__DOT__queue__DOT__ctrl___05Fwen 
        = (vlSelf->__PVT__data_mem__DOT__response_crossbar___05Frecv___05Fval
           [2U] & (2U > (IData)(vlSelf->__PVT__data_mem__DOT__response_crossbar__DOT__input_units___05F2__DOT__queue__DOT__ctrl___05Fcount)));
    vlSelf->__PVT__data_mem__DOT__response_crossbar__DOT__input_units___05F2__DOT__queue__DOT__ctrl___05Fsend_val 
        = ((0U < (IData)(vlSelf->__PVT__data_mem__DOT__response_crossbar__DOT__input_units___05F2__DOT__queue__DOT__ctrl___05Fcount)) 
           | vlSelf->__PVT__data_mem__DOT__response_crossbar___05Frecv___05Fval
           [2U]);
    vlSelf->__PVT__data_mem__DOT__response_crossbar__DOT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fwen[0U] 
        = vlSelf->__PVT__data_mem__DOT__response_crossbar__DOT__input_units___05F2__DOT__queue__DOT__ctrl___05Fwen;
}

VL_ATTR_COLD void Vcgra_test_CgraRTL___05F048e92c9ccfd5354___ctor_var_reset(Vcgra_test_CgraRTL___05F048e92c9ccfd5354* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcgra_test_CgraRTL___05F048e92c9ccfd5354___ctor_var_reset\n"); );
    // Body
    vlSelf->address_lower = VL_RAND_RESET_I(7);
    vlSelf->address_upper = VL_RAND_RESET_I(7);
    vlSelf->cgra_id = VL_RAND_RESET_I(2);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->recv_data_on_boundary_east___05Fmsg[__Vi0] = VL_RAND_RESET_Q(35);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->recv_data_on_boundary_east___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->recv_data_on_boundary_east___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->recv_data_on_boundary_north___05Fmsg[__Vi0] = VL_RAND_RESET_Q(35);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->recv_data_on_boundary_north___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->recv_data_on_boundary_north___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->recv_data_on_boundary_south___05Fmsg[__Vi0] = VL_RAND_RESET_Q(35);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->recv_data_on_boundary_south___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->recv_data_on_boundary_south___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->recv_data_on_boundary_west___05Fmsg[__Vi0] = VL_RAND_RESET_Q(35);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->recv_data_on_boundary_west___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->recv_data_on_boundary_west___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    VL_RAND_RESET_W(197, vlSelf->recv_from_cpu_pkt___05Fmsg);
    vlSelf->recv_from_cpu_pkt___05Frdy = VL_RAND_RESET_I(1);
    vlSelf->recv_from_cpu_pkt___05Fval = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(201, vlSelf->recv_from_inter_cgra_noc___05Fmsg);
    vlSelf->recv_from_inter_cgra_noc___05Frdy = VL_RAND_RESET_I(1);
    vlSelf->recv_from_inter_cgra_noc___05Fval = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->send_data_on_boundary_east___05Fmsg[__Vi0] = VL_RAND_RESET_Q(35);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->send_data_on_boundary_east___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->send_data_on_boundary_east___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->send_data_on_boundary_north___05Fmsg[__Vi0] = VL_RAND_RESET_Q(35);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->send_data_on_boundary_north___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->send_data_on_boundary_north___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->send_data_on_boundary_south___05Fmsg[__Vi0] = VL_RAND_RESET_Q(35);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->send_data_on_boundary_south___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->send_data_on_boundary_south___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->send_data_on_boundary_west___05Fmsg[__Vi0] = VL_RAND_RESET_Q(35);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->send_data_on_boundary_west___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->send_data_on_boundary_west___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    VL_RAND_RESET_W(197, vlSelf->send_to_cpu_pkt___05Fmsg);
    vlSelf->send_to_cpu_pkt___05Frdy = VL_RAND_RESET_I(1);
    vlSelf->send_to_cpu_pkt___05Fval = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(201, vlSelf->send_to_inter_cgra_noc___05Fmsg);
    vlSelf->send_to_inter_cgra_noc___05Frdy = VL_RAND_RESET_I(1);
    vlSelf->send_to_inter_cgra_noc___05Fval = VL_RAND_RESET_I(1);
    vlSelf->__PVT__controller___05Frecv_from_ctrl_ring_pkt___05Frdy = VL_RAND_RESET_I(1);
    vlSelf->__PVT__controller___05Frecv_from_inter_cgra_noc___05Frdy = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(197, vlSelf->__PVT__controller___05Fsend_to_ctrl_ring_pkt___05Fmsg);
    vlSelf->__PVT__controller___05Fsend_to_ctrl_ring_pkt___05Fval = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(201, vlSelf->__PVT__controller___05Fsend_to_inter_cgra_noc___05Fmsg);
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->__PVT__data_mem___05Frecv_raddr___05Fmsg[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->__PVT__data_mem___05Frecv_raddr___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->__PVT__data_mem___05Frecv_raddr___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->__PVT__data_mem___05Frecv_waddr___05Fmsg[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->__PVT__data_mem___05Frecv_waddr___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->__PVT__data_mem___05Frecv_waddr___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->__PVT__data_mem___05Frecv_wdata___05Fmsg[__Vi0] = VL_RAND_RESET_Q(35);
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->__PVT__data_mem___05Frecv_wdata___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->__PVT__data_mem___05Fsend_rdata___05Fmsg[__Vi0] = VL_RAND_RESET_Q(35);
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->__PVT__data_mem___05Fsend_rdata___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->__PVT__data_mem___05Fsend_rdata___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    VL_RAND_RESET_W(201, vlSelf->__PVT__data_mem___05Fsend_to_noc_load_request_pkt___05Fmsg);
    VL_RAND_RESET_W(201, vlSelf->__PVT__data_mem___05Fsend_to_noc_load_response_pkt___05Fmsg);
    VL_RAND_RESET_W(201, vlSelf->__PVT__data_mem___05Fsend_to_noc_store_pkt___05Fmsg);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->__PVT__tile___05Frecv_data___05Fmsg[__Vi0][__Vi1] = VL_RAND_RESET_Q(35);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->__PVT__tile___05Frecv_data___05Frdy[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->__PVT__tile___05Frecv_data___05Fval[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->__PVT__tile___05Fsend_data___05Fmsg[__Vi0][__Vi1] = VL_RAND_RESET_Q(35);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->__PVT__tile___05Fsend_data___05Frdy[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->__PVT__tile___05Fsend_data___05Fval[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellout__tile___05F0__send_data___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellinp__tile___05F0__send_data___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellout__tile___05F0__send_data___05Fmsg[__Vi0] = VL_RAND_RESET_Q(35);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellinp__tile___05F0__recv_data___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellout__tile___05F0__recv_data___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellinp__tile___05F0__recv_data___05Fmsg[__Vi0] = VL_RAND_RESET_Q(35);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellout__tile___05F1__send_data___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellinp__tile___05F1__send_data___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellout__tile___05F1__send_data___05Fmsg[__Vi0] = VL_RAND_RESET_Q(35);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellinp__tile___05F1__recv_data___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellout__tile___05F1__recv_data___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellinp__tile___05F1__recv_data___05Fmsg[__Vi0] = VL_RAND_RESET_Q(35);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellout__tile___05F2__send_data___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellinp__tile___05F2__send_data___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellout__tile___05F2__send_data___05Fmsg[__Vi0] = VL_RAND_RESET_Q(35);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellinp__tile___05F2__recv_data___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellout__tile___05F2__recv_data___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellinp__tile___05F2__recv_data___05Fmsg[__Vi0] = VL_RAND_RESET_Q(35);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellout__tile___05F3__send_data___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellinp__tile___05F3__send_data___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellout__tile___05F3__send_data___05Fmsg[__Vi0] = VL_RAND_RESET_Q(35);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellinp__tile___05F3__recv_data___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellout__tile___05F3__recv_data___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellinp__tile___05F3__recv_data___05Fmsg[__Vi0] = VL_RAND_RESET_Q(35);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellout__tile___05F4__send_data___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellinp__tile___05F4__send_data___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellout__tile___05F4__send_data___05Fmsg[__Vi0] = VL_RAND_RESET_Q(35);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellinp__tile___05F4__recv_data___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellout__tile___05F4__recv_data___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellinp__tile___05F4__recv_data___05Fmsg[__Vi0] = VL_RAND_RESET_Q(35);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellout__tile___05F5__send_data___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellinp__tile___05F5__send_data___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellout__tile___05F5__send_data___05Fmsg[__Vi0] = VL_RAND_RESET_Q(35);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellinp__tile___05F5__recv_data___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellout__tile___05F5__recv_data___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellinp__tile___05F5__recv_data___05Fmsg[__Vi0] = VL_RAND_RESET_Q(35);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellout__tile___05F6__send_data___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellinp__tile___05F6__send_data___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellout__tile___05F6__send_data___05Fmsg[__Vi0] = VL_RAND_RESET_Q(35);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellinp__tile___05F6__recv_data___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellout__tile___05F6__recv_data___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellinp__tile___05F6__recv_data___05Fmsg[__Vi0] = VL_RAND_RESET_Q(35);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellout__tile___05F7__send_data___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellinp__tile___05F7__send_data___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellout__tile___05F7__send_data___05Fmsg[__Vi0] = VL_RAND_RESET_Q(35);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellinp__tile___05F7__recv_data___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellout__tile___05F7__recv_data___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellinp__tile___05F7__recv_data___05Fmsg[__Vi0] = VL_RAND_RESET_Q(35);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellout__tile___05F8__send_data___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellinp__tile___05F8__send_data___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellout__tile___05F8__send_data___05Fmsg[__Vi0] = VL_RAND_RESET_Q(35);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellinp__tile___05F8__recv_data___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellout__tile___05F8__recv_data___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellinp__tile___05F8__recv_data___05Fmsg[__Vi0] = VL_RAND_RESET_Q(35);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellout__tile___05F9__send_data___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellinp__tile___05F9__send_data___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellout__tile___05F9__send_data___05Fmsg[__Vi0] = VL_RAND_RESET_Q(35);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellinp__tile___05F9__recv_data___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellout__tile___05F9__recv_data___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellinp__tile___05F9__recv_data___05Fmsg[__Vi0] = VL_RAND_RESET_Q(35);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellout__tile___05F10__send_data___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellinp__tile___05F10__send_data___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellout__tile___05F10__send_data___05Fmsg[__Vi0] = VL_RAND_RESET_Q(35);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellinp__tile___05F10__recv_data___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellout__tile___05F10__recv_data___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellinp__tile___05F10__recv_data___05Fmsg[__Vi0] = VL_RAND_RESET_Q(35);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellout__tile___05F11__send_data___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellinp__tile___05F11__send_data___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellout__tile___05F11__send_data___05Fmsg[__Vi0] = VL_RAND_RESET_Q(35);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellinp__tile___05F11__recv_data___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellout__tile___05F11__recv_data___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellinp__tile___05F11__recv_data___05Fmsg[__Vi0] = VL_RAND_RESET_Q(35);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellout__tile___05F12__send_data___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellinp__tile___05F12__send_data___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellout__tile___05F12__send_data___05Fmsg[__Vi0] = VL_RAND_RESET_Q(35);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellinp__tile___05F12__recv_data___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellout__tile___05F12__recv_data___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellinp__tile___05F12__recv_data___05Fmsg[__Vi0] = VL_RAND_RESET_Q(35);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellout__tile___05F13__send_data___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellinp__tile___05F13__send_data___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellout__tile___05F13__send_data___05Fmsg[__Vi0] = VL_RAND_RESET_Q(35);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellinp__tile___05F13__recv_data___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellout__tile___05F13__recv_data___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellinp__tile___05F13__recv_data___05Fmsg[__Vi0] = VL_RAND_RESET_Q(35);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellout__tile___05F14__send_data___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellinp__tile___05F14__send_data___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellout__tile___05F14__send_data___05Fmsg[__Vi0] = VL_RAND_RESET_Q(35);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellinp__tile___05F14__recv_data___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellout__tile___05F14__recv_data___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellinp__tile___05F14__recv_data___05Fmsg[__Vi0] = VL_RAND_RESET_Q(35);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellout__tile___05F15__send_data___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellinp__tile___05F15__send_data___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellout__tile___05F15__send_data___05Fmsg[__Vi0] = VL_RAND_RESET_Q(35);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellinp__tile___05F15__recv_data___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellout__tile___05F15__recv_data___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellinp__tile___05F15__recv_data___05Fmsg[__Vi0] = VL_RAND_RESET_Q(35);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__controller__DOT__addr2controller_lut[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__controller__DOT__idTo2d_x_lut[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__controller__DOT__idTo2d_y_lut[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        VL_RAND_RESET_W(202, vlSelf->__PVT__controller__DOT__crossbar___05Frecv___05Fmsg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__PVT__controller__DOT__crossbar___05Frecv___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__PVT__controller__DOT__crossbar___05Frecv___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        VL_RAND_RESET_W(202, vlSelf->__PVT__controller__DOT__crossbar___05Fsend___05Fmsg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__controller__DOT__crossbar___05Fsend___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__controller__DOT__crossbar___05Fsend___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    VL_RAND_RESET_W(201, vlSelf->__PVT__controller__DOT__global_reduce_unit___05Frecv_count___05Fmsg);
    vlSelf->__PVT__controller__DOT__global_reduce_unit___05Frecv_count___05Fval = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(201, vlSelf->__PVT__controller__DOT__global_reduce_unit___05Frecv_data___05Fmsg);
    vlSelf->__PVT__controller__DOT__global_reduce_unit___05Frecv_data___05Frdy = VL_RAND_RESET_I(1);
    vlSelf->__PVT__controller__DOT__global_reduce_unit___05Frecv_data___05Fval = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(202, vlSelf->__PVT__controller__DOT__global_reduce_unit___05Fsend___05Fmsg);
    vlSelf->__PVT__controller__DOT__global_reduce_unit___05Fsend___05Frdy = VL_RAND_RESET_I(1);
    vlSelf->__PVT__controller__DOT__global_reduce_unit___05Fsend___05Fval = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(201, vlSelf->__PVT__controller__DOT__send_to_mem_load_request_queue___05Frecv___05Fmsg);
    vlSelf->__PVT__controller__DOT__send_to_mem_load_request_queue___05Frecv___05Fval = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(201, vlSelf->__PVT__controller__DOT__send_to_mem_store_request_queue___05Frecv___05Fmsg);
    vlSelf->__PVT__controller__DOT__send_to_mem_store_request_queue___05Frecv___05Fval = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(201, vlSelf->__PVT__controller__DOT__send_to_tile_load_response_queue___05Frecv___05Fmsg);
    vlSelf->__PVT__controller__DOT__send_to_tile_load_response_queue___05Frecv___05Fval = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 1; ++__Vi1) {
            VL_RAND_RESET_W(202, vlSelf->__PVT__controller__DOT__crossbar__DOT__route_units___05Fsend___05Fmsg[__Vi0][__Vi1]);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 1; ++__Vi1) {
            vlSelf->__PVT__controller__DOT__crossbar__DOT__route_units___05Fsend___05Frdy[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 1; ++__Vi1) {
            vlSelf->__PVT__controller__DOT__crossbar__DOT__route_units___05Fsend___05Fval[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->controller__DOT__crossbar__DOT____Vcellout__route_units___05F0__send___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->controller__DOT__crossbar__DOT____Vcellinp__route_units___05F0__send___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        VL_RAND_RESET_W(202, vlSelf->controller__DOT__crossbar__DOT____Vcellout__route_units___05F0__send___05Fmsg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->controller__DOT__crossbar__DOT____Vcellout__route_units___05F1__send___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->controller__DOT__crossbar__DOT____Vcellinp__route_units___05F1__send___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        VL_RAND_RESET_W(202, vlSelf->controller__DOT__crossbar__DOT____Vcellout__route_units___05F1__send___05Fmsg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->controller__DOT__crossbar__DOT____Vcellout__route_units___05F2__send___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->controller__DOT__crossbar__DOT____Vcellinp__route_units___05F2__send___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        VL_RAND_RESET_W(202, vlSelf->controller__DOT__crossbar__DOT____Vcellout__route_units___05F2__send___05Fmsg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->controller__DOT__crossbar__DOT____Vcellout__route_units___05F3__send___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->controller__DOT__crossbar__DOT____Vcellinp__route_units___05F3__send___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        VL_RAND_RESET_W(202, vlSelf->controller__DOT__crossbar__DOT____Vcellout__route_units___05F3__send___05Fmsg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->controller__DOT__crossbar__DOT____Vcellout__route_units___05F4__send___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->controller__DOT__crossbar__DOT____Vcellinp__route_units___05F4__send___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        VL_RAND_RESET_W(202, vlSelf->controller__DOT__crossbar__DOT____Vcellout__route_units___05F4__send___05Fmsg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->controller__DOT__crossbar__DOT____Vcellout__route_units___05F5__send___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->controller__DOT__crossbar__DOT____Vcellinp__route_units___05F5__send___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        VL_RAND_RESET_W(202, vlSelf->controller__DOT__crossbar__DOT____Vcellout__route_units___05F5__send___05Fmsg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 6; ++__Vi1) {
            VL_RAND_RESET_W(202, vlSelf->__PVT__controller__DOT__crossbar__DOT__switch_units___05Frecv___05Fmsg[__Vi0][__Vi1]);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 6; ++__Vi1) {
            vlSelf->__PVT__controller__DOT__crossbar__DOT__switch_units___05Frecv___05Frdy[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 6; ++__Vi1) {
            vlSelf->__PVT__controller__DOT__crossbar__DOT__switch_units___05Frecv___05Fval[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->controller__DOT__crossbar__DOT____Vcellinp__switch_units___05F0__recv___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->controller__DOT__crossbar__DOT____Vcellout__switch_units___05F0__recv___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        VL_RAND_RESET_W(202, vlSelf->controller__DOT__crossbar__DOT____Vcellinp__switch_units___05F0__recv___05Fmsg[__Vi0]);
    }
    vlSelf->__PVT__controller__DOT__crossbar__DOT__input_units___05F0__DOT__queue__DOT__ctrl___05Fcount = VL_RAND_RESET_I(2);
    vlSelf->__PVT__controller__DOT__crossbar__DOT__input_units___05F0__DOT__queue__DOT__ctrl___05Fwen = VL_RAND_RESET_I(1);
    vlSelf->__PVT__controller__DOT__crossbar__DOT__input_units___05F0__DOT__queue__DOT__ctrl__DOT__head = VL_RAND_RESET_I(1);
    vlSelf->__PVT__controller__DOT__crossbar__DOT__input_units___05F0__DOT__queue__DOT__ctrl__DOT__send_xfer = VL_RAND_RESET_I(1);
    vlSelf->__PVT__controller__DOT__crossbar__DOT__input_units___05F0__DOT__queue__DOT__ctrl__DOT__tail = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__controller__DOT__crossbar__DOT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        VL_RAND_RESET_W(202, vlSelf->__PVT__controller__DOT__crossbar__DOT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Frdata[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__controller__DOT__crossbar__DOT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        VL_RAND_RESET_W(202, vlSelf->__PVT__controller__DOT__crossbar__DOT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fwdata[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__controller__DOT__crossbar__DOT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fwen[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(202, vlSelf->__PVT__controller__DOT__crossbar__DOT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs[__Vi0]);
    }
    vlSelf->__PVT__controller__DOT__crossbar__DOT__input_units___05F1__DOT__queue__DOT__ctrl___05Fcount = VL_RAND_RESET_I(2);
    vlSelf->__PVT__controller__DOT__crossbar__DOT__input_units___05F1__DOT__queue__DOT__ctrl___05Fwen = VL_RAND_RESET_I(1);
    vlSelf->__PVT__controller__DOT__crossbar__DOT__input_units___05F1__DOT__queue__DOT__ctrl__DOT__head = VL_RAND_RESET_I(1);
    vlSelf->__PVT__controller__DOT__crossbar__DOT__input_units___05F1__DOT__queue__DOT__ctrl__DOT__send_xfer = VL_RAND_RESET_I(1);
    vlSelf->__PVT__controller__DOT__crossbar__DOT__input_units___05F1__DOT__queue__DOT__ctrl__DOT__tail = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__controller__DOT__crossbar__DOT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        VL_RAND_RESET_W(202, vlSelf->__PVT__controller__DOT__crossbar__DOT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Frdata[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__controller__DOT__crossbar__DOT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        VL_RAND_RESET_W(202, vlSelf->__PVT__controller__DOT__crossbar__DOT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fwdata[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__controller__DOT__crossbar__DOT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fwen[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(202, vlSelf->__PVT__controller__DOT__crossbar__DOT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs[__Vi0]);
    }
    vlSelf->__PVT__controller__DOT__crossbar__DOT__input_units___05F2__DOT__queue__DOT__ctrl___05Fcount = VL_RAND_RESET_I(2);
    vlSelf->__PVT__controller__DOT__crossbar__DOT__input_units___05F2__DOT__queue__DOT__ctrl___05Fwen = VL_RAND_RESET_I(1);
    vlSelf->__PVT__controller__DOT__crossbar__DOT__input_units___05F2__DOT__queue__DOT__ctrl__DOT__head = VL_RAND_RESET_I(1);
    vlSelf->__PVT__controller__DOT__crossbar__DOT__input_units___05F2__DOT__queue__DOT__ctrl__DOT__send_xfer = VL_RAND_RESET_I(1);
    vlSelf->__PVT__controller__DOT__crossbar__DOT__input_units___05F2__DOT__queue__DOT__ctrl__DOT__tail = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__controller__DOT__crossbar__DOT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        VL_RAND_RESET_W(202, vlSelf->__PVT__controller__DOT__crossbar__DOT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Frdata[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__controller__DOT__crossbar__DOT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        VL_RAND_RESET_W(202, vlSelf->__PVT__controller__DOT__crossbar__DOT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fwdata[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__controller__DOT__crossbar__DOT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fwen[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(202, vlSelf->__PVT__controller__DOT__crossbar__DOT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs[__Vi0]);
    }
    vlSelf->__PVT__controller__DOT__crossbar__DOT__input_units___05F3__DOT__queue__DOT__ctrl___05Fcount = VL_RAND_RESET_I(2);
    vlSelf->__PVT__controller__DOT__crossbar__DOT__input_units___05F3__DOT__queue__DOT__ctrl___05Fwen = VL_RAND_RESET_I(1);
    vlSelf->__PVT__controller__DOT__crossbar__DOT__input_units___05F3__DOT__queue__DOT__ctrl__DOT__head = VL_RAND_RESET_I(1);
    vlSelf->__PVT__controller__DOT__crossbar__DOT__input_units___05F3__DOT__queue__DOT__ctrl__DOT__send_xfer = VL_RAND_RESET_I(1);
    vlSelf->__PVT__controller__DOT__crossbar__DOT__input_units___05F3__DOT__queue__DOT__ctrl__DOT__tail = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__controller__DOT__crossbar__DOT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        VL_RAND_RESET_W(202, vlSelf->__PVT__controller__DOT__crossbar__DOT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Frdata[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__controller__DOT__crossbar__DOT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        VL_RAND_RESET_W(202, vlSelf->__PVT__controller__DOT__crossbar__DOT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Fwdata[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__controller__DOT__crossbar__DOT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Fwen[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(202, vlSelf->__PVT__controller__DOT__crossbar__DOT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs[__Vi0]);
    }
    vlSelf->__PVT__controller__DOT__crossbar__DOT__input_units___05F4__DOT__queue__DOT__ctrl___05Fcount = VL_RAND_RESET_I(2);
    vlSelf->__PVT__controller__DOT__crossbar__DOT__input_units___05F4__DOT__queue__DOT__ctrl___05Fwen = VL_RAND_RESET_I(1);
    vlSelf->__PVT__controller__DOT__crossbar__DOT__input_units___05F4__DOT__queue__DOT__ctrl__DOT__head = VL_RAND_RESET_I(1);
    vlSelf->__PVT__controller__DOT__crossbar__DOT__input_units___05F4__DOT__queue__DOT__ctrl__DOT__send_xfer = VL_RAND_RESET_I(1);
    vlSelf->__PVT__controller__DOT__crossbar__DOT__input_units___05F4__DOT__queue__DOT__ctrl__DOT__tail = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__controller__DOT__crossbar__DOT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        VL_RAND_RESET_W(202, vlSelf->__PVT__controller__DOT__crossbar__DOT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Frdata[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__controller__DOT__crossbar__DOT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        VL_RAND_RESET_W(202, vlSelf->__PVT__controller__DOT__crossbar__DOT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Fwdata[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__controller__DOT__crossbar__DOT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Fwen[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(202, vlSelf->__PVT__controller__DOT__crossbar__DOT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs[__Vi0]);
    }
    vlSelf->__PVT__controller__DOT__crossbar__DOT__input_units___05F5__DOT__queue__DOT__ctrl___05Fcount = VL_RAND_RESET_I(2);
    vlSelf->__PVT__controller__DOT__crossbar__DOT__input_units___05F5__DOT__queue__DOT__ctrl___05Fwen = VL_RAND_RESET_I(1);
    vlSelf->__PVT__controller__DOT__crossbar__DOT__input_units___05F5__DOT__queue__DOT__ctrl__DOT__head = VL_RAND_RESET_I(1);
    vlSelf->__PVT__controller__DOT__crossbar__DOT__input_units___05F5__DOT__queue__DOT__ctrl__DOT__send_xfer = VL_RAND_RESET_I(1);
    vlSelf->__PVT__controller__DOT__crossbar__DOT__input_units___05F5__DOT__queue__DOT__ctrl__DOT__tail = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__controller__DOT__crossbar__DOT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        VL_RAND_RESET_W(202, vlSelf->__PVT__controller__DOT__crossbar__DOT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf___05Frdata[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__controller__DOT__crossbar__DOT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        VL_RAND_RESET_W(202, vlSelf->__PVT__controller__DOT__crossbar__DOT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf___05Fwdata[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__controller__DOT__crossbar__DOT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf___05Fwen[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(202, vlSelf->__PVT__controller__DOT__crossbar__DOT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs[__Vi0]);
    }
    vlSelf->__PVT__controller__DOT__crossbar__DOT__route_units___05F0__DOT__out_dir = VL_RAND_RESET_I(1);
    vlSelf->controller__DOT__crossbar__DOT__route_units___05F0__DOT____Vlvbound_h73cc810d__0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__controller__DOT__crossbar__DOT__route_units___05F1__DOT__out_dir = VL_RAND_RESET_I(1);
    vlSelf->controller__DOT__crossbar__DOT__route_units___05F1__DOT____Vlvbound_h73cc810d__0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__controller__DOT__crossbar__DOT__route_units___05F2__DOT__out_dir = VL_RAND_RESET_I(1);
    vlSelf->controller__DOT__crossbar__DOT__route_units___05F2__DOT____Vlvbound_h73cc810d__0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__controller__DOT__crossbar__DOT__route_units___05F3__DOT__out_dir = VL_RAND_RESET_I(1);
    vlSelf->controller__DOT__crossbar__DOT__route_units___05F3__DOT____Vlvbound_h73cc810d__0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__controller__DOT__crossbar__DOT__route_units___05F4__DOT__out_dir = VL_RAND_RESET_I(1);
    vlSelf->controller__DOT__crossbar__DOT__route_units___05F4__DOT____Vlvbound_h73cc810d__0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__controller__DOT__crossbar__DOT__route_units___05F5__DOT__out_dir = VL_RAND_RESET_I(1);
    vlSelf->controller__DOT__crossbar__DOT__route_units___05F5__DOT____Vlvbound_h73cc810d__0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__controller__DOT__crossbar__DOT__switch_units___05F0__DOT__arbiter___05Fgrants = VL_RAND_RESET_I(6);
    vlSelf->__PVT__controller__DOT__crossbar__DOT__switch_units___05F0__DOT__encoder___05Fout = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        VL_RAND_RESET_W(202, vlSelf->__PVT__controller__DOT__crossbar__DOT__switch_units___05F0__DOT__mux___05Fin_[__Vi0]);
    }
    vlSelf->__PVT__controller__DOT__crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int = VL_RAND_RESET_I(12);
    vlSelf->__PVT__controller__DOT__crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__kills = VL_RAND_RESET_I(13);
    vlSelf->__PVT__controller__DOT__crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fout = VL_RAND_RESET_I(6);
    vlSelf->controller__DOT__crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound_hd2f3a35b__0 = VL_RAND_RESET_I(1);
    vlSelf->controller__DOT__crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound_hd2f3a35b__1 = VL_RAND_RESET_I(1);
    vlSelf->controller__DOT__crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound_hb2227637__0 = VL_RAND_RESET_I(1);
    vlSelf->controller__DOT__crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound_hb2227637__1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__controller__DOT__global_reduce_unit__DOT__receiving_count = VL_RAND_RESET_Q(35);
    vlSelf->__PVT__controller__DOT__global_reduce_unit__DOT__reduce_add_value = VL_RAND_RESET_Q(35);
    vlSelf->__PVT__controller__DOT__global_reduce_unit__DOT__reduce_mul_value = VL_RAND_RESET_Q(35);
    vlSelf->__PVT__controller__DOT__global_reduce_unit__DOT__sending_count = VL_RAND_RESET_Q(35);
    vlSelf->__PVT__controller__DOT__global_reduce_unit__DOT__target_count = VL_RAND_RESET_Q(35);
    vlSelf->__PVT__controller__DOT__global_reduce_unit__DOT__queue__DOT__ctrl___05Fcount = VL_RAND_RESET_I(5);
    vlSelf->__PVT__controller__DOT__global_reduce_unit__DOT__queue__DOT__ctrl___05Fwen = VL_RAND_RESET_I(1);
    vlSelf->__PVT__controller__DOT__global_reduce_unit__DOT__queue__DOT__ctrl__DOT__head = VL_RAND_RESET_I(4);
    vlSelf->__PVT__controller__DOT__global_reduce_unit__DOT__queue__DOT__ctrl__DOT__send_xfer = VL_RAND_RESET_I(1);
    vlSelf->__PVT__controller__DOT__global_reduce_unit__DOT__queue__DOT__ctrl__DOT__tail = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__controller__DOT__global_reduce_unit__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        VL_RAND_RESET_W(201, vlSelf->__PVT__controller__DOT__global_reduce_unit__DOT__queue__DOT__dpath__DOT__rf___05Frdata[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__controller__DOT__global_reduce_unit__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        VL_RAND_RESET_W(201, vlSelf->__PVT__controller__DOT__global_reduce_unit__DOT__queue__DOT__dpath__DOT__rf___05Fwdata[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__controller__DOT__global_reduce_unit__DOT__queue__DOT__dpath__DOT__rf___05Fwen[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        VL_RAND_RESET_W(201, vlSelf->__PVT__controller__DOT__global_reduce_unit__DOT__queue__DOT__dpath__DOT__rf__DOT__regs[__Vi0]);
    }
    vlSelf->__PVT__controller__DOT__recv_from_cpu_pkt_queue__DOT__ctrl___05Fcount = VL_RAND_RESET_I(2);
    vlSelf->__PVT__controller__DOT__recv_from_cpu_pkt_queue__DOT__ctrl___05Fwen = VL_RAND_RESET_I(1);
    vlSelf->__PVT__controller__DOT__recv_from_cpu_pkt_queue__DOT__ctrl__DOT__head = VL_RAND_RESET_I(1);
    vlSelf->__PVT__controller__DOT__recv_from_cpu_pkt_queue__DOT__ctrl__DOT__send_xfer = VL_RAND_RESET_I(1);
    vlSelf->__PVT__controller__DOT__recv_from_cpu_pkt_queue__DOT__ctrl__DOT__tail = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__controller__DOT__recv_from_cpu_pkt_queue__DOT__dpath__DOT__rf___05Fraddr[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        VL_RAND_RESET_W(197, vlSelf->__PVT__controller__DOT__recv_from_cpu_pkt_queue__DOT__dpath__DOT__rf___05Frdata[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__controller__DOT__recv_from_cpu_pkt_queue__DOT__dpath__DOT__rf___05Fwaddr[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        VL_RAND_RESET_W(197, vlSelf->__PVT__controller__DOT__recv_from_cpu_pkt_queue__DOT__dpath__DOT__rf___05Fwdata[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__controller__DOT__recv_from_cpu_pkt_queue__DOT__dpath__DOT__rf___05Fwen[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(197, vlSelf->__PVT__controller__DOT__recv_from_cpu_pkt_queue__DOT__dpath__DOT__rf__DOT__regs[__Vi0]);
    }
    vlSelf->__PVT__controller__DOT__send_to_cpu_pkt_queue__DOT__ctrl___05Fcount = VL_RAND_RESET_I(2);
    vlSelf->__PVT__controller__DOT__send_to_cpu_pkt_queue__DOT__ctrl___05Fwen = VL_RAND_RESET_I(1);
    vlSelf->__PVT__controller__DOT__send_to_cpu_pkt_queue__DOT__ctrl__DOT__head = VL_RAND_RESET_I(1);
    vlSelf->__PVT__controller__DOT__send_to_cpu_pkt_queue__DOT__ctrl__DOT__send_xfer = VL_RAND_RESET_I(1);
    vlSelf->__PVT__controller__DOT__send_to_cpu_pkt_queue__DOT__ctrl__DOT__tail = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__controller__DOT__send_to_cpu_pkt_queue__DOT__dpath__DOT__rf___05Fraddr[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        VL_RAND_RESET_W(197, vlSelf->__PVT__controller__DOT__send_to_cpu_pkt_queue__DOT__dpath__DOT__rf___05Frdata[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__controller__DOT__send_to_cpu_pkt_queue__DOT__dpath__DOT__rf___05Fwaddr[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        VL_RAND_RESET_W(197, vlSelf->__PVT__controller__DOT__send_to_cpu_pkt_queue__DOT__dpath__DOT__rf___05Fwdata[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__controller__DOT__send_to_cpu_pkt_queue__DOT__dpath__DOT__rf___05Fwen[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(197, vlSelf->__PVT__controller__DOT__send_to_cpu_pkt_queue__DOT__dpath__DOT__rf__DOT__regs[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 17; ++__Vi0) {
        vlSelf->__PVT__ctrl_ring__DOT__recv_adp___05Fsend___05Fen[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 17; ++__Vi0) {
        VL_RAND_RESET_W(197, vlSelf->__PVT__ctrl_ring__DOT__recv_adp___05Fsend___05Fmsg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 17; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->__PVT__ctrl_ring__DOT__recv_adp___05Fsend___05Fyum[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ctrl_ring__DOT____Vcellinp__recv_adp___05F0__send___05Fyum[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ctrl_ring__DOT____Vcellinp__recv_adp___05F1__send___05Fyum[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ctrl_ring__DOT____Vcellinp__recv_adp___05F2__send___05Fyum[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ctrl_ring__DOT____Vcellinp__recv_adp___05F3__send___05Fyum[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ctrl_ring__DOT____Vcellinp__recv_adp___05F4__send___05Fyum[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ctrl_ring__DOT____Vcellinp__recv_adp___05F5__send___05Fyum[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ctrl_ring__DOT____Vcellinp__recv_adp___05F6__send___05Fyum[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ctrl_ring__DOT____Vcellinp__recv_adp___05F7__send___05Fyum[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ctrl_ring__DOT____Vcellinp__recv_adp___05F8__send___05Fyum[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ctrl_ring__DOT____Vcellinp__recv_adp___05F9__send___05Fyum[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ctrl_ring__DOT____Vcellinp__recv_adp___05F10__send___05Fyum[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ctrl_ring__DOT____Vcellinp__recv_adp___05F11__send___05Fyum[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ctrl_ring__DOT____Vcellinp__recv_adp___05F12__send___05Fyum[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ctrl_ring__DOT____Vcellinp__recv_adp___05F13__send___05Fyum[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ctrl_ring__DOT____Vcellinp__recv_adp___05F14__send___05Fyum[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ctrl_ring__DOT____Vcellinp__recv_adp___05F15__send___05Fyum[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ctrl_ring__DOT____Vcellinp__recv_adp___05F16__send___05Fyum[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 17; ++__Vi0) {
        vlSelf->__PVT__ctrl_ring__DOT__routers___05Fpos[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 17; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__PVT__ctrl_ring__DOT__routers___05Frecv___05Fen[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 17; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            VL_RAND_RESET_W(197, vlSelf->__PVT__ctrl_ring__DOT__routers___05Frecv___05Fmsg[__Vi0][__Vi1]);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 17; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            for (int __Vi2 = 0; __Vi2 < 2; ++__Vi2) {
                vlSelf->__PVT__ctrl_ring__DOT__routers___05Frecv___05Fyum[__Vi0][__Vi1][__Vi2] = VL_RAND_RESET_I(1);
            }
        }
    }
    for (int __Vi0 = 0; __Vi0 < 17; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__PVT__ctrl_ring__DOT__routers___05Fsend___05Fen[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 17; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            VL_RAND_RESET_W(197, vlSelf->__PVT__ctrl_ring__DOT__routers___05Fsend___05Fmsg[__Vi0][__Vi1]);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 17; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            for (int __Vi2 = 0; __Vi2 < 2; ++__Vi2) {
                vlSelf->__PVT__ctrl_ring__DOT__routers___05Fsend___05Fyum[__Vi0][__Vi1][__Vi2] = VL_RAND_RESET_I(1);
            }
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->ctrl_ring__DOT____Vcellinp__routers___05F0__send___05Fyum[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(197, vlSelf->ctrl_ring__DOT____Vcellout__routers___05F0__send___05Fmsg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->ctrl_ring__DOT____Vcellout__routers___05F0__send___05Fen[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->ctrl_ring__DOT____Vcellout__routers___05F0__recv___05Fyum[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(197, vlSelf->ctrl_ring__DOT____Vcellinp__routers___05F0__recv___05Fmsg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->ctrl_ring__DOT____Vcellinp__routers___05F0__recv___05Fen[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->ctrl_ring__DOT____Vcellinp__routers___05F1__send___05Fyum[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(197, vlSelf->ctrl_ring__DOT____Vcellout__routers___05F1__send___05Fmsg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->ctrl_ring__DOT____Vcellout__routers___05F1__send___05Fen[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->ctrl_ring__DOT____Vcellout__routers___05F1__recv___05Fyum[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(197, vlSelf->ctrl_ring__DOT____Vcellinp__routers___05F1__recv___05Fmsg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->ctrl_ring__DOT____Vcellinp__routers___05F1__recv___05Fen[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->ctrl_ring__DOT____Vcellinp__routers___05F2__send___05Fyum[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(197, vlSelf->ctrl_ring__DOT____Vcellout__routers___05F2__send___05Fmsg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->ctrl_ring__DOT____Vcellout__routers___05F2__send___05Fen[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->ctrl_ring__DOT____Vcellout__routers___05F2__recv___05Fyum[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(197, vlSelf->ctrl_ring__DOT____Vcellinp__routers___05F2__recv___05Fmsg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->ctrl_ring__DOT____Vcellinp__routers___05F2__recv___05Fen[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->ctrl_ring__DOT____Vcellinp__routers___05F3__send___05Fyum[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(197, vlSelf->ctrl_ring__DOT____Vcellout__routers___05F3__send___05Fmsg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->ctrl_ring__DOT____Vcellout__routers___05F3__send___05Fen[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->ctrl_ring__DOT____Vcellout__routers___05F3__recv___05Fyum[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(197, vlSelf->ctrl_ring__DOT____Vcellinp__routers___05F3__recv___05Fmsg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->ctrl_ring__DOT____Vcellinp__routers___05F3__recv___05Fen[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->ctrl_ring__DOT____Vcellinp__routers___05F4__send___05Fyum[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(197, vlSelf->ctrl_ring__DOT____Vcellout__routers___05F4__send___05Fmsg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->ctrl_ring__DOT____Vcellout__routers___05F4__send___05Fen[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->ctrl_ring__DOT____Vcellout__routers___05F4__recv___05Fyum[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(197, vlSelf->ctrl_ring__DOT____Vcellinp__routers___05F4__recv___05Fmsg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->ctrl_ring__DOT____Vcellinp__routers___05F4__recv___05Fen[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->ctrl_ring__DOT____Vcellinp__routers___05F5__send___05Fyum[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(197, vlSelf->ctrl_ring__DOT____Vcellout__routers___05F5__send___05Fmsg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->ctrl_ring__DOT____Vcellout__routers___05F5__send___05Fen[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->ctrl_ring__DOT____Vcellout__routers___05F5__recv___05Fyum[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(197, vlSelf->ctrl_ring__DOT____Vcellinp__routers___05F5__recv___05Fmsg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->ctrl_ring__DOT____Vcellinp__routers___05F5__recv___05Fen[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->ctrl_ring__DOT____Vcellinp__routers___05F6__send___05Fyum[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(197, vlSelf->ctrl_ring__DOT____Vcellout__routers___05F6__send___05Fmsg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->ctrl_ring__DOT____Vcellout__routers___05F6__send___05Fen[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->ctrl_ring__DOT____Vcellout__routers___05F6__recv___05Fyum[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(197, vlSelf->ctrl_ring__DOT____Vcellinp__routers___05F6__recv___05Fmsg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->ctrl_ring__DOT____Vcellinp__routers___05F6__recv___05Fen[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->ctrl_ring__DOT____Vcellinp__routers___05F7__send___05Fyum[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(197, vlSelf->ctrl_ring__DOT____Vcellout__routers___05F7__send___05Fmsg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->ctrl_ring__DOT____Vcellout__routers___05F7__send___05Fen[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->ctrl_ring__DOT____Vcellout__routers___05F7__recv___05Fyum[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(197, vlSelf->ctrl_ring__DOT____Vcellinp__routers___05F7__recv___05Fmsg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->ctrl_ring__DOT____Vcellinp__routers___05F7__recv___05Fen[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->ctrl_ring__DOT____Vcellinp__routers___05F8__send___05Fyum[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(197, vlSelf->ctrl_ring__DOT____Vcellout__routers___05F8__send___05Fmsg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->ctrl_ring__DOT____Vcellout__routers___05F8__send___05Fen[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->ctrl_ring__DOT____Vcellout__routers___05F8__recv___05Fyum[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(197, vlSelf->ctrl_ring__DOT____Vcellinp__routers___05F8__recv___05Fmsg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->ctrl_ring__DOT____Vcellinp__routers___05F8__recv___05Fen[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->ctrl_ring__DOT____Vcellinp__routers___05F9__send___05Fyum[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(197, vlSelf->ctrl_ring__DOT____Vcellout__routers___05F9__send___05Fmsg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->ctrl_ring__DOT____Vcellout__routers___05F9__send___05Fen[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->ctrl_ring__DOT____Vcellout__routers___05F9__recv___05Fyum[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(197, vlSelf->ctrl_ring__DOT____Vcellinp__routers___05F9__recv___05Fmsg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->ctrl_ring__DOT____Vcellinp__routers___05F9__recv___05Fen[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->ctrl_ring__DOT____Vcellinp__routers___05F10__send___05Fyum[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(197, vlSelf->ctrl_ring__DOT____Vcellout__routers___05F10__send___05Fmsg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->ctrl_ring__DOT____Vcellout__routers___05F10__send___05Fen[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->ctrl_ring__DOT____Vcellout__routers___05F10__recv___05Fyum[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(197, vlSelf->ctrl_ring__DOT____Vcellinp__routers___05F10__recv___05Fmsg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->ctrl_ring__DOT____Vcellinp__routers___05F10__recv___05Fen[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->ctrl_ring__DOT____Vcellinp__routers___05F11__send___05Fyum[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(197, vlSelf->ctrl_ring__DOT____Vcellout__routers___05F11__send___05Fmsg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->ctrl_ring__DOT____Vcellout__routers___05F11__send___05Fen[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->ctrl_ring__DOT____Vcellout__routers___05F11__recv___05Fyum[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(197, vlSelf->ctrl_ring__DOT____Vcellinp__routers___05F11__recv___05Fmsg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->ctrl_ring__DOT____Vcellinp__routers___05F11__recv___05Fen[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->ctrl_ring__DOT____Vcellinp__routers___05F12__send___05Fyum[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(197, vlSelf->ctrl_ring__DOT____Vcellout__routers___05F12__send___05Fmsg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->ctrl_ring__DOT____Vcellout__routers___05F12__send___05Fen[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->ctrl_ring__DOT____Vcellout__routers___05F12__recv___05Fyum[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(197, vlSelf->ctrl_ring__DOT____Vcellinp__routers___05F12__recv___05Fmsg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->ctrl_ring__DOT____Vcellinp__routers___05F12__recv___05Fen[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->ctrl_ring__DOT____Vcellinp__routers___05F13__send___05Fyum[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(197, vlSelf->ctrl_ring__DOT____Vcellout__routers___05F13__send___05Fmsg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->ctrl_ring__DOT____Vcellout__routers___05F13__send___05Fen[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->ctrl_ring__DOT____Vcellout__routers___05F13__recv___05Fyum[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(197, vlSelf->ctrl_ring__DOT____Vcellinp__routers___05F13__recv___05Fmsg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->ctrl_ring__DOT____Vcellinp__routers___05F13__recv___05Fen[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->ctrl_ring__DOT____Vcellinp__routers___05F14__send___05Fyum[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(197, vlSelf->ctrl_ring__DOT____Vcellout__routers___05F14__send___05Fmsg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->ctrl_ring__DOT____Vcellout__routers___05F14__send___05Fen[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->ctrl_ring__DOT____Vcellout__routers___05F14__recv___05Fyum[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(197, vlSelf->ctrl_ring__DOT____Vcellinp__routers___05F14__recv___05Fmsg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->ctrl_ring__DOT____Vcellinp__routers___05F14__recv___05Fen[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->ctrl_ring__DOT____Vcellinp__routers___05F15__send___05Fyum[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(197, vlSelf->ctrl_ring__DOT____Vcellout__routers___05F15__send___05Fmsg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->ctrl_ring__DOT____Vcellout__routers___05F15__send___05Fen[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->ctrl_ring__DOT____Vcellout__routers___05F15__recv___05Fyum[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(197, vlSelf->ctrl_ring__DOT____Vcellinp__routers___05F15__recv___05Fmsg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->ctrl_ring__DOT____Vcellinp__routers___05F15__recv___05Fen[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->ctrl_ring__DOT____Vcellinp__routers___05F16__send___05Fyum[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(197, vlSelf->ctrl_ring__DOT____Vcellout__routers___05F16__send___05Fmsg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->ctrl_ring__DOT____Vcellout__routers___05F16__send___05Fen[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->ctrl_ring__DOT____Vcellout__routers___05F16__recv___05Fyum[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(197, vlSelf->ctrl_ring__DOT____Vcellinp__routers___05F16__recv___05Fmsg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->ctrl_ring__DOT____Vcellinp__routers___05F16__recv___05Fen[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 17; ++__Vi0) {
        vlSelf->__PVT__ctrl_ring__DOT__send_adp___05Frecv___05Fen[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 17; ++__Vi0) {
        VL_RAND_RESET_W(197, vlSelf->__PVT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 17; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->__PVT__ctrl_ring__DOT__send_adp___05Frecv___05Fyum[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ctrl_ring__DOT____Vcellout__send_adp___05F0__recv___05Fyum[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ctrl_ring__DOT____Vcellout__send_adp___05F1__recv___05Fyum[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ctrl_ring__DOT____Vcellout__send_adp___05F2__recv___05Fyum[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ctrl_ring__DOT____Vcellout__send_adp___05F3__recv___05Fyum[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ctrl_ring__DOT____Vcellout__send_adp___05F4__recv___05Fyum[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ctrl_ring__DOT____Vcellout__send_adp___05F5__recv___05Fyum[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ctrl_ring__DOT____Vcellout__send_adp___05F6__recv___05Fyum[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ctrl_ring__DOT____Vcellout__send_adp___05F7__recv___05Fyum[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ctrl_ring__DOT____Vcellout__send_adp___05F8__recv___05Fyum[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ctrl_ring__DOT____Vcellout__send_adp___05F9__recv___05Fyum[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ctrl_ring__DOT____Vcellout__send_adp___05F10__recv___05Fyum[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ctrl_ring__DOT____Vcellout__send_adp___05F11__recv___05Fyum[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ctrl_ring__DOT____Vcellout__send_adp___05F12__recv___05Fyum[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ctrl_ring__DOT____Vcellout__send_adp___05F13__recv___05Fyum[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ctrl_ring__DOT____Vcellout__send_adp___05F14__recv___05Fyum[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ctrl_ring__DOT____Vcellout__send_adp___05F15__recv___05Fyum[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ctrl_ring__DOT____Vcellout__send_adp___05F16__recv___05Fyum[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__data_mem__DOT__idTo2d_x_lut[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__data_mem__DOT__idTo2d_y_lut[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__data_mem__DOT__rd_pkt[__Vi0] = VL_RAND_RESET_Q(57);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__data_mem__DOT__wr_pkt[__Vi0] = VL_RAND_RESET_Q(57);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg[__Vi0] = VL_RAND_RESET_Q(57);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__data_mem__DOT__read_crossbar___05Fsend___05Fmsg[__Vi0] = VL_RAND_RESET_Q(57);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__data_mem__DOT__read_crossbar___05Fsend___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__data_mem__DOT__read_crossbar___05Fsend___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__data_mem__DOT__response_crossbar___05Frecv___05Fmsg[__Vi0] = VL_RAND_RESET_Q(57);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__data_mem__DOT__response_crossbar___05Frecv___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__data_mem__DOT__response_crossbar___05Frecv___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__data_mem__DOT__response_crossbar___05Fsend___05Fmsg[__Vi0] = VL_RAND_RESET_Q(57);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__data_mem__DOT__response_crossbar___05Fsend___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fmsg[__Vi0] = VL_RAND_RESET_Q(57);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg[__Vi0] = VL_RAND_RESET_Q(57);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__data_mem__DOT__memory_wrapper___05F0__DOT__memory___05Fraddr[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__data_mem__DOT__memory_wrapper___05F0__DOT__memory___05Frdata[__Vi0] = VL_RAND_RESET_Q(35);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__data_mem__DOT__memory_wrapper___05F0__DOT__memory___05Fwaddr[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__data_mem__DOT__memory_wrapper___05F0__DOT__memory___05Fwdata[__Vi0] = VL_RAND_RESET_Q(35);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__data_mem__DOT__memory_wrapper___05F0__DOT__memory___05Fwen[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->data_mem__DOT__memory_wrapper___05F0__DOT__memory__DOT__regs[__Vi0] = VL_RAND_RESET_Q(35);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__data_mem__DOT__memory_wrapper___05F1__DOT__memory___05Fraddr[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__data_mem__DOT__memory_wrapper___05F1__DOT__memory___05Frdata[__Vi0] = VL_RAND_RESET_Q(35);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__data_mem__DOT__memory_wrapper___05F1__DOT__memory___05Fwaddr[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__data_mem__DOT__memory_wrapper___05F1__DOT__memory___05Fwdata[__Vi0] = VL_RAND_RESET_Q(35);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__data_mem__DOT__memory_wrapper___05F1__DOT__memory___05Fwen[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->data_mem__DOT__memory_wrapper___05F1__DOT__memory__DOT__regs[__Vi0] = VL_RAND_RESET_Q(35);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->__PVT__data_mem__DOT__response_crossbar__DOT__route_units___05Fsend___05Fmsg[__Vi0][__Vi1] = VL_RAND_RESET_Q(57);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->__PVT__data_mem__DOT__response_crossbar__DOT__route_units___05Fsend___05Frdy[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->__PVT__data_mem__DOT__response_crossbar__DOT__route_units___05Fsend___05Fval[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->data_mem__DOT__response_crossbar__DOT____Vcellout__route_units___05F0__send___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->data_mem__DOT__response_crossbar__DOT____Vcellinp__route_units___05F0__send___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->data_mem__DOT__response_crossbar__DOT____Vcellout__route_units___05F0__send___05Fmsg[__Vi0] = VL_RAND_RESET_Q(57);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->data_mem__DOT__response_crossbar__DOT____Vcellout__route_units___05F1__send___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->data_mem__DOT__response_crossbar__DOT____Vcellinp__route_units___05F1__send___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->data_mem__DOT__response_crossbar__DOT____Vcellout__route_units___05F1__send___05Fmsg[__Vi0] = VL_RAND_RESET_Q(57);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->data_mem__DOT__response_crossbar__DOT____Vcellout__route_units___05F2__send___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->data_mem__DOT__response_crossbar__DOT____Vcellinp__route_units___05F2__send___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->data_mem__DOT__response_crossbar__DOT____Vcellout__route_units___05F2__send___05Fmsg[__Vi0] = VL_RAND_RESET_Q(57);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__PVT__data_mem__DOT__response_crossbar__DOT__switch_units___05Frecv___05Fmsg[__Vi0][__Vi1] = VL_RAND_RESET_Q(57);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__PVT__data_mem__DOT__response_crossbar__DOT__switch_units___05Frecv___05Frdy[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__PVT__data_mem__DOT__response_crossbar__DOT__switch_units___05Frecv___05Fval[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->data_mem__DOT__response_crossbar__DOT____Vcellinp__switch_units___05F0__recv___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->data_mem__DOT__response_crossbar__DOT____Vcellout__switch_units___05F0__recv___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->data_mem__DOT__response_crossbar__DOT____Vcellinp__switch_units___05F0__recv___05Fmsg[__Vi0] = VL_RAND_RESET_Q(57);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->data_mem__DOT__response_crossbar__DOT____Vcellinp__switch_units___05F1__recv___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->data_mem__DOT__response_crossbar__DOT____Vcellout__switch_units___05F1__recv___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->data_mem__DOT__response_crossbar__DOT____Vcellinp__switch_units___05F1__recv___05Fmsg[__Vi0] = VL_RAND_RESET_Q(57);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->data_mem__DOT__response_crossbar__DOT____Vcellinp__switch_units___05F2__recv___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->data_mem__DOT__response_crossbar__DOT____Vcellout__switch_units___05F2__recv___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->data_mem__DOT__response_crossbar__DOT____Vcellinp__switch_units___05F2__recv___05Fmsg[__Vi0] = VL_RAND_RESET_Q(57);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->data_mem__DOT__response_crossbar__DOT____Vcellinp__switch_units___05F3__recv___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->data_mem__DOT__response_crossbar__DOT____Vcellout__switch_units___05F3__recv___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->data_mem__DOT__response_crossbar__DOT____Vcellinp__switch_units___05F3__recv___05Fmsg[__Vi0] = VL_RAND_RESET_Q(57);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->data_mem__DOT__response_crossbar__DOT____Vcellinp__switch_units___05F4__recv___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->data_mem__DOT__response_crossbar__DOT____Vcellout__switch_units___05F4__recv___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->data_mem__DOT__response_crossbar__DOT____Vcellinp__switch_units___05F4__recv___05Fmsg[__Vi0] = VL_RAND_RESET_Q(57);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->data_mem__DOT__response_crossbar__DOT____Vcellinp__switch_units___05F5__recv___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->data_mem__DOT__response_crossbar__DOT____Vcellout__switch_units___05F5__recv___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->data_mem__DOT__response_crossbar__DOT____Vcellinp__switch_units___05F5__recv___05Fmsg[__Vi0] = VL_RAND_RESET_Q(57);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->data_mem__DOT__response_crossbar__DOT____Vcellinp__switch_units___05F6__recv___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->data_mem__DOT__response_crossbar__DOT____Vcellout__switch_units___05F6__recv___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->data_mem__DOT__response_crossbar__DOT____Vcellinp__switch_units___05F6__recv___05Fmsg[__Vi0] = VL_RAND_RESET_Q(57);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->data_mem__DOT__response_crossbar__DOT____Vcellinp__switch_units___05F7__recv___05Fval[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->data_mem__DOT__response_crossbar__DOT____Vcellout__switch_units___05F7__recv___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->data_mem__DOT__response_crossbar__DOT____Vcellinp__switch_units___05F7__recv___05Fmsg[__Vi0] = VL_RAND_RESET_Q(57);
    }
    vlSelf->__PVT__data_mem__DOT__response_crossbar__DOT__input_units___05F0__DOT__queue__DOT__ctrl___05Fcount = VL_RAND_RESET_I(2);
    vlSelf->__PVT__data_mem__DOT__response_crossbar__DOT__input_units___05F0__DOT__queue__DOT__ctrl___05Fsend_val = VL_RAND_RESET_I(1);
    vlSelf->__PVT__data_mem__DOT__response_crossbar__DOT__input_units___05F0__DOT__queue__DOT__ctrl___05Fwen = VL_RAND_RESET_I(1);
    vlSelf->__PVT__data_mem__DOT__response_crossbar__DOT__input_units___05F0__DOT__queue__DOT__ctrl__DOT__head = VL_RAND_RESET_I(1);
    vlSelf->__PVT__data_mem__DOT__response_crossbar__DOT__input_units___05F0__DOT__queue__DOT__ctrl__DOT__tail = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__data_mem__DOT__response_crossbar__DOT__input_units___05F0__DOT__queue__DOT__dpath__DOT__mux___05Fin_[__Vi0] = VL_RAND_RESET_Q(57);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__data_mem__DOT__response_crossbar__DOT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__data_mem__DOT__response_crossbar__DOT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Frdata[__Vi0] = VL_RAND_RESET_Q(57);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__data_mem__DOT__response_crossbar__DOT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__data_mem__DOT__response_crossbar__DOT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fwdata[__Vi0] = VL_RAND_RESET_Q(57);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__data_mem__DOT__response_crossbar__DOT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fwen[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__data_mem__DOT__response_crossbar__DOT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs[__Vi0] = VL_RAND_RESET_Q(57);
    }
    vlSelf->__PVT__data_mem__DOT__response_crossbar__DOT__input_units___05F1__DOT__queue__DOT__ctrl___05Fcount = VL_RAND_RESET_I(2);
    vlSelf->__PVT__data_mem__DOT__response_crossbar__DOT__input_units___05F1__DOT__queue__DOT__ctrl___05Fsend_val = VL_RAND_RESET_I(1);
    vlSelf->__PVT__data_mem__DOT__response_crossbar__DOT__input_units___05F1__DOT__queue__DOT__ctrl___05Fwen = VL_RAND_RESET_I(1);
    vlSelf->__PVT__data_mem__DOT__response_crossbar__DOT__input_units___05F1__DOT__queue__DOT__ctrl__DOT__head = VL_RAND_RESET_I(1);
    vlSelf->__PVT__data_mem__DOT__response_crossbar__DOT__input_units___05F1__DOT__queue__DOT__ctrl__DOT__tail = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__data_mem__DOT__response_crossbar__DOT__input_units___05F1__DOT__queue__DOT__dpath__DOT__mux___05Fin_[__Vi0] = VL_RAND_RESET_Q(57);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__data_mem__DOT__response_crossbar__DOT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__data_mem__DOT__response_crossbar__DOT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Frdata[__Vi0] = VL_RAND_RESET_Q(57);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__data_mem__DOT__response_crossbar__DOT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__data_mem__DOT__response_crossbar__DOT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fwdata[__Vi0] = VL_RAND_RESET_Q(57);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__data_mem__DOT__response_crossbar__DOT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fwen[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__data_mem__DOT__response_crossbar__DOT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs[__Vi0] = VL_RAND_RESET_Q(57);
    }
    vlSelf->__PVT__data_mem__DOT__response_crossbar__DOT__input_units___05F2__DOT__queue__DOT__ctrl___05Fcount = VL_RAND_RESET_I(2);
    vlSelf->__PVT__data_mem__DOT__response_crossbar__DOT__input_units___05F2__DOT__queue__DOT__ctrl___05Fsend_val = VL_RAND_RESET_I(1);
    vlSelf->__PVT__data_mem__DOT__response_crossbar__DOT__input_units___05F2__DOT__queue__DOT__ctrl___05Fwen = VL_RAND_RESET_I(1);
    vlSelf->__PVT__data_mem__DOT__response_crossbar__DOT__input_units___05F2__DOT__queue__DOT__ctrl__DOT__head = VL_RAND_RESET_I(1);
    vlSelf->__PVT__data_mem__DOT__response_crossbar__DOT__input_units___05F2__DOT__queue__DOT__ctrl__DOT__tail = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__data_mem__DOT__response_crossbar__DOT__input_units___05F2__DOT__queue__DOT__dpath__DOT__mux___05Fin_[__Vi0] = VL_RAND_RESET_Q(57);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__data_mem__DOT__response_crossbar__DOT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__data_mem__DOT__response_crossbar__DOT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Frdata[__Vi0] = VL_RAND_RESET_Q(57);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__data_mem__DOT__response_crossbar__DOT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__data_mem__DOT__response_crossbar__DOT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fwdata[__Vi0] = VL_RAND_RESET_Q(57);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__data_mem__DOT__response_crossbar__DOT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fwen[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__data_mem__DOT__response_crossbar__DOT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs[__Vi0] = VL_RAND_RESET_Q(57);
    }
    vlSelf->__PVT__data_mem__DOT__response_crossbar__DOT__route_units___05F0__DOT__out_dir = VL_RAND_RESET_I(3);
    vlSelf->__PVT__data_mem__DOT__response_crossbar__DOT__route_units___05F1__DOT__out_dir = VL_RAND_RESET_I(3);
    vlSelf->__PVT__data_mem__DOT__response_crossbar__DOT__route_units___05F2__DOT__out_dir = VL_RAND_RESET_I(3);
}
