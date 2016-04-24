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
static int ng2[] = {0, 0};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {3U, 0U};
static unsigned int ng6[] = {8U, 0U};
static unsigned int ng7[] = {35U, 0U};
static unsigned int ng8[] = {43U, 0U};
static unsigned int ng9[] = {4U, 0U};
static unsigned int ng10[] = {2U, 0U};



static void Cont_52_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 7488U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 6568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8152);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 15U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 3);
    t18 = (t0 + 8056);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Always_54_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    int t13;
    char *t14;

LAB0:    t1 = (t0 + 7736U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 8072);
    *((int *)t2) = 1;
    t3 = (t0 + 7768);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(54, ng0);

LAB5:    xsi_set_current_line(55, ng0);
    t4 = (t0 + 4088U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 7544);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB6:    xsi_set_current_line(55, ng0);
    t11 = (t0 + 1560);
    t12 = *((char **)t11);
    t11 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, 0, 4, 0LL);

LAB8:    goto LAB2;

LAB9:    xsi_set_current_line(57, ng0);
    t3 = (t0 + 6568);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);

LAB10:    t11 = (t0 + 1560);
    t12 = *((char **)t11);
    t13 = xsi_vlog_unsigned_case_compare(t5, 4, t12, 32);
    if (t13 == 1)
        goto LAB11;

LAB12:    t2 = (t0 + 1696);
    t3 = *((char **)t2);
    t13 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 32);
    if (t13 == 1)
        goto LAB13;

LAB14:    t2 = (t0 + 1832);
    t4 = *((char **)t2);
    t13 = xsi_vlog_unsigned_case_compare(t5, 4, t4, 32);
    if (t13 == 1)
        goto LAB15;

LAB16:    t2 = (t0 + 1968);
    t11 = *((char **)t2);
    t13 = xsi_vlog_unsigned_case_compare(t5, 4, t11, 32);
    if (t13 == 1)
        goto LAB17;

LAB18:    t2 = (t0 + 2104);
    t11 = *((char **)t2);
    t13 = xsi_vlog_unsigned_case_compare(t5, 4, t11, 32);
    if (t13 == 1)
        goto LAB19;

LAB20:    t2 = (t0 + 2240);
    t11 = *((char **)t2);
    t13 = xsi_vlog_unsigned_case_compare(t5, 4, t11, 32);
    if (t13 == 1)
        goto LAB21;

LAB22:    t2 = (t0 + 2376);
    t11 = *((char **)t2);
    t13 = xsi_vlog_unsigned_case_compare(t5, 4, t11, 32);
    if (t13 == 1)
        goto LAB23;

LAB24:    t2 = (t0 + 2512);
    t11 = *((char **)t2);
    t13 = xsi_vlog_unsigned_case_compare(t5, 4, t11, 32);
    if (t13 == 1)
        goto LAB25;

LAB26:    t2 = (t0 + 2648);
    t11 = *((char **)t2);
    t13 = xsi_vlog_unsigned_case_compare(t5, 4, t11, 32);
    if (t13 == 1)
        goto LAB27;

LAB28:    t2 = (t0 + 2784);
    t11 = *((char **)t2);
    t13 = xsi_vlog_unsigned_case_compare(t5, 4, t11, 32);
    if (t13 == 1)
        goto LAB29;

LAB30:    t2 = (t0 + 2920);
    t11 = *((char **)t2);
    t13 = xsi_vlog_unsigned_case_compare(t5, 4, t11, 32);
    if (t13 == 1)
        goto LAB31;

LAB32:    t2 = (t0 + 3056);
    t11 = *((char **)t2);
    t13 = xsi_vlog_unsigned_case_compare(t5, 4, t11, 32);
    if (t13 == 1)
        goto LAB33;

LAB34:
LAB36:
LAB35:    xsi_set_current_line(229, ng0);
    t2 = (t0 + 1560);
    t11 = *((char **)t2);
    t2 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t2, t11, 0, 0, 4, 0LL);

LAB37:    goto LAB8;

LAB11:    xsi_set_current_line(58, ng0);

