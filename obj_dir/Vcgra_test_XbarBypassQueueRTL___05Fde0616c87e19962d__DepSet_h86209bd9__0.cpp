// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcgra_test.h for the primary calling header

#include "Vcgra_test__pch.h"
#include "Vcgra_test_XbarBypassQueueRTL___05Fde0616c87e19962d.h"
#include "Vcgra_test__Syms.h"

extern const VlUnpacked<CData/*2:0*/, 128> Vcgra_test__ConstPool__TABLE_h0ff887fa_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vcgra_test__ConstPool__TABLE_h3c631caf_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vcgra_test__ConstPool__TABLE_hfd7f8679_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vcgra_test__ConstPool__TABLE_h7d6d9230_0;

VL_INLINE_OPT void Vcgra_test_XbarBypassQueueRTL___05Fde0616c87e19962d___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__data_mem__DOT__read_crossbar__0(Vcgra_test_XbarBypassQueueRTL___05Fde0616c87e19962d* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_XbarBypassQueueRTL___05Fde0616c87e19962d___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__data_mem__DOT__read_crossbar__0\n"); );
    // Init
    QData/*56:0*/ input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 = 0;
    QData/*56:0*/ input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 = 0;
    QData/*56:0*/ input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 = 0;
    QData/*56:0*/ input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 = 0;
    QData/*56:0*/ input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 = 0;
    QData/*56:0*/ input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 = 0;
    QData/*56:0*/ input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 = 0;
    QData/*56:0*/ input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 = 0;
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*6:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*6:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*6:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*6:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    CData/*6:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    CData/*6:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    QData/*56:0*/ __VdlyVal__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyVal__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlyDim0__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    QData/*56:0*/ __VdlyVal__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyVal__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlyDim0__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    QData/*56:0*/ __VdlyVal__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyVal__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlyDim0__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    QData/*56:0*/ __VdlyVal__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyVal__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlyDim0__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    QData/*56:0*/ __VdlyVal__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyVal__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlyDim0__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    QData/*56:0*/ __VdlyVal__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyVal__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlyDim0__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    QData/*56:0*/ __VdlyVal__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyVal__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlyDim0__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    QData/*56:0*/ __VdlyVal__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyVal__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlyDim0__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    // Body
    __VdlySet__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    __VdlySet__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    __VdlySet__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    __VdlySet__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    __VdlySet__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    __VdlySet__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    __VdlySet__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    __VdlySet__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf___05Fwdata
            [0U];
        __VdlyDim0__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    if (vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf___05Fwdata
            [0U];
        __VdlyDim0__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    if (vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf___05Fwdata
            [0U];
        __VdlyDim0__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    if (vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Fwdata
            [0U];
        __VdlyDim0__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    if (vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Fwdata
            [0U];
        __VdlyDim0__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    if (vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fwdata
            [0U];
        __VdlyDim0__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    if (vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fwdata
            [0U];
        __VdlyDim0__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    if (vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fwdata
            [0U];
        __VdlyDim0__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    __Vtableidx8 = (((IData)(vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl___05Fcount) 
                     << 5U) | (((IData)(vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl__DOT__head) 
                                << 4U) | ((((IData)(vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl___05Fsend_val) 
                                            & (IData)(vlSelf->__Vcellout__route_units___05F7__recv___05Frdy)) 
                                           << 3U) | 
                                          (((IData)(vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl__DOT__tail) 
                                            << 2U) 
                                           | (((IData)(vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl___05Fwen) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx8])) {
        vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx8];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx8])) {
        vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx8];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx8])) {
        vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx8];
    }
    __Vtableidx7 = (((IData)(vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl___05Fcount) 
                     << 5U) | (((IData)(vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl__DOT__head) 
                                << 4U) | ((((IData)(vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl___05Fsend_val) 
                                            & (IData)(vlSelf->__Vcellout__route_units___05F6__recv___05Frdy)) 
                                           << 3U) | 
                                          (((IData)(vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl__DOT__tail) 
                                            << 2U) 
                                           | (((IData)(vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl___05Fwen) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx7])) {
        vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx7];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx7])) {
        vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx7];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx7])) {
        vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx7];
    }
    __Vtableidx6 = (((IData)(vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl___05Fcount) 
                     << 5U) | (((IData)(vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl__DOT__head) 
                                << 4U) | ((((IData)(vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl___05Fsend_val) 
                                            & (IData)(vlSelf->__Vcellout__route_units___05F5__recv___05Frdy)) 
                                           << 3U) | 
                                          (((IData)(vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl__DOT__tail) 
                                            << 2U) 
                                           | (((IData)(vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl___05Fwen) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx6])) {
        vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx6];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx6])) {
        vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx6];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx6])) {
        vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx6];
    }
    __Vtableidx5 = (((IData)(vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl___05Fcount) 
                     << 5U) | (((IData)(vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl__DOT__head) 
                                << 4U) | ((((IData)(vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl___05Fsend_val) 
                                            & (IData)(vlSelf->__Vcellout__route_units___05F4__recv___05Frdy)) 
                                           << 3U) | 
                                          (((IData)(vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl__DOT__tail) 
                                            << 2U) 
                                           | (((IData)(vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl___05Fwen) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx5])) {
        vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx5];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx5])) {
        vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx5];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx5])) {
        vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx5];
    }
    __Vtableidx4 = (((IData)(vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl___05Fcount) 
                     << 5U) | (((IData)(vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl__DOT__head) 
                                << 4U) | ((((IData)(vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl___05Fsend_val) 
                                            & (IData)(vlSelf->__Vcellout__route_units___05F3__recv___05Frdy)) 
                                           << 3U) | 
                                          (((IData)(vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl__DOT__tail) 
                                            << 2U) 
                                           | (((IData)(vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl___05Fwen) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx4])) {
        vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx4];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx4])) {
        vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx4];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx4])) {
        vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx4];
    }
    __Vtableidx3 = (((IData)(vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl___05Fcount) 
                     << 5U) | (((IData)(vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl__DOT__head) 
                                << 4U) | ((((IData)(vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl___05Fsend_val) 
                                            & (IData)(vlSelf->__Vcellout__route_units___05F2__recv___05Frdy)) 
                                           << 3U) | 
                                          (((IData)(vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl__DOT__tail) 
                                            << 2U) 
                                           | (((IData)(vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl___05Fwen) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx3])) {
        vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx3];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx3])) {
        vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx3];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx3])) {
        vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx3];
    }
    __Vtableidx2 = (((IData)(vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl___05Fcount) 
                     << 5U) | (((IData)(vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl__DOT__head) 
                                << 4U) | ((((IData)(vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl___05Fsend_val) 
                                            & (IData)(vlSelf->__Vcellout__route_units___05F1__recv___05Frdy)) 
                                           << 3U) | 
                                          (((IData)(vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl__DOT__tail) 
                                            << 2U) 
                                           | (((IData)(vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl___05Fwen) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx2])) {
        vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx2];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx2])) {
        vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx2];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx2])) {
        vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx2];
    }
    __Vtableidx1 = (((IData)(vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl___05Fcount) 
                     << 5U) | (((IData)(vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl__DOT__head) 
                                << 4U) | ((((IData)(vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl___05Fsend_val) 
                                            & (IData)(vlSelf->__Vcellout__route_units___05F0__recv___05Frdy)) 
                                           << 3U) | 
                                          (((IData)(vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl__DOT__tail) 
                                            << 2U) 
                                           | (((IData)(vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl___05Fwen) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx1])) {
        vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx1];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx1])) {
        vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx1];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx1])) {
        vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx1];
    }
    if (vlSymsp->TOP.cgra_test__DOT__reset) {
        vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fout = 1U;
        vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fout = 1U;
        vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fout = 1U;
    } else {
        if ((0U != (IData)(vlSelf->__PVT__switch_units___05F2__DOT__arbiter___05Fgrants))) {
            vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fout 
                = ((0xfeU & ((IData)(vlSelf->__PVT__switch_units___05F2__DOT__arbiter___05Fgrants) 
                             << 1U)) | (1U & ((IData)(vlSelf->__PVT__switch_units___05F2__DOT__arbiter___05Fgrants) 
                                              >> 7U)));
        }
        if ((0U != (IData)(vlSelf->__PVT__switch_units___05F1__DOT__arbiter___05Fgrants))) {
            vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fout 
                = ((0xfeU & ((IData)(vlSelf->__PVT__switch_units___05F1__DOT__arbiter___05Fgrants) 
                             << 1U)) | (1U & ((IData)(vlSelf->__PVT__switch_units___05F1__DOT__arbiter___05Fgrants) 
                                              >> 7U)));
        }
        if ((0U != (IData)(vlSelf->__PVT__switch_units___05F0__DOT__arbiter___05Fgrants))) {
            vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fout 
                = ((0xfeU & ((IData)(vlSelf->__PVT__switch_units___05F0__DOT__arbiter___05Fgrants) 
                             << 1U)) | (1U & ((IData)(vlSelf->__PVT__switch_units___05F0__DOT__arbiter___05Fgrants) 
                                              >> 7U)));
        }
    }
    if (__VdlySet__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __VdlyVal__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    if (__VdlySet__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __VdlyVal__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    if (__VdlySet__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __VdlyVal__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    if (__VdlySet__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __VdlyVal__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    if (__VdlySet__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __VdlyVal__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    if (__VdlySet__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __VdlyVal__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    if (__VdlySet__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __VdlyVal__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    if (__VdlySet__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __VdlyVal__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl__DOT__head;
    vlSelf->__PVT__recv___05Frdy[7U] = (2U > (IData)(vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl___05Fcount));
    vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl__DOT__head;
    vlSelf->__PVT__recv___05Frdy[6U] = (2U > (IData)(vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl___05Fcount));
    vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl__DOT__head;
    vlSelf->__PVT__recv___05Frdy[5U] = (2U > (IData)(vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl___05Fcount));
    vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl__DOT__head;
    vlSelf->__PVT__recv___05Frdy[4U] = (2U > (IData)(vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl___05Fcount));
    vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl__DOT__head;
    vlSelf->__PVT__recv___05Frdy[3U] = (2U > (IData)(vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl___05Fcount));
    vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl__DOT__head;
    vlSelf->__PVT__recv___05Frdy[2U] = (2U > (IData)(vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl___05Fcount));
    vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl__DOT__head;
    vlSelf->__PVT__recv___05Frdy[1U] = (2U > (IData)(vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl___05Fcount));
    vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl__DOT__head;
    vlSelf->__PVT__recv___05Frdy[0U] = (2U > (IData)(vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl___05Fcount));
    input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 
        = vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf___05Fraddr
        [0U]];
    vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf___05Frdata[0U] 
        = input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 
        = vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf___05Fraddr
        [0U]];
    vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf___05Frdata[0U] 
        = input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 
        = vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf___05Fraddr
        [0U]];
    vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf___05Frdata[0U] 
        = input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 
        = vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Fraddr
        [0U]];
    vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Frdata[0U] 
        = input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 
        = vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Fraddr
        [0U]];
    vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Frdata[0U] 
        = input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 
        = vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fraddr
        [0U]];
    vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Frdata[0U] 
        = input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 
        = vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fraddr
        [0U]];
    vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Frdata[0U] 
        = input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 
        = vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fraddr
        [0U]];
    vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Frdata[0U] 
        = input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__mux___05Fin_[0U] 
        = vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__mux___05Fin_[0U] 
        = vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__mux___05Fin_[0U] 
        = vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__mux___05Fin_[0U] 
        = vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__mux___05Fin_[0U] 
        = vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__mux___05Fin_[0U] 
        = vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__mux___05Fin_[0U] 
        = vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__mux___05Fin_[0U] 
        = vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Frdata
        [0U];
}

