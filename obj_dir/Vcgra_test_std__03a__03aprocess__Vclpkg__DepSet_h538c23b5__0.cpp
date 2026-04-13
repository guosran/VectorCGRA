// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcgra_test.h for the primary calling header

#include "Vcgra_test__pch.h"
#include "Vcgra_test__Syms.h"
#include "Vcgra_test_std__03a__03aprocess__Vclpkg.h"

void Vcgra_test_std__03a__03aprocess__Vclpkg::__VnoInFunc_self(VlProcessRef vlProcess, Vcgra_test__Syms* __restrict vlSymsp, VlClassRef<Vcgra_test_std__03a__03aprocess> &self__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcgra_test_std__03a__03aprocess__Vclpkg::__VnoInFunc_self\n"); );
    // Body
    VlClassRef<Vcgra_test_std__03a__03aprocess> p;
    p = VL_NEW(Vcgra_test_std__03a__03aprocess, vlSymsp);
    // $c statement at /tmp/verilator5/include/verilated_std.sv:132:10
    VL_NULL_CHECK(p, "/tmp/verilator5/include/verilated_std.sv", 132)->__PVT__m_process = vlProcess;
    self__Vfuncrtn = p;
}

void Vcgra_test_std__03a__03aprocess::__VnoInFunc_suspend(Vcgra_test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcgra_test_std__03a__03aprocess::__VnoInFunc_suspend\n"); );
    // Body
    VL_WRITEF_NX("[%0t] %%Error: verilated_std.sv:156: Assertion failed in %Nstd.process.suspend: std::process::suspend() not supported\n",0,
                 64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
    VL_STOP_MT("/tmp/verilator5/include/verilated_std.sv", 156, "");
}

VlCoroutine Vcgra_test_std__03a__03aprocess::__VnoInFunc_await(Vcgra_test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcgra_test_std__03a__03aprocess::__VnoInFunc_await\n"); );
    // Init
    VL_KEEP_THIS;
    IData/*31:0*/ __Vfunc_status__2__Vfuncout;
    __Vfunc_status__2__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_status__3__Vfuncout;
    __Vfunc_status__3__Vfuncout = 0;
    // Body
    if ((1U & (~ ((0U == ([&]() {
                                this->__VnoInFunc_status(vlSymsp, __Vfunc_status__2__Vfuncout);
                            }(), __Vfunc_status__2__Vfuncout)) 
                  | (4U == ([&]() {
                                this->__VnoInFunc_status(vlSymsp, __Vfunc_status__3__Vfuncout);
                            }(), __Vfunc_status__3__Vfuncout)))))) {
        CData/*0:0*/ __VdynTrigger_h23429ff1__0;
        __VdynTrigger_h23429ff1__0 = 0;
        __VdynTrigger_h23429ff1__0 = 0U;
        CData/*0:0*/ __Vtrigcurrexpr_h213d84de__0;
        __Vtrigcurrexpr_h213d84de__0 = 0;
        while ((1U & (~ (IData)(__VdynTrigger_h23429ff1__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         nullptr, 
                                                         "@([true] ((32'h0 == $_EXPRSTMT( // Function: status __VnoInFunc_status(std::process.__Vfunc_status__2__Vfuncout); , ); ) | (32'h4 == $_EXPRSTMT( // Function: status __VnoInFunc_status(std::process.__Vfunc_status__3__Vfuncout); , ); )))", 
                                                         "/tmp/verilator5/include/verilated_std.sv", 
                                                         165);
            __Vtrigcurrexpr_h213d84de__0 = ((0U == 
                                             ([&]() {
                            this->__VnoInFunc_status(vlSymsp, __Vfunc_status__2__Vfuncout);
                        }(), __Vfunc_status__2__Vfuncout)) 
                                            | (4U == 
                                               ([&]() {
                            this->__VnoInFunc_status(vlSymsp, __Vfunc_status__3__Vfuncout);
                        }(), __Vfunc_status__3__Vfuncout)));
            __VdynTrigger_h23429ff1__0 = __Vtrigcurrexpr_h213d84de__0;
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h23429ff1__0);
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     nullptr, 
                                                     "@([true] ((32'h0 == $_EXPRSTMT( // Function: status __VnoInFunc_status(std::process.__Vfunc_status__2__Vfuncout); , ); ) | (32'h4 == $_EXPRSTMT( // Function: status __VnoInFunc_status(std::process.__Vfunc_status__3__Vfuncout); , ); )))", 
                                                     "/tmp/verilator5/include/verilated_std.sv", 
                                                     165);
    }
}

Vcgra_test_std__03a__03aprocess::Vcgra_test_std__03a__03aprocess(Vcgra_test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcgra_test_std__03a__03aprocess::new\n"); );
    // Init
    _ctor_var_reset(vlSymsp);
}

void Vcgra_test_std__03a__03aprocess::_ctor_var_reset(Vcgra_test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcgra_test_std__03a__03aprocess::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    }
