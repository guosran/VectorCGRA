// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcgra_test.h for the primary calling header

#include "Vcgra_test__pch.h"
#include "Vcgra_test__Syms.h"
#include "Vcgra_test___024root.h"

void Vcgra_test___024root___ctor_var_reset(Vcgra_test___024root* vlSelf);

Vcgra_test___024root::Vcgra_test___024root(Vcgra_test__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcgra_test___024root___ctor_var_reset(this);
}

void Vcgra_test___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcgra_test___024root::~Vcgra_test___024root() {
}
