// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcgra_test.h for the primary calling header

#ifndef VERILATED_VCGRA_TEST_CHANNELRTL___05FF70D05B62B8BBE7B_H_
#define VERILATED_VCGRA_TEST_CHANNELRTL___05FF70D05B62B8BBE7B_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vcgra_test__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcgra_test_ChannelRTL___05Ff70d05b62b8bbe7b final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(recv___05Frdy,0,0);
    VL_IN8(recv___05Fval,0,0);
    VL_IN8(send___05Frdy,0,0);
    VL_OUT8(send___05Fval,0,0);
    CData/*1:0*/ __PVT__queues___05F0__DOT__ctrl___05Fcount;
    CData/*0:0*/ __PVT__queues___05F0__DOT__ctrl___05Fwen;
    CData/*0:0*/ __PVT__queues___05F0__DOT__ctrl__DOT__head;
    CData/*0:0*/ __PVT__queues___05F0__DOT__ctrl__DOT__send_xfer;
    CData/*0:0*/ __PVT__queues___05F0__DOT__ctrl__DOT__tail;
    VL_INW(recv___05Fmsg,232,0,8);
    VL_OUTW(send___05Fmsg,232,0,8);
    VlUnpacked<CData/*0:0*/, 1> __PVT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr;
    VlUnpacked<VlWide<8>/*232:0*/, 1> __PVT__queues___05F0__DOT__dpath__DOT__rf___05Frdata;
    VlUnpacked<CData/*0:0*/, 1> __PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr;
    VlUnpacked<VlWide<8>/*232:0*/, 1> __PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwdata;
    VlUnpacked<CData/*0:0*/, 1> __PVT__queues___05F0__DOT__dpath__DOT__rf___05Fwen;
    VlUnpacked<VlWide<8>/*232:0*/, 2> __PVT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs;

    // INTERNAL VARIABLES
    Vcgra_test__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcgra_test_ChannelRTL___05Ff70d05b62b8bbe7b(Vcgra_test__Syms* symsp, const char* v__name);
    ~Vcgra_test_ChannelRTL___05Ff70d05b62b8bbe7b();
    VL_UNCOPYABLE(Vcgra_test_ChannelRTL___05Ff70d05b62b8bbe7b);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