VL_INLINE_OPT void Vcgra_test_XbarBypassQueueRTL___05Fde0616c87e19962d___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__data_mem__DOT__write_crossbar__0(Vcgra_test_XbarBypassQueueRTL___05Fde0616c87e19962d* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_XbarBypassQueueRTL___05Fde0616c87e19962d___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0__data_mem__DOT__write_crossbar__0\n"); );
    // Init
    QData/*56:0*/ input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 = 0;
    QData/*56:0*/ input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 = 0;
    QData/*56:0*/ input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 = 0;
    QData/*56:0*/ input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 = 0;
    QData/*56:0*/ input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 = 0;
    QData/*56:0*/ input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 = 0;
    QData/*56:0*/ input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 = 0;
    QData/*56:0*/ input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 = 0;
    CData/*6:0*/ __Vtableidx12;
    __Vtableidx12 = 0;
    CData/*6:0*/ __Vtableidx13;
    __Vtableidx13 = 0;
    CData/*6:0*/ __Vtableidx14;
    __Vtableidx14 = 0;
    CData/*6:0*/ __Vtableidx15;
    __Vtableidx15 = 0;
    CData/*6:0*/ __Vtableidx16;
    __Vtableidx16 = 0;
    CData/*6:0*/ __Vtableidx17;
    __Vtableidx17 = 0;
    CData/*6:0*/ __Vtableidx18;
    __Vtableidx18 = 0;
    CData/*6:0*/ __Vtableidx19;
    __Vtableidx19 = 0;
    QData/*56:0*/ __VdlyVal__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyVal__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlyDim0__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    QData/*56:0*/ __VdlyVal__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyVal__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlyDim0__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    QData/*56:0*/ __VdlyVal__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyVal__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlyDim0__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    QData/*56:0*/ __VdlyVal__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyVal__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlyDim0__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    QData/*56:0*/ __VdlyVal__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyVal__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlyDim0__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    QData/*56:0*/ __VdlyVal__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyVal__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlyDim0__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    QData/*56:0*/ __VdlyVal__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyVal__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlyDim0__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    QData/*56:0*/ __VdlyVal__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyVal__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlyDim0__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    // Body
    __VdlySet__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    __VdlySet__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    __VdlySet__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    __VdlySet__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    __VdlySet__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    __VdlySet__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    __VdlySet__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    __VdlySet__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf___05Fwdata
            [0U];
        __VdlyDim0__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    if (vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf___05Fwdata
            [0U];
        __VdlyDim0__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    if (vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf___05Fwdata
            [0U];
        __VdlyDim0__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    if (vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Fwdata
            [0U];
        __VdlyDim0__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    if (vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Fwdata
            [0U];
        __VdlyDim0__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    if (vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fwdata
            [0U];
        __VdlyDim0__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    if (vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fwdata
            [0U];
        __VdlyDim0__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    if (vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fwdata
            [0U];
        __VdlyDim0__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    __Vtableidx19 = (((IData)(vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl__DOT__head) 
                                 << 4U) | ((((IData)(vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl___05Fsend_val) 
                                             & (IData)(vlSelf->__Vcellout__route_units___05F7__recv___05Frdy)) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl___05Fwen) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx19])) {
        vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx19];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx19])) {
        vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx19];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx19])) {
        vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx19];
    }
    __Vtableidx18 = (((IData)(vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl__DOT__head) 
                                 << 4U) | ((((IData)(vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl___05Fsend_val) 
                                             & (IData)(vlSelf->__Vcellout__route_units___05F6__recv___05Frdy)) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl___05Fwen) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx18])) {
        vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx18];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx18])) {
        vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx18];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx18])) {
        vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx18];
    }
    __Vtableidx17 = (((IData)(vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl__DOT__head) 
                                 << 4U) | ((((IData)(vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl___05Fsend_val) 
                                             & (IData)(vlSelf->__Vcellout__route_units___05F5__recv___05Frdy)) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl___05Fwen) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx17])) {
        vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx17];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx17])) {
        vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx17];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx17])) {
        vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx17];
    }
    __Vtableidx16 = (((IData)(vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl__DOT__head) 
                                 << 4U) | ((((IData)(vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl___05Fsend_val) 
                                             & (IData)(vlSelf->__Vcellout__route_units___05F4__recv___05Frdy)) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl___05Fwen) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx16])) {
        vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx16];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx16])) {
        vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx16];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx16])) {
        vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx16];
    }
    __Vtableidx15 = (((IData)(vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl__DOT__head) 
                                 << 4U) | ((((IData)(vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl___05Fsend_val) 
                                             & (IData)(vlSelf->__Vcellout__route_units___05F3__recv___05Frdy)) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl___05Fwen) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx15])) {
        vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx15];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx15])) {
        vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx15];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx15])) {
        vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx15];
    }
    __Vtableidx14 = (((IData)(vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl__DOT__head) 
                                 << 4U) | ((((IData)(vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl___05Fsend_val) 
                                             & (IData)(vlSelf->__Vcellout__route_units___05F2__recv___05Frdy)) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl___05Fwen) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx14])) {
        vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx14];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx14])) {
        vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx14];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx14])) {
        vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx14];
    }
    __Vtableidx13 = (((IData)(vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl__DOT__head) 
                                 << 4U) | ((((IData)(vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl___05Fsend_val) 
                                             & (IData)(vlSelf->__Vcellout__route_units___05F1__recv___05Frdy)) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl___05Fwen) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx13])) {
        vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx13];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx13])) {
        vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx13];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx13])) {
        vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx13];
    }
    __Vtableidx12 = (((IData)(vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl__DOT__head) 
                                 << 4U) | ((((IData)(vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl___05Fsend_val) 
                                             & (IData)(vlSelf->__Vcellout__route_units___05F0__recv___05Frdy)) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl___05Fwen) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx12])) {
        vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx12];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx12])) {
        vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx12];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx12])) {
        vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx12];
    }
    if (vlSymsp->TOP.cgra_test__DOT__reset) {
        vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fout = 1U;
        vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fout = 1U;
        vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fout = 1U;
    } else {
        if ((0U != (IData)(vlSelf->__PVT__switch_units___05F2__DOT__arbiter___05Fgrants))) {
            vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fout 
                = ((0xfeU & ((IData)(vlSelf->__PVT__switch_units___05F2__DOT__arbiter___05Fgrants) 
                             << 1U)) | (1U & ((IData)(vlSelf->__PVT__switch_units___05F2__DOT__arbiter___05Fgrants) 
                                              >> 7U)));
        }
        if ((0U != (IData)(vlSelf->__PVT__switch_units___05F1__DOT__arbiter___05Fgrants))) {
            vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fout 
                = ((0xfeU & ((IData)(vlSelf->__PVT__switch_units___05F1__DOT__arbiter___05Fgrants) 
                             << 1U)) | (1U & ((IData)(vlSelf->__PVT__switch_units___05F1__DOT__arbiter___05Fgrants) 
                                              >> 7U)));
        }
        if ((0U != (IData)(vlSelf->__PVT__switch_units___05F0__DOT__arbiter___05Fgrants))) {
            vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fout 
                = ((0xfeU & ((IData)(vlSelf->__PVT__switch_units___05F0__DOT__arbiter___05Fgrants) 
                             << 1U)) | (1U & ((IData)(vlSelf->__PVT__switch_units___05F0__DOT__arbiter___05Fgrants) 
                                              >> 7U)));
        }
    }
    if (__VdlySet__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __VdlyVal__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    if (__VdlySet__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __VdlyVal__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    if (__VdlySet__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __VdlyVal__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    if (__VdlySet__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __VdlyVal__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    if (__VdlySet__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __VdlyVal__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    if (__VdlySet__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __VdlyVal__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    if (__VdlySet__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __VdlyVal__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    if (__VdlySet__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __VdlyVal__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl__DOT__head;
    vlSelf->__PVT__recv___05Frdy[7U] = (2U > (IData)(vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl___05Fcount));
    vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl__DOT__head;
    vlSelf->__PVT__recv___05Frdy[6U] = (2U > (IData)(vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl___05Fcount));
    vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl__DOT__head;
    vlSelf->__PVT__recv___05Frdy[5U] = (2U > (IData)(vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl___05Fcount));
    vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl__DOT__head;
    vlSelf->__PVT__recv___05Frdy[4U] = (2U > (IData)(vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl___05Fcount));
    vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl__DOT__head;
    vlSelf->__PVT__recv___05Frdy[3U] = (2U > (IData)(vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl___05Fcount));
    vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl__DOT__head;
    vlSelf->__PVT__recv___05Frdy[2U] = (2U > (IData)(vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl___05Fcount));
    vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl__DOT__head;
    vlSelf->__PVT__recv___05Frdy[1U] = (2U > (IData)(vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl___05Fcount));
    vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl__DOT__head;
    vlSelf->__PVT__recv___05Frdy[0U] = (2U > (IData)(vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl___05Fcount));
    input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 
        = vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf___05Fraddr
        [0U]];
    vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf___05Frdata[0U] 
        = input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 
        = vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf___05Fraddr
        [0U]];
    vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf___05Frdata[0U] 
        = input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 
        = vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf___05Fraddr
        [0U]];
    vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf___05Frdata[0U] 
        = input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 
        = vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Fraddr
        [0U]];
    vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Frdata[0U] 
        = input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 
        = vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Fraddr
        [0U]];
    vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Frdata[0U] 
        = input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 
        = vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fraddr
        [0U]];
    vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Frdata[0U] 
        = input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 
        = vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fraddr
        [0U]];
    vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Frdata[0U] 
        = input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 
        = vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fraddr
        [0U]];
    vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Frdata[0U] 
        = input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__mux___05Fin_[0U] 
        = vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__mux___05Fin_[0U] 
        = vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__mux___05Fin_[0U] 
        = vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__mux___05Fin_[0U] 
        = vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__mux___05Fin_[0U] 
        = vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__mux___05Fin_[0U] 
        = vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__mux___05Fin_[0U] 
        = vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__mux___05Fin_[0U] 
        = vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Frdata
        [0U];
}

