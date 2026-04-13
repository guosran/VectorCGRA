// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcgra_test.h for the primary calling header

#include "Vcgra_test__pch.h"
#include "Vcgra_test_RingRouterRTL___05Ffdc7e4156c73012f.h"

VL_INLINE_OPT void Vcgra_test_RingRouterRTL___05Ffdc7e4156c73012f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__ctrl_ring__DOT__routers___05F0__1(Vcgra_test_RingRouterRTL___05Ffdc7e4156c73012f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_RingRouterRTL___05Ffdc7e4156c73012f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__ctrl_ring__DOT__routers___05F0__1\n"); );
    // Body
    vlSelf->__PVT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][0U] 
        = vlSelf->__PVT__recv___05Fmsg[0U][0U];
    vlSelf->__PVT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][1U] 
        = vlSelf->__PVT__recv___05Fmsg[0U][1U];
    vlSelf->__PVT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][2U] 
        = vlSelf->__PVT__recv___05Fmsg[0U][2U];
    vlSelf->__PVT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][3U] 
        = vlSelf->__PVT__recv___05Fmsg[0U][3U];
    vlSelf->__PVT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][4U] 
        = vlSelf->__PVT__recv___05Fmsg[0U][4U];
    vlSelf->__PVT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][5U] 
        = vlSelf->__PVT__recv___05Fmsg[0U][5U];
    vlSelf->__PVT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][6U] 
        = vlSelf->__PVT__recv___05Fmsg[0U][6U];
    vlSelf->__PVT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][7U] 
        = vlSelf->__PVT__recv___05Fmsg[0U][7U];
    vlSelf->__PVT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata[0U][0U] 
        = vlSelf->__PVT__recv___05Fmsg[0U][0U];
    vlSelf->__PVT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata[0U][1U] 
        = vlSelf->__PVT__recv___05Fmsg[0U][1U];
    vlSelf->__PVT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata[0U][2U] 
        = vlSelf->__PVT__recv___05Fmsg[0U][2U];
    vlSelf->__PVT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata[0U][3U] 
        = vlSelf->__PVT__recv___05Fmsg[0U][3U];
    vlSelf->__PVT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata[0U][4U] 
        = vlSelf->__PVT__recv___05Fmsg[0U][4U];
    vlSelf->__PVT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata[0U][5U] 
        = vlSelf->__PVT__recv___05Fmsg[0U][5U];
    vlSelf->__PVT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata[0U][6U] 
        = vlSelf->__PVT__recv___05Fmsg[0U][6U];
    vlSelf->__PVT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata[0U][7U] 
        = vlSelf->__PVT__recv___05Fmsg[0U][7U];
    vlSelf->__PVT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][0U] 
        = vlSelf->__PVT__recv___05Fmsg[1U][0U];
    vlSelf->__PVT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][1U] 
        = vlSelf->__PVT__recv___05Fmsg[1U][1U];
    vlSelf->__PVT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][2U] 
        = vlSelf->__PVT__recv___05Fmsg[1U][2U];
    vlSelf->__PVT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][3U] 
        = vlSelf->__PVT__recv___05Fmsg[1U][3U];
    vlSelf->__PVT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][4U] 
        = vlSelf->__PVT__recv___05Fmsg[1U][4U];
    vlSelf->__PVT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][5U] 
        = vlSelf->__PVT__recv___05Fmsg[1U][5U];
    vlSelf->__PVT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][6U] 
        = vlSelf->__PVT__recv___05Fmsg[1U][6U];
    vlSelf->__PVT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][7U] 
        = vlSelf->__PVT__recv___05Fmsg[1U][7U];
    vlSelf->__PVT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata[0U][0U] 
        = vlSelf->__PVT__recv___05Fmsg[1U][0U];
    vlSelf->__PVT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata[0U][1U] 
        = vlSelf->__PVT__recv___05Fmsg[1U][1U];
    vlSelf->__PVT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata[0U][2U] 
        = vlSelf->__PVT__recv___05Fmsg[1U][2U];
    vlSelf->__PVT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata[0U][3U] 
        = vlSelf->__PVT__recv___05Fmsg[1U][3U];
    vlSelf->__PVT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata[0U][4U] 
        = vlSelf->__PVT__recv___05Fmsg[1U][4U];
    vlSelf->__PVT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata[0U][5U] 
        = vlSelf->__PVT__recv___05Fmsg[1U][5U];
    vlSelf->__PVT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata[0U][6U] 
        = vlSelf->__PVT__recv___05Fmsg[1U][6U];
    vlSelf->__PVT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata[0U][7U] 
        = vlSelf->__PVT__recv___05Fmsg[1U][7U];
    vlSelf->__PVT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][0U] 
        = vlSelf->__PVT__recv___05Fmsg[2U][0U];
    vlSelf->__PVT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][1U] 
        = vlSelf->__PVT__recv___05Fmsg[2U][1U];
    vlSelf->__PVT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][2U] 
        = vlSelf->__PVT__recv___05Fmsg[2U][2U];
    vlSelf->__PVT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][3U] 
        = vlSelf->__PVT__recv___05Fmsg[2U][3U];
    vlSelf->__PVT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][4U] 
        = vlSelf->__PVT__recv___05Fmsg[2U][4U];
    vlSelf->__PVT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][5U] 
        = vlSelf->__PVT__recv___05Fmsg[2U][5U];
    vlSelf->__PVT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][6U] 
        = vlSelf->__PVT__recv___05Fmsg[2U][6U];
    vlSelf->__PVT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][7U] 
        = vlSelf->__PVT__recv___05Fmsg[2U][7U];
    vlSelf->__PVT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata[0U][0U] 
        = vlSelf->__PVT__recv___05Fmsg[2U][0U];
    vlSelf->__PVT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata[0U][1U] 
        = vlSelf->__PVT__recv___05Fmsg[2U][1U];
    vlSelf->__PVT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata[0U][2U] 
        = vlSelf->__PVT__recv___05Fmsg[2U][2U];
    vlSelf->__PVT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata[0U][3U] 
        = vlSelf->__PVT__recv___05Fmsg[2U][3U];
    vlSelf->__PVT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata[0U][4U] 
        = vlSelf->__PVT__recv___05Fmsg[2U][4U];
    vlSelf->__PVT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata[0U][5U] 
        = vlSelf->__PVT__recv___05Fmsg[2U][5U];
    vlSelf->__PVT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata[0U][6U] 
        = vlSelf->__PVT__recv___05Fmsg[2U][6U];
    vlSelf->__PVT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata[0U][7U] 
        = vlSelf->__PVT__recv___05Fmsg[2U][7U];
}

