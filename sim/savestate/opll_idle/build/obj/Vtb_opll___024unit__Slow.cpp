// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_opll.h for the primary calling header

#include "Vtb_opll__pch.h"


Vtb_opll___024unit::Vtb_opll___024unit() = default;
Vtb_opll___024unit::~Vtb_opll___024unit() = default;

void Vtb_opll___024unit::ctor(Vtb_opll__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
}

void Vtb_opll___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtb_opll___024unit::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