VL_INLINE_OPT void Vcgra_test_XbarBypassQueueRTL___05Fde0616c87e19962d___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__data_mem__DOT__read_crossbar__0(Vcgra_test_XbarBypassQueueRTL___05Fde0616c87e19962d* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_XbarBypassQueueRTL___05Fde0616c87e19962d___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__data_mem__DOT__read_crossbar__0\n"); );
    // Init
    QData/*56:0*/ input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 = 0;
    QData/*56:0*/ input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 = 0;
    QData/*56:0*/ input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 = 0;
    QData/*56:0*/ input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 = 0;
    QData/*56:0*/ input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 = 0;
    QData/*56:0*/ input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 = 0;
    QData/*56:0*/ input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 = 0;
    QData/*56:0*/ input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 = 0;
    CData/*6:0*/ __Vtableidx23;
    __Vtableidx23 = 0;
    CData/*6:0*/ __Vtableidx24;
    __Vtableidx24 = 0;
    CData/*6:0*/ __Vtableidx25;
    __Vtableidx25 = 0;
    CData/*6:0*/ __Vtableidx26;
    __Vtableidx26 = 0;
    CData/*6:0*/ __Vtableidx27;
    __Vtableidx27 = 0;
    CData/*6:0*/ __Vtableidx28;
    __Vtableidx28 = 0;
    CData/*6:0*/ __Vtableidx29;
    __Vtableidx29 = 0;
    CData/*6:0*/ __Vtableidx30;
    __Vtableidx30 = 0;
    QData/*56:0*/ __VdlyVal__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyVal__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlyDim0__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    QData/*56:0*/ __VdlyVal__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyVal__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlyDim0__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    QData/*56:0*/ __VdlyVal__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyVal__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlyDim0__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    QData/*56:0*/ __VdlyVal__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyVal__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlyDim0__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    QData/*56:0*/ __VdlyVal__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyVal__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlyDim0__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    QData/*56:0*/ __VdlyVal__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyVal__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlyDim0__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    QData/*56:0*/ __VdlyVal__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyVal__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlyDim0__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    QData/*56:0*/ __VdlyVal__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyVal__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlyDim0__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    // Body
    __VdlySet__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    __VdlySet__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    __VdlySet__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    __VdlySet__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    __VdlySet__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    __VdlySet__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    __VdlySet__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    __VdlySet__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf___05Fwdata
            [0U];
        __VdlyDim0__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    if (vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf___05Fwdata
            [0U];
        __VdlyDim0__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    if (vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf___05Fwdata
            [0U];
        __VdlyDim0__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    if (vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Fwdata
            [0U];
        __VdlyDim0__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    if (vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Fwdata
            [0U];
        __VdlyDim0__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    if (vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fwdata
            [0U];
        __VdlyDim0__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    if (vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fwdata
            [0U];
        __VdlyDim0__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    if (vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fwdata
            [0U];
        __VdlyDim0__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    __Vtableidx30 = (((IData)(vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl__DOT__head) 
                                 << 4U) | ((((IData)(vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl___05Fsend_val) 
                                             & (IData)(vlSelf->__Vcellout__route_units___05F7__recv___05Frdy)) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl___05Fwen) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx30])) {
        vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx30];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx30])) {
        vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx30];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx30])) {
        vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx30];
    }
    __Vtableidx29 = (((IData)(vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl__DOT__head) 
                                 << 4U) | ((((IData)(vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl___05Fsend_val) 
                                             & (IData)(vlSelf->__Vcellout__route_units___05F6__recv___05Frdy)) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl___05Fwen) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx29])) {
        vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx29];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx29])) {
        vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx29];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx29])) {
        vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx29];
    }
    __Vtableidx28 = (((IData)(vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl__DOT__head) 
                                 << 4U) | ((((IData)(vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl___05Fsend_val) 
                                             & (IData)(vlSelf->__Vcellout__route_units___05F5__recv___05Frdy)) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl___05Fwen) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx28])) {
        vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx28];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx28])) {
        vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx28];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx28])) {
        vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx28];
    }
    __Vtableidx27 = (((IData)(vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl__DOT__head) 
                                 << 4U) | ((((IData)(vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl___05Fsend_val) 
                                             & (IData)(vlSelf->__Vcellout__route_units___05F4__recv___05Frdy)) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl___05Fwen) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx27])) {
        vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx27];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx27])) {
        vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx27];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx27])) {
        vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx27];
    }
    __Vtableidx26 = (((IData)(vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl__DOT__head) 
                                 << 4U) | ((((IData)(vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl___05Fsend_val) 
                                             & (IData)(vlSelf->__Vcellout__route_units___05F3__recv___05Frdy)) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl___05Fwen) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx26])) {
        vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx26];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx26])) {
        vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx26];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx26])) {
        vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx26];
    }
    __Vtableidx25 = (((IData)(vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl__DOT__head) 
                                 << 4U) | ((((IData)(vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl___05Fsend_val) 
                                             & (IData)(vlSelf->__Vcellout__route_units___05F2__recv___05Frdy)) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl___05Fwen) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx25])) {
        vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx25];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx25])) {
        vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx25];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx25])) {
        vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx25];
    }
    __Vtableidx24 = (((IData)(vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl__DOT__head) 
                                 << 4U) | ((((IData)(vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl___05Fsend_val) 
                                             & (IData)(vlSelf->__Vcellout__route_units___05F1__recv___05Frdy)) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl___05Fwen) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx24])) {
        vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx24];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx24])) {
        vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx24];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx24])) {
        vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx24];
    }
    __Vtableidx23 = (((IData)(vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl__DOT__head) 
                                 << 4U) | ((((IData)(vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl___05Fsend_val) 
                                             & (IData)(vlSelf->__Vcellout__route_units___05F0__recv___05Frdy)) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl___05Fwen) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx23])) {
        vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx23];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx23])) {
        vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx23];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx23])) {
        vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx23];
    }
    if (vlSymsp->TOP.cgra_test__DOT__reset) {
        vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fout = 1U;
        vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fout = 1U;
        vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fout = 1U;
    } else {
        if ((0U != (IData)(vlSelf->__PVT__switch_units___05F2__DOT__arbiter___05Fgrants))) {
            vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fout 
                = ((0xfeU & ((IData)(vlSelf->__PVT__switch_units___05F2__DOT__arbiter___05Fgrants) 
                             << 1U)) | (1U & ((IData)(vlSelf->__PVT__switch_units___05F2__DOT__arbiter___05Fgrants) 
                                              >> 7U)));
        }
        if ((0U != (IData)(vlSelf->__PVT__switch_units___05F1__DOT__arbiter___05Fgrants))) {
            vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fout 
                = ((0xfeU & ((IData)(vlSelf->__PVT__switch_units___05F1__DOT__arbiter___05Fgrants) 
                             << 1U)) | (1U & ((IData)(vlSelf->__PVT__switch_units___05F1__DOT__arbiter___05Fgrants) 
                                              >> 7U)));
        }
        if ((0U != (IData)(vlSelf->__PVT__switch_units___05F0__DOT__arbiter___05Fgrants))) {
            vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fout 
                = ((0xfeU & ((IData)(vlSelf->__PVT__switch_units___05F0__DOT__arbiter___05Fgrants) 
                             << 1U)) | (1U & ((IData)(vlSelf->__PVT__switch_units___05F0__DOT__arbiter___05Fgrants) 
                                              >> 7U)));
        }
    }
    if (__VdlySet__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __VdlyVal__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    if (__VdlySet__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __VdlyVal__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    if (__VdlySet__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __VdlyVal__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    if (__VdlySet__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __VdlyVal__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    if (__VdlySet__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __VdlyVal__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    if (__VdlySet__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __VdlyVal__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    if (__VdlySet__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __VdlyVal__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    if (__VdlySet__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __VdlyVal__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl__DOT__head;
    vlSelf->__PVT__recv___05Frdy[7U] = (2U > (IData)(vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl___05Fcount));
    vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl__DOT__head;
    vlSelf->__PVT__recv___05Frdy[6U] = (2U > (IData)(vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl___05Fcount));
    vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl__DOT__head;
    vlSelf->__PVT__recv___05Frdy[5U] = (2U > (IData)(vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl___05Fcount));
    vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl__DOT__head;
    vlSelf->__PVT__recv___05Frdy[4U] = (2U > (IData)(vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl___05Fcount));
    vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl__DOT__head;
    vlSelf->__PVT__recv___05Frdy[3U] = (2U > (IData)(vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl___05Fcount));
    vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl__DOT__head;
    vlSelf->__PVT__recv___05Frdy[2U] = (2U > (IData)(vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl___05Fcount));
    vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl__DOT__head;
    vlSelf->__PVT__recv___05Frdy[1U] = (2U > (IData)(vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl___05Fcount));
    vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl__DOT__head;
    vlSelf->__PVT__recv___05Frdy[0U] = (2U > (IData)(vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl___05Fcount));
    input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 
        = vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf___05Fraddr
        [0U]];
    vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf___05Frdata[0U] 
        = input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 
        = vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf___05Fraddr
        [0U]];
    vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf___05Frdata[0U] 
        = input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 
        = vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf___05Fraddr
        [0U]];
    vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf___05Frdata[0U] 
        = input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 
        = vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Fraddr
        [0U]];
    vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Frdata[0U] 
        = input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 
        = vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Fraddr
        [0U]];
    vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Frdata[0U] 
        = input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 
        = vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fraddr
        [0U]];
    vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Frdata[0U] 
        = input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 
        = vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fraddr
        [0U]];
    vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Frdata[0U] 
        = input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 
        = vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fraddr
        [0U]];
    vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Frdata[0U] 
        = input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__mux___05Fin_[0U] 
        = vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__mux___05Fin_[0U] 
        = vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__mux___05Fin_[0U] 
        = vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__mux___05Fin_[0U] 
        = vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__mux___05Fin_[0U] 
        = vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__mux___05Fin_[0U] 
        = vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__mux___05Fin_[0U] 
        = vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__mux___05Fin_[0U] 
        = vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Frdata
        [0U];
}

