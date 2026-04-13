// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcgra_test.h for the primary calling header

#include "Vcgra_test__pch.h"
#include "Vcgra_test__Syms.h"
#include "Vcgra_test_std.h"

void Vcgra_test_std___ctor_var_reset(Vcgra_test_std* vlSelf);

Vcgra_test_std::Vcgra_test_std(Vcgra_test__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcgra_test_std___ctor_var_reset(this);
}

void Vcgra_test_std::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcgra_test_std::~Vcgra_test_std() {
}
