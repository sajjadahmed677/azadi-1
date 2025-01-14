// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vazadi_soc_top__Syms.h"
#include "Vazadi_soc_top.h"
#include "Vazadi_soc_top_tlul_socket_m1__pi4.h"
#include "Vazadi_soc_top_gpio_reg_pkg.h"
#include "Vazadi_soc_top_tlul_fifo_sync__RCz1_RDz1.h"



// FUNCTIONS
Vazadi_soc_top__Syms::Vazadi_soc_top__Syms(Vazadi_soc_top* topp, const char* namep)
    // Setup locals
    : __Vm_namep(namep)
    , __Vm_activity(false)
    , __Vm_baseCode(0)
    , __Vm_didInit(false)
    // Setup submodule names
    , TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM(Verilated::catName(topp->name(), "azadi_soc_top.main_swith.DCCM"))
    , TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo(Verilated::catName(topp->name(), "azadi_soc_top.main_swith.DCCM.gen_host_fifo[0].u_hostfifo"))
    , TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo(Verilated::catName(topp->name(), "azadi_soc_top.main_swith.DCCM.gen_host_fifo[1].u_hostfifo"))
    , TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL(Verilated::catName(topp->name(), "azadi_soc_top.main_swith.FLASH_CTRL"))
    , TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo(Verilated::catName(topp->name(), "azadi_soc_top.main_swith.FLASH_CTRL.gen_host_fifo[0].u_hostfifo"))
    , TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo(Verilated::catName(topp->name(), "azadi_soc_top.main_swith.FLASH_CTRL.gen_host_fifo[1].u_hostfifo"))
    , TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC(Verilated::catName(topp->name(), "azadi_soc_top.main_swith.PLIC"))
    , TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo(Verilated::catName(topp->name(), "azadi_soc_top.main_swith.PLIC.gen_host_fifo[0].u_hostfifo"))
    , TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo(Verilated::catName(topp->name(), "azadi_soc_top.main_swith.PLIC.gen_host_fifo[1].u_hostfifo"))
    , TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0(Verilated::catName(topp->name(), "azadi_soc_top.main_swith.TIMER_0"))
    , TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo(Verilated::catName(topp->name(), "azadi_soc_top.main_swith.TIMER_0.gen_host_fifo[0].u_hostfifo"))
    , TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo(Verilated::catName(topp->name(), "azadi_soc_top.main_swith.TIMER_0.gen_host_fifo[1].u_hostfifo"))
    , TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1(Verilated::catName(topp->name(), "azadi_soc_top.main_swith.TIMER_1"))
    , TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo(Verilated::catName(topp->name(), "azadi_soc_top.main_swith.TIMER_1.gen_host_fifo[0].u_hostfifo"))
    , TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo(Verilated::catName(topp->name(), "azadi_soc_top.main_swith.TIMER_1.gen_host_fifo[1].u_hostfifo"))
    , TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2(Verilated::catName(topp->name(), "azadi_soc_top.main_swith.TIMER_2"))
    , TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo(Verilated::catName(topp->name(), "azadi_soc_top.main_swith.TIMER_2.gen_host_fifo[0].u_hostfifo"))
    , TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo(Verilated::catName(topp->name(), "azadi_soc_top.main_swith.TIMER_2.gen_host_fifo[1].u_hostfifo"))
    , TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3(Verilated::catName(topp->name(), "azadi_soc_top.main_swith.TIMER_3"))
    , TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo(Verilated::catName(topp->name(), "azadi_soc_top.main_swith.TIMER_3.gen_host_fifo[0].u_hostfifo"))
    , TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo(Verilated::catName(topp->name(), "azadi_soc_top.main_swith.TIMER_3.gen_host_fifo[1].u_hostfifo"))
    , TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4(Verilated::catName(topp->name(), "azadi_soc_top.main_swith.TIMER_4"))
    , TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo(Verilated::catName(topp->name(), "azadi_soc_top.main_swith.TIMER_4.gen_host_fifo[0].u_hostfifo"))
    , TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo(Verilated::catName(topp->name(), "azadi_soc_top.main_swith.TIMER_4.gen_host_fifo[1].u_hostfifo"))
    , TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI(Verilated::catName(topp->name(), "azadi_soc_top.main_swith.XBAR_PERI"))
    , TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo(Verilated::catName(topp->name(), "azadi_soc_top.main_swith.XBAR_PERI.gen_host_fifo[0].u_hostfifo"))
    , TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo(Verilated::catName(topp->name(), "azadi_soc_top.main_swith.XBAR_PERI.gen_host_fifo[1].u_hostfifo"))
    , TOP__azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d(Verilated::catName(topp->name(), "azadi_soc_top.main_swith.host_1.gen_dfifo[0].fifo_d"))
    , TOP__azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d(Verilated::catName(topp->name(), "azadi_soc_top.main_swith.host_1.gen_dfifo[1].fifo_d"))
    , TOP__azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d(Verilated::catName(topp->name(), "azadi_soc_top.main_swith.host_1.gen_dfifo[2].fifo_d"))
    , TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d(Verilated::catName(topp->name(), "azadi_soc_top.main_swith.host_2.gen_dfifo[0].fifo_d"))
    , TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d(Verilated::catName(topp->name(), "azadi_soc_top.main_swith.host_2.gen_dfifo[1].fifo_d"))
    , TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d(Verilated::catName(topp->name(), "azadi_soc_top.main_swith.host_2.gen_dfifo[2].fifo_d"))
    , TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d(Verilated::catName(topp->name(), "azadi_soc_top.main_swith.host_2.gen_dfifo[3].fifo_d"))
    , TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d(Verilated::catName(topp->name(), "azadi_soc_top.main_swith.host_2.gen_dfifo[4].fifo_d"))
    , TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d(Verilated::catName(topp->name(), "azadi_soc_top.main_swith.host_2.gen_dfifo[5].fifo_d"))
    , TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d(Verilated::catName(topp->name(), "azadi_soc_top.main_swith.host_2.gen_dfifo[6].fifo_d"))
    , TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d(Verilated::catName(topp->name(), "azadi_soc_top.main_swith.host_2.gen_dfifo[7].fifo_d"))
    , TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d(Verilated::catName(topp->name(), "azadi_soc_top.main_swith.host_2.gen_dfifo[8].fifo_d"))
    , TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d(Verilated::catName(topp->name(), "azadi_soc_top.main_swith.host_3.gen_dfifo[0].fifo_d"))
    , TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d(Verilated::catName(topp->name(), "azadi_soc_top.main_swith.host_3.gen_dfifo[1].fifo_d"))
    , TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d(Verilated::catName(topp->name(), "azadi_soc_top.main_swith.host_3.gen_dfifo[2].fifo_d"))
    , TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d(Verilated::catName(topp->name(), "azadi_soc_top.main_swith.host_3.gen_dfifo[3].fifo_d"))
    , TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d(Verilated::catName(topp->name(), "azadi_soc_top.main_swith.host_3.gen_dfifo[4].fifo_d"))
    , TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d(Verilated::catName(topp->name(), "azadi_soc_top.main_swith.host_3.gen_dfifo[5].fifo_d"))
    , TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d(Verilated::catName(topp->name(), "azadi_soc_top.main_swith.host_3.gen_dfifo[6].fifo_d"))
    , TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d(Verilated::catName(topp->name(), "azadi_soc_top.main_swith.host_3.gen_dfifo[7].fifo_d"))
    , TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d(Verilated::catName(topp->name(), "azadi_soc_top.main_swith.host_3.gen_dfifo[8].fifo_d"))
    , TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d(Verilated::catName(topp->name(), "azadi_soc_top.periph_switch.u_s1n_14.gen_dfifo[0].fifo_d"))
    , TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d(Verilated::catName(topp->name(), "azadi_soc_top.periph_switch.u_s1n_14.gen_dfifo[10].fifo_d"))
    , TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d(Verilated::catName(topp->name(), "azadi_soc_top.periph_switch.u_s1n_14.gen_dfifo[11].fifo_d"))
    , TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d(Verilated::catName(topp->name(), "azadi_soc_top.periph_switch.u_s1n_14.gen_dfifo[12].fifo_d"))
    , TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d(Verilated::catName(topp->name(), "azadi_soc_top.periph_switch.u_s1n_14.gen_dfifo[1].fifo_d"))
    , TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d(Verilated::catName(topp->name(), "azadi_soc_top.periph_switch.u_s1n_14.gen_dfifo[2].fifo_d"))
    , TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d(Verilated::catName(topp->name(), "azadi_soc_top.periph_switch.u_s1n_14.gen_dfifo[3].fifo_d"))
    , TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d(Verilated::catName(topp->name(), "azadi_soc_top.periph_switch.u_s1n_14.gen_dfifo[4].fifo_d"))
    , TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d(Verilated::catName(topp->name(), "azadi_soc_top.periph_switch.u_s1n_14.gen_dfifo[5].fifo_d"))
    , TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d(Verilated::catName(topp->name(), "azadi_soc_top.periph_switch.u_s1n_14.gen_dfifo[6].fifo_d"))
    , TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d(Verilated::catName(topp->name(), "azadi_soc_top.periph_switch.u_s1n_14.gen_dfifo[7].fifo_d"))
    , TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d(Verilated::catName(topp->name(), "azadi_soc_top.periph_switch.u_s1n_14.gen_dfifo[8].fifo_d"))
    , TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d(Verilated::catName(topp->name(), "azadi_soc_top.periph_switch.u_s1n_14.gen_dfifo[9].fifo_d"))
    , TOP__gpio_reg_pkg(Verilated::catName(topp->name(), "gpio_reg_pkg"))
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    TOPp->__PVT__azadi_soc_top__DOT__main_swith__DOT__DCCM = &TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM;
    TOPp->__PVT__azadi_soc_top__DOT__main_swith__DOT__DCCM->__PVT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo = &TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo;
    TOPp->__PVT__azadi_soc_top__DOT__main_swith__DOT__DCCM->__PVT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo = &TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo;
    TOPp->__PVT__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL = &TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL;
    TOPp->__PVT__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL->__PVT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo = &TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo;
    TOPp->__PVT__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL->__PVT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo = &TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo;
    TOPp->__PVT__azadi_soc_top__DOT__main_swith__DOT__PLIC = &TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC;
    TOPp->__PVT__azadi_soc_top__DOT__main_swith__DOT__PLIC->__PVT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo = &TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo;
    TOPp->__PVT__azadi_soc_top__DOT__main_swith__DOT__PLIC->__PVT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo = &TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo;
    TOPp->__PVT__azadi_soc_top__DOT__main_swith__DOT__TIMER_0 = &TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0;
    TOPp->__PVT__azadi_soc_top__DOT__main_swith__DOT__TIMER_0->__PVT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo = &TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo;
    TOPp->__PVT__azadi_soc_top__DOT__main_swith__DOT__TIMER_0->__PVT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo = &TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo;
    TOPp->__PVT__azadi_soc_top__DOT__main_swith__DOT__TIMER_1 = &TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1;
    TOPp->__PVT__azadi_soc_top__DOT__main_swith__DOT__TIMER_1->__PVT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo = &TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo;
    TOPp->__PVT__azadi_soc_top__DOT__main_swith__DOT__TIMER_1->__PVT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo = &TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo;
    TOPp->__PVT__azadi_soc_top__DOT__main_swith__DOT__TIMER_2 = &TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2;
    TOPp->__PVT__azadi_soc_top__DOT__main_swith__DOT__TIMER_2->__PVT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo = &TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo;
    TOPp->__PVT__azadi_soc_top__DOT__main_swith__DOT__TIMER_2->__PVT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo = &TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo;
    TOPp->__PVT__azadi_soc_top__DOT__main_swith__DOT__TIMER_3 = &TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3;
    TOPp->__PVT__azadi_soc_top__DOT__main_swith__DOT__TIMER_3->__PVT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo = &TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo;
    TOPp->__PVT__azadi_soc_top__DOT__main_swith__DOT__TIMER_3->__PVT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo = &TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo;
    TOPp->__PVT__azadi_soc_top__DOT__main_swith__DOT__TIMER_4 = &TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4;
    TOPp->__PVT__azadi_soc_top__DOT__main_swith__DOT__TIMER_4->__PVT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo = &TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo;
    TOPp->__PVT__azadi_soc_top__DOT__main_swith__DOT__TIMER_4->__PVT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo = &TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo;
    TOPp->__PVT__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI = &TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI;
    TOPp->__PVT__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI->__PVT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo = &TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo;
    TOPp->__PVT__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI->__PVT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo = &TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo;
    TOPp->__PVT__azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d = &TOP__azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d;
    TOPp->__PVT__azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d = &TOP__azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d;
    TOPp->__PVT__azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d = &TOP__azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d;
    TOPp->__PVT__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d = &TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d;
    TOPp->__PVT__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d = &TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d;
    TOPp->__PVT__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d = &TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d;
    TOPp->__PVT__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d = &TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d;
    TOPp->__PVT__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d = &TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d;
    TOPp->__PVT__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d = &TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d;
    TOPp->__PVT__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d = &TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d;
    TOPp->__PVT__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d = &TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d;
    TOPp->__PVT__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d = &TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d;
    TOPp->__PVT__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d = &TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d;
    TOPp->__PVT__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d = &TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d;
    TOPp->__PVT__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d = &TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d;
    TOPp->__PVT__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d = &TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d;
    TOPp->__PVT__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d = &TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d;
    TOPp->__PVT__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d = &TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d;
    TOPp->__PVT__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d = &TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d;
    TOPp->__PVT__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d = &TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d;
    TOPp->__PVT__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d = &TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d;
    TOPp->__PVT__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d = &TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d;
    TOPp->__PVT__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d = &TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d;
    TOPp->__PVT__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d = &TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d;
    TOPp->__PVT__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d = &TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d;
    TOPp->__PVT__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d = &TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d;
    TOPp->__PVT__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d = &TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d;
    TOPp->__PVT__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d = &TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d;
    TOPp->__PVT__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d = &TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d;
    TOPp->__PVT__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d = &TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d;
    TOPp->__PVT__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d = &TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d;
    TOPp->__PVT__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d = &TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d;
    TOPp->__PVT__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d = &TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d;
    TOPp->__PVT__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d = &TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d;
    TOPp->__PVT__gpio_reg_pkg = &TOP__gpio_reg_pkg;
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
    TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__Vconfigure(this, true);
    TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.__Vconfigure(this, true);
    TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.__Vconfigure(this, false);
    TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__Vconfigure(this, false);
    TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.__Vconfigure(this, false);
    TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.__Vconfigure(this, false);
    TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__Vconfigure(this, false);
    TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.__Vconfigure(this, false);
    TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.__Vconfigure(this, false);
    TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__Vconfigure(this, false);
    TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.__Vconfigure(this, false);
    TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.__Vconfigure(this, false);
    TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__Vconfigure(this, false);
    TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.__Vconfigure(this, false);
    TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.__Vconfigure(this, false);
    TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__Vconfigure(this, false);
    TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.__Vconfigure(this, false);
    TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.__Vconfigure(this, false);
    TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__Vconfigure(this, false);
    TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.__Vconfigure(this, false);
    TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.__Vconfigure(this, false);
    TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__Vconfigure(this, false);
    TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.__Vconfigure(this, false);
    TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.__Vconfigure(this, false);
    TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__Vconfigure(this, false);
    TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.__Vconfigure(this, false);
    TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.__Vconfigure(this, false);
    TOP__azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.__Vconfigure(this, false);
    TOP__azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.__Vconfigure(this, false);
    TOP__azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.__Vconfigure(this, false);
    TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.__Vconfigure(this, false);
    TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.__Vconfigure(this, false);
    TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.__Vconfigure(this, false);
    TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.__Vconfigure(this, false);
    TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.__Vconfigure(this, false);
    TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.__Vconfigure(this, false);
    TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.__Vconfigure(this, false);
    TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.__Vconfigure(this, false);
    TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.__Vconfigure(this, false);
    TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.__Vconfigure(this, false);
    TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.__Vconfigure(this, false);
    TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.__Vconfigure(this, false);
    TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.__Vconfigure(this, false);
    TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.__Vconfigure(this, false);
    TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.__Vconfigure(this, false);
    TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.__Vconfigure(this, false);
    TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.__Vconfigure(this, false);
    TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.__Vconfigure(this, false);
    TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.__Vconfigure(this, false);
    TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d.__Vconfigure(this, false);
    TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d.__Vconfigure(this, false);
    TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d.__Vconfigure(this, false);
    TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.__Vconfigure(this, false);
    TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.__Vconfigure(this, false);
    TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.__Vconfigure(this, false);
    TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.__Vconfigure(this, false);
    TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.__Vconfigure(this, false);
    TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.__Vconfigure(this, false);
    TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.__Vconfigure(this, false);
    TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.__Vconfigure(this, false);
    TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.__Vconfigure(this, false);
    TOP__gpio_reg_pkg.__Vconfigure(this, true);
}
