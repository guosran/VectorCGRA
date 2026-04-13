// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcgra_test.h for the primary calling header

#ifndef VERILATED_VCGRA_TEST_SWITCHUNITRTL___05F0F275C3CAADC86AB_H_
#define VERILATED_VCGRA_TEST_SWITCHUNITRTL___05F0F275C3CAADC86AB_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vcgra_test__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcgra_test_SwitchUnitRTL___05F0f275c3caadc86ab final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__reset,0,0);
    VL_IN8(__PVT__send___05Frdy,0,0);
    VL_OUT8(__PVT__send___05Fval,0,0);
    CData/*2:0*/ __PVT__arbiter___05Fgrants;
    CData/*1:0*/ __PVT__encoder___05Fout;
    CData/*5:0*/ __PVT__arbiter__DOT__grants_int;
    CData/*6:0*/ __PVT__arbiter__DOT__kills;
    CData/*2:0*/ __PVT__arbiter__DOT__priority_reg___05Fout;
    CData/*0:0*/ arbiter__DOT____Vlvbound_hed2759a5__0;
    CData/*0:0*/ arbiter__DOT____Vlvbound_hed2759a5__1;
    CData/*0:0*/ arbiter__DOT____Vlvbound_hb84c9caf__0;
    CData/*0:0*/ arbiter__DOT____Vlvbound_hb84c9caf__1;
    VL_OUT64(__PVT__send___05Fmsg,56,0);
    VL_IN64(__PVT__recv___05Fmsg[3],56,0);
    VL_OUT8(__PVT__recv___05Frdy[3],0,0);
    VL_IN8(__PVT__recv___05Fval[3],0,0);
    VlUnpacked<QData/*56:0*/, 3> __PVT__mux___05Fin_;

    // INTERNAL VARIABLES
    Vcgra_test__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcgra_test_SwitchUnitRTL___05F0f275c3caadc86ab(Vcgra_test__Syms* symsp, const char* v__name);
    ~Vcgra_test_SwitchUnitRTL___05F0f275c3caadc86ab();
    VL_UNCOPYABLE(Vcgra_test_SwitchUnitRTL___05F0f275c3caadc86ab);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
