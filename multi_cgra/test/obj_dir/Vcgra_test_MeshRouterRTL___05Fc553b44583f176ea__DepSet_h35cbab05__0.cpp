// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcgra_test.h for the primary calling header

#include "Vcgra_test__pch.h"
#include "Vcgra_test_MeshRouterRTL___05Fc553b44583f176ea.h"

VL_INLINE_OPT void Vcgra_test_MeshRouterRTL___05Fc553b44583f176ea___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__routers___05F0__1(Vcgra_test_MeshRouterRTL___05Fc553b44583f176ea* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcgra_test_MeshRouterRTL___05Fc553b44583f176ea___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__routers___05F0__1\n"); );
    // Body
    vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl___05Fwen 
        = (vlSelf->recv___05Fval[0U] & (2U > (IData)(vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl___05Fcount)));
    vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl___05Fwen 
        = (vlSelf->recv___05Fval[1U] & (2U > (IData)(vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl___05Fcount)));
    vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl___05Fwen 
        = (vlSelf->recv___05Fval[2U] & (2U > (IData)(vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl___05Fcount)));
    vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl___05Fwen 
        = (vlSelf->recv___05Fval[3U] & (2U > (IData)(vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl___05Fcount)));
    vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl___05Fwen 
        = (vlSelf->recv___05Fval[4U] & (2U > (IData)(vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl___05Fcount)));
    vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fwdata[0U][0U] 
        = vlSelf->recv___05Fmsg[0U][0U];
    vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fwdata[0U][1U] 
        = vlSelf->recv___05Fmsg[0U][1U];
    vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fwdata[0U][2U] 
        = vlSelf->recv___05Fmsg[0U][2U];
    vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fwdata[0U][3U] 
        = vlSelf->recv___05Fmsg[0U][3U];
    vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fwdata[0U][4U] 
        = vlSelf->recv___05Fmsg[0U][4U];
    vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fwdata[0U][5U] 
        = vlSelf->recv___05Fmsg[0U][5U];
    vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fwdata[0U][6U] 
        = vlSelf->recv___05Fmsg[0U][6U];
    vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fwdata[0U][7U] 
        = vlSelf->recv___05Fmsg[0U][7U];
    vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fwdata[0U][0U] 
        = vlSelf->recv___05Fmsg[1U][0U];
    vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fwdata[0U][1U] 
        = vlSelf->recv___05Fmsg[1U][1U];
    vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fwdata[0U][2U] 
        = vlSelf->recv___05Fmsg[1U][2U];
    vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fwdata[0U][3U] 
        = vlSelf->recv___05Fmsg[1U][3U];
    vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fwdata[0U][4U] 
        = vlSelf->recv___05Fmsg[1U][4U];
    vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fwdata[0U][5U] 
        = vlSelf->recv___05Fmsg[1U][5U];
    vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fwdata[0U][6U] 
        = vlSelf->recv___05Fmsg[1U][6U];
    vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fwdata[0U][7U] 
        = vlSelf->recv___05Fmsg[1U][7U];
    vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fwdata[0U][0U] 
        = vlSelf->recv___05Fmsg[2U][0U];
    vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fwdata[0U][1U] 
        = vlSelf->recv___05Fmsg[2U][1U];
    vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fwdata[0U][2U] 
        = vlSelf->recv___05Fmsg[2U][2U];
    vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fwdata[0U][3U] 
        = vlSelf->recv___05Fmsg[2U][3U];
    vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fwdata[0U][4U] 
        = vlSelf->recv___05Fmsg[2U][4U];
    vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fwdata[0U][5U] 
        = vlSelf->recv___05Fmsg[2U][5U];
    vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fwdata[0U][6U] 
        = vlSelf->recv___05Fmsg[2U][6U];
    vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fwdata[0U][7U] 
        = vlSelf->recv___05Fmsg[2U][7U];
    vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Fwdata[0U][0U] 
        = vlSelf->recv___05Fmsg[3U][0U];
    vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Fwdata[0U][1U] 
        = vlSelf->recv___05Fmsg[3U][1U];
    vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Fwdata[0U][2U] 
        = vlSelf->recv___05Fmsg[3U][2U];
    vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Fwdata[0U][3U] 
        = vlSelf->recv___05Fmsg[3U][3U];
    vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Fwdata[0U][4U] 
        = vlSelf->recv___05Fmsg[3U][4U];
    vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Fwdata[0U][5U] 
        = vlSelf->recv___05Fmsg[3U][5U];
    vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Fwdata[0U][6U] 
        = vlSelf->recv___05Fmsg[3U][6U];
    vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Fwdata[0U][7U] 
        = vlSelf->recv___05Fmsg[3U][7U];
    vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Fwdata[0U][0U] 
        = vlSelf->recv___05Fmsg[4U][0U];
    vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Fwdata[0U][1U] 
        = vlSelf->recv___05Fmsg[4U][1U];
    vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Fwdata[0U][2U] 
        = vlSelf->recv___05Fmsg[4U][2U];
    vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Fwdata[0U][3U] 
        = vlSelf->recv___05Fmsg[4U][3U];
    vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Fwdata[0U][4U] 
        = vlSelf->recv___05Fmsg[4U][4U];
    vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Fwdata[0U][5U] 
        = vlSelf->recv___05Fmsg[4U][5U];
    vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Fwdata[0U][6U] 
        = vlSelf->recv___05Fmsg[4U][6U];
    vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Fwdata[0U][7U] 
        = vlSelf->recv___05Fmsg[4U][7U];
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
}