VL_INLINE_OPT void Vcgra_test_RingRouterRTL___05Ffdc7e4156c73012f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__ctrl_ring__DOT__routers___05F0__2(Vcgra_test_RingRouterRTL___05Ffdc7e4156c73012f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_RingRouterRTL___05Ffdc7e4156c73012f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__ctrl_ring__DOT__routers___05F0__2\n"); );
    // Body
    if (vlSelf->__PVT__recv___05Fen[0U]) {
        vlSelf->__PVT__input_units___05F0__DOT__buffers___05Frecv___05Fval[0U] 
            = (1U & (~ (vlSelf->__PVT__recv___05Fmsg
                        [0U][6U] >> 0xaU)));
        vlSelf->__PVT__input_units___05F0__DOT__buffers___05Frecv___05Fval[1U] 
            = (1U & (vlSelf->__PVT__recv___05Fmsg[0U][6U] 
                     >> 0xaU));
    } else {
        vlSelf->__PVT__input_units___05F0__DOT__buffers___05Frecv___05Fval[0U] = 0U;
        vlSelf->__PVT__input_units___05F0__DOT__buffers___05Frecv___05Fval[1U] = 0U;
    }
    if (vlSelf->__PVT__recv___05Fen[1U]) {
        vlSelf->__PVT__input_units___05F1__DOT__buffers___05Frecv___05Fval[0U] 
            = (1U & (~ (vlSelf->__PVT__recv___05Fmsg
                        [1U][6U] >> 0xaU)));
        vlSelf->__PVT__input_units___05F1__DOT__buffers___05Frecv___05Fval[1U] 
            = (1U & (vlSelf->__PVT__recv___05Fmsg[1U][6U] 
                     >> 0xaU));
    } else {
        vlSelf->__PVT__input_units___05F1__DOT__buffers___05Frecv___05Fval[0U] = 0U;
        vlSelf->__PVT__input_units___05F1__DOT__buffers___05Frecv___05Fval[1U] = 0U;
    }
    if (vlSelf->__PVT__recv___05Fen[2U]) {
        vlSelf->__PVT__input_units___05F2__DOT__buffers___05Frecv___05Fval[0U] 
            = (1U & (~ (vlSelf->__PVT__recv___05Fmsg
                        [2U][6U] >> 0xaU)));
        vlSelf->__PVT__input_units___05F2__DOT__buffers___05Frecv___05Fval[1U] 
            = (1U & (vlSelf->__PVT__recv___05Fmsg[2U][6U] 
                     >> 0xaU));
    } else {
        vlSelf->__PVT__input_units___05F2__DOT__buffers___05Frecv___05Fval[0U] = 0U;
        vlSelf->__PVT__input_units___05F2__DOT__buffers___05Frecv___05Fval[1U] = 0U;
    }
    vlSelf->__PVT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl___05Fwen 
        = (vlSelf->__PVT__input_units___05F0__DOT__buffers___05Frecv___05Fval
           [0U] & (2U > (IData)(vlSelf->__PVT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl___05Fcount)));
    vlSelf->__PVT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl___05Fwen 
        = (vlSelf->__PVT__input_units___05F0__DOT__buffers___05Frecv___05Fval
           [1U] & (2U > (IData)(vlSelf->__PVT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl___05Fcount)));
    vlSelf->__PVT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl___05Fwen 
        = (vlSelf->__PVT__input_units___05F1__DOT__buffers___05Frecv___05Fval
           [0U] & (2U > (IData)(vlSelf->__PVT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl___05Fcount)));
    vlSelf->__PVT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl___05Fwen 
        = (vlSelf->__PVT__input_units___05F1__DOT__buffers___05Frecv___05Fval
           [1U] & (2U > (IData)(vlSelf->__PVT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl___05Fcount)));
    vlSelf->__PVT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl___05Fwen 
        = (vlSelf->__PVT__input_units___05F2__DOT__buffers___05Frecv___05Fval
           [0U] & (2U > (IData)(vlSelf->__PVT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl___05Fcount)));
    vlSelf->__PVT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl___05Fwen 
        = (vlSelf->__PVT__input_units___05F2__DOT__buffers___05Frecv___05Fval
           [1U] & (2U > (IData)(vlSelf->__PVT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl___05Fcount)));
    vlSelf->__PVT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwen[0U] 
        = vlSelf->__PVT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl___05Fwen;
    vlSelf->__PVT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwen[0U] 
        = vlSelf->__PVT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl___05Fwen;
    vlSelf->__PVT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwen[0U] 
        = vlSelf->__PVT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl___05Fwen;
    vlSelf->__PVT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwen[0U] 
        = vlSelf->__PVT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl___05Fwen;
    vlSelf->__PVT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwen[0U] 
        = vlSelf->__PVT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl___05Fwen;
    vlSelf->__PVT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwen[0U] 
        = vlSelf->__PVT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl___05Fwen;
}

