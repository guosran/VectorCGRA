// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcgra_test.h for the primary calling header

#include "Vcgra_test__pch.h"
#include "Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c.h"
#include "Vcgra_test__Syms.h"

VL_INLINE_OPT void Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__ctrl_ring__DOT__recv_adp___05F0__0(Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__ctrl_ring__DOT__recv_adp___05F0__0\n"); );
    // Init
    CData/*1:0*/ __Vdly____Vcellout__credit___05F0__count;
    __Vdly____Vcellout__credit___05F0__count = 0;
    CData/*1:0*/ __Vdly____Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F1__count = 0;
    // Body
    __Vdly____Vcellout__credit___05F1__count = vlSelf->__Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F0__count = vlSelf->__Vcellout__credit___05F0__count;
    if (vlSymsp->TOP.cgra_test__DOT__reset) {
        __Vdly____Vcellout__credit___05F1__count = 2U;
        __Vdly____Vcellout__credit___05F0__count = 2U;
    } else {
        if ((vlSelf->__PVT__send___05Fyum[1U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [1U]))) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F1__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [1U]) & vlSelf->__PVT__credit___05Fdecr
                    [1U])) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F1__count) 
                         - (IData)(1U)));
        }
        if ((vlSelf->__PVT__send___05Fyum[0U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [0U]))) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F0__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [0U]) & vlSelf->__PVT__credit___05Fdecr
                    [0U])) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F0__count) 
                         - (IData)(1U)));
        }
    }
    vlSelf->__Vcellout__credit___05F1__count = __Vdly____Vcellout__credit___05F1__count;
    vlSelf->__Vcellout__credit___05F0__count = __Vdly____Vcellout__credit___05F0__count;
    vlSelf->__PVT__credit___05Fcount[1U] = vlSelf->__Vcellout__credit___05F1__count;
    vlSelf->__PVT__credit___05Fcount[0U] = vlSelf->__Vcellout__credit___05F0__count;
    vlSelf->__PVT__recv___05Frdy = 0U;
    vlSelf->__PVT__send___05Fen = 0U;
    if (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__tile___05F0.__PVT__send_to_controller_pkt___05Fval) {
        if (((~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__tile___05F0.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                 >> 0xaU)) & (0U < vlSelf->__PVT__credit___05Fcount
                              [0U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
        if (((vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__tile___05F0.__PVT__send_to_controller_pkt___05Fmsg[6U] 
              >> 0xaU) & (0U < vlSelf->__PVT__credit___05Fcount
                          [1U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
    }
    vlSelf->__PVT__credit___05Fdecr[0U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__tile___05F0.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                                 >> 0xaU)));
    vlSelf->__PVT__credit___05Fdecr[1U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__tile___05F0.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                              >> 0xaU));
}

VL_INLINE_OPT void Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__ctrl_ring__DOT__recv_adp___05F1__0(Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__ctrl_ring__DOT__recv_adp___05F1__0\n"); );
    // Init
    CData/*1:0*/ __Vdly____Vcellout__credit___05F0__count;
    __Vdly____Vcellout__credit___05F0__count = 0;
    CData/*1:0*/ __Vdly____Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F1__count = 0;
    // Body
    __Vdly____Vcellout__credit___05F1__count = vlSelf->__Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F0__count = vlSelf->__Vcellout__credit___05F0__count;
    if (vlSymsp->TOP.cgra_test__DOT__reset) {
        __Vdly____Vcellout__credit___05F1__count = 2U;
        __Vdly____Vcellout__credit___05F0__count = 2U;
    } else {
        if ((vlSelf->__PVT__send___05Fyum[1U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [1U]))) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F1__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [1U]) & vlSelf->__PVT__credit___05Fdecr
                    [1U])) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F1__count) 
                         - (IData)(1U)));
        }
        if ((vlSelf->__PVT__send___05Fyum[0U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [0U]))) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F0__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [0U]) & vlSelf->__PVT__credit___05Fdecr
                    [0U])) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F0__count) 
                         - (IData)(1U)));
        }
    }
    vlSelf->__Vcellout__credit___05F1__count = __Vdly____Vcellout__credit___05F1__count;
    vlSelf->__Vcellout__credit___05F0__count = __Vdly____Vcellout__credit___05F0__count;
    vlSelf->__PVT__credit___05Fcount[1U] = vlSelf->__Vcellout__credit___05F1__count;
    vlSelf->__PVT__credit___05Fcount[0U] = vlSelf->__Vcellout__credit___05F0__count;
    vlSelf->__PVT__recv___05Frdy = 0U;
    vlSelf->__PVT__send___05Fen = 0U;
    if (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__tile___05F1.__PVT__send_to_controller_pkt___05Fval) {
        if (((~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__tile___05F1.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                 >> 0xaU)) & (0U < vlSelf->__PVT__credit___05Fcount
                              [0U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
        if (((vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__tile___05F1.__PVT__send_to_controller_pkt___05Fmsg[6U] 
              >> 0xaU) & (0U < vlSelf->__PVT__credit___05Fcount
                          [1U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
    }
    vlSelf->__PVT__credit___05Fdecr[0U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__tile___05F1.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                                 >> 0xaU)));
    vlSelf->__PVT__credit___05Fdecr[1U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__tile___05F1.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                              >> 0xaU));
}

VL_INLINE_OPT void Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__ctrl_ring__DOT__recv_adp___05F2__0(Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__ctrl_ring__DOT__recv_adp___05F2__0\n"); );
    // Init
    CData/*1:0*/ __Vdly____Vcellout__credit___05F0__count;
    __Vdly____Vcellout__credit___05F0__count = 0;
    CData/*1:0*/ __Vdly____Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F1__count = 0;
    // Body
    __Vdly____Vcellout__credit___05F1__count = vlSelf->__Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F0__count = vlSelf->__Vcellout__credit___05F0__count;
    if (vlSymsp->TOP.cgra_test__DOT__reset) {
        __Vdly____Vcellout__credit___05F1__count = 2U;
        __Vdly____Vcellout__credit___05F0__count = 2U;
    } else {
        if ((vlSelf->__PVT__send___05Fyum[1U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [1U]))) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F1__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [1U]) & vlSelf->__PVT__credit___05Fdecr
                    [1U])) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F1__count) 
                         - (IData)(1U)));
        }
        if ((vlSelf->__PVT__send___05Fyum[0U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [0U]))) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F0__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [0U]) & vlSelf->__PVT__credit___05Fdecr
                    [0U])) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F0__count) 
                         - (IData)(1U)));
        }
    }
    vlSelf->__Vcellout__credit___05F1__count = __Vdly____Vcellout__credit___05F1__count;
    vlSelf->__Vcellout__credit___05F0__count = __Vdly____Vcellout__credit___05F0__count;
    vlSelf->__PVT__credit___05Fcount[1U] = vlSelf->__Vcellout__credit___05F1__count;
    vlSelf->__PVT__credit___05Fcount[0U] = vlSelf->__Vcellout__credit___05F0__count;
    vlSelf->__PVT__recv___05Frdy = 0U;
    vlSelf->__PVT__send___05Fen = 0U;
    if (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__tile___05F2.__PVT__send_to_controller_pkt___05Fval) {
        if (((~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__tile___05F2.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                 >> 0xaU)) & (0U < vlSelf->__PVT__credit___05Fcount
                              [0U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
        if (((vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__tile___05F2.__PVT__send_to_controller_pkt___05Fmsg[6U] 
              >> 0xaU) & (0U < vlSelf->__PVT__credit___05Fcount
                          [1U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
    }
    vlSelf->__PVT__credit___05Fdecr[0U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__tile___05F2.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                                 >> 0xaU)));
    vlSelf->__PVT__credit___05Fdecr[1U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__tile___05F2.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                              >> 0xaU));
}

VL_INLINE_OPT void Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__ctrl_ring__DOT__recv_adp___05F3__0(Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__ctrl_ring__DOT__recv_adp___05F3__0\n"); );
    // Init
    CData/*1:0*/ __Vdly____Vcellout__credit___05F0__count;
    __Vdly____Vcellout__credit___05F0__count = 0;
    CData/*1:0*/ __Vdly____Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F1__count = 0;
    // Body
    __Vdly____Vcellout__credit___05F1__count = vlSelf->__Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F0__count = vlSelf->__Vcellout__credit___05F0__count;
    if (vlSymsp->TOP.cgra_test__DOT__reset) {
        __Vdly____Vcellout__credit___05F1__count = 2U;
        __Vdly____Vcellout__credit___05F0__count = 2U;
    } else {
        if ((vlSelf->__PVT__send___05Fyum[1U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [1U]))) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F1__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [1U]) & vlSelf->__PVT__credit___05Fdecr
                    [1U])) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F1__count) 
                         - (IData)(1U)));
        }
        if ((vlSelf->__PVT__send___05Fyum[0U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [0U]))) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F0__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [0U]) & vlSelf->__PVT__credit___05Fdecr
                    [0U])) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F0__count) 
                         - (IData)(1U)));
        }
    }
    vlSelf->__Vcellout__credit___05F1__count = __Vdly____Vcellout__credit___05F1__count;
    vlSelf->__Vcellout__credit___05F0__count = __Vdly____Vcellout__credit___05F0__count;
    vlSelf->__PVT__credit___05Fcount[1U] = vlSelf->__Vcellout__credit___05F1__count;
    vlSelf->__PVT__credit___05Fcount[0U] = vlSelf->__Vcellout__credit___05F0__count;
    vlSelf->__PVT__recv___05Frdy = 0U;
    vlSelf->__PVT__send___05Fen = 0U;
    if (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__tile___05F3.__PVT__send_to_controller_pkt___05Fval) {
        if (((~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__tile___05F3.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                 >> 0xaU)) & (0U < vlSelf->__PVT__credit___05Fcount
                              [0U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
        if (((vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__tile___05F3.__PVT__send_to_controller_pkt___05Fmsg[6U] 
              >> 0xaU) & (0U < vlSelf->__PVT__credit___05Fcount
                          [1U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
    }
    vlSelf->__PVT__credit___05Fdecr[0U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__tile___05F3.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                                 >> 0xaU)));
    vlSelf->__PVT__credit___05Fdecr[1U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__tile___05F3.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                              >> 0xaU));
}

VL_INLINE_OPT void Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__ctrl_ring__DOT__recv_adp___05F4__0(Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__ctrl_ring__DOT__recv_adp___05F4__0\n"); );
    // Init
    CData/*1:0*/ __Vdly____Vcellout__credit___05F0__count;
    __Vdly____Vcellout__credit___05F0__count = 0;
    CData/*1:0*/ __Vdly____Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F1__count = 0;
    // Body
    __Vdly____Vcellout__credit___05F1__count = vlSelf->__Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F0__count = vlSelf->__Vcellout__credit___05F0__count;
    if (vlSymsp->TOP.cgra_test__DOT__reset) {
        __Vdly____Vcellout__credit___05F1__count = 2U;
        __Vdly____Vcellout__credit___05F0__count = 2U;
    } else {
        if ((vlSelf->__PVT__send___05Fyum[1U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [1U]))) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F1__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [1U]) & vlSelf->__PVT__credit___05Fdecr
                    [1U])) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F1__count) 
                         - (IData)(1U)));
        }
        if ((vlSelf->__PVT__send___05Fyum[0U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [0U]))) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F0__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [0U]) & vlSelf->__PVT__credit___05Fdecr
                    [0U])) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F0__count) 
                         - (IData)(1U)));
        }
    }
    vlSelf->__Vcellout__credit___05F1__count = __Vdly____Vcellout__credit___05F1__count;
    vlSelf->__Vcellout__credit___05F0__count = __Vdly____Vcellout__credit___05F0__count;
    vlSelf->__PVT__credit___05Fcount[1U] = vlSelf->__Vcellout__credit___05F1__count;
    vlSelf->__PVT__credit___05Fcount[0U] = vlSelf->__Vcellout__credit___05F0__count;
    vlSelf->__PVT__recv___05Frdy = 0U;
    vlSelf->__PVT__send___05Fen = 0U;
    if (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__tile___05F4.__PVT__send_to_controller_pkt___05Fval) {
        if (((~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__tile___05F4.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                 >> 0xaU)) & (0U < vlSelf->__PVT__credit___05Fcount
                              [0U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
        if (((vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__tile___05F4.__PVT__send_to_controller_pkt___05Fmsg[6U] 
              >> 0xaU) & (0U < vlSelf->__PVT__credit___05Fcount
                          [1U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
    }
    vlSelf->__PVT__credit___05Fdecr[0U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__tile___05F4.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                                 >> 0xaU)));
    vlSelf->__PVT__credit___05Fdecr[1U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__tile___05F4.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                              >> 0xaU));
}

VL_INLINE_OPT void Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__ctrl_ring__DOT__recv_adp___05F5__0(Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__ctrl_ring__DOT__recv_adp___05F5__0\n"); );
    // Init
    CData/*1:0*/ __Vdly____Vcellout__credit___05F0__count;
    __Vdly____Vcellout__credit___05F0__count = 0;
    CData/*1:0*/ __Vdly____Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F1__count = 0;
    // Body
    __Vdly____Vcellout__credit___05F1__count = vlSelf->__Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F0__count = vlSelf->__Vcellout__credit___05F0__count;
    if (vlSymsp->TOP.cgra_test__DOT__reset) {
        __Vdly____Vcellout__credit___05F1__count = 2U;
        __Vdly____Vcellout__credit___05F0__count = 2U;
    } else {
        if ((vlSelf->__PVT__send___05Fyum[1U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [1U]))) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F1__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [1U]) & vlSelf->__PVT__credit___05Fdecr
                    [1U])) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F1__count) 
                         - (IData)(1U)));
        }
        if ((vlSelf->__PVT__send___05Fyum[0U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [0U]))) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F0__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [0U]) & vlSelf->__PVT__credit___05Fdecr
                    [0U])) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F0__count) 
                         - (IData)(1U)));
        }
    }
    vlSelf->__Vcellout__credit___05F1__count = __Vdly____Vcellout__credit___05F1__count;
    vlSelf->__Vcellout__credit___05F0__count = __Vdly____Vcellout__credit___05F0__count;
    vlSelf->__PVT__credit___05Fcount[1U] = vlSelf->__Vcellout__credit___05F1__count;
    vlSelf->__PVT__credit___05Fcount[0U] = vlSelf->__Vcellout__credit___05F0__count;
    vlSelf->__PVT__recv___05Frdy = 0U;
    vlSelf->__PVT__send___05Fen = 0U;
    if (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__tile___05F5.__PVT__send_to_controller_pkt___05Fval) {
        if (((~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__tile___05F5.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                 >> 0xaU)) & (0U < vlSelf->__PVT__credit___05Fcount
                              [0U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
        if (((vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__tile___05F5.__PVT__send_to_controller_pkt___05Fmsg[6U] 
              >> 0xaU) & (0U < vlSelf->__PVT__credit___05Fcount
                          [1U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
    }
    vlSelf->__PVT__credit___05Fdecr[0U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__tile___05F5.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                                 >> 0xaU)));
    vlSelf->__PVT__credit___05Fdecr[1U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__tile___05F5.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                              >> 0xaU));
}

VL_INLINE_OPT void Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__ctrl_ring__DOT__recv_adp___05F6__0(Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__ctrl_ring__DOT__recv_adp___05F6__0\n"); );
    // Init
    CData/*1:0*/ __Vdly____Vcellout__credit___05F0__count;
    __Vdly____Vcellout__credit___05F0__count = 0;
    CData/*1:0*/ __Vdly____Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F1__count = 0;
    // Body
    __Vdly____Vcellout__credit___05F1__count = vlSelf->__Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F0__count = vlSelf->__Vcellout__credit___05F0__count;
    if (vlSymsp->TOP.cgra_test__DOT__reset) {
        __Vdly____Vcellout__credit___05F1__count = 2U;
        __Vdly____Vcellout__credit___05F0__count = 2U;
    } else {
        if ((vlSelf->__PVT__send___05Fyum[1U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [1U]))) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F1__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [1U]) & vlSelf->__PVT__credit___05Fdecr
                    [1U])) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F1__count) 
                         - (IData)(1U)));
        }
        if ((vlSelf->__PVT__send___05Fyum[0U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [0U]))) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F0__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [0U]) & vlSelf->__PVT__credit___05Fdecr
                    [0U])) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F0__count) 
                         - (IData)(1U)));
        }
    }
    vlSelf->__Vcellout__credit___05F1__count = __Vdly____Vcellout__credit___05F1__count;
    vlSelf->__Vcellout__credit___05F0__count = __Vdly____Vcellout__credit___05F0__count;
    vlSelf->__PVT__credit___05Fcount[1U] = vlSelf->__Vcellout__credit___05F1__count;
    vlSelf->__PVT__credit___05Fcount[0U] = vlSelf->__Vcellout__credit___05F0__count;
    vlSelf->__PVT__recv___05Frdy = 0U;
    vlSelf->__PVT__send___05Fen = 0U;
    if (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__tile___05F6.__PVT__send_to_controller_pkt___05Fval) {
        if (((~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__tile___05F6.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                 >> 0xaU)) & (0U < vlSelf->__PVT__credit___05Fcount
                              [0U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
        if (((vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__tile___05F6.__PVT__send_to_controller_pkt___05Fmsg[6U] 
              >> 0xaU) & (0U < vlSelf->__PVT__credit___05Fcount
                          [1U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
    }
    vlSelf->__PVT__credit___05Fdecr[0U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__tile___05F6.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                                 >> 0xaU)));
    vlSelf->__PVT__credit___05Fdecr[1U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__tile___05F6.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                              >> 0xaU));
}

VL_INLINE_OPT void Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__ctrl_ring__DOT__recv_adp___05F7__0(Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__ctrl_ring__DOT__recv_adp___05F7__0\n"); );
    // Init
    CData/*1:0*/ __Vdly____Vcellout__credit___05F0__count;
    __Vdly____Vcellout__credit___05F0__count = 0;
    CData/*1:0*/ __Vdly____Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F1__count = 0;
    // Body
    __Vdly____Vcellout__credit___05F1__count = vlSelf->__Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F0__count = vlSelf->__Vcellout__credit___05F0__count;
    if (vlSymsp->TOP.cgra_test__DOT__reset) {
        __Vdly____Vcellout__credit___05F1__count = 2U;
        __Vdly____Vcellout__credit___05F0__count = 2U;
    } else {
        if ((vlSelf->__PVT__send___05Fyum[1U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [1U]))) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F1__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [1U]) & vlSelf->__PVT__credit___05Fdecr
                    [1U])) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F1__count) 
                         - (IData)(1U)));
        }
        if ((vlSelf->__PVT__send___05Fyum[0U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [0U]))) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F0__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [0U]) & vlSelf->__PVT__credit___05Fdecr
                    [0U])) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F0__count) 
                         - (IData)(1U)));
        }
    }
    vlSelf->__Vcellout__credit___05F1__count = __Vdly____Vcellout__credit___05F1__count;
    vlSelf->__Vcellout__credit___05F0__count = __Vdly____Vcellout__credit___05F0__count;
    vlSelf->__PVT__credit___05Fcount[1U] = vlSelf->__Vcellout__credit___05F1__count;
    vlSelf->__PVT__credit___05Fcount[0U] = vlSelf->__Vcellout__credit___05F0__count;
    vlSelf->__PVT__recv___05Frdy = 0U;
    vlSelf->__PVT__send___05Fen = 0U;
    if (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__tile___05F7.__PVT__send_to_controller_pkt___05Fval) {
        if (((~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__tile___05F7.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                 >> 0xaU)) & (0U < vlSelf->__PVT__credit___05Fcount
                              [0U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
        if (((vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__tile___05F7.__PVT__send_to_controller_pkt___05Fmsg[6U] 
              >> 0xaU) & (0U < vlSelf->__PVT__credit___05Fcount
                          [1U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
    }
    vlSelf->__PVT__credit___05Fdecr[0U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__tile___05F7.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                                 >> 0xaU)));
    vlSelf->__PVT__credit___05Fdecr[1U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__tile___05F7.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                              >> 0xaU));
}

VL_INLINE_OPT void Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__ctrl_ring__DOT__recv_adp___05F8__0(Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__ctrl_ring__DOT__recv_adp___05F8__0\n"); );
    // Init
    CData/*1:0*/ __Vdly____Vcellout__credit___05F0__count;
    __Vdly____Vcellout__credit___05F0__count = 0;
    CData/*1:0*/ __Vdly____Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F1__count = 0;
    // Body
    __Vdly____Vcellout__credit___05F1__count = vlSelf->__Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F0__count = vlSelf->__Vcellout__credit___05F0__count;
    if (vlSymsp->TOP.cgra_test__DOT__reset) {
        __Vdly____Vcellout__credit___05F1__count = 2U;
        __Vdly____Vcellout__credit___05F0__count = 2U;
    } else {
        if ((vlSelf->__PVT__send___05Fyum[1U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [1U]))) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F1__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [1U]) & vlSelf->__PVT__credit___05Fdecr
                    [1U])) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F1__count) 
                         - (IData)(1U)));
        }
        if ((vlSelf->__PVT__send___05Fyum[0U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [0U]))) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F0__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [0U]) & vlSelf->__PVT__credit___05Fdecr
                    [0U])) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F0__count) 
                         - (IData)(1U)));
        }
    }
    vlSelf->__Vcellout__credit___05F1__count = __Vdly____Vcellout__credit___05F1__count;
    vlSelf->__Vcellout__credit___05F0__count = __Vdly____Vcellout__credit___05F0__count;
    vlSelf->__PVT__credit___05Fcount[1U] = vlSelf->__Vcellout__credit___05F1__count;
    vlSelf->__PVT__credit___05Fcount[0U] = vlSelf->__Vcellout__credit___05F0__count;
    vlSelf->__PVT__recv___05Frdy = 0U;
    vlSelf->__PVT__send___05Fen = 0U;
    if (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__tile___05F8.__PVT__send_to_controller_pkt___05Fval) {
        if (((~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__tile___05F8.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                 >> 0xaU)) & (0U < vlSelf->__PVT__credit___05Fcount
                              [0U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
        if (((vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__tile___05F8.__PVT__send_to_controller_pkt___05Fmsg[6U] 
              >> 0xaU) & (0U < vlSelf->__PVT__credit___05Fcount
                          [1U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
    }
    vlSelf->__PVT__credit___05Fdecr[0U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__tile___05F8.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                                 >> 0xaU)));
    vlSelf->__PVT__credit___05Fdecr[1U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__tile___05F8.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                              >> 0xaU));
}

VL_INLINE_OPT void Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__ctrl_ring__DOT__recv_adp___05F9__0(Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__ctrl_ring__DOT__recv_adp___05F9__0\n"); );
    // Init
    CData/*1:0*/ __Vdly____Vcellout__credit___05F0__count;
    __Vdly____Vcellout__credit___05F0__count = 0;
    CData/*1:0*/ __Vdly____Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F1__count = 0;
    // Body
    __Vdly____Vcellout__credit___05F1__count = vlSelf->__Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F0__count = vlSelf->__Vcellout__credit___05F0__count;
    if (vlSymsp->TOP.cgra_test__DOT__reset) {
        __Vdly____Vcellout__credit___05F1__count = 2U;
        __Vdly____Vcellout__credit___05F0__count = 2U;
    } else {
        if ((vlSelf->__PVT__send___05Fyum[1U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [1U]))) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F1__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [1U]) & vlSelf->__PVT__credit___05Fdecr
                    [1U])) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F1__count) 
                         - (IData)(1U)));
        }
        if ((vlSelf->__PVT__send___05Fyum[0U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [0U]))) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F0__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [0U]) & vlSelf->__PVT__credit___05Fdecr
                    [0U])) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F0__count) 
                         - (IData)(1U)));
        }
    }
    vlSelf->__Vcellout__credit___05F1__count = __Vdly____Vcellout__credit___05F1__count;
    vlSelf->__Vcellout__credit___05F0__count = __Vdly____Vcellout__credit___05F0__count;
    vlSelf->__PVT__credit___05Fcount[1U] = vlSelf->__Vcellout__credit___05F1__count;
    vlSelf->__PVT__credit___05Fcount[0U] = vlSelf->__Vcellout__credit___05F0__count;
    vlSelf->__PVT__recv___05Frdy = 0U;
    vlSelf->__PVT__send___05Fen = 0U;
    if (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__tile___05F9.__PVT__send_to_controller_pkt___05Fval) {
        if (((~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__tile___05F9.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                 >> 0xaU)) & (0U < vlSelf->__PVT__credit___05Fcount
                              [0U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
        if (((vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__tile___05F9.__PVT__send_to_controller_pkt___05Fmsg[6U] 
              >> 0xaU) & (0U < vlSelf->__PVT__credit___05Fcount
                          [1U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
    }
    vlSelf->__PVT__credit___05Fdecr[0U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__tile___05F9.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                                 >> 0xaU)));
    vlSelf->__PVT__credit___05Fdecr[1U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__tile___05F9.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                              >> 0xaU));
}

VL_INLINE_OPT void Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__ctrl_ring__DOT__recv_adp___05F10__0(Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__ctrl_ring__DOT__recv_adp___05F10__0\n"); );
    // Init
    CData/*1:0*/ __Vdly____Vcellout__credit___05F0__count;
    __Vdly____Vcellout__credit___05F0__count = 0;
    CData/*1:0*/ __Vdly____Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F1__count = 0;
    // Body
    __Vdly____Vcellout__credit___05F1__count = vlSelf->__Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F0__count = vlSelf->__Vcellout__credit___05F0__count;
    if (vlSymsp->TOP.cgra_test__DOT__reset) {
        __Vdly____Vcellout__credit___05F1__count = 2U;
        __Vdly____Vcellout__credit___05F0__count = 2U;
    } else {
        if ((vlSelf->__PVT__send___05Fyum[1U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [1U]))) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F1__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [1U]) & vlSelf->__PVT__credit___05Fdecr
                    [1U])) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F1__count) 
                         - (IData)(1U)));
        }
        if ((vlSelf->__PVT__send___05Fyum[0U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [0U]))) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F0__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [0U]) & vlSelf->__PVT__credit___05Fdecr
                    [0U])) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F0__count) 
                         - (IData)(1U)));
        }
    }
    vlSelf->__Vcellout__credit___05F1__count = __Vdly____Vcellout__credit___05F1__count;
    vlSelf->__Vcellout__credit___05F0__count = __Vdly____Vcellout__credit___05F0__count;
    vlSelf->__PVT__credit___05Fcount[1U] = vlSelf->__Vcellout__credit___05F1__count;
    vlSelf->__PVT__credit___05Fcount[0U] = vlSelf->__Vcellout__credit___05F0__count;
    vlSelf->__PVT__recv___05Frdy = 0U;
    vlSelf->__PVT__send___05Fen = 0U;
    if (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__tile___05F10.__PVT__send_to_controller_pkt___05Fval) {
        if (((~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__tile___05F10.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                 >> 0xaU)) & (0U < vlSelf->__PVT__credit___05Fcount
                              [0U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
        if (((vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__tile___05F10.__PVT__send_to_controller_pkt___05Fmsg[6U] 
              >> 0xaU) & (0U < vlSelf->__PVT__credit___05Fcount
                          [1U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
    }
    vlSelf->__PVT__credit___05Fdecr[0U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__tile___05F10.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                                 >> 0xaU)));
    vlSelf->__PVT__credit___05Fdecr[1U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__tile___05F10.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                              >> 0xaU));
}

VL_INLINE_OPT void Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__ctrl_ring__DOT__recv_adp___05F11__0(Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__ctrl_ring__DOT__recv_adp___05F11__0\n"); );
    // Init
    CData/*1:0*/ __Vdly____Vcellout__credit___05F0__count;
    __Vdly____Vcellout__credit___05F0__count = 0;
    CData/*1:0*/ __Vdly____Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F1__count = 0;
    // Body
    __Vdly____Vcellout__credit___05F1__count = vlSelf->__Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F0__count = vlSelf->__Vcellout__credit___05F0__count;
    if (vlSymsp->TOP.cgra_test__DOT__reset) {
        __Vdly____Vcellout__credit___05F1__count = 2U;
        __Vdly____Vcellout__credit___05F0__count = 2U;
    } else {
        if ((vlSelf->__PVT__send___05Fyum[1U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [1U]))) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F1__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [1U]) & vlSelf->__PVT__credit___05Fdecr
                    [1U])) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F1__count) 
                         - (IData)(1U)));
        }
        if ((vlSelf->__PVT__send___05Fyum[0U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [0U]))) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F0__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [0U]) & vlSelf->__PVT__credit___05Fdecr
                    [0U])) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F0__count) 
                         - (IData)(1U)));
        }
    }
    vlSelf->__Vcellout__credit___05F1__count = __Vdly____Vcellout__credit___05F1__count;
    vlSelf->__Vcellout__credit___05F0__count = __Vdly____Vcellout__credit___05F0__count;
    vlSelf->__PVT__credit___05Fcount[1U] = vlSelf->__Vcellout__credit___05F1__count;
    vlSelf->__PVT__credit___05Fcount[0U] = vlSelf->__Vcellout__credit___05F0__count;
    vlSelf->__PVT__recv___05Frdy = 0U;
    vlSelf->__PVT__send___05Fen = 0U;
    if (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__tile___05F11.__PVT__send_to_controller_pkt___05Fval) {
        if (((~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__tile___05F11.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                 >> 0xaU)) & (0U < vlSelf->__PVT__credit___05Fcount
                              [0U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
        if (((vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__tile___05F11.__PVT__send_to_controller_pkt___05Fmsg[6U] 
              >> 0xaU) & (0U < vlSelf->__PVT__credit___05Fcount
                          [1U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
    }
    vlSelf->__PVT__credit___05Fdecr[0U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__tile___05F11.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                                 >> 0xaU)));
    vlSelf->__PVT__credit___05Fdecr[1U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__tile___05F11.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                              >> 0xaU));
}

VL_INLINE_OPT void Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__ctrl_ring__DOT__recv_adp___05F12__0(Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__ctrl_ring__DOT__recv_adp___05F12__0\n"); );
    // Init
    CData/*1:0*/ __Vdly____Vcellout__credit___05F0__count;
    __Vdly____Vcellout__credit___05F0__count = 0;
    CData/*1:0*/ __Vdly____Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F1__count = 0;
    // Body
    __Vdly____Vcellout__credit___05F1__count = vlSelf->__Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F0__count = vlSelf->__Vcellout__credit___05F0__count;
    if (vlSymsp->TOP.cgra_test__DOT__reset) {
        __Vdly____Vcellout__credit___05F1__count = 2U;
        __Vdly____Vcellout__credit___05F0__count = 2U;
    } else {
        if ((vlSelf->__PVT__send___05Fyum[1U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [1U]))) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F1__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [1U]) & vlSelf->__PVT__credit___05Fdecr
                    [1U])) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F1__count) 
                         - (IData)(1U)));
        }
        if ((vlSelf->__PVT__send___05Fyum[0U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [0U]))) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F0__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [0U]) & vlSelf->__PVT__credit___05Fdecr
                    [0U])) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F0__count) 
                         - (IData)(1U)));
        }
    }
    vlSelf->__Vcellout__credit___05F1__count = __Vdly____Vcellout__credit___05F1__count;
    vlSelf->__Vcellout__credit___05F0__count = __Vdly____Vcellout__credit___05F0__count;
    vlSelf->__PVT__credit___05Fcount[1U] = vlSelf->__Vcellout__credit___05F1__count;
    vlSelf->__PVT__credit___05Fcount[0U] = vlSelf->__Vcellout__credit___05F0__count;
    vlSelf->__PVT__recv___05Frdy = 0U;
    vlSelf->__PVT__send___05Fen = 0U;
    if (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__tile___05F12.__PVT__send_to_controller_pkt___05Fval) {
        if (((~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__tile___05F12.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                 >> 0xaU)) & (0U < vlSelf->__PVT__credit___05Fcount
                              [0U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
        if (((vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__tile___05F12.__PVT__send_to_controller_pkt___05Fmsg[6U] 
              >> 0xaU) & (0U < vlSelf->__PVT__credit___05Fcount
                          [1U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
    }
    vlSelf->__PVT__credit___05Fdecr[0U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__tile___05F12.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                                 >> 0xaU)));
    vlSelf->__PVT__credit___05Fdecr[1U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__tile___05F12.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                              >> 0xaU));
}

VL_INLINE_OPT void Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__ctrl_ring__DOT__recv_adp___05F13__0(Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__ctrl_ring__DOT__recv_adp___05F13__0\n"); );
    // Init
    CData/*1:0*/ __Vdly____Vcellout__credit___05F0__count;
    __Vdly____Vcellout__credit___05F0__count = 0;
    CData/*1:0*/ __Vdly____Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F1__count = 0;
    // Body
    __Vdly____Vcellout__credit___05F1__count = vlSelf->__Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F0__count = vlSelf->__Vcellout__credit___05F0__count;
    if (vlSymsp->TOP.cgra_test__DOT__reset) {
        __Vdly____Vcellout__credit___05F1__count = 2U;
        __Vdly____Vcellout__credit___05F0__count = 2U;
    } else {
        if ((vlSelf->__PVT__send___05Fyum[1U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [1U]))) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F1__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [1U]) & vlSelf->__PVT__credit___05Fdecr
                    [1U])) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F1__count) 
                         - (IData)(1U)));
        }
        if ((vlSelf->__PVT__send___05Fyum[0U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [0U]))) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F0__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [0U]) & vlSelf->__PVT__credit___05Fdecr
                    [0U])) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F0__count) 
                         - (IData)(1U)));
        }
    }
    vlSelf->__Vcellout__credit___05F1__count = __Vdly____Vcellout__credit___05F1__count;
    vlSelf->__Vcellout__credit___05F0__count = __Vdly____Vcellout__credit___05F0__count;
    vlSelf->__PVT__credit___05Fcount[1U] = vlSelf->__Vcellout__credit___05F1__count;
    vlSelf->__PVT__credit___05Fcount[0U] = vlSelf->__Vcellout__credit___05F0__count;
    vlSelf->__PVT__recv___05Frdy = 0U;
    vlSelf->__PVT__send___05Fen = 0U;
    if (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__tile___05F13.__PVT__send_to_controller_pkt___05Fval) {
        if (((~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__tile___05F13.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                 >> 0xaU)) & (0U < vlSelf->__PVT__credit___05Fcount
                              [0U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
        if (((vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__tile___05F13.__PVT__send_to_controller_pkt___05Fmsg[6U] 
              >> 0xaU) & (0U < vlSelf->__PVT__credit___05Fcount
                          [1U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
    }
    vlSelf->__PVT__credit___05Fdecr[0U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__tile___05F13.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                                 >> 0xaU)));
    vlSelf->__PVT__credit___05Fdecr[1U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__tile___05F13.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                              >> 0xaU));
}

VL_INLINE_OPT void Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__ctrl_ring__DOT__recv_adp___05F14__0(Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__ctrl_ring__DOT__recv_adp___05F14__0\n"); );
    // Init
    CData/*1:0*/ __Vdly____Vcellout__credit___05F0__count;
    __Vdly____Vcellout__credit___05F0__count = 0;
    CData/*1:0*/ __Vdly____Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F1__count = 0;
    // Body
    __Vdly____Vcellout__credit___05F1__count = vlSelf->__Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F0__count = vlSelf->__Vcellout__credit___05F0__count;
    if (vlSymsp->TOP.cgra_test__DOT__reset) {
        __Vdly____Vcellout__credit___05F1__count = 2U;
        __Vdly____Vcellout__credit___05F0__count = 2U;
    } else {
        if ((vlSelf->__PVT__send___05Fyum[1U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [1U]))) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F1__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [1U]) & vlSelf->__PVT__credit___05Fdecr
                    [1U])) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F1__count) 
                         - (IData)(1U)));
        }
        if ((vlSelf->__PVT__send___05Fyum[0U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [0U]))) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F0__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [0U]) & vlSelf->__PVT__credit___05Fdecr
                    [0U])) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F0__count) 
                         - (IData)(1U)));
        }
    }
    vlSelf->__Vcellout__credit___05F1__count = __Vdly____Vcellout__credit___05F1__count;
    vlSelf->__Vcellout__credit___05F0__count = __Vdly____Vcellout__credit___05F0__count;
    vlSelf->__PVT__credit___05Fcount[1U] = vlSelf->__Vcellout__credit___05F1__count;
    vlSelf->__PVT__credit___05Fcount[0U] = vlSelf->__Vcellout__credit___05F0__count;
    vlSelf->__PVT__recv___05Frdy = 0U;
    vlSelf->__PVT__send___05Fen = 0U;
    if (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__tile___05F14.__PVT__send_to_controller_pkt___05Fval) {
        if (((~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__tile___05F14.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                 >> 0xaU)) & (0U < vlSelf->__PVT__credit___05Fcount
                              [0U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
        if (((vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__tile___05F14.__PVT__send_to_controller_pkt___05Fmsg[6U] 
              >> 0xaU) & (0U < vlSelf->__PVT__credit___05Fcount
                          [1U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
    }
    vlSelf->__PVT__credit___05Fdecr[0U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__tile___05F14.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                                 >> 0xaU)));
    vlSelf->__PVT__credit___05Fdecr[1U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__tile___05F14.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                              >> 0xaU));
}

VL_INLINE_OPT void Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__ctrl_ring__DOT__recv_adp___05F15__0(Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__ctrl_ring__DOT__recv_adp___05F15__0\n"); );
    // Init
    CData/*1:0*/ __Vdly____Vcellout__credit___05F0__count;
    __Vdly____Vcellout__credit___05F0__count = 0;
    CData/*1:0*/ __Vdly____Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F1__count = 0;
    // Body
    __Vdly____Vcellout__credit___05F1__count = vlSelf->__Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F0__count = vlSelf->__Vcellout__credit___05F0__count;
    if (vlSymsp->TOP.cgra_test__DOT__reset) {
        __Vdly____Vcellout__credit___05F1__count = 2U;
        __Vdly____Vcellout__credit___05F0__count = 2U;
    } else {
        if ((vlSelf->__PVT__send___05Fyum[1U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [1U]))) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F1__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [1U]) & vlSelf->__PVT__credit___05Fdecr
                    [1U])) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F1__count) 
                         - (IData)(1U)));
        }
        if ((vlSelf->__PVT__send___05Fyum[0U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [0U]))) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F0__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [0U]) & vlSelf->__PVT__credit___05Fdecr
                    [0U])) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F0__count) 
                         - (IData)(1U)));
        }
    }
    vlSelf->__Vcellout__credit___05F1__count = __Vdly____Vcellout__credit___05F1__count;
    vlSelf->__Vcellout__credit___05F0__count = __Vdly____Vcellout__credit___05F0__count;
    vlSelf->__PVT__credit___05Fcount[1U] = vlSelf->__Vcellout__credit___05F1__count;
    vlSelf->__PVT__credit___05Fcount[0U] = vlSelf->__Vcellout__credit___05F0__count;
    vlSelf->__PVT__recv___05Frdy = 0U;
    vlSelf->__PVT__send___05Fen = 0U;
    if (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__tile___05F15.__PVT__send_to_controller_pkt___05Fval) {
        if (((~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__tile___05F15.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                 >> 0xaU)) & (0U < vlSelf->__PVT__credit___05Fcount
                              [0U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
        if (((vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__tile___05F15.__PVT__send_to_controller_pkt___05Fmsg[6U] 
              >> 0xaU) & (0U < vlSelf->__PVT__credit___05Fcount
                          [1U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
    }
    vlSelf->__PVT__credit___05Fdecr[0U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__tile___05F15.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                                 >> 0xaU)));
    vlSelf->__PVT__credit___05Fdecr[1U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__tile___05F15.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                              >> 0xaU));
}

VL_INLINE_OPT void Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__ctrl_ring__DOT__recv_adp___05F16__0(Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__ctrl_ring__DOT__recv_adp___05F16__0\n"); );
    // Init
    CData/*1:0*/ __Vdly____Vcellout__credit___05F0__count;
    __Vdly____Vcellout__credit___05F0__count = 0;
    CData/*1:0*/ __Vdly____Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F1__count = 0;
    // Body
    __Vdly____Vcellout__credit___05F1__count = vlSelf->__Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F0__count = vlSelf->__Vcellout__credit___05F0__count;
    if (vlSymsp->TOP.cgra_test__DOT__reset) {
        __Vdly____Vcellout__credit___05F1__count = 2U;
        __Vdly____Vcellout__credit___05F0__count = 2U;
    } else {
        if ((vlSelf->__PVT__send___05Fyum[1U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [1U]))) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F1__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [1U]) & vlSelf->__PVT__credit___05Fdecr
                    [1U])) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F1__count) 
                         - (IData)(1U)));
        }
        if ((vlSelf->__PVT__send___05Fyum[0U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [0U]))) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F0__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [0U]) & vlSelf->__PVT__credit___05Fdecr
                    [0U])) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F0__count) 
                         - (IData)(1U)));
        }
    }
    vlSelf->__Vcellout__credit___05F1__count = __Vdly____Vcellout__credit___05F1__count;
    vlSelf->__Vcellout__credit___05F0__count = __Vdly____Vcellout__credit___05F0__count;
    vlSelf->__PVT__credit___05Fcount[1U] = vlSelf->__Vcellout__credit___05F1__count;
    vlSelf->__PVT__credit___05Fcount[0U] = vlSelf->__Vcellout__credit___05F0__count;
}

