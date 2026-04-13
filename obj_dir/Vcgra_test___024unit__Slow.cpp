// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcgra_test.h for the primary calling header

#include "Vcgra_test__pch.h"
#include "Vcgra_test__Syms.h"
#include "Vcgra_test___024unit.h"

void Vcgra_test___024unit___ctor_var_reset(Vcgra_test___024unit* vlSelf);

Vcgra_test___024unit::Vcgra_test___024unit(Vcgra_test__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcgra_test___024unit___ctor_var_reset(this);
}

void Vcgra_test___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcgra_test___024unit::~Vcgra_test___024unit() {
}
