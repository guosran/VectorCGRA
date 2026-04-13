// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcgra_test.h for the primary calling header

#include "Vcgra_test__pch.h"
#include "Vcgra_test_CgraRTL___05F048e92c9ccfd5354.h"
#include "Vcgra_test_ChannelRTL___05Fd5433e044837250f.h"

VL_INLINE_OPT void Vcgra_test_CgraRTL___05F048e92c9ccfd5354___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__2(Vcgra_test_CgraRTL___05F048e92c9ccfd5354* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcgra_test_CgraRTL___05F048e92c9ccfd5354___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__2\n"); );
    // Body
    vlSelf->__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy[0U] 
        = vlSelf->__PVT__data_mem___05Fsend_rdata___05Frdy
        [0U];
    vlSelf->__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy[1U] 
        = vlSelf->__PVT__data_mem___05Fsend_rdata___05Frdy
        [1U];
    vlSelf->__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy[2U] 
        = vlSelf->__PVT__data_mem___05Fsend_rdata___05Frdy
        [2U];
    vlSelf->__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy[3U] 
        = vlSelf->__PVT__data_mem___05Fsend_rdata___05Frdy
        [3U];
    vlSelf->__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy[4U] 
        = vlSelf->__PVT__data_mem___05Fsend_rdata___05Frdy
        [4U];
    vlSelf->__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy[5U] 
        = vlSelf->__PVT__data_mem___05Fsend_rdata___05Frdy
        [5U];
    vlSelf->__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy[6U] 
        = vlSelf->__PVT__data_mem___05Fsend_rdata___05Frdy
        [6U];
    vlSelf->__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy[7U] 
        = (2U > (IData)(vlSelf->__PVT__controller__DOT__recv_from_tile_load_response_pkt_queue->__PVT__queues___05F0__DOT__ctrl___05Fcount));
}
