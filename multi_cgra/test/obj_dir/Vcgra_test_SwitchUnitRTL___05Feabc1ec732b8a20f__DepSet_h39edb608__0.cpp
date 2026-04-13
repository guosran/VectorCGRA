// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcgra_test.h for the primary calling header

#include "Vcgra_test__pch.h"
#include "Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f.h"
#include "Vcgra_test__Syms.h"

VL_INLINE_OPT void Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__1(Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__1\n"); );
    // Init
    CData/*0:0*/ __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = 0;
    // Body
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [0U] & (0U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[0U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [0U] & (1U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[1U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [0U] & (2U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[2U] = __Vlvbound_h600d39cf__0;
}

VL_INLINE_OPT void Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__0(Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__0\n"); );
    // Body
    if (vlSymsp->TOP.cgra_test__DOT__reset) {
        vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout = 1U;
    } else if ((0U != (IData)(vlSelf->__PVT__arbiter___05Fgrants))) {
        vlSelf->__PVT__arbiter__DOT__priority_reg___05Fout 
            = ((6U & ((IData)(vlSelf->__PVT__arbiter___05Fgrants) 
                      << 1U)) | (1U & ((IData)(vlSelf->__PVT__arbiter___05Fgrants) 
                                       >> 2U)));
    }
}

extern const VlUnpacked<CData/*1:0*/, 8> Vcgra_test__ConstPool__TABLE_h7841efae_0;

VL_INLINE_OPT void Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___nba_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__0(Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___nba_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__0\n"); );
    // Init
    CData/*2:0*/ __PVT__arbiter___05Freqs;
    __PVT__arbiter___05Freqs = 0;
    CData/*0:0*/ __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = 0;
    CData/*0:0*/ arbiter__DOT____Vlvbound_ha81d0b6a__0;
    arbiter__DOT____Vlvbound_ha81d0b6a__0 = 0;
    CData/*2:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
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
    __Vtableidx1 = vlSelf->__PVT__arbiter___05Fgrants;
    vlSelf->__PVT__encoder___05Fout = Vcgra_test__ConstPool__TABLE_h7841efae_0
        [__Vtableidx1];
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [0U] & (0U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[0U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [0U] & (1U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[1U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
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

VL_INLINE_OPT void Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__1(Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__1\n"); );
    // Init
    CData/*0:0*/ __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = 0;
    // Body
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [1U] & (0U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[0U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [1U] & (1U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[1U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [1U] & (2U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[2U] = __Vlvbound_h600d39cf__0;
}

VL_INLINE_OPT void Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___nba_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__0(Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___nba_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__0\n"); );
    // Init
    CData/*2:0*/ __PVT__arbiter___05Freqs;
    __PVT__arbiter___05Freqs = 0;
    CData/*0:0*/ __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = 0;
    CData/*0:0*/ arbiter__DOT____Vlvbound_ha81d0b6a__0;
    arbiter__DOT____Vlvbound_ha81d0b6a__0 = 0;
    CData/*2:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
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
    __Vtableidx2 = vlSelf->__PVT__arbiter___05Fgrants;
    vlSelf->__PVT__encoder___05Fout = Vcgra_test__ConstPool__TABLE_h7841efae_0
        [__Vtableidx2];
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [1U] & (0U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[0U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [1U] & (1U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[1U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
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

VL_INLINE_OPT void Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__1(Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__1\n"); );
    // Init
    CData/*0:0*/ __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = 0;
    // Body
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [2U] & (0U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[0U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [2U] & (1U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[1U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [2U] & (2U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[2U] = __Vlvbound_h600d39cf__0;
}

VL_INLINE_OPT void Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___nba_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__0(Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___nba_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__0\n"); );
    // Init
    CData/*2:0*/ __PVT__arbiter___05Freqs;
    __PVT__arbiter___05Freqs = 0;
    CData/*0:0*/ __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = 0;
    CData/*0:0*/ arbiter__DOT____Vlvbound_ha81d0b6a__0;
    arbiter__DOT____Vlvbound_ha81d0b6a__0 = 0;
    CData/*2:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
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
    __Vtableidx3 = vlSelf->__PVT__arbiter___05Fgrants;
    vlSelf->__PVT__encoder___05Fout = Vcgra_test__ConstPool__TABLE_h7841efae_0
        [__Vtableidx3];
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [2U] & (0U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[0U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [2U] & (1U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[1U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
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

VL_INLINE_OPT void Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__1(Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__1\n"); );
    // Init
    CData/*0:0*/ __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = 0;
    // Body
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [3U] & (0U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[0U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [3U] & (1U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[1U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [3U] & (2U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[2U] = __Vlvbound_h600d39cf__0;
}

VL_INLINE_OPT void Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___nba_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__0(Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___nba_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__0\n"); );
    // Init
    CData/*2:0*/ __PVT__arbiter___05Freqs;
    __PVT__arbiter___05Freqs = 0;
    CData/*0:0*/ __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = 0;
    CData/*0:0*/ arbiter__DOT____Vlvbound_ha81d0b6a__0;
    arbiter__DOT____Vlvbound_ha81d0b6a__0 = 0;
    CData/*2:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
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
    __Vtableidx4 = vlSelf->__PVT__arbiter___05Fgrants;
    vlSelf->__PVT__encoder___05Fout = Vcgra_test__ConstPool__TABLE_h7841efae_0
        [__Vtableidx4];
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [3U] & (0U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[0U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [3U] & (1U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[1U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
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

VL_INLINE_OPT void Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__data_mem__DOT__response_crossbar__DOT__switch_units___05F4__1(Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__data_mem__DOT__response_crossbar__DOT__switch_units___05F4__1\n"); );
    // Init
    CData/*0:0*/ __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = 0;
    // Body
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [4U] & (0U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[0U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [4U] & (1U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[1U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [4U] & (2U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[2U] = __Vlvbound_h600d39cf__0;
}

VL_INLINE_OPT void Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___nba_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__data_mem__DOT__response_crossbar__DOT__switch_units___05F4__0(Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___nba_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__data_mem__DOT__response_crossbar__DOT__switch_units___05F4__0\n"); );
    // Init
    CData/*2:0*/ __PVT__arbiter___05Freqs;
    __PVT__arbiter___05Freqs = 0;
    CData/*0:0*/ __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = 0;
    CData/*0:0*/ arbiter__DOT____Vlvbound_ha81d0b6a__0;
    arbiter__DOT____Vlvbound_ha81d0b6a__0 = 0;
    CData/*2:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
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
    __Vtableidx5 = vlSelf->__PVT__arbiter___05Fgrants;
    vlSelf->__PVT__encoder___05Fout = Vcgra_test__ConstPool__TABLE_h7841efae_0
        [__Vtableidx5];
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [4U] & (0U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[0U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [4U] & (1U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[1U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
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

VL_INLINE_OPT void Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__data_mem__DOT__response_crossbar__DOT__switch_units___05F5__1(Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__data_mem__DOT__response_crossbar__DOT__switch_units___05F5__1\n"); );
    // Init
    CData/*0:0*/ __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = 0;
    // Body
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [5U] & (0U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[0U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [5U] & (1U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[1U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [5U] & (2U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[2U] = __Vlvbound_h600d39cf__0;
}

VL_INLINE_OPT void Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___nba_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__data_mem__DOT__response_crossbar__DOT__switch_units___05F5__0(Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___nba_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__data_mem__DOT__response_crossbar__DOT__switch_units___05F5__0\n"); );
    // Init
    CData/*2:0*/ __PVT__arbiter___05Freqs;
    __PVT__arbiter___05Freqs = 0;
    CData/*0:0*/ __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = 0;
    CData/*0:0*/ arbiter__DOT____Vlvbound_ha81d0b6a__0;
    arbiter__DOT____Vlvbound_ha81d0b6a__0 = 0;
    CData/*2:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
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
    __Vtableidx6 = vlSelf->__PVT__arbiter___05Fgrants;
    vlSelf->__PVT__encoder___05Fout = Vcgra_test__ConstPool__TABLE_h7841efae_0
        [__Vtableidx6];
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [5U] & (0U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[0U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [5U] & (1U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[1U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
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

VL_INLINE_OPT void Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__data_mem__DOT__response_crossbar__DOT__switch_units___05F6__1(Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__data_mem__DOT__response_crossbar__DOT__switch_units___05F6__1\n"); );
    // Init
    CData/*0:0*/ __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = 0;
    // Body
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [6U] & (0U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[0U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [6U] & (1U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[1U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [6U] & (2U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[2U] = __Vlvbound_h600d39cf__0;
}

VL_INLINE_OPT void Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___nba_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__data_mem__DOT__response_crossbar__DOT__switch_units___05F6__0(Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___nba_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__data_mem__DOT__response_crossbar__DOT__switch_units___05F6__0\n"); );
    // Init
    CData/*2:0*/ __PVT__arbiter___05Freqs;
    __PVT__arbiter___05Freqs = 0;
    CData/*0:0*/ __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = 0;
    CData/*0:0*/ arbiter__DOT____Vlvbound_ha81d0b6a__0;
    arbiter__DOT____Vlvbound_ha81d0b6a__0 = 0;
    CData/*2:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
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
    __Vtableidx7 = vlSelf->__PVT__arbiter___05Fgrants;
    vlSelf->__PVT__encoder___05Fout = Vcgra_test__ConstPool__TABLE_h7841efae_0
        [__Vtableidx7];
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [6U] & (0U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[0U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [6U] & (1U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[1U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
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

VL_INLINE_OPT void Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__data_mem__DOT__response_crossbar__DOT__switch_units___05F7__1(Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__data_mem__DOT__response_crossbar__DOT__switch_units___05F7__1\n"); );
    // Init
    CData/*0:0*/ __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = 0;
    // Body
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [7U] & (0U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[0U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [7U] & (1U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[1U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [7U] & (2U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[2U] = __Vlvbound_h600d39cf__0;
}

VL_INLINE_OPT void Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___nba_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__data_mem__DOT__response_crossbar__DOT__switch_units___05F7__0(Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___nba_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__data_mem__DOT__response_crossbar__DOT__switch_units___05F7__0\n"); );
    // Init
    CData/*2:0*/ __PVT__arbiter___05Freqs;
    __PVT__arbiter___05Freqs = 0;
    CData/*0:0*/ __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = 0;
    CData/*0:0*/ arbiter__DOT____Vlvbound_ha81d0b6a__0;
    arbiter__DOT____Vlvbound_ha81d0b6a__0 = 0;
    CData/*2:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
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
    __Vtableidx8 = vlSelf->__PVT__arbiter___05Fgrants;
    vlSelf->__PVT__encoder___05Fout = Vcgra_test__ConstPool__TABLE_h7841efae_0
        [__Vtableidx8];
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [7U] & (0U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[0U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [7U] & (1U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[1U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
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

VL_INLINE_OPT void Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__1(Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__1\n"); );
    // Init
    CData/*0:0*/ __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = 0;
    // Body
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [0U] & (0U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[0U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [0U] & (1U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[1U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [0U] & (2U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[2U] = __Vlvbound_h600d39cf__0;
}

VL_INLINE_OPT void Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___nba_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__0(Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___nba_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__0\n"); );
    // Init
    CData/*2:0*/ __PVT__arbiter___05Freqs;
    __PVT__arbiter___05Freqs = 0;
    CData/*0:0*/ __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = 0;
    CData/*0:0*/ arbiter__DOT____Vlvbound_ha81d0b6a__0;
    arbiter__DOT____Vlvbound_ha81d0b6a__0 = 0;
    CData/*2:0*/ __Vtableidx9;
    __Vtableidx9 = 0;
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
    __Vtableidx9 = vlSelf->__PVT__arbiter___05Fgrants;
    vlSelf->__PVT__encoder___05Fout = Vcgra_test__ConstPool__TABLE_h7841efae_0
        [__Vtableidx9];
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [0U] & (0U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[0U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [0U] & (1U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[1U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
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

VL_INLINE_OPT void Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__1(Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__1\n"); );
    // Init
    CData/*0:0*/ __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = 0;
    // Body
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [1U] & (0U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[0U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [1U] & (1U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[1U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [1U] & (2U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[2U] = __Vlvbound_h600d39cf__0;
}

VL_INLINE_OPT void Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___nba_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__0(Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___nba_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__0\n"); );
    // Init
    CData/*2:0*/ __PVT__arbiter___05Freqs;
    __PVT__arbiter___05Freqs = 0;
    CData/*0:0*/ __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = 0;
    CData/*0:0*/ arbiter__DOT____Vlvbound_ha81d0b6a__0;
    arbiter__DOT____Vlvbound_ha81d0b6a__0 = 0;
    CData/*2:0*/ __Vtableidx10;
    __Vtableidx10 = 0;
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
    __Vtableidx10 = vlSelf->__PVT__arbiter___05Fgrants;
    vlSelf->__PVT__encoder___05Fout = Vcgra_test__ConstPool__TABLE_h7841efae_0
        [__Vtableidx10];
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [1U] & (0U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[0U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [1U] & (1U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[1U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
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

VL_INLINE_OPT void Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__1(Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__1\n"); );
    // Init
    CData/*0:0*/ __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = 0;
    // Body
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [2U] & (0U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[0U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [2U] & (1U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[1U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [2U] & (2U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[2U] = __Vlvbound_h600d39cf__0;
}

VL_INLINE_OPT void Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___nba_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__0(Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___nba_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__0\n"); );
    // Init
    CData/*2:0*/ __PVT__arbiter___05Freqs;
    __PVT__arbiter___05Freqs = 0;
    CData/*0:0*/ __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = 0;
    CData/*0:0*/ arbiter__DOT____Vlvbound_ha81d0b6a__0;
    arbiter__DOT____Vlvbound_ha81d0b6a__0 = 0;
    CData/*2:0*/ __Vtableidx11;
    __Vtableidx11 = 0;
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
    __Vtableidx11 = vlSelf->__PVT__arbiter___05Fgrants;
    vlSelf->__PVT__encoder___05Fout = Vcgra_test__ConstPool__TABLE_h7841efae_0
        [__Vtableidx11];
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [2U] & (0U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[0U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [2U] & (1U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[1U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
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

VL_INLINE_OPT void Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__1(Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__1\n"); );
    // Init
    CData/*0:0*/ __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = 0;
    // Body
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [3U] & (0U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[0U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [3U] & (1U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[1U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [3U] & (2U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[2U] = __Vlvbound_h600d39cf__0;
}

VL_INLINE_OPT void Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___nba_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__0(Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___nba_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__0\n"); );
    // Init
    CData/*2:0*/ __PVT__arbiter___05Freqs;
    __PVT__arbiter___05Freqs = 0;
    CData/*0:0*/ __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = 0;
    CData/*0:0*/ arbiter__DOT____Vlvbound_ha81d0b6a__0;
    arbiter__DOT____Vlvbound_ha81d0b6a__0 = 0;
    CData/*2:0*/ __Vtableidx12;
    __Vtableidx12 = 0;
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
    __Vtableidx12 = vlSelf->__PVT__arbiter___05Fgrants;
    vlSelf->__PVT__encoder___05Fout = Vcgra_test__ConstPool__TABLE_h7841efae_0
        [__Vtableidx12];
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [3U] & (0U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[0U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [3U] & (1U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[1U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
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

VL_INLINE_OPT void Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__data_mem__DOT__response_crossbar__DOT__switch_units___05F4__1(Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__data_mem__DOT__response_crossbar__DOT__switch_units___05F4__1\n"); );
    // Init
    CData/*0:0*/ __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = 0;
    // Body
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [4U] & (0U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[0U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [4U] & (1U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[1U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [4U] & (2U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[2U] = __Vlvbound_h600d39cf__0;
}

VL_INLINE_OPT void Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___nba_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__data_mem__DOT__response_crossbar__DOT__switch_units___05F4__0(Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___nba_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__data_mem__DOT__response_crossbar__DOT__switch_units___05F4__0\n"); );
    // Init
    CData/*2:0*/ __PVT__arbiter___05Freqs;
    __PVT__arbiter___05Freqs = 0;
    CData/*0:0*/ __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = 0;
    CData/*0:0*/ arbiter__DOT____Vlvbound_ha81d0b6a__0;
    arbiter__DOT____Vlvbound_ha81d0b6a__0 = 0;
    CData/*2:0*/ __Vtableidx13;
    __Vtableidx13 = 0;
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
    __Vtableidx13 = vlSelf->__PVT__arbiter___05Fgrants;
    vlSelf->__PVT__encoder___05Fout = Vcgra_test__ConstPool__TABLE_h7841efae_0
        [__Vtableidx13];
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [4U] & (0U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[0U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [4U] & (1U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[1U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
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

VL_INLINE_OPT void Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__data_mem__DOT__response_crossbar__DOT__switch_units___05F5__1(Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__data_mem__DOT__response_crossbar__DOT__switch_units___05F5__1\n"); );
    // Init
    CData/*0:0*/ __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = 0;
    // Body
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [5U] & (0U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[0U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [5U] & (1U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[1U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [5U] & (2U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[2U] = __Vlvbound_h600d39cf__0;
}

VL_INLINE_OPT void Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___nba_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__data_mem__DOT__response_crossbar__DOT__switch_units___05F5__0(Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___nba_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__data_mem__DOT__response_crossbar__DOT__switch_units___05F5__0\n"); );
    // Init
    CData/*2:0*/ __PVT__arbiter___05Freqs;
    __PVT__arbiter___05Freqs = 0;
    CData/*0:0*/ __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = 0;
    CData/*0:0*/ arbiter__DOT____Vlvbound_ha81d0b6a__0;
    arbiter__DOT____Vlvbound_ha81d0b6a__0 = 0;
    CData/*2:0*/ __Vtableidx14;
    __Vtableidx14 = 0;
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
    __Vtableidx14 = vlSelf->__PVT__arbiter___05Fgrants;
    vlSelf->__PVT__encoder___05Fout = Vcgra_test__ConstPool__TABLE_h7841efae_0
        [__Vtableidx14];
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [5U] & (0U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[0U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [5U] & (1U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[1U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
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

VL_INLINE_OPT void Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__data_mem__DOT__response_crossbar__DOT__switch_units___05F6__1(Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__data_mem__DOT__response_crossbar__DOT__switch_units___05F6__1\n"); );
    // Init
    CData/*0:0*/ __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = 0;
    // Body
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [6U] & (0U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[0U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [6U] & (1U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[1U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [6U] & (2U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[2U] = __Vlvbound_h600d39cf__0;
}

VL_INLINE_OPT void Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___nba_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__data_mem__DOT__response_crossbar__DOT__switch_units___05F6__0(Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___nba_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__data_mem__DOT__response_crossbar__DOT__switch_units___05F6__0\n"); );
    // Init
    CData/*2:0*/ __PVT__arbiter___05Freqs;
    __PVT__arbiter___05Freqs = 0;
    CData/*0:0*/ __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = 0;
    CData/*0:0*/ arbiter__DOT____Vlvbound_ha81d0b6a__0;
    arbiter__DOT____Vlvbound_ha81d0b6a__0 = 0;
    CData/*2:0*/ __Vtableidx15;
    __Vtableidx15 = 0;
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
    __Vtableidx15 = vlSelf->__PVT__arbiter___05Fgrants;
    vlSelf->__PVT__encoder___05Fout = Vcgra_test__ConstPool__TABLE_h7841efae_0
        [__Vtableidx15];
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [6U] & (0U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[0U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [6U] & (1U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[1U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
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

VL_INLINE_OPT void Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__data_mem__DOT__response_crossbar__DOT__switch_units___05F7__1(Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__data_mem__DOT__response_crossbar__DOT__switch_units___05F7__1\n"); );
    // Init
    CData/*0:0*/ __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = 0;
    // Body
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [7U] & (0U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[0U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [7U] & (1U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[1U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [7U] & (2U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[2U] = __Vlvbound_h600d39cf__0;
}

VL_INLINE_OPT void Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___nba_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__data_mem__DOT__response_crossbar__DOT__switch_units___05F7__0(Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___nba_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__data_mem__DOT__response_crossbar__DOT__switch_units___05F7__0\n"); );
    // Init
    CData/*2:0*/ __PVT__arbiter___05Freqs;
    __PVT__arbiter___05Freqs = 0;
    CData/*0:0*/ __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = 0;
    CData/*0:0*/ arbiter__DOT____Vlvbound_ha81d0b6a__0;
    arbiter__DOT____Vlvbound_ha81d0b6a__0 = 0;
    CData/*2:0*/ __Vtableidx16;
    __Vtableidx16 = 0;
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
    __Vtableidx16 = vlSelf->__PVT__arbiter___05Fgrants;
    vlSelf->__PVT__encoder___05Fout = Vcgra_test__ConstPool__TABLE_h7841efae_0
        [__Vtableidx16];
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [7U] & (0U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[0U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [7U] & (1U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[1U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
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

VL_INLINE_OPT void Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__1(Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__1\n"); );
    // Init
    CData/*0:0*/ __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = 0;
    // Body
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [0U] & (0U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[0U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [0U] & (1U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[1U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [0U] & (2U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[2U] = __Vlvbound_h600d39cf__0;
}

VL_INLINE_OPT void Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___nba_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__0(Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___nba_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__0\n"); );
    // Init
    CData/*2:0*/ __PVT__arbiter___05Freqs;
    __PVT__arbiter___05Freqs = 0;
    CData/*0:0*/ __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = 0;
    CData/*0:0*/ arbiter__DOT____Vlvbound_ha81d0b6a__0;
    arbiter__DOT____Vlvbound_ha81d0b6a__0 = 0;
    CData/*2:0*/ __Vtableidx17;
    __Vtableidx17 = 0;
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
    __Vtableidx17 = vlSelf->__PVT__arbiter___05Fgrants;
    vlSelf->__PVT__encoder___05Fout = Vcgra_test__ConstPool__TABLE_h7841efae_0
        [__Vtableidx17];
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [0U] & (0U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[0U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [0U] & (1U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[1U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
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

VL_INLINE_OPT void Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__1(Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__1\n"); );
    // Init
    CData/*0:0*/ __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = 0;
    // Body
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [1U] & (0U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[0U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [1U] & (1U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[1U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [1U] & (2U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[2U] = __Vlvbound_h600d39cf__0;
}

VL_INLINE_OPT void Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___nba_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__0(Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___nba_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__0\n"); );
    // Init
    CData/*2:0*/ __PVT__arbiter___05Freqs;
    __PVT__arbiter___05Freqs = 0;
    CData/*0:0*/ __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = 0;
    CData/*0:0*/ arbiter__DOT____Vlvbound_ha81d0b6a__0;
    arbiter__DOT____Vlvbound_ha81d0b6a__0 = 0;
    CData/*2:0*/ __Vtableidx18;
    __Vtableidx18 = 0;
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
    __Vtableidx18 = vlSelf->__PVT__arbiter___05Fgrants;
    vlSelf->__PVT__encoder___05Fout = Vcgra_test__ConstPool__TABLE_h7841efae_0
        [__Vtableidx18];
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [1U] & (0U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[0U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [1U] & (1U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[1U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
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

VL_INLINE_OPT void Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__1(Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__1\n"); );
    // Init
    CData/*0:0*/ __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = 0;
    // Body
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [2U] & (0U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[0U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [2U] & (1U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[1U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [2U] & (2U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[2U] = __Vlvbound_h600d39cf__0;
}

VL_INLINE_OPT void Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___nba_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__0(Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___nba_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__0\n"); );
    // Init
    CData/*2:0*/ __PVT__arbiter___05Freqs;
    __PVT__arbiter___05Freqs = 0;
    CData/*0:0*/ __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = 0;
    CData/*0:0*/ arbiter__DOT____Vlvbound_ha81d0b6a__0;
    arbiter__DOT____Vlvbound_ha81d0b6a__0 = 0;
    CData/*2:0*/ __Vtableidx19;
    __Vtableidx19 = 0;
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
    __Vtableidx19 = vlSelf->__PVT__arbiter___05Fgrants;
    vlSelf->__PVT__encoder___05Fout = Vcgra_test__ConstPool__TABLE_h7841efae_0
        [__Vtableidx19];
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [2U] & (0U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[0U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [2U] & (1U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[1U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
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

VL_INLINE_OPT void Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__1(Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__1\n"); );
    // Init
    CData/*0:0*/ __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = 0;
    // Body
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [3U] & (0U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[0U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [3U] & (1U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[1U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [3U] & (2U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[2U] = __Vlvbound_h600d39cf__0;
}

VL_INLINE_OPT void Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___nba_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__0(Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___nba_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__0\n"); );
    // Init
    CData/*2:0*/ __PVT__arbiter___05Freqs;
    __PVT__arbiter___05Freqs = 0;
    CData/*0:0*/ __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = 0;
    CData/*0:0*/ arbiter__DOT____Vlvbound_ha81d0b6a__0;
    arbiter__DOT____Vlvbound_ha81d0b6a__0 = 0;
    CData/*2:0*/ __Vtableidx20;
    __Vtableidx20 = 0;
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
    __Vtableidx20 = vlSelf->__PVT__arbiter___05Fgrants;
    vlSelf->__PVT__encoder___05Fout = Vcgra_test__ConstPool__TABLE_h7841efae_0
        [__Vtableidx20];
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [3U] & (0U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[0U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [3U] & (1U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[1U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
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

VL_INLINE_OPT void Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__data_mem__DOT__response_crossbar__DOT__switch_units___05F4__1(Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__data_mem__DOT__response_crossbar__DOT__switch_units___05F4__1\n"); );
    // Init
    CData/*0:0*/ __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = 0;
    // Body
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [4U] & (0U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[0U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [4U] & (1U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[1U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [4U] & (2U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[2U] = __Vlvbound_h600d39cf__0;
}

VL_INLINE_OPT void Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___nba_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__data_mem__DOT__response_crossbar__DOT__switch_units___05F4__0(Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___nba_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__data_mem__DOT__response_crossbar__DOT__switch_units___05F4__0\n"); );
    // Init
    CData/*2:0*/ __PVT__arbiter___05Freqs;
    __PVT__arbiter___05Freqs = 0;
    CData/*0:0*/ __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = 0;
    CData/*0:0*/ arbiter__DOT____Vlvbound_ha81d0b6a__0;
    arbiter__DOT____Vlvbound_ha81d0b6a__0 = 0;
    CData/*2:0*/ __Vtableidx21;
    __Vtableidx21 = 0;
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
    __Vtableidx21 = vlSelf->__PVT__arbiter___05Fgrants;
    vlSelf->__PVT__encoder___05Fout = Vcgra_test__ConstPool__TABLE_h7841efae_0
        [__Vtableidx21];
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [4U] & (0U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[0U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [4U] & (1U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[1U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
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

VL_INLINE_OPT void Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__data_mem__DOT__response_crossbar__DOT__switch_units___05F5__1(Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___act_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__data_mem__DOT__response_crossbar__DOT__switch_units___05F5__1\n"); );
    // Init
    CData/*0:0*/ __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = 0;
    // Body
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [5U] & (0U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[0U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [5U] & (1U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[1U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [5U] & (2U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[2U] = __Vlvbound_h600d39cf__0;
}

VL_INLINE_OPT void Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___nba_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__data_mem__DOT__response_crossbar__DOT__switch_units___05F5__0(Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcgra_test_SwitchUnitRTL___05Feabc1ec732b8a20f___nba_comb__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__data_mem__DOT__response_crossbar__DOT__switch_units___05F5__0\n"); );
    // Init
    CData/*2:0*/ __PVT__arbiter___05Freqs;
    __PVT__arbiter___05Freqs = 0;
    CData/*0:0*/ __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = 0;
    CData/*0:0*/ arbiter__DOT____Vlvbound_ha81d0b6a__0;
    arbiter__DOT____Vlvbound_ha81d0b6a__0 = 0;
    CData/*2:0*/ __Vtableidx22;
    __Vtableidx22 = 0;
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
    __Vtableidx22 = vlSelf->__PVT__arbiter___05Fgrants;
    vlSelf->__PVT__encoder___05Fout = Vcgra_test__ConstPool__TABLE_h7841efae_0
        [__Vtableidx22];
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [5U] & (0U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[0U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
                               [5U] & (1U == (IData)(vlSelf->__PVT__encoder___05Fout)));
    vlSelf->__PVT__recv___05Frdy[1U] = __Vlvbound_h600d39cf__0;
    __Vlvbound_h600d39cf__0 = (vlSymsp->TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2.__PVT__data_mem__DOT__response_crossbar___05Fsend___05Frdy
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