VL_INLINE_OPT void Vcgra_test_RingRouterRTL___05Ffdc7e4156c73012f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__ctrl_ring__DOT__routers___05F0__3(Vcgra_test_RingRouterRTL___05Ffdc7e4156c73012f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_RingRouterRTL___05Ffdc7e4156c73012f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__ctrl_ring__DOT__routers___05F0__3\n"); );
    // Body
    vlSelf->__PVT__output_units___05Fsend___05Fyum[0U][0U] 
        = vlSelf->__PVT__send___05Fyum[0U][0U];
    vlSelf->__PVT__output_units___05Fsend___05Fyum[0U][1U] 
        = vlSelf->__PVT__send___05Fyum[0U][1U];
    vlSelf->__PVT__output_units___05Fsend___05Fyum[1U][0U] 
        = vlSelf->__PVT__send___05Fyum[1U][0U];
    vlSelf->__PVT__output_units___05Fsend___05Fyum[1U][1U] 
        = vlSelf->__PVT__send___05Fyum[1U][1U];
    vlSelf->__PVT__output_units___05Fsend___05Fyum[2U][0U] 
        = vlSelf->__PVT__send___05Fyum[2U][0U];
    vlSelf->__PVT__output_units___05Fsend___05Fyum[2U][1U] 
        = vlSelf->__PVT__send___05Fyum[2U][1U];
    vlSelf->__Vcellinp__output_units___05F0__send___05Fyum[0U] 
        = vlSelf->__PVT__output_units___05Fsend___05Fyum
        [0U][0U];
    vlSelf->__Vcellinp__output_units___05F0__send___05Fyum[1U] 
        = vlSelf->__PVT__output_units___05Fsend___05Fyum
        [0U][1U];
    vlSelf->__Vcellinp__output_units___05F1__send___05Fyum[0U] 
        = vlSelf->__PVT__output_units___05Fsend___05Fyum
        [1U][0U];
    vlSelf->__Vcellinp__output_units___05F1__send___05Fyum[1U] 
        = vlSelf->__PVT__output_units___05Fsend___05Fyum
        [1U][1U];
    vlSelf->__Vcellinp__output_units___05F2__send___05Fyum[0U] 
        = vlSelf->__PVT__output_units___05Fsend___05Fyum
        [2U][0U];
    vlSelf->__Vcellinp__output_units___05F2__send___05Fyum[1U] 
        = vlSelf->__PVT__output_units___05Fsend___05Fyum
        [2U][1U];
}