VL_INLINE_OPT void Vcgra_test_XbarBypassQueueRTL___05Fde0616c87e19962d___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__data_mem__DOT__write_crossbar__0(Vcgra_test_XbarBypassQueueRTL___05Fde0616c87e19962d* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_XbarBypassQueueRTL___05Fde0616c87e19962d___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1__data_mem__DOT__write_crossbar__0\n"); );
    // Init
    QData/*56:0*/ input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 = 0;
    QData/*56:0*/ input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 = 0;
    QData/*56:0*/ input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 = 0;
    QData/*56:0*/ input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 = 0;
    QData/*56:0*/ input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 = 0;
    QData/*56:0*/ input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 = 0;
    QData/*56:0*/ input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 = 0;
    QData/*56:0*/ input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 = 0;
    CData/*6:0*/ __Vtableidx34;
    __Vtableidx34 = 0;
    CData/*6:0*/ __Vtableidx35;
    __Vtableidx35 = 0;
    CData/*6:0*/ __Vtableidx36;
    __Vtableidx36 = 0;
    CData/*6:0*/ __Vtableidx37;
    __Vtableidx37 = 0;
    CData/*6:0*/ __Vtableidx38;
    __Vtableidx38 = 0;
    CData/*6:0*/ __Vtableidx39;
    __Vtableidx39 = 0;
    CData/*6:0*/ __Vtableidx40;
    __Vtableidx40 = 0;
    CData/*6:0*/ __Vtableidx41;
    __Vtableidx41 = 0;
    QData/*56:0*/ __VdlyVal__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyVal__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlyDim0__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    QData/*56:0*/ __VdlyVal__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyVal__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlyDim0__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    QData/*56:0*/ __VdlyVal__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyVal__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlyDim0__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    QData/*56:0*/ __VdlyVal__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyVal__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlyDim0__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    QData/*56:0*/ __VdlyVal__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyVal__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlyDim0__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    QData/*56:0*/ __VdlyVal__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyVal__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlyDim0__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    QData/*56:0*/ __VdlyVal__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyVal__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlyDim0__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    QData/*56:0*/ __VdlyVal__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyVal__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlyDim0__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    // Body
    __VdlySet__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    __VdlySet__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    __VdlySet__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    __VdlySet__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    __VdlySet__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    __VdlySet__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    __VdlySet__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    __VdlySet__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf___05Fwdata
            [0U];
        __VdlyDim0__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    if (vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf___05Fwdata
            [0U];
        __VdlyDim0__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    if (vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf___05Fwdata
            [0U];
        __VdlyDim0__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    if (vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Fwdata
            [0U];
        __VdlyDim0__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    if (vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Fwdata
            [0U];
        __VdlyDim0__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    if (vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fwdata
            [0U];
        __VdlyDim0__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    if (vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fwdata
            [0U];
        __VdlyDim0__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    if (vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fwdata
            [0U];
        __VdlyDim0__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    __Vtableidx41 = (((IData)(vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl__DOT__head) 
                                 << 4U) | ((((IData)(vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl___05Fsend_val) 
                                             & (IData)(vlSelf->__Vcellout__route_units___05F7__recv___05Frdy)) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl___05Fwen) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx41])) {
        vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx41];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx41])) {
        vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx41];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx41])) {
        vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx41];
    }
    __Vtableidx40 = (((IData)(vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl__DOT__head) 
                                 << 4U) | ((((IData)(vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl___05Fsend_val) 
                                             & (IData)(vlSelf->__Vcellout__route_units___05F6__recv___05Frdy)) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl___05Fwen) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx40])) {
        vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx40];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx40])) {
        vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx40];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx40])) {
        vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx40];
    }
    __Vtableidx39 = (((IData)(vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl__DOT__head) 
                                 << 4U) | ((((IData)(vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl___05Fsend_val) 
                                             & (IData)(vlSelf->__Vcellout__route_units___05F5__recv___05Frdy)) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl___05Fwen) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx39])) {
        vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx39];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx39])) {
        vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx39];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx39])) {
        vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx39];
    }
    __Vtableidx38 = (((IData)(vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl__DOT__head) 
                                 << 4U) | ((((IData)(vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl___05Fsend_val) 
                                             & (IData)(vlSelf->__Vcellout__route_units___05F4__recv___05Frdy)) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl___05Fwen) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx38])) {
        vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx38];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx38])) {
        vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx38];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx38])) {
        vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx38];
    }
    __Vtableidx37 = (((IData)(vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl__DOT__head) 
                                 << 4U) | ((((IData)(vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl___05Fsend_val) 
                                             & (IData)(vlSelf->__Vcellout__route_units___05F3__recv___05Frdy)) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl___05Fwen) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx37])) {
        vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx37];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx37])) {
        vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx37];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx37])) {
        vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx37];
    }
    __Vtableidx36 = (((IData)(vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl__DOT__head) 
                                 << 4U) | ((((IData)(vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl___05Fsend_val) 
                                             & (IData)(vlSelf->__Vcellout__route_units___05F2__recv___05Frdy)) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl___05Fwen) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx36])) {
        vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx36];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx36])) {
        vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx36];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx36])) {
        vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx36];
    }
    __Vtableidx35 = (((IData)(vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl__DOT__head) 
                                 << 4U) | ((((IData)(vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl___05Fsend_val) 
                                             & (IData)(vlSelf->__Vcellout__route_units___05F1__recv___05Frdy)) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl___05Fwen) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx35])) {
        vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx35];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx35])) {
        vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx35];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx35])) {
        vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx35];
    }
    __Vtableidx34 = (((IData)(vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl__DOT__head) 
                                 << 4U) | ((((IData)(vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl___05Fsend_val) 
                                             & (IData)(vlSelf->__Vcellout__route_units___05F0__recv___05Frdy)) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl___05Fwen) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx34])) {
        vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx34];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx34])) {
        vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx34];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx34])) {
        vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx34];
    }
    if (vlSymsp->TOP.cgra_test__DOT__reset) {
        vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fout = 1U;
        vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fout = 1U;
        vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fout = 1U;
    } else {
        if ((0U != (IData)(vlSelf->__PVT__switch_units___05F2__DOT__arbiter___05Fgrants))) {
            vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fout 
                = ((0xfeU & ((IData)(vlSelf->__PVT__switch_units___05F2__DOT__arbiter___05Fgrants) 
                             << 1U)) | (1U & ((IData)(vlSelf->__PVT__switch_units___05F2__DOT__arbiter___05Fgrants) 
                                              >> 7U)));
        }
        if ((0U != (IData)(vlSelf->__PVT__switch_units___05F1__DOT__arbiter___05Fgrants))) {
            vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fout 
                = ((0xfeU & ((IData)(vlSelf->__PVT__switch_units___05F1__DOT__arbiter___05Fgrants) 
                             << 1U)) | (1U & ((IData)(vlSelf->__PVT__switch_units___05F1__DOT__arbiter___05Fgrants) 
                                              >> 7U)));
        }
        if ((0U != (IData)(vlSelf->__PVT__switch_units___05F0__DOT__arbiter___05Fgrants))) {
            vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fout 
                = ((0xfeU & ((IData)(vlSelf->__PVT__switch_units___05F0__DOT__arbiter___05Fgrants) 
                             << 1U)) | (1U & ((IData)(vlSelf->__PVT__switch_units___05F0__DOT__arbiter___05Fgrants) 
                                              >> 7U)));
        }
    }
    if (__VdlySet__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __VdlyVal__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    if (__VdlySet__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __VdlyVal__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    if (__VdlySet__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __VdlyVal__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    if (__VdlySet__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __VdlyVal__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    if (__VdlySet__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __VdlyVal__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    if (__VdlySet__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __VdlyVal__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    if (__VdlySet__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __VdlyVal__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    if (__VdlySet__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __VdlyVal__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl__DOT__head;
    vlSelf->__PVT__recv___05Frdy[7U] = (2U > (IData)(vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl___05Fcount));
    vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl__DOT__head;
    vlSelf->__PVT__recv___05Frdy[6U] = (2U > (IData)(vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl___05Fcount));
    vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl__DOT__head;
    vlSelf->__PVT__recv___05Frdy[5U] = (2U > (IData)(vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl___05Fcount));
    vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl__DOT__head;
    vlSelf->__PVT__recv___05Frdy[4U] = (2U > (IData)(vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl___05Fcount));
    vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl__DOT__head;
    vlSelf->__PVT__recv___05Frdy[3U] = (2U > (IData)(vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl___05Fcount));
    vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl__DOT__head;
    vlSelf->__PVT__recv___05Frdy[2U] = (2U > (IData)(vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl___05Fcount));
    vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl__DOT__head;
    vlSelf->__PVT__recv___05Frdy[1U] = (2U > (IData)(vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl___05Fcount));
    vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl__DOT__head;
    vlSelf->__PVT__recv___05Frdy[0U] = (2U > (IData)(vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl___05Fcount));
    input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 
        = vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf___05Fraddr
        [0U]];
    vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf___05Frdata[0U] 
        = input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 
        = vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf___05Fraddr
        [0U]];
    vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf___05Frdata[0U] 
        = input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 
        = vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf___05Fraddr
        [0U]];
    vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf___05Frdata[0U] 
        = input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 
        = vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Fraddr
        [0U]];
    vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Frdata[0U] 
        = input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 
        = vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Fraddr
        [0U]];
    vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Frdata[0U] 
        = input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 
        = vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fraddr
        [0U]];
    vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Frdata[0U] 
        = input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 
        = vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fraddr
        [0U]];
    vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Frdata[0U] 
        = input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 
        = vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fraddr
        [0U]];
    vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Frdata[0U] 
        = input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__mux___05Fin_[0U] 
        = vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__mux___05Fin_[0U] 
        = vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__mux___05Fin_[0U] 
        = vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__mux___05Fin_[0U] 
        = vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__mux___05Fin_[0U] 
        = vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__mux___05Fin_[0U] 
        = vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__mux___05Fin_[0U] 
        = vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__mux___05Fin_[0U] 
        = vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Frdata
        [0U];
}