VL_INLINE_OPT void Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__ctrl_ring__DOT__recv_adp___05F16__1(Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__ctrl_ring__DOT__recv_adp___05F16__1\n"); );
    // Body
    vlSelf->__PVT__send___05Fen = 0U;
    vlSelf->__PVT__recv___05Frdy = 0U;
    if (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__controller___05Fsend_to_ctrl_ring_pkt___05Fval) {
        if (((~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__controller___05Fsend_to_ctrl_ring_pkt___05Fmsg[6U] 
                 >> 0xaU)) & (0U < vlSelf->__PVT__credit___05Fcount
                              [0U]))) {
            vlSelf->__PVT__send___05Fen = 1U;
            vlSelf->__PVT__recv___05Frdy = 1U;
        }
        if (((vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__controller___05Fsend_to_ctrl_ring_pkt___05Fmsg[6U] 
              >> 0xaU) & (0U < vlSelf->__PVT__credit___05Fcount
                          [1U]))) {
            vlSelf->__PVT__send___05Fen = 1U;
            vlSelf->__PVT__recv___05Frdy = 1U;
        }
    }
    vlSelf->__PVT__credit___05Fdecr[0U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__controller___05Fsend_to_ctrl_ring_pkt___05Fmsg[6U] 
                                                 >> 0xaU)));
    vlSelf->__PVT__credit___05Fdecr[1U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__controller___05Fsend_to_ctrl_ring_pkt___05Fmsg[6U] 
                                              >> 0xaU));
}

