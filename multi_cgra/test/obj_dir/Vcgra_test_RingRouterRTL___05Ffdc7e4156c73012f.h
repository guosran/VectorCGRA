// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcgra_test.h for the primary calling header

#ifndef VERILATED_VCGRA_TEST_RINGROUTERRTL___05FFDC7E4156C73012F_H_
#define VERILATED_VCGRA_TEST_RINGROUTERRTL___05FFDC7E4156C73012F_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vcgra_test__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcgra_test_RingRouterRTL___05Ffdc7e4156c73012f final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clk,0,0);
        VL_IN8(__PVT__pos,4,0);
        VL_IN8(__PVT__reset,0,0);
        CData/*1:0*/ __PVT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl___05Fcount;
        CData/*0:0*/ __PVT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl___05Fwen;
        CData/*0:0*/ __PVT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__head;
        CData/*0:0*/ __PVT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__send_xfer;
        CData/*0:0*/ __PVT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__tail;
        CData/*1:0*/ __PVT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl___05Fcount;
        CData/*0:0*/ __PVT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl___05Fwen;
        CData/*0:0*/ __PVT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__head;
        CData/*0:0*/ __PVT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__send_xfer;
        CData/*0:0*/ __PVT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__tail;
        CData/*1:0*/ __PVT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl___05Fcount;
        CData/*0:0*/ __PVT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl___05Fwen;
        CData/*0:0*/ __PVT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__head;
        CData/*0:0*/ __PVT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__send_xfer;
        CData/*0:0*/ __PVT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__tail;
        CData/*1:0*/ __PVT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl___05Fcount;
        CData/*0:0*/ __PVT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl___05Fwen;
        CData/*0:0*/ __PVT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__head;
        CData/*0:0*/ __PVT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__send_xfer;
        CData/*0:0*/ __PVT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__tail;
        CData/*1:0*/ __PVT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl___05Fcount;
        CData/*0:0*/ __PVT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl___05Fwen;
        CData/*0:0*/ __PVT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__head;
        CData/*0:0*/ __PVT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__send_xfer;
        CData/*0:0*/ __PVT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__tail;
        CData/*1:0*/ __PVT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl___05Fcount;
        CData/*0:0*/ __PVT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl___05Fwen;
        CData/*0:0*/ __PVT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__head;
        CData/*0:0*/ __PVT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__send_xfer;
        CData/*0:0*/ __PVT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__tail;
        CData/*1:0*/ output_units___05F0__DOT____Vcellout__credit___05F0__count;
        CData/*1:0*/ output_units___05F0__DOT____Vcellout__credit___05F1__count;
        CData/*1:0*/ output_units___05F1__DOT____Vcellout__credit___05F0__count;
        CData/*1:0*/ output_units___05F1__DOT____Vcellout__credit___05F1__count;
        CData/*1:0*/ output_units___05F2__DOT____Vcellout__credit___05F0__count;
        CData/*1:0*/ output_units___05F2__DOT____Vcellout__credit___05F1__count;
        CData/*0:0*/ route_units___05F0__DOT____Vlvbound_h7616ffa4__0;
        CData/*0:0*/ route_units___05F1__DOT____Vlvbound_h7616ffa4__0;
        CData/*0:0*/ route_units___05F2__DOT____Vlvbound_h7616ffa4__0;
        CData/*0:0*/ route_units___05F3__DOT____Vlvbound_h7616ffa4__0;
        CData/*0:0*/ route_units___05F4__DOT____Vlvbound_h7616ffa4__0;
        CData/*0:0*/ route_units___05F5__DOT____Vlvbound_h7616ffa4__0;
        CData/*5:0*/ __PVT__switch_units___05F0__DOT__arbiter___05Fgrants;
        CData/*5:0*/ __PVT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fout;
        CData/*0:0*/ switch_units___05F0__DOT__arbiter__DOT____Vlvbound_hd2f3a35b__0;
        CData/*0:0*/ switch_units___05F0__DOT__arbiter__DOT____Vlvbound_hd2f3a35b__1;
        CData/*0:0*/ switch_units___05F0__DOT__arbiter__DOT____Vlvbound_hb2227637__0;
        CData/*0:0*/ switch_units___05F0__DOT__arbiter__DOT____Vlvbound_hb2227637__1;
        CData/*5:0*/ __PVT__switch_units___05F1__DOT__arbiter___05Fgrants;
        CData/*5:0*/ __PVT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fout;
        CData/*0:0*/ switch_units___05F1__DOT__arbiter__DOT____Vlvbound_hd2f3a35b__0;
        CData/*0:0*/ switch_units___05F1__DOT__arbiter__DOT____Vlvbound_hd2f3a35b__1;
        CData/*0:0*/ switch_units___05F1__DOT__arbiter__DOT____Vlvbound_hb2227637__0;
        CData/*0:0*/ switch_units___05F1__DOT__arbiter__DOT____Vlvbound_hb2227637__1;
        CData/*5:0*/ __PVT__switch_units___05F2__DOT__arbiter___05Fgrants;
        CData/*5:0*/ __PVT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fout;
        CData/*0:0*/ switch_units___05F2__DOT__arbiter__DOT____Vlvbound_hd2f3a35b__0;
        CData/*0:0*/ switch_units___05F2__DOT__arbiter__DOT____Vlvbound_hd2f3a35b__1;
        CData/*0:0*/ switch_units___05F2__DOT__arbiter__DOT____Vlvbound_hb2227637__0;
        CData/*0:0*/ switch_units___05F2__DOT__arbiter__DOT____Vlvbound_hb2227637__1;
        SData/*11:0*/ __PVT__switch_units___05F0__DOT__arbiter__DOT__grants_int;
    };
    struct {
        SData/*12:0*/ __PVT__switch_units___05F0__DOT__arbiter__DOT__kills;
        SData/*11:0*/ __PVT__switch_units___05F1__DOT__arbiter__DOT__grants_int;
        SData/*12:0*/ __PVT__switch_units___05F1__DOT__arbiter__DOT__kills;
        SData/*11:0*/ __PVT__switch_units___05F2__DOT__arbiter__DOT__grants_int;
        SData/*12:0*/ __PVT__switch_units___05F2__DOT__arbiter__DOT__kills;
        VlWide<8>/*228:0*/ route_units___05F0__DOT____Vlvbound_h49e42bdf__0;
        VlWide<8>/*228:0*/ route_units___05F1__DOT____Vlvbound_h49e42bdf__0;
        VlWide<8>/*228:0*/ route_units___05F2__DOT____Vlvbound_h49e42bdf__0;
        VlWide<8>/*228:0*/ route_units___05F3__DOT____Vlvbound_h49e42bdf__0;
        VlWide<8>/*228:0*/ route_units___05F4__DOT____Vlvbound_h49e42bdf__0;
        VlWide<8>/*228:0*/ route_units___05F5__DOT____Vlvbound_h49e42bdf__0;
        VL_IN8(__PVT__recv___05Fen[3],0,0);
        VL_INW(__PVT__recv___05Fmsg[3],228,0,8);
        VL_OUT8(__PVT__recv___05Fyum[3][2],0,0);
        VL_OUT8(__PVT__send___05Fen[3],0,0);
        VL_OUTW(__PVT__send___05Fmsg[3],228,0,8);
        VL_IN8(__PVT__send___05Fyum[3][2],0,0);
        VlUnpacked<VlUnpacked<CData/*0:0*/, 2>, 3> __PVT__input_units___05Frecv___05Fyum;
        VlUnpacked<VlUnpacked<VlWide<8>/*228:0*/, 2>, 3> __PVT__input_units___05Fsend___05Fmsg;
        VlUnpacked<VlUnpacked<CData/*0:0*/, 2>, 3> __PVT__input_units___05Fsend___05Frdy;
        VlUnpacked<VlUnpacked<CData/*0:0*/, 2>, 3> __PVT__input_units___05Fsend___05Fval;
        VlUnpacked<CData/*0:0*/, 2> __Vcellout__input_units___05F0__send___05Fval;
        VlUnpacked<CData/*0:0*/, 2> __Vcellinp__input_units___05F0__send___05Frdy;
        VlUnpacked<VlWide<8>/*228:0*/, 2> __Vcellout__input_units___05F0__send___05Fmsg;
        VlUnpacked<CData/*0:0*/, 2> __Vcellout__input_units___05F0__recv___05Fyum;
        VlUnpacked<CData/*0:0*/, 2> __Vcellout__input_units___05F1__send___05Fval;
        VlUnpacked<CData/*0:0*/, 2> __Vcellinp__input_units___05F1__send___05Frdy;
        VlUnpacked<VlWide<8>/*228:0*/, 2> __Vcellout__input_units___05F1__send___05Fmsg;
        VlUnpacked<CData/*0:0*/, 2> __Vcellout__input_units___05F1__recv___05Fyum;
        VlUnpacked<CData/*0:0*/, 2> __Vcellout__input_units___05F2__send___05Fval;
        VlUnpacked<CData/*0:0*/, 2> __Vcellinp__input_units___05F2__send___05Frdy;
        VlUnpacked<VlWide<8>/*228:0*/, 2> __Vcellout__input_units___05F2__send___05Fmsg;
        VlUnpacked<CData/*0:0*/, 2> __Vcellout__input_units___05F2__recv___05Fyum;
        VlUnpacked<VlUnpacked<CData/*0:0*/, 2>, 3> __PVT__output_units___05Fsend___05Fyum;
        VlUnpacked<CData/*0:0*/, 2> __Vcellinp__output_units___05F0__send___05Fyum;
        VlUnpacked<CData/*0:0*/, 2> __Vcellinp__output_units___05F1__send___05Fyum;
        VlUnpacked<CData/*0:0*/, 2> __Vcellinp__output_units___05F2__send___05Fyum;
        VlUnpacked<VlWide<8>/*228:0*/, 6> __PVT__route_units___05Frecv___05Fmsg;
        VlUnpacked<CData/*0:0*/, 6> __PVT__route_units___05Frecv___05Frdy;
        VlUnpacked<CData/*0:0*/, 6> __PVT__route_units___05Frecv___05Fval;
        VlUnpacked<VlUnpacked<VlWide<8>/*228:0*/, 3>, 6> __PVT__route_units___05Fsend___05Fmsg;
        VlUnpacked<VlUnpacked<CData/*0:0*/, 3>, 6> __PVT__route_units___05Fsend___05Frdy;
        VlUnpacked<VlUnpacked<CData/*0:0*/, 3>, 6> __PVT__route_units___05Fsend___05Fval;
        VlUnpacked<CData/*0:0*/, 3> __Vcellout__route_units___05F0__send___05Fval;
        VlUnpacked<CData/*0:0*/, 3> __Vcellinp__route_units___05F0__send___05Frdy;
        VlUnpacked<VlWide<8>/*228:0*/, 3> __Vcellout__route_units___05F0__send___05Fmsg;
        VlUnpacked<CData/*0:0*/, 3> __Vcellout__route_units___05F1__send___05Fval;
        VlUnpacked<CData/*0:0*/, 3> __Vcellinp__route_units___05F1__send___05Frdy;
        VlUnpacked<VlWide<8>/*228:0*/, 3> __Vcellout__route_units___05F1__send___05Fmsg;
        VlUnpacked<CData/*0:0*/, 3> __Vcellout__route_units___05F2__send___05Fval;
        VlUnpacked<CData/*0:0*/, 3> __Vcellinp__route_units___05F2__send___05Frdy;
        VlUnpacked<VlWide<8>/*228:0*/, 3> __Vcellout__route_units___05F2__send___05Fmsg;
        VlUnpacked<CData/*0:0*/, 3> __Vcellout__route_units___05F3__send___05Fval;
        VlUnpacked<CData/*0:0*/, 3> __Vcellinp__route_units___05F3__send___05Frdy;
        VlUnpacked<VlWide<8>/*228:0*/, 3> __Vcellout__route_units___05F3__send___05Fmsg;
        VlUnpacked<CData/*0:0*/, 3> __Vcellout__route_units___05F4__send___05Fval;
        VlUnpacked<CData/*0:0*/, 3> __Vcellinp__route_units___05F4__send___05Frdy;
        VlUnpacked<VlWide<8>/*228:0*/, 3> __Vcellout__route_units___05F4__send___05Fmsg;
        VlUnpacked<CData/*0:0*/, 3> __Vcellout__route_units___05F5__send___05Fval;
        VlUnpacked<CData/*0:0*/, 3> __Vcellinp__route_units___05F5__send___05Frdy;
        VlUnpacked<VlWide<8>/*228:0*/, 3> __Vcellout__route_units___05F5__send___05Fmsg;
        VlUnpacked<VlUnpacked<VlWide<8>/*228:0*/, 6>, 3> __PVT__switch_units___05Frecv___05Fmsg;
        VlUnpacked<VlUnpacked<CData/*0:0*/, 6>, 3> __PVT__switch_units___05Frecv___05Frdy;
        VlUnpacked<VlUnpacked<CData/*0:0*/, 6>, 3> __PVT__switch_units___05Frecv___05Fval;
    };
    struct {
        VlUnpacked<CData/*0:0*/, 6> __Vcellinp__switch_units___05F0__recv___05Fval;
        VlUnpacked<CData/*0:0*/, 6> __Vcellout__switch_units___05F0__recv___05Frdy;
        VlUnpacked<VlWide<8>/*228:0*/, 6> __Vcellinp__switch_units___05F0__recv___05Fmsg;
        VlUnpacked<CData/*0:0*/, 6> __Vcellinp__switch_units___05F1__recv___05Fval;
        VlUnpacked<CData/*0:0*/, 6> __Vcellout__switch_units___05F1__recv___05Frdy;
        VlUnpacked<VlWide<8>/*228:0*/, 6> __Vcellinp__switch_units___05F1__recv___05Fmsg;
        VlUnpacked<CData/*0:0*/, 6> __Vcellinp__switch_units___05F2__recv___05Fval;
        VlUnpacked<CData/*0:0*/, 6> __Vcellout__switch_units___05F2__recv___05Frdy;
        VlUnpacked<VlWide<8>/*228:0*/, 6> __Vcellinp__switch_units___05F2__recv___05Fmsg;
        VlUnpacked<CData/*0:0*/, 2> __PVT__input_units___05F0__DOT__buffers___05Frecv___05Fval;
        VlUnpacked<CData/*0:0*/, 1> __PVT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr;
        VlUnpacked<VlWide<8>/*228:0*/, 1> __PVT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata;
        VlUnpacked<CData/*0:0*/, 1> __PVT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwaddr;
        VlUnpacked<VlWide<8>/*228:0*/, 1> __PVT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata;
        VlUnpacked<CData/*0:0*/, 1> __PVT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwen;
        VlUnpacked<VlWide<8>/*228:0*/, 2> __PVT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs;
        VlUnpacked<CData/*0:0*/, 1> __PVT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr;
        VlUnpacked<VlWide<8>/*228:0*/, 1> __PVT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata;
        VlUnpacked<CData/*0:0*/, 1> __PVT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwaddr;
        VlUnpacked<VlWide<8>/*228:0*/, 1> __PVT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata;
        VlUnpacked<CData/*0:0*/, 1> __PVT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwen;
        VlUnpacked<VlWide<8>/*228:0*/, 2> __PVT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs;
        VlUnpacked<CData/*0:0*/, 2> __PVT__input_units___05F1__DOT__buffers___05Frecv___05Fval;
        VlUnpacked<CData/*0:0*/, 1> __PVT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr;
        VlUnpacked<VlWide<8>/*228:0*/, 1> __PVT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata;
        VlUnpacked<CData/*0:0*/, 1> __PVT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwaddr;
        VlUnpacked<VlWide<8>/*228:0*/, 1> __PVT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata;
        VlUnpacked<CData/*0:0*/, 1> __PVT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwen;
        VlUnpacked<VlWide<8>/*228:0*/, 2> __PVT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs;
        VlUnpacked<CData/*0:0*/, 1> __PVT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr;
        VlUnpacked<VlWide<8>/*228:0*/, 1> __PVT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata;
        VlUnpacked<CData/*0:0*/, 1> __PVT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwaddr;
        VlUnpacked<VlWide<8>/*228:0*/, 1> __PVT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata;
        VlUnpacked<CData/*0:0*/, 1> __PVT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwen;
        VlUnpacked<VlWide<8>/*228:0*/, 2> __PVT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs;
        VlUnpacked<CData/*0:0*/, 2> __PVT__input_units___05F2__DOT__buffers___05Frecv___05Fval;
        VlUnpacked<CData/*0:0*/, 1> __PVT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr;
        VlUnpacked<VlWide<8>/*228:0*/, 1> __PVT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata;
        VlUnpacked<CData/*0:0*/, 1> __PVT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwaddr;
        VlUnpacked<VlWide<8>/*228:0*/, 1> __PVT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata;
        VlUnpacked<CData/*0:0*/, 1> __PVT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwen;
        VlUnpacked<VlWide<8>/*228:0*/, 2> __PVT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs;
        VlUnpacked<CData/*0:0*/, 1> __PVT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr;
        VlUnpacked<VlWide<8>/*228:0*/, 1> __PVT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata;
        VlUnpacked<CData/*0:0*/, 1> __PVT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwaddr;
        VlUnpacked<VlWide<8>/*228:0*/, 1> __PVT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata;
        VlUnpacked<CData/*0:0*/, 1> __PVT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwen;
        VlUnpacked<VlWide<8>/*228:0*/, 2> __PVT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs;
        VlUnpacked<CData/*1:0*/, 2> __PVT__output_units___05F0__DOT__credit___05Fcount;
        VlUnpacked<CData/*0:0*/, 2> __PVT__output_units___05F0__DOT__credit___05Fdecr;
        VlUnpacked<CData/*1:0*/, 2> __PVT__output_units___05F1__DOT__credit___05Fcount;
        VlUnpacked<CData/*0:0*/, 2> __PVT__output_units___05F1__DOT__credit___05Fdecr;
        VlUnpacked<CData/*1:0*/, 2> __PVT__output_units___05F2__DOT__credit___05Fcount;
        VlUnpacked<CData/*0:0*/, 2> __PVT__output_units___05F2__DOT__credit___05Fdecr;
        VlUnpacked<VlWide<8>/*228:0*/, 6> __PVT__switch_units___05F0__DOT__mux___05Fin_;
        VlUnpacked<VlWide<8>/*228:0*/, 6> __PVT__switch_units___05F1__DOT__mux___05Fin_;
        VlUnpacked<VlWide<8>/*228:0*/, 6> __PVT__switch_units___05F2__DOT__mux___05Fin_;
    };

    // INTERNAL VARIABLES
    Vcgra_test__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcgra_test_RingRouterRTL___05Ffdc7e4156c73012f(Vcgra_test__Syms* symsp, const char* v__name);
    ~Vcgra_test_RingRouterRTL___05Ffdc7e4156c73012f();
    VL_UNCOPYABLE(Vcgra_test_RingRouterRTL___05Ffdc7e4156c73012f);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