VL_INLINE_OPT void Vcgra_test_MeshRouterRTL___05Fc553b44583f176ea___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__routers___05F0__2(Vcgra_test_MeshRouterRTL___05Fc553b44583f176ea* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcgra_test_MeshRouterRTL___05Fc553b44583f176ea___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__routers___05F0__2\n"); );
    // Init
    CData/*0:0*/ __Vcellout__route_units___05F0__recv___05Frdy;
    __Vcellout__route_units___05F0__recv___05Frdy = 0;
    CData/*0:0*/ __Vcellout__route_units___05F1__recv___05Frdy;
    __Vcellout__route_units___05F1__recv___05Frdy = 0;
    CData/*0:0*/ __Vcellout__route_units___05F2__recv___05Frdy;
    __Vcellout__route_units___05F2__recv___05Frdy = 0;
    CData/*0:0*/ __Vcellout__route_units___05F3__recv___05Frdy;
    __Vcellout__route_units___05F3__recv___05Frdy = 0;
    CData/*0:0*/ __Vcellout__route_units___05F4__recv___05Frdy;
    __Vcellout__route_units___05F4__recv___05Frdy = 0;
    CData/*0:0*/ switch_units___05F0__DOT____Vlvbound_ha13b0d02__0;
    switch_units___05F0__DOT____Vlvbound_ha13b0d02__0 = 0;
    CData/*0:0*/ switch_units___05F1__DOT____Vlvbound_ha13b0d02__0;
    switch_units___05F1__DOT____Vlvbound_ha13b0d02__0 = 0;
    CData/*0:0*/ switch_units___05F2__DOT____Vlvbound_ha13b0d02__0;
    switch_units___05F2__DOT____Vlvbound_ha13b0d02__0 = 0;
    CData/*0:0*/ switch_units___05F3__DOT____Vlvbound_ha13b0d02__0;
    switch_units___05F3__DOT____Vlvbound_ha13b0d02__0 = 0;
    CData/*0:0*/ switch_units___05F4__DOT____Vlvbound_ha13b0d02__0;
    switch_units___05F4__DOT____Vlvbound_ha13b0d02__0 = 0;
    // Body
    switch_units___05F0__DOT____Vlvbound_ha13b0d02__0 
        = (vlSelf->send___05Frdy[0U] & (0U == (IData)(vlSelf->__PVT__switch_units___05F0__DOT__encoder___05Fout)));
    vlSelf->__Vcellout__switch_units___05F0__recv___05Frdy[0U] 
        = switch_units___05F0__DOT____Vlvbound_ha13b0d02__0;
    switch_units___05F0__DOT____Vlvbound_ha13b0d02__0 
        = (vlSelf->send___05Frdy[0U] & (1U == (IData)(vlSelf->__PVT__switch_units___05F0__DOT__encoder___05Fout)));
    vlSelf->__Vcellout__switch_units___05F0__recv___05Frdy[1U] 
        = switch_units___05F0__DOT____Vlvbound_ha13b0d02__0;
    switch_units___05F0__DOT____Vlvbound_ha13b0d02__0 
        = (vlSelf->send___05Frdy[0U] & (2U == (IData)(vlSelf->__PVT__switch_units___05F0__DOT__encoder___05Fout)));
    vlSelf->__Vcellout__switch_units___05F0__recv___05Frdy[2U] 
        = switch_units___05F0__DOT____Vlvbound_ha13b0d02__0;
    switch_units___05F0__DOT____Vlvbound_ha13b0d02__0 
        = (vlSelf->send___05Frdy[0U] & (3U == (IData)(vlSelf->__PVT__switch_units___05F0__DOT__encoder___05Fout)));
    vlSelf->__Vcellout__switch_units___05F0__recv___05Frdy[3U] 
        = switch_units___05F0__DOT____Vlvbound_ha13b0d02__0;
    switch_units___05F0__DOT____Vlvbound_ha13b0d02__0 
        = (vlSelf->send___05Frdy[0U] & (4U == (IData)(vlSelf->__PVT__switch_units___05F0__DOT__encoder___05Fout)));
    vlSelf->__Vcellout__switch_units___05F0__recv___05Frdy[4U] 
        = switch_units___05F0__DOT____Vlvbound_ha13b0d02__0;
    switch_units___05F1__DOT____Vlvbound_ha13b0d02__0 
        = (vlSelf->send___05Frdy[1U] & (0U == (IData)(vlSelf->__PVT__switch_units___05F1__DOT__encoder___05Fout)));
    vlSelf->__Vcellout__switch_units___05F1__recv___05Frdy[0U] 
        = switch_units___05F1__DOT____Vlvbound_ha13b0d02__0;
    switch_units___05F1__DOT____Vlvbound_ha13b0d02__0 
        = (vlSelf->send___05Frdy[1U] & (1U == (IData)(vlSelf->__PVT__switch_units___05F1__DOT__encoder___05Fout)));
    vlSelf->__Vcellout__switch_units___05F1__recv___05Frdy[1U] 
        = switch_units___05F1__DOT____Vlvbound_ha13b0d02__0;
    switch_units___05F1__DOT____Vlvbound_ha13b0d02__0 
        = (vlSelf->send___05Frdy[1U] & (2U == (IData)(vlSelf->__PVT__switch_units___05F1__DOT__encoder___05Fout)));
    vlSelf->__Vcellout__switch_units___05F1__recv___05Frdy[2U] 
        = switch_units___05F1__DOT____Vlvbound_ha13b0d02__0;
    switch_units___05F1__DOT____Vlvbound_ha13b0d02__0 
        = (vlSelf->send___05Frdy[1U] & (3U == (IData)(vlSelf->__PVT__switch_units___05F1__DOT__encoder___05Fout)));
    vlSelf->__Vcellout__switch_units___05F1__recv___05Frdy[3U] 
        = switch_units___05F1__DOT____Vlvbound_ha13b0d02__0;
    switch_units___05F1__DOT____Vlvbound_ha13b0d02__0 
        = (vlSelf->send___05Frdy[1U] & (4U == (IData)(vlSelf->__PVT__switch_units___05F1__DOT__encoder___05Fout)));
    vlSelf->__Vcellout__switch_units___05F1__recv___05Frdy[4U] 
        = switch_units___05F1__DOT____Vlvbound_ha13b0d02__0;
    switch_units___05F2__DOT____Vlvbound_ha13b0d02__0 
        = (vlSelf->send___05Frdy[2U] & (0U == (IData)(vlSelf->__PVT__switch_units___05F2__DOT__encoder___05Fout)));
    vlSelf->__Vcellout__switch_units___05F2__recv___05Frdy[0U] 
        = switch_units___05F2__DOT____Vlvbound_ha13b0d02__0;
    switch_units___05F2__DOT____Vlvbound_ha13b0d02__0 
        = (vlSelf->send___05Frdy[2U] & (1U == (IData)(vlSelf->__PVT__switch_units___05F2__DOT__encoder___05Fout)));
    vlSelf->__Vcellout__switch_units___05F2__recv___05Frdy[1U] 
        = switch_units___05F2__DOT____Vlvbound_ha13b0d02__0;
    switch_units___05F2__DOT____Vlvbound_ha13b0d02__0 
        = (vlSelf->send___05Frdy[2U] & (2U == (IData)(vlSelf->__PVT__switch_units___05F2__DOT__encoder___05Fout)));
    vlSelf->__Vcellout__switch_units___05F2__recv___05Frdy[2U] 
        = switch_units___05F2__DOT____Vlvbound_ha13b0d02__0;
    switch_units___05F2__DOT____Vlvbound_ha13b0d02__0 
        = (vlSelf->send___05Frdy[2U] & (3U == (IData)(vlSelf->__PVT__switch_units___05F2__DOT__encoder___05Fout)));
    vlSelf->__Vcellout__switch_units___05F2__recv___05Frdy[3U] 
        = switch_units___05F2__DOT____Vlvbound_ha13b0d02__0;
    switch_units___05F2__DOT____Vlvbound_ha13b0d02__0 
        = (vlSelf->send___05Frdy[2U] & (4U == (IData)(vlSelf->__PVT__switch_units___05F2__DOT__encoder___05Fout)));
    vlSelf->__Vcellout__switch_units___05F2__recv___05Frdy[4U] 
        = switch_units___05F2__DOT____Vlvbound_ha13b0d02__0;
    switch_units___05F3__DOT____Vlvbound_ha13b0d02__0 
        = (vlSelf->send___05Frdy[3U] & (0U == (IData)(vlSelf->__PVT__switch_units___05F3__DOT__encoder___05Fout)));
    vlSelf->__Vcellout__switch_units___05F3__recv___05Frdy[0U] 
        = switch_units___05F3__DOT____Vlvbound_ha13b0d02__0;
    switch_units___05F3__DOT____Vlvbound_ha13b0d02__0 
        = (vlSelf->send___05Frdy[3U] & (1U == (IData)(vlSelf->__PVT__switch_units___05F3__DOT__encoder___05Fout)));
    vlSelf->__Vcellout__switch_units___05F3__recv___05Frdy[1U] 
        = switch_units___05F3__DOT____Vlvbound_ha13b0d02__0;
    switch_units___05F3__DOT____Vlvbound_ha13b0d02__0 
        = (vlSelf->send___05Frdy[3U] & (2U == (IData)(vlSelf->__PVT__switch_units___05F3__DOT__encoder___05Fout)));
    vlSelf->__Vcellout__switch_units___05F3__recv___05Frdy[2U] 
        = switch_units___05F3__DOT____Vlvbound_ha13b0d02__0;
    switch_units___05F3__DOT____Vlvbound_ha13b0d02__0 
        = (vlSelf->send___05Frdy[3U] & (3U == (IData)(vlSelf->__PVT__switch_units___05F3__DOT__encoder___05Fout)));
    vlSelf->__Vcellout__switch_units___05F3__recv___05Frdy[3U] 
        = switch_units___05F3__DOT____Vlvbound_ha13b0d02__0;
    switch_units___05F3__DOT____Vlvbound_ha13b0d02__0 
        = (vlSelf->send___05Frdy[3U] & (4U == (IData)(vlSelf->__PVT__switch_units___05F3__DOT__encoder___05Fout)));
    vlSelf->__Vcellout__switch_units___05F3__recv___05Frdy[4U] 
        = switch_units___05F3__DOT____Vlvbound_ha13b0d02__0;
    switch_units___05F4__DOT____Vlvbound_ha13b0d02__0 
        = (vlSelf->send___05Frdy[4U] & (0U == (IData)(vlSelf->__PVT__switch_units___05F4__DOT__encoder___05Fout)));
    vlSelf->__Vcellout__switch_units___05F4__recv___05Frdy[0U] 
        = switch_units___05F4__DOT____Vlvbound_ha13b0d02__0;
    switch_units___05F4__DOT____Vlvbound_ha13b0d02__0 
        = (vlSelf->send___05Frdy[4U] & (1U == (IData)(vlSelf->__PVT__switch_units___05F4__DOT__encoder___05Fout)));
    vlSelf->__Vcellout__switch_units___05F4__recv___05Frdy[1U] 
        = switch_units___05F4__DOT____Vlvbound_ha13b0d02__0;
    switch_units___05F4__DOT____Vlvbound_ha13b0d02__0 
        = (vlSelf->send___05Frdy[4U] & (2U == (IData)(vlSelf->__PVT__switch_units___05F4__DOT__encoder___05Fout)));
    vlSelf->__Vcellout__switch_units___05F4__recv___05Frdy[2U] 
        = switch_units___05F4__DOT____Vlvbound_ha13b0d02__0;
    switch_units___05F4__DOT____Vlvbound_ha13b0d02__0 
        = (vlSelf->send___05Frdy[4U] & (3U == (IData)(vlSelf->__PVT__switch_units___05F4__DOT__encoder___05Fout)));
    vlSelf->__Vcellout__switch_units___05F4__recv___05Frdy[3U] 
        = switch_units___05F4__DOT____Vlvbound_ha13b0d02__0;
    switch_units___05F4__DOT____Vlvbound_ha13b0d02__0 
        = (vlSelf->send___05Frdy[4U] & (4U == (IData)(vlSelf->__PVT__switch_units___05F4__DOT__encoder___05Fout)));
    vlSelf->__Vcellout__switch_units___05F4__recv___05Frdy[4U] 
        = switch_units___05F4__DOT____Vlvbound_ha13b0d02__0;
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
    vlSelf->__PVT__switch_units___05Frecv___05Frdy[3U][0U] 
        = vlSelf->__Vcellout__switch_units___05F3__recv___05Frdy
        [0U];
    vlSelf->__PVT__switch_units___05Frecv___05Frdy[3U][1U] 
        = vlSelf->__Vcellout__switch_units___05F3__recv___05Frdy
        [1U];
    vlSelf->__PVT__switch_units___05Frecv___05Frdy[3U][2U] 
        = vlSelf->__Vcellout__switch_units___05F3__recv___05Frdy
        [2U];
    vlSelf->__PVT__switch_units___05Frecv___05Frdy[3U][3U] 
        = vlSelf->__Vcellout__switch_units___05F3__recv___05Frdy
        [3U];
    vlSelf->__PVT__switch_units___05Frecv___05Frdy[3U][4U] 
        = vlSelf->__Vcellout__switch_units___05F3__recv___05Frdy
        [4U];
    vlSelf->__PVT__switch_units___05Frecv___05Frdy[4U][0U] 
        = vlSelf->__Vcellout__switch_units___05F4__recv___05Frdy
        [0U];
    vlSelf->__PVT__switch_units___05Frecv___05Frdy[4U][1U] 
        = vlSelf->__Vcellout__switch_units___05F4__recv___05Frdy
        [1U];
    vlSelf->__PVT__switch_units___05Frecv___05Frdy[4U][2U] 
        = vlSelf->__Vcellout__switch_units___05F4__recv___05Frdy
        [2U];
    vlSelf->__PVT__switch_units___05Frecv___05Frdy[4U][3U] 
        = vlSelf->__Vcellout__switch_units___05F4__recv___05Frdy
        [3U];
    vlSelf->__PVT__switch_units___05Frecv___05Frdy[4U][4U] 
        = vlSelf->__Vcellout__switch_units___05F4__recv___05Frdy
        [4U];
    vlSelf->__PVT__route_units___05Fsend___05Frdy[0U][0U] 
        = vlSelf->__PVT__switch_units___05Frecv___05Frdy
        [0U][0U];
    vlSelf->__PVT__route_units___05Fsend___05Frdy[0U][1U] 
        = vlSelf->__PVT__switch_units___05Frecv___05Frdy
        [1U][0U];
    vlSelf->__PVT__route_units___05Fsend___05Frdy[0U][2U] 
        = vlSelf->__PVT__switch_units___05Frecv___05Frdy
        [2U][0U];
    vlSelf->__PVT__route_units___05Fsend___05Frdy[0U][3U] 
        = vlSelf->__PVT__switch_units___05Frecv___05Frdy
        [3U][0U];
    vlSelf->__PVT__route_units___05Fsend___05Frdy[0U][4U] 
        = vlSelf->__PVT__switch_units___05Frecv___05Frdy
        [4U][0U];
    vlSelf->__PVT__route_units___05Fsend___05Frdy[1U][0U] 
        = vlSelf->__PVT__switch_units___05Frecv___05Frdy
        [0U][1U];
    vlSelf->__PVT__route_units___05Fsend___05Frdy[1U][1U] 
        = vlSelf->__PVT__switch_units___05Frecv___05Frdy
        [1U][1U];
    vlSelf->__PVT__route_units___05Fsend___05Frdy[1U][2U] 
        = vlSelf->__PVT__switch_units___05Frecv___05Frdy
        [2U][1U];
    vlSelf->__PVT__route_units___05Fsend___05Frdy[1U][3U] 
        = vlSelf->__PVT__switch_units___05Frecv___05Frdy
        [3U][1U];
    vlSelf->__PVT__route_units___05Fsend___05Frdy[1U][4U] 
        = vlSelf->__PVT__switch_units___05Frecv___05Frdy
        [4U][1U];
    vlSelf->__PVT__route_units___05Fsend___05Frdy[2U][0U] 
        = vlSelf->__PVT__switch_units___05Frecv___05Frdy
        [0U][2U];
    vlSelf->__PVT__route_units___05Fsend___05Frdy[2U][1U] 
        = vlSelf->__PVT__switch_units___05Frecv___05Frdy
        [1U][2U];
    vlSelf->__PVT__route_units___05Fsend___05Frdy[2U][2U] 
        = vlSelf->__PVT__switch_units___05Frecv___05Frdy
        [2U][2U];
    vlSelf->__PVT__route_units___05Fsend___05Frdy[2U][3U] 
        = vlSelf->__PVT__switch_units___05Frecv___05Frdy
        [3U][2U];
    vlSelf->__PVT__route_units___05Fsend___05Frdy[2U][4U] 
        = vlSelf->__PVT__switch_units___05Frecv___05Frdy
        [4U][2U];
    vlSelf->__PVT__route_units___05Fsend___05Frdy[3U][0U] 
        = vlSelf->__PVT__switch_units___05Frecv___05Frdy
        [0U][3U];
    vlSelf->__PVT__route_units___05Fsend___05Frdy[3U][1U] 
        = vlSelf->__PVT__switch_units___05Frecv___05Frdy
        [1U][3U];
    vlSelf->__PVT__route_units___05Fsend___05Frdy[3U][2U] 
        = vlSelf->__PVT__switch_units___05Frecv___05Frdy
        [2U][3U];
    vlSelf->__PVT__route_units___05Fsend___05Frdy[3U][3U] 
        = vlSelf->__PVT__switch_units___05Frecv___05Frdy
        [3U][3U];
    vlSelf->__PVT__route_units___05Fsend___05Frdy[3U][4U] 
        = vlSelf->__PVT__switch_units___05Frecv___05Frdy
        [4U][3U];
    vlSelf->__PVT__route_units___05Fsend___05Frdy[4U][0U] 
        = vlSelf->__PVT__switch_units___05Frecv___05Frdy
        [0U][4U];
    vlSelf->__PVT__route_units___05Fsend___05Frdy[4U][1U] 
        = vlSelf->__PVT__switch_units___05Frecv___05Frdy
        [1U][4U];
    vlSelf->__PVT__route_units___05Fsend___05Frdy[4U][2U] 
        = vlSelf->__PVT__switch_units___05Frecv___05Frdy
        [2U][4U];
    vlSelf->__PVT__route_units___05Fsend___05Frdy[4U][3U] 
        = vlSelf->__PVT__switch_units___05Frecv___05Frdy
        [3U][4U];
    vlSelf->__PVT__route_units___05Fsend___05Frdy[4U][4U] 
        = vlSelf->__PVT__switch_units___05Frecv___05Frdy
        [4U][4U];
    vlSelf->__Vcellinp__route_units___05F0__send___05Frdy[0U] 
        = vlSelf->__PVT__route_units___05Fsend___05Frdy
        [0U][0U];
    vlSelf->__Vcellinp__route_units___05F0__send___05Frdy[1U] 
        = vlSelf->__PVT__route_units___05Fsend___05Frdy
        [0U][1U];
    vlSelf->__Vcellinp__route_units___05F0__send___05Frdy[2U] 
        = vlSelf->__PVT__route_units___05Fsend___05Frdy
        [0U][2U];
    vlSelf->__Vcellinp__route_units___05F0__send___05Frdy[3U] 
        = vlSelf->__PVT__route_units___05Fsend___05Frdy
        [0U][3U];
    vlSelf->__Vcellinp__route_units___05F0__send___05Frdy[4U] 
        = vlSelf->__PVT__route_units___05Fsend___05Frdy
        [0U][4U];
    vlSelf->__Vcellinp__route_units___05F1__send___05Frdy[0U] 
        = vlSelf->__PVT__route_units___05Fsend___05Frdy
        [1U][0U];
    vlSelf->__Vcellinp__route_units___05F1__send___05Frdy[1U] 
        = vlSelf->__PVT__route_units___05Fsend___05Frdy
        [1U][1U];
    vlSelf->__Vcellinp__route_units___05F1__send___05Frdy[2U] 
        = vlSelf->__PVT__route_units___05Fsend___05Frdy
        [1U][2U];
    vlSelf->__Vcellinp__route_units___05F1__send___05Frdy[3U] 
        = vlSelf->__PVT__route_units___05Fsend___05Frdy
        [1U][3U];
    vlSelf->__Vcellinp__route_units___05F1__send___05Frdy[4U] 
        = vlSelf->__PVT__route_units___05Fsend___05Frdy
        [1U][4U];
    vlSelf->__Vcellinp__route_units___05F2__send___05Frdy[0U] 
        = vlSelf->__PVT__route_units___05Fsend___05Frdy
        [2U][0U];
    vlSelf->__Vcellinp__route_units___05F2__send___05Frdy[1U] 
        = vlSelf->__PVT__route_units___05Fsend___05Frdy
        [2U][1U];
    vlSelf->__Vcellinp__route_units___05F2__send___05Frdy[2U] 
        = vlSelf->__PVT__route_units___05Fsend___05Frdy
        [2U][2U];
    vlSelf->__Vcellinp__route_units___05F2__send___05Frdy[3U] 
        = vlSelf->__PVT__route_units___05Fsend___05Frdy
        [2U][3U];
    vlSelf->__Vcellinp__route_units___05F2__send___05Frdy[4U] 
        = vlSelf->__PVT__route_units___05Fsend___05Frdy
        [2U][4U];
    vlSelf->__Vcellinp__route_units___05F3__send___05Frdy[0U] 
        = vlSelf->__PVT__route_units___05Fsend___05Frdy
        [3U][0U];
    vlSelf->__Vcellinp__route_units___05F3__send___05Frdy[1U] 
        = vlSelf->__PVT__route_units___05Fsend___05Frdy
        [3U][1U];
    vlSelf->__Vcellinp__route_units___05F3__send___05Frdy[2U] 
        = vlSelf->__PVT__route_units___05Fsend___05Frdy
        [3U][2U];
    vlSelf->__Vcellinp__route_units___05F3__send___05Frdy[3U] 
        = vlSelf->__PVT__route_units___05Fsend___05Frdy
        [3U][3U];
    vlSelf->__Vcellinp__route_units___05F3__send___05Frdy[4U] 
        = vlSelf->__PVT__route_units___05Fsend___05Frdy
        [3U][4U];
    vlSelf->__Vcellinp__route_units___05F4__send___05Frdy[0U] 
        = vlSelf->__PVT__route_units___05Fsend___05Frdy
        [4U][0U];
    vlSelf->__Vcellinp__route_units___05F4__send___05Frdy[1U] 
        = vlSelf->__PVT__route_units___05Fsend___05Frdy
        [4U][1U];
    vlSelf->__Vcellinp__route_units___05F4__send___05Frdy[2U] 
        = vlSelf->__PVT__route_units___05Fsend___05Frdy
        [4U][2U];
    vlSelf->__Vcellinp__route_units___05F4__send___05Frdy[3U] 
        = vlSelf->__PVT__route_units___05Fsend___05Frdy
        [4U][3U];
    vlSelf->__Vcellinp__route_units___05F4__send___05Frdy[4U] 
        = vlSelf->__PVT__route_units___05Fsend___05Frdy
        [4U][4U];
    __Vcellout__route_units___05F0__recv___05Frdy = 
        ((4U >= (IData)(vlSelf->__PVT__route_units___05F0__DOT__out_dir)) 
         && (1U & (((vlSelf->__Vcellinp__route_units___05F0__send___05Frdy
                     [4U] << 4U) | ((vlSelf->__Vcellinp__route_units___05F0__send___05Frdy
                                     [3U] << 3U) | 
                                    ((vlSelf->__Vcellinp__route_units___05F0__send___05Frdy
                                      [2U] << 2U) | 
                                     ((vlSelf->__Vcellinp__route_units___05F0__send___05Frdy
                                       [1U] << 1U) 
                                      | vlSelf->__Vcellinp__route_units___05F0__send___05Frdy
                                      [0U])))) >> (IData)(vlSelf->__PVT__route_units___05F0__DOT__out_dir))));
    __Vcellout__route_units___05F1__recv___05Frdy = 
        ((4U >= (IData)(vlSelf->__PVT__route_units___05F1__DOT__out_dir)) 
         && (1U & (((vlSelf->__Vcellinp__route_units___05F1__send___05Frdy
                     [4U] << 4U) | ((vlSelf->__Vcellinp__route_units___05F1__send___05Frdy
                                     [3U] << 3U) | 
                                    ((vlSelf->__Vcellinp__route_units___05F1__send___05Frdy
                                      [2U] << 2U) | 
                                     ((vlSelf->__Vcellinp__route_units___05F1__send___05Frdy
                                       [1U] << 1U) 
                                      | vlSelf->__Vcellinp__route_units___05F1__send___05Frdy
                                      [0U])))) >> (IData)(vlSelf->__PVT__route_units___05F1__DOT__out_dir))));
    __Vcellout__route_units___05F2__recv___05Frdy = 
        ((4U >= (IData)(vlSelf->__PVT__route_units___05F2__DOT__out_dir)) 
         && (1U & (((vlSelf->__Vcellinp__route_units___05F2__send___05Frdy
                     [4U] << 4U) | ((vlSelf->__Vcellinp__route_units___05F2__send___05Frdy
                                     [3U] << 3U) | 
                                    ((vlSelf->__Vcellinp__route_units___05F2__send___05Frdy
                                      [2U] << 2U) | 
                                     ((vlSelf->__Vcellinp__route_units___05F2__send___05Frdy
                                       [1U] << 1U) 
                                      | vlSelf->__Vcellinp__route_units___05F2__send___05Frdy
                                      [0U])))) >> (IData)(vlSelf->__PVT__route_units___05F2__DOT__out_dir))));
    __Vcellout__route_units___05F3__recv___05Frdy = 
        ((4U >= (IData)(vlSelf->__PVT__route_units___05F3__DOT__out_dir)) 
         && (1U & (((vlSelf->__Vcellinp__route_units___05F3__send___05Frdy
                     [4U] << 4U) | ((vlSelf->__Vcellinp__route_units___05F3__send___05Frdy
                                     [3U] << 3U) | 
                                    ((vlSelf->__Vcellinp__route_units___05F3__send___05Frdy
                                      [2U] << 2U) | 
                                     ((vlSelf->__Vcellinp__route_units___05F3__send___05Frdy
                                       [1U] << 1U) 
                                      | vlSelf->__Vcellinp__route_units___05F3__send___05Frdy
                                      [0U])))) >> (IData)(vlSelf->__PVT__route_units___05F3__DOT__out_dir))));
    __Vcellout__route_units___05F4__recv___05Frdy = 
        ((4U >= (IData)(vlSelf->__PVT__route_units___05F4__DOT__out_dir)) 
         && (1U & (((vlSelf->__Vcellinp__route_units___05F4__send___05Frdy
                     [4U] << 4U) | ((vlSelf->__Vcellinp__route_units___05F4__send___05Frdy
                                     [3U] << 3U) | 
                                    ((vlSelf->__Vcellinp__route_units___05F4__send___05Frdy
                                      [2U] << 2U) | 
                                     ((vlSelf->__Vcellinp__route_units___05F4__send___05Frdy
                                       [1U] << 1U) 
                                      | vlSelf->__Vcellinp__route_units___05F4__send___05Frdy
                                      [0U])))) >> (IData)(vlSelf->__PVT__route_units___05F4__DOT__out_dir))));
    vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl___05Fcount)) 
           & (IData)(__Vcellout__route_units___05F0__recv___05Frdy));
    vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl___05Fcount)) 
           & (IData)(__Vcellout__route_units___05F1__recv___05Frdy));
    vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl___05Fcount)) 
           & (IData)(__Vcellout__route_units___05F2__recv___05Frdy));
    vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl___05Fcount)) 
           & (IData)(__Vcellout__route_units___05F3__recv___05Frdy));
    vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl___05Fcount)) 
           & (IData)(__Vcellout__route_units___05F4__recv___05Frdy));
}
