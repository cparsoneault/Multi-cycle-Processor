/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xa0883be4 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Chris/Documents/CompE 475/Homework 3/MicroprocessorComponents/Controller.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {2U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {6U, 0U};
static unsigned int ng5[] = {36U, 0U};
static unsigned int ng6[] = {37U, 0U};
static unsigned int ng7[] = {32U, 0U};
static unsigned int ng8[] = {34U, 0U};
static unsigned int ng9[] = {42U, 0U};
static unsigned int ng10[] = {7U, 0U};



static void Always_262_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    int t9;

LAB0:    t1 = (t0 + 4840U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(262, ng0);
    t2 = (t0 + 5160);
    *((int *)t2) = 1;
    t3 = (t0 + 4872);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(262, ng0);

LAB5:    xsi_set_current_line(263, ng0);
    t4 = (t0 + 3360U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 2);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB11;

LAB12:
LAB14:
LAB13:    xsi_set_current_line(276, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3920);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(264, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t0 + 3920);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 3, 0LL);
    goto LAB15;

LAB9:    xsi_set_current_line(265, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 3920);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 3, 0LL);
    goto LAB15;

LAB11:    xsi_set_current_line(266, ng0);

LAB16:    xsi_set_current_line(267, ng0);
    t3 = (t0 + 3520U);
    t4 = *((char **)t3);

LAB17:    t3 = ((char*)((ng5)));
    t9 = xsi_vlog_unsigned_case_compare(t4, 6, t3, 6);
    if (t9 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t6 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t6 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t6 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t6 == 1)
        goto LAB26;

LAB27:
LAB29:
LAB28:    xsi_set_current_line(273, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3920);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB30:    goto LAB15;

LAB18:    xsi_set_current_line(268, ng0);
    t7 = ((char*)((ng1)));
    t8 = (t0 + 3920);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 3, 0LL);
    goto LAB30;

LAB20:    xsi_set_current_line(269, ng0);
    t3 = ((char*)((ng3)));
    t7 = (t0 + 3920);
    xsi_vlogvar_wait_assign_value(t7, t3, 0, 0, 3, 0LL);
    goto LAB30;

LAB22:    xsi_set_current_line(270, ng0);
    t3 = ((char*)((ng2)));
    t7 = (t0 + 3920);
    xsi_vlogvar_wait_assign_value(t7, t3, 0, 0, 3, 0LL);
    goto LAB30;

LAB24:    xsi_set_current_line(271, ng0);
    t3 = ((char*)((ng4)));
    t7 = (t0 + 3920);
    xsi_vlogvar_wait_assign_value(t7, t3, 0, 0, 3, 0LL);
    goto LAB30;

LAB26:    xsi_set_current_line(272, ng0);
    t3 = ((char*)((ng10)));
    t7 = (t0 + 3920);
    xsi_vlogvar_wait_assign_value(t7, t3, 0, 0, 3, 0LL);
    goto LAB30;

}


extern void work_m_00000000002332847385_2115691294_init()
{
	static char *pe[] = {(void *)Always_262_0};
	xsi_register_didat("work_m_00000000002332847385_2115691294", "isim/tb_MultiCycle_isim_beh.exe.sim/work/m_00000000002332847385_2115691294.didat");
	xsi_register_executes(pe);
}