VL_INLINE_OPT void Vcgra_test_XbarBypassQueueRTL___05Fde0616c87e19962d___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__data_mem__DOT__read_crossbar__0(Vcgra_test_XbarBypassQueueRTL___05Fde0616c87e19962d* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_XbarBypassQueueRTL___05Fde0616c87e19962d___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__data_mem__DOT__read_crossbar__0\n"); );
    // Init
    QData/*56:0*/ input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 = 0;
    QData/*56:0*/ input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 = 0;
    QData/*56:0*/ input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 = 0;
    QData/*56:0*/ input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 = 0;
    QData/*56:0*/ input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 = 0;
    QData/*56:0*/ input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 = 0;
    QData/*56:0*/ input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 = 0;
    QData/*56:0*/ input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 = 0;
    CData/*6:0*/ __Vtableidx45;
    __Vtableidx45 = 0;
    CData/*6:0*/ __Vtableidx46;
    __Vtableidx46 = 0;
    CData/*6:0*/ __Vtableidx47;
    __Vtableidx47 = 0;
    CData/*6:0*/ __Vtableidx48;
    __Vtableidx48 = 0;
    CData/*6:0*/ __Vtableidx49;
    __Vtableidx49 = 0;
    CData/*6:0*/ __Vtableidx50;
    __Vtableidx50 = 0;
    CData/*6:0*/ __Vtableidx51;
    __Vtableidx51 = 0;
    CData/*6:0*/ __Vtableidx52;
    __Vtableidx52 = 0;
    QData/*56:0*/ __VdlyVal__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyVal__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlyDim0__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    QData/*56:0*/ __VdlyVal__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyVal__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlyDim0__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    QData/*56:0*/ __VdlyVal__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyVal__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlyDim0__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    QData/*56:0*/ __VdlyVal__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyVal__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlyDim0__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    QData/*56:0*/ __VdlyVal__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyVal__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlyDim0__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    QData/*56:0*/ __VdlyVal__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyVal__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlyDim0__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    QData/*56:0*/ __VdlyVal__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyVal__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlyDim0__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    QData/*56:0*/ __VdlyVal__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyVal__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlyDim0__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    // Body
    __VdlySet__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    __VdlySet__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    __VdlySet__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    __VdlySet__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    __VdlySet__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    __VdlySet__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    __VdlySet__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    __VdlySet__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf___05Fwdata
            [0U];
        __VdlyDim0__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    if (vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf___05Fwdata
            [0U];
        __VdlyDim0__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    if (vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf___05Fwdata
            [0U];
        __VdlyDim0__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    if (vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Fwdata
            [0U];
        __VdlyDim0__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    if (vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Fwdata
            [0U];
        __VdlyDim0__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    if (vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fwdata
            [0U];
        __VdlyDim0__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    if (vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fwdata
            [0U];
        __VdlyDim0__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    if (vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fwdata
            [0U];
        __VdlyDim0__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    __Vtableidx52 = (((IData)(vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl__DOT__head) 
                                 << 4U) | ((((IData)(vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl___05Fsend_val) 
                                             & (IData)(vlSelf->__Vcellout__route_units___05F7__recv___05Frdy)) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl___05Fwen) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx52])) {
        vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx52];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx52])) {
        vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx52];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx52])) {
        vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx52];
    }
    __Vtableidx51 = (((IData)(vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl__DOT__head) 
                                 << 4U) | ((((IData)(vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl___05Fsend_val) 
                                             & (IData)(vlSelf->__Vcellout__route_units___05F6__recv___05Frdy)) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl___05Fwen) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx51])) {
        vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx51];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx51])) {
        vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx51];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx51])) {
        vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx51];
    }
    __Vtableidx50 = (((IData)(vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl__DOT__head) 
                                 << 4U) | ((((IData)(vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl___05Fsend_val) 
                                             & (IData)(vlSelf->__Vcellout__route_units___05F5__recv___05Frdy)) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl___05Fwen) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx50])) {
        vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx50];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx50])) {
        vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx50];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx50])) {
        vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx50];
    }
    __Vtableidx49 = (((IData)(vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl__DOT__head) 
                                 << 4U) | ((((IData)(vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl___05Fsend_val) 
                                             & (IData)(vlSelf->__Vcellout__route_units___05F4__recv___05Frdy)) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl___05Fwen) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx49])) {
        vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx49];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx49])) {
        vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx49];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx49])) {
        vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx49];
    }
    __Vtableidx48 = (((IData)(vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl__DOT__head) 
                                 << 4U) | ((((IData)(vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl___05Fsend_val) 
                                             & (IData)(vlSelf->__Vcellout__route_units___05F3__recv___05Frdy)) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl___05Fwen) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx48])) {
        vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx48];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx48])) {
        vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx48];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx48])) {
        vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx48];
    }
    __Vtableidx47 = (((IData)(vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl__DOT__head) 
                                 << 4U) | ((((IData)(vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl___05Fsend_val) 
                                             & (IData)(vlSelf->__Vcellout__route_units___05F2__recv___05Frdy)) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl___05Fwen) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx47])) {
        vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx47];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx47])) {
        vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx47];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx47])) {
        vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx47];
    }
    __Vtableidx46 = (((IData)(vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl__DOT__head) 
                                 << 4U) | ((((IData)(vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl___05Fsend_val) 
                                             & (IData)(vlSelf->__Vcellout__route_units___05F1__recv___05Frdy)) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl___05Fwen) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx46])) {
        vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx46];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx46])) {
        vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx46];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx46])) {
        vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx46];
    }
    __Vtableidx45 = (((IData)(vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl__DOT__head) 
                                 << 4U) | ((((IData)(vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl___05Fsend_val) 
                                             & (IData)(vlSelf->__Vcellout__route_units___05F0__recv___05Frdy)) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl___05Fwen) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx45])) {
        vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx45];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx45])) {
        vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx45];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx45])) {
        vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx45];
    }
    if (vlSymsp->TOP.cgra_test__DOT__reset) {
        vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fout = 1U;
        vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fout = 1U;
        vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fout = 1U;
    } else {
        if ((0U != (IData)(vlSelf->__PVT__switch_units___05F2__DOT__arbiter___05Fgrants))) {
            vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fout 
                = ((0xfeU & ((IData)(vlSelf->__PVT__switch_units___05F2__DOT__arbiter___05Fgrants) 
                             << 1U)) | (1U & ((IData)(vlSelf->__PVT__switch_units___05F2__DOT__arbiter___05Fgrants) 
                                              >> 7U)));
        }
        if ((0U != (IData)(vlSelf->__PVT__switch_units___05F1__DOT__arbiter___05Fgrants))) {
            vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fout 
                = ((0xfeU & ((IData)(vlSelf->__PVT__switch_units___05F1__DOT__arbiter___05Fgrants) 
                             << 1U)) | (1U & ((IData)(vlSelf->__PVT__switch_units___05F1__DOT__arbiter___05Fgrants) 
                                              >> 7U)));
        }
        if ((0U != (IData)(vlSelf->__PVT__switch_units___05F0__DOT__arbiter___05Fgrants))) {
            vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fout 
                = ((0xfeU & ((IData)(vlSelf->__PVT__switch_units___05F0__DOT__arbiter___05Fgrants) 
                             << 1U)) | (1U & ((IData)(vlSelf->__PVT__switch_units___05F0__DOT__arbiter___05Fgrants) 
                                              >> 7U)));
        }
    }
    if (__VdlySet__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __VdlyVal__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    if (__VdlySet__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __VdlyVal__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    if (__VdlySet__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __VdlyVal__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    if (__VdlySet__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __VdlyVal__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    if (__VdlySet__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __VdlyVal__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    if (__VdlySet__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __VdlyVal__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    if (__VdlySet__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __VdlyVal__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    if (__VdlySet__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __VdlyVal__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl__DOT__head;
    vlSelf->__PVT__recv___05Frdy[7U] = (2U > (IData)(vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl___05Fcount));
    vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl__DOT__head;
    vlSelf->__PVT__recv___05Frdy[6U] = (2U > (IData)(vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl___05Fcount));
    vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl__DOT__head;
    vlSelf->__PVT__recv___05Frdy[5U] = (2U > (IData)(vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl___05Fcount));
    vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl__DOT__head;
    vlSelf->__PVT__recv___05Frdy[4U] = (2U > (IData)(vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl___05Fcount));
    vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl__DOT__head;
    vlSelf->__PVT__recv___05Frdy[3U] = (2U > (IData)(vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl___05Fcount));
    vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl__DOT__head;
    vlSelf->__PVT__recv___05Frdy[2U] = (2U > (IData)(vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl___05Fcount));
    vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl__DOT__head;
    vlSelf->__PVT__recv___05Frdy[1U] = (2U > (IData)(vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl___05Fcount));
    vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl__DOT__head;
    vlSelf->__PVT__recv___05Frdy[0U] = (2U > (IData)(vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl___05Fcount));
    input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 
        = vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf___05Fraddr
        [0U]];
    vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf___05Frdata[0U] 
        = input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 
        = vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf___05Fraddr
        [0U]];
    vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf___05Frdata[0U] 
        = input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 
        = vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf___05Fraddr
        [0U]];
    vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf___05Frdata[0U] 
        = input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 
        = vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Fraddr
        [0U]];
    vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Frdata[0U] 
        = input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 
        = vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Fraddr
        [0U]];
    vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Frdata[0U] 
        = input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 
        = vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fraddr
        [0U]];
    vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Frdata[0U] 
        = input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 
        = vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fraddr
        [0U]];
    vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Frdata[0U] 
        = input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 
        = vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fraddr
        [0U]];
    vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Frdata[0U] 
        = input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__mux___05Fin_[0U] 
        = vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__mux___05Fin_[0U] 
        = vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__mux___05Fin_[0U] 
        = vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__mux___05Fin_[0U] 
        = vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__mux___05Fin_[0U] 
        = vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__mux___05Fin_[0U] 
        = vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__mux___05Fin_[0U] 
        = vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__mux___05Fin_[0U] 
        = vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Frdata
        [0U];
}