VL_INLINE_OPT void Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__ctrl_ring__DOT__recv_adp___05F0__0(Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__ctrl_ring__DOT__recv_adp___05F0__0\n"); );
    // Init
    CData/*1:0*/ __Vdly____Vcellout__credit___05F0__count;
    __Vdly____Vcellout__credit___05F0__count = 0;
    CData/*1:0*/ __Vdly____Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F1__count = 0;
    // Body
    __Vdly____Vcellout__credit___05F1__count = vlSelf->__Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F0__count = vlSelf->__Vcellout__credit___05F0__count;
    if (vlSymsp->TOP.cgra_test__DOT__reset) {
        __Vdly____Vcellout__credit___05F1__count = 2U;
        __Vdly____Vcellout__credit___05F0__count = 2U;
    } else {
        if ((vlSelf->__PVT__send___05Fyum[1U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [1U]))) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F1__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [1U]) & vlSelf->__PVT__credit___05Fdecr
                    [1U])) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F1__count) 
                         - (IData)(1U)));
        }
        if ((vlSelf->__PVT__send___05Fyum[0U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [0U]))) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F0__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [0U]) & vlSelf->__PVT__credit___05Fdecr
                    [0U])) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F0__count) 
                         - (IData)(1U)));
        }
    }
    vlSelf->__Vcellout__credit___05F1__count = __Vdly____Vcellout__credit___05F1__count;
    vlSelf->__Vcellout__credit___05F0__count = __Vdly____Vcellout__credit___05F0__count;
    vlSelf->__PVT__credit___05Fcount[1U] = vlSelf->__Vcellout__credit___05F1__count;
    vlSelf->__PVT__credit___05Fcount[0U] = vlSelf->__Vcellout__credit___05F0__count;
    vlSelf->__PVT__recv___05Frdy = 0U;
    vlSelf->__PVT__send___05Fen = 0U;
    if (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__tile___05F0.__PVT__send_to_controller_pkt___05Fval) {
        if (((~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__tile___05F0.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                 >> 0xaU)) & (0U < vlSelf->__PVT__credit___05Fcount
                              [0U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
        if (((vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__tile___05F0.__PVT__send_to_controller_pkt___05Fmsg[6U] 
              >> 0xaU) & (0U < vlSelf->__PVT__credit___05Fcount
                          [1U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
    }
    vlSelf->__PVT__credit___05Fdecr[0U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__tile___05F0.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                                 >> 0xaU)));
    vlSelf->__PVT__credit___05Fdecr[1U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__tile___05F0.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                              >> 0xaU));
}

VL_INLINE_OPT void Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__ctrl_ring__DOT__recv_adp___05F1__0(Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__ctrl_ring__DOT__recv_adp___05F1__0\n"); );
    // Init
    CData/*1:0*/ __Vdly____Vcellout__credit___05F0__count;
    __Vdly____Vcellout__credit___05F0__count = 0;
    CData/*1:0*/ __Vdly____Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F1__count = 0;
    // Body
    __Vdly____Vcellout__credit___05F1__count = vlSelf->__Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F0__count = vlSelf->__Vcellout__credit___05F0__count;
    if (vlSymsp->TOP.cgra_test__DOT__reset) {
        __Vdly____Vcellout__credit___05F1__count = 2U;
        __Vdly____Vcellout__credit___05F0__count = 2U;
    } else {
        if ((vlSelf->__PVT__send___05Fyum[1U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [1U]))) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F1__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [1U]) & vlSelf->__PVT__credit___05Fdecr
                    [1U])) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F1__count) 
                         - (IData)(1U)));
        }
        if ((vlSelf->__PVT__send___05Fyum[0U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [0U]))) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F0__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [0U]) & vlSelf->__PVT__credit___05Fdecr
                    [0U])) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F0__count) 
                         - (IData)(1U)));
        }
    }
    vlSelf->__Vcellout__credit___05F1__count = __Vdly____Vcellout__credit___05F1__count;
    vlSelf->__Vcellout__credit___05F0__count = __Vdly____Vcellout__credit___05F0__count;
    vlSelf->__PVT__credit___05Fcount[1U] = vlSelf->__Vcellout__credit___05F1__count;
    vlSelf->__PVT__credit___05Fcount[0U] = vlSelf->__Vcellout__credit___05F0__count;
    vlSelf->__PVT__recv___05Frdy = 0U;
    vlSelf->__PVT__send___05Fen = 0U;
    if (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__tile___05F1.__PVT__send_to_controller_pkt___05Fval) {
        if (((~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__tile___05F1.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                 >> 0xaU)) & (0U < vlSelf->__PVT__credit___05Fcount
                              [0U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
        if (((vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__tile___05F1.__PVT__send_to_controller_pkt___05Fmsg[6U] 
              >> 0xaU) & (0U < vlSelf->__PVT__credit___05Fcount
                          [1U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
    }
    vlSelf->__PVT__credit___05Fdecr[0U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__tile___05F1.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                                 >> 0xaU)));
    vlSelf->__PVT__credit___05Fdecr[1U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__tile___05F1.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                              >> 0xaU));
}

VL_INLINE_OPT void Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__ctrl_ring__DOT__recv_adp___05F2__0(Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__ctrl_ring__DOT__recv_adp___05F2__0\n"); );
    // Init
    CData/*1:0*/ __Vdly____Vcellout__credit___05F0__count;
    __Vdly____Vcellout__credit___05F0__count = 0;
    CData/*1:0*/ __Vdly____Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F1__count = 0;
    // Body
    __Vdly____Vcellout__credit___05F1__count = vlSelf->__Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F0__count = vlSelf->__Vcellout__credit___05F0__count;
    if (vlSymsp->TOP.cgra_test__DOT__reset) {
        __Vdly____Vcellout__credit___05F1__count = 2U;
        __Vdly____Vcellout__credit___05F0__count = 2U;
    } else {
        if ((vlSelf->__PVT__send___05Fyum[1U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [1U]))) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F1__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [1U]) & vlSelf->__PVT__credit___05Fdecr
                    [1U])) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F1__count) 
                         - (IData)(1U)));
        }
        if ((vlSelf->__PVT__send___05Fyum[0U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [0U]))) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F0__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [0U]) & vlSelf->__PVT__credit___05Fdecr
                    [0U])) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F0__count) 
                         - (IData)(1U)));
        }
    }
    vlSelf->__Vcellout__credit___05F1__count = __Vdly____Vcellout__credit___05F1__count;
    vlSelf->__Vcellout__credit___05F0__count = __Vdly____Vcellout__credit___05F0__count;
    vlSelf->__PVT__credit___05Fcount[1U] = vlSelf->__Vcellout__credit___05F1__count;
    vlSelf->__PVT__credit___05Fcount[0U] = vlSelf->__Vcellout__credit___05F0__count;
    vlSelf->__PVT__recv___05Frdy = 0U;
    vlSelf->__PVT__send___05Fen = 0U;
    if (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__tile___05F2.__PVT__send_to_controller_pkt___05Fval) {
        if (((~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__tile___05F2.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                 >> 0xaU)) & (0U < vlSelf->__PVT__credit___05Fcount
                              [0U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
        if (((vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__tile___05F2.__PVT__send_to_controller_pkt___05Fmsg[6U] 
              >> 0xaU) & (0U < vlSelf->__PVT__credit___05Fcount
                          [1U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
    }
    vlSelf->__PVT__credit___05Fdecr[0U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__tile___05F2.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                                 >> 0xaU)));
    vlSelf->__PVT__credit___05Fdecr[1U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__tile___05F2.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                              >> 0xaU));
}

VL_INLINE_OPT void Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__ctrl_ring__DOT__recv_adp___05F3__0(Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__ctrl_ring__DOT__recv_adp___05F3__0\n"); );
    // Init
    CData/*1:0*/ __Vdly____Vcellout__credit___05F0__count;
    __Vdly____Vcellout__credit___05F0__count = 0;
    CData/*1:0*/ __Vdly____Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F1__count = 0;
    // Body
    __Vdly____Vcellout__credit___05F1__count = vlSelf->__Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F0__count = vlSelf->__Vcellout__credit___05F0__count;
    if (vlSymsp->TOP.cgra_test__DOT__reset) {
        __Vdly____Vcellout__credit___05F1__count = 2U;
        __Vdly____Vcellout__credit___05F0__count = 2U;
    } else {
        if ((vlSelf->__PVT__send___05Fyum[1U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [1U]))) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F1__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [1U]) & vlSelf->__PVT__credit___05Fdecr
                    [1U])) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F1__count) 
                         - (IData)(1U)));
        }
        if ((vlSelf->__PVT__send___05Fyum[0U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [0U]))) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F0__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [0U]) & vlSelf->__PVT__credit___05Fdecr
                    [0U])) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F0__count) 
                         - (IData)(1U)));
        }
    }
    vlSelf->__Vcellout__credit___05F1__count = __Vdly____Vcellout__credit___05F1__count;
    vlSelf->__Vcellout__credit___05F0__count = __Vdly____Vcellout__credit___05F0__count;
    vlSelf->__PVT__credit___05Fcount[1U] = vlSelf->__Vcellout__credit___05F1__count;
    vlSelf->__PVT__credit___05Fcount[0U] = vlSelf->__Vcellout__credit___05F0__count;
    vlSelf->__PVT__recv___05Frdy = 0U;
    vlSelf->__PVT__send___05Fen = 0U;
    if (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__tile___05F3.__PVT__send_to_controller_pkt___05Fval) {
        if (((~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__tile___05F3.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                 >> 0xaU)) & (0U < vlSelf->__PVT__credit___05Fcount
                              [0U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
        if (((vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__tile___05F3.__PVT__send_to_controller_pkt___05Fmsg[6U] 
              >> 0xaU) & (0U < vlSelf->__PVT__credit___05Fcount
                          [1U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
    }
    vlSelf->__PVT__credit___05Fdecr[0U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__tile___05F3.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                                 >> 0xaU)));
    vlSelf->__PVT__credit___05Fdecr[1U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__tile___05F3.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                              >> 0xaU));
}

VL_INLINE_OPT void Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__ctrl_ring__DOT__recv_adp___05F4__0(Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__ctrl_ring__DOT__recv_adp___05F4__0\n"); );
    // Init
    CData/*1:0*/ __Vdly____Vcellout__credit___05F0__count;
    __Vdly____Vcellout__credit___05F0__count = 0;
    CData/*1:0*/ __Vdly____Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F1__count = 0;
    // Body
    __Vdly____Vcellout__credit___05F1__count = vlSelf->__Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F0__count = vlSelf->__Vcellout__credit___05F0__count;
    if (vlSymsp->TOP.cgra_test__DOT__reset) {
        __Vdly____Vcellout__credit___05F1__count = 2U;
        __Vdly____Vcellout__credit___05F0__count = 2U;
    } else {
        if ((vlSelf->__PVT__send___05Fyum[1U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [1U]))) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F1__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [1U]) & vlSelf->__PVT__credit___05Fdecr
                    [1U])) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F1__count) 
                         - (IData)(1U)));
        }
        if ((vlSelf->__PVT__send___05Fyum[0U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [0U]))) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F0__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [0U]) & vlSelf->__PVT__credit___05Fdecr
                    [0U])) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F0__count) 
                         - (IData)(1U)));
        }
    }
    vlSelf->__Vcellout__credit___05F1__count = __Vdly____Vcellout__credit___05F1__count;
    vlSelf->__Vcellout__credit___05F0__count = __Vdly____Vcellout__credit___05F0__count;
    vlSelf->__PVT__credit___05Fcount[1U] = vlSelf->__Vcellout__credit___05F1__count;
    vlSelf->__PVT__credit___05Fcount[0U] = vlSelf->__Vcellout__credit___05F0__count;
    vlSelf->__PVT__recv___05Frdy = 0U;
    vlSelf->__PVT__send___05Fen = 0U;
    if (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__tile___05F4.__PVT__send_to_controller_pkt___05Fval) {
        if (((~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__tile___05F4.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                 >> 0xaU)) & (0U < vlSelf->__PVT__credit___05Fcount
                              [0U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
        if (((vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__tile___05F4.__PVT__send_to_controller_pkt___05Fmsg[6U] 
              >> 0xaU) & (0U < vlSelf->__PVT__credit___05Fcount
                          [1U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
    }
    vlSelf->__PVT__credit___05Fdecr[0U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__tile___05F4.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                                 >> 0xaU)));
    vlSelf->__PVT__credit___05Fdecr[1U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__tile___05F4.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                              >> 0xaU));
}

VL_INLINE_OPT void Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__ctrl_ring__DOT__recv_adp___05F5__0(Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__ctrl_ring__DOT__recv_adp___05F5__0\n"); );
    // Init
    CData/*1:0*/ __Vdly____Vcellout__credit___05F0__count;
    __Vdly____Vcellout__credit___05F0__count = 0;
    CData/*1:0*/ __Vdly____Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F1__count = 0;
    // Body
    __Vdly____Vcellout__credit___05F1__count = vlSelf->__Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F0__count = vlSelf->__Vcellout__credit___05F0__count;
    if (vlSymsp->TOP.cgra_test__DOT__reset) {
        __Vdly____Vcellout__credit___05F1__count = 2U;
        __Vdly____Vcellout__credit___05F0__count = 2U;
    } else {
        if ((vlSelf->__PVT__send___05Fyum[1U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [1U]))) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F1__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [1U]) & vlSelf->__PVT__credit___05Fdecr
                    [1U])) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F1__count) 
                         - (IData)(1U)));
        }
        if ((vlSelf->__PVT__send___05Fyum[0U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [0U]))) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F0__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [0U]) & vlSelf->__PVT__credit___05Fdecr
                    [0U])) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F0__count) 
                         - (IData)(1U)));
        }
    }
    vlSelf->__Vcellout__credit___05F1__count = __Vdly____Vcellout__credit___05F1__count;
    vlSelf->__Vcellout__credit___05F0__count = __Vdly____Vcellout__credit___05F0__count;
    vlSelf->__PVT__credit___05Fcount[1U] = vlSelf->__Vcellout__credit___05F1__count;
    vlSelf->__PVT__credit___05Fcount[0U] = vlSelf->__Vcellout__credit___05F0__count;
    vlSelf->__PVT__recv___05Frdy = 0U;
    vlSelf->__PVT__send___05Fen = 0U;
    if (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__tile___05F5.__PVT__send_to_controller_pkt___05Fval) {
        if (((~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__tile___05F5.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                 >> 0xaU)) & (0U < vlSelf->__PVT__credit___05Fcount
                              [0U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
        if (((vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__tile___05F5.__PVT__send_to_controller_pkt___05Fmsg[6U] 
              >> 0xaU) & (0U < vlSelf->__PVT__credit___05Fcount
                          [1U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
    }
    vlSelf->__PVT__credit___05Fdecr[0U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__tile___05F5.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                                 >> 0xaU)));
    vlSelf->__PVT__credit___05Fdecr[1U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__tile___05F5.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                              >> 0xaU));
}

VL_INLINE_OPT void Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__ctrl_ring__DOT__recv_adp___05F6__0(Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__ctrl_ring__DOT__recv_adp___05F6__0\n"); );
    // Init
    CData/*1:0*/ __Vdly____Vcellout__credit___05F0__count;
    __Vdly____Vcellout__credit___05F0__count = 0;
    CData/*1:0*/ __Vdly____Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F1__count = 0;
    // Body
    __Vdly____Vcellout__credit___05F1__count = vlSelf->__Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F0__count = vlSelf->__Vcellout__credit___05F0__count;
    if (vlSymsp->TOP.cgra_test__DOT__reset) {
        __Vdly____Vcellout__credit___05F1__count = 2U;
        __Vdly____Vcellout__credit___05F0__count = 2U;
    } else {
        if ((vlSelf->__PVT__send___05Fyum[1U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [1U]))) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F1__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [1U]) & vlSelf->__PVT__credit___05Fdecr
                    [1U])) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F1__count) 
                         - (IData)(1U)));
        }
        if ((vlSelf->__PVT__send___05Fyum[0U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [0U]))) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F0__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [0U]) & vlSelf->__PVT__credit___05Fdecr
                    [0U])) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F0__count) 
                         - (IData)(1U)));
        }
    }
    vlSelf->__Vcellout__credit___05F1__count = __Vdly____Vcellout__credit___05F1__count;
    vlSelf->__Vcellout__credit___05F0__count = __Vdly____Vcellout__credit___05F0__count;
    vlSelf->__PVT__credit___05Fcount[1U] = vlSelf->__Vcellout__credit___05F1__count;
    vlSelf->__PVT__credit___05Fcount[0U] = vlSelf->__Vcellout__credit___05F0__count;
    vlSelf->__PVT__recv___05Frdy = 0U;
    vlSelf->__PVT__send___05Fen = 0U;
    if (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__tile___05F6.__PVT__send_to_controller_pkt___05Fval) {
        if (((~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__tile___05F6.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                 >> 0xaU)) & (0U < vlSelf->__PVT__credit___05Fcount
                              [0U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
        if (((vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__tile___05F6.__PVT__send_to_controller_pkt___05Fmsg[6U] 
              >> 0xaU) & (0U < vlSelf->__PVT__credit___05Fcount
                          [1U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
    }
    vlSelf->__PVT__credit___05Fdecr[0U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__tile___05F6.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                                 >> 0xaU)));
    vlSelf->__PVT__credit___05Fdecr[1U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__tile___05F6.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                              >> 0xaU));
}

VL_INLINE_OPT void Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__ctrl_ring__DOT__recv_adp___05F7__0(Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__ctrl_ring__DOT__recv_adp___05F7__0\n"); );
    // Init
    CData/*1:0*/ __Vdly____Vcellout__credit___05F0__count;
    __Vdly____Vcellout__credit___05F0__count = 0;
    CData/*1:0*/ __Vdly____Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F1__count = 0;
    // Body
    __Vdly____Vcellout__credit___05F1__count = vlSelf->__Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F0__count = vlSelf->__Vcellout__credit___05F0__count;
    if (vlSymsp->TOP.cgra_test__DOT__reset) {
        __Vdly____Vcellout__credit___05F1__count = 2U;
        __Vdly____Vcellout__credit___05F0__count = 2U;
    } else {
        if ((vlSelf->__PVT__send___05Fyum[1U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [1U]))) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F1__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [1U]) & vlSelf->__PVT__credit___05Fdecr
                    [1U])) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F1__count) 
                         - (IData)(1U)));
        }
        if ((vlSelf->__PVT__send___05Fyum[0U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [0U]))) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F0__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [0U]) & vlSelf->__PVT__credit___05Fdecr
                    [0U])) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F0__count) 
                         - (IData)(1U)));
        }
    }
    vlSelf->__Vcellout__credit___05F1__count = __Vdly____Vcellout__credit___05F1__count;
    vlSelf->__Vcellout__credit___05F0__count = __Vdly____Vcellout__credit___05F0__count;
    vlSelf->__PVT__credit___05Fcount[1U] = vlSelf->__Vcellout__credit___05F1__count;
    vlSelf->__PVT__credit___05Fcount[0U] = vlSelf->__Vcellout__credit___05F0__count;
    vlSelf->__PVT__recv___05Frdy = 0U;
    vlSelf->__PVT__send___05Fen = 0U;
    if (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__tile___05F7.__PVT__send_to_controller_pkt___05Fval) {
        if (((~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__tile___05F7.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                 >> 0xaU)) & (0U < vlSelf->__PVT__credit___05Fcount
                              [0U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
        if (((vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__tile___05F7.__PVT__send_to_controller_pkt___05Fmsg[6U] 
              >> 0xaU) & (0U < vlSelf->__PVT__credit___05Fcount
                          [1U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
    }
    vlSelf->__PVT__credit___05Fdecr[0U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__tile___05F7.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                                 >> 0xaU)));
    vlSelf->__PVT__credit___05Fdecr[1U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__tile___05F7.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                              >> 0xaU));
}

VL_INLINE_OPT void Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__ctrl_ring__DOT__recv_adp___05F8__0(Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__ctrl_ring__DOT__recv_adp___05F8__0\n"); );
    // Init
    CData/*1:0*/ __Vdly____Vcellout__credit___05F0__count;
    __Vdly____Vcellout__credit___05F0__count = 0;
    CData/*1:0*/ __Vdly____Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F1__count = 0;
    // Body
    __Vdly____Vcellout__credit___05F1__count = vlSelf->__Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F0__count = vlSelf->__Vcellout__credit___05F0__count;
    if (vlSymsp->TOP.cgra_test__DOT__reset) {
        __Vdly____Vcellout__credit___05F1__count = 2U;
        __Vdly____Vcellout__credit___05F0__count = 2U;
    } else {
        if ((vlSelf->__PVT__send___05Fyum[1U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [1U]))) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F1__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [1U]) & vlSelf->__PVT__credit___05Fdecr
                    [1U])) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F1__count) 
                         - (IData)(1U)));
        }
        if ((vlSelf->__PVT__send___05Fyum[0U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [0U]))) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F0__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [0U]) & vlSelf->__PVT__credit___05Fdecr
                    [0U])) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F0__count) 
                         - (IData)(1U)));
        }
    }
    vlSelf->__Vcellout__credit___05F1__count = __Vdly____Vcellout__credit___05F1__count;
    vlSelf->__Vcellout__credit___05F0__count = __Vdly____Vcellout__credit___05F0__count;
    vlSelf->__PVT__credit___05Fcount[1U] = vlSelf->__Vcellout__credit___05F1__count;
    vlSelf->__PVT__credit___05Fcount[0U] = vlSelf->__Vcellout__credit___05F0__count;
    vlSelf->__PVT__recv___05Frdy = 0U;
    vlSelf->__PVT__send___05Fen = 0U;
    if (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__tile___05F8.__PVT__send_to_controller_pkt___05Fval) {
        if (((~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__tile___05F8.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                 >> 0xaU)) & (0U < vlSelf->__PVT__credit___05Fcount
                              [0U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
        if (((vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__tile___05F8.__PVT__send_to_controller_pkt___05Fmsg[6U] 
              >> 0xaU) & (0U < vlSelf->__PVT__credit___05Fcount
                          [1U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
    }
    vlSelf->__PVT__credit___05Fdecr[0U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__tile___05F8.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                                 >> 0xaU)));
    vlSelf->__PVT__credit___05Fdecr[1U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__tile___05F8.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                              >> 0xaU));
}

VL_INLINE_OPT void Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__ctrl_ring__DOT__recv_adp___05F9__0(Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__ctrl_ring__DOT__recv_adp___05F9__0\n"); );
    // Init
    CData/*1:0*/ __Vdly____Vcellout__credit___05F0__count;
    __Vdly____Vcellout__credit___05F0__count = 0;
    CData/*1:0*/ __Vdly____Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F1__count = 0;
    // Body
    __Vdly____Vcellout__credit___05F1__count = vlSelf->__Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F0__count = vlSelf->__Vcellout__credit___05F0__count;
    if (vlSymsp->TOP.cgra_test__DOT__reset) {
        __Vdly____Vcellout__credit___05F1__count = 2U;
        __Vdly____Vcellout__credit___05F0__count = 2U;
    } else {
        if ((vlSelf->__PVT__send___05Fyum[1U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [1U]))) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F1__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [1U]) & vlSelf->__PVT__credit___05Fdecr
                    [1U])) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F1__count) 
                         - (IData)(1U)));
        }
        if ((vlSelf->__PVT__send___05Fyum[0U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [0U]))) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F0__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [0U]) & vlSelf->__PVT__credit___05Fdecr
                    [0U])) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F0__count) 
                         - (IData)(1U)));
        }
    }
    vlSelf->__Vcellout__credit___05F1__count = __Vdly____Vcellout__credit___05F1__count;
    vlSelf->__Vcellout__credit___05F0__count = __Vdly____Vcellout__credit___05F0__count;
    vlSelf->__PVT__credit___05Fcount[1U] = vlSelf->__Vcellout__credit___05F1__count;
    vlSelf->__PVT__credit___05Fcount[0U] = vlSelf->__Vcellout__credit___05F0__count;
    vlSelf->__PVT__recv___05Frdy = 0U;
    vlSelf->__PVT__send___05Fen = 0U;
    if (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__tile___05F9.__PVT__send_to_controller_pkt___05Fval) {
        if (((~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__tile___05F9.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                 >> 0xaU)) & (0U < vlSelf->__PVT__credit___05Fcount
                              [0U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
        if (((vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__tile___05F9.__PVT__send_to_controller_pkt___05Fmsg[6U] 
              >> 0xaU) & (0U < vlSelf->__PVT__credit___05Fcount
                          [1U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
    }
    vlSelf->__PVT__credit___05Fdecr[0U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__tile___05F9.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                                 >> 0xaU)));
    vlSelf->__PVT__credit___05Fdecr[1U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__tile___05F9.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                              >> 0xaU));
}

VL_INLINE_OPT void Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__ctrl_ring__DOT__recv_adp___05F10__0(Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__ctrl_ring__DOT__recv_adp___05F10__0\n"); );
    // Init
    CData/*1:0*/ __Vdly____Vcellout__credit___05F0__count;
    __Vdly____Vcellout__credit___05F0__count = 0;
    CData/*1:0*/ __Vdly____Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F1__count = 0;
    // Body
    __Vdly____Vcellout__credit___05F1__count = vlSelf->__Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F0__count = vlSelf->__Vcellout__credit___05F0__count;
    if (vlSymsp->TOP.cgra_test__DOT__reset) {
        __Vdly____Vcellout__credit___05F1__count = 2U;
        __Vdly____Vcellout__credit___05F0__count = 2U;
    } else {
        if ((vlSelf->__PVT__send___05Fyum[1U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [1U]))) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F1__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [1U]) & vlSelf->__PVT__credit___05Fdecr
                    [1U])) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F1__count) 
                         - (IData)(1U)));
        }
        if ((vlSelf->__PVT__send___05Fyum[0U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [0U]))) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F0__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [0U]) & vlSelf->__PVT__credit___05Fdecr
                    [0U])) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F0__count) 
                         - (IData)(1U)));
        }
    }
    vlSelf->__Vcellout__credit___05F1__count = __Vdly____Vcellout__credit___05F1__count;
    vlSelf->__Vcellout__credit___05F0__count = __Vdly____Vcellout__credit___05F0__count;
    vlSelf->__PVT__credit___05Fcount[1U] = vlSelf->__Vcellout__credit___05F1__count;
    vlSelf->__PVT__credit___05Fcount[0U] = vlSelf->__Vcellout__credit___05F0__count;
    vlSelf->__PVT__recv___05Frdy = 0U;
    vlSelf->__PVT__send___05Fen = 0U;
    if (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__tile___05F10.__PVT__send_to_controller_pkt___05Fval) {
        if (((~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__tile___05F10.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                 >> 0xaU)) & (0U < vlSelf->__PVT__credit___05Fcount
                              [0U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
        if (((vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__tile___05F10.__PVT__send_to_controller_pkt___05Fmsg[6U] 
              >> 0xaU) & (0U < vlSelf->__PVT__credit___05Fcount
                          [1U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
    }
    vlSelf->__PVT__credit___05Fdecr[0U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__tile___05F10.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                                 >> 0xaU)));
    vlSelf->__PVT__credit___05Fdecr[1U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__tile___05F10.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                              >> 0xaU));
}

VL_INLINE_OPT void Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__ctrl_ring__DOT__recv_adp___05F11__0(Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__ctrl_ring__DOT__recv_adp___05F11__0\n"); );
    // Init
    CData/*1:0*/ __Vdly____Vcellout__credit___05F0__count;
    __Vdly____Vcellout__credit___05F0__count = 0;
    CData/*1:0*/ __Vdly____Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F1__count = 0;
    // Body
    __Vdly____Vcellout__credit___05F1__count = vlSelf->__Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F0__count = vlSelf->__Vcellout__credit___05F0__count;
    if (vlSymsp->TOP.cgra_test__DOT__reset) {
        __Vdly____Vcellout__credit___05F1__count = 2U;
        __Vdly____Vcellout__credit___05F0__count = 2U;
    } else {
        if ((vlSelf->__PVT__send___05Fyum[1U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [1U]))) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F1__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [1U]) & vlSelf->__PVT__credit___05Fdecr
                    [1U])) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F1__count) 
                         - (IData)(1U)));
        }
        if ((vlSelf->__PVT__send___05Fyum[0U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [0U]))) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F0__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [0U]) & vlSelf->__PVT__credit___05Fdecr
                    [0U])) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F0__count) 
                         - (IData)(1U)));
        }
    }
    vlSelf->__Vcellout__credit___05F1__count = __Vdly____Vcellout__credit___05F1__count;
    vlSelf->__Vcellout__credit___05F0__count = __Vdly____Vcellout__credit___05F0__count;
    vlSelf->__PVT__credit___05Fcount[1U] = vlSelf->__Vcellout__credit___05F1__count;
    vlSelf->__PVT__credit___05Fcount[0U] = vlSelf->__Vcellout__credit___05F0__count;
    vlSelf->__PVT__recv___05Frdy = 0U;
    vlSelf->__PVT__send___05Fen = 0U;
    if (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__tile___05F11.__PVT__send_to_controller_pkt___05Fval) {
        if (((~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__tile___05F11.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                 >> 0xaU)) & (0U < vlSelf->__PVT__credit___05Fcount
                              [0U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
        if (((vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__tile___05F11.__PVT__send_to_controller_pkt___05Fmsg[6U] 
              >> 0xaU) & (0U < vlSelf->__PVT__credit___05Fcount
                          [1U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
    }
    vlSelf->__PVT__credit___05Fdecr[0U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__tile___05F11.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                                 >> 0xaU)));
    vlSelf->__PVT__credit___05Fdecr[1U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__tile___05F11.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                              >> 0xaU));
}

VL_INLINE_OPT void Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__ctrl_ring__DOT__recv_adp___05F12__0(Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__ctrl_ring__DOT__recv_adp___05F12__0\n"); );
    // Init
    CData/*1:0*/ __Vdly____Vcellout__credit___05F0__count;
    __Vdly____Vcellout__credit___05F0__count = 0;
    CData/*1:0*/ __Vdly____Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F1__count = 0;
    // Body
    __Vdly____Vcellout__credit___05F1__count = vlSelf->__Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F0__count = vlSelf->__Vcellout__credit___05F0__count;
    if (vlSymsp->TOP.cgra_test__DOT__reset) {
        __Vdly____Vcellout__credit___05F1__count = 2U;
        __Vdly____Vcellout__credit___05F0__count = 2U;
    } else {
        if ((vlSelf->__PVT__send___05Fyum[1U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [1U]))) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F1__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [1U]) & vlSelf->__PVT__credit___05Fdecr
                    [1U])) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F1__count) 
                         - (IData)(1U)));
        }
        if ((vlSelf->__PVT__send___05Fyum[0U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [0U]))) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F0__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [0U]) & vlSelf->__PVT__credit___05Fdecr
                    [0U])) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F0__count) 
                         - (IData)(1U)));
        }
    }
    vlSelf->__Vcellout__credit___05F1__count = __Vdly____Vcellout__credit___05F1__count;
    vlSelf->__Vcellout__credit___05F0__count = __Vdly____Vcellout__credit___05F0__count;
    vlSelf->__PVT__credit___05Fcount[1U] = vlSelf->__Vcellout__credit___05F1__count;
    vlSelf->__PVT__credit___05Fcount[0U] = vlSelf->__Vcellout__credit___05F0__count;
    vlSelf->__PVT__recv___05Frdy = 0U;
    vlSelf->__PVT__send___05Fen = 0U;
    if (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__tile___05F12.__PVT__send_to_controller_pkt___05Fval) {
        if (((~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__tile___05F12.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                 >> 0xaU)) & (0U < vlSelf->__PVT__credit___05Fcount
                              [0U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
        if (((vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__tile___05F12.__PVT__send_to_controller_pkt___05Fmsg[6U] 
              >> 0xaU) & (0U < vlSelf->__PVT__credit___05Fcount
                          [1U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
    }
    vlSelf->__PVT__credit___05Fdecr[0U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__tile___05F12.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                                 >> 0xaU)));
    vlSelf->__PVT__credit___05Fdecr[1U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__tile___05F12.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                              >> 0xaU));
}

VL_INLINE_OPT void Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__ctrl_ring__DOT__recv_adp___05F13__0(Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__ctrl_ring__DOT__recv_adp___05F13__0\n"); );
    // Init
    CData/*1:0*/ __Vdly____Vcellout__credit___05F0__count;
    __Vdly____Vcellout__credit___05F0__count = 0;
    CData/*1:0*/ __Vdly____Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F1__count = 0;
    // Body
    __Vdly____Vcellout__credit___05F1__count = vlSelf->__Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F0__count = vlSelf->__Vcellout__credit___05F0__count;
    if (vlSymsp->TOP.cgra_test__DOT__reset) {
        __Vdly____Vcellout__credit___05F1__count = 2U;
        __Vdly____Vcellout__credit___05F0__count = 2U;
    } else {
        if ((vlSelf->__PVT__send___05Fyum[1U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [1U]))) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F1__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [1U]) & vlSelf->__PVT__credit___05Fdecr
                    [1U])) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F1__count) 
                         - (IData)(1U)));
        }
        if ((vlSelf->__PVT__send___05Fyum[0U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [0U]))) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F0__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [0U]) & vlSelf->__PVT__credit___05Fdecr
                    [0U])) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F0__count) 
                         - (IData)(1U)));
        }
    }
    vlSelf->__Vcellout__credit___05F1__count = __Vdly____Vcellout__credit___05F1__count;
    vlSelf->__Vcellout__credit___05F0__count = __Vdly____Vcellout__credit___05F0__count;
    vlSelf->__PVT__credit___05Fcount[1U] = vlSelf->__Vcellout__credit___05F1__count;
    vlSelf->__PVT__credit___05Fcount[0U] = vlSelf->__Vcellout__credit___05F0__count;
    vlSelf->__PVT__recv___05Frdy = 0U;
    vlSelf->__PVT__send___05Fen = 0U;
    if (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__tile___05F13.__PVT__send_to_controller_pkt___05Fval) {
        if (((~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__tile___05F13.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                 >> 0xaU)) & (0U < vlSelf->__PVT__credit___05Fcount
                              [0U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
        if (((vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__tile___05F13.__PVT__send_to_controller_pkt___05Fmsg[6U] 
              >> 0xaU) & (0U < vlSelf->__PVT__credit___05Fcount
                          [1U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
    }
    vlSelf->__PVT__credit___05Fdecr[0U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__tile___05F13.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                                 >> 0xaU)));
    vlSelf->__PVT__credit___05Fdecr[1U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__tile___05F13.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                              >> 0xaU));
}

VL_INLINE_OPT void Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__ctrl_ring__DOT__recv_adp___05F14__0(Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__ctrl_ring__DOT__recv_adp___05F14__0\n"); );
    // Init
    CData/*1:0*/ __Vdly____Vcellout__credit___05F0__count;
    __Vdly____Vcellout__credit___05F0__count = 0;
    CData/*1:0*/ __Vdly____Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F1__count = 0;
    // Body
    __Vdly____Vcellout__credit___05F1__count = vlSelf->__Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F0__count = vlSelf->__Vcellout__credit___05F0__count;
    if (vlSymsp->TOP.cgra_test__DOT__reset) {
        __Vdly____Vcellout__credit___05F1__count = 2U;
        __Vdly____Vcellout__credit___05F0__count = 2U;
    } else {
        if ((vlSelf->__PVT__send___05Fyum[1U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [1U]))) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F1__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [1U]) & vlSelf->__PVT__credit___05Fdecr
                    [1U])) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F1__count) 
                         - (IData)(1U)));
        }
        if ((vlSelf->__PVT__send___05Fyum[0U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [0U]))) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F0__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [0U]) & vlSelf->__PVT__credit___05Fdecr
                    [0U])) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F0__count) 
                         - (IData)(1U)));
        }
    }
    vlSelf->__Vcellout__credit___05F1__count = __Vdly____Vcellout__credit___05F1__count;
    vlSelf->__Vcellout__credit___05F0__count = __Vdly____Vcellout__credit___05F0__count;
    vlSelf->__PVT__credit___05Fcount[1U] = vlSelf->__Vcellout__credit___05F1__count;
    vlSelf->__PVT__credit___05Fcount[0U] = vlSelf->__Vcellout__credit___05F0__count;
    vlSelf->__PVT__recv___05Frdy = 0U;
    vlSelf->__PVT__send___05Fen = 0U;
    if (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__tile___05F14.__PVT__send_to_controller_pkt___05Fval) {
        if (((~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__tile___05F14.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                 >> 0xaU)) & (0U < vlSelf->__PVT__credit___05Fcount
                              [0U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
        if (((vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__tile___05F14.__PVT__send_to_controller_pkt___05Fmsg[6U] 
              >> 0xaU) & (0U < vlSelf->__PVT__credit___05Fcount
                          [1U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
    }
    vlSelf->__PVT__credit___05Fdecr[0U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__tile___05F14.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                                 >> 0xaU)));
    vlSelf->__PVT__credit___05Fdecr[1U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__tile___05F14.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                              >> 0xaU));
}

VL_INLINE_OPT void Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__ctrl_ring__DOT__recv_adp___05F15__0(Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__ctrl_ring__DOT__recv_adp___05F15__0\n"); );
    // Init
    CData/*1:0*/ __Vdly____Vcellout__credit___05F0__count;
    __Vdly____Vcellout__credit___05F0__count = 0;
    CData/*1:0*/ __Vdly____Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F1__count = 0;
    // Body
    __Vdly____Vcellout__credit___05F1__count = vlSelf->__Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F0__count = vlSelf->__Vcellout__credit___05F0__count;
    if (vlSymsp->TOP.cgra_test__DOT__reset) {
        __Vdly____Vcellout__credit___05F1__count = 2U;
        __Vdly____Vcellout__credit___05F0__count = 2U;
    } else {
        if ((vlSelf->__PVT__send___05Fyum[1U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [1U]))) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F1__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [1U]) & vlSelf->__PVT__credit___05Fdecr
                    [1U])) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F1__count) 
                         - (IData)(1U)));
        }
        if ((vlSelf->__PVT__send___05Fyum[0U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [0U]))) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F0__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [0U]) & vlSelf->__PVT__credit___05Fdecr
                    [0U])) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F0__count) 
                         - (IData)(1U)));
        }
    }
    vlSelf->__Vcellout__credit___05F1__count = __Vdly____Vcellout__credit___05F1__count;
    vlSelf->__Vcellout__credit___05F0__count = __Vdly____Vcellout__credit___05F0__count;
    vlSelf->__PVT__credit___05Fcount[1U] = vlSelf->__Vcellout__credit___05F1__count;
    vlSelf->__PVT__credit___05Fcount[0U] = vlSelf->__Vcellout__credit___05F0__count;
    vlSelf->__PVT__recv___05Frdy = 0U;
    vlSelf->__PVT__send___05Fen = 0U;
    if (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__tile___05F15.__PVT__send_to_controller_pkt___05Fval) {
        if (((~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__tile___05F15.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                 >> 0xaU)) & (0U < vlSelf->__PVT__credit___05Fcount
                              [0U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
        if (((vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__tile___05F15.__PVT__send_to_controller_pkt___05Fmsg[6U] 
              >> 0xaU) & (0U < vlSelf->__PVT__credit___05Fcount
                          [1U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
    }
    vlSelf->__PVT__credit___05Fdecr[0U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__tile___05F15.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                                 >> 0xaU)));
    vlSelf->__PVT__credit___05Fdecr[1U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__tile___05F15.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                              >> 0xaU));
}

VL_INLINE_OPT void Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__ctrl_ring__DOT__recv_adp___05F16__1(Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__ctrl_ring__DOT__recv_adp___05F16__1\n"); );
    // Body
    vlSelf->__PVT__send___05Fen = 0U;
    vlSelf->__PVT__recv___05Frdy = 0U;
    if (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__controller___05Fsend_to_ctrl_ring_pkt___05Fval) {
        if (((~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__controller___05Fsend_to_ctrl_ring_pkt___05Fmsg[6U] 
                 >> 0xaU)) & (0U < vlSelf->__PVT__credit___05Fcount
                              [0U]))) {
            vlSelf->__PVT__send___05Fen = 1U;
            vlSelf->__PVT__recv___05Frdy = 1U;
        }
        if (((vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__controller___05Fsend_to_ctrl_ring_pkt___05Fmsg[6U] 
              >> 0xaU) & (0U < vlSelf->__PVT__credit___05Fcount
                          [1U]))) {
            vlSelf->__PVT__send___05Fen = 1U;
            vlSelf->__PVT__recv___05Frdy = 1U;
        }
    }
    vlSelf->__PVT__credit___05Fdecr[0U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__controller___05Fsend_to_ctrl_ring_pkt___05Fmsg[6U] 
                                                 >> 0xaU)));
    vlSelf->__PVT__credit___05Fdecr[1U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__controller___05Fsend_to_ctrl_ring_pkt___05Fmsg[6U] 
                                              >> 0xaU));
}

