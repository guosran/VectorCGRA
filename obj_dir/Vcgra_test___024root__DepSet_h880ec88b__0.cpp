// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcgra_test.h for the primary calling header

#include "Vcgra_test__pch.h"
#include "Vcgra_test___024root.h"

VL_INLINE_OPT VlCoroutine Vcgra_test___024root___eval_initial__TOP__Vtiming__2(Vcgra_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcgra_test___024root___eval_initial__TOP__Vtiming__2\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "multi_cgra/test/sv_test/MeshMultiCgraRTL_2x2_fir_scalar_tb.v", 
                                           1280);
        vlSelf->cgra_test__DOT__clk = (1U & (~ (IData)(vlSelf->cgra_test__DOT__clk)));
    }
}

void Vcgra_test___024root___timing_resume(Vcgra_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcgra_test___024root___timing_resume\n"); );
    // Body
    if ((0x20000ULL & vlSelf->__VactTriggered.word(7U))) {
        vlSelf->__VtrigSched_h523331bf__0.resume("@(posedge cgra_test.reset)");
    }
    if ((0x40000ULL & vlSelf->__VactTriggered.word(7U))) {
        vlSelf->__VtrigSched_h5233317e__0.resume("@(negedge cgra_test.reset)");
    }
    if ((0x10000ULL & vlSelf->__VactTriggered.word(7U))) {
        vlSelf->__VtrigSched_hfa0263d0__0.resume("@(posedge cgra_test.clk)");
    }
    if ((0x100000ULL & vlSelf->__VactTriggered.word(7U))) {
        vlSelf->__VtrigSched_hfa026328__0.resume("@(edge cgra_test.clk)");
    }
    if ((0x200000ULL & vlSelf->__VactTriggered.word(7U))) {
        vlSelf->__VdynSched.resume();
    }
    if ((0x80000ULL & vlSelf->__VactTriggered.word(7U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vcgra_test___024root___timing_commit(Vcgra_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcgra_test___024root___timing_commit\n"); );
    // Body
    if ((! (0x20000ULL & vlSelf->__VactTriggered.word(7U)))) {
        vlSelf->__VtrigSched_h523331bf__0.commit("@(posedge cgra_test.reset)");
    }
    if ((! (0x40000ULL & vlSelf->__VactTriggered.word(7U)))) {
        vlSelf->__VtrigSched_h5233317e__0.commit("@(negedge cgra_test.reset)");
    }
    if ((! (0x10000ULL & vlSelf->__VactTriggered.word(7U)))) {
        vlSelf->__VtrigSched_hfa0263d0__0.commit("@(posedge cgra_test.clk)");
    }
    if ((! (0x100000ULL & vlSelf->__VactTriggered.word(7U)))) {
        vlSelf->__VtrigSched_hfa026328__0.commit("@(edge cgra_test.clk)");
    }
}

void Vcgra_test___024root___eval_triggers__act(Vcgra_test___024root* vlSelf);
void Vcgra_test___024root___eval_act(Vcgra_test___024root* vlSelf);

bool Vcgra_test___024root___eval_phase__act(Vcgra_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcgra_test___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<470> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vcgra_test___024root___eval_triggers__act(vlSelf);
    Vcgra_test___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vcgra_test___024root___timing_resume(vlSelf);
        Vcgra_test___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vcgra_test___024root___eval_nba(Vcgra_test___024root* vlSelf);

bool Vcgra_test___024root___eval_phase__nba(Vcgra_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcgra_test___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vcgra_test___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcgra_test___024root___dump_triggers__nba(Vcgra_test___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcgra_test___024root___dump_triggers__act(Vcgra_test___024root* vlSelf);
#endif  // VL_DEBUG

void Vcgra_test___024root___eval(Vcgra_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcgra_test___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vcgra_test___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("multi_cgra/test/sv_test/MeshMultiCgraRTL_2x2_fir_scalar_tb.v", 7, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vcgra_test___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("multi_cgra/test/sv_test/MeshMultiCgraRTL_2x2_fir_scalar_tb.v", 7, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vcgra_test___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vcgra_test___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vcgra_test___024root___eval_debug_assertions(Vcgra_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcgra_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcgra_test___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