VL_INLINE_OPT void Vcgra_test_XbarBypassQueueRTL___05Fde0616c87e19962d___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__data_mem__DOT__write_crossbar__0(Vcgra_test_XbarBypassQueueRTL___05Fde0616c87e19962d* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_XbarBypassQueueRTL___05Fde0616c87e19962d___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2__data_mem__DOT__write_crossbar__0\n"); );
    // Init
    QData/*56:0*/ input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 = 0;
    QData/*56:0*/ input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 = 0;
    QData/*56:0*/ input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 = 0;
    QData/*56:0*/ input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 = 0;
    QData/*56:0*/ input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 = 0;
    QData/*56:0*/ input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 = 0;
    QData/*56:0*/ input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 = 0;
    QData/*56:0*/ input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 = 0;
    CData/*6:0*/ __Vtableidx56;
    __Vtableidx56 = 0;
    CData/*6:0*/ __Vtableidx57;
    __Vtableidx57 = 0;
    CData/*6:0*/ __Vtableidx58;
    __Vtableidx58 = 0;
    CData/*6:0*/ __Vtableidx59;
    __Vtableidx59 = 0;
    CData/*6:0*/ __Vtableidx60;
    __Vtableidx60 = 0;
    CData/*6:0*/ __Vtableidx61;
    __Vtableidx61 = 0;
    CData/*6:0*/ __Vtableidx62;
    __Vtableidx62 = 0;
    CData/*6:0*/ __Vtableidx63;
    __Vtableidx63 = 0;
    QData/*56:0*/ __VdlyVal__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyVal__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlyDim0__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    QData/*56:0*/ __VdlyVal__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyVal__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlyDim0__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    QData/*56:0*/ __VdlyVal__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyVal__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlyDim0__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    QData/*56:0*/ __VdlyVal__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyVal__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlyDim0__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    QData/*56:0*/ __VdlyVal__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyVal__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlyDim0__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    QData/*56:0*/ __VdlyVal__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyVal__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlyDim0__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    QData/*56:0*/ __VdlyVal__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyVal__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlyDim0__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    QData/*56:0*/ __VdlyVal__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyVal__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlyDim0__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    // Body
    __VdlySet__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    __VdlySet__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    __VdlySet__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    __VdlySet__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    __VdlySet__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    __VdlySet__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    __VdlySet__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    __VdlySet__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf___05Fwdata
            [0U];
        __VdlyDim0__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    if (vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf___05Fwdata
            [0U];
        __VdlyDim0__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    if (vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf___05Fwdata
            [0U];
        __VdlyDim0__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    if (vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Fwdata
            [0U];
        __VdlyDim0__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    if (vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Fwdata
            [0U];
        __VdlyDim0__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    if (vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fwdata
            [0U];
        __VdlyDim0__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    if (vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fwdata
            [0U];
        __VdlyDim0__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    if (vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fwdata
            [0U];
        __VdlyDim0__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    __Vtableidx63 = (((IData)(vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl__DOT__head) 
                                 << 4U) | ((((IData)(vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl___05Fsend_val) 
                                             & (IData)(vlSelf->__Vcellout__route_units___05F7__recv___05Frdy)) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl___05Fwen) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx63])) {
        vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx63];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx63])) {
        vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx63];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx63])) {
        vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx63];
    }
    __Vtableidx62 = (((IData)(vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl__DOT__head) 
                                 << 4U) | ((((IData)(vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl___05Fsend_val) 
                                             & (IData)(vlSelf->__Vcellout__route_units___05F6__recv___05Frdy)) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl___05Fwen) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx62])) {
        vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx62];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx62])) {
        vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx62];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx62])) {
        vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx62];
    }
    __Vtableidx61 = (((IData)(vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl__DOT__head) 
                                 << 4U) | ((((IData)(vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl___05Fsend_val) 
                                             & (IData)(vlSelf->__Vcellout__route_units___05F5__recv___05Frdy)) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl___05Fwen) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx61])) {
        vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx61];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx61])) {
        vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx61];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx61])) {
        vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx61];
    }
    __Vtableidx60 = (((IData)(vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl__DOT__head) 
                                 << 4U) | ((((IData)(vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl___05Fsend_val) 
                                             & (IData)(vlSelf->__Vcellout__route_units___05F4__recv___05Frdy)) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl___05Fwen) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx60])) {
        vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx60];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx60])) {
        vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx60];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx60])) {
        vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx60];
    }
    __Vtableidx59 = (((IData)(vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl__DOT__head) 
                                 << 4U) | ((((IData)(vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl___05Fsend_val) 
                                             & (IData)(vlSelf->__Vcellout__route_units___05F3__recv___05Frdy)) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl___05Fwen) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx59])) {
        vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx59];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx59])) {
        vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx59];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx59])) {
        vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx59];
    }
    __Vtableidx58 = (((IData)(vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl__DOT__head) 
                                 << 4U) | ((((IData)(vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl___05Fsend_val) 
                                             & (IData)(vlSelf->__Vcellout__route_units___05F2__recv___05Frdy)) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl___05Fwen) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx58])) {
        vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx58];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx58])) {
        vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx58];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx58])) {
        vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx58];
    }
    __Vtableidx57 = (((IData)(vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl__DOT__head) 
                                 << 4U) | ((((IData)(vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl___05Fsend_val) 
                                             & (IData)(vlSelf->__Vcellout__route_units___05F1__recv___05Frdy)) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl___05Fwen) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx57])) {
        vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx57];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx57])) {
        vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx57];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx57])) {
        vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx57];
    }
    __Vtableidx56 = (((IData)(vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl__DOT__head) 
                                 << 4U) | ((((IData)(vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl___05Fsend_val) 
                                             & (IData)(vlSelf->__Vcellout__route_units___05F0__recv___05Frdy)) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl___05Fwen) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx56])) {
        vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx56];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx56])) {
        vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx56];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx56])) {
        vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx56];
    }
    if (vlSymsp->TOP.cgra_test__DOT__reset) {
        vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fout = 1U;
        vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fout = 1U;
        vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fout = 1U;
    } else {
        if ((0U != (IData)(vlSelf->__PVT__switch_units___05F2__DOT__arbiter___05Fgrants))) {
            vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fout 
                = ((0xfeU & ((IData)(vlSelf->__PVT__switch_units___05F2__DOT__arbiter___05Fgrants) 
                             << 1U)) | (1U & ((IData)(vlSelf->__PVT__switch_units___05F2__DOT__arbiter___05Fgrants) 
                                              >> 7U)));
        }
        if ((0U != (IData)(vlSelf->__PVT__switch_units___05F1__DOT__arbiter___05Fgrants))) {
            vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fout 
                = ((0xfeU & ((IData)(vlSelf->__PVT__switch_units___05F1__DOT__arbiter___05Fgrants) 
                             << 1U)) | (1U & ((IData)(vlSelf->__PVT__switch_units___05F1__DOT__arbiter___05Fgrants) 
                                              >> 7U)));
        }
        if ((0U != (IData)(vlSelf->__PVT__switch_units___05F0__DOT__arbiter___05Fgrants))) {
            vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fout 
                = ((0xfeU & ((IData)(vlSelf->__PVT__switch_units___05F0__DOT__arbiter___05Fgrants) 
                             << 1U)) | (1U & ((IData)(vlSelf->__PVT__switch_units___05F0__DOT__arbiter___05Fgrants) 
                                              >> 7U)));
        }
    }
    if (__VdlySet__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __VdlyVal__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    if (__VdlySet__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __VdlyVal__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    if (__VdlySet__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __VdlyVal__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    if (__VdlySet__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __VdlyVal__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    if (__VdlySet__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __VdlyVal__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    if (__VdlySet__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __VdlyVal__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    if (__VdlySet__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __VdlyVal__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    if (__VdlySet__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __VdlyVal__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl__DOT__head;
    vlSelf->__PVT__recv___05Frdy[7U] = (2U > (IData)(vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl___05Fcount));
    vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl__DOT__head;
    vlSelf->__PVT__recv___05Frdy[6U] = (2U > (IData)(vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl___05Fcount));
    vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl__DOT__head;
    vlSelf->__PVT__recv___05Frdy[5U] = (2U > (IData)(vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl___05Fcount));
    vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl__DOT__head;
    vlSelf->__PVT__recv___05Frdy[4U] = (2U > (IData)(vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl___05Fcount));
    vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl__DOT__head;
    vlSelf->__PVT__recv___05Frdy[3U] = (2U > (IData)(vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl___05Fcount));
    vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl__DOT__head;
    vlSelf->__PVT__recv___05Frdy[2U] = (2U > (IData)(vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl___05Fcount));
    vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl__DOT__head;
    vlSelf->__PVT__recv___05Frdy[1U] = (2U > (IData)(vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl___05Fcount));
    vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl__DOT__head;
    vlSelf->__PVT__recv___05Frdy[0U] = (2U > (IData)(vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl___05Fcount));
    input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 
        = vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf___05Fraddr
        [0U]];
    vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf___05Frdata[0U] 
        = input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 
        = vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf___05Fraddr
        [0U]];
    vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf___05Frdata[0U] 
        = input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 
        = vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf___05Fraddr
        [0U]];
    vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf___05Frdata[0U] 
        = input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 
        = vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Fraddr
        [0U]];
    vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Frdata[0U] 
        = input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 
        = vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Fraddr
        [0U]];
    vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Frdata[0U] 
        = input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 
        = vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fraddr
        [0U]];
    vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Frdata[0U] 
        = input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 
        = vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fraddr
        [0U]];
    vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Frdata[0U] 
        = input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 
        = vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fraddr
        [0U]];
    vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Frdata[0U] 
        = input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__mux___05Fin_[0U] 
        = vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__mux___05Fin_[0U] 
        = vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__mux___05Fin_[0U] 
        = vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__mux___05Fin_[0U] 
        = vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__mux___05Fin_[0U] 
        = vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__mux___05Fin_[0U] 
        = vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__mux___05Fin_[0U] 
        = vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__mux___05Fin_[0U] 
        = vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Frdata
        [0U];
}