VL_INLINE_OPT void Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__ctrl_ring__DOT__recv_adp___05F0__0(Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__ctrl_ring__DOT__recv_adp___05F0__0\n"); );
    // Init
    CData/*1:0*/ __Vdly____Vcellout__credit___05F0__count;
    __Vdly____Vcellout__credit___05F0__count = 0;
    CData/*1:0*/ __Vdly____Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F1__count = 0;
    // Body
    __Vdly____Vcellout__credit___05F1__count = vlSelf->__Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F0__count = vlSelf->__Vcellout__credit___05F0__count;
    if (vlSymsp->TOP.cgra_test__DOT__reset) {
        __Vdly____Vcellout__credit___05F1__count = 2U;
        __Vdly____Vcellout__credit___05F0__count = 2U;
    } else {
        if ((vlSelf->__PVT__send___05Fyum[1U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [1U]))) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F1__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [1U]) & vlSelf->__PVT__credit___05Fdecr
                    [1U])) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F1__count) 
                         - (IData)(1U)));
        }
        if ((vlSelf->__PVT__send___05Fyum[0U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [0U]))) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F0__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [0U]) & vlSelf->__PVT__credit___05Fdecr
                    [0U])) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F0__count) 
                         - (IData)(1U)));
        }
    }
    vlSelf->__Vcellout__credit___05F1__count = __Vdly____Vcellout__credit___05F1__count;
    vlSelf->__Vcellout__credit___05F0__count = __Vdly____Vcellout__credit___05F0__count;
    vlSelf->__PVT__credit___05Fcount[1U] = vlSelf->__Vcellout__credit___05F1__count;
    vlSelf->__PVT__credit___05Fcount[0U] = vlSelf->__Vcellout__credit___05F0__count;
    vlSelf->__PVT__recv___05Frdy = 0U;
    vlSelf->__PVT__send___05Fen = 0U;
    if (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__tile___05F0.__PVT__send_to_controller_pkt___05Fval) {
        if (((~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__tile___05F0.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                 >> 0xaU)) & (0U < vlSelf->__PVT__credit___05Fcount
                              [0U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
        if (((vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__tile___05F0.__PVT__send_to_controller_pkt___05Fmsg[6U] 
              >> 0xaU) & (0U < vlSelf->__PVT__credit___05Fcount
                          [1U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
    }
    vlSelf->__PVT__credit___05Fdecr[0U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__tile___05F0.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                                 >> 0xaU)));
    vlSelf->__PVT__credit___05Fdecr[1U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__tile___05F0.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                              >> 0xaU));
}

VL_INLINE_OPT void Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__ctrl_ring__DOT__recv_adp___05F1__0(Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__ctrl_ring__DOT__recv_adp___05F1__0\n"); );
    // Init
    CData/*1:0*/ __Vdly____Vcellout__credit___05F0__count;
    __Vdly____Vcellout__credit___05F0__count = 0;
    CData/*1:0*/ __Vdly____Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F1__count = 0;
    // Body
    __Vdly____Vcellout__credit___05F1__count = vlSelf->__Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F0__count = vlSelf->__Vcellout__credit___05F0__count;
    if (vlSymsp->TOP.cgra_test__DOT__reset) {
        __Vdly____Vcellout__credit___05F1__count = 2U;
        __Vdly____Vcellout__credit___05F0__count = 2U;
    } else {
        if ((vlSelf->__PVT__send___05Fyum[1U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [1U]))) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F1__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [1U]) & vlSelf->__PVT__credit___05Fdecr
                    [1U])) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F1__count) 
                         - (IData)(1U)));
        }
        if ((vlSelf->__PVT__send___05Fyum[0U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [0U]))) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F0__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [0U]) & vlSelf->__PVT__credit___05Fdecr
                    [0U])) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F0__count) 
                         - (IData)(1U)));
        }
    }
    vlSelf->__Vcellout__credit___05F1__count = __Vdly____Vcellout__credit___05F1__count;
    vlSelf->__Vcellout__credit___05F0__count = __Vdly____Vcellout__credit___05F0__count;
    vlSelf->__PVT__credit___05Fcount[1U] = vlSelf->__Vcellout__credit___05F1__count;
    vlSelf->__PVT__credit___05Fcount[0U] = vlSelf->__Vcellout__credit___05F0__count;
    vlSelf->__PVT__recv___05Frdy = 0U;
    vlSelf->__PVT__send___05Fen = 0U;
    if (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__tile___05F1.__PVT__send_to_controller_pkt___05Fval) {
        if (((~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__tile___05F1.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                 >> 0xaU)) & (0U < vlSelf->__PVT__credit___05Fcount
                              [0U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
        if (((vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__tile___05F1.__PVT__send_to_controller_pkt___05Fmsg[6U] 
              >> 0xaU) & (0U < vlSelf->__PVT__credit___05Fcount
                          [1U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
    }
    vlSelf->__PVT__credit___05Fdecr[0U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__tile___05F1.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                                 >> 0xaU)));
    vlSelf->__PVT__credit___05Fdecr[1U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__tile___05F1.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                              >> 0xaU));
}

VL_INLINE_OPT void Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__ctrl_ring__DOT__recv_adp___05F2__0(Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__ctrl_ring__DOT__recv_adp___05F2__0\n"); );
    // Init
    CData/*1:0*/ __Vdly____Vcellout__credit___05F0__count;
    __Vdly____Vcellout__credit___05F0__count = 0;
    CData/*1:0*/ __Vdly____Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F1__count = 0;
    // Body
    __Vdly____Vcellout__credit___05F1__count = vlSelf->__Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F0__count = vlSelf->__Vcellout__credit___05F0__count;
    if (vlSymsp->TOP.cgra_test__DOT__reset) {
        __Vdly____Vcellout__credit___05F1__count = 2U;
        __Vdly____Vcellout__credit___05F0__count = 2U;
    } else {
        if ((vlSelf->__PVT__send___05Fyum[1U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [1U]))) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F1__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [1U]) & vlSelf->__PVT__credit___05Fdecr
                    [1U])) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F1__count) 
                         - (IData)(1U)));
        }
        if ((vlSelf->__PVT__send___05Fyum[0U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [0U]))) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F0__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [0U]) & vlSelf->__PVT__credit___05Fdecr
                    [0U])) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F0__count) 
                         - (IData)(1U)));
        }
    }
    vlSelf->__Vcellout__credit___05F1__count = __Vdly____Vcellout__credit___05F1__count;
    vlSelf->__Vcellout__credit___05F0__count = __Vdly____Vcellout__credit___05F0__count;
    vlSelf->__PVT__credit___05Fcount[1U] = vlSelf->__Vcellout__credit___05F1__count;
    vlSelf->__PVT__credit___05Fcount[0U] = vlSelf->__Vcellout__credit___05F0__count;
    vlSelf->__PVT__recv___05Frdy = 0U;
    vlSelf->__PVT__send___05Fen = 0U;
    if (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__tile___05F2.__PVT__send_to_controller_pkt___05Fval) {
        if (((~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__tile___05F2.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                 >> 0xaU)) & (0U < vlSelf->__PVT__credit___05Fcount
                              [0U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
        if (((vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__tile___05F2.__PVT__send_to_controller_pkt___05Fmsg[6U] 
              >> 0xaU) & (0U < vlSelf->__PVT__credit___05Fcount
                          [1U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
    }
    vlSelf->__PVT__credit___05Fdecr[0U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__tile___05F2.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                                 >> 0xaU)));
    vlSelf->__PVT__credit___05Fdecr[1U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__tile___05F2.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                              >> 0xaU));
}

VL_INLINE_OPT void Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__ctrl_ring__DOT__recv_adp___05F3__0(Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__ctrl_ring__DOT__recv_adp___05F3__0\n"); );
    // Init
    CData/*1:0*/ __Vdly____Vcellout__credit___05F0__count;
    __Vdly____Vcellout__credit___05F0__count = 0;
    CData/*1:0*/ __Vdly____Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F1__count = 0;
    // Body
    __Vdly____Vcellout__credit___05F1__count = vlSelf->__Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F0__count = vlSelf->__Vcellout__credit___05F0__count;
    if (vlSymsp->TOP.cgra_test__DOT__reset) {
        __Vdly____Vcellout__credit___05F1__count = 2U;
        __Vdly____Vcellout__credit___05F0__count = 2U;
    } else {
        if ((vlSelf->__PVT__send___05Fyum[1U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [1U]))) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F1__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [1U]) & vlSelf->__PVT__credit___05Fdecr
                    [1U])) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F1__count) 
                         - (IData)(1U)));
        }
        if ((vlSelf->__PVT__send___05Fyum[0U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [0U]))) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F0__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [0U]) & vlSelf->__PVT__credit___05Fdecr
                    [0U])) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F0__count) 
                         - (IData)(1U)));
        }
    }
    vlSelf->__Vcellout__credit___05F1__count = __Vdly____Vcellout__credit___05F1__count;
    vlSelf->__Vcellout__credit___05F0__count = __Vdly____Vcellout__credit___05F0__count;
    vlSelf->__PVT__credit___05Fcount[1U] = vlSelf->__Vcellout__credit___05F1__count;
    vlSelf->__PVT__credit___05Fcount[0U] = vlSelf->__Vcellout__credit___05F0__count;
    vlSelf->__PVT__recv___05Frdy = 0U;
    vlSelf->__PVT__send___05Fen = 0U;
    if (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__tile___05F3.__PVT__send_to_controller_pkt___05Fval) {
        if (((~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__tile___05F3.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                 >> 0xaU)) & (0U < vlSelf->__PVT__credit___05Fcount
                              [0U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
        if (((vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__tile___05F3.__PVT__send_to_controller_pkt___05Fmsg[6U] 
              >> 0xaU) & (0U < vlSelf->__PVT__credit___05Fcount
                          [1U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
    }
    vlSelf->__PVT__credit___05Fdecr[0U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__tile___05F3.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                                 >> 0xaU)));
    vlSelf->__PVT__credit___05Fdecr[1U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__tile___05F3.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                              >> 0xaU));
}

VL_INLINE_OPT void Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__ctrl_ring__DOT__recv_adp___05F4__0(Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__ctrl_ring__DOT__recv_adp___05F4__0\n"); );
    // Init
    CData/*1:0*/ __Vdly____Vcellout__credit___05F0__count;
    __Vdly____Vcellout__credit___05F0__count = 0;
    CData/*1:0*/ __Vdly____Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F1__count = 0;
    // Body
    __Vdly____Vcellout__credit___05F1__count = vlSelf->__Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F0__count = vlSelf->__Vcellout__credit___05F0__count;
    if (vlSymsp->TOP.cgra_test__DOT__reset) {
        __Vdly____Vcellout__credit___05F1__count = 2U;
        __Vdly____Vcellout__credit___05F0__count = 2U;
    } else {
        if ((vlSelf->__PVT__send___05Fyum[1U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [1U]))) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F1__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [1U]) & vlSelf->__PVT__credit___05Fdecr
                    [1U])) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F1__count) 
                         - (IData)(1U)));
        }
        if ((vlSelf->__PVT__send___05Fyum[0U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [0U]))) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F0__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [0U]) & vlSelf->__PVT__credit___05Fdecr
                    [0U])) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F0__count) 
                         - (IData)(1U)));
        }
    }
    vlSelf->__Vcellout__credit___05F1__count = __Vdly____Vcellout__credit___05F1__count;
    vlSelf->__Vcellout__credit___05F0__count = __Vdly____Vcellout__credit___05F0__count;
    vlSelf->__PVT__credit___05Fcount[1U] = vlSelf->__Vcellout__credit___05F1__count;
    vlSelf->__PVT__credit___05Fcount[0U] = vlSelf->__Vcellout__credit___05F0__count;
    vlSelf->__PVT__recv___05Frdy = 0U;
    vlSelf->__PVT__send___05Fen = 0U;
    if (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__tile___05F4.__PVT__send_to_controller_pkt___05Fval) {
        if (((~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__tile___05F4.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                 >> 0xaU)) & (0U < vlSelf->__PVT__credit___05Fcount
                              [0U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
        if (((vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__tile___05F4.__PVT__send_to_controller_pkt___05Fmsg[6U] 
              >> 0xaU) & (0U < vlSelf->__PVT__credit___05Fcount
                          [1U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
    }
    vlSelf->__PVT__credit___05Fdecr[0U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__tile___05F4.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                                 >> 0xaU)));
    vlSelf->__PVT__credit___05Fdecr[1U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__tile___05F4.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                              >> 0xaU));
}

VL_INLINE_OPT void Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__ctrl_ring__DOT__recv_adp___05F5__0(Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__ctrl_ring__DOT__recv_adp___05F5__0\n"); );
    // Init
    CData/*1:0*/ __Vdly____Vcellout__credit___05F0__count;
    __Vdly____Vcellout__credit___05F0__count = 0;
    CData/*1:0*/ __Vdly____Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F1__count = 0;
    // Body
    __Vdly____Vcellout__credit___05F1__count = vlSelf->__Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F0__count = vlSelf->__Vcellout__credit___05F0__count;
    if (vlSymsp->TOP.cgra_test__DOT__reset) {
        __Vdly____Vcellout__credit___05F1__count = 2U;
        __Vdly____Vcellout__credit___05F0__count = 2U;
    } else {
        if ((vlSelf->__PVT__send___05Fyum[1U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [1U]))) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F1__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [1U]) & vlSelf->__PVT__credit___05Fdecr
                    [1U])) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F1__count) 
                         - (IData)(1U)));
        }
        if ((vlSelf->__PVT__send___05Fyum[0U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [0U]))) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F0__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [0U]) & vlSelf->__PVT__credit___05Fdecr
                    [0U])) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F0__count) 
                         - (IData)(1U)));
        }
    }
    vlSelf->__Vcellout__credit___05F1__count = __Vdly____Vcellout__credit___05F1__count;
    vlSelf->__Vcellout__credit___05F0__count = __Vdly____Vcellout__credit___05F0__count;
    vlSelf->__PVT__credit___05Fcount[1U] = vlSelf->__Vcellout__credit___05F1__count;
    vlSelf->__PVT__credit___05Fcount[0U] = vlSelf->__Vcellout__credit___05F0__count;
    vlSelf->__PVT__recv___05Frdy = 0U;
    vlSelf->__PVT__send___05Fen = 0U;
    if (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__tile___05F5.__PVT__send_to_controller_pkt___05Fval) {
        if (((~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__tile___05F5.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                 >> 0xaU)) & (0U < vlSelf->__PVT__credit___05Fcount
                              [0U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
        if (((vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__tile___05F5.__PVT__send_to_controller_pkt___05Fmsg[6U] 
              >> 0xaU) & (0U < vlSelf->__PVT__credit___05Fcount
                          [1U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
    }
    vlSelf->__PVT__credit___05Fdecr[0U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__tile___05F5.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                                 >> 0xaU)));
    vlSelf->__PVT__credit___05Fdecr[1U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__tile___05F5.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                              >> 0xaU));
}

VL_INLINE_OPT void Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__ctrl_ring__DOT__recv_adp___05F6__0(Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__ctrl_ring__DOT__recv_adp___05F6__0\n"); );
    // Init
    CData/*1:0*/ __Vdly____Vcellout__credit___05F0__count;
    __Vdly____Vcellout__credit___05F0__count = 0;
    CData/*1:0*/ __Vdly____Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F1__count = 0;
    // Body
    __Vdly____Vcellout__credit___05F1__count = vlSelf->__Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F0__count = vlSelf->__Vcellout__credit___05F0__count;
    if (vlSymsp->TOP.cgra_test__DOT__reset) {
        __Vdly____Vcellout__credit___05F1__count = 2U;
        __Vdly____Vcellout__credit___05F0__count = 2U;
    } else {
        if ((vlSelf->__PVT__send___05Fyum[1U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [1U]))) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F1__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [1U]) & vlSelf->__PVT__credit___05Fdecr
                    [1U])) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F1__count) 
                         - (IData)(1U)));
        }
        if ((vlSelf->__PVT__send___05Fyum[0U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [0U]))) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F0__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [0U]) & vlSelf->__PVT__credit___05Fdecr
                    [0U])) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F0__count) 
                         - (IData)(1U)));
        }
    }
    vlSelf->__Vcellout__credit___05F1__count = __Vdly____Vcellout__credit___05F1__count;
    vlSelf->__Vcellout__credit___05F0__count = __Vdly____Vcellout__credit___05F0__count;
    vlSelf->__PVT__credit___05Fcount[1U] = vlSelf->__Vcellout__credit___05F1__count;
    vlSelf->__PVT__credit___05Fcount[0U] = vlSelf->__Vcellout__credit___05F0__count;
    vlSelf->__PVT__recv___05Frdy = 0U;
    vlSelf->__PVT__send___05Fen = 0U;
    if (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__tile___05F6.__PVT__send_to_controller_pkt___05Fval) {
        if (((~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__tile___05F6.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                 >> 0xaU)) & (0U < vlSelf->__PVT__credit___05Fcount
                              [0U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
        if (((vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__tile___05F6.__PVT__send_to_controller_pkt___05Fmsg[6U] 
              >> 0xaU) & (0U < vlSelf->__PVT__credit___05Fcount
                          [1U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
    }
    vlSelf->__PVT__credit___05Fdecr[0U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__tile___05F6.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                                 >> 0xaU)));
    vlSelf->__PVT__credit___05Fdecr[1U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__tile___05F6.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                              >> 0xaU));
}

VL_INLINE_OPT void Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__ctrl_ring__DOT__recv_adp___05F7__0(Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__ctrl_ring__DOT__recv_adp___05F7__0\n"); );
    // Init
    CData/*1:0*/ __Vdly____Vcellout__credit___05F0__count;
    __Vdly____Vcellout__credit___05F0__count = 0;
    CData/*1:0*/ __Vdly____Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F1__count = 0;
    // Body
    __Vdly____Vcellout__credit___05F1__count = vlSelf->__Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F0__count = vlSelf->__Vcellout__credit___05F0__count;
    if (vlSymsp->TOP.cgra_test__DOT__reset) {
        __Vdly____Vcellout__credit___05F1__count = 2U;
        __Vdly____Vcellout__credit___05F0__count = 2U;
    } else {
        if ((vlSelf->__PVT__send___05Fyum[1U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [1U]))) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F1__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [1U]) & vlSelf->__PVT__credit___05Fdecr
                    [1U])) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F1__count) 
                         - (IData)(1U)));
        }
        if ((vlSelf->__PVT__send___05Fyum[0U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [0U]))) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F0__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [0U]) & vlSelf->__PVT__credit___05Fdecr
                    [0U])) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F0__count) 
                         - (IData)(1U)));
        }
    }
    vlSelf->__Vcellout__credit___05F1__count = __Vdly____Vcellout__credit___05F1__count;
    vlSelf->__Vcellout__credit___05F0__count = __Vdly____Vcellout__credit___05F0__count;
    vlSelf->__PVT__credit___05Fcount[1U] = vlSelf->__Vcellout__credit___05F1__count;
    vlSelf->__PVT__credit___05Fcount[0U] = vlSelf->__Vcellout__credit___05F0__count;
    vlSelf->__PVT__recv___05Frdy = 0U;
    vlSelf->__PVT__send___05Fen = 0U;
    if (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__tile___05F7.__PVT__send_to_controller_pkt___05Fval) {
        if (((~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__tile___05F7.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                 >> 0xaU)) & (0U < vlSelf->__PVT__credit___05Fcount
                              [0U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
        if (((vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__tile___05F7.__PVT__send_to_controller_pkt___05Fmsg[6U] 
              >> 0xaU) & (0U < vlSelf->__PVT__credit___05Fcount
                          [1U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
    }
    vlSelf->__PVT__credit___05Fdecr[0U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__tile___05F7.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                                 >> 0xaU)));
    vlSelf->__PVT__credit___05Fdecr[1U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__tile___05F7.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                              >> 0xaU));
}

VL_INLINE_OPT void Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__ctrl_ring__DOT__recv_adp___05F8__0(Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__ctrl_ring__DOT__recv_adp___05F8__0\n"); );
    // Init
    CData/*1:0*/ __Vdly____Vcellout__credit___05F0__count;
    __Vdly____Vcellout__credit___05F0__count = 0;
    CData/*1:0*/ __Vdly____Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F1__count = 0;
    // Body
    __Vdly____Vcellout__credit___05F1__count = vlSelf->__Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F0__count = vlSelf->__Vcellout__credit___05F0__count;
    if (vlSymsp->TOP.cgra_test__DOT__reset) {
        __Vdly____Vcellout__credit___05F1__count = 2U;
        __Vdly____Vcellout__credit___05F0__count = 2U;
    } else {
        if ((vlSelf->__PVT__send___05Fyum[1U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [1U]))) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F1__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [1U]) & vlSelf->__PVT__credit___05Fdecr
                    [1U])) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F1__count) 
                         - (IData)(1U)));
        }
        if ((vlSelf->__PVT__send___05Fyum[0U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [0U]))) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F0__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [0U]) & vlSelf->__PVT__credit___05Fdecr
                    [0U])) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F0__count) 
                         - (IData)(1U)));
        }
    }
    vlSelf->__Vcellout__credit___05F1__count = __Vdly____Vcellout__credit___05F1__count;
    vlSelf->__Vcellout__credit___05F0__count = __Vdly____Vcellout__credit___05F0__count;
    vlSelf->__PVT__credit___05Fcount[1U] = vlSelf->__Vcellout__credit___05F1__count;
    vlSelf->__PVT__credit___05Fcount[0U] = vlSelf->__Vcellout__credit___05F0__count;
    vlSelf->__PVT__recv___05Frdy = 0U;
    vlSelf->__PVT__send___05Fen = 0U;
    if (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__tile___05F8.__PVT__send_to_controller_pkt___05Fval) {
        if (((~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__tile___05F8.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                 >> 0xaU)) & (0U < vlSelf->__PVT__credit___05Fcount
                              [0U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
        if (((vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__tile___05F8.__PVT__send_to_controller_pkt___05Fmsg[6U] 
              >> 0xaU) & (0U < vlSelf->__PVT__credit___05Fcount
                          [1U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
    }
    vlSelf->__PVT__credit___05Fdecr[0U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__tile___05F8.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                                 >> 0xaU)));
    vlSelf->__PVT__credit___05Fdecr[1U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__tile___05F8.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                              >> 0xaU));
}

VL_INLINE_OPT void Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__ctrl_ring__DOT__recv_adp___05F9__0(Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__ctrl_ring__DOT__recv_adp___05F9__0\n"); );
    // Init
    CData/*1:0*/ __Vdly____Vcellout__credit___05F0__count;
    __Vdly____Vcellout__credit___05F0__count = 0;
    CData/*1:0*/ __Vdly____Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F1__count = 0;
    // Body
    __Vdly____Vcellout__credit___05F1__count = vlSelf->__Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F0__count = vlSelf->__Vcellout__credit___05F0__count;
    if (vlSymsp->TOP.cgra_test__DOT__reset) {
        __Vdly____Vcellout__credit___05F1__count = 2U;
        __Vdly____Vcellout__credit___05F0__count = 2U;
    } else {
        if ((vlSelf->__PVT__send___05Fyum[1U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [1U]))) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F1__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [1U]) & vlSelf->__PVT__credit___05Fdecr
                    [1U])) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F1__count) 
                         - (IData)(1U)));
        }
        if ((vlSelf->__PVT__send___05Fyum[0U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [0U]))) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F0__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [0U]) & vlSelf->__PVT__credit___05Fdecr
                    [0U])) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F0__count) 
                         - (IData)(1U)));
        }
    }
    vlSelf->__Vcellout__credit___05F1__count = __Vdly____Vcellout__credit___05F1__count;
    vlSelf->__Vcellout__credit___05F0__count = __Vdly____Vcellout__credit___05F0__count;
    vlSelf->__PVT__credit___05Fcount[1U] = vlSelf->__Vcellout__credit___05F1__count;
    vlSelf->__PVT__credit___05Fcount[0U] = vlSelf->__Vcellout__credit___05F0__count;
    vlSelf->__PVT__recv___05Frdy = 0U;
    vlSelf->__PVT__send___05Fen = 0U;
    if (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__tile___05F9.__PVT__send_to_controller_pkt___05Fval) {
        if (((~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__tile___05F9.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                 >> 0xaU)) & (0U < vlSelf->__PVT__credit___05Fcount
                              [0U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
        if (((vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__tile___05F9.__PVT__send_to_controller_pkt___05Fmsg[6U] 
              >> 0xaU) & (0U < vlSelf->__PVT__credit___05Fcount
                          [1U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
    }
    vlSelf->__PVT__credit___05Fdecr[0U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__tile___05F9.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                                 >> 0xaU)));
    vlSelf->__PVT__credit___05Fdecr[1U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__tile___05F9.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                              >> 0xaU));
}

VL_INLINE_OPT void Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__ctrl_ring__DOT__recv_adp___05F10__0(Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__ctrl_ring__DOT__recv_adp___05F10__0\n"); );
    // Init
    CData/*1:0*/ __Vdly____Vcellout__credit___05F0__count;
    __Vdly____Vcellout__credit___05F0__count = 0;
    CData/*1:0*/ __Vdly____Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F1__count = 0;
    // Body
    __Vdly____Vcellout__credit___05F1__count = vlSelf->__Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F0__count = vlSelf->__Vcellout__credit___05F0__count;
    if (vlSymsp->TOP.cgra_test__DOT__reset) {
        __Vdly____Vcellout__credit___05F1__count = 2U;
        __Vdly____Vcellout__credit___05F0__count = 2U;
    } else {
        if ((vlSelf->__PVT__send___05Fyum[1U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [1U]))) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F1__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [1U]) & vlSelf->__PVT__credit___05Fdecr
                    [1U])) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F1__count) 
                         - (IData)(1U)));
        }
        if ((vlSelf->__PVT__send___05Fyum[0U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [0U]))) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F0__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [0U]) & vlSelf->__PVT__credit___05Fdecr
                    [0U])) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F0__count) 
                         - (IData)(1U)));
        }
    }
    vlSelf->__Vcellout__credit___05F1__count = __Vdly____Vcellout__credit___05F1__count;
    vlSelf->__Vcellout__credit___05F0__count = __Vdly____Vcellout__credit___05F0__count;
    vlSelf->__PVT__credit___05Fcount[1U] = vlSelf->__Vcellout__credit___05F1__count;
    vlSelf->__PVT__credit___05Fcount[0U] = vlSelf->__Vcellout__credit___05F0__count;
    vlSelf->__PVT__recv___05Frdy = 0U;
    vlSelf->__PVT__send___05Fen = 0U;
    if (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__tile___05F10.__PVT__send_to_controller_pkt___05Fval) {
        if (((~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__tile___05F10.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                 >> 0xaU)) & (0U < vlSelf->__PVT__credit___05Fcount
                              [0U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
        if (((vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__tile___05F10.__PVT__send_to_controller_pkt___05Fmsg[6U] 
              >> 0xaU) & (0U < vlSelf->__PVT__credit___05Fcount
                          [1U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
    }
    vlSelf->__PVT__credit___05Fdecr[0U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__tile___05F10.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                                 >> 0xaU)));
    vlSelf->__PVT__credit___05Fdecr[1U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__tile___05F10.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                              >> 0xaU));
}

VL_INLINE_OPT void Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__ctrl_ring__DOT__recv_adp___05F11__0(Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__ctrl_ring__DOT__recv_adp___05F11__0\n"); );
    // Init
    CData/*1:0*/ __Vdly____Vcellout__credit___05F0__count;
    __Vdly____Vcellout__credit___05F0__count = 0;
    CData/*1:0*/ __Vdly____Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F1__count = 0;
    // Body
    __Vdly____Vcellout__credit___05F1__count = vlSelf->__Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F0__count = vlSelf->__Vcellout__credit___05F0__count;
    if (vlSymsp->TOP.cgra_test__DOT__reset) {
        __Vdly____Vcellout__credit___05F1__count = 2U;
        __Vdly____Vcellout__credit___05F0__count = 2U;
    } else {
        if ((vlSelf->__PVT__send___05Fyum[1U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [1U]))) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F1__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [1U]) & vlSelf->__PVT__credit___05Fdecr
                    [1U])) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F1__count) 
                         - (IData)(1U)));
        }
        if ((vlSelf->__PVT__send___05Fyum[0U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [0U]))) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F0__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [0U]) & vlSelf->__PVT__credit___05Fdecr
                    [0U])) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F0__count) 
                         - (IData)(1U)));
        }
    }
    vlSelf->__Vcellout__credit___05F1__count = __Vdly____Vcellout__credit___05F1__count;
    vlSelf->__Vcellout__credit___05F0__count = __Vdly____Vcellout__credit___05F0__count;
    vlSelf->__PVT__credit___05Fcount[1U] = vlSelf->__Vcellout__credit___05F1__count;
    vlSelf->__PVT__credit___05Fcount[0U] = vlSelf->__Vcellout__credit___05F0__count;
    vlSelf->__PVT__recv___05Frdy = 0U;
    vlSelf->__PVT__send___05Fen = 0U;
    if (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__tile___05F11.__PVT__send_to_controller_pkt___05Fval) {
        if (((~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__tile___05F11.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                 >> 0xaU)) & (0U < vlSelf->__PVT__credit___05Fcount
                              [0U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
        if (((vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__tile___05F11.__PVT__send_to_controller_pkt___05Fmsg[6U] 
              >> 0xaU) & (0U < vlSelf->__PVT__credit___05Fcount
                          [1U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
    }
    vlSelf->__PVT__credit___05Fdecr[0U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__tile___05F11.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                                 >> 0xaU)));
    vlSelf->__PVT__credit___05Fdecr[1U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__tile___05F11.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                              >> 0xaU));
}

VL_INLINE_OPT void Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__ctrl_ring__DOT__recv_adp___05F12__0(Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__ctrl_ring__DOT__recv_adp___05F12__0\n"); );
    // Init
    CData/*1:0*/ __Vdly____Vcellout__credit___05F0__count;
    __Vdly____Vcellout__credit___05F0__count = 0;
    CData/*1:0*/ __Vdly____Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F1__count = 0;
    // Body
    __Vdly____Vcellout__credit___05F1__count = vlSelf->__Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F0__count = vlSelf->__Vcellout__credit___05F0__count;
    if (vlSymsp->TOP.cgra_test__DOT__reset) {
        __Vdly____Vcellout__credit___05F1__count = 2U;
        __Vdly____Vcellout__credit___05F0__count = 2U;
    } else {
        if ((vlSelf->__PVT__send___05Fyum[1U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [1U]))) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F1__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [1U]) & vlSelf->__PVT__credit___05Fdecr
                    [1U])) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F1__count) 
                         - (IData)(1U)));
        }
        if ((vlSelf->__PVT__send___05Fyum[0U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [0U]))) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F0__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [0U]) & vlSelf->__PVT__credit___05Fdecr
                    [0U])) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F0__count) 
                         - (IData)(1U)));
        }
    }
    vlSelf->__Vcellout__credit___05F1__count = __Vdly____Vcellout__credit___05F1__count;
    vlSelf->__Vcellout__credit___05F0__count = __Vdly____Vcellout__credit___05F0__count;
    vlSelf->__PVT__credit___05Fcount[1U] = vlSelf->__Vcellout__credit___05F1__count;
    vlSelf->__PVT__credit___05Fcount[0U] = vlSelf->__Vcellout__credit___05F0__count;
    vlSelf->__PVT__recv___05Frdy = 0U;
    vlSelf->__PVT__send___05Fen = 0U;
    if (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__tile___05F12.__PVT__send_to_controller_pkt___05Fval) {
        if (((~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__tile___05F12.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                 >> 0xaU)) & (0U < vlSelf->__PVT__credit___05Fcount
                              [0U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
        if (((vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__tile___05F12.__PVT__send_to_controller_pkt___05Fmsg[6U] 
              >> 0xaU) & (0U < vlSelf->__PVT__credit___05Fcount
                          [1U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
    }
    vlSelf->__PVT__credit___05Fdecr[0U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__tile___05F12.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                                 >> 0xaU)));
    vlSelf->__PVT__credit___05Fdecr[1U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__tile___05F12.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                              >> 0xaU));
}

VL_INLINE_OPT void Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__ctrl_ring__DOT__recv_adp___05F13__0(Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__ctrl_ring__DOT__recv_adp___05F13__0\n"); );
    // Init
    CData/*1:0*/ __Vdly____Vcellout__credit___05F0__count;
    __Vdly____Vcellout__credit___05F0__count = 0;
    CData/*1:0*/ __Vdly____Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F1__count = 0;
    // Body
    __Vdly____Vcellout__credit___05F1__count = vlSelf->__Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F0__count = vlSelf->__Vcellout__credit___05F0__count;
    if (vlSymsp->TOP.cgra_test__DOT__reset) {
        __Vdly____Vcellout__credit___05F1__count = 2U;
        __Vdly____Vcellout__credit___05F0__count = 2U;
    } else {
        if ((vlSelf->__PVT__send___05Fyum[1U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [1U]))) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F1__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [1U]) & vlSelf->__PVT__credit___05Fdecr
                    [1U])) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F1__count) 
                         - (IData)(1U)));
        }
        if ((vlSelf->__PVT__send___05Fyum[0U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [0U]))) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F0__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [0U]) & vlSelf->__PVT__credit___05Fdecr
                    [0U])) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F0__count) 
                         - (IData)(1U)));
        }
    }
    vlSelf->__Vcellout__credit___05F1__count = __Vdly____Vcellout__credit___05F1__count;
    vlSelf->__Vcellout__credit___05F0__count = __Vdly____Vcellout__credit___05F0__count;
    vlSelf->__PVT__credit___05Fcount[1U] = vlSelf->__Vcellout__credit___05F1__count;
    vlSelf->__PVT__credit___05Fcount[0U] = vlSelf->__Vcellout__credit___05F0__count;
    vlSelf->__PVT__recv___05Frdy = 0U;
    vlSelf->__PVT__send___05Fen = 0U;
    if (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__tile___05F13.__PVT__send_to_controller_pkt___05Fval) {
        if (((~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__tile___05F13.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                 >> 0xaU)) & (0U < vlSelf->__PVT__credit___05Fcount
                              [0U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
        if (((vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__tile___05F13.__PVT__send_to_controller_pkt___05Fmsg[6U] 
              >> 0xaU) & (0U < vlSelf->__PVT__credit___05Fcount
                          [1U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
    }
    vlSelf->__PVT__credit___05Fdecr[0U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__tile___05F13.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                                 >> 0xaU)));
    vlSelf->__PVT__credit___05Fdecr[1U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__tile___05F13.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                              >> 0xaU));
}

VL_INLINE_OPT void Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__ctrl_ring__DOT__recv_adp___05F14__0(Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__ctrl_ring__DOT__recv_adp___05F14__0\n"); );
    // Init
    CData/*1:0*/ __Vdly____Vcellout__credit___05F0__count;
    __Vdly____Vcellout__credit___05F0__count = 0;
    CData/*1:0*/ __Vdly____Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F1__count = 0;
    // Body
    __Vdly____Vcellout__credit___05F1__count = vlSelf->__Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F0__count = vlSelf->__Vcellout__credit___05F0__count;
    if (vlSymsp->TOP.cgra_test__DOT__reset) {
        __Vdly____Vcellout__credit___05F1__count = 2U;
        __Vdly____Vcellout__credit___05F0__count = 2U;
    } else {
        if ((vlSelf->__PVT__send___05Fyum[1U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [1U]))) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F1__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [1U]) & vlSelf->__PVT__credit___05Fdecr
                    [1U])) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F1__count) 
                         - (IData)(1U)));
        }
        if ((vlSelf->__PVT__send___05Fyum[0U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [0U]))) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F0__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [0U]) & vlSelf->__PVT__credit___05Fdecr
                    [0U])) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F0__count) 
                         - (IData)(1U)));
        }
    }
    vlSelf->__Vcellout__credit___05F1__count = __Vdly____Vcellout__credit___05F1__count;
    vlSelf->__Vcellout__credit___05F0__count = __Vdly____Vcellout__credit___05F0__count;
    vlSelf->__PVT__credit___05Fcount[1U] = vlSelf->__Vcellout__credit___05F1__count;
    vlSelf->__PVT__credit___05Fcount[0U] = vlSelf->__Vcellout__credit___05F0__count;
    vlSelf->__PVT__recv___05Frdy = 0U;
    vlSelf->__PVT__send___05Fen = 0U;
    if (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__tile___05F14.__PVT__send_to_controller_pkt___05Fval) {
        if (((~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__tile___05F14.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                 >> 0xaU)) & (0U < vlSelf->__PVT__credit___05Fcount
                              [0U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
        if (((vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__tile___05F14.__PVT__send_to_controller_pkt___05Fmsg[6U] 
              >> 0xaU) & (0U < vlSelf->__PVT__credit___05Fcount
                          [1U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
    }
    vlSelf->__PVT__credit___05Fdecr[0U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__tile___05F14.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                                 >> 0xaU)));
    vlSelf->__PVT__credit___05Fdecr[1U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__tile___05F14.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                              >> 0xaU));
}

VL_INLINE_OPT void Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__ctrl_ring__DOT__recv_adp___05F15__0(Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__ctrl_ring__DOT__recv_adp___05F15__0\n"); );
    // Init
    CData/*1:0*/ __Vdly____Vcellout__credit___05F0__count;
    __Vdly____Vcellout__credit___05F0__count = 0;
    CData/*1:0*/ __Vdly____Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F1__count = 0;
    // Body
    __Vdly____Vcellout__credit___05F1__count = vlSelf->__Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F0__count = vlSelf->__Vcellout__credit___05F0__count;
    if (vlSymsp->TOP.cgra_test__DOT__reset) {
        __Vdly____Vcellout__credit___05F1__count = 2U;
        __Vdly____Vcellout__credit___05F0__count = 2U;
    } else {
        if ((vlSelf->__PVT__send___05Fyum[1U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [1U]))) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F1__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [1U]) & vlSelf->__PVT__credit___05Fdecr
                    [1U])) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F1__count) 
                         - (IData)(1U)));
        }
        if ((vlSelf->__PVT__send___05Fyum[0U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [0U]))) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F0__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [0U]) & vlSelf->__PVT__credit___05Fdecr
                    [0U])) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F0__count) 
                         - (IData)(1U)));
        }
    }
    vlSelf->__Vcellout__credit___05F1__count = __Vdly____Vcellout__credit___05F1__count;
    vlSelf->__Vcellout__credit___05F0__count = __Vdly____Vcellout__credit___05F0__count;
    vlSelf->__PVT__credit___05Fcount[1U] = vlSelf->__Vcellout__credit___05F1__count;
    vlSelf->__PVT__credit___05Fcount[0U] = vlSelf->__Vcellout__credit___05F0__count;
    vlSelf->__PVT__recv___05Frdy = 0U;
    vlSelf->__PVT__send___05Fen = 0U;
    if (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__tile___05F15.__PVT__send_to_controller_pkt___05Fval) {
        if (((~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__tile___05F15.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                 >> 0xaU)) & (0U < vlSelf->__PVT__credit___05Fcount
                              [0U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
        if (((vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__tile___05F15.__PVT__send_to_controller_pkt___05Fmsg[6U] 
              >> 0xaU) & (0U < vlSelf->__PVT__credit___05Fcount
                          [1U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
    }
    vlSelf->__PVT__credit___05Fdecr[0U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__tile___05F15.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                                 >> 0xaU)));
    vlSelf->__PVT__credit___05Fdecr[1U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__tile___05F15.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                              >> 0xaU));
}

VL_INLINE_OPT void Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__ctrl_ring__DOT__recv_adp___05F16__1(Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__ctrl_ring__DOT__recv_adp___05F16__1\n"); );
    // Body
    vlSelf->__PVT__send___05Fen = 0U;
    vlSelf->__PVT__recv___05Frdy = 0U;
    if (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__controller___05Fsend_to_ctrl_ring_pkt___05Fval) {
        if (((~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__controller___05Fsend_to_ctrl_ring_pkt___05Fmsg[6U] 
                 >> 0xaU)) & (0U < vlSelf->__PVT__credit___05Fcount
                              [0U]))) {
            vlSelf->__PVT__send___05Fen = 1U;
            vlSelf->__PVT__recv___05Frdy = 1U;
        }
        if (((vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__controller___05Fsend_to_ctrl_ring_pkt___05Fmsg[6U] 
              >> 0xaU) & (0U < vlSelf->__PVT__credit___05Fcount
                          [1U]))) {
            vlSelf->__PVT__send___05Fen = 1U;
            vlSelf->__PVT__recv___05Frdy = 1U;
        }
    }
    vlSelf->__PVT__credit___05Fdecr[0U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__controller___05Fsend_to_ctrl_ring_pkt___05Fmsg[6U] 
                                                 >> 0xaU)));
    vlSelf->__PVT__credit___05Fdecr[1U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__controller___05Fsend_to_ctrl_ring_pkt___05Fmsg[6U] 
                                              >> 0xaU));
}

