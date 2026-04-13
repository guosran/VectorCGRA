// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcgra_test.h for the primary calling header

#ifndef VERILATED_VCGRA_TEST_MESHROUTERRTL___05FC553B44583F176EA_H_
#define VERILATED_VCGRA_TEST_MESHROUTERRTL___05FC553B44583F176EA_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vcgra_test__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcgra_test_MeshRouterRTL___05Fc553b44583f176ea final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(pos,1,0);
        VL_IN8(reset,0,0);
        CData/*1:0*/ __PVT__input_units___05F0__DOT__queue__DOT__ctrl___05Fcount;
        CData/*0:0*/ __PVT__input_units___05F0__DOT__queue__DOT__ctrl___05Fwen;
        CData/*0:0*/ __PVT__input_units___05F0__DOT__queue__DOT__ctrl__DOT__head;
        CData/*0:0*/ __PVT__input_units___05F0__DOT__queue__DOT__ctrl__DOT__send_xfer;
        CData/*0:0*/ __PVT__input_units___05F0__DOT__queue__DOT__ctrl__DOT__tail;
        CData/*1:0*/ __PVT__input_units___05F1__DOT__queue__DOT__ctrl___05Fcount;
        CData/*0:0*/ __PVT__input_units___05F1__DOT__queue__DOT__ctrl___05Fwen;
        CData/*0:0*/ __PVT__input_units___05F1__DOT__queue__DOT__ctrl__DOT__head;
        CData/*0:0*/ __PVT__input_units___05F1__DOT__queue__DOT__ctrl__DOT__send_xfer;
        CData/*0:0*/ __PVT__input_units___05F1__DOT__queue__DOT__ctrl__DOT__tail;
        CData/*1:0*/ __PVT__input_units___05F2__DOT__queue__DOT__ctrl___05Fcount;
        CData/*0:0*/ __PVT__input_units___05F2__DOT__queue__DOT__ctrl___05Fwen;
        CData/*0:0*/ __PVT__input_units___05F2__DOT__queue__DOT__ctrl__DOT__head;
        CData/*0:0*/ __PVT__input_units___05F2__DOT__queue__DOT__ctrl__DOT__send_xfer;
        CData/*0:0*/ __PVT__input_units___05F2__DOT__queue__DOT__ctrl__DOT__tail;
        CData/*1:0*/ __PVT__input_units___05F3__DOT__queue__DOT__ctrl___05Fcount;
        CData/*0:0*/ __PVT__input_units___05F3__DOT__queue__DOT__ctrl___05Fwen;
        CData/*0:0*/ __PVT__input_units___05F3__DOT__queue__DOT__ctrl__DOT__head;
        CData/*0:0*/ __PVT__input_units___05F3__DOT__queue__DOT__ctrl__DOT__send_xfer;
        CData/*0:0*/ __PVT__input_units___05F3__DOT__queue__DOT__ctrl__DOT__tail;
        CData/*1:0*/ __PVT__input_units___05F4__DOT__queue__DOT__ctrl___05Fcount;
        CData/*0:0*/ __PVT__input_units___05F4__DOT__queue__DOT__ctrl___05Fwen;
        CData/*0:0*/ __PVT__input_units___05F4__DOT__queue__DOT__ctrl__DOT__head;
        CData/*0:0*/ __PVT__input_units___05F4__DOT__queue__DOT__ctrl__DOT__send_xfer;
        CData/*0:0*/ __PVT__input_units___05F4__DOT__queue__DOT__ctrl__DOT__tail;
        CData/*2:0*/ __PVT__route_units___05F0__DOT__out_dir;
        CData/*0:0*/ route_units___05F0__DOT____Vlvbound_h6d1ad749__0;
        CData/*2:0*/ __PVT__route_units___05F1__DOT__out_dir;
        CData/*0:0*/ route_units___05F1__DOT____Vlvbound_h6d1ad749__0;
        CData/*2:0*/ __PVT__route_units___05F2__DOT__out_dir;
        CData/*0:0*/ route_units___05F2__DOT____Vlvbound_h6d1ad749__0;
        CData/*2:0*/ __PVT__route_units___05F3__DOT__out_dir;
        CData/*0:0*/ route_units___05F3__DOT____Vlvbound_h6d1ad749__0;
        CData/*2:0*/ __PVT__route_units___05F4__DOT__out_dir;
        CData/*0:0*/ route_units___05F4__DOT____Vlvbound_h6d1ad749__0;
        CData/*4:0*/ __PVT__switch_units___05F0__DOT__arbiter___05Fgrants;
        CData/*2:0*/ __PVT__switch_units___05F0__DOT__encoder___05Fout;
        CData/*4:0*/ __PVT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fout;
        CData/*0:0*/ switch_units___05F0__DOT__arbiter__DOT____Vlvbound_h4258e3b7__0;
        CData/*0:0*/ switch_units___05F0__DOT__arbiter__DOT____Vlvbound_h4258e3b7__1;
        CData/*0:0*/ switch_units___05F0__DOT__arbiter__DOT____Vlvbound_h93ca0d60__0;
        CData/*0:0*/ switch_units___05F0__DOT__arbiter__DOT____Vlvbound_h93ca0d60__1;
        CData/*4:0*/ __PVT__switch_units___05F1__DOT__arbiter___05Fgrants;
        CData/*2:0*/ __PVT__switch_units___05F1__DOT__encoder___05Fout;
        CData/*4:0*/ __PVT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fout;
        CData/*0:0*/ switch_units___05F1__DOT__arbiter__DOT____Vlvbound_h4258e3b7__0;
        CData/*0:0*/ switch_units___05F1__DOT__arbiter__DOT____Vlvbound_h4258e3b7__1;
        CData/*0:0*/ switch_units___05F1__DOT__arbiter__DOT____Vlvbound_h93ca0d60__0;
        CData/*0:0*/ switch_units___05F1__DOT__arbiter__DOT____Vlvbound_h93ca0d60__1;
        CData/*4:0*/ __PVT__switch_units___05F2__DOT__arbiter___05Fgrants;
        CData/*2:0*/ __PVT__switch_units___05F2__DOT__encoder___05Fout;
        CData/*4:0*/ __PVT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fout;
        CData/*0:0*/ switch_units___05F2__DOT__arbiter__DOT____Vlvbound_h4258e3b7__0;
        CData/*0:0*/ switch_units___05F2__DOT__arbiter__DOT____Vlvbound_h4258e3b7__1;
        CData/*0:0*/ switch_units___05F2__DOT__arbiter__DOT____Vlvbound_h93ca0d60__0;
        CData/*0:0*/ switch_units___05F2__DOT__arbiter__DOT____Vlvbound_h93ca0d60__1;
        CData/*4:0*/ __PVT__switch_units___05F3__DOT__arbiter___05Fgrants;
        CData/*2:0*/ __PVT__switch_units___05F3__DOT__encoder___05Fout;
        CData/*4:0*/ __PVT__switch_units___05F3__DOT__arbiter__DOT__priority_reg___05Fout;
        CData/*0:0*/ switch_units___05F3__DOT__arbiter__DOT____Vlvbound_h4258e3b7__0;
        CData/*0:0*/ switch_units___05F3__DOT__arbiter__DOT____Vlvbound_h4258e3b7__1;
    };
    struct {
        CData/*0:0*/ switch_units___05F3__DOT__arbiter__DOT____Vlvbound_h93ca0d60__0;
        CData/*0:0*/ switch_units___05F3__DOT__arbiter__DOT____Vlvbound_h93ca0d60__1;
        CData/*4:0*/ __PVT__switch_units___05F4__DOT__arbiter___05Fgrants;
        CData/*2:0*/ __PVT__switch_units___05F4__DOT__encoder___05Fout;
        CData/*4:0*/ __PVT__switch_units___05F4__DOT__arbiter__DOT__priority_reg___05Fout;
        CData/*0:0*/ switch_units___05F4__DOT__arbiter__DOT____Vlvbound_h4258e3b7__0;
        CData/*0:0*/ switch_units___05F4__DOT__arbiter__DOT____Vlvbound_h4258e3b7__1;
        CData/*0:0*/ switch_units___05F4__DOT__arbiter__DOT____Vlvbound_h93ca0d60__0;
        CData/*0:0*/ switch_units___05F4__DOT__arbiter__DOT____Vlvbound_h93ca0d60__1;
        SData/*9:0*/ __PVT__switch_units___05F0__DOT__arbiter__DOT__grants_int;
        SData/*10:0*/ __PVT__switch_units___05F0__DOT__arbiter__DOT__kills;
        SData/*9:0*/ __PVT__switch_units___05F1__DOT__arbiter__DOT__grants_int;
        SData/*10:0*/ __PVT__switch_units___05F1__DOT__arbiter__DOT__kills;
        SData/*9:0*/ __PVT__switch_units___05F2__DOT__arbiter__DOT__grants_int;
        SData/*10:0*/ __PVT__switch_units___05F2__DOT__arbiter__DOT__kills;
        SData/*9:0*/ __PVT__switch_units___05F3__DOT__arbiter__DOT__grants_int;
        SData/*10:0*/ __PVT__switch_units___05F3__DOT__arbiter__DOT__kills;
        SData/*9:0*/ __PVT__switch_units___05F4__DOT__arbiter__DOT__grants_int;
        SData/*10:0*/ __PVT__switch_units___05F4__DOT__arbiter__DOT__kills;
        VL_INW(recv___05Fmsg[5],232,0,8);
        VL_OUT8(recv___05Frdy[5],0,0);
        VL_IN8(recv___05Fval[5],0,0);
        VL_OUTW(send___05Fmsg[5],232,0,8);
        VL_IN8(send___05Frdy[5],0,0);
        VL_OUT8(send___05Fval[5],0,0);
        VlUnpacked<VlUnpacked<VlWide<8>/*232:0*/, 5>, 5> __PVT__route_units___05Fsend___05Fmsg;
        VlUnpacked<VlUnpacked<CData/*0:0*/, 5>, 5> __PVT__route_units___05Fsend___05Frdy;
        VlUnpacked<VlUnpacked<CData/*0:0*/, 5>, 5> __PVT__route_units___05Fsend___05Fval;
        VlUnpacked<CData/*0:0*/, 5> __Vcellout__route_units___05F0__send___05Fval;
        VlUnpacked<CData/*0:0*/, 5> __Vcellinp__route_units___05F0__send___05Frdy;
        VlUnpacked<VlWide<8>/*232:0*/, 5> __Vcellout__route_units___05F0__send___05Fmsg;
        VlUnpacked<CData/*0:0*/, 5> __Vcellout__route_units___05F1__send___05Fval;
        VlUnpacked<CData/*0:0*/, 5> __Vcellinp__route_units___05F1__send___05Frdy;
        VlUnpacked<VlWide<8>/*232:0*/, 5> __Vcellout__route_units___05F1__send___05Fmsg;
        VlUnpacked<CData/*0:0*/, 5> __Vcellout__route_units___05F2__send___05Fval;
        VlUnpacked<CData/*0:0*/, 5> __Vcellinp__route_units___05F2__send___05Frdy;
        VlUnpacked<VlWide<8>/*232:0*/, 5> __Vcellout__route_units___05F2__send___05Fmsg;
        VlUnpacked<CData/*0:0*/, 5> __Vcellout__route_units___05F3__send___05Fval;
        VlUnpacked<CData/*0:0*/, 5> __Vcellinp__route_units___05F3__send___05Frdy;
        VlUnpacked<VlWide<8>/*232:0*/, 5> __Vcellout__route_units___05F3__send___05Fmsg;
        VlUnpacked<CData/*0:0*/, 5> __Vcellout__route_units___05F4__send___05Fval;
        VlUnpacked<CData/*0:0*/, 5> __Vcellinp__route_units___05F4__send___05Frdy;
        VlUnpacked<VlWide<8>/*232:0*/, 5> __Vcellout__route_units___05F4__send___05Fmsg;
        VlUnpacked<VlUnpacked<VlWide<8>/*232:0*/, 5>, 5> __PVT__switch_units___05Frecv___05Fmsg;
        VlUnpacked<VlUnpacked<CData/*0:0*/, 5>, 5> __PVT__switch_units___05Frecv___05Frdy;
        VlUnpacked<VlUnpacked<CData/*0:0*/, 5>, 5> __PVT__switch_units___05Frecv___05Fval;
        VlUnpacked<CData/*0:0*/, 5> __Vcellinp__switch_units___05F0__recv___05Fval;
        VlUnpacked<CData/*0:0*/, 5> __Vcellout__switch_units___05F0__recv___05Frdy;
        VlUnpacked<VlWide<8>/*232:0*/, 5> __Vcellinp__switch_units___05F0__recv___05Fmsg;
        VlUnpacked<CData/*0:0*/, 5> __Vcellinp__switch_units___05F1__recv___05Fval;
        VlUnpacked<CData/*0:0*/, 5> __Vcellout__switch_units___05F1__recv___05Frdy;
        VlUnpacked<VlWide<8>/*232:0*/, 5> __Vcellinp__switch_units___05F1__recv___05Fmsg;
        VlUnpacked<CData/*0:0*/, 5> __Vcellinp__switch_units___05F2__recv___05Fval;
        VlUnpacked<CData/*0:0*/, 5> __Vcellout__switch_units___05F2__recv___05Frdy;
        VlUnpacked<VlWide<8>/*232:0*/, 5> __Vcellinp__switch_units___05F2__recv___05Fmsg;
        VlUnpacked<CData/*0:0*/, 5> __Vcellinp__switch_units___05F3__recv___05Fval;
        VlUnpacked<CData/*0:0*/, 5> __Vcellout__switch_units___05F3__recv___05Frdy;
        VlUnpacked<VlWide<8>/*232:0*/, 5> __Vcellinp__switch_units___05F3__recv___05Fmsg;
        VlUnpacked<CData/*0:0*/, 5> __Vcellinp__switch_units___05F4__recv___05Fval;
        VlUnpacked<CData/*0:0*/, 5> __Vcellout__switch_units___05F4__recv___05Frdy;
        VlUnpacked<VlWide<8>/*232:0*/, 5> __Vcellinp__switch_units___05F4__recv___05Fmsg;
        VlUnpacked<CData/*0:0*/, 1> __PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fraddr;
        VlUnpacked<VlWide<8>/*232:0*/, 1> __PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Frdata;
        VlUnpacked<CData/*0:0*/, 1> __PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr;
    };
    struct {
        VlUnpacked<VlWide<8>/*232:0*/, 1> __PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fwdata;
        VlUnpacked<CData/*0:0*/, 1> __PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fwen;
        VlUnpacked<VlWide<8>/*232:0*/, 2> __PVT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf__DOT__regs;
        VlUnpacked<CData/*0:0*/, 1> __PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fraddr;
        VlUnpacked<VlWide<8>/*232:0*/, 1> __PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Frdata;
        VlUnpacked<CData/*0:0*/, 1> __PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr;
        VlUnpacked<VlWide<8>/*232:0*/, 1> __PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fwdata;
        VlUnpacked<CData/*0:0*/, 1> __PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fwen;
        VlUnpacked<VlWide<8>/*232:0*/, 2> __PVT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf__DOT__regs;
        VlUnpacked<CData/*0:0*/, 1> __PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fraddr;
        VlUnpacked<VlWide<8>/*232:0*/, 1> __PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Frdata;
        VlUnpacked<CData/*0:0*/, 1> __PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr;
        VlUnpacked<VlWide<8>/*232:0*/, 1> __PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fwdata;
        VlUnpacked<CData/*0:0*/, 1> __PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fwen;
        VlUnpacked<VlWide<8>/*232:0*/, 2> __PVT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf__DOT__regs;
        VlUnpacked<CData/*0:0*/, 1> __PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Fraddr;
        VlUnpacked<VlWide<8>/*232:0*/, 1> __PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Frdata;
        VlUnpacked<CData/*0:0*/, 1> __PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr;
        VlUnpacked<VlWide<8>/*232:0*/, 1> __PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Fwdata;
        VlUnpacked<CData/*0:0*/, 1> __PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Fwen;
        VlUnpacked<VlWide<8>/*232:0*/, 2> __PVT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf__DOT__regs;
        VlUnpacked<CData/*0:0*/, 1> __PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Fraddr;
        VlUnpacked<VlWide<8>/*232:0*/, 1> __PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Frdata;
        VlUnpacked<CData/*0:0*/, 1> __PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Fwaddr;
        VlUnpacked<VlWide<8>/*232:0*/, 1> __PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Fwdata;
        VlUnpacked<CData/*0:0*/, 1> __PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf___05Fwen;
        VlUnpacked<VlWide<8>/*232:0*/, 2> __PVT__input_units___05F4__DOT__queue__DOT__dpath__DOT__rf__DOT__regs;
        VlUnpacked<VlWide<8>/*232:0*/, 5> __PVT__switch_units___05F0__DOT__mux___05Fin_;
        VlUnpacked<VlWide<8>/*232:0*/, 5> __PVT__switch_units___05F1__DOT__mux___05Fin_;
        VlUnpacked<VlWide<8>/*232:0*/, 5> __PVT__switch_units___05F2__DOT__mux___05Fin_;
        VlUnpacked<VlWide<8>/*232:0*/, 5> __PVT__switch_units___05F3__DOT__mux___05Fin_;
        VlUnpacked<VlWide<8>/*232:0*/, 5> __PVT__switch_units___05F4__DOT__mux___05Fin_;
    };

    // INTERNAL VARIABLES
    Vcgra_test__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcgra_test_MeshRouterRTL___05Fc553b44583f176ea(Vcgra_test__Syms* symsp, const char* v__name);
    ~Vcgra_test_MeshRouterRTL___05Fc553b44583f176ea();
    VL_UNCOPYABLE(Vcgra_test_MeshRouterRTL___05Fc553b44583f176ea);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
