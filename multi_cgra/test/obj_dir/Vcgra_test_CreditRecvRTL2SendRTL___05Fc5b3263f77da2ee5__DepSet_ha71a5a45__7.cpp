// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcgra_test.h for the primary calling header

#include "Vcgra_test__pch.h"
#include "Vcgra_test_CreditRecvRTL2SendRTL___05Fc5b3263f77da2ee5.h"
#include "Vcgra_test__Syms.h"

VL_INLINE_OPT void Vcgra_test_CreditRecvRTL2SendRTL___05Fc5b3263f77da2ee5___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__send_adp___05F15__1(Vcgra_test_CreditRecvRTL2SendRTL___05Fc5b3263f77da2ee5* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_CreditRecvRTL2SendRTL___05Fc5b3263f77da2ee5___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__send_adp___05F15__1\n"); );
    // Init
    CData/*1:0*/ __PVT__arbiter___05Freqs;
    __PVT__arbiter___05Freqs = 0;
    // Body
    vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][0U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [0xfU][0U];
    vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][1U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [0xfU][1U];
    vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][2U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [0xfU][2U];
    vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][3U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [0xfU][3U];
    vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][4U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [0xfU][4U];
    vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][5U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [0xfU][5U];
    vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][6U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [0xfU][6U];
    vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][7U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [0xfU][7U];
    vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata[0U][0U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [0xfU][0U];
    vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata[0U][1U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [0xfU][1U];
    vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata[0U][2U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [0xfU][2U];
    vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata[0U][3U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [0xfU][3U];
    vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata[0U][4U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [0xfU][4U];
    vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata[0U][5U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [0xfU][5U];
    vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata[0U][6U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [0xfU][6U];
    vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata[0U][7U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [0xfU][7U];
    vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[1U][0U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [0xfU][0U];
    vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[1U][1U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [0xfU][1U];
    vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[1U][2U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [0xfU][2U];
    vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[1U][3U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [0xfU][3U];
    vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[1U][4U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [0xfU][4U];
    vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[1U][5U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [0xfU][5U];
    vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[1U][6U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [0xfU][6U];
    vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[1U][7U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [0xfU][7U];
    vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[1U][0U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [0xfU][0U];
    vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[1U][1U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [0xfU][1U];
    vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[1U][2U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [0xfU][2U];
    vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[1U][3U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [0xfU][3U];
    vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[1U][4U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [0xfU][4U];
    vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[1U][5U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [0xfU][5U];
    vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[1U][6U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [0xfU][6U];
    vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[1U][7U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [0xfU][7U];
    if (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__ctrl_ring__DOT__send_adp___05Frecv___05Fen
        [0xfU]) {
        vlSelf->__PVT__buffers___05Frecv___05Fval[0U] 
            = (1U & (~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
                        [0xfU][6U] >> 0xaU)));
        vlSelf->__PVT__buffers___05Frecv___05Fval[1U] 
            = (1U & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
                     [0xfU][6U] >> 0xaU));
    } else {
        vlSelf->__PVT__buffers___05Frecv___05Fval[0U] = 0U;
        vlSelf->__PVT__buffers___05Frecv___05Fval[1U] = 0U;
    }
    vlSelf->__PVT__buffers___05Fsend___05Fmsg[0U][0U] 
        = vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_
        [(0U == (IData)(vlSelf->__PVT__buffers___05F0__DOT__ctrl___05Fcount))][0U];
    vlSelf->__PVT__buffers___05Fsend___05Fmsg[0U][1U] 
        = vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_
        [(0U == (IData)(vlSelf->__PVT__buffers___05F0__DOT__ctrl___05Fcount))][1U];
    vlSelf->__PVT__buffers___05Fsend___05Fmsg[0U][2U] 
        = vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_
        [(0U == (IData)(vlSelf->__PVT__buffers___05F0__DOT__ctrl___05Fcount))][2U];
    vlSelf->__PVT__buffers___05Fsend___05Fmsg[0U][3U] 
        = vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_
        [(0U == (IData)(vlSelf->__PVT__buffers___05F0__DOT__ctrl___05Fcount))][3U];
    vlSelf->__PVT__buffers___05Fsend___05Fmsg[0U][4U] 
        = vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_
        [(0U == (IData)(vlSelf->__PVT__buffers___05F0__DOT__ctrl___05Fcount))][4U];
    vlSelf->__PVT__buffers___05Fsend___05Fmsg[0U][5U] 
        = vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_
        [(0U == (IData)(vlSelf->__PVT__buffers___05F0__DOT__ctrl___05Fcount))][5U];
    vlSelf->__PVT__buffers___05Fsend___05Fmsg[0U][6U] 
        = vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_
        [(0U == (IData)(vlSelf->__PVT__buffers___05F0__DOT__ctrl___05Fcount))][6U];
    vlSelf->__PVT__buffers___05Fsend___05Fmsg[0U][7U] 
        = vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_
        [(0U == (IData)(vlSelf->__PVT__buffers___05F0__DOT__ctrl___05Fcount))][7U];
    vlSelf->__PVT__buffers___05Fsend___05Fmsg[1U][0U] 
        = vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_
        [(0U == (IData)(vlSelf->__PVT__buffers___05F1__DOT__ctrl___05Fcount))][0U];
    vlSelf->__PVT__buffers___05Fsend___05Fmsg[1U][1U] 
        = vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_
        [(0U == (IData)(vlSelf->__PVT__buffers___05F1__DOT__ctrl___05Fcount))][1U];
    vlSelf->__PVT__buffers___05Fsend___05Fmsg[1U][2U] 
        = vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_
        [(0U == (IData)(vlSelf->__PVT__buffers___05F1__DOT__ctrl___05Fcount))][2U];
    vlSelf->__PVT__buffers___05Fsend___05Fmsg[1U][3U] 
        = vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_
        [(0U == (IData)(vlSelf->__PVT__buffers___05F1__DOT__ctrl___05Fcount))][3U];
    vlSelf->__PVT__buffers___05Fsend___05Fmsg[1U][4U] 
        = vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_
        [(0U == (IData)(vlSelf->__PVT__buffers___05F1__DOT__ctrl___05Fcount))][4U];
    vlSelf->__PVT__buffers___05Fsend___05Fmsg[1U][5U] 
        = vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_
        [(0U == (IData)(vlSelf->__PVT__buffers___05F1__DOT__ctrl___05Fcount))][5U];
    vlSelf->__PVT__buffers___05Fsend___05Fmsg[1U][6U] 
        = vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_
        [(0U == (IData)(vlSelf->__PVT__buffers___05F1__DOT__ctrl___05Fcount))][6U];
    vlSelf->__PVT__buffers___05Fsend___05Fmsg[1U][7U] 
        = vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_
        [(0U == (IData)(vlSelf->__PVT__buffers___05F1__DOT__ctrl___05Fcount))][7U];
    vlSelf->__PVT__buffers___05F0__DOT__ctrl___05Fwen 
        = (vlSelf->__PVT__buffers___05Frecv___05Fval
           [0U] & (2U > (IData)(vlSelf->__PVT__buffers___05F0__DOT__ctrl___05Fcount)));
    vlSelf->__PVT__buffers___05F1__DOT__ctrl___05Fwen 
        = (vlSelf->__PVT__buffers___05Frecv___05Fval
           [1U] & (2U > (IData)(vlSelf->__PVT__buffers___05F1__DOT__ctrl___05Fcount)));
    vlSelf->__Vcellout__buffers___05F1__send___05Fval 
        = ((0U < (IData)(vlSelf->__PVT__buffers___05F1__DOT__ctrl___05Fcount)) 
           | vlSelf->__PVT__buffers___05Frecv___05Fval
           [1U]);
    vlSelf->__Vcellout__buffers___05F0__send___05Fval 
        = ((0U < (IData)(vlSelf->__PVT__buffers___05F0__DOT__ctrl___05Fcount)) 
           | vlSelf->__PVT__buffers___05Frecv___05Fval
           [0U]);
    vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf___05Fwen[0U] 
        = vlSelf->__PVT__buffers___05F0__DOT__ctrl___05Fwen;
    vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf___05Fwen[0U] 
        = vlSelf->__PVT__buffers___05F1__DOT__ctrl___05Fwen;
    vlSelf->__PVT__buffers___05Fsend___05Fval[1U] = vlSelf->__Vcellout__buffers___05F1__send___05Fval;
    vlSelf->__PVT__buffers___05Fsend___05Fval[0U] = vlSelf->__Vcellout__buffers___05F0__send___05Fval;
    __PVT__arbiter___05Freqs = (((IData)(vlSelf->__Vcellout__buffers___05F1__send___05Fval) 
                                 << 1U) | (IData)(vlSelf->__Vcellout__buffers___05F0__send___05Fval));
    vlSelf->__PVT__arbiter__DOT__kills = (1U | (IData)(vlSelf->__PVT__arbiter__DOT__kills));
    if ((1U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_h1d40eedc__0 
            = (1U & (IData)(__PVT__arbiter___05Freqs));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x1dU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_h1d40eedc__0) 
                                                 << 1U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_h1d40eedc__1 
            = (1U & ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                     | (IData)(__PVT__arbiter___05Freqs)));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x1dU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_h1d40eedc__1) 
                                                 << 1U));
    }
    if ((2U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_h1d40eedc__0 
            = (1U & ((IData)(__PVT__arbiter___05Freqs) 
                     >> 1U));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x1bU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_h1d40eedc__0) 
                                                 << 2U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_h1d40eedc__1 
            = (1U & (((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                      >> 1U) | ((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                                    >> 1U)) & ((IData)(__PVT__arbiter___05Freqs) 
                                               >> 1U))));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x1bU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_h1d40eedc__1) 
                                                 << 2U));
    }
    if ((4U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_h1d40eedc__0 
            = (1U & (IData)(__PVT__arbiter___05Freqs));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x17U 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_h1d40eedc__0) 
                                                 << 3U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_h1d40eedc__1 
            = (1U & (((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                      >> 2U) | ((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                                    >> 2U)) & (IData)(__PVT__arbiter___05Freqs))));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x17U 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_h1d40eedc__1) 
                                                 << 3U));
    }
    if ((8U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_h1d40eedc__0 
            = (1U & ((IData)(__PVT__arbiter___05Freqs) 
                     >> 1U));
        vlSelf->__PVT__arbiter__DOT__kills = ((0xfU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_h1d40eedc__0) 
                                                 << 4U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_h1d40eedc__1 
            = (1U & (((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                      >> 3U) | ((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                                    >> 3U)) & ((IData)(__PVT__arbiter___05Freqs) 
                                               >> 1U))));
        vlSelf->__PVT__arbiter__DOT__kills = ((0xfU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_h1d40eedc__1) 
                                                 << 4U));
    }
    vlSelf->__PVT__arbiter__DOT__grants_int = ((0xeU 
                                                & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                               | (1U 
                                                  & ((1U 
                                                      & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))
                                                      ? (IData)(__PVT__arbiter___05Freqs)
                                                      : 
                                                     ((~ (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                                      & (IData)(__PVT__arbiter___05Freqs)))));
    vlSelf->__PVT__arbiter__DOT__grants_int = ((0xdU 
                                                & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                               | (2U 
                                                  & (((2U 
                                                       & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))
                                                       ? 
                                                      ((IData)(__PVT__arbiter___05Freqs) 
                                                       >> 1U)
                                                       : 
                                                      ((~ 
                                                        ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                                                         >> 1U)) 
                                                       & ((IData)(__PVT__arbiter___05Freqs) 
                                                          >> 1U))) 
                                                     << 1U)));
    vlSelf->__PVT__arbiter__DOT__grants_int = ((0xbU 
                                                & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                               | (4U 
                                                  & (((4U 
                                                       & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))
                                                       ? (IData)(__PVT__arbiter___05Freqs)
                                                       : 
                                                      ((~ 
                                                        ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                                                         >> 2U)) 
                                                       & (IData)(__PVT__arbiter___05Freqs))) 
                                                     << 2U)));
    vlSelf->__PVT__arbiter__DOT__grants_int = ((7U 
                                                & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                               | (8U 
                                                  & (((8U 
                                                       & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))
                                                       ? 
                                                      ((IData)(__PVT__arbiter___05Freqs) 
                                                       >> 1U)
                                                       : 
                                                      ((~ 
                                                        ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                                                         >> 3U)) 
                                                       & ((IData)(__PVT__arbiter___05Freqs) 
                                                          >> 1U))) 
                                                     << 3U)));
    vlSelf->__PVT__arbiter___05Fgrants = (3U & ((IData)(vlSelf->__PVT__arbiter__DOT__grants_int) 
                                                | ((IData)(vlSelf->__PVT__arbiter__DOT__grants_int) 
                                                   >> 2U)));
    vlSelf->__PVT__send___05Fval = (0U < (IData)(vlSelf->__PVT__arbiter___05Fgrants));
    vlSelf->__PVT__encoder___05Fout = 0U;
    if ((1U & (IData)(vlSelf->__PVT__arbiter___05Fgrants))) {
        vlSelf->__PVT__encoder___05Fout = 0U;
    }
    if ((2U & (IData)(vlSelf->__PVT__arbiter___05Fgrants))) {
        vlSelf->__PVT__encoder___05Fout = 1U;
    }
    vlSelf->__PVT__send___05Fmsg[0U] = vlSelf->__PVT__buffers___05Fsend___05Fmsg
        [vlSelf->__PVT__encoder___05Fout][0U];
    vlSelf->__PVT__send___05Fmsg[1U] = vlSelf->__PVT__buffers___05Fsend___05Fmsg
        [vlSelf->__PVT__encoder___05Fout][1U];
    vlSelf->__PVT__send___05Fmsg[2U] = vlSelf->__PVT__buffers___05Fsend___05Fmsg
        [vlSelf->__PVT__encoder___05Fout][2U];
    vlSelf->__PVT__send___05Fmsg[3U] = vlSelf->__PVT__buffers___05Fsend___05Fmsg
        [vlSelf->__PVT__encoder___05Fout][3U];
    vlSelf->__PVT__send___05Fmsg[4U] = vlSelf->__PVT__buffers___05Fsend___05Fmsg
        [vlSelf->__PVT__encoder___05Fout][4U];
    vlSelf->__PVT__send___05Fmsg[5U] = vlSelf->__PVT__buffers___05Fsend___05Fmsg
        [vlSelf->__PVT__encoder___05Fout][5U];
    vlSelf->__PVT__send___05Fmsg[6U] = vlSelf->__PVT__buffers___05Fsend___05Fmsg
        [vlSelf->__PVT__encoder___05Fout][6U];
    vlSelf->__PVT__send___05Fmsg[7U] = vlSelf->__PVT__buffers___05Fsend___05Fmsg
        [vlSelf->__PVT__encoder___05Fout][7U];
}

VL_INLINE_OPT void Vcgra_test_CreditRecvRTL2SendRTL___05Fc5b3263f77da2ee5___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__send_adp___05F15__2(Vcgra_test_CreditRecvRTL2SendRTL___05Fc5b3263f77da2ee5* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_CreditRecvRTL2SendRTL___05Fc5b3263f77da2ee5___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__send_adp___05F15__2\n"); );
    // Body
    vlSelf->__PVT__buffers___05Fsend___05Frdy[0U] = 0U;
    vlSelf->__PVT__buffers___05Fsend___05Frdy[1U] = 0U;
    if ((0U < (IData)(vlSelf->__PVT__arbiter___05Fgrants))) {
        vlSelf->__PVT__buffers___05Fsend___05Frdy[vlSelf->__PVT__encoder___05Fout] 
            = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__tile___05F15.__PVT__recv_from_controller_pkt___05Frdy;
    }
    vlSelf->__PVT__recv___05Fyum[0U] = (vlSelf->__PVT__buffers___05Fsend___05Fval
                                        [0U] & vlSelf->__PVT__buffers___05Fsend___05Frdy
                                        [0U]);
    vlSelf->__PVT__recv___05Fyum[1U] = (vlSelf->__PVT__buffers___05Fsend___05Fval
                                        [1U] & vlSelf->__PVT__buffers___05Fsend___05Frdy
                                        [1U]);
}

extern const VlUnpacked<CData/*2:0*/, 128> Vcgra_test__ConstPool__TABLE_h0ff887fa_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vcgra_test__ConstPool__TABLE_h3c631caf_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vcgra_test__ConstPool__TABLE_hfd7f8679_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vcgra_test__ConstPool__TABLE_h7d6d9230_0;

VL_INLINE_OPT void Vcgra_test_CreditRecvRTL2SendRTL___05Fc5b3263f77da2ee5___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__send_adp___05F16__0(Vcgra_test_CreditRecvRTL2SendRTL___05Fc5b3263f77da2ee5* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_CreditRecvRTL2SendRTL___05Fc5b3263f77da2ee5___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__send_adp___05F16__0\n"); );
    // Init
    VlWide<8>/*228:0*/ buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h49975b65__0;
    VL_ZERO_W(229, buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h49975b65__0);
    VlWide<8>/*228:0*/ buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound_h49975b65__0;
    VL_ZERO_W(229, buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound_h49975b65__0);
    CData/*6:0*/ __Vtableidx135;
    __Vtableidx135 = 0;
    CData/*6:0*/ __Vtableidx136;
    __Vtableidx136 = 0;
    VlWide<8>/*228:0*/ __VdlyVal__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    VL_ZERO_W(229, __VdlyVal__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0);
    CData/*0:0*/ __VdlyDim0__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    VlWide<8>/*228:0*/ __VdlyVal__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0;
    VL_ZERO_W(229, __VdlyVal__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0);
    CData/*0:0*/ __VdlyDim0__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    // Body
    __VdlySet__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    __VdlySet__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata
            [0U][0U];
        __VdlyVal__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata
            [0U][1U];
        __VdlyVal__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata
            [0U][2U];
        __VdlyVal__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata
            [0U][3U];
        __VdlyVal__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata
            [0U][4U];
        __VdlyVal__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata
            [0U][5U];
        __VdlyVal__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[6U] 
            = vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata
            [0U][6U];
        __VdlyVal__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[7U] 
            = vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata
            [0U][7U];
        __VdlyDim0__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    if (vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][0U];
        __VdlyVal__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][1U];
        __VdlyVal__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][2U];
        __VdlyVal__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][3U];
        __VdlyVal__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][4U];
        __VdlyVal__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][5U];
        __VdlyVal__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U] 
            = vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][6U];
        __VdlyVal__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[7U] 
            = vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata
            [0U][7U];
        __VdlyDim0__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    __Vtableidx136 = (((IData)(vlSelf->__PVT__buffers___05F1__DOT__ctrl___05Fcount) 
                       << 5U) | (((IData)(vlSelf->__PVT__buffers___05F1__DOT__ctrl__DOT__head) 
                                  << 4U) | ((((IData)(vlSelf->__Vcellout__buffers___05F1__send___05Fval) 
                                              & vlSelf->__PVT__buffers___05Fsend___05Frdy
                                              [1U]) 
                                             << 3U) 
                                            | (((IData)(vlSelf->__PVT__buffers___05F1__DOT__ctrl__DOT__tail) 
                                                << 2U) 
                                               | (((IData)(vlSelf->__PVT__buffers___05F1__DOT__ctrl___05Fwen) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx136])) {
        vlSelf->__PVT__buffers___05F1__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx136];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx136])) {
        vlSelf->__PVT__buffers___05F1__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx136];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx136])) {
        vlSelf->__PVT__buffers___05F1__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx136];
    }
    __Vtableidx135 = (((IData)(vlSelf->__PVT__buffers___05F0__DOT__ctrl___05Fcount) 
                       << 5U) | (((IData)(vlSelf->__PVT__buffers___05F0__DOT__ctrl__DOT__head) 
                                  << 4U) | ((((IData)(vlSelf->__Vcellout__buffers___05F0__send___05Fval) 
                                              & vlSelf->__PVT__buffers___05Fsend___05Frdy
                                              [0U]) 
                                             << 3U) 
                                            | (((IData)(vlSelf->__PVT__buffers___05F0__DOT__ctrl__DOT__tail) 
                                                << 2U) 
                                               | (((IData)(vlSelf->__PVT__buffers___05F0__DOT__ctrl___05Fwen) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx135])) {
        vlSelf->__PVT__buffers___05F0__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx135];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx135])) {
        vlSelf->__PVT__buffers___05F0__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx135];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx135])) {
        vlSelf->__PVT__buffers___05F0__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx135];
    }
    if (vlSymsp->TOP.cgra_test__DOT__reset) {
        vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout = 1U;
    } else if (((0U != (IData)(vlSelf->__PVT__arbiter___05Fgrants)) 
                & (IData)(vlSelf->__PVT__send___05Fval))) {
        vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout 
            = ((2U & ((IData)(vlSelf->__PVT__arbiter___05Fgrants) 
                      << 1U)) | (1U & ((IData)(vlSelf->__PVT__arbiter___05Fgrants) 
                                       >> 1U)));
    }
    if (__VdlySet__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __VdlyVal__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __VdlyVal__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __VdlyVal__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __VdlyVal__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __VdlyVal__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __VdlyVal__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
        vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][6U] 
            = __VdlyVal__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[6U];
        vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][7U] 
            = __VdlyVal__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[7U];
    }
    if (__VdlySet__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __VdlyVal__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __VdlyVal__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __VdlyVal__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __VdlyVal__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __VdlyVal__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __VdlyVal__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
        vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][6U] 
            = __VdlyVal__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U];
        vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][7U] 
            = __VdlyVal__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[7U];
    }
    vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__buffers___05F1__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__buffers___05F1__DOT__ctrl__DOT__head;
    vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__buffers___05F0__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__buffers___05F0__DOT__ctrl__DOT__head;
    buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound_h49975b65__0[0U] 
        = vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr
        [0U]][0U];
    buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound_h49975b65__0[1U] 
        = vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr
        [0U]][1U];
    buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound_h49975b65__0[2U] 
        = vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr
        [0U]][2U];
    buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound_h49975b65__0[3U] 
        = vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr
        [0U]][3U];
    buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound_h49975b65__0[4U] 
        = vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr
        [0U]][4U];
    buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound_h49975b65__0[5U] 
        = vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr
        [0U]][5U];
    buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound_h49975b65__0[6U] 
        = vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr
        [0U]][6U];
    buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound_h49975b65__0[7U] 
        = vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr
        [0U]][7U];
    vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][0U] 
        = buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound_h49975b65__0[0U];
    vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][1U] 
        = buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound_h49975b65__0[1U];
    vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][2U] 
        = buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound_h49975b65__0[2U];
    vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][3U] 
        = buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound_h49975b65__0[3U];
    vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][4U] 
        = buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound_h49975b65__0[4U];
    vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][5U] 
        = buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound_h49975b65__0[5U];
    vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][6U] 
        = buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound_h49975b65__0[6U];
    vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][7U] 
        = buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound_h49975b65__0[7U];
    buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h49975b65__0[0U] 
        = vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][0U];
    buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h49975b65__0[1U] 
        = vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][1U];
    buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h49975b65__0[2U] 
        = vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][2U];
    buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h49975b65__0[3U] 
        = vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][3U];
    buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h49975b65__0[4U] 
        = vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][4U];
    buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h49975b65__0[5U] 
        = vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][5U];
    buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h49975b65__0[6U] 
        = vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][6U];
    buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h49975b65__0[7U] 
        = vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U]][7U];
    vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][0U] 
        = buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h49975b65__0[0U];
    vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][1U] 
        = buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h49975b65__0[1U];
    vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][2U] 
        = buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h49975b65__0[2U];
    vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][3U] 
        = buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h49975b65__0[3U];
    vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][4U] 
        = buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h49975b65__0[4U];
    vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][5U] 
        = buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h49975b65__0[5U];
    vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][6U] 
        = buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h49975b65__0[6U];
    vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][7U] 
        = buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound_h49975b65__0[7U];
    vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[0U][0U] 
        = vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][0U];
    vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[0U][1U] 
        = vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][1U];
    vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[0U][2U] 
        = vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][2U];
    vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[0U][3U] 
        = vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][3U];
    vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[0U][4U] 
        = vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][4U];
    vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[0U][5U] 
        = vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][5U];
    vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[0U][6U] 
        = vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][6U];
    vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[0U][7U] 
        = vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][7U];
    vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[0U][0U] 
        = vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][0U];
    vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[0U][1U] 
        = vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][1U];
    vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[0U][2U] 
        = vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][2U];
    vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[0U][3U] 
        = vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][3U];
    vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[0U][4U] 
        = vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][4U];
    vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[0U][5U] 
        = vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][5U];
    vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[0U][6U] 
        = vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][6U];
    vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[0U][7U] 
        = vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][7U];
}

