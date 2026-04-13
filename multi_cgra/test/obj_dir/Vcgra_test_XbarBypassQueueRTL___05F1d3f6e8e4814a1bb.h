// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcgra_test.h for the primary calling header

#ifndef VERILATED_VCGRA_TEST_XBARBYPASSQUEUERTL___05F1D3F6E8E4814A1BB_H_
#define VERILATED_VCGRA_TEST_XBARBYPASSQUEUERTL___05F1D3F6E8E4814A1BB_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vcgra_test__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcgra_test_XbarBypassQueueRTL___05F1d3f6e8e4814a1bb final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clk,0,0);
        VL_IN8(__PVT__reset,0,0);
        CData/*0:0*/ __Vcellout__route_units___05F0__recv___05Frdy;
        CData/*0:0*/ __Vcellout__route_units___05F1__recv___05Frdy;
        CData/*0:0*/ __Vcellout__route_units___05F2__recv___05Frdy;
        CData/*0:0*/ __Vcellout__route_units___05F3__recv___05Frdy;
        CData/*0:0*/ __Vcellout__route_units___05F4__recv___05Frdy;
        CData/*0:0*/ __Vcellout__route_units___05F5__recv___05Frdy;
        CData/*0:0*/ __Vcellout__route_units___05F6__recv___05Frdy;
        CData/*0:0*/ __Vcellout__route_units___05F7__recv___05Frdy;
        CData/*1:0*/ __PVT__input_units___05F0__DOT__queue__DOT__ctrl___05Fcount;
        CData/*0:0*/ __PVT__input_units___05F0__DOT__queue__DOT__ctrl___05Fsend_val;
        CData/*0:0*/ __PVT__input_units___05F0__DOT__queue__DOT__ctrl___05Fwen;
        CData/*0:0*/ __PVT__input_units___05F0__DOT__queue__DOT__ctrl__DOT__head;
        CData/*0:0*/ __PVT__input_units___05F0__DOT__queue__DOT__ctrl__DOT__tail;
        CData/*1:0*/ __PVT__input_units___05F1__DOT__queue__DOT__ctrl___05Fcount;
        CData/*0:0*/ __PVT__input_units___05F1__DOT__queue__DOT__ctrl___05Fsend_val;
        CData/*0:0*/ __PVT__input_units___05F1__DOT__queue__DOT__ctrl___05Fwen;
        CData/*0:0*/ __PVT__input_units___05F1__DOT__queue__DOT__ctrl__DOT__head;
        CData/*0:0*/ __PVT__input_units___05F1__DOT__queue__DOT__ctrl__DOT__tail;
        CData/*1:0*/ __PVT__input_units___05F2__DOT__queue__DOT__ctrl___05Fcount;
        CData/*0:0*/ __PVT__input_units___05F2__DOT__queue__DOT__ctrl___05Fsend_val;
        CData/*0:0*/ __PVT__input_units___05F2__DOT__queue__DOT__ctrl___05Fwen;
        CData/*0:0*/ __PVT__input_units___05F2__DOT__queue__DOT__ctrl__DOT__head;
        CData/*0:0*/ __PVT__input_units___05F2__DOT__queue__DOT__ctrl__DOT__tail;
        CData/*1:0*/ __PVT__input_units___05F3__DOT__queue__DOT__ctrl___05Fcount;
        CData/*0:0*/ __PVT__input_units___05F3__DOT__queue__DOT__ctrl___05Fsend_val;
        CData/*0:0*/ __PVT__input_units___05F3__DOT__queue__DOT__ctrl___05Fwen;
        CData/*0:0*/ __PVT__input_units___05F3__DOT__queue__DOT__ctrl__DOT__head;
        CData/*0:0*/ __PVT__input_units___05F3__DOT__queue__DOT__ctrl__DOT__tail;
        CData/*1:0*/ __PVT__input_units___05F4__DOT__queue__DOT__ctrl___05Fcount;
        CData/*0:0*/ __PVT__input_units___05F4__DOT__queue__DOT__ctrl___05Fsend_val;
        CData/*0:0*/ __PVT__input_units___05F4__DOT__queue__DOT__ctrl___05Fwen;
        CData/*0:0*/ __PVT__input_units___05F4__DOT__queue__DOT__ctrl__DOT__head;
        CData/*0:0*/ __PVT__input_units___05F4__DOT__queue__DOT__ctrl__DOT__tail;
        CData/*1:0*/ __PVT__input_units___05F5__DOT__queue__DOT__ctrl___05Fcount;
        CData/*0:0*/ __PVT__input_units___05F5__DOT__queue__DOT__ctrl___05Fsend_val;
        CData/*0:0*/ __PVT__input_units___05F5__DOT__queue__DOT__ctrl___05Fwen;
        CData/*0:0*/ __PVT__input_units___05F5__DOT__queue__DOT__ctrl__DOT__head;
        CData/*0:0*/ __PVT__input_units___05F5__DOT__queue__DOT__ctrl__DOT__tail;
        CData/*1:0*/ __PVT__input_units___05F6__DOT__queue__DOT__ctrl___05Fcount;
        CData/*0:0*/ __PVT__input_units___05F6__DOT__queue__DOT__ctrl___05Fsend_val;
        CData/*0:0*/ __PVT__input_units___05F6__DOT__queue__DOT__ctrl___05Fwen;
        CData/*0:0*/ __PVT__input_units___05F6__DOT__queue__DOT__ctrl__DOT__head;
        CData/*0:0*/ __PVT__input_units___05F6__DOT__queue__DOT__ctrl__DOT__tail;
        CData/*1:0*/ __PVT__input_units___05F7__DOT__queue__DOT__ctrl___05Fcount;
        CData/*0:0*/ __PVT__input_units___05F7__DOT__queue__DOT__ctrl___05Fsend_val;
        CData/*0:0*/ __PVT__input_units___05F7__DOT__queue__DOT__ctrl___05Fwen;
        CData/*0:0*/ __PVT__input_units___05F7__DOT__queue__DOT__ctrl__DOT__head;
        CData/*0:0*/ __PVT__input_units___05F7__DOT__queue__DOT__ctrl__DOT__tail;
        CData/*0:0*/ route_units___05F0__DOT____Vlvbound_h7616ffa4__0;
        CData/*0:0*/ route_units___05F1__DOT____Vlvbound_h7616ffa4__0;
        CData/*0:0*/ route_units___05F2__DOT____Vlvbound_h7616ffa4__0;
        CData/*0:0*/ route_units___05F3__DOT____Vlvbound_h7616ffa4__0;
        CData/*0:0*/ route_units___05F4__DOT____Vlvbound_h7616ffa4__0;
        CData/*0:0*/ route_units___05F5__DOT____Vlvbound_h7616ffa4__0;
        CData/*0:0*/ route_units___05F6__DOT____Vlvbound_h7616ffa4__0;
        CData/*0:0*/ route_units___05F7__DOT____Vlvbound_h7616ffa4__0;
        CData/*7:0*/ __PVT__switch_units___05F0__DOT__arbiter___05Fgrants;
        CData/*2:0*/ __PVT__switch_units___05F0__DOT__encoder___05Fout;
        CData/*7:0*/ __PVT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fout;
        CData/*0:0*/ switch_units___05F0__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0;
        CData/*0:0*/ switch_units___05F0__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1;
        CData/*7:0*/ __PVT__switch_units___05F1__DOT__arbiter___05Fgrants;
    };
    struct {
        CData/*2:0*/ __PVT__switch_units___05F1__DOT__encoder___05Fout;
        CData/*7:0*/ __PVT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fout;
        CData/*0:0*/ switch_units___05F1__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0;
        CData/*0:0*/ switch_units___05F1__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1;
        CData/*7:0*/ __PVT__switch_units___05F2__DOT__arbiter___05Fgrants;
        CData/*2:0*/ __PVT__switch_units___05F2__DOT__encoder___05Fout;
        CData/*7:0*/ __PVT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fout;
        CData/*0:0*/ switch_units___05F2__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__0;
        CData/*0:0*/ switch_units___05F2__DOT__arbiter__DOT____Vlvbound_hfe6afd3b__1;
        SData/*15:0*/ __PVT__switch_units___05F0__DOT__arbiter__DOT__grants_int;
        SData/*15:0*/ __PVT__switch_units___05F1__DOT__arbiter__DOT__grants_int;
        SData/*15:0*/ __PVT__switch_units___05F2__DOT__arbiter__DOT__grants_int;
        IData/*16:0*/ __PVT__switch_units___05F0__DOT__arbiter__DOT__kills;
        IData/*16:0*/ __PVT__switch_units___05F1__DOT__arbiter__DOT__kills;
        IData/*16:0*/ __PVT__switch_units___05F2__DOT__arbiter__DOT__kills;
        VL_INW(__PVT__recv___05Fmsg[8],88,0,3);
        VL_OUT8(__PVT__recv___05Frdy[8],0,0);
        VL_IN8(__PVT__recv___05Fval[8],0,0);
        VL_OUTW(__PVT__send___05Fmsg[3],88,0,3);
        VL_IN8(__PVT__send___05Frdy[3],0,0);
        VL_OUT8(__PVT__send___05Fval[3],0,0);
        VlUnpacked<VlUnpacked<VlWide<3>/*88:0*/, 3>, 8> __PVT__route_units___05Fsend___05Fmsg;
        VlUnpacked<VlUnpacked<CData/*0:0*/, 3>, 8> __PVT__route_units___05Fsend___05Frdy;
        VlUnpacked<VlUnpacked<CData/*0:0*/, 3>, 8> __PVT__route_units___05Fsend___05Fval;
        VlUnpacked<CData/*0:0*/, 3> __Vcellout__route_units___05F0__send___05Fval;
        VlUnpacked<CData/*0:0*/, 3> __Vcellinp__route_units___05F0__send___05Frdy;
        VlUnpacked<VlWide<3>/*88:0*/, 3> __Vcellout__route_units___05F0__send___05Fmsg;
        VlUnpacked<CData/*0:0*/, 3> __Vcellout__route_units___05F1__send___05Fval;
        VlUnpacked<CData/*0:0*/, 3> __Vcellinp__route_units___05F1__send___05Frdy;
        VlUnpacked<VlWide<3>/*88:0*/, 3> __Vcellout__route_units___05F1__send___05Fmsg;
        VlUnpacked<CData/*0:0*/, 3> __Vcellout__route_units___05F2__send___05Fval;
        VlUnpacked<CData/*0:0*/, 3> __Vcellinp__route_units___05F2__send___05Frdy;
        VlUnpacked<VlWide<3>/*88:0*/, 3> __Vcellout__route_units___05F2__send___05Fmsg;
        VlUnpacked<CData/*0:0*/, 3> __Vcellout__route_units___05F3__send___05Fval;
        VlUnpacked<CData/*0:0*/, 3> __Vcellinp__route_units___05F3__send___05Frdy;
        VlUnpacked<VlWide<3>/*88:0*/, 3> __Vcellout__route_units___05F3__send___05Fmsg;
        VlUnpacked<CData/*0:0*/, 3> __Vcellout__route_units___05F4__send___05Fval;
        VlUnpacked<CData/*0:0*/, 3> __Vcellinp__route_units___05F4__send___05Frdy;
        VlUnpacked<VlWide<3>/*88:0*/, 3> __Vcellout__route_units___05F4__send___05Fmsg;
        VlUnpacked<CData/*0:0*/, 3> __Vcellout__route_units___05F5__send___05Fval;
        VlUnpacked<CData/*0:0*/, 3> __Vcellinp__route_units___05F5__send___05Frdy;
        VlUnpacked<VlWide<3>/*88:0*/, 3> __Vcellout__route_units___05F5__send___05Fmsg;
        VlUnpacked<CData/*0:0*/, 3> __Vcellout__route_units___05F6__send___05Fval;
        VlUnpacked<CData/*0:0*/, 3> __Vcellinp__route_units___05F6__send___05Frdy;
        VlUnpacked<VlWide<3>/*88:0*/, 3> __Vcellout__route_units___05F6__send___05Fmsg;
        VlUnpacked<CData/*0:0*/, 3> __Vcellout__route_units___05F7__send___05Fval;
        VlUnpacked<CData/*0:0*/, 3> __Vcellinp__route_units___05F7__send___05Frdy;
        VlUnpacked<VlWide<3>/*88:0*/, 3> __Vcellout__route_units___05F7__send___05Fmsg;
        VlUnpacked<VlUnpacked<VlWide<3>/*88:0*/, 8>, 3> __PVT__switch_units___05Frecv___05Fmsg;
        VlUnpacked<VlUnpacked<CData/*0:0*/, 8>, 3> __PVT__switch_units___05Frecv___05Frdy;
        VlUnpacked<VlUnpacked<CData/*0:0*/, 8>, 3> __PVT__switch_units___05Frecv___05Fval;
        VlUnpacked<CData/*0:0*/, 8> __Vcellinp__switch_units___05F0__recv___05Fval;
        VlUnpacked<CData/*0:0*/, 8> __Vcellout__switch_units___05F0__recv___05Frdy;
        VlUnpacked<VlWide<3>/*88:0*/, 8> __Vcellinp__switch_units___05F0__recv___05Fmsg;
        VlUnpacked<CData/*0:0*/, 8> __Vcellinp__switch_units___05F1__recv___05Fval;
        VlUnpacked<CData/*0:0*/, 8> __Vcellout__switch_units___05F1__recv___05Frdy;
        VlUnpacked<VlWide<3>/*88:0*/, 8> __Vcellinp__switch_units___05F1__recv___05Fmsg;
        VlUnpacked<CData/*0:0*/, 8> __Vcellinp__switch_units___05F2__recv___05Fval;
        VlUnpacked<CData/*0:0*/, 8> __Vcellout__switch_units___05F2__recv___05Frdy;
        VlUnpacked<VlWide<3>/*88:0*/, 8> __Vcellinp__switch_units___05F2__recv___05Fmsg;
        VlUnpacked<VlWide<3>/*88:0*/, 2> __PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__mux___05Fin_;
        VlUnpacked<CData/*0:0*/, 1> __PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fraddr;
        VlUnpacked<VlWide<3>/*88:0*/, 1> __PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Frdata;
        VlUnpacked<CData/*0:0*/, 1> __PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr;
    };
    struct {
        VlUnpacked<VlWide<3>/*88:0*/, 1> __PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fwdata;
        VlUnpacked<CData/*0:0*/, 1> __PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fwen;
        VlUnpacked<VlWide<3>/*88:0*/, 2> __PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs;
        VlUnpacked<VlWide<3>/*88:0*/, 2> __PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__mux___05Fin_;
        VlUnpacked<CData/*0:0*/, 1> __PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fraddr;
        VlUnpacked<VlWide<3>/*88:0*/, 1> __PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Frdata;
        VlUnpacked<CData/*0:0*/, 1> __PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr;
        VlUnpacked<VlWide<3>/*88:0*/, 1> __PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fwdata;
        VlUnpacked<CData/*0:0*/, 1> __PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fwen;
        VlUnpacked<VlWide<3>/*88:0*/, 2> __PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs;
        VlUnpacked<VlWide<3>/*88:0*/, 2> __PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__mux___05Fin_;
        VlUnpacked<CData/*0:0*/, 1> __PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fraddr;
        VlUnpacked<VlWide<3>/*88:0*/, 1> __PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Frdata;
        VlUnpacked<CData/*0:0*/, 1> __PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr;
        VlUnpacked<VlWide<3>/*88:0*/, 1> __PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fwdata;
        VlUnpacked<CData/*0:0*/, 1> __PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fwen;
        VlUnpacked<VlWide<3>/*88:0*/, 2> __PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs;
        VlUnpacked<VlWide<3>/*88:0*/, 2> __PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__mux___05Fin_;
        VlUnpacked<CData/*0:0*/, 1> __PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Fraddr;
        VlUnpacked<VlWide<3>/*88:0*/, 1> __PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Frdata;
        VlUnpacked<CData/*0:0*/, 1> __PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr;
        VlUnpacked<VlWide<3>/*88:0*/, 1> __PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Fwdata;
        VlUnpacked<CData/*0:0*/, 1> __PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Fwen;
        VlUnpacked<VlWide<3>/*88:0*/, 2> __PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs;
        VlUnpacked<VlWide<3>/*88:0*/, 2> __PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__mux___05Fin_;
        VlUnpacked<CData/*0:0*/, 1> __PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Fraddr;
        VlUnpacked<VlWide<3>/*88:0*/, 1> __PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Frdata;
        VlUnpacked<CData/*0:0*/, 1> __PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr;
        VlUnpacked<VlWide<3>/*88:0*/, 1> __PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Fwdata;
        VlUnpacked<CData/*0:0*/, 1> __PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Fwen;
        VlUnpacked<VlWide<3>/*88:0*/, 2> __PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs;
        VlUnpacked<VlWide<3>/*88:0*/, 2> __PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__mux___05Fin_;
        VlUnpacked<CData/*0:0*/, 1> __PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf___05Fraddr;
        VlUnpacked<VlWide<3>/*88:0*/, 1> __PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf___05Frdata;
        VlUnpacked<CData/*0:0*/, 1> __PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr;
        VlUnpacked<VlWide<3>/*88:0*/, 1> __PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf___05Fwdata;
        VlUnpacked<CData/*0:0*/, 1> __PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf___05Fwen;
        VlUnpacked<VlWide<3>/*88:0*/, 2> __PVT__input_units___05F5__DOT__queue__DOT__dpath__DOT__rf__DOT__regs;
        VlUnpacked<VlWide<3>/*88:0*/, 2> __PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__mux___05Fin_;
        VlUnpacked<CData/*0:0*/, 1> __PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf___05Fraddr;
        VlUnpacked<VlWide<3>/*88:0*/, 1> __PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf___05Frdata;
        VlUnpacked<CData/*0:0*/, 1> __PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr;
        VlUnpacked<VlWide<3>/*88:0*/, 1> __PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf___05Fwdata;
        VlUnpacked<CData/*0:0*/, 1> __PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf___05Fwen;
        VlUnpacked<VlWide<3>/*88:0*/, 2> __PVT__input_units___05F6__DOT__queue__DOT__dpath__DOT__rf__DOT__regs;
        VlUnpacked<VlWide<3>/*88:0*/, 2> __PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__mux___05Fin_;
        VlUnpacked<CData/*0:0*/, 1> __PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf___05Fraddr;
        VlUnpacked<VlWide<3>/*88:0*/, 1> __PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf___05Frdata;
        VlUnpacked<CData/*0:0*/, 1> __PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr;
        VlUnpacked<VlWide<3>/*88:0*/, 1> __PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf___05Fwdata;
        VlUnpacked<CData/*0:0*/, 1> __PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf___05Fwen;
        VlUnpacked<VlWide<3>/*88:0*/, 2> __PVT__input_units___05F7__DOT__queue__DOT__dpath__DOT__rf__DOT__regs;
        VlUnpacked<VlWide<3>/*88:0*/, 8> __PVT__switch_units___05F0__DOT__mux___05Fin_;
        VlUnpacked<VlWide<3>/*88:0*/, 8> __PVT__switch_units___05F1__DOT__mux___05Fin_;
        VlUnpacked<VlWide<3>/*88:0*/, 8> __PVT__switch_units___05F2__DOT__mux___05Fin_;
    };

    // INTERNAL VARIABLES
    Vcgra_test__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcgra_test_XbarBypassQueueRTL___05F1d3f6e8e4814a1bb(Vcgra_test__Syms* symsp, const char* v__name);
    ~Vcgra_test_XbarBypassQueueRTL___05F1d3f6e8e4814a1bb();
    VL_UNCOPYABLE(Vcgra_test_XbarBypassQueueRTL___05F1d3f6e8e4814a1bb);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
