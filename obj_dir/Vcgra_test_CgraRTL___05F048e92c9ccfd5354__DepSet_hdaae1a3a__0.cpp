// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcgra_test.h for the primary calling header

#include "Vcgra_test__pch.h"
#include "Vcgra_test_CgraRTL___05F048e92c9ccfd5354.h"

VL_INLINE_OPT void Vcgra_test_CgraRTL___05F048e92c9ccfd5354___eval_initial__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0(Vcgra_test_CgraRTL___05F048e92c9ccfd5354* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcgra_test_CgraRTL___05F048e92c9ccfd5354___eval_initial__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0\n"); );
    // Body
    vlSelf->__PVT__ctrl_ring__DOT__routers___05Fpos[0U] = 0U;
    vlSelf->__PVT__ctrl_ring__DOT__routers___05Fpos[1U] = 1U;
    vlSelf->__PVT__ctrl_ring__DOT__routers___05Fpos[2U] = 2U;
    vlSelf->__PVT__ctrl_ring__DOT__routers___05Fpos[3U] = 3U;
    vlSelf->__PVT__ctrl_ring__DOT__routers___05Fpos[4U] = 4U;
    vlSelf->__PVT__ctrl_ring__DOT__routers___05Fpos[5U] = 5U;
    vlSelf->__PVT__ctrl_ring__DOT__routers___05Fpos[6U] = 6U;
    vlSelf->__PVT__ctrl_ring__DOT__routers___05Fpos[7U] = 7U;
    vlSelf->__PVT__ctrl_ring__DOT__routers___05Fpos[8U] = 8U;
    vlSelf->__PVT__ctrl_ring__DOT__routers___05Fpos[9U] = 9U;
    vlSelf->__PVT__ctrl_ring__DOT__routers___05Fpos[0xaU] = 0xaU;
    vlSelf->__PVT__ctrl_ring__DOT__routers___05Fpos[0xbU] = 0xbU;
    vlSelf->__PVT__ctrl_ring__DOT__routers___05Fpos[0xcU] = 0xcU;
    vlSelf->__PVT__ctrl_ring__DOT__routers___05Fpos[0xdU] = 0xdU;
    vlSelf->__PVT__ctrl_ring__DOT__routers___05Fpos[0xeU] = 0xeU;
    vlSelf->__PVT__ctrl_ring__DOT__routers___05Fpos[0xfU] = 0xfU;
    vlSelf->__PVT__ctrl_ring__DOT__routers___05Fpos[0x10U] = 0x10U;
    vlSelf->__PVT__controller__DOT__idTo2d_x_lut[0U] = 0U;
    vlSelf->__PVT__controller__DOT__idTo2d_x_lut[1U] = 1U;
    vlSelf->__PVT__controller__DOT__idTo2d_x_lut[2U] = 0U;
    vlSelf->__PVT__controller__DOT__idTo2d_x_lut[3U] = 1U;
    vlSelf->__PVT__controller__DOT__idTo2d_y_lut[0U] = 0U;
    vlSelf->__PVT__controller__DOT__idTo2d_y_lut[1U] = 0U;
    vlSelf->__PVT__controller__DOT__idTo2d_y_lut[2U] = 1U;
    vlSelf->__PVT__controller__DOT__idTo2d_y_lut[3U] = 1U;
    vlSelf->__PVT__controller__DOT__addr2controller_lut[0U] = 0U;
    vlSelf->__PVT__controller__DOT__addr2controller_lut[1U] = 1U;
    vlSelf->__PVT__controller__DOT__addr2controller_lut[2U] = 2U;
    vlSelf->__PVT__controller__DOT__addr2controller_lut[3U] = 3U;
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Frdy[0U] = 1U;
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Frdy[1U] = 1U;
    vlSelf->__PVT__data_mem__DOT__idTo2d_x_lut[0U] = 0U;
    vlSelf->__PVT__data_mem__DOT__idTo2d_x_lut[1U] = 1U;
    vlSelf->__PVT__data_mem__DOT__idTo2d_x_lut[2U] = 0U;
    vlSelf->__PVT__data_mem__DOT__idTo2d_x_lut[3U] = 1U;
    vlSelf->__PVT__data_mem__DOT__idTo2d_y_lut[0U] = 0U;
    vlSelf->__PVT__data_mem__DOT__idTo2d_y_lut[1U] = 0U;
    vlSelf->__PVT__data_mem__DOT__idTo2d_y_lut[2U] = 1U;
    vlSelf->__PVT__data_mem__DOT__idTo2d_y_lut[3U] = 1U;
}