VL_INLINE_OPT void Vcgra_test_CreditRecvRTL2SendRTL___05Fc5b3263f77da2ee5___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__send_adp___05F16__1(Vcgra_test_CreditRecvRTL2SendRTL___05Fc5b3263f77da2ee5* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_CreditRecvRTL2SendRTL___05Fc5b3263f77da2ee5___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__send_adp___05F16__1\n"); );
    // Init
    CData/*1:0*/ __PVT__arbiter___05Freqs;
    __PVT__arbiter___05Freqs = 0;
    // Body
    vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][0U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [0x10U][0U];
    vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][1U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [0x10U][1U];
    vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][2U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [0x10U][2U];
    vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][3U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [0x10U][3U];
    vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][4U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [0x10U][4U];
    vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][5U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [0x10U][5U];
    vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][6U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [0x10U][6U];
    vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][7U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [0x10U][7U];
    vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata[0U][0U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [0x10U][0U];
    vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata[0U][1U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [0x10U][1U];
    vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata[0U][2U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [0x10U][2U];
    vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata[0U][3U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [0x10U][3U];
    vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata[0U][4U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [0x10U][4U];
    vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata[0U][5U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [0x10U][5U];
    vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata[0U][6U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [0x10U][6U];
    vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata[0U][7U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [0x10U][7U];
    vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[1U][0U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [0x10U][0U];
    vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[1U][1U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [0x10U][1U];
    vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[1U][2U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [0x10U][2U];
    vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[1U][3U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [0x10U][3U];
    vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[1U][4U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [0x10U][4U];
    vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[1U][5U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [0x10U][5U];
    vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[1U][6U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [0x10U][6U];
    vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[1U][7U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [0x10U][7U];
    vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[1U][0U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [0x10U][0U];
    vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[1U][1U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [0x10U][1U];
    vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[1U][2U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [0x10U][2U];
    vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[1U][3U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [0x10U][3U];
    vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[1U][4U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [0x10U][4U];
    vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[1U][5U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [0x10U][5U];
    vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[1U][6U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [0x10U][6U];
    vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[1U][7U] 
        = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [0x10U][7U];
    if (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__ctrl_ring__DOT__send_adp___05Frecv___05Fen
        [0x10U]) {
        vlSelf->__PVT__buffers___05Frecv___05Fval[0U] 
            = (1U & (~ (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
                        [0x10U][6U] >> 0xaU)));
        vlSelf->__PVT__buffers___05Frecv___05Fval[1U] 
            = (1U & (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
                     [0x10U][6U] >> 0xaU));
    } else {
        vlSelf->__PVT__buffers___05Frecv___05Fval[0U] = 0U;
        vlSelf->__PVT__buffers___05Frecv___05Fval[1U] = 0U;
    }
    vlSelf->__PVT__buffers___05Fsend___05Fmsg[0U][0U] 
        = vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_
        [(0U == (IData)(vlSelf->__PVT__buffers___05F0__DOT__ctrl___05Fcount))][0U];
    vlSelf->__PVT__buffers___05Fsend___05Fmsg[0U][1U] 
        = vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_
        [(0U == (IData)(vlSelf->__PVT__buffers___05F0__DOT__ctrl___05Fcount))][1U];
    vlSelf->__PVT__buffers___05Fsend___05Fmsg[0U][2U] 
        = vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_
        [(0U == (IData)(vlSelf->__PVT__buffers___05F0__DOT__ctrl___05Fcount))][2U];
    vlSelf->__PVT__buffers___05Fsend___05Fmsg[0U][3U] 
        = vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_
        [(0U == (IData)(vlSelf->__PVT__buffers___05F0__DOT__ctrl___05Fcount))][3U];
    vlSelf->__PVT__buffers___05Fsend___05Fmsg[0U][4U] 
        = vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_
        [(0U == (IData)(vlSelf->__PVT__buffers___05F0__DOT__ctrl___05Fcount))][4U];
    vlSelf->__PVT__buffers___05Fsend___05Fmsg[0U][5U] 
        = vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_
        [(0U == (IData)(vlSelf->__PVT__buffers___05F0__DOT__ctrl___05Fcount))][5U];
    vlSelf->__PVT__buffers___05Fsend___05Fmsg[0U][6U] 
        = vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_
        [(0U == (IData)(vlSelf->__PVT__buffers___05F0__DOT__ctrl___05Fcount))][6U];
    vlSelf->__PVT__buffers___05Fsend___05Fmsg[0U][7U] 
        = vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_
        [(0U == (IData)(vlSelf->__PVT__buffers___05F0__DOT__ctrl___05Fcount))][7U];
    vlSelf->__PVT__buffers___05Fsend___05Fmsg[1U][0U] 
        = vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_
        [(0U == (IData)(vlSelf->__PVT__buffers___05F1__DOT__ctrl___05Fcount))][0U];
    vlSelf->__PVT__buffers___05Fsend___05Fmsg[1U][1U] 
        = vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_
        [(0U == (IData)(vlSelf->__PVT__buffers___05F1__DOT__ctrl___05Fcount))][1U];
    vlSelf->__PVT__buffers___05Fsend___05Fmsg[1U][2U] 
        = vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_
        [(0U == (IData)(vlSelf->__PVT__buffers___05F1__DOT__ctrl___05Fcount))][2U];
    vlSelf->__PVT__buffers___05Fsend___05Fmsg[1U][3U] 
        = vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_
        [(0U == (IData)(vlSelf->__PVT__buffers___05F1__DOT__ctrl___05Fcount))][3U];
    vlSelf->__PVT__buffers___05Fsend___05Fmsg[1U][4U] 
        = vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_
        [(0U == (IData)(vlSelf->__PVT__buffers___05F1__DOT__ctrl___05Fcount))][4U];
    vlSelf->__PVT__buffers___05Fsend___05Fmsg[1U][5U] 
        = vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_
        [(0U == (IData)(vlSelf->__PVT__buffers___05F1__DOT__ctrl___05Fcount))][5U];
    vlSelf->__PVT__buffers___05Fsend___05Fmsg[1U][6U] 
        = vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_
        [(0U == (IData)(vlSelf->__PVT__buffers___05F1__DOT__ctrl___05Fcount))][6U];
    vlSelf->__PVT__buffers___05Fsend___05Fmsg[1U][7U] 
        = vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_
        [(0U == (IData)(vlSelf->__PVT__buffers___05F1__DOT__ctrl___05Fcount))][7U];
    vlSelf->__PVT__buffers___05F0__DOT__ctrl___05Fwen 
        = (vlSelf->__PVT__buffers___05Frecv___05Fval
           [0U] & (2U > (IData)(vlSelf->__PVT__buffers___05F0__DOT__ctrl___05Fcount)));
    vlSelf->__PVT__buffers___05F1__DOT__ctrl___05Fwen 
        = (vlSelf->__PVT__buffers___05Frecv___05Fval
           [1U] & (2U > (IData)(vlSelf->__PVT__buffers___05F1__DOT__ctrl___05Fcount)));
    vlSelf->__Vcellout__buffers___05F1__send___05Fval 
        = ((0U < (IData)(vlSelf->__PVT__buffers___05F1__DOT__ctrl___05Fcount)) 
           | vlSelf->__PVT__buffers___05Frecv___05Fval
           [1U]);
    vlSelf->__Vcellout__buffers___05F0__send___05Fval 
        = ((0U < (IData)(vlSelf->__PVT__buffers___05F0__DOT__ctrl___05Fcount)) 
           | vlSelf->__PVT__buffers___05Frecv___05Fval
           [0U]);
    vlSelf->__PVT__buffers___05F0__DOT__dpath__DOT__rf___05Fwen[0U] 
        = vlSelf->__PVT__buffers___05F0__DOT__ctrl___05Fwen;
    vlSelf->__PVT__buffers___05F1__DOT__dpath__DOT__rf___05Fwen[0U] 
        = vlSelf->__PVT__buffers___05F1__DOT__ctrl___05Fwen;
    vlSelf->__PVT__buffers___05Fsend___05Fval[1U] = vlSelf->__Vcellout__buffers___05F1__send___05Fval;
    vlSelf->__PVT__buffers___05Fsend___05Fval[0U] = vlSelf->__Vcellout__buffers___05F0__send___05Fval;
    __PVT__arbiter___05Freqs = (((IData)(vlSelf->__Vcellout__buffers___05F1__send___05Fval) 
                                 << 1U) | (IData)(vlSelf->__Vcellout__buffers___05F0__send___05Fval));
    vlSelf->__PVT__arbiter__DOT__kills = (1U | (IData)(vlSelf->__PVT__arbiter__DOT__kills));
    if ((1U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_h1d40eedc__0 
            = (1U & (IData)(__PVT__arbiter___05Freqs));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x1dU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_h1d40eedc__0) 
                                                 << 1U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_h1d40eedc__1 
            = (1U & ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                     | (IData)(__PVT__arbiter___05Freqs)));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x1dU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_h1d40eedc__1) 
                                                 << 1U));
    }
    if ((2U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_h1d40eedc__0 
            = (1U & ((IData)(__PVT__arbiter___05Freqs) 
                     >> 1U));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x1bU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_h1d40eedc__0) 
                                                 << 2U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_h1d40eedc__1 
            = (1U & (((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                      >> 1U) | ((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                                    >> 1U)) & ((IData)(__PVT__arbiter___05Freqs) 
                                               >> 1U))));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x1bU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_h1d40eedc__1) 
                                                 << 2U));
    }
    if ((4U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_h1d40eedc__0 
            = (1U & (IData)(__PVT__arbiter___05Freqs));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x17U 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_h1d40eedc__0) 
                                                 << 3U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_h1d40eedc__1 
            = (1U & (((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                      >> 2U) | ((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                                    >> 2U)) & (IData)(__PVT__arbiter___05Freqs))));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x17U 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_h1d40eedc__1) 
                                                 << 3U));
    }
    if ((8U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_h1d40eedc__0 
            = (1U & ((IData)(__PVT__arbiter___05Freqs) 
                     >> 1U));
        vlSelf->__PVT__arbiter__DOT__kills = ((0xfU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_h1d40eedc__0) 
                                                 << 4U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_h1d40eedc__1 
            = (1U & (((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                      >> 3U) | ((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                                    >> 3U)) & ((IData)(__PVT__arbiter___05Freqs) 
                                               >> 1U))));
        vlSelf->__PVT__arbiter__DOT__kills = ((0xfU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_h1d40eedc__1) 
                                                 << 4U));
    }
    vlSelf->__PVT__arbiter__DOT__grants_int = ((0xeU 
                                                & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                               | (1U 
                                                  & ((1U 
                                                      & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))
                                                      ? (IData)(__PVT__arbiter___05Freqs)
                                                      : 
                                                     ((~ (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                                      & (IData)(__PVT__arbiter___05Freqs)))));
    vlSelf->__PVT__arbiter__DOT__grants_int = ((0xdU 
                                                & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                               | (2U 
                                                  & (((2U 
                                                       & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))
                                                       ? 
                                                      ((IData)(__PVT__arbiter___05Freqs) 
                                                       >> 1U)
                                                       : 
                                                      ((~ 
                                                        ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                                                         >> 1U)) 
                                                       & ((IData)(__PVT__arbiter___05Freqs) 
                                                          >> 1U))) 
                                                     << 1U)));
    vlSelf->__PVT__arbiter__DOT__grants_int = ((0xbU 
                                                & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                               | (4U 
                                                  & (((4U 
                                                       & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))
                                                       ? (IData)(__PVT__arbiter___05Freqs)
                                                       : 
                                                      ((~ 
                                                        ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                                                         >> 2U)) 
                                                       & (IData)(__PVT__arbiter___05Freqs))) 
                                                     << 2U)));
    vlSelf->__PVT__arbiter__DOT__grants_int = ((7U 
                                                & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                               | (8U 
                                                  & (((8U 
                                                       & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))
                                                       ? 
                                                      ((IData)(__PVT__arbiter___05Freqs) 
                                                       >> 1U)
                                                       : 
                                                      ((~ 
                                                        ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                                                         >> 3U)) 
                                                       & ((IData)(__PVT__arbiter___05Freqs) 
                                                          >> 1U))) 
                                                     << 3U)));
    vlSelf->__PVT__arbiter___05Fgrants = (3U & ((IData)(vlSelf->__PVT__arbiter__DOT__grants_int) 
                                                | ((IData)(vlSelf->__PVT__arbiter__DOT__grants_int) 
                                                   >> 2U)));
    vlSelf->__PVT__send___05Fval = (0U < (IData)(vlSelf->__PVT__arbiter___05Fgrants));
    vlSelf->__PVT__encoder___05Fout = 0U;
    if ((1U & (IData)(vlSelf->__PVT__arbiter___05Fgrants))) {
        vlSelf->__PVT__encoder___05Fout = 0U;
    }
    if ((2U & (IData)(vlSelf->__PVT__arbiter___05Fgrants))) {
        vlSelf->__PVT__encoder___05Fout = 1U;
    }
    vlSelf->__PVT__send___05Fmsg[0U] = vlSelf->__PVT__buffers___05Fsend___05Fmsg
        [vlSelf->__PVT__encoder___05Fout][0U];
    vlSelf->__PVT__send___05Fmsg[1U] = vlSelf->__PVT__buffers___05Fsend___05Fmsg
        [vlSelf->__PVT__encoder___05Fout][1U];
    vlSelf->__PVT__send___05Fmsg[2U] = vlSelf->__PVT__buffers___05Fsend___05Fmsg
        [vlSelf->__PVT__encoder___05Fout][2U];
    vlSelf->__PVT__send___05Fmsg[3U] = vlSelf->__PVT__buffers___05Fsend___05Fmsg
        [vlSelf->__PVT__encoder___05Fout][3U];
    vlSelf->__PVT__send___05Fmsg[4U] = vlSelf->__PVT__buffers___05Fsend___05Fmsg
        [vlSelf->__PVT__encoder___05Fout][4U];
    vlSelf->__PVT__send___05Fmsg[5U] = vlSelf->__PVT__buffers___05Fsend___05Fmsg
        [vlSelf->__PVT__encoder___05Fout][5U];
    vlSelf->__PVT__send___05Fmsg[6U] = vlSelf->__PVT__buffers___05Fsend___05Fmsg
        [vlSelf->__PVT__encoder___05Fout][6U];
    vlSelf->__PVT__send___05Fmsg[7U] = vlSelf->__PVT__buffers___05Fsend___05Fmsg
        [vlSelf->__PVT__encoder___05Fout][7U];
}

VL_INLINE_OPT void Vcgra_test_CreditRecvRTL2SendRTL___05Fc5b3263f77da2ee5___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__send_adp___05F16__2(Vcgra_test_CreditRecvRTL2SendRTL___05Fc5b3263f77da2ee5* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_CreditRecvRTL2SendRTL___05Fc5b3263f77da2ee5___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__ctrl_ring__DOT__send_adp___05F16__2\n"); );
    // Body
    vlSelf->__PVT__buffers___05Fsend___05Frdy[0U] = 0U;
    vlSelf->__PVT__buffers___05Fsend___05Frdy[1U] = 0U;
    if ((0U < (IData)(vlSelf->__PVT__arbiter___05Fgrants))) {
        vlSelf->__PVT__buffers___05Fsend___05Frdy[vlSelf->__PVT__encoder___05Fout] 
            = vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__controller___05Frecv_from_ctrl_ring_pkt___05Frdy;
    }
    vlSelf->__PVT__recv___05Fyum[0U] = (vlSelf->__PVT__buffers___05Fsend___05Fval
                                        [0U] & vlSelf->__PVT__buffers___05Fsend___05Frdy
                                        [0U]);
    vlSelf->__PVT__recv___05Fyum[1U] = (vlSelf->__PVT__buffers___05Fsend___05Fval
                                        [1U] & vlSelf->__PVT__buffers___05Fsend___05Frdy
                                        [1U]);
}
