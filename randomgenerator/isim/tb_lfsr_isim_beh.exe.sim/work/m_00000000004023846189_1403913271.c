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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/whackamole/randomgenerator/sevenseg.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {5, 0};
static int ng3[] = {3, 0};
static int ng4[] = {1, 0};
static int ng5[] = {0, 0};
static unsigned int ng6[] = {6U, 0U};
static unsigned int ng7[] = {1U, 0U};



static void Always_9_0(char *t0)
{
    char t4[8];
    char t25[8];
    char t35[8];
    char t42[8];
    char t54[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t26;
    int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;

LAB0:    t1 = (t0 + 3328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(9, ng0);
    t2 = (t0 + 3648);
    *((int *)t2) = 1;
    t3 = (t0 + 3360);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(9, ng0);

LAB5:    xsi_set_current_line(10, ng0);
    t5 = (t0 + 1368U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(12, ng0);

LAB13:    xsi_set_current_line(13, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng2)));
    memset(t4, 0, 8);
    t12 = (t5 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB15;

LAB14:    t13 = (t6 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB15;

LAB18:    if (*((unsigned int *)t5) < *((unsigned int *)t6))
        goto LAB17;

LAB16:    *((unsigned int *)t4) = 1;

LAB17:    t20 = (t4 + 4);
    t7 = *((unsigned int *)t20);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB19;

LAB20:
LAB21:    xsi_set_current_line(15, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng2)));
    memset(t4, 0, 8);
    t12 = (t5 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB23;

LAB22:    t13 = (t6 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB23;

LAB26:    if (*((unsigned int *)t5) < *((unsigned int *)t6))
        goto LAB25;

LAB24:    *((unsigned int *)t4) = 1;

LAB25:    t20 = (t4 + 4);
    t7 = *((unsigned int *)t20);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB27;

LAB28:
LAB29:    xsi_set_current_line(17, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng2)));
    memset(t4, 0, 8);
    t12 = (t5 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB31;

LAB30:    t13 = (t6 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB31;

LAB34:    if (*((unsigned int *)t5) < *((unsigned int *)t6))
        goto LAB33;

LAB32:    *((unsigned int *)t4) = 1;

LAB33:    t20 = (t4 + 4);
    t7 = *((unsigned int *)t20);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB35;

LAB36:
LAB37:    xsi_set_current_line(20, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng4)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_lshift(t4, 4, t5, 4, t6, 32);
    t12 = (t0 + 1928);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 4);
    xsi_set_current_line(21, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 3);
    t9 = (t8 & 1);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t12);
    t11 = (t10 >> 3);
    t14 = (t11 & 1);
    *((unsigned int *)t6) = t14;
    t13 = (t0 + 1928);
    t19 = (t0 + 1928);
    t20 = (t19 + 72U);
    t21 = *((char **)t20);
    t22 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t25, t21, 2, t22, 32, 1);
    t23 = (t25 + 4);
    t15 = *((unsigned int *)t23);
    t27 = (!(t15));
    if (t27 == 1)
        goto LAB38;

LAB39:    xsi_set_current_line(22, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng4)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_lshift(t4, 4, t5, 4, t6, 32);
    t12 = (t0 + 2088);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 4);
    xsi_set_current_line(23, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 3);
    t9 = (t8 & 1);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t12);
    t11 = (t10 >> 3);
    t14 = (t11 & 1);
    *((unsigned int *)t6) = t14;
    t13 = (t0 + 2088);
    t19 = (t0 + 2088);
    t20 = (t19 + 72U);
    t21 = *((char **)t20);
    t22 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t25, t21, 2, t22, 32, 1);
    t23 = (t25 + 4);
    t15 = *((unsigned int *)t23);
    t27 = (!(t15));
    if (t27 == 1)
        goto LAB40;

LAB41:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng4)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_lshift(t4, 4, t5, 4, t6, 32);
    t12 = (t0 + 2248);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 4);
    xsi_set_current_line(25, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1008U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t12 = (t0 + 2408);
    t13 = (t12 + 56U);
    t19 = *((char **)t13);
    xsi_vlog_generic_get_index_select_value(t4, 1, t3, t6, 2, t19, 3, 2);
    t20 = (t0 + 2248);
    t21 = (t0 + 2248);
    t22 = (t21 + 72U);
    t23 = *((char **)t22);
    t24 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t25, t23, 2, t24, 32, 1);
    t26 = (t25 + 4);
    t7 = *((unsigned int *)t26);
    t27 = (!(t7));
    if (t27 == 1)
        goto LAB42;