VL_INLINE_OPT void Vcgra_test_CgraRTL___05F048e92c9ccfd5354___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__40(Vcgra_test_CgraRTL___05F048e92c9ccfd5354* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcgra_test_CgraRTL___05F048e92c9ccfd5354___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__40\n"); );
    // Body
    vlSelf->__PVT__tile___05Frecv_data___05Fmsg[4U][1U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fmsg
        [0U][0U];
    vlSelf->__PVT__tile___05Frecv_data___05Fmsg[1U][2U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fmsg
        [0U][3U];
    vlSelf->__PVT__tile___05Frecv_data___05Fmsg[5U][1U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fmsg
        [1U][0U];
    vlSelf->__PVT__tile___05Frecv_data___05Fmsg[0U][3U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fmsg
        [1U][2U];
    vlSelf->__PVT__tile___05Frecv_data___05Fmsg[2U][2U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fmsg
        [1U][3U];
    vlSelf->__PVT__tile___05Frecv_data___05Fmsg[6U][1U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fmsg
        [2U][0U];
    vlSelf->__PVT__tile___05Frecv_data___05Fmsg[1U][3U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fmsg
        [2U][2U];
    vlSelf->__PVT__tile___05Frecv_data___05Fmsg[3U][2U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fmsg
        [2U][3U];
    vlSelf->__PVT__tile___05Frecv_data___05Fmsg[7U][1U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fmsg
        [3U][0U];
    vlSelf->__PVT__tile___05Frecv_data___05Fmsg[2U][3U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fmsg
        [3U][2U];
    vlSelf->__PVT__tile___05Frecv_data___05Fmsg[0U][0U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fmsg
        [4U][1U];
    vlSelf->__PVT__tile___05Frecv_data___05Fmsg[8U][1U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fmsg
        [4U][0U];
    vlSelf->__PVT__tile___05Frecv_data___05Fmsg[5U][2U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fmsg
        [4U][3U];
    vlSelf->__PVT__tile___05Frecv_data___05Fmsg[1U][0U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fmsg
        [5U][1U];
    vlSelf->__PVT__tile___05Frecv_data___05Fmsg[9U][1U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fmsg
        [5U][0U];
    vlSelf->__PVT__tile___05Frecv_data___05Fmsg[4U][3U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fmsg
        [5U][2U];
    vlSelf->__PVT__tile___05Frecv_data___05Fmsg[6U][2U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fmsg
        [5U][3U];
    vlSelf->__PVT__tile___05Frecv_data___05Fmsg[2U][0U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fmsg
        [6U][1U];
    vlSelf->__PVT__tile___05Frecv_data___05Fmsg[0xaU][1U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fmsg
        [6U][0U];
    vlSelf->__PVT__tile___05Frecv_data___05Fmsg[5U][3U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fmsg
        [6U][2U];
    vlSelf->__PVT__tile___05Frecv_data___05Fmsg[7U][2U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fmsg
        [6U][3U];
    vlSelf->__PVT__tile___05Frecv_data___05Fmsg[3U][0U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fmsg
        [7U][1U];
    vlSelf->__PVT__tile___05Frecv_data___05Fmsg[0xbU][1U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fmsg
        [7U][0U];
    vlSelf->__PVT__tile___05Frecv_data___05Fmsg[6U][3U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fmsg
        [7U][2U];
    vlSelf->__PVT__tile___05Frecv_data___05Fmsg[4U][0U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fmsg
        [8U][1U];
    vlSelf->__PVT__tile___05Frecv_data___05Fmsg[0xcU][1U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fmsg
        [8U][0U];
    vlSelf->__PVT__tile___05Frecv_data___05Fmsg[9U][2U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fmsg
        [8U][3U];
    vlSelf->__PVT__tile___05Frecv_data___05Fmsg[5U][0U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fmsg
        [9U][1U];
    vlSelf->__PVT__tile___05Frecv_data___05Fmsg[0xdU][1U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fmsg
        [9U][0U];
    vlSelf->__PVT__tile___05Frecv_data___05Fmsg[8U][3U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fmsg
        [9U][2U];
    vlSelf->__PVT__tile___05Frecv_data___05Fmsg[0xaU][2U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fmsg
        [9U][3U];
    vlSelf->__PVT__tile___05Frecv_data___05Fmsg[6U][0U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fmsg
        [0xaU][1U];
    vlSelf->__PVT__tile___05Frecv_data___05Fmsg[0xeU][1U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fmsg
        [0xaU][0U];
    vlSelf->__PVT__tile___05Frecv_data___05Fmsg[9U][3U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fmsg
        [0xaU][2U];
    vlSelf->__PVT__tile___05Frecv_data___05Fmsg[0xbU][2U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fmsg
        [0xaU][3U];
    vlSelf->__PVT__tile___05Frecv_data___05Fmsg[7U][0U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fmsg
        [0xbU][1U];
    vlSelf->__PVT__tile___05Frecv_data___05Fmsg[0xfU][1U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fmsg
        [0xbU][0U];
    vlSelf->__PVT__tile___05Frecv_data___05Fmsg[0xaU][3U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fmsg
        [0xbU][2U];
    vlSelf->__PVT__tile___05Frecv_data___05Fmsg[8U][0U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fmsg
        [0xcU][1U];
    vlSelf->__PVT__tile___05Frecv_data___05Fmsg[0xdU][2U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fmsg
        [0xcU][3U];
    vlSelf->__PVT__tile___05Frecv_data___05Fmsg[9U][0U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fmsg
        [0xdU][1U];
    vlSelf->__PVT__tile___05Frecv_data___05Fmsg[0xcU][3U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fmsg
        [0xdU][2U];
    vlSelf->__PVT__tile___05Frecv_data___05Fmsg[0xeU][2U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fmsg
        [0xdU][3U];
    vlSelf->__PVT__tile___05Frecv_data___05Fmsg[0xaU][0U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fmsg
        [0xeU][1U];
    vlSelf->__PVT__tile___05Frecv_data___05Fmsg[0xdU][3U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fmsg
        [0xeU][2U];
    vlSelf->__PVT__tile___05Frecv_data___05Fmsg[0xfU][2U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fmsg
        [0xeU][3U];
    vlSelf->__PVT__tile___05Frecv_data___05Fmsg[0xbU][0U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fmsg
        [0xfU][1U];
    vlSelf->__PVT__tile___05Frecv_data___05Fmsg[0xeU][3U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fmsg
        [0xfU][2U];
    vlSelf->send_data_on_boundary_south___05Fmsg[0U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fmsg
        [0U][1U];
    vlSelf->send_data_on_boundary_west___05Fmsg[0U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fmsg
        [0U][2U];
    vlSelf->send_data_on_boundary_south___05Fmsg[1U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fmsg
        [1U][1U];
    vlSelf->send_data_on_boundary_south___05Fmsg[2U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fmsg
        [2U][1U];
    vlSelf->send_data_on_boundary_south___05Fmsg[3U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fmsg
        [3U][1U];
    vlSelf->send_data_on_boundary_east___05Fmsg[0U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fmsg
        [3U][3U];
    vlSelf->send_data_on_boundary_west___05Fmsg[1U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fmsg
        [4U][2U];
    vlSelf->send_data_on_boundary_east___05Fmsg[1U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fmsg
        [7U][3U];
    vlSelf->send_data_on_boundary_west___05Fmsg[2U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fmsg
        [8U][2U];
    vlSelf->send_data_on_boundary_east___05Fmsg[2U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fmsg
        [0xbU][3U];
    vlSelf->send_data_on_boundary_north___05Fmsg[0U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fmsg
        [0xcU][0U];
    vlSelf->send_data_on_boundary_west___05Fmsg[3U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fmsg
        [0xcU][2U];
    vlSelf->send_data_on_boundary_north___05Fmsg[1U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fmsg
        [0xdU][0U];
    vlSelf->send_data_on_boundary_north___05Fmsg[2U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fmsg
        [0xeU][0U];
    vlSelf->send_data_on_boundary_north___05Fmsg[3U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fmsg
        [0xfU][0U];
    vlSelf->send_data_on_boundary_east___05Fmsg[3U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fmsg
        [0xfU][3U];
    vlSelf->__PVT__tile___05Frecv_data___05Fval[4U][1U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fval
        [0U][0U];
    vlSelf->__PVT__tile___05Frecv_data___05Fval[1U][2U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fval
        [0U][3U];
    vlSelf->__PVT__tile___05Frecv_data___05Fval[5U][1U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fval
        [1U][0U];
    vlSelf->__PVT__tile___05Frecv_data___05Fval[0U][3U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fval
        [1U][2U];
    vlSelf->__PVT__tile___05Frecv_data___05Fval[2U][2U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fval
        [1U][3U];
    vlSelf->__PVT__tile___05Frecv_data___05Fval[6U][1U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fval
        [2U][0U];
    vlSelf->__PVT__tile___05Frecv_data___05Fval[1U][3U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fval
        [2U][2U];
    vlSelf->__PVT__tile___05Frecv_data___05Fval[3U][2U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fval
        [2U][3U];
    vlSelf->__PVT__tile___05Frecv_data___05Fval[7U][1U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fval
        [3U][0U];
    vlSelf->__PVT__tile___05Frecv_data___05Fval[2U][3U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fval
        [3U][2U];
    vlSelf->__PVT__tile___05Frecv_data___05Fval[0U][0U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fval
        [4U][1U];
    vlSelf->__PVT__tile___05Frecv_data___05Fval[8U][1U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fval
        [4U][0U];
    vlSelf->__PVT__tile___05Frecv_data___05Fval[5U][2U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fval
        [4U][3U];
    vlSelf->__PVT__tile___05Frecv_data___05Fval[1U][0U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fval
        [5U][1U];
    vlSelf->__PVT__tile___05Frecv_data___05Fval[9U][1U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fval
        [5U][0U];
    vlSelf->__PVT__tile___05Frecv_data___05Fval[4U][3U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fval
        [5U][2U];
    vlSelf->__PVT__tile___05Frecv_data___05Fval[6U][2U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fval
        [5U][3U];
    vlSelf->__PVT__tile___05Frecv_data___05Fval[2U][0U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fval
        [6U][1U];
    vlSelf->__PVT__tile___05Frecv_data___05Fval[0xaU][1U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fval
        [6U][0U];
    vlSelf->__PVT__tile___05Frecv_data___05Fval[5U][3U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fval
        [6U][2U];
    vlSelf->__PVT__tile___05Frecv_data___05Fval[7U][2U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fval
        [6U][3U];
    vlSelf->__PVT__tile___05Frecv_data___05Fval[3U][0U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fval
        [7U][1U];
    vlSelf->__PVT__tile___05Frecv_data___05Fval[0xbU][1U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fval
        [7U][0U];
    vlSelf->__PVT__tile___05Frecv_data___05Fval[6U][3U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fval
        [7U][2U];
    vlSelf->__PVT__tile___05Frecv_data___05Fval[4U][0U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fval
        [8U][1U];
    vlSelf->__PVT__tile___05Frecv_data___05Fval[0xcU][1U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fval
        [8U][0U];
    vlSelf->__PVT__tile___05Frecv_data___05Fval[9U][2U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fval
        [8U][3U];
    vlSelf->__PVT__tile___05Frecv_data___05Fval[5U][0U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fval
        [9U][1U];
    vlSelf->__PVT__tile___05Frecv_data___05Fval[0xdU][1U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fval
        [9U][0U];
    vlSelf->__PVT__tile___05Frecv_data___05Fval[8U][3U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fval
        [9U][2U];
    vlSelf->__PVT__tile___05Frecv_data___05Fval[0xaU][2U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fval
        [9U][3U];
    vlSelf->__PVT__tile___05Frecv_data___05Fval[6U][0U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fval
        [0xaU][1U];
    vlSelf->__PVT__tile___05Frecv_data___05Fval[0xeU][1U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fval
        [0xaU][0U];
    vlSelf->__PVT__tile___05Frecv_data___05Fval[9U][3U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fval
        [0xaU][2U];
    vlSelf->__PVT__tile___05Frecv_data___05Fval[0xbU][2U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fval
        [0xaU][3U];
    vlSelf->__PVT__tile___05Frecv_data___05Fval[7U][0U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fval
        [0xbU][1U];
    vlSelf->__PVT__tile___05Frecv_data___05Fval[0xfU][1U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fval
        [0xbU][0U];
    vlSelf->__PVT__tile___05Frecv_data___05Fval[0xaU][3U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fval
        [0xbU][2U];
    vlSelf->__PVT__tile___05Frecv_data___05Fval[8U][0U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fval
        [0xcU][1U];
    vlSelf->__PVT__tile___05Frecv_data___05Fval[0xdU][2U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fval
        [0xcU][3U];
    vlSelf->__PVT__tile___05Frecv_data___05Fval[9U][0U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fval
        [0xdU][1U];
    vlSelf->__PVT__tile___05Frecv_data___05Fval[0xcU][3U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fval
        [0xdU][2U];
    vlSelf->__PVT__tile___05Frecv_data___05Fval[0xeU][2U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fval
        [0xdU][3U];
    vlSelf->__PVT__tile___05Frecv_data___05Fval[0xaU][0U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fval
        [0xeU][1U];
    vlSelf->__PVT__tile___05Frecv_data___05Fval[0xdU][3U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fval
        [0xeU][2U];
    vlSelf->__PVT__tile___05Frecv_data___05Fval[0xfU][2U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fval
        [0xeU][3U];
    vlSelf->__PVT__tile___05Frecv_data___05Fval[0xbU][0U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fval
        [0xfU][1U];
    vlSelf->__PVT__tile___05Frecv_data___05Fval[0xeU][3U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fval
        [0xfU][2U];
    vlSelf->send_data_on_boundary_south___05Fval[0U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fval
        [0U][1U];
    vlSelf->send_data_on_boundary_west___05Fval[0U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fval
        [0U][2U];
    vlSelf->send_data_on_boundary_south___05Fval[1U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fval
        [1U][1U];
    vlSelf->send_data_on_boundary_south___05Fval[2U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fval
        [2U][1U];
    vlSelf->send_data_on_boundary_south___05Fval[3U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fval
        [3U][1U];
    vlSelf->send_data_on_boundary_east___05Fval[0U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fval
        [3U][3U];
    vlSelf->send_data_on_boundary_west___05Fval[1U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fval
        [4U][2U];
    vlSelf->send_data_on_boundary_east___05Fval[1U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fval
        [7U][3U];
    vlSelf->send_data_on_boundary_west___05Fval[2U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fval
        [8U][2U];
    vlSelf->send_data_on_boundary_east___05Fval[2U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fval
        [0xbU][3U];
    vlSelf->send_data_on_boundary_north___05Fval[0U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fval
        [0xcU][0U];
    vlSelf->send_data_on_boundary_west___05Fval[3U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fval
        [0xcU][2U];
    vlSelf->send_data_on_boundary_north___05Fval[1U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fval
        [0xdU][0U];
    vlSelf->send_data_on_boundary_north___05Fval[2U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fval
        [0xeU][0U];
    vlSelf->send_data_on_boundary_north___05Fval[3U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fval
        [0xfU][0U];
    vlSelf->send_data_on_boundary_east___05Fval[3U] 
        = vlSelf->__PVT__tile___05Fsend_data___05Fval
        [0xfU][3U];
}

VL_INLINE_OPT void Vcgra_test_CgraRTL___05F048e92c9ccfd5354___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__41(Vcgra_test_CgraRTL___05F048e92c9ccfd5354* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcgra_test_CgraRTL___05F048e92c9ccfd5354___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__41\n"); );
    // Body
    vlSelf->__PVT__tile___05Frecv_data___05Fmsg[0xcU][0U] 
        = vlSelf->recv_data_on_boundary_north___05Fmsg
        [0U];
    vlSelf->__PVT__tile___05Frecv_data___05Fmsg[0xdU][0U] 
        = vlSelf->recv_data_on_boundary_north___05Fmsg
        [1U];
    vlSelf->__PVT__tile___05Frecv_data___05Fmsg[0xeU][0U] 
        = vlSelf->recv_data_on_boundary_north___05Fmsg
        [2U];
    vlSelf->__PVT__tile___05Frecv_data___05Fmsg[0xfU][0U] 
        = vlSelf->recv_data_on_boundary_north___05Fmsg
        [3U];
    vlSelf->__PVT__tile___05Frecv_data___05Fmsg[3U][3U] 
        = vlSelf->recv_data_on_boundary_east___05Fmsg
        [0U];
    vlSelf->__PVT__tile___05Frecv_data___05Fmsg[7U][3U] 
        = vlSelf->recv_data_on_boundary_east___05Fmsg
        [1U];
    vlSelf->__PVT__tile___05Frecv_data___05Fmsg[0xbU][3U] 
        = vlSelf->recv_data_on_boundary_east___05Fmsg
        [2U];
    vlSelf->__PVT__tile___05Frecv_data___05Fmsg[0xfU][3U] 
        = vlSelf->recv_data_on_boundary_east___05Fmsg
        [3U];
    vlSelf->__PVT__tile___05Frecv_data___05Fmsg[0U][1U] 
        = vlSelf->recv_data_on_boundary_south___05Fmsg
        [0U];
    vlSelf->__PVT__tile___05Frecv_data___05Fmsg[1U][1U] 
        = vlSelf->recv_data_on_boundary_south___05Fmsg
        [1U];
    vlSelf->__PVT__tile___05Frecv_data___05Fmsg[2U][1U] 
        = vlSelf->recv_data_on_boundary_south___05Fmsg
        [2U];
    vlSelf->__PVT__tile___05Frecv_data___05Fmsg[3U][1U] 
        = vlSelf->recv_data_on_boundary_south___05Fmsg
        [3U];
    vlSelf->__PVT__tile___05Frecv_data___05Fmsg[0U][2U] 
        = vlSelf->recv_data_on_boundary_west___05Fmsg
        [0U];
    vlSelf->__PVT__tile___05Frecv_data___05Fmsg[4U][2U] 
        = vlSelf->recv_data_on_boundary_west___05Fmsg
        [1U];
    vlSelf->__PVT__tile___05Frecv_data___05Fmsg[8U][2U] 
        = vlSelf->recv_data_on_boundary_west___05Fmsg
        [2U];
    vlSelf->__PVT__tile___05Frecv_data___05Fmsg[0xcU][2U] 
        = vlSelf->recv_data_on_boundary_west___05Fmsg
        [3U];
    vlSelf->__PVT__tile___05Frecv_data___05Fval[0xcU][0U] 
        = vlSelf->recv_data_on_boundary_north___05Fval
        [0U];
    vlSelf->__PVT__tile___05Frecv_data___05Fval[0xdU][0U] 
        = vlSelf->recv_data_on_boundary_north___05Fval
        [1U];
    vlSelf->__PVT__tile___05Frecv_data___05Fval[0xeU][0U] 
        = vlSelf->recv_data_on_boundary_north___05Fval
        [2U];
    vlSelf->__PVT__tile___05Frecv_data___05Fval[0xfU][0U] 
        = vlSelf->recv_data_on_boundary_north___05Fval
        [3U];
    vlSelf->__PVT__tile___05Frecv_data___05Fval[3U][3U] 
        = vlSelf->recv_data_on_boundary_east___05Fval
        [0U];
    vlSelf->__PVT__tile___05Frecv_data___05Fval[7U][3U] 
        = vlSelf->recv_data_on_boundary_east___05Fval
        [1U];
    vlSelf->__PVT__tile___05Frecv_data___05Fval[0xbU][3U] 
        = vlSelf->recv_data_on_boundary_east___05Fval
        [2U];
    vlSelf->__PVT__tile___05Frecv_data___05Fval[0xfU][3U] 
        = vlSelf->recv_data_on_boundary_east___05Fval
        [3U];
    vlSelf->__PVT__tile___05Frecv_data___05Fval[0U][1U] 
        = vlSelf->recv_data_on_boundary_south___05Fval
        [0U];
    vlSelf->__PVT__tile___05Frecv_data___05Fval[1U][1U] 
        = vlSelf->recv_data_on_boundary_south___05Fval
        [1U];
    vlSelf->__PVT__tile___05Frecv_data___05Fval[2U][1U] 
        = vlSelf->recv_data_on_boundary_south___05Fval
        [2U];
    vlSelf->__PVT__tile___05Frecv_data___05Fval[3U][1U] 
        = vlSelf->recv_data_on_boundary_south___05Fval
        [3U];
    vlSelf->__PVT__tile___05Frecv_data___05Fval[0U][2U] 
        = vlSelf->recv_data_on_boundary_west___05Fval
        [0U];
    vlSelf->__PVT__tile___05Frecv_data___05Fval[4U][2U] 
        = vlSelf->recv_data_on_boundary_west___05Fval
        [1U];
    vlSelf->__PVT__tile___05Frecv_data___05Fval[8U][2U] 
        = vlSelf->recv_data_on_boundary_west___05Fval
        [2U];
    vlSelf->__PVT__tile___05Frecv_data___05Fval[0xcU][2U] 
        = vlSelf->recv_data_on_boundary_west___05Fval
        [3U];
}

VL_INLINE_OPT void Vcgra_test_CgraRTL___05F048e92c9ccfd5354___eval_initial__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1(Vcgra_test_CgraRTL___05F048e92c9ccfd5354* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcgra_test_CgraRTL___05F048e92c9ccfd5354___eval_initial__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1\n"); );
    // Body
    vlSelf->__PVT__ctrl_ring__DOT__routers___05Fpos[0U] = 0U;
    vlSelf->__PVT__ctrl_ring__DOT__routers___05Fpos[1U] = 1U;
    vlSelf->__PVT__ctrl_ring__DOT__routers___05Fpos[2U] = 2U;
    vlSelf->__PVT__ctrl_ring__DOT__routers___05Fpos[3U] = 3U;
    vlSelf->__PVT__ctrl_ring__DOT__routers___05Fpos[4U] = 4U;
    vlSelf->__PVT__ctrl_ring__DOT__routers___05Fpos[5U] = 5U;
    vlSelf->__PVT__ctrl_ring__DOT__routers___05Fpos[6U] = 6U;
    vlSelf->__PVT__ctrl_ring__DOT__routers___05Fpos[7U] = 7U;
    vlSelf->__PVT__ctrl_ring__DOT__routers___05Fpos[8U] = 8U;
    vlSelf->__PVT__ctrl_ring__DOT__routers___05Fpos[9U] = 9U;
    vlSelf->__PVT__ctrl_ring__DOT__routers___05Fpos[0xaU] = 0xaU;
    vlSelf->__PVT__ctrl_ring__DOT__routers___05Fpos[0xbU] = 0xbU;
    vlSelf->__PVT__ctrl_ring__DOT__routers___05Fpos[0xcU] = 0xcU;
    vlSelf->__PVT__ctrl_ring__DOT__routers___05Fpos[0xdU] = 0xdU;
    vlSelf->__PVT__ctrl_ring__DOT__routers___05Fpos[0xeU] = 0xeU;
    vlSelf->__PVT__ctrl_ring__DOT__routers___05Fpos[0xfU] = 0xfU;
    vlSelf->__PVT__ctrl_ring__DOT__routers___05Fpos[0x10U] = 0x10U;
    vlSelf->__PVT__controller__DOT__recv_from_cpu_pkt_queue__DOT__dpath__DOT__rf___05Fwdata[0U][0U] = 0U;
    vlSelf->__PVT__controller__DOT__recv_from_cpu_pkt_queue__DOT__dpath__DOT__rf___05Fwdata[0U][1U] = 0U;
    vlSelf->__PVT__controller__DOT__recv_from_cpu_pkt_queue__DOT__dpath__DOT__rf___05Fwdata[0U][2U] = 0U;
    vlSelf->__PVT__controller__DOT__recv_from_cpu_pkt_queue__DOT__dpath__DOT__rf___05Fwdata[0U][3U] = 0U;
    vlSelf->__PVT__controller__DOT__recv_from_cpu_pkt_queue__DOT__dpath__DOT__rf___05Fwdata[0U][4U] = 0U;
    vlSelf->__PVT__controller__DOT__recv_from_cpu_pkt_queue__DOT__dpath__DOT__rf___05Fwdata[0U][5U] = 0U;
    vlSelf->__PVT__controller__DOT__recv_from_cpu_pkt_queue__DOT__dpath__DOT__rf___05Fwdata[0U][6U] = 0U;
    vlSelf->__PVT__controller__DOT__recv_from_cpu_pkt_queue__DOT__dpath__DOT__rf___05Fwen[0U] = 0U;
    vlSelf->__PVT__controller__DOT__idTo2d_x_lut[0U] = 0U;
    vlSelf->__PVT__controller__DOT__idTo2d_x_lut[1U] = 1U;
    vlSelf->__PVT__controller__DOT__idTo2d_x_lut[2U] = 0U;
    vlSelf->__PVT__controller__DOT__idTo2d_x_lut[3U] = 1U;
    vlSelf->__PVT__controller__DOT__idTo2d_y_lut[0U] = 0U;
    vlSelf->__PVT__controller__DOT__idTo2d_y_lut[1U] = 0U;
    vlSelf->__PVT__controller__DOT__idTo2d_y_lut[2U] = 1U;
    vlSelf->__PVT__controller__DOT__idTo2d_y_lut[3U] = 1U;
    vlSelf->__PVT__controller__DOT__addr2controller_lut[0U] = 0U;
    vlSelf->__PVT__controller__DOT__addr2controller_lut[1U] = 1U;
    vlSelf->__PVT__controller__DOT__addr2controller_lut[2U] = 2U;
    vlSelf->__PVT__controller__DOT__addr2controller_lut[3U] = 3U;
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Frdy[0U] = 1U;
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Frdy[1U] = 1U;
    vlSelf->__PVT__data_mem__DOT__idTo2d_x_lut[0U] = 0U;
    vlSelf->__PVT__data_mem__DOT__idTo2d_x_lut[1U] = 1U;
    vlSelf->__PVT__data_mem__DOT__idTo2d_x_lut[2U] = 0U;
    vlSelf->__PVT__data_mem__DOT__idTo2d_x_lut[3U] = 1U;
    vlSelf->__PVT__data_mem__DOT__idTo2d_y_lut[0U] = 0U;
    vlSelf->__PVT__data_mem__DOT__idTo2d_y_lut[1U] = 0U;
    vlSelf->__PVT__data_mem__DOT__idTo2d_y_lut[2U] = 1U;
    vlSelf->__PVT__data_mem__DOT__idTo2d_y_lut[3U] = 1U;
}
