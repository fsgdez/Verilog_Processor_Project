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
static const char *ng0 = "C:/Users/Fadi G/Desktop/Dropbox/Classes/C475/C475HW1/singlecycle/ALU.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {4U, 0U};
static unsigned int ng5[] = {5U, 0U};
static unsigned int ng6[] = {6U, 0U};
static unsigned int ng7[] = {7U, 0U};
static int ng8[] = {1, 0};
static int ng9[] = {0, 0};
static unsigned int ng10[] = {65535U, 65535U};



static void Always_17_0(char *t0)
{
    char t10[8];
    char t17[8];
    char t18[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;

LAB0:    t1 = (t0 + 2984U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(17, ng0);
    t2 = (t0 + 3552);
    *((int *)t2) = 1;
    t3 = (t0 + 3016);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(17, ng0);

LAB5:    xsi_set_current_line(19, ng0);
    t4 = (t0 + 1504U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t4, 3);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB19;

LAB20:
LAB22:
LAB21:    xsi_set_current_line(27, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 2064);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB23:    goto LAB2;

LAB7:    xsi_set_current_line(20, ng0);
    t7 = (t0 + 1184U);
    t8 = *((char **)t7);
    t7 = (t0 + 1344U);
    t9 = *((char **)t7);
    memset(t10, 0, 8);
    xsi_vlog_signed_bit_and(t10, 32, t8, 32, t9, 32);
    t7 = (t0 + 2064);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 32);
    goto LAB23;

LAB9:    xsi_set_current_line(21, ng0);
    t3 = (t0 + 1184U);
    t4 = *((char **)t3);
    t3 = (t0 + 1344U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_signed_bit_or(t10, 32, t4, 32, t7, 32);
    t3 = (t0 + 2064);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 32);
    goto LAB23;

LAB11:    xsi_set_current_line(22, ng0);
    t3 = (t0 + 1184U);
    t4 = *((char **)t3);
    t3 = (t0 + 1344U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_signed_add(t10, 32, t4, 32, t7, 32);
    t3 = (t0 + 2064);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 32);
    goto LAB23;

LAB13:    xsi_set_current_line(23, ng0);
    t3 = (t0 + 1184U);
    t4 = *((char **)t3);
    t3 = (t0 + 1344U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t10 + 4);
    t8 = (t7 + 4);
    memcpy(t10, t7, 8);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t12 | t13);
    *((unsigned int *)t10) = t14;
    t15 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t15 & 4294967295U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 4294967295U);
    memset(t17, 0, 8);
    xsi_vlog_signed_bit_and(t17, 32, t4, 32, t10, 32);
    t9 = (t0 + 2064);
    xsi_vlogvar_assign_value(t9, t17, 0, 0, 32);
    goto LAB23;

LAB15:    xsi_set_current_line(24, ng0);
    t3 = (t0 + 1184U);
    t4 = *((char **)t3);
    t3 = (t0 + 1344U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t10 + 4);
    t8 = (t7 + 4);
    memcpy(t10, t7, 8);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t12 | t13);
    *((unsigned int *)t10) = t14;
    t15 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t15 & 4294967295U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 4294967295U);
    memset(t17, 0, 8);
    xsi_vlog_signed_bit_or(t17, 32, t4, 32, t10, 32);
    t9 = (t0 + 2064);
    xsi_vlogvar_assign_value(t9, t17, 0, 0, 32);
    goto LAB23;

LAB17:    xsi_set_current_line(25, ng0);
    t3 = (t0 + 1184U);
    t4 = *((char **)t3);
    t3 = (t0 + 1344U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_signed_minus(t10, 32, t4, 32, t7, 32);
    t3 = (t0 + 2064);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 32);
    goto LAB23;

LAB19:    xsi_set_current_line(26, ng0);
    t3 = (t0 + 1184U);
    t4 = *((char **)t3);
    t3 = (t0 + 1344U);
    t7 = *((char **)t3);
    memset(t18, 0, 8);
    xsi_vlog_signed_less(t18, 32, t4, 32, t7, 32);
    memset(t17, 0, 8);
    t3 = (t18 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t18);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t3) != 0)
        goto LAB26;

LAB27:    t9 = (t17 + 4);
    t16 = *((unsigned int *)t17);
    t19 = *((unsigned int *)t9);
    t20 = (t16 || t19);
    if (t20 > 0)
        goto LAB28;

LAB29:    t22 = *((unsigned int *)t17);
    t23 = (~(t22));
    t24 = *((unsigned int *)t9);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t9) > 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t17) > 0)
        goto LAB34;

LAB35:    memcpy(t10, t26, 8);

LAB36:    t27 = (t0 + 2064);
    xsi_vlogvar_assign_value(t27, t10, 0, 0, 32);
    goto LAB23;

LAB24:    *((unsigned int *)t17) = 1;
    goto LAB27;

LAB26:    t8 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB27;

LAB28:    t21 = ((char*)((ng8)));
    goto LAB29;

LAB30:    t26 = ((char*)((ng9)));
    goto LAB31;

LAB32:    xsi_vlog_unsigned_bit_combine(t10, 32, t21, 32, t26, 32);
    goto LAB36;

LAB34:    memcpy(t10, t21, 8);
    goto LAB36;

}

static void Cont_32_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t8[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;

LAB0:    t1 = (t0 + 3232U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 2064);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng9)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB7;

LAB4:    if (t20 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t8) = 1;

LAB7:    memset(t4, 0, 8);
    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t24) != 0)
        goto LAB10;

LAB11:    t31 = (t4 + 4);
    t32 = *((unsigned int *)t4);
    t33 = *((unsigned int *)t31);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB12;

LAB13:    t36 = *((unsigned int *)t4);
    t37 = (~(t36));
    t38 = *((unsigned int *)t31);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t31) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t40, 8);

LAB20:    t41 = (t0 + 3648);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    memset(t45, 0, 8);
    t46 = 1U;
    t47 = t46;
    t48 = (t3 + 4);
    t49 = *((unsigned int *)t3);
    t46 = (t46 & t49);
    t50 = *((unsigned int *)t48);
    t47 = (t47 & t50);
    t51 = (t45 + 4);
    t52 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t52 | t46);
    t53 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t53 | t47);
    xsi_driver_vfirst_trans(t41, 0, 0);
    t54 = (t0 + 3568);
    *((int *)t54) = 1;

LAB1:    return;
LAB6:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t30 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB11;

LAB12:    t35 = ((char*)((ng8)));
    goto LAB13;

LAB14:    t40 = ((char*)((ng9)));
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t35, 32, t40, 32);
    goto LAB20;

LAB18:    memcpy(t3, t35, 8);
    goto LAB20;

}


extern void work_m_00000000004294087718_2163708805_init()
{
	static char *pe[] = {(void *)Always_17_0,(void *)Cont_32_1};
	xsi_register_didat("work_m_00000000004294087718_2163708805", "isim/testLWSW_isim_beh.exe.sim/work/m_00000000004294087718_2163708805.didat");
	xsi_register_executes(pe);
}