LAB43:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng1)));
    memset(t4, 0, 8);
    t12 = (t5 + 4);
    t13 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t6);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t12);
    t11 = *((unsigned int *)t13);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t12);
    t17 = *((unsigned int *)t13);
    t18 = (t16 | t17);
    t28 = (~(t18));
    t29 = (t15 & t28);
    if (t29 != 0)
        goto LAB47;

LAB44:    if (t18 != 0)
        goto LAB46;

LAB45:    *((unsigned int *)t4) = 1;

LAB47:    t20 = (t4 + 4);
    t30 = *((unsigned int *)t20);
    t31 = (~(t30));
    t32 = *((unsigned int *)t4);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB48;

LAB49:
LAB50:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng7)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_minus(t4, 3, t5, 3, t6, 3);
    t12 = (t0 + 2408);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 3);

LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(11, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 1768);
    xsi_vlogvar_assign_value(t20, t19, 0, 0, 12);
    goto LAB12;

LAB15:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB17;

LAB19:    xsi_set_current_line(14, ng0);
    t21 = (t0 + 1928);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = ((char*)((ng3)));
    memset(t25, 0, 8);
    xsi_vlog_unsigned_add(t25, 32, t23, 4, t24, 32);
    t26 = (t0 + 1928);
    xsi_vlogvar_assign_value(t26, t25, 0, 0, 4);
    goto LAB21;

LAB23:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB25;

LAB27:    xsi_set_current_line(16, ng0);
    t21 = (t0 + 2088);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = ((char*)((ng3)));
    memset(t25, 0, 8);
    xsi_vlog_unsigned_add(t25, 32, t23, 4, t24, 32);
    t26 = (t0 + 2088);
    xsi_vlogvar_assign_value(t26, t25, 0, 0, 4);
    goto LAB29;

LAB31:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB33;

LAB35:    xsi_set_current_line(18, ng0);
    t21 = (t0 + 2248);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = ((char*)((ng3)));
    memset(t25, 0, 8);
    xsi_vlog_unsigned_add(t25, 32, t23, 4, t24, 32);
    t26 = (t0 + 2248);
    xsi_vlogvar_assign_value(t26, t25, 0, 0, 4);
    goto LAB37;

LAB38:    xsi_vlogvar_assign_value(t13, t4, 0, *((unsigned int *)t25), 1);
    goto LAB39;

LAB40:    xsi_vlogvar_assign_value(t13, t4, 0, *((unsigned int *)t25), 1);
    goto LAB41;

LAB42:    xsi_vlogvar_assign_value(t20, t4, 0, *((unsigned int *)t25), 1);
    goto LAB43;

LAB46:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB47;

LAB48:    xsi_set_current_line(26, ng0);

LAB51:    xsi_set_current_line(27, ng0);
    t21 = (t0 + 2248);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memset(t35, 0, 8);
    t24 = (t35 + 4);
    t26 = (t23 + 4);
    t36 = *((unsigned int *)t23);
    t37 = (t36 >> 0);
    *((unsigned int *)t35) = t37;
    t38 = *((unsigned int *)t26);
    t39 = (t38 >> 0);
    *((unsigned int *)t24) = t39;
    t40 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t40 & 15U);
    t41 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t41 & 15U);
    t43 = (t0 + 2088);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    memset(t42, 0, 8);
    t46 = (t42 + 4);
    t47 = (t45 + 4);
    t48 = *((unsigned int *)t45);
    t49 = (t48 >> 0);
    *((unsigned int *)t42) = t49;
    t50 = *((unsigned int *)t47);
    t51 = (t50 >> 0);
    *((unsigned int *)t46) = t51;
    t52 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t52 & 15U);
    t53 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t53 & 15U);
    t55 = (t0 + 1928);
    t56 = (t55 + 56U);
    t57 = *((char **)t56);
    memset(t54, 0, 8);
    t58 = (t54 + 4);
    t59 = (t57 + 4);
    t60 = *((unsigned int *)t57);
    t61 = (t60 >> 0);
    *((unsigned int *)t54) = t61;
    t62 = *((unsigned int *)t59);
    t63 = (t62 >> 0);
    *((unsigned int *)t58) = t63;
    t64 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t64 & 15U);
    t65 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t65 & 15U);
    xsi_vlogtype_concat(t25, 12, 12, 3U, t54, 4, t42, 4, t35, 4);
    t66 = (t0 + 1768);
    xsi_vlogvar_assign_value(t66, t25, 0, 0, 12);
    xsi_set_current_line(28, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(29, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(30, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(31, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB50;

}


extern void work_m_00000000004023846189_1403913271_init()
{
	static char *pe[] = {(void *)Always_9_0};
	xsi_register_didat("work_m_00000000004023846189_1403913271", "isim/tb_lfsr_isim_beh.exe.sim/work/m_00000000004023846189_1403913271.didat");
	xsi_register_executes(pe);
}