LAB38:    xsi_set_current_line(59, ng0);
    t11 = ((char*)((ng1)));
    t14 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t14, t11, 0, 0, 2, 0LL);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4808);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4968);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5128);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5288);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5448);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5608);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 6248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 1696);
    t3 = *((char **)t2);
    t2 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 4, 0LL);
    goto LAB37;

LAB13:    xsi_set_current_line(73, ng0);

LAB39:    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4808);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4968);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5128);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5288);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5448);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5608);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 6248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 3768U);
    t3 = *((char **)t2);

LAB40:    t2 = ((char*)((ng1)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t13 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng6)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t13 == 1)
        goto LAB43;

LAB44:    t2 = ((char*)((ng7)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t13 == 1)
        goto LAB45;

LAB46:    t2 = ((char*)((ng8)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t13 == 1)
        goto LAB47;

LAB48:    t2 = ((char*)((ng9)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t13 == 1)
        goto LAB49;

LAB50:    t2 = ((char*)((ng10)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t13 == 1)
        goto LAB51;

LAB52:
LAB54:
LAB53:    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 4, 0LL);

LAB55:    goto LAB37;

LAB15:    xsi_set_current_line(95, ng0);

LAB56:    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng1)));
    t11 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t11, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 4808);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 4968);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 5128);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 5288);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 5448);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 5608);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 5768);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 5928);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 6088);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng10)));
    t4 = (t0 + 6248);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(107, ng0);
    t2 = (t0 + 3768U);
    t4 = *((char **)t2);