VL_INLINE_OPT void Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__recv_adp___05F0__0(Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__recv_adp___05F0__0\n"); );
    // Init
    CData/*1:0*/ __Vdly____Vcellout__credit___05F0__count;
    __Vdly____Vcellout__credit___05F0__count = 0;
    CData/*1:0*/ __Vdly____Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F1__count = 0;
    // Body
    __Vdly____Vcellout__credit___05F1__count = vlSelf->__Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F0__count = vlSelf->__Vcellout__credit___05F0__count;
    if (vlSymsp->TOP.cgra_test__DOT__reset) {
        __Vdly____Vcellout__credit___05F1__count = 2U;
        __Vdly____Vcellout__credit___05F0__count = 2U;
    } else {
        if ((vlSelf->__PVT__send___05Fyum[1U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [1U]))) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F1__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [1U]) & vlSelf->__PVT__credit___05Fdecr
                    [1U])) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F1__count) 
                         - (IData)(1U)));
        }
        if ((vlSelf->__PVT__send___05Fyum[0U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [0U]))) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F0__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [0U]) & vlSelf->__PVT__credit___05Fdecr
                    [0U])) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F0__count) 
                         - (IData)(1U)));
        }
    }
    vlSelf->__Vcellout__credit___05F1__count = __Vdly____Vcellout__credit___05F1__count;
    vlSelf->__Vcellout__credit___05F0__count = __Vdly____Vcellout__credit___05F0__count;
    vlSelf->__PVT__credit___05Fcount[1U] = vlSelf->__Vcellout__credit___05F1__count;
    vlSelf->__PVT__credit___05Fcount[0U] = vlSelf->__Vcellout__credit___05F0__count;
    vlSelf->__PVT__recv___05Frdy = 0U;
    vlSelf->__PVT__send___05Fen = 0U;
    if (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__tile___05F0.__PVT__send_to_controller_pkt___05Fval) {
        if (((~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__tile___05F0.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                 >> 0xaU)) & (0U < vlSelf->__PVT__credit___05Fcount
                              [0U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
        if (((vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__tile___05F0.__PVT__send_to_controller_pkt___05Fmsg[6U] 
              >> 0xaU) & (0U < vlSelf->__PVT__credit___05Fcount
                          [1U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
    }
    vlSelf->__PVT__credit___05Fdecr[0U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__tile___05F0.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                                 >> 0xaU)));
    vlSelf->__PVT__credit___05Fdecr[1U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__tile___05F0.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                              >> 0xaU));
}

VL_INLINE_OPT void Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__recv_adp___05F1__0(Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__recv_adp___05F1__0\n"); );
    // Init
    CData/*1:0*/ __Vdly____Vcellout__credit___05F0__count;
    __Vdly____Vcellout__credit___05F0__count = 0;
    CData/*1:0*/ __Vdly____Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F1__count = 0;
    // Body
    __Vdly____Vcellout__credit___05F1__count = vlSelf->__Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F0__count = vlSelf->__Vcellout__credit___05F0__count;
    if (vlSymsp->TOP.cgra_test__DOT__reset) {
        __Vdly____Vcellout__credit___05F1__count = 2U;
        __Vdly____Vcellout__credit___05F0__count = 2U;
    } else {
        if ((vlSelf->__PVT__send___05Fyum[1U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [1U]))) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F1__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [1U]) & vlSelf->__PVT__credit___05Fdecr
                    [1U])) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F1__count) 
                         - (IData)(1U)));
        }
        if ((vlSelf->__PVT__send___05Fyum[0U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [0U]))) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F0__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [0U]) & vlSelf->__PVT__credit___05Fdecr
                    [0U])) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F0__count) 
                         - (IData)(1U)));
        }
    }
    vlSelf->__Vcellout__credit___05F1__count = __Vdly____Vcellout__credit___05F1__count;
    vlSelf->__Vcellout__credit___05F0__count = __Vdly____Vcellout__credit___05F0__count;
    vlSelf->__PVT__credit___05Fcount[1U] = vlSelf->__Vcellout__credit___05F1__count;
    vlSelf->__PVT__credit___05Fcount[0U] = vlSelf->__Vcellout__credit___05F0__count;
    vlSelf->__PVT__recv___05Frdy = 0U;
    vlSelf->__PVT__send___05Fen = 0U;
    if (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__tile___05F1.__PVT__send_to_controller_pkt___05Fval) {
        if (((~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__tile___05F1.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                 >> 0xaU)) & (0U < vlSelf->__PVT__credit___05Fcount
                              [0U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
        if (((vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__tile___05F1.__PVT__send_to_controller_pkt___05Fmsg[6U] 
              >> 0xaU) & (0U < vlSelf->__PVT__credit___05Fcount
                          [1U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
    }
    vlSelf->__PVT__credit___05Fdecr[0U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__tile___05F1.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                                 >> 0xaU)));
    vlSelf->__PVT__credit___05Fdecr[1U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__tile___05F1.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                              >> 0xaU));
}

VL_INLINE_OPT void Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__recv_adp___05F2__0(Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__recv_adp___05F2__0\n"); );
    // Init
    CData/*1:0*/ __Vdly____Vcellout__credit___05F0__count;
    __Vdly____Vcellout__credit___05F0__count = 0;
    CData/*1:0*/ __Vdly____Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F1__count = 0;
    // Body
    __Vdly____Vcellout__credit___05F1__count = vlSelf->__Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F0__count = vlSelf->__Vcellout__credit___05F0__count;
    if (vlSymsp->TOP.cgra_test__DOT__reset) {
        __Vdly____Vcellout__credit___05F1__count = 2U;
        __Vdly____Vcellout__credit___05F0__count = 2U;
    } else {
        if ((vlSelf->__PVT__send___05Fyum[1U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [1U]))) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F1__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [1U]) & vlSelf->__PVT__credit___05Fdecr
                    [1U])) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F1__count) 
                         - (IData)(1U)));
        }
        if ((vlSelf->__PVT__send___05Fyum[0U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [0U]))) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F0__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [0U]) & vlSelf->__PVT__credit___05Fdecr
                    [0U])) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F0__count) 
                         - (IData)(1U)));
        }
    }
    vlSelf->__Vcellout__credit___05F1__count = __Vdly____Vcellout__credit___05F1__count;
    vlSelf->__Vcellout__credit___05F0__count = __Vdly____Vcellout__credit___05F0__count;
    vlSelf->__PVT__credit___05Fcount[1U] = vlSelf->__Vcellout__credit___05F1__count;
    vlSelf->__PVT__credit___05Fcount[0U] = vlSelf->__Vcellout__credit___05F0__count;
    vlSelf->__PVT__recv___05Frdy = 0U;
    vlSelf->__PVT__send___05Fen = 0U;
    if (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__tile___05F2.__PVT__send_to_controller_pkt___05Fval) {
        if (((~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__tile___05F2.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                 >> 0xaU)) & (0U < vlSelf->__PVT__credit___05Fcount
                              [0U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
        if (((vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__tile___05F2.__PVT__send_to_controller_pkt___05Fmsg[6U] 
              >> 0xaU) & (0U < vlSelf->__PVT__credit___05Fcount
                          [1U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
    }
    vlSelf->__PVT__credit___05Fdecr[0U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__tile___05F2.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                                 >> 0xaU)));
    vlSelf->__PVT__credit___05Fdecr[1U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__tile___05F2.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                              >> 0xaU));
}

VL_INLINE_OPT void Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__recv_adp___05F3__0(Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__recv_adp___05F3__0\n"); );
    // Init
    CData/*1:0*/ __Vdly____Vcellout__credit___05F0__count;
    __Vdly____Vcellout__credit___05F0__count = 0;
    CData/*1:0*/ __Vdly____Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F1__count = 0;
    // Body
    __Vdly____Vcellout__credit___05F1__count = vlSelf->__Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F0__count = vlSelf->__Vcellout__credit___05F0__count;
    if (vlSymsp->TOP.cgra_test__DOT__reset) {
        __Vdly____Vcellout__credit___05F1__count = 2U;
        __Vdly____Vcellout__credit___05F0__count = 2U;
    } else {
        if ((vlSelf->__PVT__send___05Fyum[1U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [1U]))) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F1__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [1U]) & vlSelf->__PVT__credit___05Fdecr
                    [1U])) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F1__count) 
                         - (IData)(1U)));
        }
        if ((vlSelf->__PVT__send___05Fyum[0U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [0U]))) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F0__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [0U]) & vlSelf->__PVT__credit___05Fdecr
                    [0U])) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F0__count) 
                         - (IData)(1U)));
        }
    }
    vlSelf->__Vcellout__credit___05F1__count = __Vdly____Vcellout__credit___05F1__count;
    vlSelf->__Vcellout__credit___05F0__count = __Vdly____Vcellout__credit___05F0__count;
    vlSelf->__PVT__credit___05Fcount[1U] = vlSelf->__Vcellout__credit___05F1__count;
    vlSelf->__PVT__credit___05Fcount[0U] = vlSelf->__Vcellout__credit___05F0__count;
    vlSelf->__PVT__recv___05Frdy = 0U;
    vlSelf->__PVT__send___05Fen = 0U;
    if (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__tile___05F3.__PVT__send_to_controller_pkt___05Fval) {
        if (((~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__tile___05F3.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                 >> 0xaU)) & (0U < vlSelf->__PVT__credit___05Fcount
                              [0U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
        if (((vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__tile___05F3.__PVT__send_to_controller_pkt___05Fmsg[6U] 
              >> 0xaU) & (0U < vlSelf->__PVT__credit___05Fcount
                          [1U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
    }
    vlSelf->__PVT__credit___05Fdecr[0U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__tile___05F3.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                                 >> 0xaU)));
    vlSelf->__PVT__credit___05Fdecr[1U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__tile___05F3.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                              >> 0xaU));
}

VL_INLINE_OPT void Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__recv_adp___05F4__0(Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__recv_adp___05F4__0\n"); );
    // Init
    CData/*1:0*/ __Vdly____Vcellout__credit___05F0__count;
    __Vdly____Vcellout__credit___05F0__count = 0;
    CData/*1:0*/ __Vdly____Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F1__count = 0;
    // Body
    __Vdly____Vcellout__credit___05F1__count = vlSelf->__Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F0__count = vlSelf->__Vcellout__credit___05F0__count;
    if (vlSymsp->TOP.cgra_test__DOT__reset) {
        __Vdly____Vcellout__credit___05F1__count = 2U;
        __Vdly____Vcellout__credit___05F0__count = 2U;
    } else {
        if ((vlSelf->__PVT__send___05Fyum[1U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [1U]))) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F1__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [1U]) & vlSelf->__PVT__credit___05Fdecr
                    [1U])) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F1__count) 
                         - (IData)(1U)));
        }
        if ((vlSelf->__PVT__send___05Fyum[0U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [0U]))) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F0__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [0U]) & vlSelf->__PVT__credit___05Fdecr
                    [0U])) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F0__count) 
                         - (IData)(1U)));
        }
    }
    vlSelf->__Vcellout__credit___05F1__count = __Vdly____Vcellout__credit___05F1__count;
    vlSelf->__Vcellout__credit___05F0__count = __Vdly____Vcellout__credit___05F0__count;
    vlSelf->__PVT__credit___05Fcount[1U] = vlSelf->__Vcellout__credit___05F1__count;
    vlSelf->__PVT__credit___05Fcount[0U] = vlSelf->__Vcellout__credit___05F0__count;
    vlSelf->__PVT__recv___05Frdy = 0U;
    vlSelf->__PVT__send___05Fen = 0U;
    if (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__tile___05F4.__PVT__send_to_controller_pkt___05Fval) {
        if (((~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__tile___05F4.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                 >> 0xaU)) & (0U < vlSelf->__PVT__credit___05Fcount
                              [0U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
        if (((vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__tile___05F4.__PVT__send_to_controller_pkt___05Fmsg[6U] 
              >> 0xaU) & (0U < vlSelf->__PVT__credit___05Fcount
                          [1U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
    }
    vlSelf->__PVT__credit___05Fdecr[0U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__tile___05F4.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                                 >> 0xaU)));
    vlSelf->__PVT__credit___05Fdecr[1U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__tile___05F4.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                              >> 0xaU));
}

VL_INLINE_OPT void Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__recv_adp___05F5__0(Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__recv_adp___05F5__0\n"); );
    // Init
    CData/*1:0*/ __Vdly____Vcellout__credit___05F0__count;
    __Vdly____Vcellout__credit___05F0__count = 0;
    CData/*1:0*/ __Vdly____Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F1__count = 0;
    // Body
    __Vdly____Vcellout__credit___05F1__count = vlSelf->__Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F0__count = vlSelf->__Vcellout__credit___05F0__count;
    if (vlSymsp->TOP.cgra_test__DOT__reset) {
        __Vdly____Vcellout__credit___05F1__count = 2U;
        __Vdly____Vcellout__credit___05F0__count = 2U;
    } else {
        if ((vlSelf->__PVT__send___05Fyum[1U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [1U]))) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F1__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [1U]) & vlSelf->__PVT__credit___05Fdecr
                    [1U])) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F1__count) 
                         - (IData)(1U)));
        }
        if ((vlSelf->__PVT__send___05Fyum[0U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [0U]))) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F0__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [0U]) & vlSelf->__PVT__credit___05Fdecr
                    [0U])) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F0__count) 
                         - (IData)(1U)));
        }
    }
    vlSelf->__Vcellout__credit___05F1__count = __Vdly____Vcellout__credit___05F1__count;
    vlSelf->__Vcellout__credit___05F0__count = __Vdly____Vcellout__credit___05F0__count;
    vlSelf->__PVT__credit___05Fcount[1U] = vlSelf->__Vcellout__credit___05F1__count;
    vlSelf->__PVT__credit___05Fcount[0U] = vlSelf->__Vcellout__credit___05F0__count;
    vlSelf->__PVT__recv___05Frdy = 0U;
    vlSelf->__PVT__send___05Fen = 0U;
    if (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__tile___05F5.__PVT__send_to_controller_pkt___05Fval) {
        if (((~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__tile___05F5.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                 >> 0xaU)) & (0U < vlSelf->__PVT__credit___05Fcount
                              [0U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
        if (((vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__tile___05F5.__PVT__send_to_controller_pkt___05Fmsg[6U] 
              >> 0xaU) & (0U < vlSelf->__PVT__credit___05Fcount
                          [1U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
    }
    vlSelf->__PVT__credit___05Fdecr[0U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__tile___05F5.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                                 >> 0xaU)));
    vlSelf->__PVT__credit___05Fdecr[1U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__tile___05F5.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                              >> 0xaU));
}

VL_INLINE_OPT void Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__recv_adp___05F6__0(Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__recv_adp___05F6__0\n"); );
    // Init
    CData/*1:0*/ __Vdly____Vcellout__credit___05F0__count;
    __Vdly____Vcellout__credit___05F0__count = 0;
    CData/*1:0*/ __Vdly____Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F1__count = 0;
    // Body
    __Vdly____Vcellout__credit___05F1__count = vlSelf->__Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F0__count = vlSelf->__Vcellout__credit___05F0__count;
    if (vlSymsp->TOP.cgra_test__DOT__reset) {
        __Vdly____Vcellout__credit___05F1__count = 2U;
        __Vdly____Vcellout__credit___05F0__count = 2U;
    } else {
        if ((vlSelf->__PVT__send___05Fyum[1U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [1U]))) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F1__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [1U]) & vlSelf->__PVT__credit___05Fdecr
                    [1U])) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F1__count) 
                         - (IData)(1U)));
        }
        if ((vlSelf->__PVT__send___05Fyum[0U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [0U]))) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F0__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [0U]) & vlSelf->__PVT__credit___05Fdecr
                    [0U])) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F0__count) 
                         - (IData)(1U)));
        }
    }
    vlSelf->__Vcellout__credit___05F1__count = __Vdly____Vcellout__credit___05F1__count;
    vlSelf->__Vcellout__credit___05F0__count = __Vdly____Vcellout__credit___05F0__count;
    vlSelf->__PVT__credit___05Fcount[1U] = vlSelf->__Vcellout__credit___05F1__count;
    vlSelf->__PVT__credit___05Fcount[0U] = vlSelf->__Vcellout__credit___05F0__count;
    vlSelf->__PVT__recv___05Frdy = 0U;
    vlSelf->__PVT__send___05Fen = 0U;
    if (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__tile___05F6.__PVT__send_to_controller_pkt___05Fval) {
        if (((~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__tile___05F6.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                 >> 0xaU)) & (0U < vlSelf->__PVT__credit___05Fcount
                              [0U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
        if (((vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__tile___05F6.__PVT__send_to_controller_pkt___05Fmsg[6U] 
              >> 0xaU) & (0U < vlSelf->__PVT__credit___05Fcount
                          [1U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
    }
    vlSelf->__PVT__credit___05Fdecr[0U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__tile___05F6.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                                 >> 0xaU)));
    vlSelf->__PVT__credit___05Fdecr[1U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__tile___05F6.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                              >> 0xaU));
}

VL_INLINE_OPT void Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__recv_adp___05F7__0(Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__recv_adp___05F7__0\n"); );
    // Init
    CData/*1:0*/ __Vdly____Vcellout__credit___05F0__count;
    __Vdly____Vcellout__credit___05F0__count = 0;
    CData/*1:0*/ __Vdly____Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F1__count = 0;
    // Body
    __Vdly____Vcellout__credit___05F1__count = vlSelf->__Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F0__count = vlSelf->__Vcellout__credit___05F0__count;
    if (vlSymsp->TOP.cgra_test__DOT__reset) {
        __Vdly____Vcellout__credit___05F1__count = 2U;
        __Vdly____Vcellout__credit___05F0__count = 2U;
    } else {
        if ((vlSelf->__PVT__send___05Fyum[1U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [1U]))) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F1__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [1U]) & vlSelf->__PVT__credit___05Fdecr
                    [1U])) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F1__count) 
                         - (IData)(1U)));
        }
        if ((vlSelf->__PVT__send___05Fyum[0U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [0U]))) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F0__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [0U]) & vlSelf->__PVT__credit___05Fdecr
                    [0U])) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F0__count) 
                         - (IData)(1U)));
        }
    }
    vlSelf->__Vcellout__credit___05F1__count = __Vdly____Vcellout__credit___05F1__count;
    vlSelf->__Vcellout__credit___05F0__count = __Vdly____Vcellout__credit___05F0__count;
    vlSelf->__PVT__credit___05Fcount[1U] = vlSelf->__Vcellout__credit___05F1__count;
    vlSelf->__PVT__credit___05Fcount[0U] = vlSelf->__Vcellout__credit___05F0__count;
    vlSelf->__PVT__recv___05Frdy = 0U;
    vlSelf->__PVT__send___05Fen = 0U;
    if (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__tile___05F7.__PVT__send_to_controller_pkt___05Fval) {
        if (((~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__tile___05F7.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                 >> 0xaU)) & (0U < vlSelf->__PVT__credit___05Fcount
                              [0U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
        if (((vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__tile___05F7.__PVT__send_to_controller_pkt___05Fmsg[6U] 
              >> 0xaU) & (0U < vlSelf->__PVT__credit___05Fcount
                          [1U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
    }
    vlSelf->__PVT__credit___05Fdecr[0U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__tile___05F7.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                                 >> 0xaU)));
    vlSelf->__PVT__credit___05Fdecr[1U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__tile___05F7.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                              >> 0xaU));
}

VL_INLINE_OPT void Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__recv_adp___05F8__0(Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__recv_adp___05F8__0\n"); );
    // Init
    CData/*1:0*/ __Vdly____Vcellout__credit___05F0__count;
    __Vdly____Vcellout__credit___05F0__count = 0;
    CData/*1:0*/ __Vdly____Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F1__count = 0;
    // Body
    __Vdly____Vcellout__credit___05F1__count = vlSelf->__Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F0__count = vlSelf->__Vcellout__credit___05F0__count;
    if (vlSymsp->TOP.cgra_test__DOT__reset) {
        __Vdly____Vcellout__credit___05F1__count = 2U;
        __Vdly____Vcellout__credit___05F0__count = 2U;
    } else {
        if ((vlSelf->__PVT__send___05Fyum[1U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [1U]))) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F1__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [1U]) & vlSelf->__PVT__credit___05Fdecr
                    [1U])) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F1__count) 
                         - (IData)(1U)));
        }
        if ((vlSelf->__PVT__send___05Fyum[0U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [0U]))) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F0__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [0U]) & vlSelf->__PVT__credit___05Fdecr
                    [0U])) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F0__count) 
                         - (IData)(1U)));
        }
    }
    vlSelf->__Vcellout__credit___05F1__count = __Vdly____Vcellout__credit___05F1__count;
    vlSelf->__Vcellout__credit___05F0__count = __Vdly____Vcellout__credit___05F0__count;
    vlSelf->__PVT__credit___05Fcount[1U] = vlSelf->__Vcellout__credit___05F1__count;
    vlSelf->__PVT__credit___05Fcount[0U] = vlSelf->__Vcellout__credit___05F0__count;
    vlSelf->__PVT__recv___05Frdy = 0U;
    vlSelf->__PVT__send___05Fen = 0U;
    if (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__tile___05F8.__PVT__send_to_controller_pkt___05Fval) {
        if (((~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__tile___05F8.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                 >> 0xaU)) & (0U < vlSelf->__PVT__credit___05Fcount
                              [0U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
        if (((vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__tile___05F8.__PVT__send_to_controller_pkt___05Fmsg[6U] 
              >> 0xaU) & (0U < vlSelf->__PVT__credit___05Fcount
                          [1U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
    }
    vlSelf->__PVT__credit___05Fdecr[0U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__tile___05F8.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                                 >> 0xaU)));
    vlSelf->__PVT__credit___05Fdecr[1U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__tile___05F8.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                              >> 0xaU));
}

VL_INLINE_OPT void Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__recv_adp___05F9__0(Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__recv_adp___05F9__0\n"); );
    // Init
    CData/*1:0*/ __Vdly____Vcellout__credit___05F0__count;
    __Vdly____Vcellout__credit___05F0__count = 0;
    CData/*1:0*/ __Vdly____Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F1__count = 0;
    // Body
    __Vdly____Vcellout__credit___05F1__count = vlSelf->__Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F0__count = vlSelf->__Vcellout__credit___05F0__count;
    if (vlSymsp->TOP.cgra_test__DOT__reset) {
        __Vdly____Vcellout__credit___05F1__count = 2U;
        __Vdly____Vcellout__credit___05F0__count = 2U;
    } else {
        if ((vlSelf->__PVT__send___05Fyum[1U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [1U]))) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F1__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [1U]) & vlSelf->__PVT__credit___05Fdecr
                    [1U])) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F1__count) 
                         - (IData)(1U)));
        }
        if ((vlSelf->__PVT__send___05Fyum[0U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [0U]))) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F0__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [0U]) & vlSelf->__PVT__credit___05Fdecr
                    [0U])) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F0__count) 
                         - (IData)(1U)));
        }
    }
    vlSelf->__Vcellout__credit___05F1__count = __Vdly____Vcellout__credit___05F1__count;
    vlSelf->__Vcellout__credit___05F0__count = __Vdly____Vcellout__credit___05F0__count;
    vlSelf->__PVT__credit___05Fcount[1U] = vlSelf->__Vcellout__credit___05F1__count;
    vlSelf->__PVT__credit___05Fcount[0U] = vlSelf->__Vcellout__credit___05F0__count;
    vlSelf->__PVT__recv___05Frdy = 0U;
    vlSelf->__PVT__send___05Fen = 0U;
    if (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__tile___05F9.__PVT__send_to_controller_pkt___05Fval) {
        if (((~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__tile___05F9.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                 >> 0xaU)) & (0U < vlSelf->__PVT__credit___05Fcount
                              [0U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
        if (((vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__tile___05F9.__PVT__send_to_controller_pkt___05Fmsg[6U] 
              >> 0xaU) & (0U < vlSelf->__PVT__credit___05Fcount
                          [1U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
    }
    vlSelf->__PVT__credit___05Fdecr[0U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__tile___05F9.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                                 >> 0xaU)));
    vlSelf->__PVT__credit___05Fdecr[1U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__tile___05F9.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                              >> 0xaU));
}

VL_INLINE_OPT void Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__recv_adp___05F10__0(Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__recv_adp___05F10__0\n"); );
    // Init
    CData/*1:0*/ __Vdly____Vcellout__credit___05F0__count;
    __Vdly____Vcellout__credit___05F0__count = 0;
    CData/*1:0*/ __Vdly____Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F1__count = 0;
    // Body
    __Vdly____Vcellout__credit___05F1__count = vlSelf->__Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F0__count = vlSelf->__Vcellout__credit___05F0__count;
    if (vlSymsp->TOP.cgra_test__DOT__reset) {
        __Vdly____Vcellout__credit___05F1__count = 2U;
        __Vdly____Vcellout__credit___05F0__count = 2U;
    } else {
        if ((vlSelf->__PVT__send___05Fyum[1U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [1U]))) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F1__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [1U]) & vlSelf->__PVT__credit___05Fdecr
                    [1U])) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F1__count) 
                         - (IData)(1U)));
        }
        if ((vlSelf->__PVT__send___05Fyum[0U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [0U]))) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F0__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [0U]) & vlSelf->__PVT__credit___05Fdecr
                    [0U])) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F0__count) 
                         - (IData)(1U)));
        }
    }
    vlSelf->__Vcellout__credit___05F1__count = __Vdly____Vcellout__credit___05F1__count;
    vlSelf->__Vcellout__credit___05F0__count = __Vdly____Vcellout__credit___05F0__count;
    vlSelf->__PVT__credit___05Fcount[1U] = vlSelf->__Vcellout__credit___05F1__count;
    vlSelf->__PVT__credit___05Fcount[0U] = vlSelf->__Vcellout__credit___05F0__count;
    vlSelf->__PVT__recv___05Frdy = 0U;
    vlSelf->__PVT__send___05Fen = 0U;
    if (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__tile___05F10.__PVT__send_to_controller_pkt___05Fval) {
        if (((~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__tile___05F10.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                 >> 0xaU)) & (0U < vlSelf->__PVT__credit___05Fcount
                              [0U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
        if (((vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__tile___05F10.__PVT__send_to_controller_pkt___05Fmsg[6U] 
              >> 0xaU) & (0U < vlSelf->__PVT__credit___05Fcount
                          [1U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
    }
    vlSelf->__PVT__credit___05Fdecr[0U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__tile___05F10.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                                 >> 0xaU)));
    vlSelf->__PVT__credit___05Fdecr[1U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__tile___05F10.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                              >> 0xaU));
}

VL_INLINE_OPT void Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__recv_adp___05F11__0(Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__recv_adp___05F11__0\n"); );
    // Init
    CData/*1:0*/ __Vdly____Vcellout__credit___05F0__count;
    __Vdly____Vcellout__credit___05F0__count = 0;
    CData/*1:0*/ __Vdly____Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F1__count = 0;
    // Body
    __Vdly____Vcellout__credit___05F1__count = vlSelf->__Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F0__count = vlSelf->__Vcellout__credit___05F0__count;
    if (vlSymsp->TOP.cgra_test__DOT__reset) {
        __Vdly____Vcellout__credit___05F1__count = 2U;
        __Vdly____Vcellout__credit___05F0__count = 2U;
    } else {
        if ((vlSelf->__PVT__send___05Fyum[1U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [1U]))) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F1__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [1U]) & vlSelf->__PVT__credit___05Fdecr
                    [1U])) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F1__count) 
                         - (IData)(1U)));
        }
        if ((vlSelf->__PVT__send___05Fyum[0U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [0U]))) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F0__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [0U]) & vlSelf->__PVT__credit___05Fdecr
                    [0U])) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F0__count) 
                         - (IData)(1U)));
        }
    }
    vlSelf->__Vcellout__credit___05F1__count = __Vdly____Vcellout__credit___05F1__count;
    vlSelf->__Vcellout__credit___05F0__count = __Vdly____Vcellout__credit___05F0__count;
    vlSelf->__PVT__credit___05Fcount[1U] = vlSelf->__Vcellout__credit___05F1__count;
    vlSelf->__PVT__credit___05Fcount[0U] = vlSelf->__Vcellout__credit___05F0__count;
    vlSelf->__PVT__recv___05Frdy = 0U;
    vlSelf->__PVT__send___05Fen = 0U;
    if (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__tile___05F11.__PVT__send_to_controller_pkt___05Fval) {
        if (((~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__tile___05F11.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                 >> 0xaU)) & (0U < vlSelf->__PVT__credit___05Fcount
                              [0U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
        if (((vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__tile___05F11.__PVT__send_to_controller_pkt___05Fmsg[6U] 
              >> 0xaU) & (0U < vlSelf->__PVT__credit___05Fcount
                          [1U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
    }
    vlSelf->__PVT__credit___05Fdecr[0U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__tile___05F11.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                                 >> 0xaU)));
    vlSelf->__PVT__credit___05Fdecr[1U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__tile___05F11.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                              >> 0xaU));
}

VL_INLINE_OPT void Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__recv_adp___05F12__0(Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__recv_adp___05F12__0\n"); );
    // Init
    CData/*1:0*/ __Vdly____Vcellout__credit___05F0__count;
    __Vdly____Vcellout__credit___05F0__count = 0;
    CData/*1:0*/ __Vdly____Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F1__count = 0;
    // Body
    __Vdly____Vcellout__credit___05F1__count = vlSelf->__Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F0__count = vlSelf->__Vcellout__credit___05F0__count;
    if (vlSymsp->TOP.cgra_test__DOT__reset) {
        __Vdly____Vcellout__credit___05F1__count = 2U;
        __Vdly____Vcellout__credit___05F0__count = 2U;
    } else {
        if ((vlSelf->__PVT__send___05Fyum[1U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [1U]))) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F1__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [1U]) & vlSelf->__PVT__credit___05Fdecr
                    [1U])) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F1__count) 
                         - (IData)(1U)));
        }
        if ((vlSelf->__PVT__send___05Fyum[0U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [0U]))) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F0__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [0U]) & vlSelf->__PVT__credit___05Fdecr
                    [0U])) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F0__count) 
                         - (IData)(1U)));
        }
    }
    vlSelf->__Vcellout__credit___05F1__count = __Vdly____Vcellout__credit___05F1__count;
    vlSelf->__Vcellout__credit___05F0__count = __Vdly____Vcellout__credit___05F0__count;
    vlSelf->__PVT__credit___05Fcount[1U] = vlSelf->__Vcellout__credit___05F1__count;
    vlSelf->__PVT__credit___05Fcount[0U] = vlSelf->__Vcellout__credit___05F0__count;
    vlSelf->__PVT__recv___05Frdy = 0U;
    vlSelf->__PVT__send___05Fen = 0U;
    if (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__tile___05F12.__PVT__send_to_controller_pkt___05Fval) {
        if (((~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__tile___05F12.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                 >> 0xaU)) & (0U < vlSelf->__PVT__credit___05Fcount
                              [0U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
        if (((vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__tile___05F12.__PVT__send_to_controller_pkt___05Fmsg[6U] 
              >> 0xaU) & (0U < vlSelf->__PVT__credit___05Fcount
                          [1U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
    }
    vlSelf->__PVT__credit___05Fdecr[0U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__tile___05F12.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                                 >> 0xaU)));
    vlSelf->__PVT__credit___05Fdecr[1U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__tile___05F12.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                              >> 0xaU));
}

VL_INLINE_OPT void Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__recv_adp___05F13__0(Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__recv_adp___05F13__0\n"); );
    // Init
    CData/*1:0*/ __Vdly____Vcellout__credit___05F0__count;
    __Vdly____Vcellout__credit___05F0__count = 0;
    CData/*1:0*/ __Vdly____Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F1__count = 0;
    // Body
    __Vdly____Vcellout__credit___05F1__count = vlSelf->__Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F0__count = vlSelf->__Vcellout__credit___05F0__count;
    if (vlSymsp->TOP.cgra_test__DOT__reset) {
        __Vdly____Vcellout__credit___05F1__count = 2U;
        __Vdly____Vcellout__credit___05F0__count = 2U;
    } else {
        if ((vlSelf->__PVT__send___05Fyum[1U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [1U]))) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F1__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [1U]) & vlSelf->__PVT__credit___05Fdecr
                    [1U])) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F1__count) 
                         - (IData)(1U)));
        }
        if ((vlSelf->__PVT__send___05Fyum[0U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [0U]))) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F0__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [0U]) & vlSelf->__PVT__credit___05Fdecr
                    [0U])) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F0__count) 
                         - (IData)(1U)));
        }
    }
    vlSelf->__Vcellout__credit___05F1__count = __Vdly____Vcellout__credit___05F1__count;
    vlSelf->__Vcellout__credit___05F0__count = __Vdly____Vcellout__credit___05F0__count;
    vlSelf->__PVT__credit___05Fcount[1U] = vlSelf->__Vcellout__credit___05F1__count;
    vlSelf->__PVT__credit___05Fcount[0U] = vlSelf->__Vcellout__credit___05F0__count;
    vlSelf->__PVT__recv___05Frdy = 0U;
    vlSelf->__PVT__send___05Fen = 0U;
    if (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__tile___05F13.__PVT__send_to_controller_pkt___05Fval) {
        if (((~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__tile___05F13.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                 >> 0xaU)) & (0U < vlSelf->__PVT__credit___05Fcount
                              [0U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
        if (((vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__tile___05F13.__PVT__send_to_controller_pkt___05Fmsg[6U] 
              >> 0xaU) & (0U < vlSelf->__PVT__credit___05Fcount
                          [1U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
    }
    vlSelf->__PVT__credit___05Fdecr[0U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__tile___05F13.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                                 >> 0xaU)));
    vlSelf->__PVT__credit___05Fdecr[1U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__tile___05F13.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                              >> 0xaU));
}

VL_INLINE_OPT void Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__recv_adp___05F14__0(Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__recv_adp___05F14__0\n"); );
    // Init
    CData/*1:0*/ __Vdly____Vcellout__credit___05F0__count;
    __Vdly____Vcellout__credit___05F0__count = 0;
    CData/*1:0*/ __Vdly____Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F1__count = 0;
    // Body
    __Vdly____Vcellout__credit___05F1__count = vlSelf->__Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F0__count = vlSelf->__Vcellout__credit___05F0__count;
    if (vlSymsp->TOP.cgra_test__DOT__reset) {
        __Vdly____Vcellout__credit___05F1__count = 2U;
        __Vdly____Vcellout__credit___05F0__count = 2U;
    } else {
        if ((vlSelf->__PVT__send___05Fyum[1U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [1U]))) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F1__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [1U]) & vlSelf->__PVT__credit___05Fdecr
                    [1U])) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F1__count) 
                         - (IData)(1U)));
        }
        if ((vlSelf->__PVT__send___05Fyum[0U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [0U]))) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F0__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [0U]) & vlSelf->__PVT__credit___05Fdecr
                    [0U])) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F0__count) 
                         - (IData)(1U)));
        }
    }
    vlSelf->__Vcellout__credit___05F1__count = __Vdly____Vcellout__credit___05F1__count;
    vlSelf->__Vcellout__credit___05F0__count = __Vdly____Vcellout__credit___05F0__count;
    vlSelf->__PVT__credit___05Fcount[1U] = vlSelf->__Vcellout__credit___05F1__count;
    vlSelf->__PVT__credit___05Fcount[0U] = vlSelf->__Vcellout__credit___05F0__count;
    vlSelf->__PVT__recv___05Frdy = 0U;
    vlSelf->__PVT__send___05Fen = 0U;
    if (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__tile___05F14.__PVT__send_to_controller_pkt___05Fval) {
        if (((~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__tile___05F14.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                 >> 0xaU)) & (0U < vlSelf->__PVT__credit___05Fcount
                              [0U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
        if (((vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__tile___05F14.__PVT__send_to_controller_pkt___05Fmsg[6U] 
              >> 0xaU) & (0U < vlSelf->__PVT__credit___05Fcount
                          [1U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
    }
    vlSelf->__PVT__credit___05Fdecr[0U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__tile___05F14.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                                 >> 0xaU)));
    vlSelf->__PVT__credit___05Fdecr[1U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__tile___05F14.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                              >> 0xaU));
}

VL_INLINE_OPT void Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__recv_adp___05F15__0(Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__recv_adp___05F15__0\n"); );
    // Init
    CData/*1:0*/ __Vdly____Vcellout__credit___05F0__count;
    __Vdly____Vcellout__credit___05F0__count = 0;
    CData/*1:0*/ __Vdly____Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F1__count = 0;
    // Body
    __Vdly____Vcellout__credit___05F1__count = vlSelf->__Vcellout__credit___05F1__count;
    __Vdly____Vcellout__credit___05F0__count = vlSelf->__Vcellout__credit___05F0__count;
    if (vlSymsp->TOP.cgra_test__DOT__reset) {
        __Vdly____Vcellout__credit___05F1__count = 2U;
        __Vdly____Vcellout__credit___05F0__count = 2U;
    } else {
        if ((vlSelf->__PVT__send___05Fyum[1U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [1U]))) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F1__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [1U]) & vlSelf->__PVT__credit___05Fdecr
                    [1U])) {
            __Vdly____Vcellout__credit___05F1__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F1__count) 
                         - (IData)(1U)));
        }
        if ((vlSelf->__PVT__send___05Fyum[0U] & (~ 
                                                 vlSelf->__PVT__credit___05Fdecr
                                                 [0U]))) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__Vcellout__credit___05F0__count)));
        } else if (((~ vlSelf->__PVT__send___05Fyum
                     [0U]) & vlSelf->__PVT__credit___05Fdecr
                    [0U])) {
            __Vdly____Vcellout__credit___05F0__count 
                = (3U & ((IData)(vlSelf->__Vcellout__credit___05F0__count) 
                         - (IData)(1U)));
        }
    }
    vlSelf->__Vcellout__credit___05F1__count = __Vdly____Vcellout__credit___05F1__count;
    vlSelf->__Vcellout__credit___05F0__count = __Vdly____Vcellout__credit___05F0__count;
    vlSelf->__PVT__credit___05Fcount[1U] = vlSelf->__Vcellout__credit___05F1__count;
    vlSelf->__PVT__credit___05Fcount[0U] = vlSelf->__Vcellout__credit___05F0__count;
    vlSelf->__PVT__recv___05Frdy = 0U;
    vlSelf->__PVT__send___05Fen = 0U;
    if (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__tile___05F15.__PVT__send_to_controller_pkt___05Fval) {
        if (((~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__tile___05F15.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                 >> 0xaU)) & (0U < vlSelf->__PVT__credit___05Fcount
                              [0U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
        if (((vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__tile___05F15.__PVT__send_to_controller_pkt___05Fmsg[6U] 
              >> 0xaU) & (0U < vlSelf->__PVT__credit___05Fcount
                          [1U]))) {
            vlSelf->__PVT__recv___05Frdy = 1U;
            vlSelf->__PVT__send___05Fen = 1U;
        }
    }
    vlSelf->__PVT__credit___05Fdecr[0U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__tile___05F15.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                                 >> 0xaU)));
    vlSelf->__PVT__credit___05Fdecr[1U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__tile___05F15.__PVT__send_to_controller_pkt___05Fmsg[6U] 
                                              >> 0xaU));
}

