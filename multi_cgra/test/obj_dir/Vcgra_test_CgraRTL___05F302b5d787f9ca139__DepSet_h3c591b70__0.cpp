// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcgra_test.h for the primary calling header

#include "Vcgra_test__pch.h"
#include "Vcgra_test_CgraRTL___05F302b5d787f9ca139.h"
#include "Vcgra_test_XbarBypassQueueRTL___05F1d3f6e8e4814a1bb.h"

VL_INLINE_OPT void Vcgra_test_CgraRTL___05F302b5d787f9ca139___act_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__8(Vcgra_test_CgraRTL___05F302b5d787f9ca139* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcgra_test_CgraRTL___05F302b5d787f9ca139___act_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__8\n"); );
    // Body
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Fsend___05Fval[0U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar->__PVT__send___05Fval
        [0U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Fsend___05Fval[1U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar->__PVT__send___05Fval
        [1U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Fsend___05Fval[2U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar->__PVT__send___05Fval
        [2U];
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

VL_INLINE_OPT void Vcgra_test_CgraRTL___05F302b5d787f9ca139___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__20(Vcgra_test_CgraRTL___05F302b5d787f9ca139* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcgra_test_CgraRTL___05F302b5d787f9ca139___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__20\n"); );
    // Body
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Fsend___05Fmsg[0U][0U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar->__PVT__send___05Fmsg
        [0U][0U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Fsend___05Fmsg[0U][1U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar->__PVT__send___05Fmsg
        [0U][1U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Fsend___05Fmsg[0U][2U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar->__PVT__send___05Fmsg
        [0U][2U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Fsend___05Fmsg[1U][0U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar->__PVT__send___05Fmsg
        [1U][0U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Fsend___05Fmsg[1U][1U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar->__PVT__send___05Fmsg
        [1U][1U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Fsend___05Fmsg[1U][2U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar->__PVT__send___05Fmsg
        [1U][2U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Fsend___05Fmsg[2U][0U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar->__PVT__send___05Fmsg
        [2U][0U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Fsend___05Fmsg[2U][1U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar->__PVT__send___05Fmsg
        [2U][1U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Fsend___05Fmsg[2U][2U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar->__PVT__send___05Fmsg
        [2U][2U];
    vlSelf->__PVT__data_mem___05Fsend_to_noc_load_request_pkt___05Fmsg[0U] = 0U;
    vlSelf->__PVT__data_mem___05Fsend_to_noc_load_request_pkt___05Fmsg[1U] = 0U;
    vlSelf->__PVT__data_mem___05Fsend_to_noc_load_request_pkt___05Fmsg[2U] = 0U;
    vlSelf->__PVT__data_mem___05Fsend_to_noc_load_request_pkt___05Fmsg[3U] 
        = (0xf8000000U & (vlSelf->__PVT__data_mem__DOT__read_crossbar___05Fsend___05Fmsg
                          [2U][2U] << 0xeU));
    vlSelf->__PVT__data_mem___05Fsend_to_noc_load_request_pkt___05Fmsg[4U] 
        = (3U & (vlSelf->__PVT__data_mem__DOT__read_crossbar___05Fsend___05Fmsg
                 [2U][2U] >> 0x12U));
    vlSelf->__PVT__data_mem___05Fsend_to_noc_load_request_pkt___05Fmsg[5U] = 0U;
    vlSelf->__PVT__data_mem___05Fsend_to_noc_load_request_pkt___05Fmsg[6U] 
        = (0x140U | (0x700000U & (vlSelf->__PVT__data_mem__DOT__read_crossbar___05Fsend___05Fmsg
                                  [2U][2U] >> 2U)));
    vlSelf->__PVT__data_mem___05Fsend_to_noc_load_request_pkt___05Fmsg[7U] 
        = (0x3ffU & ((0x3f0U & (vlSelf->__PVT__data_mem__DOT__idTo2d_x_lut
                                [0U] << 4U)) | (0x3f8U 
                                                & (vlSelf->__PVT__data_mem__DOT__idTo2d_y_lut
                                                   [0U] 
                                                   << 3U))));
}

VL_INLINE_OPT void Vcgra_test_CgraRTL___05F302b5d787f9ca139___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__39(Vcgra_test_CgraRTL___05F302b5d787f9ca139* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcgra_test_CgraRTL___05F302b5d787f9ca139___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__39\n"); );
    // Body
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fval[0U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__send___05Fval
        [0U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fval[1U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__send___05Fval
        [1U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fval[2U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__send___05Fval
        [2U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg[0U][0U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__send___05Fmsg
        [0U][0U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg[0U][1U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__send___05Fmsg
        [0U][1U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg[0U][2U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__send___05Fmsg
        [0U][2U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg[1U][0U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__send___05Fmsg
        [1U][0U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg[1U][1U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__send___05Fmsg
        [1U][1U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg[1U][2U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__send___05Fmsg
        [1U][2U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg[2U][0U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__send___05Fmsg
        [2U][0U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg[2U][1U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__send___05Fmsg
        [2U][1U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg[2U][2U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__send___05Fmsg
        [2U][2U];
    vlSelf->__PVT__data_mem__DOT__memory_wrapper___05F0__DOT__memory___05Fwen[0U] = 0U;
    vlSelf->__PVT__data_mem__DOT__memory_wrapper___05F1__DOT__memory___05Fwen[0U] = 0U;
    vlSelf->__PVT__data_mem__DOT__memory_wrapper___05F0__DOT__memory___05Fwaddr[0U] = 0U;
    vlSelf->__PVT__data_mem__DOT__memory_wrapper___05F0__DOT__memory___05Fwdata[0U][0U] = 0U;
    vlSelf->__PVT__data_mem__DOT__memory_wrapper___05F0__DOT__memory___05Fwdata[0U][1U] = 0U;
    vlSelf->__PVT__data_mem__DOT__memory_wrapper___05F0__DOT__memory___05Fwdata[0U][2U] = 0U;
    if (vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fval
        [0U]) {
        vlSelf->__PVT__data_mem__DOT__memory_wrapper___05F0__DOT__memory___05Fwen[0U] = 1U;
        vlSelf->__PVT__data_mem__DOT__memory_wrapper___05F0__DOT__memory___05Fwaddr[0U] 
            = (0xfU & (vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
                       [0U][2U] >> 0xdU));
        vlSelf->__PVT__data_mem__DOT__memory_wrapper___05F0__DOT__memory___05Fwdata[0U][0U] 
            = ((vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
                [0U][1U] << 0x16U) | (vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
                                      [0U][0U] >> 0xaU));
        vlSelf->__PVT__data_mem__DOT__memory_wrapper___05F0__DOT__memory___05Fwdata[0U][1U] 
            = ((vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
                [0U][2U] << 0x16U) | (vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
                                      [0U][1U] >> 0xaU));
        vlSelf->__PVT__data_mem__DOT__memory_wrapper___05F0__DOT__memory___05Fwdata[0U][2U] 
            = (7U & (vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
                     [0U][2U] >> 0xaU));
    }
    vlSelf->__PVT__data_mem__DOT__memory_wrapper___05F1__DOT__memory___05Fwaddr[0U] = 0U;
    vlSelf->__PVT__data_mem__DOT__memory_wrapper___05F1__DOT__memory___05Fwdata[0U][0U] = 0U;
    vlSelf->__PVT__data_mem__DOT__memory_wrapper___05F1__DOT__memory___05Fwdata[0U][1U] = 0U;
    vlSelf->__PVT__data_mem__DOT__memory_wrapper___05F1__DOT__memory___05Fwdata[0U][2U] = 0U;
    if (vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fval
        [1U]) {
        vlSelf->__PVT__data_mem__DOT__memory_wrapper___05F1__DOT__memory___05Fwen[0U] = 1U;
        vlSelf->__PVT__data_mem__DOT__memory_wrapper___05F1__DOT__memory___05Fwaddr[0U] 
            = (0xfU & (vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
                       [1U][2U] >> 0xdU));
        vlSelf->__PVT__data_mem__DOT__memory_wrapper___05F1__DOT__memory___05Fwdata[0U][0U] 
            = ((vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
                [1U][1U] << 0x16U) | (vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
                                      [1U][0U] >> 0xaU));
        vlSelf->__PVT__data_mem__DOT__memory_wrapper___05F1__DOT__memory___05Fwdata[0U][1U] 
            = ((vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
                [1U][2U] << 0x16U) | (vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
                                      [1U][1U] >> 0xaU));
        vlSelf->__PVT__data_mem__DOT__memory_wrapper___05F1__DOT__memory___05Fwdata[0U][2U] 
            = (7U & (vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
                     [1U][2U] >> 0xaU));
    }
    vlSelf->__PVT__data_mem___05Fsend_to_noc_store_pkt___05Fmsg[0U] = 0U;
    vlSelf->__PVT__data_mem___05Fsend_to_noc_store_pkt___05Fmsg[1U] = 0U;
    vlSelf->__PVT__data_mem___05Fsend_to_noc_store_pkt___05Fmsg[2U] = 0U;
    vlSelf->__PVT__data_mem___05Fsend_to_noc_store_pkt___05Fmsg[3U] 
        = (0xf8000000U & (vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
                          [2U][2U] << 0xeU));
    vlSelf->__PVT__data_mem___05Fsend_to_noc_store_pkt___05Fmsg[4U] 
        = (((vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
             [2U][1U] << 0x18U) | (0xfffffcU & (vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
                                                [2U][0U] 
                                                >> 8U))) 
           | (3U & (vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
                    [2U][2U] >> 0x12U)));
    vlSelf->__PVT__data_mem___05Fsend_to_noc_store_pkt___05Fmsg[5U] 
        = ((3U & (vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
                  [2U][1U] >> 8U)) | ((vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
                                       [2U][2U] << 0x18U) 
                                      | (0xfffffcU 
                                         & (vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
                                            [2U][1U] 
                                            >> 8U))));
    vlSelf->__PVT__data_mem___05Fsend_to_noc_store_pkt___05Fmsg[6U] 
        = (0x180U | ((0x700000U & (vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
                                   [2U][2U] >> 2U)) 
                     | ((3U & (vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
                               [2U][2U] >> 8U)) | (0x1cU 
                                                   & (vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
                                                      [2U][2U] 
                                                      >> 8U)))));
    vlSelf->__PVT__data_mem___05Fsend_to_noc_store_pkt___05Fmsg[7U] 
        = (0x3ffU & ((0x3f0U & (vlSelf->__PVT__data_mem__DOT__idTo2d_x_lut
                                [0U] << 4U)) | (0x3f8U 
                                                & (vlSelf->__PVT__data_mem__DOT__idTo2d_y_lut
                                                   [0U] 
                                                   << 3U))));
}

VL_INLINE_OPT void Vcgra_test_CgraRTL___05F302b5d787f9ca139___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__18(Vcgra_test_CgraRTL___05F302b5d787f9ca139* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcgra_test_CgraRTL___05F302b5d787f9ca139___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__18\n"); );
    // Body
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Fsend___05Fmsg[0U][0U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar->__PVT__send___05Fmsg
        [0U][0U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Fsend___05Fmsg[0U][1U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar->__PVT__send___05Fmsg
        [0U][1U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Fsend___05Fmsg[0U][2U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar->__PVT__send___05Fmsg
        [0U][2U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Fsend___05Fmsg[1U][0U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar->__PVT__send___05Fmsg
        [1U][0U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Fsend___05Fmsg[1U][1U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar->__PVT__send___05Fmsg
        [1U][1U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Fsend___05Fmsg[1U][2U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar->__PVT__send___05Fmsg
        [1U][2U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Fsend___05Fmsg[2U][0U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar->__PVT__send___05Fmsg
        [2U][0U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Fsend___05Fmsg[2U][1U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar->__PVT__send___05Fmsg
        [2U][1U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Fsend___05Fmsg[2U][2U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar->__PVT__send___05Fmsg
        [2U][2U];
    vlSelf->__PVT__data_mem___05Fsend_to_noc_load_request_pkt___05Fmsg[0U] = 0U;
    vlSelf->__PVT__data_mem___05Fsend_to_noc_load_request_pkt___05Fmsg[1U] = 0U;
    vlSelf->__PVT__data_mem___05Fsend_to_noc_load_request_pkt___05Fmsg[2U] = 0U;
    vlSelf->__PVT__data_mem___05Fsend_to_noc_load_request_pkt___05Fmsg[3U] 
        = (0xf8000000U & (vlSelf->__PVT__data_mem__DOT__read_crossbar___05Fsend___05Fmsg
                          [2U][2U] << 0xeU));
    vlSelf->__PVT__data_mem___05Fsend_to_noc_load_request_pkt___05Fmsg[4U] 
        = (3U & (vlSelf->__PVT__data_mem__DOT__read_crossbar___05Fsend___05Fmsg
                 [2U][2U] >> 0x12U));
    vlSelf->__PVT__data_mem___05Fsend_to_noc_load_request_pkt___05Fmsg[5U] = 0U;
    vlSelf->__PVT__data_mem___05Fsend_to_noc_load_request_pkt___05Fmsg[6U] 
        = (0x140U | (0x700000U & (vlSelf->__PVT__data_mem__DOT__read_crossbar___05Fsend___05Fmsg
                                  [2U][2U] >> 2U)));
    vlSelf->__PVT__data_mem___05Fsend_to_noc_load_request_pkt___05Fmsg[7U] 
        = (0x3ffU & (0x80U | ((0x3f0U & (vlSelf->__PVT__data_mem__DOT__idTo2d_x_lut
                                         [1U] << 4U)) 
                              | (0x3f8U & (vlSelf->__PVT__data_mem__DOT__idTo2d_y_lut
                                           [1U] << 3U)))));
}

VL_INLINE_OPT void Vcgra_test_CgraRTL___05F302b5d787f9ca139___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__37(Vcgra_test_CgraRTL___05F302b5d787f9ca139* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcgra_test_CgraRTL___05F302b5d787f9ca139___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__37\n"); );
    // Body
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fval[0U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__send___05Fval
        [0U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fval[1U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__send___05Fval
        [1U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fval[2U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__send___05Fval
        [2U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg[0U][0U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__send___05Fmsg
        [0U][0U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg[0U][1U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__send___05Fmsg
        [0U][1U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg[0U][2U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__send___05Fmsg
        [0U][2U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg[1U][0U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__send___05Fmsg
        [1U][0U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg[1U][1U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__send___05Fmsg
        [1U][1U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg[1U][2U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__send___05Fmsg
        [1U][2U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg[2U][0U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__send___05Fmsg
        [2U][0U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg[2U][1U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__send___05Fmsg
        [2U][1U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg[2U][2U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__send___05Fmsg
        [2U][2U];
    vlSelf->__PVT__data_mem__DOT__memory_wrapper___05F0__DOT__memory___05Fwen[0U] = 0U;
    vlSelf->__PVT__data_mem__DOT__memory_wrapper___05F1__DOT__memory___05Fwen[0U] = 0U;
    vlSelf->__PVT__data_mem__DOT__memory_wrapper___05F0__DOT__memory___05Fwaddr[0U] = 0U;
    vlSelf->__PVT__data_mem__DOT__memory_wrapper___05F0__DOT__memory___05Fwdata[0U][0U] = 0U;
    vlSelf->__PVT__data_mem__DOT__memory_wrapper___05F0__DOT__memory___05Fwdata[0U][1U] = 0U;
    vlSelf->__PVT__data_mem__DOT__memory_wrapper___05F0__DOT__memory___05Fwdata[0U][2U] = 0U;
    if (vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fval
        [0U]) {
        vlSelf->__PVT__data_mem__DOT__memory_wrapper___05F0__DOT__memory___05Fwen[0U] = 1U;
        vlSelf->__PVT__data_mem__DOT__memory_wrapper___05F0__DOT__memory___05Fwaddr[0U] 
            = (0xfU & (vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
                       [0U][2U] >> 0xdU));
        vlSelf->__PVT__data_mem__DOT__memory_wrapper___05F0__DOT__memory___05Fwdata[0U][0U] 
            = ((vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
                [0U][1U] << 0x16U) | (vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
                                      [0U][0U] >> 0xaU));
        vlSelf->__PVT__data_mem__DOT__memory_wrapper___05F0__DOT__memory___05Fwdata[0U][1U] 
            = ((vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
                [0U][2U] << 0x16U) | (vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
                                      [0U][1U] >> 0xaU));
        vlSelf->__PVT__data_mem__DOT__memory_wrapper___05F0__DOT__memory___05Fwdata[0U][2U] 
            = (7U & (vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
                     [0U][2U] >> 0xaU));
    }
    vlSelf->__PVT__data_mem__DOT__memory_wrapper___05F1__DOT__memory___05Fwaddr[0U] = 0U;
    vlSelf->__PVT__data_mem__DOT__memory_wrapper___05F1__DOT__memory___05Fwdata[0U][0U] = 0U;
    vlSelf->__PVT__data_mem__DOT__memory_wrapper___05F1__DOT__memory___05Fwdata[0U][1U] = 0U;
    vlSelf->__PVT__data_mem__DOT__memory_wrapper___05F1__DOT__memory___05Fwdata[0U][2U] = 0U;
    if (vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fval
        [1U]) {
        vlSelf->__PVT__data_mem__DOT__memory_wrapper___05F1__DOT__memory___05Fwen[0U] = 1U;
        vlSelf->__PVT__data_mem__DOT__memory_wrapper___05F1__DOT__memory___05Fwaddr[0U] 
            = (0xfU & (vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
                       [1U][2U] >> 0xdU));
        vlSelf->__PVT__data_mem__DOT__memory_wrapper___05F1__DOT__memory___05Fwdata[0U][0U] 
            = ((vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
                [1U][1U] << 0x16U) | (vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
                                      [1U][0U] >> 0xaU));
        vlSelf->__PVT__data_mem__DOT__memory_wrapper___05F1__DOT__memory___05Fwdata[0U][1U] 
            = ((vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
                [1U][2U] << 0x16U) | (vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
                                      [1U][1U] >> 0xaU));
        vlSelf->__PVT__data_mem__DOT__memory_wrapper___05F1__DOT__memory___05Fwdata[0U][2U] 
            = (7U & (vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
                     [1U][2U] >> 0xaU));
    }
    vlSelf->__PVT__data_mem___05Fsend_to_noc_store_pkt___05Fmsg[0U] = 0U;
    vlSelf->__PVT__data_mem___05Fsend_to_noc_store_pkt___05Fmsg[1U] = 0U;
    vlSelf->__PVT__data_mem___05Fsend_to_noc_store_pkt___05Fmsg[2U] = 0U;
    vlSelf->__PVT__data_mem___05Fsend_to_noc_store_pkt___05Fmsg[3U] 
        = (0xf8000000U & (vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
                          [2U][2U] << 0xeU));
    vlSelf->__PVT__data_mem___05Fsend_to_noc_store_pkt___05Fmsg[4U] 
        = (((vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
             [2U][1U] << 0x18U) | (0xfffffcU & (vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
                                                [2U][0U] 
                                                >> 8U))) 
           | (3U & (vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
                    [2U][2U] >> 0x12U)));
    vlSelf->__PVT__data_mem___05Fsend_to_noc_store_pkt___05Fmsg[5U] 
        = ((3U & (vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
                  [2U][1U] >> 8U)) | ((vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
                                       [2U][2U] << 0x18U) 
                                      | (0xfffffcU 
                                         & (vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
                                            [2U][1U] 
                                            >> 8U))));
    vlSelf->__PVT__data_mem___05Fsend_to_noc_store_pkt___05Fmsg[6U] 
        = (0x180U | ((0x700000U & (vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
                                   [2U][2U] >> 2U)) 
                     | ((3U & (vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
                               [2U][2U] >> 8U)) | (0x1cU 
                                                   & (vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
                                                      [2U][2U] 
                                                      >> 8U)))));
    vlSelf->__PVT__data_mem___05Fsend_to_noc_store_pkt___05Fmsg[7U] 
        = (0x3ffU & (0x80U | ((0x3f0U & (vlSelf->__PVT__data_mem__DOT__idTo2d_x_lut
                                         [1U] << 4U)) 
                              | (0x3f8U & (vlSelf->__PVT__data_mem__DOT__idTo2d_y_lut
                                           [1U] << 3U)))));
}

VL_INLINE_OPT void Vcgra_test_CgraRTL___05F302b5d787f9ca139___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__18(Vcgra_test_CgraRTL___05F302b5d787f9ca139* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcgra_test_CgraRTL___05F302b5d787f9ca139___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__18\n"); );
    // Body
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Fsend___05Fmsg[0U][0U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar->__PVT__send___05Fmsg
        [0U][0U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Fsend___05Fmsg[0U][1U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar->__PVT__send___05Fmsg
        [0U][1U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Fsend___05Fmsg[0U][2U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar->__PVT__send___05Fmsg
        [0U][2U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Fsend___05Fmsg[1U][0U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar->__PVT__send___05Fmsg
        [1U][0U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Fsend___05Fmsg[1U][1U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar->__PVT__send___05Fmsg
        [1U][1U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Fsend___05Fmsg[1U][2U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar->__PVT__send___05Fmsg
        [1U][2U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Fsend___05Fmsg[2U][0U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar->__PVT__send___05Fmsg
        [2U][0U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Fsend___05Fmsg[2U][1U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar->__PVT__send___05Fmsg
        [2U][1U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Fsend___05Fmsg[2U][2U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar->__PVT__send___05Fmsg
        [2U][2U];
    vlSelf->__PVT__data_mem___05Fsend_to_noc_load_request_pkt___05Fmsg[0U] = 0U;
    vlSelf->__PVT__data_mem___05Fsend_to_noc_load_request_pkt___05Fmsg[1U] = 0U;
    vlSelf->__PVT__data_mem___05Fsend_to_noc_load_request_pkt___05Fmsg[2U] = 0U;
    vlSelf->__PVT__data_mem___05Fsend_to_noc_load_request_pkt___05Fmsg[3U] 
        = (0xf8000000U & (vlSelf->__PVT__data_mem__DOT__read_crossbar___05Fsend___05Fmsg
                          [2U][2U] << 0xeU));
    vlSelf->__PVT__data_mem___05Fsend_to_noc_load_request_pkt___05Fmsg[4U] 
        = (3U & (vlSelf->__PVT__data_mem__DOT__read_crossbar___05Fsend___05Fmsg
                 [2U][2U] >> 0x12U));
    vlSelf->__PVT__data_mem___05Fsend_to_noc_load_request_pkt___05Fmsg[5U] = 0U;
    vlSelf->__PVT__data_mem___05Fsend_to_noc_load_request_pkt___05Fmsg[6U] 
        = (0x140U | (0x700000U & (vlSelf->__PVT__data_mem__DOT__read_crossbar___05Fsend___05Fmsg
                                  [2U][2U] >> 2U)));
    vlSelf->__PVT__data_mem___05Fsend_to_noc_load_request_pkt___05Fmsg[7U] 
        = (0x3ffU & (0x100U | ((0x3f0U & (vlSelf->__PVT__data_mem__DOT__idTo2d_x_lut
                                          [2U] << 4U)) 
                               | (0x3f8U & (vlSelf->__PVT__data_mem__DOT__idTo2d_y_lut
                                            [2U] << 3U)))));
}

VL_INLINE_OPT void Vcgra_test_CgraRTL___05F302b5d787f9ca139___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__37(Vcgra_test_CgraRTL___05F302b5d787f9ca139* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcgra_test_CgraRTL___05F302b5d787f9ca139___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__37\n"); );
    // Body
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fval[0U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__send___05Fval
        [0U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fval[1U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__send___05Fval
        [1U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fval[2U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__send___05Fval
        [2U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg[0U][0U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__send___05Fmsg
        [0U][0U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg[0U][1U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__send___05Fmsg
        [0U][1U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg[0U][2U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__send___05Fmsg
        [0U][2U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg[1U][0U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__send___05Fmsg
        [1U][0U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg[1U][1U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__send___05Fmsg
        [1U][1U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg[1U][2U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__send___05Fmsg
        [1U][2U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg[2U][0U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__send___05Fmsg
        [2U][0U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg[2U][1U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__send___05Fmsg
        [2U][1U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg[2U][2U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__send___05Fmsg
        [2U][2U];
    vlSelf->__PVT__data_mem__DOT__memory_wrapper___05F0__DOT__memory___05Fwen[0U] = 0U;
    vlSelf->__PVT__data_mem__DOT__memory_wrapper___05F1__DOT__memory___05Fwen[0U] = 0U;
    vlSelf->__PVT__data_mem__DOT__memory_wrapper___05F0__DOT__memory___05Fwaddr[0U] = 0U;
    vlSelf->__PVT__data_mem__DOT__memory_wrapper___05F0__DOT__memory___05Fwdata[0U][0U] = 0U;
    vlSelf->__PVT__data_mem__DOT__memory_wrapper___05F0__DOT__memory___05Fwdata[0U][1U] = 0U;
    vlSelf->__PVT__data_mem__DOT__memory_wrapper___05F0__DOT__memory___05Fwdata[0U][2U] = 0U;
    if (vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fval
        [0U]) {
        vlSelf->__PVT__data_mem__DOT__memory_wrapper___05F0__DOT__memory___05Fwen[0U] = 1U;
        vlSelf->__PVT__data_mem__DOT__memory_wrapper___05F0__DOT__memory___05Fwaddr[0U] 
            = (0xfU & (vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
                       [0U][2U] >> 0xdU));
        vlSelf->__PVT__data_mem__DOT__memory_wrapper___05F0__DOT__memory___05Fwdata[0U][0U] 
            = ((vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
                [0U][1U] << 0x16U) | (vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
                                      [0U][0U] >> 0xaU));
        vlSelf->__PVT__data_mem__DOT__memory_wrapper___05F0__DOT__memory___05Fwdata[0U][1U] 
            = ((vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
                [0U][2U] << 0x16U) | (vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
                                      [0U][1U] >> 0xaU));
        vlSelf->__PVT__data_mem__DOT__memory_wrapper___05F0__DOT__memory___05Fwdata[0U][2U] 
            = (7U & (vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
                     [0U][2U] >> 0xaU));
    }
    vlSelf->__PVT__data_mem__DOT__memory_wrapper___05F1__DOT__memory___05Fwaddr[0U] = 0U;
    vlSelf->__PVT__data_mem__DOT__memory_wrapper___05F1__DOT__memory___05Fwdata[0U][0U] = 0U;
    vlSelf->__PVT__data_mem__DOT__memory_wrapper___05F1__DOT__memory___05Fwdata[0U][1U] = 0U;
    vlSelf->__PVT__data_mem__DOT__memory_wrapper___05F1__DOT__memory___05Fwdata[0U][2U] = 0U;
    if (vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fval
        [1U]) {
        vlSelf->__PVT__data_mem__DOT__memory_wrapper___05F1__DOT__memory___05Fwen[0U] = 1U;
        vlSelf->__PVT__data_mem__DOT__memory_wrapper___05F1__DOT__memory___05Fwaddr[0U] 
            = (0xfU & (vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
                       [1U][2U] >> 0xdU));
        vlSelf->__PVT__data_mem__DOT__memory_wrapper___05F1__DOT__memory___05Fwdata[0U][0U] 
            = ((vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
                [1U][1U] << 0x16U) | (vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
                                      [1U][0U] >> 0xaU));
        vlSelf->__PVT__data_mem__DOT__memory_wrapper___05F1__DOT__memory___05Fwdata[0U][1U] 
            = ((vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
                [1U][2U] << 0x16U) | (vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
                                      [1U][1U] >> 0xaU));
        vlSelf->__PVT__data_mem__DOT__memory_wrapper___05F1__DOT__memory___05Fwdata[0U][2U] 
            = (7U & (vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
                     [1U][2U] >> 0xaU));
    }
    vlSelf->__PVT__data_mem___05Fsend_to_noc_store_pkt___05Fmsg[0U] = 0U;
    vlSelf->__PVT__data_mem___05Fsend_to_noc_store_pkt___05Fmsg[1U] = 0U;
    vlSelf->__PVT__data_mem___05Fsend_to_noc_store_pkt___05Fmsg[2U] = 0U;
    vlSelf->__PVT__data_mem___05Fsend_to_noc_store_pkt___05Fmsg[3U] 
        = (0xf8000000U & (vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
                          [2U][2U] << 0xeU));
    vlSelf->__PVT__data_mem___05Fsend_to_noc_store_pkt___05Fmsg[4U] 
        = (((vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
             [2U][1U] << 0x18U) | (0xfffffcU & (vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
                                                [2U][0U] 
                                                >> 8U))) 
           | (3U & (vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
                    [2U][2U] >> 0x12U)));
    vlSelf->__PVT__data_mem___05Fsend_to_noc_store_pkt___05Fmsg[5U] 
        = ((3U & (vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
                  [2U][1U] >> 8U)) | ((vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
                                       [2U][2U] << 0x18U) 
                                      | (0xfffffcU 
                                         & (vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
                                            [2U][1U] 
                                            >> 8U))));
    vlSelf->__PVT__data_mem___05Fsend_to_noc_store_pkt___05Fmsg[6U] 
        = (0x180U | ((0x700000U & (vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
                                   [2U][2U] >> 2U)) 
                     | ((3U & (vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
                               [2U][2U] >> 8U)) | (0x1cU 
                                                   & (vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
                                                      [2U][2U] 
                                                      >> 8U)))));
    vlSelf->__PVT__data_mem___05Fsend_to_noc_store_pkt___05Fmsg[7U] 
        = (0x3ffU & (0x100U | ((0x3f0U & (vlSelf->__PVT__data_mem__DOT__idTo2d_x_lut
                                          [2U] << 4U)) 
                               | (0x3f8U & (vlSelf->__PVT__data_mem__DOT__idTo2d_y_lut
                                            [2U] << 3U)))));
}

VL_INLINE_OPT void Vcgra_test_CgraRTL___05F302b5d787f9ca139___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__18(Vcgra_test_CgraRTL___05F302b5d787f9ca139* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcgra_test_CgraRTL___05F302b5d787f9ca139___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__18\n"); );
    // Body
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Fsend___05Fmsg[0U][0U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar->__PVT__send___05Fmsg
        [0U][0U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Fsend___05Fmsg[0U][1U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar->__PVT__send___05Fmsg
        [0U][1U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Fsend___05Fmsg[0U][2U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar->__PVT__send___05Fmsg
        [0U][2U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Fsend___05Fmsg[1U][0U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar->__PVT__send___05Fmsg
        [1U][0U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Fsend___05Fmsg[1U][1U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar->__PVT__send___05Fmsg
        [1U][1U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Fsend___05Fmsg[1U][2U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar->__PVT__send___05Fmsg
        [1U][2U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Fsend___05Fmsg[2U][0U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar->__PVT__send___05Fmsg
        [2U][0U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Fsend___05Fmsg[2U][1U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar->__PVT__send___05Fmsg
        [2U][1U];
    vlSelf->__PVT__data_mem__DOT__read_crossbar___05Fsend___05Fmsg[2U][2U] 
        = vlSelf->__PVT__data_mem__DOT__read_crossbar->__PVT__send___05Fmsg
        [2U][2U];
    vlSelf->__PVT__data_mem___05Fsend_to_noc_load_request_pkt___05Fmsg[0U] = 0U;
    vlSelf->__PVT__data_mem___05Fsend_to_noc_load_request_pkt___05Fmsg[1U] = 0U;
    vlSelf->__PVT__data_mem___05Fsend_to_noc_load_request_pkt___05Fmsg[2U] = 0U;
    vlSelf->__PVT__data_mem___05Fsend_to_noc_load_request_pkt___05Fmsg[3U] 
        = (0xf8000000U & (vlSelf->__PVT__data_mem__DOT__read_crossbar___05Fsend___05Fmsg
                          [2U][2U] << 0xeU));
    vlSelf->__PVT__data_mem___05Fsend_to_noc_load_request_pkt___05Fmsg[4U] 
        = (3U & (vlSelf->__PVT__data_mem__DOT__read_crossbar___05Fsend___05Fmsg
                 [2U][2U] >> 0x12U));
    vlSelf->__PVT__data_mem___05Fsend_to_noc_load_request_pkt___05Fmsg[5U] = 0U;
    vlSelf->__PVT__data_mem___05Fsend_to_noc_load_request_pkt___05Fmsg[6U] 
        = (0x140U | (0x700000U & (vlSelf->__PVT__data_mem__DOT__read_crossbar___05Fsend___05Fmsg
                                  [2U][2U] >> 2U)));
    vlSelf->__PVT__data_mem___05Fsend_to_noc_load_request_pkt___05Fmsg[7U] 
        = (0x3ffU & (0x180U | ((0x3f0U & (vlSelf->__PVT__data_mem__DOT__idTo2d_x_lut
                                          [3U] << 4U)) 
                               | (0x3f8U & (vlSelf->__PVT__data_mem__DOT__idTo2d_y_lut
                                            [3U] << 3U)))));
}

VL_INLINE_OPT void Vcgra_test_CgraRTL___05F302b5d787f9ca139___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__37(Vcgra_test_CgraRTL___05F302b5d787f9ca139* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcgra_test_CgraRTL___05F302b5d787f9ca139___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__37\n"); );
    // Body
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fval[0U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__send___05Fval
        [0U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fval[1U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__send___05Fval
        [1U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fval[2U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__send___05Fval
        [2U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg[0U][0U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__send___05Fmsg
        [0U][0U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg[0U][1U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__send___05Fmsg
        [0U][1U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg[0U][2U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__send___05Fmsg
        [0U][2U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg[1U][0U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__send___05Fmsg
        [1U][0U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg[1U][1U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__send___05Fmsg
        [1U][1U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg[1U][2U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__send___05Fmsg
        [1U][2U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg[2U][0U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__send___05Fmsg
        [2U][0U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg[2U][1U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__send___05Fmsg
        [2U][1U];
    vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg[2U][2U] 
        = vlSelf->__PVT__data_mem__DOT__write_crossbar->__PVT__send___05Fmsg
        [2U][2U];
    vlSelf->__PVT__data_mem__DOT__memory_wrapper___05F0__DOT__memory___05Fwen[0U] = 0U;
    vlSelf->__PVT__data_mem__DOT__memory_wrapper___05F1__DOT__memory___05Fwen[0U] = 0U;
    vlSelf->__PVT__data_mem__DOT__memory_wrapper___05F0__DOT__memory___05Fwaddr[0U] = 0U;
    vlSelf->__PVT__data_mem__DOT__memory_wrapper___05F0__DOT__memory___05Fwdata[0U][0U] = 0U;
    vlSelf->__PVT__data_mem__DOT__memory_wrapper___05F0__DOT__memory___05Fwdata[0U][1U] = 0U;
    vlSelf->__PVT__data_mem__DOT__memory_wrapper___05F0__DOT__memory___05Fwdata[0U][2U] = 0U;
    if (vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fval
        [0U]) {
        vlSelf->__PVT__data_mem__DOT__memory_wrapper___05F0__DOT__memory___05Fwen[0U] = 1U;
        vlSelf->__PVT__data_mem__DOT__memory_wrapper___05F0__DOT__memory___05Fwaddr[0U] 
            = (0xfU & (vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
                       [0U][2U] >> 0xdU));
        vlSelf->__PVT__data_mem__DOT__memory_wrapper___05F0__DOT__memory___05Fwdata[0U][0U] 
            = ((vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
                [0U][1U] << 0x16U) | (vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
                                      [0U][0U] >> 0xaU));
        vlSelf->__PVT__data_mem__DOT__memory_wrapper___05F0__DOT__memory___05Fwdata[0U][1U] 
            = ((vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
                [0U][2U] << 0x16U) | (vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
                                      [0U][1U] >> 0xaU));
        vlSelf->__PVT__data_mem__DOT__memory_wrapper___05F0__DOT__memory___05Fwdata[0U][2U] 
            = (7U & (vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
                     [0U][2U] >> 0xaU));
    }
    vlSelf->__PVT__data_mem__DOT__memory_wrapper___05F1__DOT__memory___05Fwaddr[0U] = 0U;
    vlSelf->__PVT__data_mem__DOT__memory_wrapper___05F1__DOT__memory___05Fwdata[0U][0U] = 0U;
    vlSelf->__PVT__data_mem__DOT__memory_wrapper___05F1__DOT__memory___05Fwdata[0U][1U] = 0U;
    vlSelf->__PVT__data_mem__DOT__memory_wrapper___05F1__DOT__memory___05Fwdata[0U][2U] = 0U;
    if (vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fval
        [1U]) {
        vlSelf->__PVT__data_mem__DOT__memory_wrapper___05F1__DOT__memory___05Fwen[0U] = 1U;
        vlSelf->__PVT__data_mem__DOT__memory_wrapper___05F1__DOT__memory___05Fwaddr[0U] 
            = (0xfU & (vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
                       [1U][2U] >> 0xdU));
        vlSelf->__PVT__data_mem__DOT__memory_wrapper___05F1__DOT__memory___05Fwdata[0U][0U] 
            = ((vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
                [1U][1U] << 0x16U) | (vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
                                      [1U][0U] >> 0xaU));
        vlSelf->__PVT__data_mem__DOT__memory_wrapper___05F1__DOT__memory___05Fwdata[0U][1U] 
            = ((vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
                [1U][2U] << 0x16U) | (vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
                                      [1U][1U] >> 0xaU));
        vlSelf->__PVT__data_mem__DOT__memory_wrapper___05F1__DOT__memory___05Fwdata[0U][2U] 
            = (7U & (vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
                     [1U][2U] >> 0xaU));
    }
    vlSelf->__PVT__data_mem___05Fsend_to_noc_store_pkt___05Fmsg[0U] = 0U;
    vlSelf->__PVT__data_mem___05Fsend_to_noc_store_pkt___05Fmsg[1U] = 0U;
    vlSelf->__PVT__data_mem___05Fsend_to_noc_store_pkt___05Fmsg[2U] = 0U;
    vlSelf->__PVT__data_mem___05Fsend_to_noc_store_pkt___05Fmsg[3U] 
        = (0xf8000000U & (vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
                          [2U][2U] << 0xeU));
    vlSelf->__PVT__data_mem___05Fsend_to_noc_store_pkt___05Fmsg[4U] 
        = (((vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
             [2U][1U] << 0x18U) | (0xfffffcU & (vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
                                                [2U][0U] 
                                                >> 8U))) 
           | (3U & (vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
                    [2U][2U] >> 0x12U)));
    vlSelf->__PVT__data_mem___05Fsend_to_noc_store_pkt___05Fmsg[5U] 
        = ((3U & (vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
                  [2U][1U] >> 8U)) | ((vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
                                       [2U][2U] << 0x18U) 
                                      | (0xfffffcU 
                                         & (vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
                                            [2U][1U] 
                                            >> 8U))));
    vlSelf->__PVT__data_mem___05Fsend_to_noc_store_pkt___05Fmsg[6U] 
        = (0x180U | ((0x700000U & (vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
                                   [2U][2U] >> 2U)) 
                     | ((3U & (vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
                               [2U][2U] >> 8U)) | (0x1cU 
                                                   & (vlSelf->__PVT__data_mem__DOT__write_crossbar___05Fsend___05Fmsg
                                                      [2U][2U] 
                                                      >> 8U)))));
    vlSelf->__PVT__data_mem___05Fsend_to_noc_store_pkt___05Fmsg[7U] 
        = (0x3ffU & (0x180U | ((0x3f0U & (vlSelf->__PVT__data_mem__DOT__idTo2d_x_lut
                                          [3U] << 4U)) 
                               | (0x3f8U & (vlSelf->__PVT__data_mem__DOT__idTo2d_y_lut
                                            [3U] << 3U)))));
}
