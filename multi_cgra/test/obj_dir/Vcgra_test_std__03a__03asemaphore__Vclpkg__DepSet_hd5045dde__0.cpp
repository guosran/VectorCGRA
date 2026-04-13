// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcgra_test.h for the primary calling header

#include "Vcgra_test__pch.h"
#include "Vcgra_test__Syms.h"
#include "Vcgra_test_std__03a__03asemaphore__Vclpkg.h"

Vcgra_test_std__03a__03asemaphore::Vcgra_test_std__03a__03asemaphore(Vcgra_test__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcgra_test_std__03a__03asemaphore::new\n"); );
    // Init
    _ctor_var_reset(vlSymsp);
    // Body
    this->__PVT__m_keyCount = keyCount;
}

VlCoroutine Vcgra_test_std__03a__03asemaphore::__VnoInFunc_get(Vcgra_test__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcgra_test_std__03a__03asemaphore::__VnoInFunc_get\n"); );
    // Init
    VL_KEEP_THIS;
    // Body
    if (VL_LTS_III(32, this->__PVT__m_keyCount, keyCount)) {
        CData/*0:0*/ __VdynTrigger_h91907c43__0;
        __VdynTrigger_h91907c43__0 = 0;
        __VdynTrigger_h91907c43__0 = 0U;
        CData/*0:0*/ __Vtrigcurrexpr_h736f6070__0;
        __Vtrigcurrexpr_h736f6070__0 = 0;
        while ((1U & (~ (IData)(__VdynTrigger_h91907c43__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         nullptr, 
                                                         "@([true] (std::semaphore.m_keyCount >= std::semaphore.keyCount))", 
                                                         "/home/x/shiran/verilator5/include/verilated_std.sv", 
                                                         101);
            __Vtrigcurrexpr_h736f6070__0 = VL_GTES_III(32, this->__PVT__m_keyCount, keyCount);
            __VdynTrigger_h91907c43__0 = __Vtrigcurrexpr_h736f6070__0;
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h91907c43__0);
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     nullptr, 
                                                     "@([true] (std::semaphore.m_keyCount >= std::semaphore.keyCount))", 
                                                     "/home/x/shiran/verilator5/include/verilated_std.sv", 
                                                     101);
    }
    this->__PVT__m_keyCount = (this->__PVT__m_keyCount 
                               - keyCount);
}

void Vcgra_test_std__03a__03asemaphore::_ctor_var_reset(Vcgra_test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcgra_test_std__03a__03asemaphore::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_keyCount = 0;
}
