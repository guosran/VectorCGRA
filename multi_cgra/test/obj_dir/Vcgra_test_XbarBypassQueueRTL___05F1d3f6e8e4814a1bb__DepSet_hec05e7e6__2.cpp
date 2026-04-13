// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcgra_test.h for the primary calling header

#include "Vcgra_test__pch.h"
#include "Vcgra_test_XbarBypassQueueRTL___05F1d3f6e8e4814a1bb.h"

extern const VlUnpacked<CData/*2:0*/, 256> Vcgra_test__ConstPool__TABLE_h3db4ab36_0;

VL_INLINE_OPT void Vcgra_test_XbarBypassQueueRTL___05F1d3f6e8e4814a1bb___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__data_mem__DOT__write_crossbar__1(Vcgra_test_XbarBypassQueueRTL___05F1d3f6e8e4814a1bb* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_XbarBypassQueueRTL___05F1d3f6e8e4814a1bb___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__data_mem__DOT__write_crossbar__1\n"); );
    // Init
    CData/*1:0*/ __PVT__route_units___05F0__DOT__out_dir;
    __PVT__route_units___05F0__DOT__out_dir = 0;
    CData/*1:0*/ __PVT__route_units___05F1__DOT__out_dir;
    __PVT__route_units___05F1__DOT__out_dir = 0;
    CData/*1:0*/ __PVT__route_units___05F2__DOT__out_dir;
    __PVT__route_units___05F2__DOT__out_dir = 0;
    CData/*1:0*/ __PVT__route_units___05F3__DOT__out_dir;
    __PVT__route_units___05F3__DOT__out_dir = 0;
    CData/*1:0*/ __PVT__route_units___05F4__DOT__out_dir;
    __PVT__route_units___05F4__DOT__out_dir = 0;
    CData/*1:0*/ __PVT__route_units___05F5__DOT__out_dir;
    __PVT__route_units___05F5__DOT__out_dir = 0;
    CData/*1:0*/ __PVT__route_units___05F6__DOT__out_dir;
    __PVT__route_units___05F6__DOT__out_dir = 0;
    CData/*1:0*/ __PVT__route_units___05F7__DOT__out_dir;
    __PVT__route_units___05F7__DOT__out_dir = 0;
    CData/*7:0*/ __PVT__switch_units___05F0__DOT__arbiter___05Freqs;
    __PVT__switch_units___05F0__DOT__arbiter___05Freqs = 0;
    CData/*2:0*/ __PVT__switch_units___05F0__DOT__encoder___05Fout;
    __PVT__switch_units___05F0__DOT__encoder___05Fout = 0;
    CData/*7:0*/ __PVT__switch_units___05F1__DOT__arbiter___05Freqs;
    __PVT__switch_units___05F1__DOT__arbiter___05Freqs = 0;
    CData/*2:0*/ __PVT__switch_units___05F1__DOT__encoder___05Fout;
    __PVT__switch_units___05F1__DOT__encoder___05Fout = 0;
    CData/*7:0*/ __PVT__switch_units___05F2__DOT__arbiter___05Freqs;
    __PVT__switch_units___05F2__DOT__arbiter___05Freqs = 0;
    CData/*2:0*/ __PVT__switch_units___05F2__DOT__encoder___05Fout;
    __PVT__switch_units___05F2__DOT__encoder___05Fout = 0;
    CData/*7:0*/ __Vtableidx86;
    __Vtableidx86 = 0;
    CData/*7:0*/ __Vtableidx87;
    __Vtableidx87 = 0;
    CData/*7:0*/ __Vtableidx88;
    __Vtableidx88 = 0;
    // Body
    vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl___05Fwen 
        = (vlSelf->__PVT__recv___05Fval[0U] & (2U > (IData)(vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl___05Fcount)));
    vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl___05Fwen 
        = (vlSelf->__PVT__recv___05Fval[1U] & (2U > (IData)(vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl___05Fcount)));
    vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl___05Fwen 
        = (vlSelf->__PVT__recv___05Fval[2U] & (2U > (IData)(vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl___05Fcount)));
    vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl___05Fwen 
        = (vlSelf->__PVT__recv___05Fval[3U] & (2U > (IData)(vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl___05Fcount)));
    vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl___05Fwen 
        = (vlSelf->__PVT__recv___05Fval[4U] & (2U > (IData)(vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl___05Fcount)));
    vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl___05Fwen 
        = (vlSelf->__PVT__recv___05Fval[5U] & (2U > (IData)(vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl___05Fcount)));
    vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl___05Fwen 
        = (vlSelf->__PVT__recv___05Fval[6U] & (2U > (IData)(vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl___05Fcount)));
    vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl___05Fwen 
        = (vlSelf->__PVT__recv___05Fval[7U] & (2U > (IData)(vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl___05Fcount)));
    vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl___05Fsend_val 
        = ((0U < (IData)(vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl___05Fcount)) 
           | vlSelf->__PVT__recv___05Fval[0U]);
    vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl___05Fsend_val 
        = ((0U < (IData)(vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl___05Fcount)) 
           | vlSelf->__PVT__recv___05Fval[1U]);
    vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl___05Fsend_val 
        = ((0U < (IData)(vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl___05Fcount)) 
           | vlSelf->__PVT__recv___05Fval[2U]);
    vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl___05Fsend_val 
        = ((0U < (IData)(vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl___05Fcount)) 
           | vlSelf->__PVT__recv___05Fval[3U]);
    vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl___05Fsend_val 
        = ((0U < (IData)(vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl___05Fcount)) 
           | vlSelf->__PVT__recv___05Fval[4U]);
    vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl___05Fsend_val 
        = ((0U < (IData)(vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl___05Fcount)) 
           | vlSelf->__PVT__recv___05Fval[5U]);
    vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl___05Fsend_val 
        = ((0U < (IData)(vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl___05Fcount)) 
           | vlSelf->__PVT__recv___05Fval[6U]);
    vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl___05Fsend_val 
        = ((0U < (IData)(vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl___05Fcount)) 
           | vlSelf->__PVT__recv___05Fval[7U]);
    vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fwen[0U] 
        = vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl___05Fwen;
    vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fwen[0U] 
        = vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl___05Fwen;
    vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fwen[0U] 
        = vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl___05Fwen;
    vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Fwen[0U] 
        = vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl___05Fwen;
    vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Fwen[0U] 
        = vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl___05Fwen;
    vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf___05Fwen[0U] 
        = vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl___05Fwen;
    vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf___05Fwen[0U] 
        = vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl___05Fwen;
    vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf___05Fwen[0U] 
        = vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl___05Fwen;
    __PVT__route_units___05F0__DOT__out_dir = (3U & 
                                               (vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__mux___05Fin_
                                                [(0U 
                                                  == (IData)(vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl___05Fcount))][2U] 
                                                >> 0x14U));
    vlSelf->__Vcellout__route_units___05F0__send___05Fval[0U] = 0U;
    vlSelf->__Vcellout__route_units___05F0__send___05Fval[1U] = 0U;
    vlSelf->__Vcellout__route_units___05F0__send___05Fval[2U] = 0U;
    if (vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl___05Fsend_val) {
        vlSelf->route_units___05F0__DOT____Vlvbound_h7616ffa4__0 = 1U;
        if ((2U >= (IData)(__PVT__route_units___05F0__DOT__out_dir))) {
            vlSelf->__Vcellout__route_units___05F0__send___05Fval[__PVT__route_units___05F0__DOT__out_dir] 
                = vlSelf->route_units___05F0__DOT____Vlvbound_h7616ffa4__0;
        }
    }
    __PVT__route_units___05F1__DOT__out_dir = (3U & 
                                               (vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__mux___05Fin_
                                                [(0U 
                                                  == (IData)(vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl___05Fcount))][2U] 
                                                >> 0x14U));
    vlSelf->__Vcellout__route_units___05F1__send___05Fval[0U] = 0U;
    vlSelf->__Vcellout__route_units___05F1__send___05Fval[1U] = 0U;
    vlSelf->__Vcellout__route_units___05F1__send___05Fval[2U] = 0U;
    if (vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl___05Fsend_val) {
        vlSelf->route_units___05F1__DOT____Vlvbound_h7616ffa4__0 = 1U;
        if ((2U >= (IData)(__PVT__route_units___05F1__DOT__out_dir))) {
            vlSelf->__Vcellout__route_units___05F1__send___05Fval[__PVT__route_units___05F1__DOT__out_dir] 
                = vlSelf->route_units___05F1__DOT____Vlvbound_h7616ffa4__0;
        }
    }
    __PVT__route_units___05F2__DOT__out_dir = (3U & 
                                               (vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__mux___05Fin_
                                                [(0U 
                                                  == (IData)(vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl___05Fcount))][2U] 
                                                >> 0x14U));
    vlSelf->__Vcellout__route_units___05F2__send___05Fval[0U] = 0U;
    vlSelf->__Vcellout__route_units___05F2__send___05Fval[1U] = 0U;
    vlSelf->__Vcellout__route_units___05F2__send___05Fval[2U] = 0U;
    if (vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl___05Fsend_val) {
        vlSelf->route_units___05F2__DOT____Vlvbound_h7616ffa4__0 = 1U;
        if ((2U >= (IData)(__PVT__route_units___05F2__DOT__out_dir))) {
            vlSelf->__Vcellout__route_units___05F2__send___05Fval[__PVT__route_units___05F2__DOT__out_dir] 
                = vlSelf->route_units___05F2__DOT____Vlvbound_h7616ffa4__0;
        }
    }
    __PVT__route_units___05F3__DOT__out_dir = (3U & 
                                               (vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__mux___05Fin_
                                                [(0U 
                                                  == (IData)(vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl___05Fcount))][2U] 
                                                >> 0x14U));
    vlSelf->__Vcellout__route_units___05F3__send___05Fval[0U] = 0U;
    vlSelf->__Vcellout__route_units___05F3__send___05Fval[1U] = 0U;
    vlSelf->__Vcellout__route_units___05F3__send___05Fval[2U] = 0U;
    if (vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl___05Fsend_val) {
        vlSelf->route_units___05F3__DOT____Vlvbound_h7616ffa4__0 = 1U;
        if ((2U >= (IData)(__PVT__route_units___05F3__DOT__out_dir))) {
            vlSelf->__Vcellout__route_units___05F3__send___05Fval[__PVT__route_units___05F3__DOT__out_dir] 
                = vlSelf->route_units___05F3__DOT____Vlvbound_h7616ffa4__0;
        }
    }
    __PVT__route_units___05F4__DOT__out_dir = (3U & 
                                               (vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__mux___05Fin_
                                                [(0U 
                                                  == (IData)(vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl___05Fcount))][2U] 
                                                >> 0x14U));
    vlSelf->__Vcellout__route_units___05F4__send___05Fval[0U] = 0U;
    vlSelf->__Vcellout__route_units___05F4__send___05Fval[1U] = 0U;
    vlSelf->__Vcellout__route_units___05F4__send___05Fval[2U] = 0U;
    if (vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl___05Fsend_val) {
        vlSelf->route_units___05F4__DOT____Vlvbound_h7616ffa4__0 = 1U;
        if ((2U >= (IData)(__PVT__route_units___05F4__DOT__out_dir))) {
            vlSelf->__Vcellout__route_units___05F4__send___05Fval[__PVT__route_units___05F4__DOT__out_dir] 
                = vlSelf->route_units___05F4__DOT____Vlvbound_h7616ffa4__0;
        }
    }
    __PVT__route_units___05F5__DOT__out_dir = (3U & 
                                               (vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__mux___05Fin_
                                                [(0U 
                                                  == (IData)(vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl___05Fcount))][2U] 
                                                >> 0x14U));
    vlSelf->__Vcellout__route_units___05F5__send___05Fval[0U] = 0U;
    vlSelf->__Vcellout__route_units___05F5__send___05Fval[1U] = 0U;
    vlSelf->__Vcellout__route_units___05F5__send___05Fval[2U] = 0U;
    if (vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl___05Fsend_val) {
        vlSelf->route_units___05F5__DOT____Vlvbound_h7616ffa4__0 = 1U;
        if ((2U >= (IData)(__PVT__route_units___05F5__DOT__out_dir))) {
            vlSelf->__Vcellout__route_units___05F5__send___05Fval[__PVT__route_units___05F5__DOT__out_dir] 
                = vlSelf->route_units___05F5__DOT____Vlvbound_h7616ffa4__0;
        }
    }
    __PVT__route_units___05F6__DOT__out_dir = (3U & 
                                               (vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__mux___05Fin_
                                                [(0U 
                                                  == (IData)(vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl___05Fcount))][2U] 
                                                >> 0x14U));
    vlSelf->__Vcellout__route_units___05F6__send___05Fval[0U] = 0U;
    vlSelf->__Vcellout__route_units___05F6__send___05Fval[1U] = 0U;
    vlSelf->__Vcellout__route_units___05F6__send___05Fval[2U] = 0U;
    if (vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl___05Fsend_val) {
        vlSelf->route_units___05F6__DOT____Vlvbound_h7616ffa4__0 = 1U;
        if ((2U >= (IData)(__PVT__route_units___05F6__DOT__out_dir))) {
            vlSelf->__Vcellout__route_units___05F6__send___05Fval[__PVT__route_units___05F6__DOT__out_dir] 
                = vlSelf->route_units___05F6__DOT____Vlvbound_h7616ffa4__0;
        }
    }
    __PVT__route_units___05F7__DOT__out_dir = (3U & 
                                               (vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__mux___05Fin_
                                                [(0U 
                                                  == (IData)(vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl___05Fcount))][2U] 
                                                >> 0x14U));
    vlSelf->__Vcellout__route_units___05F7__send___05Fval[0U] = 0U;
    vlSelf->__Vcellout__route_units___05F7__send___05Fval[1U] = 0U;
    vlSelf->__Vcellout__route_units___05F7__send___05Fval[2U] = 0U;
    if (vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl___05Fsend_val) {
        vlSelf->route_units___05F7__DOT____Vlvbound_h7616ffa4__0 = 1U;
        if ((2U >= (IData)(__PVT__route_units___05F7__DOT__out_dir))) {
            vlSelf->__Vcellout__route_units___05F7__send___05Fval[__PVT__route_units___05F7__DOT__out_dir] 
                = vlSelf->route_units___05F7__DOT____Vlvbound_h7616ffa4__0;
        }
    }
    vlSelf->__PVT__route_units___05Fsend___05Fval[0U][0U] 
        = vlSelf->__Vcellout__route_units___05F0__send___05Fval
        [0U];
    vlSelf->__PVT__route_units___05Fsend___05Fval[0U][1U] 
        = vlSelf->__Vcellout__route_units___05F0__send___05Fval
        [1U];
    vlSelf->__PVT__route_units___05Fsend___05Fval[0U][2U] 
        = vlSelf->__Vcellout__route_units___05F0__send___05Fval
        [2U];
    vlSelf->__PVT__route_units___05Fsend___05Fval[1U][0U] 
        = vlSelf->__Vcellout__route_units___05F1__send___05Fval
        [0U];
    vlSelf->__PVT__route_units___05Fsend___05Fval[1U][1U] 
        = vlSelf->__Vcellout__route_units___05F1__send___05Fval
        [1U];
    vlSelf->__PVT__route_units___05Fsend___05Fval[1U][2U] 
        = vlSelf->__Vcellout__route_units___05F1__send___05Fval
        [2U];
    vlSelf->__PVT__route_units___05Fsend___05Fval[2U][0U] 
        = vlSelf->__Vcellout__route_units___05F2__send___05Fval
        [0U];
    vlSelf->__PVT__route_units___05Fsend___05Fval[2U][1U] 
        = vlSelf->__Vcellout__route_units___05F2__send___05Fval
        [1U];
    vlSelf->__PVT__route_units___05Fsend___05Fval[2U][2U] 
        = vlSelf->__Vcellout__route_units___05F2__send___05Fval
        [2U];
    vlSelf->__PVT__route_units___05Fsend___05Fval[3U][0U] 
        = vlSelf->__Vcellout__route_units___05F3__send___05Fval
        [0U];
    vlSelf->__PVT__route_units___05Fsend___05Fval[3U][1U] 
        = vlSelf->__Vcellout__route_units___05F3__send___05Fval
        [1U];
    vlSelf->__PVT__route_units___05Fsend___05Fval[3U][2U] 
        = vlSelf->__Vcellout__route_units___05F3__send___05Fval
        [2U];
    vlSelf->__PVT__route_units___05Fsend___05Fval[4U][0U] 
        = vlSelf->__Vcellout__route_units___05F4__send___05Fval
        [0U];
    vlSelf->__PVT__route_units___05Fsend___05Fval[4U][1U] 
        = vlSelf->__Vcellout__route_units___05F4__send___05Fval
        [1U];
    vlSelf->__PVT__route_units___05Fsend___05Fval[4U][2U] 
        = vlSelf->__Vcellout__route_units___05F4__send___05Fval
        [2U];
    vlSelf->__PVT__route_units___05Fsend___05Fval[5U][0U] 
        = vlSelf->__Vcellout__route_units___05F5__send___05Fval
        [0U];
    vlSelf->__PVT__route_units___05Fsend___05Fval[5U][1U] 
        = vlSelf->__Vcellout__route_units___05F5__send___05Fval
        [1U];
    vlSelf->__PVT__route_units___05Fsend___05Fval[5U][2U] 
        = vlSelf->__Vcellout__route_units___05F5__send___05Fval
        [2U];
    vlSelf->__PVT__route_units___05Fsend___05Fval[6U][0U] 
        = vlSelf->__Vcellout__route_units___05F6__send___05Fval
        [0U];
    vlSelf->__PVT__route_units___05Fsend___05Fval[6U][1U] 
        = vlSelf->__Vcellout__route_units___05F6__send___05Fval
        [1U];
    vlSelf->__PVT__route_units___05Fsend___05Fval[6U][2U] 
        = vlSelf->__Vcellout__route_units___05F6__send___05Fval
        [2U];
    vlSelf->__PVT__route_units___05Fsend___05Fval[7U][0U] 
        = vlSelf->__Vcellout__route_units___05F7__send___05Fval
        [0U];
    vlSelf->__PVT__route_units___05Fsend___05Fval[7U][1U] 
        = vlSelf->__Vcellout__route_units___05F7__send___05Fval
        [1U];
    vlSelf->__PVT__route_units___05Fsend___05Fval[7U][2U] 
        = vlSelf->__Vcellout__route_units___05F7__send___05Fval
        [2U];
    vlSelf->__PVT__switch_units___05Frecv___05Fval[0U][0U] 
        = vlSelf->__PVT__route_units___05Fsend___05Fval
        [0U][0U];
    vlSelf->__PVT__switch_units___05Frecv___05Fval[1U][0U] 
        = vlSelf->__PVT__route_units___05Fsend___05Fval
        [0U][1U];
    vlSelf->__PVT__switch_units___05Frecv___05Fval[2U][0U] 
        = vlSelf->__PVT__route_units___05Fsend___05Fval
        [0U][2U];
    vlSelf->__PVT__switch_units___05Frecv___05Fval[0U][1U] 
        = vlSelf->__PVT__route_units___05Fsend___05Fval
        [1U][0U];
    vlSelf->__PVT__switch_units___05Frecv___05Fval[1U][1U] 
        = vlSelf->__PVT__route_units___05Fsend___05Fval
        [1U][1U];
    vlSelf->__PVT__switch_units___05Frecv___05Fval[2U][1U] 
        = vlSelf->__PVT__route_units___05Fsend___05Fval
        [1U][2U];
    vlSelf->__PVT__switch_units___05Frecv___05Fval[0U][2U] 
        = vlSelf->__PVT__route_units___05Fsend___05Fval
        [2U][0U];
    vlSelf->__PVT__switch_units___05Frecv___05Fval[1U][2U] 
        = vlSelf->__PVT__route_units___05Fsend___05Fval
        [2U][1U];
    vlSelf->__PVT__switch_units___05Frecv___05Fval[2U][2U] 
        = vlSelf->__PVT__route_units___05Fsend___05Fval
        [2U][2U];
    vlSelf->__PVT__switch_units___05Frecv___05Fval[0U][3U] 
        = vlSelf->__PVT__route_units___05Fsend___05Fval
        [3U][0U];
    vlSelf->__PVT__switch_units___05Frecv___05Fval[1U][3U] 
        = vlSelf->__PVT__route_units___05Fsend___05Fval
        [3U][1U];
    vlSelf->__PVT__switch_units___05Frecv___05Fval[2U][3U] 
        = vlSelf->__PVT__route_units___05Fsend___05Fval
        [3U][2U];
    vlSelf->__PVT__switch_units___05Frecv___05Fval[0U][4U] 
        = vlSelf->__PVT__route_units___05Fsend___05Fval
        [4U][0U];
    vlSelf->__PVT__switch_units___05Frecv___05Fval[1U][4U] 
        = vlSelf->__PVT__route_units___05Fsend___05Fval
        [4U][1U];
    vlSelf->__PVT__switch_units___05Frecv___05Fval[2U][4U] 
        = vlSelf->__PVT__route_units___05Fsend___05Fval
        [4U][2U];
    vlSelf->__PVT__switch_units___05Frecv___05Fval[0U][5U] 
        = vlSelf->__PVT__route_units___05Fsend___05Fval
        [5U][0U];
    vlSelf->__PVT__switch_units___05Frecv___05Fval[1U][5U] 
        = vlSelf->__PVT__route_units___05Fsend___05Fval
        [5U][1U];
    vlSelf->__PVT__switch_units___05Frecv___05Fval[2U][5U] 
        = vlSelf->__PVT__route_units___05Fsend___05Fval
        [5U][2U];
    vlSelf->__PVT__switch_units___05Frecv___05Fval[0U][6U] 
        = vlSelf->__PVT__route_units___05Fsend___05Fval
        [6U][0U];
    vlSelf->__PVT__switch_units___05Frecv___05Fval[1U][6U] 
        = vlSelf->__PVT__route_units___05Fsend___05Fval
        [6U][1U];
    vlSelf->__PVT__switch_units___05Frecv___05Fval[2U][6U] 
        = vlSelf->__PVT__route_units___05Fsend___05Fval
        [6U][2U];
    vlSelf->__PVT__switch_units___05Frecv___05Fval[0U][7U] 
        = vlSelf->__PVT__route_units___05Fsend___05Fval
        [7U][0U];
    vlSelf->__PVT__switch_units___05Frecv___05Fval[1U][7U] 
        = vlSelf->__PVT__route_units___05Fsend___05Fval
        [7U][1U];
    vlSelf->__PVT__switch_units___05Frecv___05Fval[2U][7U] 
        = vlSelf->__PVT__route_units___05Fsend___05Fval
        [7U][2U];
    vlSelf->__Vcellinp__switch_units___05F0__recv___05Fval[0U] 
        = vlSelf->__PVT__switch_units___05Frecv___05Fval
        [0U][0U];
    vlSelf->__Vcellinp__switch_units___05F0__recv___05Fval[1U] 
        = vlSelf->__PVT__switch_units___05Frecv___05Fval
        [0U][1U];
    vlSelf->__Vcellinp__switch_units___05F0__recv___05Fval[2U] 
        = vlSelf->__PVT__switch_units___05Frecv___05Fval
        [0U][2U];
    vlSelf->__Vcellinp__switch_units___05F0__recv___05Fval[3U] 
        = vlSelf->__PVT__switch_units___05Frecv___05Fval
        [0U][3U];
    vlSelf->__Vcellinp__switch_units___05F0__recv___05Fval[4U] 
        = vlSelf->__PVT__switch_units___05Frecv___05Fval
        [0U][4U];
    vlSelf->__Vcellinp__switch_units___05F0__recv___05Fval[5U] 
        = vlSelf->__PVT__switch_units___05Frecv___05Fval
        [0U][5U];
    vlSelf->__Vcellinp__switch_units___05F0__recv___05Fval[6U] 
        = vlSelf->__PVT__switch_units___05Frecv___05Fval
        [0U][6U];
    vlSelf->__Vcellinp__switch_units___05F0__recv___05Fval[7U] 
        = vlSelf->__PVT__switch_units___05Frecv___05Fval
        [0U][7U];
    vlSelf->__Vcellinp__switch_units___05F1__recv___05Fval[0U] 
        = vlSelf->__PVT__switch_units___05Frecv___05Fval
        [1U][0U];
    vlSelf->__Vcellinp__switch_units___05F1__recv___05Fval[1U] 
        = vlSelf->__PVT__switch_units___05Frecv___05Fval
        [1U][1U];
    vlSelf->__Vcellinp__switch_units___05F1__recv___05Fval[2U] 
        = vlSelf->__PVT__switch_units___05Frecv___05Fval
        [1U][2U];
    vlSelf->__Vcellinp__switch_units___05F1__recv___05Fval[3U] 
        = vlSelf->__PVT__switch_units___05Frecv___05Fval
        [1U][3U];
    vlSelf->__Vcellinp__switch_units___05F1__recv___05Fval[4U] 
        = vlSelf->__PVT__switch_units___05Frecv___05Fval
        [1U][4U];
    vlSelf->__Vcellinp__switch_units___05F1__recv___05Fval[5U] 
        = vlSelf->__PVT__switch_units___05Frecv___05Fval
        [1U][5U];
    vlSelf->__Vcellinp__switch_units___05F1__recv___05Fval[6U] 
        = vlSelf->__PVT__switch_units___05Frecv___05Fval
        [1U][6U];
    vlSelf->__Vcellinp__switch_units___05F1__recv___05Fval[7U] 
        = vlSelf->__PVT__switch_units___05Frecv___05Fval
        [1U][7U];
    vlSelf->__Vcellinp__switch_units___05F2__recv___05Fval[0U] 
        = vlSelf->__PVT__switch_units___05Frecv___05Fval
        [2U][0U];
    vlSelf->__Vcellinp__switch_units___05F2__recv___05Fval[1U] 
        = vlSelf->__PVT__switch_units___05Frecv___05Fval
        [2U][1U];
    vlSelf->__Vcellinp__switch_units___05F2__recv___05Fval[2U] 
        = vlSelf->__PVT__switch_units___05Frecv___05Fval
        [2U][2U];
    vlSelf->__Vcellinp__switch_units___05F2__recv___05Fval[3U] 
        = vlSelf->__PVT__switch_units___05Frecv___05Fval
        [2U][3U];
    vlSelf->__Vcellinp__switch_units___05F2__recv___05Fval[4U] 
        = vlSelf->__PVT__switch_units___05Frecv___05Fval
        [2U][4U];
    vlSelf->__Vcellinp__switch_units___05F2__recv___05Fval[5U] 
        = vlSelf->__PVT__switch_units___05Frecv___05Fval
        [2U][5U];
    vlSelf->__Vcellinp__switch_units___05F2__recv___05Fval[6U] 
        = vlSelf->__PVT__switch_units___05Frecv___05Fval
        [2U][6U];
    vlSelf->__Vcellinp__switch_units___05F2__recv___05Fval[7U] 
        = vlSelf->__PVT__switch_units___05Frecv___05Fval
        [2U][7U];
    __PVT__switch_units___05F0__DOT__arbiter___05Freqs 
        = ((vlSelf->__Vcellinp__switch_units___05F0__recv___05Fval
            [7U] << 7U) | ((vlSelf->__Vcellinp__switch_units___05F0__recv___05Fval
                            [6U] << 6U) | ((vlSelf->__Vcellinp__switch_units___05F0__recv___05Fval
                                            [5U] << 5U) 
                                           | ((vlSelf->__Vcellinp__switch_units___05F0__recv___05Fval
                                               [4U] 
                                               << 4U) 
                                              | ((vlSelf->__Vcellinp__switch_units___05F0__recv___05Fval
                                                  [3U] 
                                                  << 3U) 
                                                 | ((vlSelf->__Vcellinp__switch_units___05F0__recv___05Fval
                                                     [2U] 
                                                     << 2U) 
                                                    | ((vlSelf->__Vcellinp__switch_units___05F0__recv___05Fval
                                                        [1U] 
                                                        << 1U) 
                                                       | vlSelf->__Vcellinp__switch_units___05F0__recv___05Fval
                                                       [0U])))))));
    __PVT__switch_units___05F1__DOT__arbiter___05Freqs 
        = ((vlSelf->__Vcellinp__switch_units___05F1__recv___05Fval
            [7U] << 7U) | ((vlSelf->__Vcellinp__switch_units___05F1__recv___05Fval
                            [6U] << 6U) | ((vlSelf->__Vcellinp__switch_units___05F1__recv___05Fval
                                            [5U] << 5U) 
                                           | ((vlSelf->__Vcellinp__switch_units___05F1__recv___05Fval
                                               [4U] 
                                               << 4U) 
                                              | ((vlSelf->__Vcellinp__switch_units___05F1__recv___05Fval
                                                  [3U] 
                                                  << 3U) 
                                                 | ((vlSelf->__Vcellinp__switch_units___05F1__recv___05Fval
                                                     [2U] 
                                                     << 2U) 
                                                    | ((vlSelf->__Vcellinp__switch_units___05F1__recv___05Fval
                                                        [1U] 
                                                        << 1U) 
                                                       | vlSelf->__Vcellinp__switch_units___05F1__recv___05Fval
                                                       [0U])))))));
    __PVT__switch_units___05F2__DOT__arbiter___05Freqs 
        = ((vlSelf->__Vcellinp__switch_units___05F2__recv___05Fval
            [7U] << 7U) | ((vlSelf->__Vcellinp__switch_units___05F2__recv___05Fval
                            [6U] << 6U) | ((vlSelf->__Vcellinp__switch_units___05F2__recv___05Fval
                                            [5U] << 5U) 
                                           | ((vlSelf->__Vcellinp__switch_units___05F2__recv___05Fval
                                               [4U] 
                                               << 4U) 
                                              | ((vlSelf->__Vcellinp__switch_units___05F2__recv___05Fval
                                                  [3U] 
                                                  << 3U) 
                                                 | ((vlSelf->__Vcellinp__switch_units___05F2__recv___05Fval
                                                     [2U] 
                                                     << 2U) 
                                                    | ((vlSelf->__Vcellinp__switch_units___05F2__recv___05Fval
                                                        [1U] 
                                                        << 1U) 
                                                       | vlSelf->__Vcellinp__switch_units___05F2__recv___05Fval
                                                       [0U])))))));
    vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills 
        = (1U | vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills);
    if ((1U & (IData)(vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->switch_units___05F0__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0 
            = (1U & (IData)(__PVT__switch_units___05F0__DOT__arbiter___05Freqs));
        vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1fffdU & vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F0__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0) 
                  << 1U));
    } else {
        vlSelf->switch_units___05F0__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1 
            = (1U & (vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills 
                     | (IData)(__PVT__switch_units___05F0__DOT__arbiter___05Freqs)));
        vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1fffdU & vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F0__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1) 
                  << 1U));
    }
    if ((2U & (IData)(vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->switch_units___05F0__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0 
            = (1U & ((IData)(__PVT__switch_units___05F0__DOT__arbiter___05Freqs) 
                     >> 1U));
        vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1fffbU & vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F0__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0) 
                  << 2U));
    } else {
        vlSelf->switch_units___05F0__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1 
            = (1U & ((vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills 
                      >> 1U) | ((~ (vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills 
                                    >> 1U)) & ((IData)(__PVT__switch_units___05F0__DOT__arbiter___05Freqs) 
                                               >> 1U))));
        vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1fffbU & vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F0__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1) 
                  << 2U));
    }
    if ((4U & (IData)(vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->switch_units___05F0__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0 
            = (1U & ((IData)(__PVT__switch_units___05F0__DOT__arbiter___05Freqs) 
                     >> 2U));
        vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1fff7U & vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F0__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0) 
                  << 3U));
    } else {
        vlSelf->switch_units___05F0__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1 
            = (1U & ((vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills 
                      >> 2U) | ((~ (vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills 
                                    >> 2U)) & ((IData)(__PVT__switch_units___05F0__DOT__arbiter___05Freqs) 
                                               >> 2U))));
        vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1fff7U & vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F0__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1) 
                  << 3U));
    }
    if ((8U & (IData)(vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->switch_units___05F0__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0 
            = (1U & ((IData)(__PVT__switch_units___05F0__DOT__arbiter___05Freqs) 
                     >> 3U));
        vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1ffefU & vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F0__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0) 
                  << 4U));
    } else {
        vlSelf->switch_units___05F0__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1 
            = (1U & ((vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills 
                      >> 3U) | ((~ (vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills 
                                    >> 3U)) & ((IData)(__PVT__switch_units___05F0__DOT__arbiter___05Freqs) 
                                               >> 3U))));
        vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1ffefU & vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F0__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1) 
                  << 4U));
    }
    if ((0x10U & (IData)(vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->switch_units___05F0__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0 
            = (1U & ((IData)(__PVT__switch_units___05F0__DOT__arbiter___05Freqs) 
                     >> 4U));
        vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1ffdfU & vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F0__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0) 
                  << 5U));
    } else {
        vlSelf->switch_units___05F0__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1 
            = (1U & ((vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills 
                      >> 4U) | ((~ (vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills 
                                    >> 4U)) & ((IData)(__PVT__switch_units___05F0__DOT__arbiter___05Freqs) 
                                               >> 4U))));
        vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1ffdfU & vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F0__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1) 
                  << 5U));
    }
    if ((0x20U & (IData)(vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->switch_units___05F0__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0 
            = (1U & ((IData)(__PVT__switch_units___05F0__DOT__arbiter___05Freqs) 
                     >> 5U));
        vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1ffbfU & vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F0__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0) 
                  << 6U));
    } else {
        vlSelf->switch_units___05F0__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1 
            = (1U & ((vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills 
                      >> 5U) | ((~ (vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills 
                                    >> 5U)) & ((IData)(__PVT__switch_units___05F0__DOT__arbiter___05Freqs) 
                                               >> 5U))));
        vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1ffbfU & vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F0__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1) 
                  << 6U));
    }
    if ((0x40U & (IData)(vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->switch_units___05F0__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0 
            = (1U & ((IData)(__PVT__switch_units___05F0__DOT__arbiter___05Freqs) 
                     >> 6U));
        vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1ff7fU & vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F0__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0) 
                  << 7U));
    } else {
        vlSelf->switch_units___05F0__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1 
            = (1U & ((vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills 
                      >> 6U) | ((~ (vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills 
                                    >> 6U)) & ((IData)(__PVT__switch_units___05F0__DOT__arbiter___05Freqs) 
                                               >> 6U))));
        vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1ff7fU & vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F0__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1) 
                  << 7U));
    }
    if ((0x80U & (IData)(vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->switch_units___05F0__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0 
            = (1U & ((IData)(__PVT__switch_units___05F0__DOT__arbiter___05Freqs) 
                     >> 7U));
        vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1feffU & vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F0__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0) 
                  << 8U));
    } else {
        vlSelf->switch_units___05F0__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1 
            = (1U & ((vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills 
                      >> 7U) | ((~ (vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills 
                                    >> 7U)) & ((IData)(__PVT__switch_units___05F0__DOT__arbiter___05Freqs) 
                                               >> 7U))));
        vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1feffU & vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F0__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1) 
                  << 8U));
    }
    if ((0x100U & (IData)(vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->switch_units___05F0__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0 
            = (1U & (IData)(__PVT__switch_units___05F0__DOT__arbiter___05Freqs));
        vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1fdffU & vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F0__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0) 
                  << 9U));
    } else {
        vlSelf->switch_units___05F0__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1 
            = (1U & ((vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills 
                      >> 8U) | ((~ (vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills 
                                    >> 8U)) & (IData)(__PVT__switch_units___05F0__DOT__arbiter___05Freqs))));
        vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1fdffU & vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F0__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1) 
                  << 9U));
    }
    if ((0x200U & (IData)(vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->switch_units___05F0__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0 
            = (1U & ((IData)(__PVT__switch_units___05F0__DOT__arbiter___05Freqs) 
                     >> 1U));
        vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1fbffU & vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F0__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0) 
                  << 0xaU));
    } else {
        vlSelf->switch_units___05F0__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1 
            = (1U & ((vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills 
                      >> 9U) | ((~ (vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills 
                                    >> 9U)) & ((IData)(__PVT__switch_units___05F0__DOT__arbiter___05Freqs) 
                                               >> 1U))));
        vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1fbffU & vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F0__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1) 
                  << 0xaU));
    }
    if ((0x400U & (IData)(vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->switch_units___05F0__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0 
            = (1U & ((IData)(__PVT__switch_units___05F0__DOT__arbiter___05Freqs) 
                     >> 2U));
        vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1f7ffU & vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F0__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0) 
                  << 0xbU));
    } else {
        vlSelf->switch_units___05F0__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1 
            = (1U & ((vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills 
                      >> 0xaU) | ((~ (vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills 
                                      >> 0xaU)) & ((IData)(__PVT__switch_units___05F0__DOT__arbiter___05Freqs) 
                                                   >> 2U))));
        vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1f7ffU & vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F0__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1) 
                  << 0xbU));
    }
    if ((0x800U & (IData)(vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->switch_units___05F0__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0 
            = (1U & ((IData)(__PVT__switch_units___05F0__DOT__arbiter___05Freqs) 
                     >> 3U));
        vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1efffU & vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F0__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0) 
                  << 0xcU));
    } else {
        vlSelf->switch_units___05F0__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1 
            = (1U & ((vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills 
                      >> 0xbU) | ((~ (vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills 
                                      >> 0xbU)) & ((IData)(__PVT__switch_units___05F0__DOT__arbiter___05Freqs) 
                                                   >> 3U))));
        vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1efffU & vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F0__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1) 
                  << 0xcU));
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->switch_units___05F0__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0 
            = (1U & ((IData)(__PVT__switch_units___05F0__DOT__arbiter___05Freqs) 
                     >> 4U));
        vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1dfffU & vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F0__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0) 
                  << 0xdU));
    } else {
        vlSelf->switch_units___05F0__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1 
            = (1U & ((vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills 
                      >> 0xcU) | ((~ (vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills 
                                      >> 0xcU)) & ((IData)(__PVT__switch_units___05F0__DOT__arbiter___05Freqs) 
                                                   >> 4U))));
        vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1dfffU & vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F0__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1) 
                  << 0xdU));
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->switch_units___05F0__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0 
            = (1U & ((IData)(__PVT__switch_units___05F0__DOT__arbiter___05Freqs) 
                     >> 5U));
        vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1bfffU & vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F0__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0) 
                  << 0xeU));
    } else {
        vlSelf->switch_units___05F0__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1 
            = (1U & ((vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills 
                      >> 0xdU) | ((~ (vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills 
                                      >> 0xdU)) & ((IData)(__PVT__switch_units___05F0__DOT__arbiter___05Freqs) 
                                                   >> 5U))));
        vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1bfffU & vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F0__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1) 
                  << 0xeU));
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->switch_units___05F0__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0 
            = (1U & ((IData)(__PVT__switch_units___05F0__DOT__arbiter___05Freqs) 
                     >> 6U));
        vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x17fffU & vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F0__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0) 
                  << 0xfU));
    } else {
        vlSelf->switch_units___05F0__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1 
            = (1U & ((vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills 
                      >> 0xeU) | ((~ (vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills 
                                      >> 0xeU)) & ((IData)(__PVT__switch_units___05F0__DOT__arbiter___05Freqs) 
                                                   >> 6U))));
        vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x17fffU & vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F0__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1) 
                  << 0xfU));
    }
    if ((0x8000U & (IData)(vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->switch_units___05F0__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0 
            = (1U & ((IData)(__PVT__switch_units___05F0__DOT__arbiter___05Freqs) 
                     >> 7U));
        vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0xffffU & vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F0__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0) 
                  << 0x10U));
    } else {
        vlSelf->switch_units___05F0__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1 
            = (1U & ((vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills 
                      >> 0xfU) | ((~ (vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills 
                                      >> 0xfU)) & ((IData)(__PVT__switch_units___05F0__DOT__arbiter___05Freqs) 
                                                   >> 7U))));
        vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0xffffU & vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F0__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1) 
                  << 0x10U));
    }
    vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills 
        = (1U | vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills);
    if ((1U & (IData)(vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->switch_units___05F1__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0 
            = (1U & (IData)(__PVT__switch_units___05F1__DOT__arbiter___05Freqs));
        vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1fffdU & vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F1__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0) 
                  << 1U));
    } else {
        vlSelf->switch_units___05F1__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1 
            = (1U & (vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills 
                     | (IData)(__PVT__switch_units___05F1__DOT__arbiter___05Freqs)));
        vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1fffdU & vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F1__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1) 
                  << 1U));
    }
    if ((2U & (IData)(vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->switch_units___05F1__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0 
            = (1U & ((IData)(__PVT__switch_units___05F1__DOT__arbiter___05Freqs) 
                     >> 1U));
        vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1fffbU & vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F1__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0) 
                  << 2U));
    } else {
        vlSelf->switch_units___05F1__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1 
            = (1U & ((vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills 
                      >> 1U) | ((~ (vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills 
                                    >> 1U)) & ((IData)(__PVT__switch_units___05F1__DOT__arbiter___05Freqs) 
                                               >> 1U))));
        vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1fffbU & vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F1__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1) 
                  << 2U));
    }
    if ((4U & (IData)(vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->switch_units___05F1__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0 
            = (1U & ((IData)(__PVT__switch_units___05F1__DOT__arbiter___05Freqs) 
                     >> 2U));
        vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1fff7U & vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F1__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0) 
                  << 3U));
    } else {
        vlSelf->switch_units___05F1__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1 
            = (1U & ((vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills 
                      >> 2U) | ((~ (vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills 
                                    >> 2U)) & ((IData)(__PVT__switch_units___05F1__DOT__arbiter___05Freqs) 
                                               >> 2U))));
        vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1fff7U & vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F1__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1) 
                  << 3U));
    }
    if ((8U & (IData)(vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->switch_units___05F1__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0 
            = (1U & ((IData)(__PVT__switch_units___05F1__DOT__arbiter___05Freqs) 
                     >> 3U));
        vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1ffefU & vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F1__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0) 
                  << 4U));
    } else {
        vlSelf->switch_units___05F1__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1 
            = (1U & ((vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills 
                      >> 3U) | ((~ (vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills 
                                    >> 3U)) & ((IData)(__PVT__switch_units___05F1__DOT__arbiter___05Freqs) 
                                               >> 3U))));
        vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1ffefU & vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F1__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1) 
                  << 4U));
    }
    if ((0x10U & (IData)(vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->switch_units___05F1__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0 
            = (1U & ((IData)(__PVT__switch_units___05F1__DOT__arbiter___05Freqs) 
                     >> 4U));
        vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1ffdfU & vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F1__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0) 
                  << 5U));
    } else {
        vlSelf->switch_units___05F1__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1 
            = (1U & ((vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills 
                      >> 4U) | ((~ (vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills 
                                    >> 4U)) & ((IData)(__PVT__switch_units___05F1__DOT__arbiter___05Freqs) 
                                               >> 4U))));
        vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1ffdfU & vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F1__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1) 
                  << 5U));
    }
    if ((0x20U & (IData)(vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->switch_units___05F1__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0 
            = (1U & ((IData)(__PVT__switch_units___05F1__DOT__arbiter___05Freqs) 
                     >> 5U));
        vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1ffbfU & vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F1__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0) 
                  << 6U));
    } else {
        vlSelf->switch_units___05F1__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1 
            = (1U & ((vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills 
                      >> 5U) | ((~ (vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills 
                                    >> 5U)) & ((IData)(__PVT__switch_units___05F1__DOT__arbiter___05Freqs) 
                                               >> 5U))));
        vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1ffbfU & vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F1__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1) 
                  << 6U));
    }
    if ((0x40U & (IData)(vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->switch_units___05F1__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0 
            = (1U & ((IData)(__PVT__switch_units___05F1__DOT__arbiter___05Freqs) 
                     >> 6U));
        vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1ff7fU & vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F1__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0) 
                  << 7U));
    } else {
        vlSelf->switch_units___05F1__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1 
            = (1U & ((vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills 
                      >> 6U) | ((~ (vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills 
                                    >> 6U)) & ((IData)(__PVT__switch_units___05F1__DOT__arbiter___05Freqs) 
                                               >> 6U))));
        vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1ff7fU & vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F1__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1) 
                  << 7U));
    }
    if ((0x80U & (IData)(vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->switch_units___05F1__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0 
            = (1U & ((IData)(__PVT__switch_units___05F1__DOT__arbiter___05Freqs) 
                     >> 7U));
        vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1feffU & vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F1__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0) 
                  << 8U));
    } else {
        vlSelf->switch_units___05F1__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1 
            = (1U & ((vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills 
                      >> 7U) | ((~ (vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills 
                                    >> 7U)) & ((IData)(__PVT__switch_units___05F1__DOT__arbiter___05Freqs) 
                                               >> 7U))));
        vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1feffU & vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F1__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1) 
                  << 8U));
    }
    if ((0x100U & (IData)(vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->switch_units___05F1__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0 
            = (1U & (IData)(__PVT__switch_units___05F1__DOT__arbiter___05Freqs));
        vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1fdffU & vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F1__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0) 
                  << 9U));
    } else {
        vlSelf->switch_units___05F1__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1 
            = (1U & ((vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills 
                      >> 8U) | ((~ (vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills 
                                    >> 8U)) & (IData)(__PVT__switch_units___05F1__DOT__arbiter___05Freqs))));
        vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1fdffU & vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F1__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1) 
                  << 9U));
    }
    if ((0x200U & (IData)(vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->switch_units___05F1__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0 
            = (1U & ((IData)(__PVT__switch_units___05F1__DOT__arbiter___05Freqs) 
                     >> 1U));
        vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1fbffU & vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F1__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0) 
                  << 0xaU));
    } else {
        vlSelf->switch_units___05F1__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1 
            = (1U & ((vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills 
                      >> 9U) | ((~ (vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills 
                                    >> 9U)) & ((IData)(__PVT__switch_units___05F1__DOT__arbiter___05Freqs) 
                                               >> 1U))));
        vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1fbffU & vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F1__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1) 
                  << 0xaU));
    }
    if ((0x400U & (IData)(vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->switch_units___05F1__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0 
            = (1U & ((IData)(__PVT__switch_units___05F1__DOT__arbiter___05Freqs) 
                     >> 2U));
        vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1f7ffU & vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F1__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0) 
                  << 0xbU));
    } else {
        vlSelf->switch_units___05F1__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1 
            = (1U & ((vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills 
                      >> 0xaU) | ((~ (vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills 
                                      >> 0xaU)) & ((IData)(__PVT__switch_units___05F1__DOT__arbiter___05Freqs) 
                                                   >> 2U))));
        vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1f7ffU & vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F1__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1) 
                  << 0xbU));
    }
    if ((0x800U & (IData)(vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->switch_units___05F1__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0 
            = (1U & ((IData)(__PVT__switch_units___05F1__DOT__arbiter___05Freqs) 
                     >> 3U));
        vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1efffU & vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F1__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0) 
                  << 0xcU));
    } else {
        vlSelf->switch_units___05F1__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1 
            = (1U & ((vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills 
                      >> 0xbU) | ((~ (vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills 
                                      >> 0xbU)) & ((IData)(__PVT__switch_units___05F1__DOT__arbiter___05Freqs) 
                                                   >> 3U))));
        vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1efffU & vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F1__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1) 
                  << 0xcU));
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->switch_units___05F1__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0 
            = (1U & ((IData)(__PVT__switch_units___05F1__DOT__arbiter___05Freqs) 
                     >> 4U));
        vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1dfffU & vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F1__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0) 
                  << 0xdU));
    } else {
        vlSelf->switch_units___05F1__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1 
            = (1U & ((vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills 
                      >> 0xcU) | ((~ (vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills 
                                      >> 0xcU)) & ((IData)(__PVT__switch_units___05F1__DOT__arbiter___05Freqs) 
                                                   >> 4U))));
        vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1dfffU & vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F1__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1) 
                  << 0xdU));
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->switch_units___05F1__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0 
            = (1U & ((IData)(__PVT__switch_units___05F1__DOT__arbiter___05Freqs) 
                     >> 5U));
        vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1bfffU & vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F1__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0) 
                  << 0xeU));
    } else {
        vlSelf->switch_units___05F1__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1 
            = (1U & ((vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills 
                      >> 0xdU) | ((~ (vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills 
                                      >> 0xdU)) & ((IData)(__PVT__switch_units___05F1__DOT__arbiter___05Freqs) 
                                                   >> 5U))));
        vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1bfffU & vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F1__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1) 
                  << 0xeU));
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->switch_units___05F1__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0 
            = (1U & ((IData)(__PVT__switch_units___05F1__DOT__arbiter___05Freqs) 
                     >> 6U));
        vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x17fffU & vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F1__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0) 
                  << 0xfU));
    } else {
        vlSelf->switch_units___05F1__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1 
            = (1U & ((vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills 
                      >> 0xeU) | ((~ (vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills 
                                      >> 0xeU)) & ((IData)(__PVT__switch_units___05F1__DOT__arbiter___05Freqs) 
                                                   >> 6U))));
        vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x17fffU & vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F1__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1) 
                  << 0xfU));
    }
    if ((0x8000U & (IData)(vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->switch_units___05F1__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0 
            = (1U & ((IData)(__PVT__switch_units___05F1__DOT__arbiter___05Freqs) 
                     >> 7U));
        vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0xffffU & vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F1__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0) 
                  << 0x10U));
    } else {
        vlSelf->switch_units___05F1__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1 
            = (1U & ((vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills 
                      >> 0xfU) | ((~ (vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills 
                                      >> 0xfU)) & ((IData)(__PVT__switch_units___05F1__DOT__arbiter___05Freqs) 
                                                   >> 7U))));
        vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0xffffU & vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F1__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1) 
                  << 0x10U));
    }
    vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills 
        = (1U | vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills);
    if ((1U & (IData)(vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->switch_units___05F2__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0 
            = (1U & (IData)(__PVT__switch_units___05F2__DOT__arbiter___05Freqs));
        vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1fffdU & vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F2__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0) 
                  << 1U));
    } else {
        vlSelf->switch_units___05F2__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1 
            = (1U & (vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills 
                     | (IData)(__PVT__switch_units___05F2__DOT__arbiter___05Freqs)));
        vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1fffdU & vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F2__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1) 
                  << 1U));
    }
    if ((2U & (IData)(vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->switch_units___05F2__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0 
            = (1U & ((IData)(__PVT__switch_units___05F2__DOT__arbiter___05Freqs) 
                     >> 1U));
        vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1fffbU & vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F2__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0) 
                  << 2U));
    } else {
        vlSelf->switch_units___05F2__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1 
            = (1U & ((vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills 
                      >> 1U) | ((~ (vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills 
                                    >> 1U)) & ((IData)(__PVT__switch_units___05F2__DOT__arbiter___05Freqs) 
                                               >> 1U))));
        vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1fffbU & vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F2__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1) 
                  << 2U));
    }
    if ((4U & (IData)(vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->switch_units___05F2__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0 
            = (1U & ((IData)(__PVT__switch_units___05F2__DOT__arbiter___05Freqs) 
                     >> 2U));
        vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1fff7U & vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F2__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0) 
                  << 3U));
    } else {
        vlSelf->switch_units___05F2__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1 
            = (1U & ((vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills 
                      >> 2U) | ((~ (vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills 
                                    >> 2U)) & ((IData)(__PVT__switch_units___05F2__DOT__arbiter___05Freqs) 
                                               >> 2U))));
        vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1fff7U & vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F2__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1) 
                  << 3U));
    }
    if ((8U & (IData)(vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->switch_units___05F2__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0 
            = (1U & ((IData)(__PVT__switch_units___05F2__DOT__arbiter___05Freqs) 
                     >> 3U));
        vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1ffefU & vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F2__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0) 
                  << 4U));
    } else {
        vlSelf->switch_units___05F2__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1 
            = (1U & ((vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills 
                      >> 3U) | ((~ (vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills 
                                    >> 3U)) & ((IData)(__PVT__switch_units___05F2__DOT__arbiter___05Freqs) 
                                               >> 3U))));
        vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1ffefU & vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F2__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1) 
                  << 4U));
    }
    if ((0x10U & (IData)(vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->switch_units___05F2__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0 
            = (1U & ((IData)(__PVT__switch_units___05F2__DOT__arbiter___05Freqs) 
                     >> 4U));
        vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1ffdfU & vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F2__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0) 
                  << 5U));
    } else {
        vlSelf->switch_units___05F2__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1 
            = (1U & ((vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills 
                      >> 4U) | ((~ (vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills 
                                    >> 4U)) & ((IData)(__PVT__switch_units___05F2__DOT__arbiter___05Freqs) 
                                               >> 4U))));
        vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1ffdfU & vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F2__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1) 
                  << 5U));
    }
    if ((0x20U & (IData)(vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->switch_units___05F2__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0 
            = (1U & ((IData)(__PVT__switch_units___05F2__DOT__arbiter___05Freqs) 
                     >> 5U));
        vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1ffbfU & vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F2__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0) 
                  << 6U));
    } else {
        vlSelf->switch_units___05F2__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1 
            = (1U & ((vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills 
                      >> 5U) | ((~ (vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills 
                                    >> 5U)) & ((IData)(__PVT__switch_units___05F2__DOT__arbiter___05Freqs) 
                                               >> 5U))));
        vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1ffbfU & vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F2__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1) 
                  << 6U));
    }
    if ((0x40U & (IData)(vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->switch_units___05F2__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0 
            = (1U & ((IData)(__PVT__switch_units___05F2__DOT__arbiter___05Freqs) 
                     >> 6U));
        vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1ff7fU & vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F2__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0) 
                  << 7U));
    } else {
        vlSelf->switch_units___05F2__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1 
            = (1U & ((vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills 
                      >> 6U) | ((~ (vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills 
                                    >> 6U)) & ((IData)(__PVT__switch_units___05F2__DOT__arbiter___05Freqs) 
                                               >> 6U))));
        vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1ff7fU & vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F2__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1) 
                  << 7U));
    }
    if ((0x80U & (IData)(vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->switch_units___05F2__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0 
            = (1U & ((IData)(__PVT__switch_units___05F2__DOT__arbiter___05Freqs) 
                     >> 7U));
        vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1feffU & vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F2__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0) 
                  << 8U));
    } else {
        vlSelf->switch_units___05F2__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1 
            = (1U & ((vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills 
                      >> 7U) | ((~ (vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills 
                                    >> 7U)) & ((IData)(__PVT__switch_units___05F2__DOT__arbiter___05Freqs) 
                                               >> 7U))));
        vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1feffU & vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F2__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1) 
                  << 8U));
    }
    if ((0x100U & (IData)(vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->switch_units___05F2__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0 
            = (1U & (IData)(__PVT__switch_units___05F2__DOT__arbiter___05Freqs));
        vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1fdffU & vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F2__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0) 
                  << 9U));
    } else {
        vlSelf->switch_units___05F2__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1 
            = (1U & ((vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills 
                      >> 8U) | ((~ (vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills 
                                    >> 8U)) & (IData)(__PVT__switch_units___05F2__DOT__arbiter___05Freqs))));
        vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1fdffU & vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F2__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1) 
                  << 9U));
    }
    if ((0x200U & (IData)(vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->switch_units___05F2__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0 
            = (1U & ((IData)(__PVT__switch_units___05F2__DOT__arbiter___05Freqs) 
                     >> 1U));
        vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1fbffU & vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F2__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0) 
                  << 0xaU));
    } else {
        vlSelf->switch_units___05F2__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1 
            = (1U & ((vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills 
                      >> 9U) | ((~ (vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills 
                                    >> 9U)) & ((IData)(__PVT__switch_units___05F2__DOT__arbiter___05Freqs) 
                                               >> 1U))));
        vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1fbffU & vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F2__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1) 
                  << 0xaU));
    }
    if ((0x400U & (IData)(vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->switch_units___05F2__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0 
            = (1U & ((IData)(__PVT__switch_units___05F2__DOT__arbiter___05Freqs) 
                     >> 2U));
        vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1f7ffU & vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F2__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0) 
                  << 0xbU));
    } else {
        vlSelf->switch_units___05F2__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1 
            = (1U & ((vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills 
                      >> 0xaU) | ((~ (vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills 
                                      >> 0xaU)) & ((IData)(__PVT__switch_units___05F2__DOT__arbiter___05Freqs) 
                                                   >> 2U))));
        vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1f7ffU & vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F2__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1) 
                  << 0xbU));
    }
    if ((0x800U & (IData)(vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->switch_units___05F2__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0 
            = (1U & ((IData)(__PVT__switch_units___05F2__DOT__arbiter___05Freqs) 
                     >> 3U));
        vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1efffU & vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F2__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0) 
                  << 0xcU));
    } else {
        vlSelf->switch_units___05F2__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1 
            = (1U & ((vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills 
                      >> 0xbU) | ((~ (vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills 
                                      >> 0xbU)) & ((IData)(__PVT__switch_units___05F2__DOT__arbiter___05Freqs) 
                                                   >> 3U))));
        vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1efffU & vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F2__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1) 
                  << 0xcU));
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->switch_units___05F2__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0 
            = (1U & ((IData)(__PVT__switch_units___05F2__DOT__arbiter___05Freqs) 
                     >> 4U));
        vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1dfffU & vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F2__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0) 
                  << 0xdU));
    } else {
        vlSelf->switch_units___05F2__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1 
            = (1U & ((vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills 
                      >> 0xcU) | ((~ (vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills 
                                      >> 0xcU)) & ((IData)(__PVT__switch_units___05F2__DOT__arbiter___05Freqs) 
                                                   >> 4U))));
        vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1dfffU & vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F2__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1) 
                  << 0xdU));
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->switch_units___05F2__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0 
            = (1U & ((IData)(__PVT__switch_units___05F2__DOT__arbiter___05Freqs) 
                     >> 5U));
        vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1bfffU & vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F2__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0) 
                  << 0xeU));
    } else {
        vlSelf->switch_units___05F2__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1 
            = (1U & ((vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills 
                      >> 0xdU) | ((~ (vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills 
                                      >> 0xdU)) & ((IData)(__PVT__switch_units___05F2__DOT__arbiter___05Freqs) 
                                                   >> 5U))));
        vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1bfffU & vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F2__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1) 
                  << 0xeU));
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->switch_units___05F2__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0 
            = (1U & ((IData)(__PVT__switch_units___05F2__DOT__arbiter___05Freqs) 
                     >> 6U));
        vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x17fffU & vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F2__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0) 
                  << 0xfU));
    } else {
        vlSelf->switch_units___05F2__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1 
            = (1U & ((vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills 
                      >> 0xeU) | ((~ (vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills 
                                      >> 0xeU)) & ((IData)(__PVT__switch_units___05F2__DOT__arbiter___05Freqs) 
                                                   >> 6U))));
        vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x17fffU & vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F2__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1) 
                  << 0xfU));
    }
    if ((0x8000U & (IData)(vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->switch_units___05F2__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0 
            = (1U & ((IData)(__PVT__switch_units___05F2__DOT__arbiter___05Freqs) 
                     >> 7U));
        vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0xffffU & vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F2__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0) 
                  << 0x10U));
    } else {
        vlSelf->switch_units___05F2__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1 
            = (1U & ((vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills 
                      >> 0xfU) | ((~ (vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills 
                                      >> 0xfU)) & ((IData)(__PVT__switch_units___05F2__DOT__arbiter___05Freqs) 
                                                   >> 7U))));
        vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0xffffU & vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills) 
               | ((IData)(vlSelf->switch_units___05F2__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1) 
                  << 0x10U));
    }
    vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
        = ((0xfffeU & (IData)(vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
           | (1U & ((1U & (IData)(vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fout))
                     ? (IData)(__PVT__switch_units___05F0__DOT__arbiter___05Freqs)
                     : ((~ vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                        & (IData)(__PVT__switch_units___05F0__DOT__arbiter___05Freqs)))));
    vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
        = ((0xfffdU & (IData)(vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
           | (2U & (((2U & (IData)(vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fout))
                      ? ((IData)(__PVT__switch_units___05F0__DOT__arbiter___05Freqs) 
                         >> 1U) : ((~ (vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills 
                                       >> 1U)) & ((IData)(__PVT__switch_units___05F0__DOT__arbiter___05Freqs) 
                                                  >> 1U))) 
                    << 1U)));
    vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
        = ((0xfffbU & (IData)(vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
           | (4U & (((4U & (IData)(vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fout))
                      ? ((IData)(__PVT__switch_units___05F0__DOT__arbiter___05Freqs) 
                         >> 2U) : ((~ (vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills 
                                       >> 2U)) & ((IData)(__PVT__switch_units___05F0__DOT__arbiter___05Freqs) 
                                                  >> 2U))) 
                    << 2U)));
    vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
        = ((0xfff7U & (IData)(vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
           | (8U & (((8U & (IData)(vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fout))
                      ? ((IData)(__PVT__switch_units___05F0__DOT__arbiter___05Freqs) 
                         >> 3U) : ((~ (vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills 
                                       >> 3U)) & ((IData)(__PVT__switch_units___05F0__DOT__arbiter___05Freqs) 
                                                  >> 3U))) 
                    << 3U)));
    vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
        = ((0xffefU & (IData)(vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
           | (0x10U & (((0x10U & (IData)(vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fout))
                         ? ((IData)(__PVT__switch_units___05F0__DOT__arbiter___05Freqs) 
                            >> 4U) : ((~ (vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills 
                                          >> 4U)) & 
                                      ((IData)(__PVT__switch_units___05F0__DOT__arbiter___05Freqs) 
                                       >> 4U))) << 4U)));
    vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
        = ((0xffdfU & (IData)(vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
           | (0x20U & (((0x20U & (IData)(vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fout))
                         ? ((IData)(__PVT__switch_units___05F0__DOT__arbiter___05Freqs) 
                            >> 5U) : ((~ (vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills 
                                          >> 5U)) & 
                                      ((IData)(__PVT__switch_units___05F0__DOT__arbiter___05Freqs) 
                                       >> 5U))) << 5U)));
    vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
        = ((0xffbfU & (IData)(vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
           | (0x40U & (((0x40U & (IData)(vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fout))
                         ? ((IData)(__PVT__switch_units___05F0__DOT__arbiter___05Freqs) 
                            >> 6U) : ((~ (vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills 
                                          >> 6U)) & 
                                      ((IData)(__PVT__switch_units___05F0__DOT__arbiter___05Freqs) 
                                       >> 6U))) << 6U)));
    vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
        = ((0xff7fU & (IData)(vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
           | (0x80U & (((0x80U & (IData)(vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fout))
                         ? ((IData)(__PVT__switch_units___05F0__DOT__arbiter___05Freqs) 
                            >> 7U) : ((~ (vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills 
                                          >> 7U)) & 
                                      ((IData)(__PVT__switch_units___05F0__DOT__arbiter___05Freqs) 
                                       >> 7U))) << 7U)));
    vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
        = ((0xfeffU & (IData)(vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
           | (0x100U & (((0x100U & (IData)(vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fout))
                          ? (IData)(__PVT__switch_units___05F0__DOT__arbiter___05Freqs)
                          : ((~ (vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills 
                                 >> 8U)) & (IData)(__PVT__switch_units___05F0__DOT__arbiter___05Freqs))) 
                        << 8U)));
    vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
        = ((0xfdffU & (IData)(vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
           | (0x200U & (((0x200U & (IData)(vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fout))
                          ? ((IData)(__PVT__switch_units___05F0__DOT__arbiter___05Freqs) 
                             >> 1U) : ((~ (vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills 
                                           >> 9U)) 
                                       & ((IData)(__PVT__switch_units___05F0__DOT__arbiter___05Freqs) 
                                          >> 1U))) 
                        << 9U)));
    vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
        = ((0xfbffU & (IData)(vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
           | (0x400U & (((0x400U & (IData)(vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fout))
                          ? ((IData)(__PVT__switch_units___05F0__DOT__arbiter___05Freqs) 
                             >> 2U) : ((~ (vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills 
                                           >> 0xaU)) 
                                       & ((IData)(__PVT__switch_units___05F0__DOT__arbiter___05Freqs) 
                                          >> 2U))) 
                        << 0xaU)));
    vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
        = ((0xf7ffU & (IData)(vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
           | (0x800U & (((0x800U & (IData)(vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fout))
                          ? ((IData)(__PVT__switch_units___05F0__DOT__arbiter___05Freqs) 
                             >> 3U) : ((~ (vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills 
                                           >> 0xbU)) 
                                       & ((IData)(__PVT__switch_units___05F0__DOT__arbiter___05Freqs) 
                                          >> 3U))) 
                        << 0xbU)));
    vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
        = ((0xefffU & (IData)(vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
           | (0x1000U & (((0x1000U & (IData)(vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fout))
                           ? ((IData)(__PVT__switch_units___05F0__DOT__arbiter___05Freqs) 
                              >> 4U) : ((~ (vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills 
                                            >> 0xcU)) 
                                        & ((IData)(__PVT__switch_units___05F0__DOT__arbiter___05Freqs) 
                                           >> 4U))) 
                         << 0xcU)));
    vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
        = ((0xdfffU & (IData)(vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
           | (0x2000U & (((0x2000U & (IData)(vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fout))
                           ? ((IData)(__PVT__switch_units___05F0__DOT__arbiter___05Freqs) 
                              >> 5U) : ((~ (vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills 
                                            >> 0xdU)) 
                                        & ((IData)(__PVT__switch_units___05F0__DOT__arbiter___05Freqs) 
                                           >> 5U))) 
                         << 0xdU)));
    vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
        = ((0xbfffU & (IData)(vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
           | (0x4000U & (((0x4000U & (IData)(vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fout))
                           ? ((IData)(__PVT__switch_units___05F0__DOT__arbiter___05Freqs) 
                              >> 6U) : ((~ (vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills 
                                            >> 0xeU)) 
                                        & ((IData)(__PVT__switch_units___05F0__DOT__arbiter___05Freqs) 
                                           >> 6U))) 
                         << 0xeU)));
    vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
        = ((0x7fffU & (IData)(vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
           | (0x8000U & (((0x8000U & (IData)(vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fout))
                           ? ((IData)(__PVT__switch_units___05F0__DOT__arbiter___05Freqs) 
                              >> 7U) : ((~ (vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__kills 
                                            >> 0xfU)) 
                                        & ((IData)(__PVT__switch_units___05F0__DOT__arbiter___05Freqs) 
                                           >> 7U))) 
                         << 0xfU)));
    vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
        = ((0xfffeU & (IData)(vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
           | (1U & ((1U & (IData)(vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fout))
                     ? (IData)(__PVT__switch_units___05F1__DOT__arbiter___05Freqs)
                     : ((~ vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                        & (IData)(__PVT__switch_units___05F1__DOT__arbiter___05Freqs)))));
    vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
        = ((0xfffdU & (IData)(vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
           | (2U & (((2U & (IData)(vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fout))
                      ? ((IData)(__PVT__switch_units___05F1__DOT__arbiter___05Freqs) 
                         >> 1U) : ((~ (vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills 
                                       >> 1U)) & ((IData)(__PVT__switch_units___05F1__DOT__arbiter___05Freqs) 
                                                  >> 1U))) 
                    << 1U)));
    vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
        = ((0xfffbU & (IData)(vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
           | (4U & (((4U & (IData)(vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fout))
                      ? ((IData)(__PVT__switch_units___05F1__DOT__arbiter___05Freqs) 
                         >> 2U) : ((~ (vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills 
                                       >> 2U)) & ((IData)(__PVT__switch_units___05F1__DOT__arbiter___05Freqs) 
                                                  >> 2U))) 
                    << 2U)));
    vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
        = ((0xfff7U & (IData)(vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
           | (8U & (((8U & (IData)(vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fout))
                      ? ((IData)(__PVT__switch_units___05F1__DOT__arbiter___05Freqs) 
                         >> 3U) : ((~ (vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills 
                                       >> 3U)) & ((IData)(__PVT__switch_units___05F1__DOT__arbiter___05Freqs) 
                                                  >> 3U))) 
                    << 3U)));
    vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
        = ((0xffefU & (IData)(vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
           | (0x10U & (((0x10U & (IData)(vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fout))
                         ? ((IData)(__PVT__switch_units___05F1__DOT__arbiter___05Freqs) 
                            >> 4U) : ((~ (vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills 
                                          >> 4U)) & 
                                      ((IData)(__PVT__switch_units___05F1__DOT__arbiter___05Freqs) 
                                       >> 4U))) << 4U)));
    vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
        = ((0xffdfU & (IData)(vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
           | (0x20U & (((0x20U & (IData)(vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fout))
                         ? ((IData)(__PVT__switch_units___05F1__DOT__arbiter___05Freqs) 
                            >> 5U) : ((~ (vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills 
                                          >> 5U)) & 
                                      ((IData)(__PVT__switch_units___05F1__DOT__arbiter___05Freqs) 
                                       >> 5U))) << 5U)));
    vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
        = ((0xffbfU & (IData)(vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
           | (0x40U & (((0x40U & (IData)(vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fout))
                         ? ((IData)(__PVT__switch_units___05F1__DOT__arbiter___05Freqs) 
                            >> 6U) : ((~ (vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills 
                                          >> 6U)) & 
                                      ((IData)(__PVT__switch_units___05F1__DOT__arbiter___05Freqs) 
                                       >> 6U))) << 6U)));
    vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
        = ((0xff7fU & (IData)(vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
           | (0x80U & (((0x80U & (IData)(vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fout))
                         ? ((IData)(__PVT__switch_units___05F1__DOT__arbiter___05Freqs) 
                            >> 7U) : ((~ (vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills 
                                          >> 7U)) & 
                                      ((IData)(__PVT__switch_units___05F1__DOT__arbiter___05Freqs) 
                                       >> 7U))) << 7U)));
    vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
        = ((0xfeffU & (IData)(vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
           | (0x100U & (((0x100U & (IData)(vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fout))
                          ? (IData)(__PVT__switch_units___05F1__DOT__arbiter___05Freqs)
                          : ((~ (vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills 
                                 >> 8U)) & (IData)(__PVT__switch_units___05F1__DOT__arbiter___05Freqs))) 
                        << 8U)));
    vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
        = ((0xfdffU & (IData)(vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
           | (0x200U & (((0x200U & (IData)(vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fout))
                          ? ((IData)(__PVT__switch_units___05F1__DOT__arbiter___05Freqs) 
                             >> 1U) : ((~ (vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills 
                                           >> 9U)) 
                                       & ((IData)(__PVT__switch_units___05F1__DOT__arbiter___05Freqs) 
                                          >> 1U))) 
                        << 9U)));
    vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
        = ((0xfbffU & (IData)(vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
           | (0x400U & (((0x400U & (IData)(vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fout))
                          ? ((IData)(__PVT__switch_units___05F1__DOT__arbiter___05Freqs) 
                             >> 2U) : ((~ (vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills 
                                           >> 0xaU)) 
                                       & ((IData)(__PVT__switch_units___05F1__DOT__arbiter___05Freqs) 
                                          >> 2U))) 
                        << 0xaU)));
    vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
        = ((0xf7ffU & (IData)(vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
           | (0x800U & (((0x800U & (IData)(vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fout))
                          ? ((IData)(__PVT__switch_units___05F1__DOT__arbiter___05Freqs) 
                             >> 3U) : ((~ (vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills 
                                           >> 0xbU)) 
                                       & ((IData)(__PVT__switch_units___05F1__DOT__arbiter___05Freqs) 
                                          >> 3U))) 
                        << 0xbU)));
    vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
        = ((0xefffU & (IData)(vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
           | (0x1000U & (((0x1000U & (IData)(vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fout))
                           ? ((IData)(__PVT__switch_units___05F1__DOT__arbiter___05Freqs) 
                              >> 4U) : ((~ (vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills 
                                            >> 0xcU)) 
                                        & ((IData)(__PVT__switch_units___05F1__DOT__arbiter___05Freqs) 
                                           >> 4U))) 
                         << 0xcU)));
    vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
        = ((0xdfffU & (IData)(vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
           | (0x2000U & (((0x2000U & (IData)(vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fout))
                           ? ((IData)(__PVT__switch_units___05F1__DOT__arbiter___05Freqs) 
                              >> 5U) : ((~ (vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills 
                                            >> 0xdU)) 
                                        & ((IData)(__PVT__switch_units___05F1__DOT__arbiter___05Freqs) 
                                           >> 5U))) 
                         << 0xdU)));
    vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
        = ((0xbfffU & (IData)(vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
           | (0x4000U & (((0x4000U & (IData)(vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fout))
                           ? ((IData)(__PVT__switch_units___05F1__DOT__arbiter___05Freqs) 
                              >> 6U) : ((~ (vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills 
                                            >> 0xeU)) 
                                        & ((IData)(__PVT__switch_units___05F1__DOT__arbiter___05Freqs) 
                                           >> 6U))) 
                         << 0xeU)));
    vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
        = ((0x7fffU & (IData)(vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
           | (0x8000U & (((0x8000U & (IData)(vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fout))
                           ? ((IData)(__PVT__switch_units___05F1__DOT__arbiter___05Freqs) 
                              >> 7U) : ((~ (vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__kills 
                                            >> 0xfU)) 
                                        & ((IData)(__PVT__switch_units___05F1__DOT__arbiter___05Freqs) 
                                           >> 7U))) 
                         << 0xfU)));
    vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
        = ((0xfffeU & (IData)(vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
           | (1U & ((1U & (IData)(vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fout))
                     ? (IData)(__PVT__switch_units___05F2__DOT__arbiter___05Freqs)
                     : ((~ vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                        & (IData)(__PVT__switch_units___05F2__DOT__arbiter___05Freqs)))));
    vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
        = ((0xfffdU & (IData)(vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
           | (2U & (((2U & (IData)(vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fout))
                      ? ((IData)(__PVT__switch_units___05F2__DOT__arbiter___05Freqs) 
                         >> 1U) : ((~ (vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills 
                                       >> 1U)) & ((IData)(__PVT__switch_units___05F2__DOT__arbiter___05Freqs) 
                                                  >> 1U))) 
                    << 1U)));
    vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
        = ((0xfffbU & (IData)(vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
           | (4U & (((4U & (IData)(vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fout))
                      ? ((IData)(__PVT__switch_units___05F2__DOT__arbiter___05Freqs) 
                         >> 2U) : ((~ (vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills 
                                       >> 2U)) & ((IData)(__PVT__switch_units___05F2__DOT__arbiter___05Freqs) 
                                                  >> 2U))) 
                    << 2U)));
    vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
        = ((0xfff7U & (IData)(vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
           | (8U & (((8U & (IData)(vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fout))
                      ? ((IData)(__PVT__switch_units___05F2__DOT__arbiter___05Freqs) 
                         >> 3U) : ((~ (vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills 
                                       >> 3U)) & ((IData)(__PVT__switch_units___05F2__DOT__arbiter___05Freqs) 
                                                  >> 3U))) 
                    << 3U)));
    vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
        = ((0xffefU & (IData)(vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
           | (0x10U & (((0x10U & (IData)(vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fout))
                         ? ((IData)(__PVT__switch_units___05F2__DOT__arbiter___05Freqs) 
                            >> 4U) : ((~ (vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills 
                                          >> 4U)) & 
                                      ((IData)(__PVT__switch_units___05F2__DOT__arbiter___05Freqs) 
                                       >> 4U))) << 4U)));
    vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
        = ((0xffdfU & (IData)(vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
           | (0x20U & (((0x20U & (IData)(vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fout))
                         ? ((IData)(__PVT__switch_units___05F2__DOT__arbiter___05Freqs) 
                            >> 5U) : ((~ (vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills 
                                          >> 5U)) & 
                                      ((IData)(__PVT__switch_units___05F2__DOT__arbiter___05Freqs) 
                                       >> 5U))) << 5U)));
    vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
        = ((0xffbfU & (IData)(vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
           | (0x40U & (((0x40U & (IData)(vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fout))
                         ? ((IData)(__PVT__switch_units___05F2__DOT__arbiter___05Freqs) 
                            >> 6U) : ((~ (vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills 
                                          >> 6U)) & 
                                      ((IData)(__PVT__switch_units___05F2__DOT__arbiter___05Freqs) 
                                       >> 6U))) << 6U)));
    vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
        = ((0xff7fU & (IData)(vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
           | (0x80U & (((0x80U & (IData)(vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fout))
                         ? ((IData)(__PVT__switch_units___05F2__DOT__arbiter___05Freqs) 
                            >> 7U) : ((~ (vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills 
                                          >> 7U)) & 
                                      ((IData)(__PVT__switch_units___05F2__DOT__arbiter___05Freqs) 
                                       >> 7U))) << 7U)));
    vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
        = ((0xfeffU & (IData)(vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
           | (0x100U & (((0x100U & (IData)(vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fout))
                          ? (IData)(__PVT__switch_units___05F2__DOT__arbiter___05Freqs)
                          : ((~ (vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills 
                                 >> 8U)) & (IData)(__PVT__switch_units___05F2__DOT__arbiter___05Freqs))) 
                        << 8U)));
    vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
        = ((0xfdffU & (IData)(vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
           | (0x200U & (((0x200U & (IData)(vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fout))
                          ? ((IData)(__PVT__switch_units___05F2__DOT__arbiter___05Freqs) 
                             >> 1U) : ((~ (vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills 
                                           >> 9U)) 
                                       & ((IData)(__PVT__switch_units___05F2__DOT__arbiter___05Freqs) 
                                          >> 1U))) 
                        << 9U)));
    vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
        = ((0xfbffU & (IData)(vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
           | (0x400U & (((0x400U & (IData)(vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fout))
                          ? ((IData)(__PVT__switch_units___05F2__DOT__arbiter___05Freqs) 
                             >> 2U) : ((~ (vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills 
                                           >> 0xaU)) 
                                       & ((IData)(__PVT__switch_units___05F2__DOT__arbiter___05Freqs) 
                                          >> 2U))) 
                        << 0xaU)));
    vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
        = ((0xf7ffU & (IData)(vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
           | (0x800U & (((0x800U & (IData)(vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fout))
                          ? ((IData)(__PVT__switch_units___05F2__DOT__arbiter___05Freqs) 
                             >> 3U) : ((~ (vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills 
                                           >> 0xbU)) 
                                       & ((IData)(__PVT__switch_units___05F2__DOT__arbiter___05Freqs) 
                                          >> 3U))) 
                        << 0xbU)));
    vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
        = ((0xefffU & (IData)(vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
           | (0x1000U & (((0x1000U & (IData)(vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fout))
                           ? ((IData)(__PVT__switch_units___05F2__DOT__arbiter___05Freqs) 
                              >> 4U) : ((~ (vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills 
                                            >> 0xcU)) 
                                        & ((IData)(__PVT__switch_units___05F2__DOT__arbiter___05Freqs) 
                                           >> 4U))) 
                         << 0xcU)));
    vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
        = ((0xdfffU & (IData)(vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
           | (0x2000U & (((0x2000U & (IData)(vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fout))
                           ? ((IData)(__PVT__switch_units___05F2__DOT__arbiter___05Freqs) 
                              >> 5U) : ((~ (vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills 
                                            >> 0xdU)) 
                                        & ((IData)(__PVT__switch_units___05F2__DOT__arbiter___05Freqs) 
                                           >> 5U))) 
                         << 0xdU)));
    vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
        = ((0xbfffU & (IData)(vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
           | (0x4000U & (((0x4000U & (IData)(vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fout))
                           ? ((IData)(__PVT__switch_units___05F2__DOT__arbiter___05Freqs) 
                              >> 6U) : ((~ (vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills 
                                            >> 0xeU)) 
                                        & ((IData)(__PVT__switch_units___05F2__DOT__arbiter___05Freqs) 
                                           >> 6U))) 
                         << 0xeU)));
    vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
        = ((0x7fffU & (IData)(vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
           | (0x8000U & (((0x8000U & (IData)(vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fout))
                           ? ((IData)(__PVT__switch_units___05F2__DOT__arbiter___05Freqs) 
                              >> 7U) : ((~ (vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__kills 
                                            >> 0xfU)) 
                                        & ((IData)(__PVT__switch_units___05F2__DOT__arbiter___05Freqs) 
                                           >> 7U))) 
                         << 0xfU)));
    vlSelf->__PVT__switch_units___05F0__DOT__arbiter___05Fgrants 
        = (0xffU & ((IData)(vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                    | ((IData)(vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                       >> 8U)));
    vlSelf->__PVT__switch_units___05F1__DOT__arbiter___05Fgrants 
        = (0xffU & ((IData)(vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__grants_int) 
                    | ((IData)(vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__grants_int) 
                       >> 8U)));
    vlSelf->__PVT__switch_units___05F2__DOT__arbiter___05Fgrants 
        = (0xffU & ((IData)(vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__grants_int) 
                    | ((IData)(vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__grants_int) 
                       >> 8U)));
    vlSelf->__PVT__send___05Fval[0U] = (0U < (IData)(vlSelf->__PVT__switch_units___05F0__DOT__arbiter___05Fgrants));
    __Vtableidx86 = vlSelf->__PVT__switch_units___05F0__DOT__arbiter___05Fgrants;
    __PVT__switch_units___05F0__DOT__encoder___05Fout 
        = Vcgra_test__ConstPool__TABLE_h3db4ab36_0[__Vtableidx86];
    vlSelf->__PVT__send___05Fval[1U] = (0U < (IData)(vlSelf->__PVT__switch_units___05F1__DOT__arbiter___05Fgrants));
    __Vtableidx87 = vlSelf->__PVT__switch_units___05F1__DOT__arbiter___05Fgrants;
    __PVT__switch_units___05F1__DOT__encoder___05Fout 
        = Vcgra_test__ConstPool__TABLE_h3db4ab36_0[__Vtableidx87];
    vlSelf->__PVT__send___05Fval[2U] = (0U < (IData)(vlSelf->__PVT__switch_units___05F2__DOT__arbiter___05Fgrants));
    __Vtableidx88 = vlSelf->__PVT__switch_units___05F2__DOT__arbiter___05Fgrants;
    __PVT__switch_units___05F2__DOT__encoder___05Fout 
        = Vcgra_test__ConstPool__TABLE_h3db4ab36_0[__Vtableidx88];
    vlSelf->__PVT__send___05Fmsg[0U][0U] = vlSelf->__PVT__switch_units___05F0__DOT__mux___05Fin_
        [__PVT__switch_units___05F0__DOT__encoder___05Fout][0U];
    vlSelf->__PVT__send___05Fmsg[0U][1U] = vlSelf->__PVT__switch_units___05F0__DOT__mux___05Fin_
        [__PVT__switch_units___05F0__DOT__encoder___05Fout][1U];
    vlSelf->__PVT__send___05Fmsg[0U][2U] = vlSelf->__PVT__switch_units___05F0__DOT__mux___05Fin_
        [__PVT__switch_units___05F0__DOT__encoder___05Fout][2U];
    vlSelf->__Vcellout__switch_units___05F0__recv___05Frdy[0U] 
        = (vlSelf->__PVT__send___05Frdy[0U] & (0U == (IData)(__PVT__switch_units___05F0__DOT__encoder___05Fout)));
    vlSelf->__Vcellout__switch_units___05F0__recv___05Frdy[1U] 
        = (vlSelf->__PVT__send___05Frdy[0U] & (1U == (IData)(__PVT__switch_units___05F0__DOT__encoder___05Fout)));
    vlSelf->__Vcellout__switch_units___05F0__recv___05Frdy[2U] 
        = (vlSelf->__PVT__send___05Frdy[0U] & (2U == (IData)(__PVT__switch_units___05F0__DOT__encoder___05Fout)));
    vlSelf->__Vcellout__switch_units___05F0__recv___05Frdy[3U] 
        = (vlSelf->__PVT__send___05Frdy[0U] & (3U == (IData)(__PVT__switch_units___05F0__DOT__encoder___05Fout)));
    vlSelf->__Vcellout__switch_units___05F0__recv___05Frdy[4U] 
        = (vlSelf->__PVT__send___05Frdy[0U] & (4U == (IData)(__PVT__switch_units___05F0__DOT__encoder___05Fout)));
    vlSelf->__Vcellout__switch_units___05F0__recv___05Frdy[5U] 
        = (vlSelf->__PVT__send___05Frdy[0U] & (5U == (IData)(__PVT__switch_units___05F0__DOT__encoder___05Fout)));
    vlSelf->__Vcellout__switch_units___05F0__recv___05Frdy[6U] 
        = (vlSelf->__PVT__send___05Frdy[0U] & (6U == (IData)(__PVT__switch_units___05F0__DOT__encoder___05Fout)));
    vlSelf->__Vcellout__switch_units___05F0__recv___05Frdy[7U] 
        = (vlSelf->__PVT__send___05Frdy[0U] & (7U == (IData)(__PVT__switch_units___05F0__DOT__encoder___05Fout)));
    vlSelf->__PVT__send___05Fmsg[1U][0U] = vlSelf->__PVT__switch_units___05F1__DOT__mux___05Fin_
        [__PVT__switch_units___05F1__DOT__encoder___05Fout][0U];
    vlSelf->__PVT__send___05Fmsg[1U][1U] = vlSelf->__PVT__switch_units___05F1__DOT__mux___05Fin_
        [__PVT__switch_units___05F1__DOT__encoder___05Fout][1U];
    vlSelf->__PVT__send___05Fmsg[1U][2U] = vlSelf->__PVT__switch_units___05F1__DOT__mux___05Fin_
        [__PVT__switch_units___05F1__DOT__encoder___05Fout][2U];
    vlSelf->__Vcellout__switch_units___05F1__recv___05Frdy[0U] 
        = (vlSelf->__PVT__send___05Frdy[1U] & (0U == (IData)(__PVT__switch_units___05F1__DOT__encoder___05Fout)));
    vlSelf->__Vcellout__switch_units___05F1__recv___05Frdy[1U] 
        = (vlSelf->__PVT__send___05Frdy[1U] & (1U == (IData)(__PVT__switch_units___05F1__DOT__encoder___05Fout)));
    vlSelf->__Vcellout__switch_units___05F1__recv___05Frdy[2U] 
        = (vlSelf->__PVT__send___05Frdy[1U] & (2U == (IData)(__PVT__switch_units___05F1__DOT__encoder___05Fout)));
    vlSelf->__Vcellout__switch_units___05F1__recv___05Frdy[3U] 
        = (vlSelf->__PVT__send___05Frdy[1U] & (3U == (IData)(__PVT__switch_units___05F1__DOT__encoder___05Fout)));
    vlSelf->__Vcellout__switch_units___05F1__recv___05Frdy[4U] 
        = (vlSelf->__PVT__send___05Frdy[1U] & (4U == (IData)(__PVT__switch_units___05F1__DOT__encoder___05Fout)));
    vlSelf->__Vcellout__switch_units___05F1__recv___05Frdy[5U] 
        = (vlSelf->__PVT__send___05Frdy[1U] & (5U == (IData)(__PVT__switch_units___05F1__DOT__encoder___05Fout)));
    vlSelf->__Vcellout__switch_units___05F1__recv___05Frdy[6U] 
        = (vlSelf->__PVT__send___05Frdy[1U] & (6U == (IData)(__PVT__switch_units___05F1__DOT__encoder___05Fout)));
    vlSelf->__Vcellout__switch_units___05F1__recv___05Frdy[7U] 
        = (vlSelf->__PVT__send___05Frdy[1U] & (7U == (IData)(__PVT__switch_units___05F1__DOT__encoder___05Fout)));
    vlSelf->__PVT__send___05Fmsg[2U][0U] = vlSelf->__PVT__switch_units___05F2__DOT__mux___05Fin_
        [__PVT__switch_units___05F2__DOT__encoder___05Fout][0U];
    vlSelf->__PVT__send___05Fmsg[2U][1U] = vlSelf->__PVT__switch_units___05F2__DOT__mux___05Fin_
        [__PVT__switch_units___05F2__DOT__encoder___05Fout][1U];
    vlSelf->__PVT__send___05Fmsg[2U][2U] = vlSelf->__PVT__switch_units___05F2__DOT__mux___05Fin_
        [__PVT__switch_units___05F2__DOT__encoder___05Fout][2U];
    vlSelf->__Vcellout__switch_units___05F2__recv___05Frdy[0U] 
        = (vlSelf->__PVT__send___05Frdy[2U] & (0U == (IData)(__PVT__switch_units___05F2__DOT__encoder___05Fout)));
    vlSelf->__Vcellout__switch_units___05F2__recv___05Frdy[1U] 
        = (vlSelf->__PVT__send___05Frdy[2U] & (1U == (IData)(__PVT__switch_units___05F2__DOT__encoder___05Fout)));
    vlSelf->__Vcellout__switch_units___05F2__recv___05Frdy[2U] 
        = (vlSelf->__PVT__send___05Frdy[2U] & (2U == (IData)(__PVT__switch_units___05F2__DOT__encoder___05Fout)));
    vlSelf->__Vcellout__switch_units___05F2__recv___05Frdy[3U] 
        = (vlSelf->__PVT__send___05Frdy[2U] & (3U == (IData)(__PVT__switch_units___05F2__DOT__encoder___05Fout)));
    vlSelf->__Vcellout__switch_units___05F2__recv___05Frdy[4U] 
        = (vlSelf->__PVT__send___05Frdy[2U] & (4U == (IData)(__PVT__switch_units___05F2__DOT__encoder___05Fout)));
    vlSelf->__Vcellout__switch_units___05F2__recv___05Frdy[5U] 
        = (vlSelf->__PVT__send___05Frdy[2U] & (5U == (IData)(__PVT__switch_units___05F2__DOT__encoder___05Fout)));
    vlSelf->__Vcellout__switch_units___05F2__recv___05Frdy[6U] 
        = (vlSelf->__PVT__send___05Frdy[2U] & (6U == (IData)(__PVT__switch_units___05F2__DOT__encoder___05Fout)));
    vlSelf->__Vcellout__switch_units___05F2__recv___05Frdy[7U] 
        = (vlSelf->__PVT__send___05Frdy[2U] & (7U == (IData)(__PVT__switch_units___05F2__DOT__encoder___05Fout)));
    vlSelf->__PVT__switch_units___05Frecv___05Frdy[0U][0U] 
        = vlSelf->__Vcellout__switch_units___05F0__recv___05Frdy
        [0U];
    vlSelf->__PVT__switch_units___05Frecv___05Frdy[0U][1U] 
        = vlSelf->__Vcellout__switch_units___05F0__recv___05Frdy
        [1U];
    vlSelf->__PVT__switch_units___05Frecv___05Frdy[0U][2U] 
        = vlSelf->__Vcellout__switch_units___05F0__recv___05Frdy
        [2U];
    vlSelf->__PVT__switch_units___05Frecv___05Frdy[0U][3U] 
        = vlSelf->__Vcellout__switch_units___05F0__recv___05Frdy
        [3U];
    vlSelf->__PVT__switch_units___05Frecv___05Frdy[0U][4U] 
        = vlSelf->__Vcellout__switch_units___05F0__recv___05Frdy
        [4U];
    vlSelf->__PVT__switch_units___05Frecv___05Frdy[0U][5U] 
        = vlSelf->__Vcellout__switch_units___05F0__recv___05Frdy
        [5U];
    vlSelf->__PVT__switch_units___05Frecv___05Frdy[0U][6U] 
        = vlSelf->__Vcellout__switch_units___05F0__recv___05Frdy
        [6U];
    vlSelf->__PVT__switch_units___05Frecv___05Frdy[0U][7U] 
        = vlSelf->__Vcellout__switch_units___05F0__recv___05Frdy
        [7U];
    vlSelf->__PVT__switch_units___05Frecv___05Frdy[1U][0U] 
        = vlSelf->__Vcellout__switch_units___05F1__recv___05Frdy
        [0U];
    vlSelf->__PVT__switch_units___05Frecv___05Frdy[1U][1U] 
        = vlSelf->__Vcellout__switch_units___05F1__recv___05Frdy
        [1U];
    vlSelf->__PVT__switch_units___05Frecv___05Frdy[1U][2U] 
        = vlSelf->__Vcellout__switch_units___05F1__recv___05Frdy
        [2U];
    vlSelf->__PVT__switch_units___05Frecv___05Frdy[1U][3U] 
        = vlSelf->__Vcellout__switch_units___05F1__recv___05Frdy
        [3U];
    vlSelf->__PVT__switch_units___05Frecv___05Frdy[1U][4U] 
        = vlSelf->__Vcellout__switch_units___05F1__recv___05Frdy
        [4U];
    vlSelf->__PVT__switch_units___05Frecv___05Frdy[1U][5U] 
        = vlSelf->__Vcellout__switch_units___05F1__recv___05Frdy
        [5U];
    vlSelf->__PVT__switch_units___05Frecv___05Frdy[1U][6U] 
        = vlSelf->__Vcellout__switch_units___05F1__recv___05Frdy
        [6U];
    vlSelf->__PVT__switch_units___05Frecv___05Frdy[1U][7U] 
        = vlSelf->__Vcellout__switch_units___05F1__recv___05Frdy
        [7U];
    vlSelf->__PVT__switch_units___05Frecv___05Frdy[2U][0U] 
        = vlSelf->__Vcellout__switch_units___05F2__recv___05Frdy
        [0U];
    vlSelf->__PVT__switch_units___05Frecv___05Frdy[2U][1U] 
        = vlSelf->__Vcellout__switch_units___05F2__recv___05Frdy
        [1U];
    vlSelf->__PVT__switch_units___05Frecv___05Frdy[2U][2U] 
        = vlSelf->__Vcellout__switch_units___05F2__recv___05Frdy
        [2U];
    vlSelf->__PVT__switch_units___05Frecv___05Frdy[2U][3U] 
        = vlSelf->__Vcellout__switch_units___05F2__recv___05Frdy
        [3U];
    vlSelf->__PVT__switch_units___05Frecv___05Frdy[2U][4U] 
        = vlSelf->__Vcellout__switch_units___05F2__recv___05Frdy
        [4U];
    vlSelf->__PVT__switch_units___05Frecv___05Frdy[2U][5U] 
        = vlSelf->__Vcellout__switch_units___05F2__recv___05Frdy
        [5U];
    vlSelf->__PVT__switch_units___05Frecv___05Frdy[2U][6U] 
        = vlSelf->__Vcellout__switch_units___05F2__recv___05Frdy
        [6U];
    vlSelf->__PVT__switch_units___05Frecv___05Frdy[2U][7U] 
        = vlSelf->__Vcellout__switch_units___05F2__recv___05Frdy
        [7U];
    vlSelf->__PVT__route_units___05Fsend___05Frdy[0U][0U] 
        = vlSelf->__PVT__switch_units___05Frecv___05Frdy
        [0U][0U];
    vlSelf->__PVT__route_units___05Fsend___05Frdy[0U][1U] 
        = vlSelf->__PVT__switch_units___05Frecv___05Frdy
        [1U][0U];
    vlSelf->__PVT__route_units___05Fsend___05Frdy[0U][2U] 
        = vlSelf->__PVT__switch_units___05Frecv___05Frdy
        [2U][0U];
    vlSelf->__PVT__route_units___05Fsend___05Frdy[1U][0U] 
        = vlSelf->__PVT__switch_units___05Frecv___05Frdy
        [0U][1U];
    vlSelf->__PVT__route_units___05Fsend___05Frdy[1U][1U] 
        = vlSelf->__PVT__switch_units___05Frecv___05Frdy
        [1U][1U];
    vlSelf->__PVT__route_units___05Fsend___05Frdy[1U][2U] 
        = vlSelf->__PVT__switch_units___05Frecv___05Frdy
        [2U][1U];
    vlSelf->__PVT__route_units___05Fsend___05Frdy[2U][0U] 
        = vlSelf->__PVT__switch_units___05Frecv___05Frdy
        [0U][2U];
    vlSelf->__PVT__route_units___05Fsend___05Frdy[2U][1U] 
        = vlSelf->__PVT__switch_units___05Frecv___05Frdy
        [1U][2U];
    vlSelf->__PVT__route_units___05Fsend___05Frdy[2U][2U] 
        = vlSelf->__PVT__switch_units___05Frecv___05Frdy
        [2U][2U];
    vlSelf->__PVT__route_units___05Fsend___05Frdy[3U][0U] 
        = vlSelf->__PVT__switch_units___05Frecv___05Frdy
        [0U][3U];
    vlSelf->__PVT__route_units___05Fsend___05Frdy[3U][1U] 
        = vlSelf->__PVT__switch_units___05Frecv___05Frdy
        [1U][3U];
    vlSelf->__PVT__route_units___05Fsend___05Frdy[3U][2U] 
        = vlSelf->__PVT__switch_units___05Frecv___05Frdy
        [2U][3U];
    vlSelf->__PVT__route_units___05Fsend___05Frdy[4U][0U] 
        = vlSelf->__PVT__switch_units___05Frecv___05Frdy
        [0U][4U];
    vlSelf->__PVT__route_units___05Fsend___05Frdy[4U][1U] 
        = vlSelf->__PVT__switch_units___05Frecv___05Frdy
        [1U][4U];
    vlSelf->__PVT__route_units___05Fsend___05Frdy[4U][2U] 
        = vlSelf->__PVT__switch_units___05Frecv___05Frdy
        [2U][4U];
    vlSelf->__PVT__route_units___05Fsend___05Frdy[5U][0U] 
        = vlSelf->__PVT__switch_units___05Frecv___05Frdy
        [0U][5U];
    vlSelf->__PVT__route_units___05Fsend___05Frdy[5U][1U] 
        = vlSelf->__PVT__switch_units___05Frecv___05Frdy
        [1U][5U];
    vlSelf->__PVT__route_units___05Fsend___05Frdy[5U][2U] 
        = vlSelf->__PVT__switch_units___05Frecv___05Frdy
        [2U][5U];
    vlSelf->__PVT__route_units___05Fsend___05Frdy[6U][0U] 
        = vlSelf->__PVT__switch_units___05Frecv___05Frdy
        [0U][6U];
    vlSelf->__PVT__route_units___05Fsend___05Frdy[6U][1U] 
        = vlSelf->__PVT__switch_units___05Frecv___05Frdy
        [1U][6U];
    vlSelf->__PVT__route_units___05Fsend___05Frdy[6U][2U] 
        = vlSelf->__PVT__switch_units___05Frecv___05Frdy
        [2U][6U];
    vlSelf->__PVT__route_units___05Fsend___05Frdy[7U][0U] 
        = vlSelf->__PVT__switch_units___05Frecv___05Frdy
        [0U][7U];
    vlSelf->__PVT__route_units___05Fsend___05Frdy[7U][1U] 
        = vlSelf->__PVT__switch_units___05Frecv___05Frdy
        [1U][7U];
    vlSelf->__PVT__route_units___05Fsend___05Frdy[7U][2U] 
        = vlSelf->__PVT__switch_units___05Frecv___05Frdy
        [2U][7U];
    vlSelf->__Vcellinp__route_units___05F0__send___05Frdy[0U] 
        = vlSelf->__PVT__route_units___05Fsend___05Frdy
        [0U][0U];
    vlSelf->__Vcellinp__route_units___05F0__send___05Frdy[1U] 
        = vlSelf->__PVT__route_units___05Fsend___05Frdy
        [0U][1U];
    vlSelf->__Vcellinp__route_units___05F0__send___05Frdy[2U] 
        = vlSelf->__PVT__route_units___05Fsend___05Frdy
        [0U][2U];
    vlSelf->__Vcellinp__route_units___05F1__send___05Frdy[0U] 
        = vlSelf->__PVT__route_units___05Fsend___05Frdy
        [1U][0U];
    vlSelf->__Vcellinp__route_units___05F1__send___05Frdy[1U] 
        = vlSelf->__PVT__route_units___05Fsend___05Frdy
        [1U][1U];
    vlSelf->__Vcellinp__route_units___05F1__send___05Frdy[2U] 
        = vlSelf->__PVT__route_units___05Fsend___05Frdy
        [1U][2U];
    vlSelf->__Vcellinp__route_units___05F2__send___05Frdy[0U] 
        = vlSelf->__PVT__route_units___05Fsend___05Frdy
        [2U][0U];
    vlSelf->__Vcellinp__route_units___05F2__send___05Frdy[1U] 
        = vlSelf->__PVT__route_units___05Fsend___05Frdy
        [2U][1U];
    vlSelf->__Vcellinp__route_units___05F2__send___05Frdy[2U] 
        = vlSelf->__PVT__route_units___05Fsend___05Frdy
        [2U][2U];
    vlSelf->__Vcellinp__route_units___05F3__send___05Frdy[0U] 
        = vlSelf->__PVT__route_units___05Fsend___05Frdy
        [3U][0U];
    vlSelf->__Vcellinp__route_units___05F3__send___05Frdy[1U] 
        = vlSelf->__PVT__route_units___05Fsend___05Frdy
        [3U][1U];
    vlSelf->__Vcellinp__route_units___05F3__send___05Frdy[2U] 
        = vlSelf->__PVT__route_units___05Fsend___05Frdy
        [3U][2U];
    vlSelf->__Vcellinp__route_units___05F4__send___05Frdy[0U] 
        = vlSelf->__PVT__route_units___05Fsend___05Frdy
        [4U][0U];
    vlSelf->__Vcellinp__route_units___05F4__send___05Frdy[1U] 
        = vlSelf->__PVT__route_units___05Fsend___05Frdy
        [4U][1U];
    vlSelf->__Vcellinp__route_units___05F4__send___05Frdy[2U] 
        = vlSelf->__PVT__route_units___05Fsend___05Frdy
        [4U][2U];
    vlSelf->__Vcellinp__route_units___05F5__send___05Frdy[0U] 
        = vlSelf->__PVT__route_units___05Fsend___05Frdy
        [5U][0U];
    vlSelf->__Vcellinp__route_units___05F5__send___05Frdy[1U] 
        = vlSelf->__PVT__route_units___05Fsend___05Frdy
        [5U][1U];
    vlSelf->__Vcellinp__route_units___05F5__send___05Frdy[2U] 
        = vlSelf->__PVT__route_units___05Fsend___05Frdy
        [5U][2U];
    vlSelf->__Vcellinp__route_units___05F6__send___05Frdy[0U] 
        = vlSelf->__PVT__route_units___05Fsend___05Frdy
        [6U][0U];
    vlSelf->__Vcellinp__route_units___05F6__send___05Frdy[1U] 
        = vlSelf->__PVT__route_units___05Fsend___05Frdy
        [6U][1U];
    vlSelf->__Vcellinp__route_units___05F6__send___05Frdy[2U] 
        = vlSelf->__PVT__route_units___05Fsend___05Frdy
        [6U][2U];
    vlSelf->__Vcellinp__route_units___05F7__send___05Frdy[0U] 
        = vlSelf->__PVT__route_units___05Fsend___05Frdy
        [7U][0U];
    vlSelf->__Vcellinp__route_units___05F7__send___05Frdy[1U] 
        = vlSelf->__PVT__route_units___05Fsend___05Frdy
        [7U][1U];
    vlSelf->__Vcellinp__route_units___05F7__send___05Frdy[2U] 
        = vlSelf->__PVT__route_units___05Fsend___05Frdy
        [7U][2U];
    vlSelf->__Vcellout__route_units___05F0__recv___05Frdy 
        = ((2U >= (IData)(__PVT__route_units___05F0__DOT__out_dir)) 
           && vlSelf->__Vcellinp__route_units___05F0__send___05Frdy
           [__PVT__route_units___05F0__DOT__out_dir]);
    vlSelf->__Vcellout__route_units___05F1__recv___05Frdy 
        = ((2U >= (IData)(__PVT__route_units___05F1__DOT__out_dir)) 
           && vlSelf->__Vcellinp__route_units___05F1__send___05Frdy
           [__PVT__route_units___05F1__DOT__out_dir]);
    vlSelf->__Vcellout__route_units___05F2__recv___05Frdy 
        = ((2U >= (IData)(__PVT__route_units___05F2__DOT__out_dir)) 
           && vlSelf->__Vcellinp__route_units___05F2__send___05Frdy
           [__PVT__route_units___05F2__DOT__out_dir]);
    vlSelf->__Vcellout__route_units___05F3__recv___05Frdy 
        = ((2U >= (IData)(__PVT__route_units___05F3__DOT__out_dir)) 
           && vlSelf->__Vcellinp__route_units___05F3__send___05Frdy
           [__PVT__route_units___05F3__DOT__out_dir]);
    vlSelf->__Vcellout__route_units___05F4__recv___05Frdy 
        = ((2U >= (IData)(__PVT__route_units___05F4__DOT__out_dir)) 
           && vlSelf->__Vcellinp__route_units___05F4__send___05Frdy
           [__PVT__route_units___05F4__DOT__out_dir]);
    vlSelf->__Vcellout__route_units___05F5__recv___05Frdy 
        = ((2U >= (IData)(__PVT__route_units___05F5__DOT__out_dir)) 
           && vlSelf->__Vcellinp__route_units___05F5__send___05Frdy
           [__PVT__route_units___05F5__DOT__out_dir]);
    vlSelf->__Vcellout__route_units___05F6__recv___05Frdy 
        = ((2U >= (IData)(__PVT__route_units___05F6__DOT__out_dir)) 
           && vlSelf->__Vcellinp__route_units___05F6__send___05Frdy
           [__PVT__route_units___05F6__DOT__out_dir]);
    vlSelf->__Vcellout__route_units___05F7__recv___05Frdy 
        = ((2U >= (IData)(__PVT__route_units___05F7__DOT__out_dir)) 
           && vlSelf->__Vcellinp__route_units___05F7__send___05Frdy
           [__PVT__route_units___05F7__DOT__out_dir]);
}