VL_INLINE_OPT void Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__recv_adp___05F16__1(Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_RecvRTL2CreditSendRTL___05F78338e65a32ae52c___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__recv_adp___05F16__1\n"); );
    // Body
    vlSelf->__PVT__send___05Fen = 0U;
    vlSelf->__PVT__recv___05Frdy = 0U;
    if (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__controller___05Fsend_to_ctrl_ring_pkt___05Fval) {
        if (((~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__controller___05Fsend_to_ctrl_ring_pkt___05Fmsg[6U] 
                 >> 0xaU)) & (0U < vlSelf->__PVT__credit___05Fcount
                              [0U]))) {
            vlSelf->__PVT__send___05Fen = 1U;
            vlSelf->__PVT__recv___05Frdy = 1U;
        }
        if (((vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__controller___05Fsend_to_ctrl_ring_pkt___05Fmsg[6U] 
              >> 0xaU) & (0U < vlSelf->__PVT__credit___05Fcount
                          [1U]))) {
            vlSelf->__PVT__send___05Fen = 1U;
            vlSelf->__PVT__recv___05Frdy = 1U;
        }
    }
    vlSelf->__PVT__credit___05Fdecr[0U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__controller___05Fsend_to_ctrl_ring_pkt___05Fmsg[6U] 
                                                 >> 0xaU)));
    vlSelf->__PVT__credit___05Fdecr[1U] = ((IData)(vlSelf->__PVT__send___05Fen) 
                                           & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__controller___05Fsend_to_ctrl_ring_pkt___05Fmsg[6U] 
                                              >> 0xaU));
}