VL_INLINE_OPT void Vcgra_test_XbarBypassQueueRTL___05Fde0616c87e19962d___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__data_mem__DOT__read_crossbar__0(Vcgra_test_XbarBypassQueueRTL___05Fde0616c87e19962d* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_XbarBypassQueueRTL___05Fde0616c87e19962d___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__data_mem__DOT__read_crossbar__0\n"); );
    // Init
    QData/*56:0*/ input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 = 0;
    QData/*56:0*/ input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 = 0;
    QData/*56:0*/ input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 = 0;
    QData/*56:0*/ input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 = 0;
    QData/*56:0*/ input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 = 0;
    QData/*56:0*/ input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 = 0;
    QData/*56:0*/ input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 = 0;
    QData/*56:0*/ input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 = 0;
    CData/*6:0*/ __Vtableidx67;
    __Vtableidx67 = 0;
    CData/*6:0*/ __Vtableidx68;
    __Vtableidx68 = 0;
    CData/*6:0*/ __Vtableidx69;
    __Vtableidx69 = 0;
    CData/*6:0*/ __Vtableidx70;
    __Vtableidx70 = 0;
    CData/*6:0*/ __Vtableidx71;
    __Vtableidx71 = 0;
    CData/*6:0*/ __Vtableidx72;
    __Vtableidx72 = 0;
    CData/*6:0*/ __Vtableidx73;
    __Vtableidx73 = 0;
    CData/*6:0*/ __Vtableidx74;
    __Vtableidx74 = 0;
    QData/*56:0*/ __VdlyVal__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyVal__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlyDim0__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    QData/*56:0*/ __VdlyVal__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyVal__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlyDim0__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    QData/*56:0*/ __VdlyVal__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyVal__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlyDim0__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    QData/*56:0*/ __VdlyVal__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyVal__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlyDim0__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    QData/*56:0*/ __VdlyVal__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyVal__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlyDim0__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    QData/*56:0*/ __VdlyVal__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyVal__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlyDim0__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    QData/*56:0*/ __VdlyVal__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyVal__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlyDim0__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    QData/*56:0*/ __VdlyVal__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyVal__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlyDim0__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    // Body
    __VdlySet__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    __VdlySet__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    __VdlySet__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    __VdlySet__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    __VdlySet__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    __VdlySet__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    __VdlySet__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    __VdlySet__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf___05Fwdata
            [0U];
        __VdlyDim0__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    if (vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf___05Fwdata
            [0U];
        __VdlyDim0__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    if (vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf___05Fwdata
            [0U];
        __VdlyDim0__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    if (vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Fwdata
            [0U];
        __VdlyDim0__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    if (vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Fwdata
            [0U];
        __VdlyDim0__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    if (vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fwdata
            [0U];
        __VdlyDim0__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    if (vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fwdata
            [0U];
        __VdlyDim0__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    if (vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fwdata
            [0U];
        __VdlyDim0__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    __Vtableidx74 = (((IData)(vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl__DOT__head) 
                                 << 4U) | ((((IData)(vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl___05Fsend_val) 
                                             & (IData)(vlSelf->__Vcellout__route_units___05F7__recv___05Frdy)) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl___05Fwen) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx74])) {
        vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx74];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx74])) {
        vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx74];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx74])) {
        vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx74];
    }
    __Vtableidx73 = (((IData)(vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl__DOT__head) 
                                 << 4U) | ((((IData)(vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl___05Fsend_val) 
                                             & (IData)(vlSelf->__Vcellout__route_units___05F6__recv___05Frdy)) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl___05Fwen) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx73])) {
        vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx73];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx73])) {
        vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx73];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx73])) {
        vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx73];
    }
    __Vtableidx72 = (((IData)(vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl__DOT__head) 
                                 << 4U) | ((((IData)(vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl___05Fsend_val) 
                                             & (IData)(vlSelf->__Vcellout__route_units___05F5__recv___05Frdy)) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl___05Fwen) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx72])) {
        vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx72];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx72])) {
        vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx72];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx72])) {
        vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx72];
    }
    __Vtableidx71 = (((IData)(vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl__DOT__head) 
                                 << 4U) | ((((IData)(vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl___05Fsend_val) 
                                             & (IData)(vlSelf->__Vcellout__route_units___05F4__recv___05Frdy)) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl___05Fwen) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx71])) {
        vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx71];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx71])) {
        vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx71];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx71])) {
        vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx71];
    }
    __Vtableidx70 = (((IData)(vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl__DOT__head) 
                                 << 4U) | ((((IData)(vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl___05Fsend_val) 
                                             & (IData)(vlSelf->__Vcellout__route_units___05F3__recv___05Frdy)) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl___05Fwen) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx70])) {
        vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx70];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx70])) {
        vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx70];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx70])) {
        vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx70];
    }
    __Vtableidx69 = (((IData)(vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl__DOT__head) 
                                 << 4U) | ((((IData)(vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl___05Fsend_val) 
                                             & (IData)(vlSelf->__Vcellout__route_units___05F2__recv___05Frdy)) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl___05Fwen) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx69])) {
        vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx69];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx69])) {
        vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx69];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx69])) {
        vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx69];
    }
    __Vtableidx68 = (((IData)(vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl__DOT__head) 
                                 << 4U) | ((((IData)(vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl___05Fsend_val) 
                                             & (IData)(vlSelf->__Vcellout__route_units___05F1__recv___05Frdy)) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl___05Fwen) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx68])) {
        vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx68];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx68])) {
        vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx68];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx68])) {
        vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx68];
    }
    __Vtableidx67 = (((IData)(vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl__DOT__head) 
                                 << 4U) | ((((IData)(vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl___05Fsend_val) 
                                             & (IData)(vlSelf->__Vcellout__route_units___05F0__recv___05Frdy)) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl___05Fwen) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx67])) {
        vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx67];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx67])) {
        vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx67];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx67])) {
        vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx67];
    }
    if (vlSymsp->TOP.cgra_test__DOT__reset) {
        vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fout = 1U;
        vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fout = 1U;
        vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fout = 1U;
    } else {
        if ((0U != (IData)(vlSelf->__PVT__switch_units___05F2__DOT__arbiter___05Fgrants))) {
            vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fout 
                = ((0xfeU & ((IData)(vlSelf->__PVT__switch_units___05F2__DOT__arbiter___05Fgrants) 
                             << 1U)) | (1U & ((IData)(vlSelf->__PVT__switch_units___05F2__DOT__arbiter___05Fgrants) 
                                              >> 7U)));
        }
        if ((0U != (IData)(vlSelf->__PVT__switch_units___05F1__DOT__arbiter___05Fgrants))) {
            vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fout 
                = ((0xfeU & ((IData)(vlSelf->__PVT__switch_units___05F1__DOT__arbiter___05Fgrants) 
                             << 1U)) | (1U & ((IData)(vlSelf->__PVT__switch_units___05F1__DOT__arbiter___05Fgrants) 
                                              >> 7U)));
        }
        if ((0U != (IData)(vlSelf->__PVT__switch_units___05F0__DOT__arbiter___05Fgrants))) {
            vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fout 
                = ((0xfeU & ((IData)(vlSelf->__PVT__switch_units___05F0__DOT__arbiter___05Fgrants) 
                             << 1U)) | (1U & ((IData)(vlSelf->__PVT__switch_units___05F0__DOT__arbiter___05Fgrants) 
                                              >> 7U)));
        }
    }
    if (__VdlySet__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __VdlyVal__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    if (__VdlySet__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __VdlyVal__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    if (__VdlySet__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __VdlyVal__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    if (__VdlySet__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __VdlyVal__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    if (__VdlySet__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __VdlyVal__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    if (__VdlySet__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __VdlyVal__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    if (__VdlySet__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __VdlyVal__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    if (__VdlySet__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __VdlyVal__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl__DOT__head;
    vlSelf->__PVT__recv___05Frdy[7U] = (2U > (IData)(vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl___05Fcount));
    vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl__DOT__head;
    vlSelf->__PVT__recv___05Frdy[6U] = (2U > (IData)(vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl___05Fcount));
    vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl__DOT__head;
    vlSelf->__PVT__recv___05Frdy[5U] = (2U > (IData)(vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl___05Fcount));
    vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl__DOT__head;
    vlSelf->__PVT__recv___05Frdy[4U] = (2U > (IData)(vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl___05Fcount));
    vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl__DOT__head;
    vlSelf->__PVT__recv___05Frdy[3U] = (2U > (IData)(vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl___05Fcount));
    vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl__DOT__head;
    vlSelf->__PVT__recv___05Frdy[2U] = (2U > (IData)(vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl___05Fcount));
    vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl__DOT__head;
    vlSelf->__PVT__recv___05Frdy[1U] = (2U > (IData)(vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl___05Fcount));
    vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl__DOT__head;
    vlSelf->__PVT__recv___05Frdy[0U] = (2U > (IData)(vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl___05Fcount));
    input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 
        = vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf___05Fraddr
        [0U]];
    vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf___05Frdata[0U] 
        = input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 
        = vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf___05Fraddr
        [0U]];
    vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf___05Frdata[0U] 
        = input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 
        = vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf___05Fraddr
        [0U]];
    vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf___05Frdata[0U] 
        = input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 
        = vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Fraddr
        [0U]];
    vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Frdata[0U] 
        = input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 
        = vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Fraddr
        [0U]];
    vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Frdata[0U] 
        = input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 
        = vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fraddr
        [0U]];
    vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Frdata[0U] 
        = input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 
        = vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fraddr
        [0U]];
    vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Frdata[0U] 
        = input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 
        = vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fraddr
        [0U]];
    vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Frdata[0U] 
        = input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__mux___05Fin_[0U] 
        = vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__mux___05Fin_[0U] 
        = vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__mux___05Fin_[0U] 
        = vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__mux___05Fin_[0U] 
        = vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__mux___05Fin_[0U] 
        = vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__mux___05Fin_[0U] 
        = vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__mux___05Fin_[0U] 
        = vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__mux___05Fin_[0U] 
        = vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Frdata
        [0U];
}

