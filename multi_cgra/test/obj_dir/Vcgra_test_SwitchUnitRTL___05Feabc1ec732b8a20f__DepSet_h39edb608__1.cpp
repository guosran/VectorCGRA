// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcgra_test.h for the primary calling header

#include "Vcgra_test__pch.h"
#include "Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f.h"
#include "Vcgra_test__Syms.h"

VL_INLINE_OPT void Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__data_mem__DOT__response_crossbar__DOT__switch_units___05F6__1(Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__data_mem__DOT__response_crossbar__DOT__switch_units___05F6__1\n"); );
    // Init
    CData/*0:0*/ __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = 0;
    // Body
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [6U] & (0U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[0U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [6U] & (1U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[1U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [6U] & (2U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[2U] = __Vlvbound_h600d39cf__0;
}

extern const VlUnpacked<CData/*1:0*/, 8> Vcgra_test__ConstPool__TABLE_h7841efae_0;

VL_INLINE_OPT void Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___nba_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__data_mem__DOT__response_crossbar__DOT__switch_units___05F6__0(Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___nba_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__data_mem__DOT__response_crossbar__DOT__switch_units___05F6__0\n"); );
    // Init
    CData/*2:0*/ __PVT__arbiter___05Freqs;
    __PVT__arbiter___05Freqs = 0;
    CData/*0:0*/ __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = 0;
    CData/*0:0*/ arbiter__DOT____Vlvbound_ha81d0b6a__0;
    arbiter__DOT____Vlvbound_ha81d0b6a__0 = 0;
    CData/*2:0*/ __Vtableidx23;
    __Vtableidx23 = 0;
    // Body
    vlSelf->__PVT__mux___05Fin_[0U][0U] = vlSelf->__PVT__recv___05Fmsg
        [0U][0U];
    vlSelf->__PVT__mux___05Fin_[0U][1U] = vlSelf->__PVT__recv___05Fmsg
        [0U][1U];
    vlSelf->__PVT__mux___05Fin_[0U][2U] = vlSelf->__PVT__recv___05Fmsg
        [0U][2U];
    vlSelf->__PVT__mux___05Fin_[1U][0U] = vlSelf->__PVT__recv___05Fmsg
        [1U][0U];
    vlSelf->__PVT__mux___05Fin_[1U][1U] = vlSelf->__PVT__recv___05Fmsg
        [1U][1U];
    vlSelf->__PVT__mux___05Fin_[1U][2U] = vlSelf->__PVT__recv___05Fmsg
        [1U][2U];
    vlSelf->__PVT__mux___05Fin_[2U][0U] = vlSelf->__PVT__recv___05Fmsg
        [2U][0U];
    vlSelf->__PVT__mux___05Fin_[2U][1U] = vlSelf->__PVT__recv___05Fmsg
        [2U][1U];
    vlSelf->__PVT__mux___05Fin_[2U][2U] = vlSelf->__PVT__recv___05Fmsg
        [2U][2U];
    __PVT__arbiter___05Freqs = ((vlSelf->__PVT__recv___05Fval
                                 [2U] << 2U) | ((vlSelf->__PVT__recv___05Fval
                                                 [1U] 
                                                 << 1U) 
                                                | vlSelf->__PVT__recv___05Fval
                                                [0U]));
    vlSelf->__PVT__arbiter__DOT__kills = (1U | (IData)(vlSelf->__PVT__arbiter__DOT__kills));
    if ((1U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0 
            = (1U & (IData)(__PVT__arbiter___05Freqs));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x7dU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0) 
                                                 << 1U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1 
            = (1U & ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                     | (IData)(__PVT__arbiter___05Freqs)));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x7dU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1) 
                                                 << 1U));
    }
    if ((2U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0 
            = (1U & ((IData)(__PVT__arbiter___05Freqs) 
                     >> 1U));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x7bU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0) 
                                                 << 2U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1 
            = (1U & (((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                      >> 1U) | ((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                                    >> 1U)) & ((IData)(__PVT__arbiter___05Freqs) 
                                               >> 1U))));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x7bU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1) 
                                                 << 2U));
    }
    if ((4U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0 
            = (1U & ((IData)(__PVT__arbiter___05Freqs) 
                     >> 2U));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x77U 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0) 
                                                 << 3U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1 
            = (1U & (((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                      >> 2U) | ((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                                    >> 2U)) & ((IData)(__PVT__arbiter___05Freqs) 
                                               >> 2U))));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x77U 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1) 
                                                 << 3U));
    }
    if ((8U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0 
            = (1U & (IData)(__PVT__arbiter___05Freqs));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x6fU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0) 
                                                 << 4U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1 
            = (1U & (((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                      >> 3U) | ((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                                    >> 3U)) & (IData)(__PVT__arbiter___05Freqs))));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x6fU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1) 
                                                 << 4U));
    }
    if ((0x10U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0 
            = (1U & ((IData)(__PVT__arbiter___05Freqs) 
                     >> 1U));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x5fU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0) 
                                                 << 5U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1 
            = (1U & (((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                      >> 4U) | ((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                                    >> 4U)) & ((IData)(__PVT__arbiter___05Freqs) 
                                               >> 1U))));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x5fU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1) 
                                                 << 5U));
    }
    if ((0x20U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0 
            = (1U & ((IData)(__PVT__arbiter___05Freqs) 
                     >> 2U));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x3fU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0) 
                                                 << 6U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1 
            = (1U & (((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                      >> 5U) | ((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                                    >> 5U)) & ((IData)(__PVT__arbiter___05Freqs) 
                                               >> 2U))));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x3fU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1) 
                                                 << 6U));
    }
    if ((1U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0 
            = (1U & (IData)(__PVT__arbiter___05Freqs));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x3eU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | (IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1 
            = (1U & ((~ (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                     & (IData)(__PVT__arbiter___05Freqs)));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x3eU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | (IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1));
    }
    if ((2U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0 
            = (1U & ((IData)(__PVT__arbiter___05Freqs) 
                     >> 1U));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x3dU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0) 
                                                      << 1U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1 
            = (1U & ((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                         >> 1U)) & ((IData)(__PVT__arbiter___05Freqs) 
                                    >> 1U)));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x3dU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1) 
                                                      << 1U));
    }
    if ((4U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0 
            = (1U & ((IData)(__PVT__arbiter___05Freqs) 
                     >> 2U));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x3bU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0) 
                                                      << 2U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1 
            = (IData)(((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                           >> 2U)) & ((IData)(__PVT__arbiter___05Freqs) 
                                      >> 2U)));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x3bU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1) 
                                                      << 2U));
    }
    if ((8U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0 
            = (1U & (IData)(__PVT__arbiter___05Freqs));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x37U 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0) 
                                                      << 3U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1 
            = (1U & ((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                         >> 3U)) & (IData)(__PVT__arbiter___05Freqs)));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x37U 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1) 
                                                      << 3U));
    }
    if ((0x10U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0 
            = (1U & ((IData)(__PVT__arbiter___05Freqs) 
                     >> 1U));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x2fU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0) 
                                                      << 4U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1 
            = (1U & ((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                         >> 4U)) & ((IData)(__PVT__arbiter___05Freqs) 
                                    >> 1U)));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x2fU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1) 
                                                      << 4U));
    }
    if ((0x20U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0 
            = (1U & ((IData)(__PVT__arbiter___05Freqs) 
                     >> 2U));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x1fU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0) 
                                                      << 5U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1 
            = (IData)(((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                           >> 5U)) & ((IData)(__PVT__arbiter___05Freqs) 
                                      >> 2U)));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x1fU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1) 
                                                      << 5U));
    }
    arbiter__DOT____Vlvbound_ha81d0b6a__0 = (IData)(
                                                    (0U 
                                                     != 
                                                     (9U 
                                                      & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int))));
    vlSelf->__PVT__arbiter___05Fgrants = ((6U & (IData)(vlSelf->__PVT__arbiter___05Fgrants)) 
                                          | (IData)(arbiter__DOT____Vlvbound_ha81d0b6a__0));
    arbiter__DOT____Vlvbound_ha81d0b6a__0 = (IData)(
                                                    (0U 
                                                     != 
                                                     (0x12U 
                                                      & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int))));
    vlSelf->__PVT__arbiter___05Fgrants = ((5U & (IData)(vlSelf->__PVT__arbiter___05Fgrants)) 
                                          | ((IData)(arbiter__DOT____Vlvbound_ha81d0b6a__0) 
                                             << 1U));
    arbiter__DOT____Vlvbound_ha81d0b6a__0 = (IData)(
                                                    (0U 
                                                     != 
                                                     (0x24U 
                                                      & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int))));
    vlSelf->__PVT__arbiter___05Fgrants = ((3U & (IData)(vlSelf->__PVT__arbiter___05Fgrants)) 
                                          | ((IData)(arbiter__DOT____Vlvbound_ha81d0b6a__0) 
                                             << 2U));
    __Vtableidx23 = vlSelf->__PVT__arbiter___05Fgrants;
    vlSelf->__PVT__encoder___05Fout = Vcgra_test__ConstPool__TABLE_h7841efae_0
        [__Vtableidx23];
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [6U] & (0U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[0U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [6U] & (1U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[1U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [6U] & (2U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[2U] = __Vlvbound_h600d39cf__0;
    if ((2U >= (IData)(vlSelf->__PVT__encoder___05Fout))) {
        vlSelf->__PVT__send___05Fmsg[0U] = vlSelf->__PVT__mux___05Fin_
            [vlSelf->__PVT__encoder___05Fout][0U];
        vlSelf->__PVT__send___05Fmsg[1U] = vlSelf->__PVT__mux___05Fin_
            [vlSelf->__PVT__encoder___05Fout][1U];
        vlSelf->__PVT__send___05Fmsg[2U] = vlSelf->__PVT__mux___05Fin_
            [vlSelf->__PVT__encoder___05Fout][2U];
    } else {
        vlSelf->__PVT__send___05Fmsg[0U] = 0U;
        vlSelf->__PVT__send___05Fmsg[1U] = 0U;
        vlSelf->__PVT__send___05Fmsg[2U] = 0U;
    }
}

VL_INLINE_OPT void Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__data_mem__DOT__response_crossbar__DOT__switch_units___05F7__1(Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__data_mem__DOT__response_crossbar__DOT__switch_units___05F7__1\n"); );
    // Init
    CData/*0:0*/ __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = 0;
    // Body
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [7U] & (0U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[0U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [7U] & (1U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[1U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [7U] & (2U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[2U] = __Vlvbound_h600d39cf__0;
}

VL_INLINE_OPT void Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___nba_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__data_mem__DOT__response_crossbar__DOT__switch_units___05F7__0(Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___nba_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__data_mem__DOT__response_crossbar__DOT__switch_units___05F7__0\n"); );
    // Init
    CData/*2:0*/ __PVT__arbiter___05Freqs;
    __PVT__arbiter___05Freqs = 0;
    CData/*0:0*/ __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = 0;
    CData/*0:0*/ arbiter__DOT____Vlvbound_ha81d0b6a__0;
    arbiter__DOT____Vlvbound_ha81d0b6a__0 = 0;
    CData/*2:0*/ __Vtableidx24;
    __Vtableidx24 = 0;
    // Body
    vlSelf->__PVT__mux___05Fin_[0U][0U] = vlSelf->__PVT__recv___05Fmsg
        [0U][0U];
    vlSelf->__PVT__mux___05Fin_[0U][1U] = vlSelf->__PVT__recv___05Fmsg
        [0U][1U];
    vlSelf->__PVT__mux___05Fin_[0U][2U] = vlSelf->__PVT__recv___05Fmsg
        [0U][2U];
    vlSelf->__PVT__mux___05Fin_[1U][0U] = vlSelf->__PVT__recv___05Fmsg
        [1U][0U];
    vlSelf->__PVT__mux___05Fin_[1U][1U] = vlSelf->__PVT__recv___05Fmsg
        [1U][1U];
    vlSelf->__PVT__mux___05Fin_[1U][2U] = vlSelf->__PVT__recv___05Fmsg
        [1U][2U];
    vlSelf->__PVT__mux___05Fin_[2U][0U] = vlSelf->__PVT__recv___05Fmsg
        [2U][0U];
    vlSelf->__PVT__mux___05Fin_[2U][1U] = vlSelf->__PVT__recv___05Fmsg
        [2U][1U];
    vlSelf->__PVT__mux___05Fin_[2U][2U] = vlSelf->__PVT__recv___05Fmsg
        [2U][2U];
    __PVT__arbiter___05Freqs = ((vlSelf->__PVT__recv___05Fval
                                 [2U] << 2U) | ((vlSelf->__PVT__recv___05Fval
                                                 [1U] 
                                                 << 1U) 
                                                | vlSelf->__PVT__recv___05Fval
                                                [0U]));
    vlSelf->__PVT__arbiter__DOT__kills = (1U | (IData)(vlSelf->__PVT__arbiter__DOT__kills));
    if ((1U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0 
            = (1U & (IData)(__PVT__arbiter___05Freqs));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x7dU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0) 
                                                 << 1U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1 
            = (1U & ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                     | (IData)(__PVT__arbiter___05Freqs)));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x7dU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1) 
                                                 << 1U));
    }
    if ((2U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0 
            = (1U & ((IData)(__PVT__arbiter___05Freqs) 
                     >> 1U));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x7bU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0) 
                                                 << 2U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1 
            = (1U & (((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                      >> 1U) | ((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                                    >> 1U)) & ((IData)(__PVT__arbiter___05Freqs) 
                                               >> 1U))));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x7bU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1) 
                                                 << 2U));
    }
    if ((4U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0 
            = (1U & ((IData)(__PVT__arbiter___05Freqs) 
                     >> 2U));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x77U 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0) 
                                                 << 3U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1 
            = (1U & (((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                      >> 2U) | ((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                                    >> 2U)) & ((IData)(__PVT__arbiter___05Freqs) 
                                               >> 2U))));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x77U 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1) 
                                                 << 3U));
    }
    if ((8U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0 
            = (1U & (IData)(__PVT__arbiter___05Freqs));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x6fU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0) 
                                                 << 4U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1 
            = (1U & (((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                      >> 3U) | ((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                                    >> 3U)) & (IData)(__PVT__arbiter___05Freqs))));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x6fU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1) 
                                                 << 4U));
    }
    if ((0x10U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0 
            = (1U & ((IData)(__PVT__arbiter___05Freqs) 
                     >> 1U));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x5fU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0) 
                                                 << 5U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1 
            = (1U & (((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                      >> 4U) | ((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                                    >> 4U)) & ((IData)(__PVT__arbiter___05Freqs) 
                                               >> 1U))));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x5fU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1) 
                                                 << 5U));
    }
    if ((0x20U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0 
            = (1U & ((IData)(__PVT__arbiter___05Freqs) 
                     >> 2U));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x3fU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0) 
                                                 << 6U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1 
            = (1U & (((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                      >> 5U) | ((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                                    >> 5U)) & ((IData)(__PVT__arbiter___05Freqs) 
                                               >> 2U))));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x3fU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1) 
                                                 << 6U));
    }
    if ((1U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0 
            = (1U & (IData)(__PVT__arbiter___05Freqs));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x3eU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | (IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1 
            = (1U & ((~ (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                     & (IData)(__PVT__arbiter___05Freqs)));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x3eU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | (IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1));
    }
    if ((2U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0 
            = (1U & ((IData)(__PVT__arbiter___05Freqs) 
                     >> 1U));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x3dU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0) 
                                                      << 1U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1 
            = (1U & ((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                         >> 1U)) & ((IData)(__PVT__arbiter___05Freqs) 
                                    >> 1U)));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x3dU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1) 
                                                      << 1U));
    }
    if ((4U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0 
            = (1U & ((IData)(__PVT__arbiter___05Freqs) 
                     >> 2U));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x3bU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0) 
                                                      << 2U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1 
            = (IData)(((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                           >> 2U)) & ((IData)(__PVT__arbiter___05Freqs) 
                                      >> 2U)));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x3bU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1) 
                                                      << 2U));
    }
    if ((8U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0 
            = (1U & (IData)(__PVT__arbiter___05Freqs));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x37U 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0) 
                                                      << 3U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1 
            = (1U & ((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                         >> 3U)) & (IData)(__PVT__arbiter___05Freqs)));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x37U 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1) 
                                                      << 3U));
    }
    if ((0x10U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0 
            = (1U & ((IData)(__PVT__arbiter___05Freqs) 
                     >> 1U));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x2fU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0) 
                                                      << 4U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1 
            = (1U & ((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                         >> 4U)) & ((IData)(__PVT__arbiter___05Freqs) 
                                    >> 1U)));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x2fU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1) 
                                                      << 4U));
    }
    if ((0x20U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0 
            = (1U & ((IData)(__PVT__arbiter___05Freqs) 
                     >> 2U));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x1fU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0) 
                                                      << 5U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1 
            = (IData)(((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                           >> 5U)) & ((IData)(__PVT__arbiter___05Freqs) 
                                      >> 2U)));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x1fU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1) 
                                                      << 5U));
    }
    arbiter__DOT____Vlvbound_ha81d0b6a__0 = (IData)(
                                                    (0U 
                                                     != 
                                                     (9U 
                                                      & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int))));
    vlSelf->__PVT__arbiter___05Fgrants = ((6U & (IData)(vlSelf->__PVT__arbiter___05Fgrants)) 
                                          | (IData)(arbiter__DOT____Vlvbound_ha81d0b6a__0));
    arbiter__DOT____Vlvbound_ha81d0b6a__0 = (IData)(
                                                    (0U 
                                                     != 
                                                     (0x12U 
                                                      & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int))));
    vlSelf->__PVT__arbiter___05Fgrants = ((5U & (IData)(vlSelf->__PVT__arbiter___05Fgrants)) 
                                          | ((IData)(arbiter__DOT____Vlvbound_ha81d0b6a__0) 
                                             << 1U));
    arbiter__DOT____Vlvbound_ha81d0b6a__0 = (IData)(
                                                    (0U 
                                                     != 
                                                     (0x24U 
                                                      & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int))));
    vlSelf->__PVT__arbiter___05Fgrants = ((3U & (IData)(vlSelf->__PVT__arbiter___05Fgrants)) 
                                          | ((IData)(arbiter__DOT____Vlvbound_ha81d0b6a__0) 
                                             << 2U));
    __Vtableidx24 = vlSelf->__PVT__arbiter___05Fgrants;
    vlSelf->__PVT__encoder___05Fout = Vcgra_test__ConstPool__TABLE_h7841efae_0
        [__Vtableidx24];
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [7U] & (0U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[0U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [7U] & (1U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[1U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [7U] & (2U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[2U] = __Vlvbound_h600d39cf__0;
    if ((2U >= (IData)(vlSelf->__PVT__encoder___05Fout))) {
        vlSelf->__PVT__send___05Fmsg[0U] = vlSelf->__PVT__mux___05Fin_
            [vlSelf->__PVT__encoder___05Fout][0U];
        vlSelf->__PVT__send___05Fmsg[1U] = vlSelf->__PVT__mux___05Fin_
            [vlSelf->__PVT__encoder___05Fout][1U];
        vlSelf->__PVT__send___05Fmsg[2U] = vlSelf->__PVT__mux___05Fin_
            [vlSelf->__PVT__encoder___05Fout][2U];
    } else {
        vlSelf->__PVT__send___05Fmsg[0U] = 0U;
        vlSelf->__PVT__send___05Fmsg[1U] = 0U;
        vlSelf->__PVT__send___05Fmsg[2U] = 0U;
    }
}

VL_INLINE_OPT void Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__1(Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__1\n"); );
    // Init
    CData/*0:0*/ __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = 0;
    // Body
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [0U] & (0U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[0U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [0U] & (1U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[1U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [0U] & (2U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[2U] = __Vlvbound_h600d39cf__0;
}

VL_INLINE_OPT void Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___nba_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__0(Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___nba_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__0\n"); );
    // Init
    CData/*2:0*/ __PVT__arbiter___05Freqs;
    __PVT__arbiter___05Freqs = 0;
    CData/*0:0*/ __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = 0;
    CData/*0:0*/ arbiter__DOT____Vlvbound_ha81d0b6a__0;
    arbiter__DOT____Vlvbound_ha81d0b6a__0 = 0;
    CData/*2:0*/ __Vtableidx25;
    __Vtableidx25 = 0;
    // Body
    vlSelf->__PVT__mux___05Fin_[0U][0U] = vlSelf->__PVT__recv___05Fmsg
        [0U][0U];
    vlSelf->__PVT__mux___05Fin_[0U][1U] = vlSelf->__PVT__recv___05Fmsg
        [0U][1U];
    vlSelf->__PVT__mux___05Fin_[0U][2U] = vlSelf->__PVT__recv___05Fmsg
        [0U][2U];
    vlSelf->__PVT__mux___05Fin_[1U][0U] = vlSelf->__PVT__recv___05Fmsg
        [1U][0U];
    vlSelf->__PVT__mux___05Fin_[1U][1U] = vlSelf->__PVT__recv___05Fmsg
        [1U][1U];
    vlSelf->__PVT__mux___05Fin_[1U][2U] = vlSelf->__PVT__recv___05Fmsg
        [1U][2U];
    vlSelf->__PVT__mux___05Fin_[2U][0U] = vlSelf->__PVT__recv___05Fmsg
        [2U][0U];
    vlSelf->__PVT__mux___05Fin_[2U][1U] = vlSelf->__PVT__recv___05Fmsg
        [2U][1U];
    vlSelf->__PVT__mux___05Fin_[2U][2U] = vlSelf->__PVT__recv___05Fmsg
        [2U][2U];
    __PVT__arbiter___05Freqs = ((vlSelf->__PVT__recv___05Fval
                                 [2U] << 2U) | ((vlSelf->__PVT__recv___05Fval
                                                 [1U] 
                                                 << 1U) 
                                                | vlSelf->__PVT__recv___05Fval
                                                [0U]));
    vlSelf->__PVT__arbiter__DOT__kills = (1U | (IData)(vlSelf->__PVT__arbiter__DOT__kills));
    if ((1U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0 
            = (1U & (IData)(__PVT__arbiter___05Freqs));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x7dU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0) 
                                                 << 1U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1 
            = (1U & ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                     | (IData)(__PVT__arbiter___05Freqs)));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x7dU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1) 
                                                 << 1U));
    }
    if ((2U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0 
            = (1U & ((IData)(__PVT__arbiter___05Freqs) 
                     >> 1U));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x7bU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0) 
                                                 << 2U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1 
            = (1U & (((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                      >> 1U) | ((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                                    >> 1U)) & ((IData)(__PVT__arbiter___05Freqs) 
                                               >> 1U))));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x7bU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1) 
                                                 << 2U));
    }
    if ((4U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0 
            = (1U & ((IData)(__PVT__arbiter___05Freqs) 
                     >> 2U));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x77U 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0) 
                                                 << 3U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1 
            = (1U & (((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                      >> 2U) | ((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                                    >> 2U)) & ((IData)(__PVT__arbiter___05Freqs) 
                                               >> 2U))));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x77U 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1) 
                                                 << 3U));
    }
    if ((8U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0 
            = (1U & (IData)(__PVT__arbiter___05Freqs));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x6fU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0) 
                                                 << 4U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1 
            = (1U & (((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                      >> 3U) | ((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                                    >> 3U)) & (IData)(__PVT__arbiter___05Freqs))));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x6fU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1) 
                                                 << 4U));
    }
    if ((0x10U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0 
            = (1U & ((IData)(__PVT__arbiter___05Freqs) 
                     >> 1U));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x5fU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0) 
                                                 << 5U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1 
            = (1U & (((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                      >> 4U) | ((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                                    >> 4U)) & ((IData)(__PVT__arbiter___05Freqs) 
                                               >> 1U))));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x5fU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1) 
                                                 << 5U));
    }
    if ((0x20U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0 
            = (1U & ((IData)(__PVT__arbiter___05Freqs) 
                     >> 2U));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x3fU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0) 
                                                 << 6U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1 
            = (1U & (((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                      >> 5U) | ((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                                    >> 5U)) & ((IData)(__PVT__arbiter___05Freqs) 
                                               >> 2U))));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x3fU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1) 
                                                 << 6U));
    }
    if ((1U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0 
            = (1U & (IData)(__PVT__arbiter___05Freqs));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x3eU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | (IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1 
            = (1U & ((~ (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                     & (IData)(__PVT__arbiter___05Freqs)));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x3eU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | (IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1));
    }
    if ((2U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0 
            = (1U & ((IData)(__PVT__arbiter___05Freqs) 
                     >> 1U));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x3dU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0) 
                                                      << 1U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1 
            = (1U & ((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                         >> 1U)) & ((IData)(__PVT__arbiter___05Freqs) 
                                    >> 1U)));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x3dU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1) 
                                                      << 1U));
    }
    if ((4U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0 
            = (1U & ((IData)(__PVT__arbiter___05Freqs) 
                     >> 2U));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x3bU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0) 
                                                      << 2U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1 
            = (IData)(((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                           >> 2U)) & ((IData)(__PVT__arbiter___05Freqs) 
                                      >> 2U)));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x3bU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1) 
                                                      << 2U));
    }
    if ((8U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0 
            = (1U & (IData)(__PVT__arbiter___05Freqs));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x37U 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0) 
                                                      << 3U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1 
            = (1U & ((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                         >> 3U)) & (IData)(__PVT__arbiter___05Freqs)));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x37U 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1) 
                                                      << 3U));
    }
    if ((0x10U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0 
            = (1U & ((IData)(__PVT__arbiter___05Freqs) 
                     >> 1U));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x2fU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0) 
                                                      << 4U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1 
            = (1U & ((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                         >> 4U)) & ((IData)(__PVT__arbiter___05Freqs) 
                                    >> 1U)));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x2fU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1) 
                                                      << 4U));
    }
    if ((0x20U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0 
            = (1U & ((IData)(__PVT__arbiter___05Freqs) 
                     >> 2U));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x1fU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0) 
                                                      << 5U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1 
            = (IData)(((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                           >> 5U)) & ((IData)(__PVT__arbiter___05Freqs) 
                                      >> 2U)));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x1fU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1) 
                                                      << 5U));
    }
    arbiter__DOT____Vlvbound_ha81d0b6a__0 = (IData)(
                                                    (0U 
                                                     != 
                                                     (9U 
                                                      & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int))));
    vlSelf->__PVT__arbiter___05Fgrants = ((6U & (IData)(vlSelf->__PVT__arbiter___05Fgrants)) 
                                          | (IData)(arbiter__DOT____Vlvbound_ha81d0b6a__0));
    arbiter__DOT____Vlvbound_ha81d0b6a__0 = (IData)(
                                                    (0U 
                                                     != 
                                                     (0x12U 
                                                      & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int))));
    vlSelf->__PVT__arbiter___05Fgrants = ((5U & (IData)(vlSelf->__PVT__arbiter___05Fgrants)) 
                                          | ((IData)(arbiter__DOT____Vlvbound_ha81d0b6a__0) 
                                             << 1U));
    arbiter__DOT____Vlvbound_ha81d0b6a__0 = (IData)(
                                                    (0U 
                                                     != 
                                                     (0x24U 
                                                      & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int))));
    vlSelf->__PVT__arbiter___05Fgrants = ((3U & (IData)(vlSelf->__PVT__arbiter___05Fgrants)) 
                                          | ((IData)(arbiter__DOT____Vlvbound_ha81d0b6a__0) 
                                             << 2U));
    __Vtableidx25 = vlSelf->__PVT__arbiter___05Fgrants;
    vlSelf->__PVT__encoder___05Fout = Vcgra_test__ConstPool__TABLE_h7841efae_0
        [__Vtableidx25];
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [0U] & (0U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[0U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [0U] & (1U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[1U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [0U] & (2U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[2U] = __Vlvbound_h600d39cf__0;
    if ((2U >= (IData)(vlSelf->__PVT__encoder___05Fout))) {
        vlSelf->__PVT__send___05Fmsg[0U] = vlSelf->__PVT__mux___05Fin_
            [vlSelf->__PVT__encoder___05Fout][0U];
        vlSelf->__PVT__send___05Fmsg[1U] = vlSelf->__PVT__mux___05Fin_
            [vlSelf->__PVT__encoder___05Fout][1U];
        vlSelf->__PVT__send___05Fmsg[2U] = vlSelf->__PVT__mux___05Fin_
            [vlSelf->__PVT__encoder___05Fout][2U];
    } else {
        vlSelf->__PVT__send___05Fmsg[0U] = 0U;
        vlSelf->__PVT__send___05Fmsg[1U] = 0U;
        vlSelf->__PVT__send___05Fmsg[2U] = 0U;
    }
}

VL_INLINE_OPT void Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__1(Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__1\n"); );
    // Init
    CData/*0:0*/ __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = 0;
    // Body
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [1U] & (0U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[0U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [1U] & (1U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[1U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [1U] & (2U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[2U] = __Vlvbound_h600d39cf__0;
}

VL_INLINE_OPT void Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___nba_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__0(Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___nba_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__0\n"); );
    // Init
    CData/*2:0*/ __PVT__arbiter___05Freqs;
    __PVT__arbiter___05Freqs = 0;
    CData/*0:0*/ __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = 0;
    CData/*0:0*/ arbiter__DOT____Vlvbound_ha81d0b6a__0;
    arbiter__DOT____Vlvbound_ha81d0b6a__0 = 0;
    CData/*2:0*/ __Vtableidx26;
    __Vtableidx26 = 0;
    // Body
    vlSelf->__PVT__mux___05Fin_[0U][0U] = vlSelf->__PVT__recv___05Fmsg
        [0U][0U];
    vlSelf->__PVT__mux___05Fin_[0U][1U] = vlSelf->__PVT__recv___05Fmsg
        [0U][1U];
    vlSelf->__PVT__mux___05Fin_[0U][2U] = vlSelf->__PVT__recv___05Fmsg
        [0U][2U];
    vlSelf->__PVT__mux___05Fin_[1U][0U] = vlSelf->__PVT__recv___05Fmsg
        [1U][0U];
    vlSelf->__PVT__mux___05Fin_[1U][1U] = vlSelf->__PVT__recv___05Fmsg
        [1U][1U];
    vlSelf->__PVT__mux___05Fin_[1U][2U] = vlSelf->__PVT__recv___05Fmsg
        [1U][2U];
    vlSelf->__PVT__mux___05Fin_[2U][0U] = vlSelf->__PVT__recv___05Fmsg
        [2U][0U];
    vlSelf->__PVT__mux___05Fin_[2U][1U] = vlSelf->__PVT__recv___05Fmsg
        [2U][1U];
    vlSelf->__PVT__mux___05Fin_[2U][2U] = vlSelf->__PVT__recv___05Fmsg
        [2U][2U];
    __PVT__arbiter___05Freqs = ((vlSelf->__PVT__recv___05Fval
                                 [2U] << 2U) | ((vlSelf->__PVT__recv___05Fval
                                                 [1U] 
                                                 << 1U) 
                                                | vlSelf->__PVT__recv___05Fval
                                                [0U]));
    vlSelf->__PVT__arbiter__DOT__kills = (1U | (IData)(vlSelf->__PVT__arbiter__DOT__kills));
    if ((1U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0 
            = (1U & (IData)(__PVT__arbiter___05Freqs));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x7dU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0) 
                                                 << 1U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1 
            = (1U & ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                     | (IData)(__PVT__arbiter___05Freqs)));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x7dU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1) 
                                                 << 1U));
    }
    if ((2U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0 
            = (1U & ((IData)(__PVT__arbiter___05Freqs) 
                     >> 1U));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x7bU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0) 
                                                 << 2U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1 
            = (1U & (((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                      >> 1U) | ((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                                    >> 1U)) & ((IData)(__PVT__arbiter___05Freqs) 
                                               >> 1U))));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x7bU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1) 
                                                 << 2U));
    }
    if ((4U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0 
            = (1U & ((IData)(__PVT__arbiter___05Freqs) 
                     >> 2U));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x77U 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0) 
                                                 << 3U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1 
            = (1U & (((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                      >> 2U) | ((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                                    >> 2U)) & ((IData)(__PVT__arbiter___05Freqs) 
                                               >> 2U))));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x77U 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1) 
                                                 << 3U));
    }
    if ((8U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0 
            = (1U & (IData)(__PVT__arbiter___05Freqs));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x6fU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0) 
                                                 << 4U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1 
            = (1U & (((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                      >> 3U) | ((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                                    >> 3U)) & (IData)(__PVT__arbiter___05Freqs))));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x6fU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1) 
                                                 << 4U));
    }
    if ((0x10U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0 
            = (1U & ((IData)(__PVT__arbiter___05Freqs) 
                     >> 1U));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x5fU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0) 
                                                 << 5U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1 
            = (1U & (((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                      >> 4U) | ((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                                    >> 4U)) & ((IData)(__PVT__arbiter___05Freqs) 
                                               >> 1U))));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x5fU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1) 
                                                 << 5U));
    }
    if ((0x20U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0 
            = (1U & ((IData)(__PVT__arbiter___05Freqs) 
                     >> 2U));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x3fU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0) 
                                                 << 6U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1 
            = (1U & (((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                      >> 5U) | ((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                                    >> 5U)) & ((IData)(__PVT__arbiter___05Freqs) 
                                               >> 2U))));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x3fU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1) 
                                                 << 6U));
    }
    if ((1U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0 
            = (1U & (IData)(__PVT__arbiter___05Freqs));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x3eU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | (IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1 
            = (1U & ((~ (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                     & (IData)(__PVT__arbiter___05Freqs)));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x3eU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | (IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1));
    }
    if ((2U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0 
            = (1U & ((IData)(__PVT__arbiter___05Freqs) 
                     >> 1U));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x3dU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0) 
                                                      << 1U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1 
            = (1U & ((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                         >> 1U)) & ((IData)(__PVT__arbiter___05Freqs) 
                                    >> 1U)));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x3dU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1) 
                                                      << 1U));
    }
    if ((4U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0 
            = (1U & ((IData)(__PVT__arbiter___05Freqs) 
                     >> 2U));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x3bU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0) 
                                                      << 2U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1 
            = (IData)(((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                           >> 2U)) & ((IData)(__PVT__arbiter___05Freqs) 
                                      >> 2U)));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x3bU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1) 
                                                      << 2U));
    }
    if ((8U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0 
            = (1U & (IData)(__PVT__arbiter___05Freqs));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x37U 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0) 
                                                      << 3U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1 
            = (1U & ((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                         >> 3U)) & (IData)(__PVT__arbiter___05Freqs)));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x37U 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1) 
                                                      << 3U));
    }
    if ((0x10U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0 
            = (1U & ((IData)(__PVT__arbiter___05Freqs) 
                     >> 1U));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x2fU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0) 
                                                      << 4U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1 
            = (1U & ((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                         >> 4U)) & ((IData)(__PVT__arbiter___05Freqs) 
                                    >> 1U)));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x2fU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1) 
                                                      << 4U));
    }
    if ((0x20U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0 
            = (1U & ((IData)(__PVT__arbiter___05Freqs) 
                     >> 2U));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x1fU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0) 
                                                      << 5U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1 
            = (IData)(((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                           >> 5U)) & ((IData)(__PVT__arbiter___05Freqs) 
                                      >> 2U)));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x1fU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1) 
                                                      << 5U));
    }
    arbiter__DOT____Vlvbound_ha81d0b6a__0 = (IData)(
                                                    (0U 
                                                     != 
                                                     (9U 
                                                      & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int))));
    vlSelf->__PVT__arbiter___05Fgrants = ((6U & (IData)(vlSelf->__PVT__arbiter___05Fgrants)) 
                                          | (IData)(arbiter__DOT____Vlvbound_ha81d0b6a__0));
    arbiter__DOT____Vlvbound_ha81d0b6a__0 = (IData)(
                                                    (0U 
                                                     != 
                                                     (0x12U 
                                                      & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int))));
    vlSelf->__PVT__arbiter___05Fgrants = ((5U & (IData)(vlSelf->__PVT__arbiter___05Fgrants)) 
                                          | ((IData)(arbiter__DOT____Vlvbound_ha81d0b6a__0) 
                                             << 1U));
    arbiter__DOT____Vlvbound_ha81d0b6a__0 = (IData)(
                                                    (0U 
                                                     != 
                                                     (0x24U 
                                                      & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int))));
    vlSelf->__PVT__arbiter___05Fgrants = ((3U & (IData)(vlSelf->__PVT__arbiter___05Fgrants)) 
                                          | ((IData)(arbiter__DOT____Vlvbound_ha81d0b6a__0) 
                                             << 2U));
    __Vtableidx26 = vlSelf->__PVT__arbiter___05Fgrants;
    vlSelf->__PVT__encoder___05Fout = Vcgra_test__ConstPool__TABLE_h7841efae_0
        [__Vtableidx26];
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [1U] & (0U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[0U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [1U] & (1U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[1U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [1U] & (2U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[2U] = __Vlvbound_h600d39cf__0;
    if ((2U >= (IData)(vlSelf->__PVT__encoder___05Fout))) {
        vlSelf->__PVT__send___05Fmsg[0U] = vlSelf->__PVT__mux___05Fin_
            [vlSelf->__PVT__encoder___05Fout][0U];
        vlSelf->__PVT__send___05Fmsg[1U] = vlSelf->__PVT__mux___05Fin_
            [vlSelf->__PVT__encoder___05Fout][1U];
        vlSelf->__PVT__send___05Fmsg[2U] = vlSelf->__PVT__mux___05Fin_
            [vlSelf->__PVT__encoder___05Fout][2U];
    } else {
        vlSelf->__PVT__send___05Fmsg[0U] = 0U;
        vlSelf->__PVT__send___05Fmsg[1U] = 0U;
        vlSelf->__PVT__send___05Fmsg[2U] = 0U;
    }
}

VL_INLINE_OPT void Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__1(Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__1\n"); );
    // Init
    CData/*0:0*/ __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = 0;
    // Body
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [2U] & (0U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[0U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [2U] & (1U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[1U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [2U] & (2U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[2U] = __Vlvbound_h600d39cf__0;
}

VL_INLINE_OPT void Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___nba_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__0(Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___nba_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__0\n"); );
    // Init
    CData/*2:0*/ __PVT__arbiter___05Freqs;
    __PVT__arbiter___05Freqs = 0;
    CData/*0:0*/ __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = 0;
    CData/*0:0*/ arbiter__DOT____Vlvbound_ha81d0b6a__0;
    arbiter__DOT____Vlvbound_ha81d0b6a__0 = 0;
    CData/*2:0*/ __Vtableidx27;
    __Vtableidx27 = 0;
    // Body
    vlSelf->__PVT__mux___05Fin_[0U][0U] = vlSelf->__PVT__recv___05Fmsg
        [0U][0U];
    vlSelf->__PVT__mux___05Fin_[0U][1U] = vlSelf->__PVT__recv___05Fmsg
        [0U][1U];
    vlSelf->__PVT__mux___05Fin_[0U][2U] = vlSelf->__PVT__recv___05Fmsg
        [0U][2U];
    vlSelf->__PVT__mux___05Fin_[1U][0U] = vlSelf->__PVT__recv___05Fmsg
        [1U][0U];
    vlSelf->__PVT__mux___05Fin_[1U][1U] = vlSelf->__PVT__recv___05Fmsg
        [1U][1U];
    vlSelf->__PVT__mux___05Fin_[1U][2U] = vlSelf->__PVT__recv___05Fmsg
        [1U][2U];
    vlSelf->__PVT__mux___05Fin_[2U][0U] = vlSelf->__PVT__recv___05Fmsg
        [2U][0U];
    vlSelf->__PVT__mux___05Fin_[2U][1U] = vlSelf->__PVT__recv___05Fmsg
        [2U][1U];
    vlSelf->__PVT__mux___05Fin_[2U][2U] = vlSelf->__PVT__recv___05Fmsg
        [2U][2U];
    __PVT__arbiter___05Freqs = ((vlSelf->__PVT__recv___05Fval
                                 [2U] << 2U) | ((vlSelf->__PVT__recv___05Fval
                                                 [1U] 
                                                 << 1U) 
                                                | vlSelf->__PVT__recv___05Fval
                                                [0U]));
    vlSelf->__PVT__arbiter__DOT__kills = (1U | (IData)(vlSelf->__PVT__arbiter__DOT__kills));
    if ((1U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0 
            = (1U & (IData)(__PVT__arbiter___05Freqs));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x7dU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0) 
                                                 << 1U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1 
            = (1U & ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                     | (IData)(__PVT__arbiter___05Freqs)));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x7dU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1) 
                                                 << 1U));
    }
    if ((2U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0 
            = (1U & ((IData)(__PVT__arbiter___05Freqs) 
                     >> 1U));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x7bU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0) 
                                                 << 2U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1 
            = (1U & (((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                      >> 1U) | ((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                                    >> 1U)) & ((IData)(__PVT__arbiter___05Freqs) 
                                               >> 1U))));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x7bU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1) 
                                                 << 2U));
    }
    if ((4U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0 
            = (1U & ((IData)(__PVT__arbiter___05Freqs) 
                     >> 2U));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x77U 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0) 
                                                 << 3U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1 
            = (1U & (((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                      >> 2U) | ((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                                    >> 2U)) & ((IData)(__PVT__arbiter___05Freqs) 
                                               >> 2U))));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x77U 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1) 
                                                 << 3U));
    }
    if ((8U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0 
            = (1U & (IData)(__PVT__arbiter___05Freqs));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x6fU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0) 
                                                 << 4U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1 
            = (1U & (((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                      >> 3U) | ((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                                    >> 3U)) & (IData)(__PVT__arbiter___05Freqs))));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x6fU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1) 
                                                 << 4U));
    }
    if ((0x10U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0 
            = (1U & ((IData)(__PVT__arbiter___05Freqs) 
                     >> 1U));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x5fU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0) 
                                                 << 5U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1 
            = (1U & (((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                      >> 4U) | ((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                                    >> 4U)) & ((IData)(__PVT__arbiter___05Freqs) 
                                               >> 1U))));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x5fU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1) 
                                                 << 5U));
    }
    if ((0x20U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0 
            = (1U & ((IData)(__PVT__arbiter___05Freqs) 
                     >> 2U));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x3fU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0) 
                                                 << 6U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1 
            = (1U & (((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                      >> 5U) | ((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                                    >> 5U)) & ((IData)(__PVT__arbiter___05Freqs) 
                                               >> 2U))));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x3fU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1) 
                                                 << 6U));
    }
    if ((1U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0 
            = (1U & (IData)(__PVT__arbiter___05Freqs));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x3eU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | (IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1 
            = (1U & ((~ (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                     & (IData)(__PVT__arbiter___05Freqs)));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x3eU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | (IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1));
    }
    if ((2U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0 
            = (1U & ((IData)(__PVT__arbiter___05Freqs) 
                     >> 1U));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x3dU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0) 
                                                      << 1U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1 
            = (1U & ((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                         >> 1U)) & ((IData)(__PVT__arbiter___05Freqs) 
                                    >> 1U)));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x3dU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1) 
                                                      << 1U));
    }
    if ((4U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0 
            = (1U & ((IData)(__PVT__arbiter___05Freqs) 
                     >> 2U));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x3bU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0) 
                                                      << 2U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1 
            = (IData)(((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                           >> 2U)) & ((IData)(__PVT__arbiter___05Freqs) 
                                      >> 2U)));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x3bU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1) 
                                                      << 2U));
    }
    if ((8U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0 
            = (1U & (IData)(__PVT__arbiter___05Freqs));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x37U 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0) 
                                                      << 3U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1 
            = (1U & ((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                         >> 3U)) & (IData)(__PVT__arbiter___05Freqs)));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x37U 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1) 
                                                      << 3U));
    }
    if ((0x10U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0 
            = (1U & ((IData)(__PVT__arbiter___05Freqs) 
                     >> 1U));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x2fU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0) 
                                                      << 4U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1 
            = (1U & ((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                         >> 4U)) & ((IData)(__PVT__arbiter___05Freqs) 
                                    >> 1U)));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x2fU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1) 
                                                      << 4U));
    }
    if ((0x20U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0 
            = (1U & ((IData)(__PVT__arbiter___05Freqs) 
                     >> 2U));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x1fU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0) 
                                                      << 5U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1 
            = (IData)(((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                           >> 5U)) & ((IData)(__PVT__arbiter___05Freqs) 
                                      >> 2U)));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x1fU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1) 
                                                      << 5U));
    }
    arbiter__DOT____Vlvbound_ha81d0b6a__0 = (IData)(
                                                    (0U 
                                                     != 
                                                     (9U 
                                                      & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int))));
    vlSelf->__PVT__arbiter___05Fgrants = ((6U & (IData)(vlSelf->__PVT__arbiter___05Fgrants)) 
                                          | (IData)(arbiter__DOT____Vlvbound_ha81d0b6a__0));
    arbiter__DOT____Vlvbound_ha81d0b6a__0 = (IData)(
                                                    (0U 
                                                     != 
                                                     (0x12U 
                                                      & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int))));
    vlSelf->__PVT__arbiter___05Fgrants = ((5U & (IData)(vlSelf->__PVT__arbiter___05Fgrants)) 
                                          | ((IData)(arbiter__DOT____Vlvbound_ha81d0b6a__0) 
                                             << 1U));
    arbiter__DOT____Vlvbound_ha81d0b6a__0 = (IData)(
                                                    (0U 
                                                     != 
                                                     (0x24U 
                                                      & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int))));
    vlSelf->__PVT__arbiter___05Fgrants = ((3U & (IData)(vlSelf->__PVT__arbiter___05Fgrants)) 
                                          | ((IData)(arbiter__DOT____Vlvbound_ha81d0b6a__0) 
                                             << 2U));
    __Vtableidx27 = vlSelf->__PVT__arbiter___05Fgrants;
    vlSelf->__PVT__encoder___05Fout = Vcgra_test__ConstPool__TABLE_h7841efae_0
        [__Vtableidx27];
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [2U] & (0U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[0U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [2U] & (1U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[1U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [2U] & (2U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[2U] = __Vlvbound_h600d39cf__0;
    if ((2U >= (IData)(vlSelf->__PVT__encoder___05Fout))) {
        vlSelf->__PVT__send___05Fmsg[0U] = vlSelf->__PVT__mux___05Fin_
            [vlSelf->__PVT__encoder___05Fout][0U];
        vlSelf->__PVT__send___05Fmsg[1U] = vlSelf->__PVT__mux___05Fin_
            [vlSelf->__PVT__encoder___05Fout][1U];
        vlSelf->__PVT__send___05Fmsg[2U] = vlSelf->__PVT__mux___05Fin_
            [vlSelf->__PVT__encoder___05Fout][2U];
    } else {
        vlSelf->__PVT__send___05Fmsg[0U] = 0U;
        vlSelf->__PVT__send___05Fmsg[1U] = 0U;
        vlSelf->__PVT__send___05Fmsg[2U] = 0U;
    }
}

VL_INLINE_OPT void Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__1(Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__1\n"); );
    // Init
    CData/*0:0*/ __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = 0;
    // Body
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [3U] & (0U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[0U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [3U] & (1U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[1U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [3U] & (2U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[2U] = __Vlvbound_h600d39cf__0;
}

VL_INLINE_OPT void Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___nba_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__0(Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___nba_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__0\n"); );
    // Init
    CData/*2:0*/ __PVT__arbiter___05Freqs;
    __PVT__arbiter___05Freqs = 0;
    CData/*0:0*/ __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = 0;
    CData/*0:0*/ arbiter__DOT____Vlvbound_ha81d0b6a__0;
    arbiter__DOT____Vlvbound_ha81d0b6a__0 = 0;
    CData/*2:0*/ __Vtableidx28;
    __Vtableidx28 = 0;
    // Body
    vlSelf->__PVT__mux___05Fin_[0U][0U] = vlSelf->__PVT__recv___05Fmsg
        [0U][0U];
    vlSelf->__PVT__mux___05Fin_[0U][1U] = vlSelf->__PVT__recv___05Fmsg
        [0U][1U];
    vlSelf->__PVT__mux___05Fin_[0U][2U] = vlSelf->__PVT__recv___05Fmsg
        [0U][2U];
    vlSelf->__PVT__mux___05Fin_[1U][0U] = vlSelf->__PVT__recv___05Fmsg
        [1U][0U];
    vlSelf->__PVT__mux___05Fin_[1U][1U] = vlSelf->__PVT__recv___05Fmsg
        [1U][1U];
    vlSelf->__PVT__mux___05Fin_[1U][2U] = vlSelf->__PVT__recv___05Fmsg
        [1U][2U];
    vlSelf->__PVT__mux___05Fin_[2U][0U] = vlSelf->__PVT__recv___05Fmsg
        [2U][0U];
    vlSelf->__PVT__mux___05Fin_[2U][1U] = vlSelf->__PVT__recv___05Fmsg
        [2U][1U];
    vlSelf->__PVT__mux___05Fin_[2U][2U] = vlSelf->__PVT__recv___05Fmsg
        [2U][2U];
    __PVT__arbiter___05Freqs = ((vlSelf->__PVT__recv___05Fval
                                 [2U] << 2U) | ((vlSelf->__PVT__recv___05Fval
                                                 [1U] 
                                                 << 1U) 
                                                | vlSelf->__PVT__recv___05Fval
                                                [0U]));
    vlSelf->__PVT__arbiter__DOT__kills = (1U | (IData)(vlSelf->__PVT__arbiter__DOT__kills));
    if ((1U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0 
            = (1U & (IData)(__PVT__arbiter___05Freqs));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x7dU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0) 
                                                 << 1U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1 
            = (1U & ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                     | (IData)(__PVT__arbiter___05Freqs)));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x7dU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1) 
                                                 << 1U));
    }
    if ((2U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0 
            = (1U & ((IData)(__PVT__arbiter___05Freqs) 
                     >> 1U));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x7bU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0) 
                                                 << 2U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1 
            = (1U & (((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                      >> 1U) | ((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                                    >> 1U)) & ((IData)(__PVT__arbiter___05Freqs) 
                                               >> 1U))));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x7bU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1) 
                                                 << 2U));
    }
    if ((4U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0 
            = (1U & ((IData)(__PVT__arbiter___05Freqs) 
                     >> 2U));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x77U 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0) 
                                                 << 3U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1 
            = (1U & (((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                      >> 2U) | ((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                                    >> 2U)) & ((IData)(__PVT__arbiter___05Freqs) 
                                               >> 2U))));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x77U 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1) 
                                                 << 3U));
    }
    if ((8U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0 
            = (1U & (IData)(__PVT__arbiter___05Freqs));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x6fU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0) 
                                                 << 4U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1 
            = (1U & (((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                      >> 3U) | ((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                                    >> 3U)) & (IData)(__PVT__arbiter___05Freqs))));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x6fU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1) 
                                                 << 4U));
    }
    if ((0x10U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0 
            = (1U & ((IData)(__PVT__arbiter___05Freqs) 
                     >> 1U));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x5fU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0) 
                                                 << 5U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1 
            = (1U & (((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                      >> 4U) | ((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                                    >> 4U)) & ((IData)(__PVT__arbiter___05Freqs) 
                                               >> 1U))));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x5fU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1) 
                                                 << 5U));
    }
    if ((0x20U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0 
            = (1U & ((IData)(__PVT__arbiter___05Freqs) 
                     >> 2U));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x3fU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0) 
                                                 << 6U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1 
            = (1U & (((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                      >> 5U) | ((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                                    >> 5U)) & ((IData)(__PVT__arbiter___05Freqs) 
                                               >> 2U))));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x3fU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1) 
                                                 << 6U));
    }
    if ((1U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0 
            = (1U & (IData)(__PVT__arbiter___05Freqs));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x3eU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | (IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1 
            = (1U & ((~ (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                     & (IData)(__PVT__arbiter___05Freqs)));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x3eU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | (IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1));
    }
    if ((2U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0 
            = (1U & ((IData)(__PVT__arbiter___05Freqs) 
                     >> 1U));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x3dU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0) 
                                                      << 1U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1 
            = (1U & ((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                         >> 1U)) & ((IData)(__PVT__arbiter___05Freqs) 
                                    >> 1U)));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x3dU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1) 
                                                      << 1U));
    }
    if ((4U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0 
            = (1U & ((IData)(__PVT__arbiter___05Freqs) 
                     >> 2U));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x3bU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0) 
                                                      << 2U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1 
            = (IData)(((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                           >> 2U)) & ((IData)(__PVT__arbiter___05Freqs) 
                                      >> 2U)));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x3bU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1) 
                                                      << 2U));
    }
    if ((8U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0 
            = (1U & (IData)(__PVT__arbiter___05Freqs));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x37U 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0) 
                                                      << 3U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1 
            = (1U & ((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                         >> 3U)) & (IData)(__PVT__arbiter___05Freqs)));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x37U 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1) 
                                                      << 3U));
    }
    if ((0x10U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0 
            = (1U & ((IData)(__PVT__arbiter___05Freqs) 
                     >> 1U));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x2fU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0) 
                                                      << 4U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1 
            = (1U & ((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                         >> 4U)) & ((IData)(__PVT__arbiter___05Freqs) 
                                    >> 1U)));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x2fU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1) 
                                                      << 4U));
    }
    if ((0x20U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0 
            = (1U & ((IData)(__PVT__arbiter___05Freqs) 
                     >> 2U));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x1fU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0) 
                                                      << 5U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1 
            = (IData)(((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                           >> 5U)) & ((IData)(__PVT__arbiter___05Freqs) 
                                      >> 2U)));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x1fU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1) 
                                                      << 5U));
    }
    arbiter__DOT____Vlvbound_ha81d0b6a__0 = (IData)(
                                                    (0U 
                                                     != 
                                                     (9U 
                                                      & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int))));
    vlSelf->__PVT__arbiter___05Fgrants = ((6U & (IData)(vlSelf->__PVT__arbiter___05Fgrants)) 
                                          | (IData)(arbiter__DOT____Vlvbound_ha81d0b6a__0));
    arbiter__DOT____Vlvbound_ha81d0b6a__0 = (IData)(
                                                    (0U 
                                                     != 
                                                     (0x12U 
                                                      & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int))));
    vlSelf->__PVT__arbiter___05Fgrants = ((5U & (IData)(vlSelf->__PVT__arbiter___05Fgrants)) 
                                          | ((IData)(arbiter__DOT____Vlvbound_ha81d0b6a__0) 
                                             << 1U));
    arbiter__DOT____Vlvbound_ha81d0b6a__0 = (IData)(
                                                    (0U 
                                                     != 
                                                     (0x24U 
                                                      & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int))));
    vlSelf->__PVT__arbiter___05Fgrants = ((3U & (IData)(vlSelf->__PVT__arbiter___05Fgrants)) 
                                          | ((IData)(arbiter__DOT____Vlvbound_ha81d0b6a__0) 
                                             << 2U));
    __Vtableidx28 = vlSelf->__PVT__arbiter___05Fgrants;
    vlSelf->__PVT__encoder___05Fout = Vcgra_test__ConstPool__TABLE_h7841efae_0
        [__Vtableidx28];
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [3U] & (0U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[0U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [3U] & (1U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[1U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [3U] & (2U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[2U] = __Vlvbound_h600d39cf__0;
    if ((2U >= (IData)(vlSelf->__PVT__encoder___05Fout))) {
        vlSelf->__PVT__send___05Fmsg[0U] = vlSelf->__PVT__mux___05Fin_
            [vlSelf->__PVT__encoder___05Fout][0U];
        vlSelf->__PVT__send___05Fmsg[1U] = vlSelf->__PVT__mux___05Fin_
            [vlSelf->__PVT__encoder___05Fout][1U];
        vlSelf->__PVT__send___05Fmsg[2U] = vlSelf->__PVT__mux___05Fin_
            [vlSelf->__PVT__encoder___05Fout][2U];
    } else {
        vlSelf->__PVT__send___05Fmsg[0U] = 0U;
        vlSelf->__PVT__send___05Fmsg[1U] = 0U;
        vlSelf->__PVT__send___05Fmsg[2U] = 0U;
    }
}

VL_INLINE_OPT void Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__data_mem__DOT__response_crossbar__DOT__switch_units___05F4__1(Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__data_mem__DOT__response_crossbar__DOT__switch_units___05F4__1\n"); );
    // Init
    CData/*0:0*/ __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = 0;
    // Body
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [4U] & (0U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[0U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [4U] & (1U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[1U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [4U] & (2U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[2U] = __Vlvbound_h600d39cf__0;
}

VL_INLINE_OPT void Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___nba_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__data_mem__DOT__response_crossbar__DOT__switch_units___05F4__0(Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___nba_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__data_mem__DOT__response_crossbar__DOT__switch_units___05F4__0\n"); );
    // Init
    CData/*2:0*/ __PVT__arbiter___05Freqs;
    __PVT__arbiter___05Freqs = 0;
    CData/*0:0*/ __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = 0;
    CData/*0:0*/ arbiter__DOT____Vlvbound_ha81d0b6a__0;
    arbiter__DOT____Vlvbound_ha81d0b6a__0 = 0;
    CData/*2:0*/ __Vtableidx29;
    __Vtableidx29 = 0;
    // Body
    vlSelf->__PVT__mux___05Fin_[0U][0U] = vlSelf->__PVT__recv___05Fmsg
        [0U][0U];
    vlSelf->__PVT__mux___05Fin_[0U][1U] = vlSelf->__PVT__recv___05Fmsg
        [0U][1U];
    vlSelf->__PVT__mux___05Fin_[0U][2U] = vlSelf->__PVT__recv___05Fmsg
        [0U][2U];
    vlSelf->__PVT__mux___05Fin_[1U][0U] = vlSelf->__PVT__recv___05Fmsg
        [1U][0U];
    vlSelf->__PVT__mux___05Fin_[1U][1U] = vlSelf->__PVT__recv___05Fmsg
        [1U][1U];
    vlSelf->__PVT__mux___05Fin_[1U][2U] = vlSelf->__PVT__recv___05Fmsg
        [1U][2U];
    vlSelf->__PVT__mux___05Fin_[2U][0U] = vlSelf->__PVT__recv___05Fmsg
        [2U][0U];
    vlSelf->__PVT__mux___05Fin_[2U][1U] = vlSelf->__PVT__recv___05Fmsg
        [2U][1U];
    vlSelf->__PVT__mux___05Fin_[2U][2U] = vlSelf->__PVT__recv___05Fmsg
        [2U][2U];
    __PVT__arbiter___05Freqs = ((vlSelf->__PVT__recv___05Fval
                                 [2U] << 2U) | ((vlSelf->__PVT__recv___05Fval
                                                 [1U] 
                                                 << 1U) 
                                                | vlSelf->__PVT__recv___05Fval
                                                [0U]));
    vlSelf->__PVT__arbiter__DOT__kills = (1U | (IData)(vlSelf->__PVT__arbiter__DOT__kills));
    if ((1U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0 
            = (1U & (IData)(__PVT__arbiter___05Freqs));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x7dU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0) 
                                                 << 1U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1 
            = (1U & ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                     | (IData)(__PVT__arbiter___05Freqs)));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x7dU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1) 
                                                 << 1U));
    }
    if ((2U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0 
            = (1U & ((IData)(__PVT__arbiter___05Freqs) 
                     >> 1U));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x7bU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0) 
                                                 << 2U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1 
            = (1U & (((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                      >> 1U) | ((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                                    >> 1U)) & ((IData)(__PVT__arbiter___05Freqs) 
                                               >> 1U))));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x7bU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1) 
                                                 << 2U));
    }
    if ((4U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0 
            = (1U & ((IData)(__PVT__arbiter___05Freqs) 
                     >> 2U));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x77U 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0) 
                                                 << 3U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1 
            = (1U & (((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                      >> 2U) | ((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                                    >> 2U)) & ((IData)(__PVT__arbiter___05Freqs) 
                                               >> 2U))));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x77U 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1) 
                                                 << 3U));
    }
    if ((8U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0 
            = (1U & (IData)(__PVT__arbiter___05Freqs));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x6fU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0) 
                                                 << 4U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1 
            = (1U & (((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                      >> 3U) | ((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                                    >> 3U)) & (IData)(__PVT__arbiter___05Freqs))));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x6fU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1) 
                                                 << 4U));
    }
    if ((0x10U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0 
            = (1U & ((IData)(__PVT__arbiter___05Freqs) 
                     >> 1U));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x5fU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0) 
                                                 << 5U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1 
            = (1U & (((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                      >> 4U) | ((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                                    >> 4U)) & ((IData)(__PVT__arbiter___05Freqs) 
                                               >> 1U))));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x5fU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1) 
                                                 << 5U));
    }
    if ((0x20U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0 
            = (1U & ((IData)(__PVT__arbiter___05Freqs) 
                     >> 2U));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x3fU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0) 
                                                 << 6U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1 
            = (1U & (((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                      >> 5U) | ((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                                    >> 5U)) & ((IData)(__PVT__arbiter___05Freqs) 
                                               >> 2U))));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x3fU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1) 
                                                 << 6U));
    }
    if ((1U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0 
            = (1U & (IData)(__PVT__arbiter___05Freqs));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x3eU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | (IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1 
            = (1U & ((~ (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                     & (IData)(__PVT__arbiter___05Freqs)));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x3eU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | (IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1));
    }
    if ((2U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0 
            = (1U & ((IData)(__PVT__arbiter___05Freqs) 
                     >> 1U));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x3dU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0) 
                                                      << 1U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1 
            = (1U & ((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                         >> 1U)) & ((IData)(__PVT__arbiter___05Freqs) 
                                    >> 1U)));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x3dU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1) 
                                                      << 1U));
    }
    if ((4U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0 
            = (1U & ((IData)(__PVT__arbiter___05Freqs) 
                     >> 2U));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x3bU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0) 
                                                      << 2U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1 
            = (IData)(((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                           >> 2U)) & ((IData)(__PVT__arbiter___05Freqs) 
                                      >> 2U)));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x3bU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1) 
                                                      << 2U));
    }
    if ((8U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0 
            = (1U & (IData)(__PVT__arbiter___05Freqs));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x37U 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0) 
                                                      << 3U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1 
            = (1U & ((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                         >> 3U)) & (IData)(__PVT__arbiter___05Freqs)));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x37U 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1) 
                                                      << 3U));
    }
    if ((0x10U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0 
            = (1U & ((IData)(__PVT__arbiter___05Freqs) 
                     >> 1U));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x2fU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0) 
                                                      << 4U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1 
            = (1U & ((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                         >> 4U)) & ((IData)(__PVT__arbiter___05Freqs) 
                                    >> 1U)));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x2fU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1) 
                                                      << 4U));
    }
    if ((0x20U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0 
            = (1U & ((IData)(__PVT__arbiter___05Freqs) 
                     >> 2U));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x1fU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0) 
                                                      << 5U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1 
            = (IData)(((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                           >> 5U)) & ((IData)(__PVT__arbiter___05Freqs) 
                                      >> 2U)));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x1fU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1) 
                                                      << 5U));
    }
    arbiter__DOT____Vlvbound_ha81d0b6a__0 = (IData)(
                                                    (0U 
                                                     != 
                                                     (9U 
                                                      & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int))));
    vlSelf->__PVT__arbiter___05Fgrants = ((6U & (IData)(vlSelf->__PVT__arbiter___05Fgrants)) 
                                          | (IData)(arbiter__DOT____Vlvbound_ha81d0b6a__0));
    arbiter__DOT____Vlvbound_ha81d0b6a__0 = (IData)(
                                                    (0U 
                                                     != 
                                                     (0x12U 
                                                      & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int))));
    vlSelf->__PVT__arbiter___05Fgrants = ((5U & (IData)(vlSelf->__PVT__arbiter___05Fgrants)) 
                                          | ((IData)(arbiter__DOT____Vlvbound_ha81d0b6a__0) 
                                             << 1U));
    arbiter__DOT____Vlvbound_ha81d0b6a__0 = (IData)(
                                                    (0U 
                                                     != 
                                                     (0x24U 
                                                      & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int))));
    vlSelf->__PVT__arbiter___05Fgrants = ((3U & (IData)(vlSelf->__PVT__arbiter___05Fgrants)) 
                                          | ((IData)(arbiter__DOT____Vlvbound_ha81d0b6a__0) 
                                             << 2U));
    __Vtableidx29 = vlSelf->__PVT__arbiter___05Fgrants;
    vlSelf->__PVT__encoder___05Fout = Vcgra_test__ConstPool__TABLE_h7841efae_0
        [__Vtableidx29];
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [4U] & (0U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[0U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [4U] & (1U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[1U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [4U] & (2U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[2U] = __Vlvbound_h600d39cf__0;
    if ((2U >= (IData)(vlSelf->__PVT__encoder___05Fout))) {
        vlSelf->__PVT__send___05Fmsg[0U] = vlSelf->__PVT__mux___05Fin_
            [vlSelf->__PVT__encoder___05Fout][0U];
        vlSelf->__PVT__send___05Fmsg[1U] = vlSelf->__PVT__mux___05Fin_
            [vlSelf->__PVT__encoder___05Fout][1U];
        vlSelf->__PVT__send___05Fmsg[2U] = vlSelf->__PVT__mux___05Fin_
            [vlSelf->__PVT__encoder___05Fout][2U];
    } else {
        vlSelf->__PVT__send___05Fmsg[0U] = 0U;
        vlSelf->__PVT__send___05Fmsg[1U] = 0U;
        vlSelf->__PVT__send___05Fmsg[2U] = 0U;
    }
}

VL_INLINE_OPT void Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__data_mem__DOT__response_crossbar__DOT__switch_units___05F5__1(Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__data_mem__DOT__response_crossbar__DOT__switch_units___05F5__1\n"); );
    // Init
    CData/*0:0*/ __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = 0;
    // Body
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [5U] & (0U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[0U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [5U] & (1U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[1U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [5U] & (2U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[2U] = __Vlvbound_h600d39cf__0;
}

VL_INLINE_OPT void Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___nba_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__data_mem__DOT__response_crossbar__DOT__switch_units___05F5__0(Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___nba_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__data_mem__DOT__response_crossbar__DOT__switch_units___05F5__0\n"); );
    // Init
    CData/*2:0*/ __PVT__arbiter___05Freqs;
    __PVT__arbiter___05Freqs = 0;
    CData/*0:0*/ __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = 0;
    CData/*0:0*/ arbiter__DOT____Vlvbound_ha81d0b6a__0;
    arbiter__DOT____Vlvbound_ha81d0b6a__0 = 0;
    CData/*2:0*/ __Vtableidx30;
    __Vtableidx30 = 0;
    // Body
    vlSelf->__PVT__mux___05Fin_[0U][0U] = vlSelf->__PVT__recv___05Fmsg
        [0U][0U];
    vlSelf->__PVT__mux___05Fin_[0U][1U] = vlSelf->__PVT__recv___05Fmsg
        [0U][1U];
    vlSelf->__PVT__mux___05Fin_[0U][2U] = vlSelf->__PVT__recv___05Fmsg
        [0U][2U];
    vlSelf->__PVT__mux___05Fin_[1U][0U] = vlSelf->__PVT__recv___05Fmsg
        [1U][0U];
    vlSelf->__PVT__mux___05Fin_[1U][1U] = vlSelf->__PVT__recv___05Fmsg
        [1U][1U];
    vlSelf->__PVT__mux___05Fin_[1U][2U] = vlSelf->__PVT__recv___05Fmsg
        [1U][2U];
    vlSelf->__PVT__mux___05Fin_[2U][0U] = vlSelf->__PVT__recv___05Fmsg
        [2U][0U];
    vlSelf->__PVT__mux___05Fin_[2U][1U] = vlSelf->__PVT__recv___05Fmsg
        [2U][1U];
    vlSelf->__PVT__mux___05Fin_[2U][2U] = vlSelf->__PVT__recv___05Fmsg
        [2U][2U];
    __PVT__arbiter___05Freqs = ((vlSelf->__PVT__recv___05Fval
                                 [2U] << 2U) | ((vlSelf->__PVT__recv___05Fval
                                                 [1U] 
                                                 << 1U) 
                                                | vlSelf->__PVT__recv___05Fval
                                                [0U]));
    vlSelf->__PVT__arbiter__DOT__kills = (1U | (IData)(vlSelf->__PVT__arbiter__DOT__kills));
    if ((1U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0 
            = (1U & (IData)(__PVT__arbiter___05Freqs));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x7dU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0) 
                                                 << 1U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1 
            = (1U & ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                     | (IData)(__PVT__arbiter___05Freqs)));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x7dU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1) 
                                                 << 1U));
    }
    if ((2U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0 
            = (1U & ((IData)(__PVT__arbiter___05Freqs) 
                     >> 1U));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x7bU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0) 
                                                 << 2U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1 
            = (1U & (((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                      >> 1U) | ((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                                    >> 1U)) & ((IData)(__PVT__arbiter___05Freqs) 
                                               >> 1U))));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x7bU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1) 
                                                 << 2U));
    }
    if ((4U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0 
            = (1U & ((IData)(__PVT__arbiter___05Freqs) 
                     >> 2U));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x77U 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0) 
                                                 << 3U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1 
            = (1U & (((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                      >> 2U) | ((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                                    >> 2U)) & ((IData)(__PVT__arbiter___05Freqs) 
                                               >> 2U))));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x77U 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1) 
                                                 << 3U));
    }
    if ((8U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0 
            = (1U & (IData)(__PVT__arbiter___05Freqs));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x6fU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0) 
                                                 << 4U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1 
            = (1U & (((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                      >> 3U) | ((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                                    >> 3U)) & (IData)(__PVT__arbiter___05Freqs))));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x6fU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1) 
                                                 << 4U));
    }
    if ((0x10U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0 
            = (1U & ((IData)(__PVT__arbiter___05Freqs) 
                     >> 1U));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x5fU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0) 
                                                 << 5U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1 
            = (1U & (((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                      >> 4U) | ((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                                    >> 4U)) & ((IData)(__PVT__arbiter___05Freqs) 
                                               >> 1U))));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x5fU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1) 
                                                 << 5U));
    }
    if ((0x20U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0 
            = (1U & ((IData)(__PVT__arbiter___05Freqs) 
                     >> 2U));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x3fU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0) 
                                                 << 6U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1 
            = (1U & (((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                      >> 5U) | ((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                                    >> 5U)) & ((IData)(__PVT__arbiter___05Freqs) 
                                               >> 2U))));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x3fU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1) 
                                                 << 6U));
    }
    if ((1U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0 
            = (1U & (IData)(__PVT__arbiter___05Freqs));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x3eU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | (IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1 
            = (1U & ((~ (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                     & (IData)(__PVT__arbiter___05Freqs)));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x3eU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | (IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1));
    }
    if ((2U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0 
            = (1U & ((IData)(__PVT__arbiter___05Freqs) 
                     >> 1U));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x3dU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0) 
                                                      << 1U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1 
            = (1U & ((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                         >> 1U)) & ((IData)(__PVT__arbiter___05Freqs) 
                                    >> 1U)));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x3dU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1) 
                                                      << 1U));
    }
    if ((4U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0 
            = (1U & ((IData)(__PVT__arbiter___05Freqs) 
                     >> 2U));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x3bU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0) 
                                                      << 2U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1 
            = (IData)(((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                           >> 2U)) & ((IData)(__PVT__arbiter___05Freqs) 
                                      >> 2U)));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x3bU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1) 
                                                      << 2U));
    }
    if ((8U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0 
            = (1U & (IData)(__PVT__arbiter___05Freqs));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x37U 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0) 
                                                      << 3U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1 
            = (1U & ((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                         >> 3U)) & (IData)(__PVT__arbiter___05Freqs)));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x37U 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1) 
                                                      << 3U));
    }
    if ((0x10U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0 
            = (1U & ((IData)(__PVT__arbiter___05Freqs) 
                     >> 1U));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x2fU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0) 
                                                      << 4U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1 
            = (1U & ((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                         >> 4U)) & ((IData)(__PVT__arbiter___05Freqs) 
                                    >> 1U)));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x2fU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1) 
                                                      << 4U));
    }
    if ((0x20U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0 
            = (1U & ((IData)(__PVT__arbiter___05Freqs) 
                     >> 2U));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x1fU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0) 
                                                      << 5U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1 
            = (IData)(((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                           >> 5U)) & ((IData)(__PVT__arbiter___05Freqs) 
                                      >> 2U)));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x1fU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1) 
                                                      << 5U));
    }
    arbiter__DOT____Vlvbound_ha81d0b6a__0 = (IData)(
                                                    (0U 
                                                     != 
                                                     (9U 
                                                      & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int))));
    vlSelf->__PVT__arbiter___05Fgrants = ((6U & (IData)(vlSelf->__PVT__arbiter___05Fgrants)) 
                                          | (IData)(arbiter__DOT____Vlvbound_ha81d0b6a__0));
    arbiter__DOT____Vlvbound_ha81d0b6a__0 = (IData)(
                                                    (0U 
                                                     != 
                                                     (0x12U 
                                                      & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int))));
    vlSelf->__PVT__arbiter___05Fgrants = ((5U & (IData)(vlSelf->__PVT__arbiter___05Fgrants)) 
                                          | ((IData)(arbiter__DOT____Vlvbound_ha81d0b6a__0) 
                                             << 1U));
    arbiter__DOT____Vlvbound_ha81d0b6a__0 = (IData)(
                                                    (0U 
                                                     != 
                                                     (0x24U 
                                                      & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int))));
    vlSelf->__PVT__arbiter___05Fgrants = ((3U & (IData)(vlSelf->__PVT__arbiter___05Fgrants)) 
                                          | ((IData)(arbiter__DOT____Vlvbound_ha81d0b6a__0) 
                                             << 2U));
    __Vtableidx30 = vlSelf->__PVT__arbiter___05Fgrants;
    vlSelf->__PVT__encoder___05Fout = Vcgra_test__ConstPool__TABLE_h7841efae_0
        [__Vtableidx30];
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [5U] & (0U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[0U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [5U] & (1U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[1U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [5U] & (2U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[2U] = __Vlvbound_h600d39cf__0;
    if ((2U >= (IData)(vlSelf->__PVT__encoder___05Fout))) {
        vlSelf->__PVT__send___05Fmsg[0U] = vlSelf->__PVT__mux___05Fin_
            [vlSelf->__PVT__encoder___05Fout][0U];
        vlSelf->__PVT__send___05Fmsg[1U] = vlSelf->__PVT__mux___05Fin_
            [vlSelf->__PVT__encoder___05Fout][1U];
        vlSelf->__PVT__send___05Fmsg[2U] = vlSelf->__PVT__mux___05Fin_
            [vlSelf->__PVT__encoder___05Fout][2U];
    } else {
        vlSelf->__PVT__send___05Fmsg[0U] = 0U;
        vlSelf->__PVT__send___05Fmsg[1U] = 0U;
        vlSelf->__PVT__send___05Fmsg[2U] = 0U;
    }
}

VL_INLINE_OPT void Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__data_mem__DOT__response_crossbar__DOT__switch_units___05F6__1(Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__data_mem__DOT__response_crossbar__DOT__switch_units___05F6__1\n"); );
    // Init
    CData/*0:0*/ __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = 0;
    // Body
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [6U] & (0U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[0U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [6U] & (1U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[1U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [6U] & (2U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[2U] = __Vlvbound_h600d39cf__0;
}

VL_INLINE_OPT void Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___nba_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__data_mem__DOT__response_crossbar__DOT__switch_units___05F6__0(Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___nba_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__data_mem__DOT__response_crossbar__DOT__switch_units___05F6__0\n"); );
    // Init
    CData/*2:0*/ __PVT__arbiter___05Freqs;
    __PVT__arbiter___05Freqs = 0;
    CData/*0:0*/ __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = 0;
    CData/*0:0*/ arbiter__DOT____Vlvbound_ha81d0b6a__0;
    arbiter__DOT____Vlvbound_ha81d0b6a__0 = 0;
    CData/*2:0*/ __Vtableidx31;
    __Vtableidx31 = 0;
    // Body
    vlSelf->__PVT__mux___05Fin_[0U][0U] = vlSelf->__PVT__recv___05Fmsg
        [0U][0U];
    vlSelf->__PVT__mux___05Fin_[0U][1U] = vlSelf->__PVT__recv___05Fmsg
        [0U][1U];
    vlSelf->__PVT__mux___05Fin_[0U][2U] = vlSelf->__PVT__recv___05Fmsg
        [0U][2U];
    vlSelf->__PVT__mux___05Fin_[1U][0U] = vlSelf->__PVT__recv___05Fmsg
        [1U][0U];
    vlSelf->__PVT__mux___05Fin_[1U][1U] = vlSelf->__PVT__recv___05Fmsg
        [1U][1U];
    vlSelf->__PVT__mux___05Fin_[1U][2U] = vlSelf->__PVT__recv___05Fmsg
        [1U][2U];
    vlSelf->__PVT__mux___05Fin_[2U][0U] = vlSelf->__PVT__recv___05Fmsg
        [2U][0U];
    vlSelf->__PVT__mux___05Fin_[2U][1U] = vlSelf->__PVT__recv___05Fmsg
        [2U][1U];
    vlSelf->__PVT__mux___05Fin_[2U][2U] = vlSelf->__PVT__recv___05Fmsg
        [2U][2U];
    __PVT__arbiter___05Freqs = ((vlSelf->__PVT__recv___05Fval
                                 [2U] << 2U) | ((vlSelf->__PVT__recv___05Fval
                                                 [1U] 
                                                 << 1U) 
                                                | vlSelf->__PVT__recv___05Fval
                                                [0U]));
    vlSelf->__PVT__arbiter__DOT__kills = (1U | (IData)(vlSelf->__PVT__arbiter__DOT__kills));
    if ((1U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0 
            = (1U & (IData)(__PVT__arbiter___05Freqs));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x7dU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0) 
                                                 << 1U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1 
            = (1U & ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                     | (IData)(__PVT__arbiter___05Freqs)));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x7dU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1) 
                                                 << 1U));
    }
    if ((2U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0 
            = (1U & ((IData)(__PVT__arbiter___05Freqs) 
                     >> 1U));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x7bU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0) 
                                                 << 2U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1 
            = (1U & (((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                      >> 1U) | ((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                                    >> 1U)) & ((IData)(__PVT__arbiter___05Freqs) 
                                               >> 1U))));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x7bU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1) 
                                                 << 2U));
    }
    if ((4U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0 
            = (1U & ((IData)(__PVT__arbiter___05Freqs) 
                     >> 2U));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x77U 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0) 
                                                 << 3U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1 
            = (1U & (((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                      >> 2U) | ((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                                    >> 2U)) & ((IData)(__PVT__arbiter___05Freqs) 
                                               >> 2U))));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x77U 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1) 
                                                 << 3U));
    }
    if ((8U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0 
            = (1U & (IData)(__PVT__arbiter___05Freqs));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x6fU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0) 
                                                 << 4U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1 
            = (1U & (((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                      >> 3U) | ((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                                    >> 3U)) & (IData)(__PVT__arbiter___05Freqs))));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x6fU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1) 
                                                 << 4U));
    }
    if ((0x10U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0 
            = (1U & ((IData)(__PVT__arbiter___05Freqs) 
                     >> 1U));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x5fU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0) 
                                                 << 5U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1 
            = (1U & (((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                      >> 4U) | ((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                                    >> 4U)) & ((IData)(__PVT__arbiter___05Freqs) 
                                               >> 1U))));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x5fU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1) 
                                                 << 5U));
    }
    if ((0x20U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0 
            = (1U & ((IData)(__PVT__arbiter___05Freqs) 
                     >> 2U));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x3fU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0) 
                                                 << 6U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1 
            = (1U & (((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                      >> 5U) | ((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                                    >> 5U)) & ((IData)(__PVT__arbiter___05Freqs) 
                                               >> 2U))));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x3fU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1) 
                                                 << 6U));
    }
    if ((1U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0 
            = (1U & (IData)(__PVT__arbiter___05Freqs));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x3eU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | (IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1 
            = (1U & ((~ (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                     & (IData)(__PVT__arbiter___05Freqs)));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x3eU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | (IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1));
    }
    if ((2U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0 
            = (1U & ((IData)(__PVT__arbiter___05Freqs) 
                     >> 1U));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x3dU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0) 
                                                      << 1U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1 
            = (1U & ((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                         >> 1U)) & ((IData)(__PVT__arbiter___05Freqs) 
                                    >> 1U)));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x3dU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1) 
                                                      << 1U));
    }
    if ((4U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0 
            = (1U & ((IData)(__PVT__arbiter___05Freqs) 
                     >> 2U));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x3bU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0) 
                                                      << 2U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1 
            = (IData)(((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                           >> 2U)) & ((IData)(__PVT__arbiter___05Freqs) 
                                      >> 2U)));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x3bU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1) 
                                                      << 2U));
    }
    if ((8U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0 
            = (1U & (IData)(__PVT__arbiter___05Freqs));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x37U 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0) 
                                                      << 3U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1 
            = (1U & ((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                         >> 3U)) & (IData)(__PVT__arbiter___05Freqs)));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x37U 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1) 
                                                      << 3U));
    }
    if ((0x10U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0 
            = (1U & ((IData)(__PVT__arbiter___05Freqs) 
                     >> 1U));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x2fU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0) 
                                                      << 4U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1 
            = (1U & ((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                         >> 4U)) & ((IData)(__PVT__arbiter___05Freqs) 
                                    >> 1U)));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x2fU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1) 
                                                      << 4U));
    }
    if ((0x20U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0 
            = (1U & ((IData)(__PVT__arbiter___05Freqs) 
                     >> 2U));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x1fU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0) 
                                                      << 5U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1 
            = (IData)(((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                           >> 5U)) & ((IData)(__PVT__arbiter___05Freqs) 
                                      >> 2U)));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x1fU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1) 
                                                      << 5U));
    }
    arbiter__DOT____Vlvbound_ha81d0b6a__0 = (IData)(
                                                    (0U 
                                                     != 
                                                     (9U 
                                                      & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int))));
    vlSelf->__PVT__arbiter___05Fgrants = ((6U & (IData)(vlSelf->__PVT__arbiter___05Fgrants)) 
                                          | (IData)(arbiter__DOT____Vlvbound_ha81d0b6a__0));
    arbiter__DOT____Vlvbound_ha81d0b6a__0 = (IData)(
                                                    (0U 
                                                     != 
                                                     (0x12U 
                                                      & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int))));
    vlSelf->__PVT__arbiter___05Fgrants = ((5U & (IData)(vlSelf->__PVT__arbiter___05Fgrants)) 
                                          | ((IData)(arbiter__DOT____Vlvbound_ha81d0b6a__0) 
                                             << 1U));
    arbiter__DOT____Vlvbound_ha81d0b6a__0 = (IData)(
                                                    (0U 
                                                     != 
                                                     (0x24U 
                                                      & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int))));
    vlSelf->__PVT__arbiter___05Fgrants = ((3U & (IData)(vlSelf->__PVT__arbiter___05Fgrants)) 
                                          | ((IData)(arbiter__DOT____Vlvbound_ha81d0b6a__0) 
                                             << 2U));
    __Vtableidx31 = vlSelf->__PVT__arbiter___05Fgrants;
    vlSelf->__PVT__encoder___05Fout = Vcgra_test__ConstPool__TABLE_h7841efae_0
        [__Vtableidx31];
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [6U] & (0U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[0U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [6U] & (1U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[1U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [6U] & (2U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[2U] = __Vlvbound_h600d39cf__0;
    if ((2U >= (IData)(vlSelf->__PVT__encoder___05Fout))) {
        vlSelf->__PVT__send___05Fmsg[0U] = vlSelf->__PVT__mux___05Fin_
            [vlSelf->__PVT__encoder___05Fout][0U];
        vlSelf->__PVT__send___05Fmsg[1U] = vlSelf->__PVT__mux___05Fin_
            [vlSelf->__PVT__encoder___05Fout][1U];
        vlSelf->__PVT__send___05Fmsg[2U] = vlSelf->__PVT__mux___05Fin_
            [vlSelf->__PVT__encoder___05Fout][2U];
    } else {
        vlSelf->__PVT__send___05Fmsg[0U] = 0U;
        vlSelf->__PVT__send___05Fmsg[1U] = 0U;
        vlSelf->__PVT__send___05Fmsg[2U] = 0U;
    }
}

VL_INLINE_OPT void Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__data_mem__DOT__response_crossbar__DOT__switch_units___05F7__1(Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__data_mem__DOT__response_crossbar__DOT__switch_units___05F7__1\n"); );
    // Init
    CData/*0:0*/ __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = 0;
    // Body
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [7U] & (0U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[0U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [7U] & (1U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[1U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [7U] & (2U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[2U] = __Vlvbound_h600d39cf__0;
}

VL_INLINE_OPT void Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___nba_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__data_mem__DOT__response_crossbar__DOT__switch_units___05F7__0(Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___nba_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__data_mem__DOT__response_crossbar__DOT__switch_units___05F7__0\n"); );
    // Init
    CData/*2:0*/ __PVT__arbiter___05Freqs;
    __PVT__arbiter___05Freqs = 0;
    CData/*0:0*/ __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = 0;
    CData/*0:0*/ arbiter__DOT____Vlvbound_ha81d0b6a__0;
    arbiter__DOT____Vlvbound_ha81d0b6a__0 = 0;
    CData/*2:0*/ __Vtableidx32;
    __Vtableidx32 = 0;
    // Body
    vlSelf->__PVT__mux___05Fin_[0U][0U] = vlSelf->__PVT__recv___05Fmsg
        [0U][0U];
    vlSelf->__PVT__mux___05Fin_[0U][1U] = vlSelf->__PVT__recv___05Fmsg
        [0U][1U];
    vlSelf->__PVT__mux___05Fin_[0U][2U] = vlSelf->__PVT__recv___05Fmsg
        [0U][2U];
    vlSelf->__PVT__mux___05Fin_[1U][0U] = vlSelf->__PVT__recv___05Fmsg
        [1U][0U];
    vlSelf->__PVT__mux___05Fin_[1U][1U] = vlSelf->__PVT__recv___05Fmsg
        [1U][1U];
    vlSelf->__PVT__mux___05Fin_[1U][2U] = vlSelf->__PVT__recv___05Fmsg
        [1U][2U];
    vlSelf->__PVT__mux___05Fin_[2U][0U] = vlSelf->__PVT__recv___05Fmsg
        [2U][0U];
    vlSelf->__PVT__mux___05Fin_[2U][1U] = vlSelf->__PVT__recv___05Fmsg
        [2U][1U];
    vlSelf->__PVT__mux___05Fin_[2U][2U] = vlSelf->__PVT__recv___05Fmsg
        [2U][2U];
    __PVT__arbiter___05Freqs = ((vlSelf->__PVT__recv___05Fval
                                 [2U] << 2U) | ((vlSelf->__PVT__recv___05Fval
                                                 [1U] 
                                                 << 1U) 
                                                | vlSelf->__PVT__recv___05Fval
                                                [0U]));
    vlSelf->__PVT__arbiter__DOT__kills = (1U | (IData)(vlSelf->__PVT__arbiter__DOT__kills));
    if ((1U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0 
            = (1U & (IData)(__PVT__arbiter___05Freqs));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x7dU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0) 
                                                 << 1U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1 
            = (1U & ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                     | (IData)(__PVT__arbiter___05Freqs)));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x7dU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1) 
                                                 << 1U));
    }
    if ((2U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0 
            = (1U & ((IData)(__PVT__arbiter___05Freqs) 
                     >> 1U));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x7bU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0) 
                                                 << 2U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1 
            = (1U & (((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                      >> 1U) | ((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                                    >> 1U)) & ((IData)(__PVT__arbiter___05Freqs) 
                                               >> 1U))));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x7bU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1) 
                                                 << 2U));
    }
    if ((4U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0 
            = (1U & ((IData)(__PVT__arbiter___05Freqs) 
                     >> 2U));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x77U 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0) 
                                                 << 3U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1 
            = (1U & (((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                      >> 2U) | ((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                                    >> 2U)) & ((IData)(__PVT__arbiter___05Freqs) 
                                               >> 2U))));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x77U 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1) 
                                                 << 3U));
    }
    if ((8U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0 
            = (1U & (IData)(__PVT__arbiter___05Freqs));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x6fU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0) 
                                                 << 4U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1 
            = (1U & (((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                      >> 3U) | ((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                                    >> 3U)) & (IData)(__PVT__arbiter___05Freqs))));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x6fU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1) 
                                                 << 4U));
    }
    if ((0x10U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0 
            = (1U & ((IData)(__PVT__arbiter___05Freqs) 
                     >> 1U));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x5fU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0) 
                                                 << 5U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1 
            = (1U & (((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                      >> 4U) | ((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                                    >> 4U)) & ((IData)(__PVT__arbiter___05Freqs) 
                                               >> 1U))));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x5fU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1) 
                                                 << 5U));
    }
    if ((0x20U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0 
            = (1U & ((IData)(__PVT__arbiter___05Freqs) 
                     >> 2U));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x3fU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__0) 
                                                 << 6U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1 
            = (1U & (((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                      >> 5U) | ((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                                    >> 5U)) & ((IData)(__PVT__arbiter___05Freqs) 
                                               >> 2U))));
        vlSelf->__PVT__arbiter__DOT__kills = ((0x3fU 
                                               & (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                                              | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hb84c9caf__1) 
                                                 << 6U));
    }
    if ((1U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0 
            = (1U & (IData)(__PVT__arbiter___05Freqs));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x3eU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | (IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1 
            = (1U & ((~ (IData)(vlSelf->__PVT__arbiter__DOT__kills)) 
                     & (IData)(__PVT__arbiter___05Freqs)));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x3eU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | (IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1));
    }
    if ((2U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0 
            = (1U & ((IData)(__PVT__arbiter___05Freqs) 
                     >> 1U));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x3dU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0) 
                                                      << 1U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1 
            = (1U & ((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                         >> 1U)) & ((IData)(__PVT__arbiter___05Freqs) 
                                    >> 1U)));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x3dU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1) 
                                                      << 1U));
    }
    if ((4U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0 
            = (1U & ((IData)(__PVT__arbiter___05Freqs) 
                     >> 2U));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x3bU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0) 
                                                      << 2U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1 
            = (IData)(((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                           >> 2U)) & ((IData)(__PVT__arbiter___05Freqs) 
                                      >> 2U)));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x3bU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1) 
                                                      << 2U));
    }
    if ((8U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0 
            = (1U & (IData)(__PVT__arbiter___05Freqs));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x37U 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0) 
                                                      << 3U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1 
            = (1U & ((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                         >> 3U)) & (IData)(__PVT__arbiter___05Freqs)));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x37U 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1) 
                                                      << 3U));
    }
    if ((0x10U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0 
            = (1U & ((IData)(__PVT__arbiter___05Freqs) 
                     >> 1U));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x2fU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0) 
                                                      << 4U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1 
            = (1U & ((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                         >> 4U)) & ((IData)(__PVT__arbiter___05Freqs) 
                                    >> 1U)));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x2fU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1) 
                                                      << 4U));
    }
    if ((0x20U & (IData)(vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout))) {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0 
            = (1U & ((IData)(__PVT__arbiter___05Freqs) 
                     >> 2U));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x1fU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__0) 
                                                      << 5U));
    } else {
        vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1 
            = (IData)(((~ ((IData)(vlSelf->__PVT__arbiter__DOT__kills) 
                           >> 5U)) & ((IData)(__PVT__arbiter___05Freqs) 
                                      >> 2U)));
        vlSelf->__PVT__arbiter__DOT__grants_int = (
                                                   (0x1fU 
                                                    & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int)) 
                                                   | ((IData)(vlSelf->arbiter__DOT____Vlvbound_hed2759a5__1) 
                                                      << 5U));
    }
    arbiter__DOT____Vlvbound_ha81d0b6a__0 = (IData)(
                                                    (0U 
                                                     != 
                                                     (9U 
                                                      & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int))));
    vlSelf->__PVT__arbiter___05Fgrants = ((6U & (IData)(vlSelf->__PVT__arbiter___05Fgrants)) 
                                          | (IData)(arbiter__DOT____Vlvbound_ha81d0b6a__0));
    arbiter__DOT____Vlvbound_ha81d0b6a__0 = (IData)(
                                                    (0U 
                                                     != 
                                                     (0x12U 
                                                      & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int))));
    vlSelf->__PVT__arbiter___05Fgrants = ((5U & (IData)(vlSelf->__PVT__arbiter___05Fgrants)) 
                                          | ((IData)(arbiter__DOT____Vlvbound_ha81d0b6a__0) 
                                             << 1U));
    arbiter__DOT____Vlvbound_ha81d0b6a__0 = (IData)(
                                                    (0U 
                                                     != 
                                                     (0x24U 
                                                      & (IData)(vlSelf->__PVT__arbiter__DOT__grants_int))));
    vlSelf->__PVT__arbiter___05Fgrants = ((3U & (IData)(vlSelf->__PVT__arbiter___05Fgrants)) 
                                          | ((IData)(arbiter__DOT____Vlvbound_ha81d0b6a__0) 
                                             << 2U));
    __Vtableidx32 = vlSelf->__PVT__arbiter___05Fgrants;
    vlSelf->__PVT__encoder___05Fout = Vcgra_test__ConstPool__TABLE_h7841efae_0
        [__Vtableidx32];
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [7U] & (0U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[0U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [7U] & (1U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[1U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [7U] & (2U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[2U] = __Vlvbound_h600d39cf__0;
    if ((2U >= (IData)(vlSelf->__PVT__encoder___05Fout))) {
        vlSelf->__PVT__send___05Fmsg[0U] = vlSelf->__PVT__mux___05Fin_
            [vlSelf->__PVT__encoder___05Fout][0U];
        vlSelf->__PVT__send___05Fmsg[1U] = vlSelf->__PVT__mux___05Fin_
            [vlSelf->__PVT__encoder___05Fout][1U];
        vlSelf->__PVT__send___05Fmsg[2U] = vlSelf->__PVT__mux___05Fin_
            [vlSelf->__PVT__encoder___05Fout][2U];
    } else {
        vlSelf->__PVT__send___05Fmsg[0U] = 0U;
        vlSelf->__PVT__send___05Fmsg[1U] = 0U;
        vlSelf->__PVT__send___05Fmsg[2U] = 0U;
    }
}
