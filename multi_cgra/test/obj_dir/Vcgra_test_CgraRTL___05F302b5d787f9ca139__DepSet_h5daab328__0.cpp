// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcgra_test.h for the primary calling header

#include "Vcgra_test__pch.h"
#include "Vcgra_test_CgraRTL___05F302b5d787f9ca139.h"
#include "Vcgra_test_ChannelRTL___05Ff70d05b62b8bbe7b.h"
#include "Vcgra_test_TileRTL___05Fa6dbbcbe0fd05194.h"
#include "Vcgra_test_XbarBypassQueueRTL___05F1d3f6e8e4814a1bb.h"

VL_INLINE_OPT void Vcgra_test_CgraRTL___05F302b5d787f9ca139___nba_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__22(Vcgra_test_CgraRTL___05F302b5d787f9ca139* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcgra_test_CgraRTL___05F302b5d787f9ca139___nba_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__22\n"); );
    // Body
    vlSelf->__PVT__data_mem___05Frecv_raddr___05Fval[0U] 
        = vlSelf->__PVT__tile___05F0->element__DOT____Vcellout__fu___05F7__to_mem_raddr___05Fval;
    vlSelf->__PVT__data_mem___05Frecv_waddr___05Fval[0U] 
        = vlSelf->__PVT__tile___05F0->element__DOT____Vcellout__fu___05F7__to_mem_waddr___05Fval;
    vlSelf->__PVT__data_mem___05Frecv_raddr___05Fval[1U] 
        = vlSelf->__PVT__tile___05F1->element__DOT____Vcellout__fu___05F7__to_mem_raddr___05Fval;
    vlSelf->__PVT__data_mem___05Frecv_waddr___05Fval[1U] 
        = vlSelf->__PVT__tile___05F1->element__DOT____Vcellout__fu___05F7__to_mem_waddr___05Fval;
    vlSelf->__PVT__data_mem___05Frecv_raddr___05Fval[2U] 
        = vlSelf->__PVT__tile___05F2->element__DOT____Vcellout__fu___05F7__to_mem_raddr___05Fval;
    vlSelf->__PVT__data_mem___05Frecv_waddr___05Fval[2U] 
        = vlSelf->__PVT__tile___05F2->element__DOT____Vcellout__fu___05F7__to_mem_waddr___05Fval;
    vlSelf->__PVT__data_mem___05Frecv_raddr___05Fval[3U] 
        = vlSelf->__PVT__tile___05F3->element__DOT____Vcellout__fu___05F7__to_mem_raddr___05Fval;
    vlSelf->__PVT__data_mem___05Frecv_waddr___05Fval[3U] 
        = vlSelf->__PVT__tile___05F3->element__DOT____Vcellout__fu___05F7__to_mem_waddr___05Fval;
    vlSelf->__PVT__data_mem___05Frecv_raddr___05Fval[4U] 
        = vlSelf->__PVT__tile___05F4->element__DOT____Vcellout__fu___05F7__to_mem_raddr___05Fval;
    vlSelf->__PVT__data_mem___05Frecv_waddr___05Fval[4U] 
        = vlSelf->__PVT__tile___05F4->element__DOT____Vcellout__fu___05F7__to_mem_waddr___05Fval;
    vlSelf->__PVT__data_mem___05Frecv_raddr___05Fval[5U] 
        = vlSelf->__PVT__tile___05F8->element__DOT____Vcellout__fu___05F7__to_mem_raddr___05Fval;
    vlSelf->__PVT__data_mem___05Frecv_waddr___05Fval[5U] 
        = vlSelf->__PVT__tile___05F8->element__DOT____Vcellout__fu___05F7__to_mem_waddr___05Fval;
    vlSelf->__PVT__data_mem___05Frecv_raddr___05Fval[6U] 
        = vlSelf->__PVT__tile___05F12->element__DOT____Vcellout__fu___05F7__to_mem_raddr___05Fval;
    vlSelf->__PVT__data_mem___05Frecv_waddr___05Fval[6U] 
        = vlSelf->__PVT__tile___05F12->element__DOT____Vcellout__fu___05F7__to_mem_waddr___05Fval;
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fval[0U] = 0U;
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fval[1U] = 0U;
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fval[2U] = 0U;
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fval[3U] = 0U;
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fval[4U] = 0U;
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fval[5U] = 0U;
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fval[6U] = 0U;
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fval[7U] = 0U;
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fval[0U] 
        = vlSelf->__PVT__data_mem___05Frecv_raddr___05Fval
        [0U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fval[1U] 
        = vlSelf->__PVT__data_mem___05Frecv_raddr___05Fval
        [1U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fval[2U] 
        = vlSelf->__PVT__data_mem___05Frecv_raddr___05Fval
        [2U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fval[3U] 
        = vlSelf->__PVT__data_mem___05Frecv_raddr___05Fval
        [3U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fval[4U] 
        = vlSelf->__PVT__data_mem___05Frecv_raddr___05Fval
        [4U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fval[5U] 
        = vlSelf->__PVT__data_mem___05Frecv_raddr___05Fval
        [5U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fval[6U] 
        = vlSelf->__PVT__data_mem___05Frecv_raddr___05Fval
        [6U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fval[7U] 
        = (0U < (IData)(vlSelf->__PVT__controller__DOT__send_to_mem_load_request_queue->__PVT__queues___05F0__DOT__ctrl___05Fcount));
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fval[0U] = 0U;
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fval[1U] = 0U;
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fval[2U] = 0U;
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fval[3U] = 0U;
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fval[4U] = 0U;
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fval[5U] = 0U;
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fval[6U] = 0U;
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fval[7U] = 0U;
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fval[0U] 
        = vlSelf->__PVT__data_mem___05Frecv_waddr___05Fval
        [0U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fval[1U] 
        = vlSelf->__PVT__data_mem___05Frecv_waddr___05Fval
        [1U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fval[2U] 
        = vlSelf->__PVT__data_mem___05Frecv_waddr___05Fval
        [2U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fval[3U] 
        = vlSelf->__PVT__data_mem___05Frecv_waddr___05Fval
        [3U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fval[4U] 
        = vlSelf->__PVT__data_mem___05Frecv_waddr___05Fval
        [4U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fval[5U] 
        = vlSelf->__PVT__data_mem___05Frecv_waddr___05Fval
        [5U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fval[6U] 
        = vlSelf->__PVT__data_mem___05Frecv_waddr___05Fval
        [6U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fval[7U] 
        = (0U < (IData)(vlSelf->__PVT__controller__DOT__send_to_mem_store_request_queue->__PVT__queues___05F0__DOT__ctrl___05Fcount));
    vlSelf->__PVT__data_mem__DOT__read_crossbar->__PVT__recv___05Fval[0U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fval
        [0U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar->__PVT__recv___05Fval[1U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fval
        [1U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar->__PVT__recv___05Fval[2U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fval
        [2U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar->__PVT__recv___05Fval[3U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fval
        [3U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar->__PVT__recv___05Fval[4U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fval
        [4U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar->__PVT__recv___05Fval[5U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fval
        [5U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar->__PVT__recv___05Fval[6U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fval
        [6U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar->__PVT__recv___05Fval[7U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar___05Frecv___05Fval
        [7U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__recv___05Fval[0U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fval
        [0U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__recv___05Fval[1U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fval
        [1U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__recv___05Fval[2U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fval
        [2U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__recv___05Fval[3U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fval
        [3U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__recv___05Fval[4U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fval
        [4U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__recv___05Fval[5U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fval
        [5U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__recv___05Fval[6U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fval
        [6U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__recv___05Fval[7U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar___05Frecv___05Fval
        [7U];
}