VL_INLINE_OPT void Vcgra_test_XbarBypassQueueRTL___05Fde0616c87e19962d___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__data_mem__DOT__write_crossbar__0(Vcgra_test_XbarBypassQueueRTL___05Fde0616c87e19962d* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcgra_test_XbarBypassQueueRTL___05Fde0616c87e19962d___nba_sequent__TOP__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3__data_mem__DOT__write_crossbar__0\n"); );
    // Init
    QData/*56:0*/ input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 = 0;
    QData/*56:0*/ input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 = 0;
    QData/*56:0*/ input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 = 0;
    QData/*56:0*/ input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 = 0;
    QData/*56:0*/ input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 = 0;
    QData/*56:0*/ input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 = 0;
    QData/*56:0*/ input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 = 0;
    QData/*56:0*/ input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 = 0;
    CData/*6:0*/ __Vtableidx78;
    __Vtableidx78 = 0;
    CData/*6:0*/ __Vtableidx79;
    __Vtableidx79 = 0;
    CData/*6:0*/ __Vtableidx80;
    __Vtableidx80 = 0;
    CData/*6:0*/ __Vtableidx81;
    __Vtableidx81 = 0;
    CData/*6:0*/ __Vtableidx82;
    __Vtableidx82 = 0;
    CData/*6:0*/ __Vtableidx83;
    __Vtableidx83 = 0;
    CData/*6:0*/ __Vtableidx84;
    __Vtableidx84 = 0;
    CData/*6:0*/ __Vtableidx85;
    __Vtableidx85 = 0;
    QData/*56:0*/ __VdlyVal__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyVal__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlyDim0__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    QData/*56:0*/ __VdlyVal__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyVal__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlyDim0__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    QData/*56:0*/ __VdlyVal__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyVal__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlyDim0__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    QData/*56:0*/ __VdlyVal__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyVal__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlyDim0__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    QData/*56:0*/ __VdlyVal__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyVal__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlyDim0__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    QData/*56:0*/ __VdlyVal__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyVal__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlyDim0__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    QData/*56:0*/ __VdlyVal__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyVal__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlyDim0__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    QData/*56:0*/ __VdlyVal__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyVal__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlyDim0__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlyDim0__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    __VdlySet__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0;
    // Body
    __VdlySet__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    __VdlySet__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    __VdlySet__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    __VdlySet__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    __VdlySet__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    __VdlySet__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    __VdlySet__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    __VdlySet__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf___05Fwdata
            [0U];
        __VdlyDim0__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    if (vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf___05Fwdata
            [0U];
        __VdlyDim0__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    if (vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf___05Fwdata
            [0U];
        __VdlyDim0__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    if (vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Fwdata
            [0U];
        __VdlyDim0__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    if (vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Fwdata
            [0U];
        __VdlyDim0__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    if (vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fwdata
            [0U];
        __VdlyDim0__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    if (vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fwdata
            [0U];
        __VdlyDim0__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    if (vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fwen
        [0U]) {
        __VdlyVal__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fwdata
            [0U];
        __VdlyDim0__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr
            [0U];
        __VdlySet__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
    }
    __Vtableidx85 = (((IData)(vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl__DOT__head) 
                                 << 4U) | ((((IData)(vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl___05Fsend_val) 
                                             & (IData)(vlSelf->__Vcellout__route_units___05F7__recv___05Frdy)) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl___05Fwen) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx85])) {
        vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx85];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx85])) {
        vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx85];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx85])) {
        vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx85];
    }
    __Vtableidx84 = (((IData)(vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl__DOT__head) 
                                 << 4U) | ((((IData)(vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl___05Fsend_val) 
                                             & (IData)(vlSelf->__Vcellout__route_units___05F6__recv___05Frdy)) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl___05Fwen) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx84])) {
        vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx84];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx84])) {
        vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx84];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx84])) {
        vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx84];
    }
    __Vtableidx83 = (((IData)(vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl__DOT__head) 
                                 << 4U) | ((((IData)(vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl___05Fsend_val) 
                                             & (IData)(vlSelf->__Vcellout__route_units___05F5__recv___05Frdy)) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl___05Fwen) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx83])) {
        vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx83];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx83])) {
        vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx83];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx83])) {
        vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx83];
    }
    __Vtableidx82 = (((IData)(vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl__DOT__head) 
                                 << 4U) | ((((IData)(vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl___05Fsend_val) 
                                             & (IData)(vlSelf->__Vcellout__route_units___05F4__recv___05Frdy)) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl___05Fwen) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx82])) {
        vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx82];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx82])) {
        vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx82];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx82])) {
        vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx82];
    }
    __Vtableidx81 = (((IData)(vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl__DOT__head) 
                                 << 4U) | ((((IData)(vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl___05Fsend_val) 
                                             & (IData)(vlSelf->__Vcellout__route_units___05F3__recv___05Frdy)) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl___05Fwen) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx81])) {
        vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx81];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx81])) {
        vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx81];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx81])) {
        vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx81];
    }
    __Vtableidx80 = (((IData)(vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl__DOT__head) 
                                 << 4U) | ((((IData)(vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl___05Fsend_val) 
                                             & (IData)(vlSelf->__Vcellout__route_units___05F2__recv___05Frdy)) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl___05Fwen) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx80])) {
        vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx80];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx80])) {
        vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx80];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx80])) {
        vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx80];
    }
    __Vtableidx79 = (((IData)(vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl__DOT__head) 
                                 << 4U) | ((((IData)(vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl___05Fsend_val) 
                                             & (IData)(vlSelf->__Vcellout__route_units___05F1__recv___05Frdy)) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl___05Fwen) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx79])) {
        vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx79];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx79])) {
        vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx79];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx79])) {
        vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx79];
    }
    __Vtableidx78 = (((IData)(vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl__DOT__head) 
                                 << 4U) | ((((IData)(vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl___05Fsend_val) 
                                             & (IData)(vlSelf->__Vcellout__route_units___05F0__recv___05Frdy)) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl___05Fwen) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.cgra_test__DOT__reset))))));
    if ((1U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx78])) {
        vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl__DOT__head 
            = Vcgra_test__ConstPool__TABLE_h3c631caf_0
            [__Vtableidx78];
    }
    if ((2U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx78])) {
        vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl__DOT__tail 
            = Vcgra_test__ConstPool__TABLE_hfd7f8679_0
            [__Vtableidx78];
    }
    if ((4U & Vcgra_test__ConstPool__TABLE_h0ff887fa_0
         [__Vtableidx78])) {
        vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl___05Fcount 
            = Vcgra_test__ConstPool__TABLE_h7d6d9230_0
            [__Vtableidx78];
    }
    if (vlSymsp->TOP.cgra_test__DOT__reset) {
        vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fout = 1U;
        vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fout = 1U;
        vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fout = 1U;
    } else {
        if ((0U != (IData)(vlSelf->__PVT__switch_units___05F2__DOT__arbiter___05Fgrants))) {
            vlSelf->__PVT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fout 
                = ((0xfeU & ((IData)(vlSelf->__PVT__switch_units___05F2__DOT__arbiter___05Fgrants) 
                             << 1U)) | (1U & ((IData)(vlSelf->__PVT__switch_units___05F2__DOT__arbiter___05Fgrants) 
                                              >> 7U)));
        }
        if ((0U != (IData)(vlSelf->__PVT__switch_units___05F1__DOT__arbiter___05Fgrants))) {
            vlSelf->__PVT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fout 
                = ((0xfeU & ((IData)(vlSelf->__PVT__switch_units___05F1__DOT__arbiter___05Fgrants) 
                             << 1U)) | (1U & ((IData)(vlSelf->__PVT__switch_units___05F1__DOT__arbiter___05Fgrants) 
                                              >> 7U)));
        }
        if ((0U != (IData)(vlSelf->__PVT__switch_units___05F0__DOT__arbiter___05Fgrants))) {
            vlSelf->__PVT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fout 
                = ((0xfeU & ((IData)(vlSelf->__PVT__switch_units___05F0__DOT__arbiter___05Fgrants) 
                             << 1U)) | (1U & ((IData)(vlSelf->__PVT__switch_units___05F0__DOT__arbiter___05Fgrants) 
                                              >> 7U)));
        }
    }
    if (__VdlySet__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __VdlyVal__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    if (__VdlySet__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __VdlyVal__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    if (__VdlySet__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __VdlyVal__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    if (__VdlySet__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __VdlyVal__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    if (__VdlySet__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __VdlyVal__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    if (__VdlySet__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __VdlyVal__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    if (__VdlySet__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __VdlyVal__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    if (__VdlySet__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs[__VdlyDim0__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __VdlyVal__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl__DOT__head;
    vlSelf->__PVT__recv___05Frdy[7U] = (2U > (IData)(vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__ctrl___05Fcount));
    vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl__DOT__head;
    vlSelf->__PVT__recv___05Frdy[6U] = (2U > (IData)(vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__ctrl___05Fcount));
    vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl__DOT__head;
    vlSelf->__PVT__recv___05Frdy[5U] = (2U > (IData)(vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__ctrl___05Fcount));
    vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl__DOT__head;
    vlSelf->__PVT__recv___05Frdy[4U] = (2U > (IData)(vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__ctrl___05Fcount));
    vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl__DOT__head;
    vlSelf->__PVT__recv___05Frdy[3U] = (2U > (IData)(vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__ctrl___05Fcount));
    vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl__DOT__head;
    vlSelf->__PVT__recv___05Frdy[2U] = (2U > (IData)(vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__ctrl___05Fcount));
    vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl__DOT__head;
    vlSelf->__PVT__recv___05Frdy[1U] = (2U > (IData)(vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__ctrl___05Fcount));
    vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl__DOT__tail;
    vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl__DOT__head;
    vlSelf->__PVT__recv___05Frdy[0U] = (2U > (IData)(vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__ctrl___05Fcount));
    input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 
        = vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf___05Fraddr
        [0U]];
    vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf___05Frdata[0U] 
        = input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 
        = vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf___05Fraddr
        [0U]];
    vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf___05Frdata[0U] 
        = input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 
        = vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf___05Fraddr
        [0U]];
    vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf___05Frdata[0U] 
        = input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 
        = vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Fraddr
        [0U]];
    vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Frdata[0U] 
        = input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 
        = vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Fraddr
        [0U]];
    vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Frdata[0U] 
        = input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 
        = vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fraddr
        [0U]];
    vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Frdata[0U] 
        = input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 
        = vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fraddr
        [0U]];
    vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Frdata[0U] 
        = input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0 
        = vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs
        [vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fraddr
        [0U]];
    vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Frdata[0U] 
        = input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT____Vlvbound_h03b53e54__0;
    vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__mux___05Fin_[0U] 
        = vlSelf->__PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__mux___05Fin_[0U] 
        = vlSelf->__PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__mux___05Fin_[0U] 
        = vlSelf->__PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__mux___05Fin_[0U] 
        = vlSelf->__PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__mux___05Fin_[0U] 
        = vlSelf->__PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__mux___05Fin_[0U] 
        = vlSelf->__PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__mux___05Fin_[0U] 
        = vlSelf->__PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__mux___05Fin_[0U] 
        = vlSelf->__PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Frdata
        [0U];
}
