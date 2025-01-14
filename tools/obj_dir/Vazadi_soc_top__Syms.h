// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VAZADI_SOC_TOP__SYMS_H_
#define _VAZADI_SOC_TOP__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODULE CLASSES
#include "Vazadi_soc_top.h"
#include "Vazadi_soc_top_tlul_socket_m1__pi4.h"
#include "Vazadi_soc_top_gpio_reg_pkg.h"
#include "Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1.h"

// SYMS CLASS
class Vazadi_soc_top__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vazadi_soc_top*                TOPp;
    Vazadi_soc_top_tlul_socket_m1__pi4 TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo;
    Vazadi_soc_top_tlul_socket_m1__pi4 TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo;
    Vazadi_soc_top_tlul_socket_m1__pi4 TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo;
    Vazadi_soc_top_tlul_socket_m1__pi4 TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo;
    Vazadi_soc_top_tlul_socket_m1__pi4 TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo;
    Vazadi_soc_top_tlul_socket_m1__pi4 TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo;
    Vazadi_soc_top_tlul_socket_m1__pi4 TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo;
    Vazadi_soc_top_tlul_socket_m1__pi4 TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo;
    Vazadi_soc_top_tlul_socket_m1__pi4 TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d;
    Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1 TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d;
    Vazadi_soc_top_gpio_reg_pkg    TOP__gpio_reg_pkg;
    
    // CREATORS
    Vazadi_soc_top__Syms(Vazadi_soc_top* topp, const char* namep);
    ~Vazadi_soc_top__Syms() = default;
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