LAB57:    t2 = ((char*)((ng7)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t13 == 1)
        goto LAB58;

LAB59:    t2 = ((char*)((ng8)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t13 == 1)
        goto LAB60;

LAB61:
LAB63:
LAB62:
LAB64:    goto LAB37;

LAB17:    xsi_set_current_line(113, ng0);

LAB65:    xsi_set_current_line(114, ng0);
    t2 = ((char*)((ng2)));
    t12 = (t0 + 4808);
    xsi_vlogvar_wait_assign_value(t12, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(115, ng0);
    t2 = ((char*)((ng2)));
    t11 = (t0 + 4968);
    xsi_vlogvar_wait_assign_value(t11, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(116, ng0);
    t2 = ((char*)((ng3)));
    t11 = (t0 + 5128);
    xsi_vlogvar_wait_assign_value(t11, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(117, ng0);
    t2 = ((char*)((ng2)));
    t11 = (t0 + 5288);
    xsi_vlogvar_wait_assign_value(t11, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(118, ng0);
    t2 = ((char*)((ng2)));
    t11 = (t0 + 5448);
    xsi_vlogvar_wait_assign_value(t11, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(119, ng0);
    t2 = ((char*)((ng2)));
    t11 = (t0 + 5608);
    xsi_vlogvar_wait_assign_value(t11, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(120, ng0);
    t2 = ((char*)((ng2)));
    t11 = (t0 + 5768);
    xsi_vlogvar_wait_assign_value(t11, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng2)));
    t11 = (t0 + 5928);
    xsi_vlogvar_wait_assign_value(t11, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(122, ng0);
    t2 = ((char*)((ng2)));
    t11 = (t0 + 6088);
    xsi_vlogvar_wait_assign_value(t11, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(123, ng0);
    t2 = (t0 + 2104);
    t11 = *((char **)t2);
    t2 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t2, t11, 0, 0, 4, 0LL);
    goto LAB37;

LAB19:    xsi_set_current_line(125, ng0);

LAB66:    xsi_set_current_line(126, ng0);
    t2 = ((char*)((ng3)));
    t12 = (t0 + 4808);
    xsi_vlogvar_wait_assign_value(t12, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(127, ng0);
    t2 = ((char*)((ng2)));
    t11 = (t0 + 4968);
    xsi_vlogvar_wait_assign_value(t11, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(128, ng0);
    t2 = ((char*)((ng2)));
    t11 = (t0 + 5128);
    xsi_vlogvar_wait_assign_value(t11, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(129, ng0);
    t2 = ((char*)((ng2)));
    t11 = (t0 + 5288);
    xsi_vlogvar_wait_assign_value(t11, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(130, ng0);
    t2 = ((char*)((ng2)));
    t11 = (t0 + 5448);
    xsi_vlogvar_wait_assign_value(t11, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(131, ng0);
    t2 = ((char*)((ng2)));
    t11 = (t0 + 5608);
    xsi_vlogvar_wait_assign_value(t11, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(132, ng0);
    t2 = ((char*)((ng2)));
    t11 = (t0 + 5768);
    xsi_vlogvar_wait_assign_value(t11, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(133, ng0);
    t2 = ((char*)((ng2)));
    t11 = (t0 + 5928);
    xsi_vlogvar_wait_assign_value(t11, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(134, ng0);
    t2 = ((char*)((ng3)));
    t11 = (t0 + 6088);
    xsi_vlogvar_wait_assign_value(t11, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(135, ng0);
    t2 = (t0 + 1560);
    t11 = *((char **)t2);
    t2 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t2, t11, 0, 0, 4, 0LL);
    goto LAB37;

LAB21:    xsi_set_current_line(137, ng0);

LAB67:    xsi_set_current_line(138, ng0);
    t2 = ((char*)((ng2)));
    t12 = (t0 + 4808);
    xsi_vlogvar_wait_assign_value(t12, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(139, ng0);
    t2 = ((char*)((ng2)));
    t11 = (t0 + 4968);
    xsi_vlogvar_wait_assign_value(t11, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(140, ng0);
    t2 = ((char*)((ng3)));
    t11 = (t0 + 5128);
    xsi_vlogvar_wait_assign_value(t11, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(141, ng0);
    t2 = ((char*)((ng2)));
    t11 = (t0 + 5288);
    xsi_vlogvar_wait_assign_value(t11, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(142, ng0);
    t2 = ((char*)((ng2)));
    t11 = (t0 + 5448);
    xsi_vlogvar_wait_assign_value(t11, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(143, ng0);
    t2 = ((char*)((ng3)));
    t11 = (t0 + 5608);
    xsi_vlogvar_wait_assign_value(t11, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(144, ng0);
    t2 = ((char*)((ng2)));
    t11 = (t0 + 5768);
    xsi_vlogvar_wait_assign_value(t11, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(145, ng0);
    t2 = ((char*)((ng2)));
    t11 = (t0 + 5928);
    xsi_vlogvar_wait_assign_value(t11, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(146, ng0);
    t2 = ((char*)((ng2)));
    t11 = (t0 + 6088);
    xsi_vlogvar_wait_assign_value(t11, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(147, ng0);
    t2 = (t0 + 1560);
    t11 = *((char **)t2);
    t2 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t2, t11, 0, 0, 4, 0LL);
    goto LAB37;

LAB23:    xsi_set_current_line(149, ng0);

LAB68:    xsi_set_current_line(150, ng0);
    t2 = ((char*)((ng10)));
    t12 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t12, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(151, ng0);
    t2 = ((char*)((ng2)));
    t11 = (t0 + 4808);
    xsi_vlogvar_wait_assign_value(t11, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(152, ng0);
    t2 = ((char*)((ng2)));
    t11 = (t0 + 4968);
    xsi_vlogvar_wait_assign_value(t11, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(153, ng0);
    t2 = ((char*)((ng2)));
    t11 = (t0 + 5128);
    xsi_vlogvar_wait_assign_value(t11, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(154, ng0);
    t2 = ((char*)((ng3)));
    t11 = (t0 + 5288);
    xsi_vlogvar_wait_assign_value(t11, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(155, ng0);
    t2 = ((char*)((ng2)));
    t11 = (t0 + 5448);
    xsi_vlogvar_wait_assign_value(t11, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(156, ng0);
    t2 = ((char*)((ng2)));
    t11 = (t0 + 5608);
    xsi_vlogvar_wait_assign_value(t11, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(157, ng0);
    t2 = ((char*)((ng2)));
    t11 = (t0 + 5768);
    xsi_vlogvar_wait_assign_value(t11, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(158, ng0);
    t2 = ((char*)((ng2)));
    t11 = (t0 + 5928);
    xsi_vlogvar_wait_assign_value(t11, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(159, ng0);
    t2 = ((char*)((ng2)));
    t11 = (t0 + 6088);
    xsi_vlogvar_wait_assign_value(t11, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(160, ng0);
    t2 = ((char*)((ng1)));
    t11 = (t0 + 6248);
    xsi_vlogvar_wait_assign_value(t11, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(161, ng0);
    t2 = (t0 + 2512);
    t11 = *((char **)t2);
    t2 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t2, t11, 0, 0, 4, 0LL);
    goto LAB37;

LAB25:    xsi_set_current_line(163, ng0);

LAB69:    xsi_set_current_line(164, ng0);
    t2 = ((char*)((ng2)));
    t12 = (t0 + 4808);
    xsi_vlogvar_wait_assign_value(t12, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(165, ng0);
    t2 = ((char*)((ng3)));
    t11 = (t0 + 4968);
    xsi_vlogvar_wait_assign_value(t11, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(166, ng0);
    t2 = ((char*)((ng2)));
    t11 = (t0 + 5128);
    xsi_vlogvar_wait_assign_value(t11, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(167, ng0);
    t2 = ((char*)((ng2)));
    t11 = (t0 + 5288);
    xsi_vlogvar_wait_assign_value(t11, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(168, ng0);
    t2 = ((char*)((ng2)));
    t11 = (t0 + 5448);
    xsi_vlogvar_wait_assign_value(t11, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(169, ng0);
    t2 = ((char*)((ng2)));
    t11 = (t0 + 5608);
    xsi_vlogvar_wait_assign_value(t11, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(170, ng0);
    t2 = ((char*)((ng2)));
    t11 = (t0 + 5768);
    xsi_vlogvar_wait_assign_value(t11, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(171, ng0);
    t2 = ((char*)((ng2)));
    t11 = (t0 + 5928);
    xsi_vlogvar_wait_assign_value(t11, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(172, ng0);
    t2 = ((char*)((ng3)));
    t11 = (t0 + 6088);
    xsi_vlogvar_wait_assign_value(t11, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(173, ng0);
    t2 = (t0 + 1560);
    t11 = *((char **)t2);
    t2 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t2, t11, 0, 0, 4, 0LL);
    goto LAB37;

LAB27:    xsi_set_current_line(175, ng0);

LAB70:    xsi_set_current_line(176, ng0);
    t2 = ((char*)((ng4)));
    t12 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t12, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(177, ng0);
    t2 = ((char*)((ng2)));
    t11 = (t0 + 4808);
    xsi_vlogvar_wait_assign_value(t11, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(178, ng0);
    t2 = ((char*)((ng2)));
    t11 = (t0 + 4968);
    xsi_vlogvar_wait_assign_value(t11, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(179, ng0);
    t2 = ((char*)((ng2)));
    t11 = (t0 + 5128);
    xsi_vlogvar_wait_assign_value(t11, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(180, ng0);
    t2 = ((char*)((ng3)));
    t11 = (t0 + 5288);
    xsi_vlogvar_wait_assign_value(t11, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(181, ng0);
    t2 = ((char*)((ng2)));
    t11 = (t0 + 5448);
    xsi_vlogvar_wait_assign_value(t11, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(182, ng0);
    t2 = ((char*)((ng2)));
    t11 = (t0 + 5608);
    xsi_vlogvar_wait_assign_value(t11, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(183, ng0);
    t2 = ((char*)((ng2)));
    t11 = (t0 + 5768);
    xsi_vlogvar_wait_assign_value(t11, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(184, ng0);
    t2 = ((char*)((ng3)));
    t11 = (t0 + 5928);
    xsi_vlogvar_wait_assign_value(t11, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(185, ng0);
    t2 = ((char*)((ng2)));
    t11 = (t0 + 6088);
    xsi_vlogvar_wait_assign_value(t11, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(186, ng0);
    t2 = ((char*)((ng1)));
    t11 = (t0 + 6248);
    xsi_vlogvar_wait_assign_value(t11, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(187, ng0);
    t2 = ((char*)((ng4)));
    t11 = (t0 + 6408);
    xsi_vlogvar_wait_assign_value(t11, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(188, ng0);
    t2 = (t0 + 1560);
    t11 = *((char **)t2);
    t2 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t2, t11, 0, 0, 4, 0LL);
    goto LAB37;

LAB29:    xsi_set_current_line(190, ng0);

LAB71:    xsi_set_current_line(191, ng0);
    t2 = ((char*)((ng1)));
    t12 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t12, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(192, ng0);
    t2 = ((char*)((ng2)));
    t11 = (t0 + 4808);
    xsi_vlogvar_wait_assign_value(t11, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(193, ng0);
    t2 = ((char*)((ng2)));
    t11 = (t0 + 4968);
    xsi_vlogvar_wait_assign_value(t11, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(194, ng0);
    t2 = ((char*)((ng2)));
    t11 = (t0 + 5128);
    xsi_vlogvar_wait_assign_value(t11, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(195, ng0);
    t2 = ((char*)((ng3)));
    t11 = (t0 + 5288);
    xsi_vlogvar_wait_assign_value(t11, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(196, ng0);
    t2 = ((char*)((ng2)));
    t11 = (t0 + 5448);
    xsi_vlogvar_wait_assign_value(t11, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(197, ng0);
    t2 = ((char*)((ng2)));
    t11 = (t0 + 5608);
    xsi_vlogvar_wait_assign_value(t11, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(198, ng0);
    t2 = ((char*)((ng2)));
    t11 = (t0 + 5768);
    xsi_vlogvar_wait_assign_value(t11, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(199, ng0);
    t2 = ((char*)((ng2)));
    t11 = (t0 + 5928);
    xsi_vlogvar_wait_assign_value(t11, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(200, ng0);
    t2 = ((char*)((ng2)));
    t11 = (t0 + 6088);
    xsi_vlogvar_wait_assign_value(t11, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(201, ng0);
    t2 = ((char*)((ng10)));
    t11 = (t0 + 6248);
    xsi_vlogvar_wait_assign_value(t11, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(202, ng0);
    t2 = (t0 + 2920);
    t11 = *((char **)t2);
    t2 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t2, t11, 0, 0, 4, 0LL);
    goto LAB37;

LAB31:    xsi_set_current_line(204, ng0);

LAB72:    xsi_set_current_line(205, ng0);
    t2 = ((char*)((ng2)));
    t12 = (t0 + 4808);
    xsi_vlogvar_wait_assign_value(t12, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(206, ng0);
    t2 = ((char*)((ng2)));
    t11 = (t0 + 4968);
    xsi_vlogvar_wait_assign_value(t11, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(207, ng0);
    t2 = ((char*)((ng2)));
    t11 = (t0 + 5128);
    xsi_vlogvar_wait_assign_value(t11, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(208, ng0);
    t2 = ((char*)((ng2)));
    t11 = (t0 + 5288);
    xsi_vlogvar_wait_assign_value(t11, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(209, ng0);
    t2 = ((char*)((ng2)));
    t11 = (t0 + 5448);
    xsi_vlogvar_wait_assign_value(t11, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(210, ng0);
    t2 = ((char*)((ng2)));
    t11 = (t0 + 5608);
    xsi_vlogvar_wait_assign_value(t11, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(211, ng0);
    t2 = ((char*)((ng2)));
    t11 = (t0 + 5768);
    xsi_vlogvar_wait_assign_value(t11, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(212, ng0);
    t2 = ((char*)((ng2)));
    t11 = (t0 + 5928);
    xsi_vlogvar_wait_assign_value(t11, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(213, ng0);
    t2 = ((char*)((ng3)));
    t11 = (t0 + 6088);
    xsi_vlogvar_wait_assign_value(t11, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(214, ng0);
    t2 = (t0 + 1560);
    t11 = *((char **)t2);
    t2 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t2, t11, 0, 0, 4, 0LL);
    goto LAB37;

LAB33:    xsi_set_current_line(216, ng0);

LAB73:    xsi_set_current_line(217, ng0);
    t2 = ((char*)((ng2)));
    t12 = (t0 + 4808);
    xsi_vlogvar_wait_assign_value(t12, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(218, ng0);
    t2 = ((char*)((ng2)));
    t11 = (t0 + 4968);
    xsi_vlogvar_wait_assign_value(t11, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(219, ng0);
    t2 = ((char*)((ng2)));
    t11 = (t0 + 5128);
    xsi_vlogvar_wait_assign_value(t11, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(220, ng0);
    t2 = ((char*)((ng2)));
    t11 = (t0 + 5288);
    xsi_vlogvar_wait_assign_value(t11, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(221, ng0);
    t2 = ((char*)((ng2)));
    t11 = (t0 + 5448);
    xsi_vlogvar_wait_assign_value(t11, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(222, ng0);
    t2 = ((char*)((ng2)));
    t11 = (t0 + 5608);
    xsi_vlogvar_wait_assign_value(t11, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(223, ng0);
    t2 = ((char*)((ng3)));
    t11 = (t0 + 5768);
    xsi_vlogvar_wait_assign_value(t11, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(224, ng0);
    t2 = ((char*)((ng2)));
    t11 = (t0 + 5928);
    xsi_vlogvar_wait_assign_value(t11, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(225, ng0);
    t2 = ((char*)((ng2)));
    t11 = (t0 + 6088);
    xsi_vlogvar_wait_assign_value(t11, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(226, ng0);
    t2 = ((char*)((ng10)));
    t11 = (t0 + 6408);
    xsi_vlogvar_wait_assign_value(t11, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(227, ng0);
    t2 = (t0 + 1560);
    t11 = *((char **)t2);
    t2 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t2, t11, 0, 0, 4, 0LL);
    goto LAB37;

LAB41:    xsi_set_current_line(86, ng0);
    t4 = (t0 + 2376);
    t11 = *((char **)t4);
    t4 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t4, t11, 0, 0, 4, 0LL);
    goto LAB55;

LAB43:    xsi_set_current_line(87, ng0);
    t4 = (t0 + 2784);
    t11 = *((char **)t4);
    t4 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t4, t11, 0, 0, 4, 0LL);
    goto LAB55;

LAB45:    xsi_set_current_line(88, ng0);
    t4 = (t0 + 1832);
    t11 = *((char **)t4);
    t4 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t4, t11, 0, 0, 4, 0LL);
    goto LAB55;

LAB47:    xsi_set_current_line(89, ng0);
    t4 = (t0 + 1832);
    t11 = *((char **)t4);
    t4 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t4, t11, 0, 0, 4, 0LL);
    goto LAB55;

LAB49:    xsi_set_current_line(90, ng0);
    t4 = (t0 + 2648);
    t11 = *((char **)t4);
    t4 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t4, t11, 0, 0, 4, 0LL);
    goto LAB55;

LAB51:    xsi_set_current_line(91, ng0);
    t4 = (t0 + 3056);
    t11 = *((char **)t4);
    t4 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t4, t11, 0, 0, 4, 0LL);
    goto LAB55;

LAB58:    xsi_set_current_line(108, ng0);
    t11 = (t0 + 1968);
    t12 = *((char **)t11);
    t11 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, 0, 4, 0LL);
    goto LAB64;

LAB60:    xsi_set_current_line(109, ng0);
    t11 = (t0 + 2240);
    t12 = *((char **)t11);
    t11 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, 0, 4, 0LL);
    goto LAB64;

}


extern void work_m_00000000004157436477_1657858031_init()
{
	static char *pe[] = {(void *)Cont_52_0,(void *)Always_54_1};
	xsi_register_didat("work_m_00000000004157436477_1657858031", "isim/tb_MultiCycle_isim_beh.exe.sim/work/m_00000000004157436477_1657858031.didat");
	xsi_register_executes(pe);
}
