// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcgra_test.h for the primary calling header

#ifndef VERILATED_VCGRA_TEST_CREDITRECVRTL2SENDRTL___05F659FC1621C868978_H_
#define VERILATED_VCGRA_TEST_CREDITRECVRTL2SENDRTL___05F659FC1621C868978_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vcgra_test__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcgra_test_CreditRecvRTL2SendRTL___05F659fc1621c868978 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__reset,0,0);
    VL_IN8(__PVT__recv___05Fen,0,0);
    VL_IN8(__PVT__send___05Frdy,0,0);
    VL_OUT8(__PVT__send___05Fval,0,0);
    CData/*1:0*/ __PVT__arbiter___05Fgrants;
    CData/*0:0*/ __Vcellout__buffers___05F0__send___05Fval;
    CData/*0:0*/ __Vcellout__buffers___05F1__send___05Fval;
    CData/*0:0*/ __PVT__encoder___05Fout;
    CData/*3:0*/ __PVT__arbiter__DOT__grants_int;
    CData/*4:0*/ __PVT__arbiter__DOT__kills;
    CData/*1:0*/ __PVT__arbiter__DOT__priority_reg___05Fout;
    CData/*0:0*/ arbiter__DOT____Vlvbound_h1d40eedc__0;
    CData/*0:0*/ arbiter__DOT____Vlvbound_h1d40eedc__1;
    CData/*1:0*/ __PVT__buffers___05F0__DOT__ctrl___05Fcount;
    CData/*0:0*/ __PVT__buffers___05F0__DOT__ctrl___05Fwen;
    CData/*0:0*/ __PVT__buffers___05F0__DOT__ctrl__DOT__head;
    CData/*0:0*/ __PVT__buffers___05F0__DOT__ctrl__DOT__tail;
    CData/*1:0*/ __PVT__buffers___05F1__DOT__ctrl___05Fcount;
    CData/*0:0*/ __PVT__buffers___05F1__DOT__ctrl___05Fwen;
    CData/*0:0*/ __PVT__buffers___05F1__DOT__ctrl__DOT__head;
    CData/*0:0*/ __PVT__buffers___05F1__DOT__ctrl__DOT__tail;
    VL_INW(__PVT__recv___05Fmsg,196,0,7);
    VL_OUTW(__PVT__send___05Fmsg,196,0,7);
    VL_OUT8(__PVT__recv___05Fyum[2],0,0);
    VlUnpacked<CData/*0:0*/, 2> __PVT__buffers___05Frecv___05Fval;
    VlUnpacked<VlWide<7>/*196:0*/, 2> __PVT__buffers___05Fsend___05Fmsg;
    VlUnpacked<CData/*0:0*/, 2> __PVT__buffers___05Fsend___05Frdy;
    VlUnpacked<CData/*0:0*/, 2> __PVT__buffers___05Fsend___05Fval;
    VlUnpacked<VlWide<7>/*196:0*/, 2> __PVT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_;
    VlUnpacked<CData/*0:0*/, 1> __PVT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr;
    VlUnpacked<VlWide<7>/*196:0*/, 1> __PVT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata;
    VlUnpacked<CData/*0:0*/, 1> __PVT__buffers___05F0__DOT__dpath__DOT__rf___05Fwaddr;
    VlUnpacked<VlWide<7>/*196:0*/, 1> __PVT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata;
    VlUnpacked<CData/*0:0*/, 1> __PVT__buffers___05F0__DOT__dpath__DOT__rf___05Fwen;
    VlUnpacked<VlWide<7>/*196:0*/, 2> __PVT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs;
    VlUnpacked<VlWide<7>/*196:0*/, 2> __PVT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_;
    VlUnpacked<CData/*0:0*/, 1> __PVT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr;
    VlUnpacked<VlWide<7>/*196:0*/, 1> __PVT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata;
    VlUnpacked<CData/*0:0*/, 1> __PVT__buffers___05F1__DOT__dpath__DOT__rf___05Fwaddr;
    VlUnpacked<VlWide<7>/*196:0*/, 1> __PVT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata;
    VlUnpacked<CData/*0:0*/, 1> __PVT__buffers___05F1__DOT__dpath__DOT__rf___05Fwen;
    VlUnpacked<VlWide<7>/*196:0*/, 2> __PVT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs;

    // INTERNAL VARIABLES
    Vcgra_test__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcgra_test_CreditRecvRTL2SendRTL___05F659fc1621c868978(Vcgra_test__Syms* symsp, const char* v__name);
    ~Vcgra_test_CreditRecvRTL2SendRTL___05F659fc1621c868978();
    VL_UNCOPYABLE(Vcgra_test_CreditRecvRTL2SendRTL___05F659fc1621c868978);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
