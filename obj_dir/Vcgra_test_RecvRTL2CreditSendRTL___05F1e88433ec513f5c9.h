// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcgra_test.h for the primary calling header

#ifndef VERILATED_VCGRA_TEST_RECVRTL2CREDITSENDRTL___05F1E88433EC513F5C9_H_
#define VERILATED_VCGRA_TEST_RECVRTL2CREDITSENDRTL___05F1E88433EC513F5C9_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vcgra_test__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcgra_test_RecvRTL2CreditSendRTL___05F1e88433ec513f5c9 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__reset,0,0);
    VL_OUT8(__PVT__recv___05Frdy,0,0);
    VL_IN8(__PVT__recv___05Fval,0,0);
    VL_OUT8(__PVT__send___05Fen,0,0);
    CData/*1:0*/ __Vcellout__credit___05F0__count;
    CData/*1:0*/ __Vcellout__credit___05F1__count;
    VL_INW(__PVT__recv___05Fmsg,196,0,7);
    VL_OUTW(__PVT__send___05Fmsg,196,0,7);
    VL_IN8(__PVT__send___05Fyum[2],0,0);
    VlUnpacked<CData/*1:0*/, 2> __PVT__credit___05Fcount;
    VlUnpacked<CData/*0:0*/, 2> __PVT__credit___05Fdecr;

    // INTERNAL VARIABLES
    Vcgra_test__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcgra_test_RecvRTL2CreditSendRTL___05F1e88433ec513f5c9(Vcgra_test__Syms* symsp, const char* v__name);
    ~Vcgra_test_RecvRTL2CreditSendRTL___05F1e88433ec513f5c9();
    VL_UNCOPYABLE(Vcgra_test_RecvRTL2CreditSendRTL___05F1e88433ec513f5c9);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
