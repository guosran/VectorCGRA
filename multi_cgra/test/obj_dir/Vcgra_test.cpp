// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vcgra_test__pch.h"

//============================================================
// Constructors

Vcgra_test::Vcgra_test(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vcgra_test__Syms(contextp(), _vcname__, this)}
    , __PVT__std{vlSymsp->TOP.__PVT__std}
    , __PVT__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0{vlSymsp->TOP.__PVT__cgra_test__DOT__MultiCGRA__DOT__cgra___05F0}
    , __PVT__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1{vlSymsp->TOP.__PVT__cgra_test__DOT__MultiCGRA__DOT__cgra___05F1}
    , __PVT__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2{vlSymsp->TOP.__PVT__cgra_test__DOT__MultiCGRA__DOT__cgra___05F2}
    , __PVT__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3{vlSymsp->TOP.__PVT__cgra_test__DOT__MultiCGRA__DOT__cgra___05F3}
    , __PVT__cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05F0{vlSymsp->TOP.__PVT__cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05F0}
    , __PVT__cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05F1{vlSymsp->TOP.__PVT__cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05F1}
    , __PVT__cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05F2{vlSymsp->TOP.__PVT__cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05F2}
    , __PVT__cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05F3{vlSymsp->TOP.__PVT__cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05F3}
    , __PVT__cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05F4{vlSymsp->TOP.__PVT__cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05F4}
    , __PVT__cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05F5{vlSymsp->TOP.__PVT__cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05F5}
    , __PVT__cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05F6{vlSymsp->TOP.__PVT__cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05F6}
    , __PVT__cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05F7{vlSymsp->TOP.__PVT__cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__channels___05F7}
    , __PVT__cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__routers___05F0{vlSymsp->TOP.__PVT__cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__routers___05F0}
    , __PVT__cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__routers___05F1{vlSymsp->TOP.__PVT__cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__routers___05F1}
    , __PVT__cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__routers___05F2{vlSymsp->TOP.__PVT__cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__routers___05F2}
    , __PVT__cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__routers___05F3{vlSymsp->TOP.__PVT__cgra_test__DOT__MultiCGRA__DOT__mesh__DOT__routers___05F3}
    , std__03a__03asemaphore__Vclpkg{vlSymsp->TOP.std__03a__03asemaphore__Vclpkg}
    , std__03a__03aprocess__Vclpkg{vlSymsp->TOP.std__03a__03aprocess__Vclpkg}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vcgra_test::Vcgra_test(const char* _vcname__)
    : Vcgra_test(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vcgra_test::~Vcgra_test() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vcgra_test___024root___eval_debug_assertions(Vcgra_test___024root* vlSelf);
#endif  // VL_DEBUG
void Vcgra_test___024root___eval_static(Vcgra_test___024root* vlSelf);
void Vcgra_test___024root___eval_initial(Vcgra_test___024root* vlSelf);
void Vcgra_test___024root___eval_settle(Vcgra_test___024root* vlSelf);
void Vcgra_test___024root___eval(Vcgra_test___024root* vlSelf);

void Vcgra_test::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcgra_test::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vcgra_test___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vcgra_test___024root___eval_static(&(vlSymsp->TOP));
        Vcgra_test___024root___eval_initial(&(vlSymsp->TOP));
        Vcgra_test___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vcgra_test___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vcgra_test::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vcgra_test::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vcgra_test::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vcgra_test___024root___eval_final(Vcgra_test___024root* vlSelf);

VL_ATTR_COLD void Vcgra_test::final() {
    Vcgra_test___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vcgra_test::hierName() const { return vlSymsp->name(); }
const char* Vcgra_test::modelName() const { return "Vcgra_test"; }
unsigned Vcgra_test::threads() const { return 1; }
void Vcgra_test::prepareClone() const { contextp()->prepareClone(); }
void Vcgra_test::atClone() const {
    contextp()->threadPoolpOnClone();
}
