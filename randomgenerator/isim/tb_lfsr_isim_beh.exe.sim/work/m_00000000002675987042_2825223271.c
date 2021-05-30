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
static const char *ng0 = "D:/whackamole/randomgenerator/digitdisp.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {50000U, 0U};
static unsigned int ng3[] = {6U, 0U};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {192U, 0U};
static unsigned int ng6[] = {249U, 0U};
static unsigned int ng7[] = {2U, 0U};
static unsigned int ng8[] = {164U, 0U};
static unsigned int ng9[] = {3U, 0U};
static unsigned int ng10[] = {176U, 0U};
static unsigned int ng11[] = {4U, 0U};
static unsigned int ng12[] = {153U, 0U};
static unsigned int ng13[] = {5U, 0U};
static unsigned int ng14[] = {146U, 0U};
static unsigned int ng15[] = {130U, 0U};
static unsigned int ng16[] = {7U, 0U};
static unsigned int ng17[] = {248U, 0U};
static unsigned int ng18[] = {8U, 0U};
static unsigned int ng19[] = {128U, 0U};
static unsigned int ng20[] = {9U, 0U};
static unsigned int ng21[] = {144U, 0U};
static int ng22[] = {2, 0};
static int ng23[] = {3, 0};



static void Always_13_0(char *t0)
{
    char t4[8];
    char t31[8];
    char t32[8];
    char t34[8];
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
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    int t30;
    char *t33;

LAB0:    t1 = (t0 + 3144U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(13, ng0);
    t2 = (t0 + 3464);
    *((int *)t2) = 1;
    t3 = (t0 + 3176);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(14, ng0);

LAB5:    xsi_set_current_line(15, ng0);
    t5 = (t0 + 1344U);
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

LAB11:    xsi_set_current_line(21, ng0);

LAB14:    xsi_set_current_line(22, ng0);
    t2 = (t0 + 2224);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng2)));
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
    t21 = (~(t18));
    t22 = (t15 & t21);
    if (t22 != 0)
        goto LAB18;

LAB15:    if (t18 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t4) = 1;

LAB18:    t20 = (t4 + 4);
    t23 = *((unsigned int *)t20);
    t24 = (~(t23));
    t25 = *((unsigned int *)t4);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 2224);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng22)));
    t12 = ((char*)((ng2)));
    memset(t31, 0, 8);
    xsi_vlog_unsigned_multiply(t31, 32, t6, 32, t12, 32);
    memset(t32, 0, 8);
    t13 = (t5 + 4);
    t19 = (t31 + 4);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t31);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t13);
    t11 = *((unsigned int *)t19);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t13);
    t17 = *((unsigned int *)t19);
    t18 = (t16 | t17);
    t21 = (~(t18));
    t22 = (t15 & t21);
    if (t22 != 0)
        goto LAB48;

LAB45:    if (t18 != 0)
        goto LAB47;

LAB46:    *((unsigned int *)t32) = 1;

LAB48:    t28 = (t32 + 4);
    t23 = *((unsigned int *)t28);
    t24 = (~(t23));
    t25 = *((unsigned int *)t32);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB49;

LAB50:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 2224);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng23)));
    t12 = ((char*)((ng2)));
    memset(t32, 0, 8);
    xsi_vlog_unsigned_multiply(t32, 32, t6, 32, t12, 32);
    memset(t34, 0, 8);
    t13 = (t5 + 4);
    t19 = (t32 + 4);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t32);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t13);
    t11 = *((unsigned int *)t19);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t13);
    t17 = *((unsigned int *)t19);
    t18 = (t16 | t17);
    t21 = (~(t18));
    t22 = (t15 & t21);
    if (t22 != 0)
        goto LAB78;

LAB75:    if (t18 != 0)
        goto LAB77;

LAB76:    *((unsigned int *)t34) = 1;

LAB78:    t28 = (t34 + 4);
    t23 = *((unsigned int *)t28);
    t24 = (~(t23));
    t25 = *((unsigned int *)t34);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB79;

LAB80:    xsi_set_current_line(109, ng0);
    t2 = (t0 + 2224);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng4)));
    memset(t34, 0, 8);
    xsi_vlog_unsigned_add(t34, 32, t5, 32, t6, 32);
    t12 = (t0 + 2224);
    xsi_vlogvar_wait_assign_value(t12, t34, 0, 0, 32, 0LL);

LAB81:
LAB51:
LAB21:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(15, ng0);

LAB13:    xsi_set_current_line(16, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 1904);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 8, 0LL);
    xsi_set_current_line(17, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2224);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(18, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2064);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    goto LAB12;

LAB17:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB18;

LAB19:    xsi_set_current_line(23, ng0);

LAB22:    xsi_set_current_line(24, ng0);
    t28 = ((char*)((ng3)));
    t29 = (t0 + 2064);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 3, 0LL);
    xsi_set_current_line(25, ng0);
    t2 = (t0 + 2224);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng4)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t5, 32, t6, 32);
    t12 = (t0 + 2224);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(26, ng0);
    t2 = (t0 + 1504U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 0);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 15U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 15U);

LAB23:    t6 = ((char*)((ng1)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t6, 4);
    if (t30 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng4)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t30 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng7)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t30 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng9)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t30 == 1)
        goto LAB30;

LAB31:    t2 = ((char*)((ng11)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t30 == 1)
        goto LAB32;

LAB33:    t2 = ((char*)((ng13)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t30 == 1)
        goto LAB34;

LAB35:    t2 = ((char*)((ng3)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t30 == 1)
        goto LAB36;

LAB37:    t2 = ((char*)((ng16)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t30 == 1)
        goto LAB38;

LAB39:    t2 = ((char*)((ng18)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t30 == 1)
        goto LAB40;

LAB41:    t2 = ((char*)((ng20)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t30 == 1)
        goto LAB42;

LAB43:
LAB44:    goto LAB21;

LAB24:    xsi_set_current_line(28, ng0);
    t12 = ((char*)((ng5)));
    t13 = (t0 + 1904);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 8, 0LL);
    goto LAB44;

LAB26:    xsi_set_current_line(30, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 1904);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB44;

LAB28:    xsi_set_current_line(32, ng0);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 1904);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB44;

LAB30:    xsi_set_current_line(35, ng0);
    t3 = ((char*)((ng10)));
    t5 = (t0 + 1904);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB44;

LAB32:    xsi_set_current_line(37, ng0);
    t3 = ((char*)((ng12)));
    t5 = (t0 + 1904);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB44;

LAB34:    xsi_set_current_line(39, ng0);
    t3 = ((char*)((ng14)));
    t5 = (t0 + 1904);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB44;

LAB36:    xsi_set_current_line(42, ng0);
    t3 = ((char*)((ng15)));
    t5 = (t0 + 1904);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB44;

LAB38:    xsi_set_current_line(44, ng0);
    t3 = ((char*)((ng17)));
    t5 = (t0 + 1904);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB44;

LAB40:    xsi_set_current_line(46, ng0);
    t3 = ((char*)((ng19)));
    t5 = (t0 + 1904);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB44;

LAB42:    xsi_set_current_line(48, ng0);
    t3 = ((char*)((ng21)));
    t5 = (t0 + 1904);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB44;

LAB47:    t20 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB48;

LAB49:    xsi_set_current_line(52, ng0);

LAB52:    xsi_set_current_line(53, ng0);
    t29 = ((char*)((ng13)));
    t33 = (t0 + 2064);
    xsi_vlogvar_wait_assign_value(t33, t29, 0, 0, 3, 0LL);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 2224);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng4)));
    memset(t31, 0, 8);
    xsi_vlog_unsigned_add(t31, 32, t5, 32, t6, 32);
    t12 = (t0 + 2224);
    xsi_vlogvar_wait_assign_value(t12, t31, 0, 0, 32, 0LL);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1504U);
    t3 = *((char **)t2);
    memset(t31, 0, 8);
    t2 = (t31 + 4);
    t5 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 4);
    *((unsigned int *)t31) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 4);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t11 & 15U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 15U);

LAB53:    t6 = ((char*)((ng1)));
    t30 = xsi_vlog_unsigned_case_compare(t31, 4, t6, 4);
    if (t30 == 1)
        goto LAB54;

LAB55:    t2 = ((char*)((ng4)));
    t30 = xsi_vlog_unsigned_case_compare(t31, 4, t2, 4);
    if (t30 == 1)
        goto LAB56;

LAB57:    t2 = ((char*)((ng7)));
    t30 = xsi_vlog_unsigned_case_compare(t31, 4, t2, 4);
    if (t30 == 1)
        goto LAB58;

LAB59:    t2 = ((char*)((ng9)));
    t30 = xsi_vlog_unsigned_case_compare(t31, 4, t2, 4);
    if (t30 == 1)
        goto LAB60;

LAB61:    t2 = ((char*)((ng11)));
    t30 = xsi_vlog_unsigned_case_compare(t31, 4, t2, 4);
    if (t30 == 1)
        goto LAB62;

LAB63:    t2 = ((char*)((ng13)));
    t30 = xsi_vlog_unsigned_case_compare(t31, 4, t2, 4);
    if (t30 == 1)
        goto LAB64;

LAB65:    t2 = ((char*)((ng3)));
    t30 = xsi_vlog_unsigned_case_compare(t31, 4, t2, 4);
    if (t30 == 1)
        goto LAB66;

LAB67:    t2 = ((char*)((ng16)));
    t30 = xsi_vlog_unsigned_case_compare(t31, 4, t2, 4);
    if (t30 == 1)
        goto LAB68;

LAB69:    t2 = ((char*)((ng18)));
    t30 = xsi_vlog_unsigned_case_compare(t31, 4, t2, 4);
    if (t30 == 1)
        goto LAB70;

LAB71:    t2 = ((char*)((ng20)));
    t30 = xsi_vlog_unsigned_case_compare(t31, 4, t2, 4);
    if (t30 == 1)
        goto LAB72;

LAB73:
LAB74:    goto LAB51;

LAB54:    xsi_set_current_line(57, ng0);
    t12 = ((char*)((ng5)));
    t13 = (t0 + 1904);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 8, 0LL);
    goto LAB74;

LAB56:    xsi_set_current_line(59, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 1904);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB74;

LAB58:    xsi_set_current_line(61, ng0);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 1904);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB74;

LAB60:    xsi_set_current_line(64, ng0);
    t3 = ((char*)((ng10)));
    t5 = (t0 + 1904);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB74;

LAB62:    xsi_set_current_line(66, ng0);
    t3 = ((char*)((ng12)));
    t5 = (t0 + 1904);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB74;

LAB64:    xsi_set_current_line(68, ng0);
    t3 = ((char*)((ng14)));
    t5 = (t0 + 1904);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB74;

LAB66:    xsi_set_current_line(71, ng0);
    t3 = ((char*)((ng15)));
    t5 = (t0 + 1904);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB74;

LAB68:    xsi_set_current_line(73, ng0);
    t3 = ((char*)((ng17)));
    t5 = (t0 + 1904);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB74;

LAB70:    xsi_set_current_line(75, ng0);
    t3 = ((char*)((ng19)));
    t5 = (t0 + 1904);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB74;

LAB72:    xsi_set_current_line(77, ng0);
    t3 = ((char*)((ng21)));
    t5 = (t0 + 1904);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB74;

LAB77:    t20 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB78;

LAB79:    xsi_set_current_line(82, ng0);

LAB82:    xsi_set_current_line(83, ng0);
    t29 = ((char*)((ng9)));
    t33 = (t0 + 2064);
    xsi_vlogvar_wait_assign_value(t33, t29, 0, 0, 3, 0LL);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2224);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 1504U);
    t3 = *((char **)t2);
    memset(t32, 0, 8);
    t2 = (t32 + 4);
    t5 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 8);
    *((unsigned int *)t32) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 8);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t11 & 15U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 15U);

LAB83:    t6 = ((char*)((ng1)));
    t30 = xsi_vlog_unsigned_case_compare(t32, 4, t6, 4);
    if (t30 == 1)
        goto LAB84;

LAB85:    t2 = ((char*)((ng4)));
    t30 = xsi_vlog_unsigned_case_compare(t32, 4, t2, 4);
    if (t30 == 1)
        goto LAB86;

LAB87:    t2 = ((char*)((ng7)));
    t30 = xsi_vlog_unsigned_case_compare(t32, 4, t2, 4);
    if (t30 == 1)
        goto LAB88;

LAB89:    t2 = ((char*)((ng9)));
    t30 = xsi_vlog_unsigned_case_compare(t32, 4, t2, 4);
    if (t30 == 1)
        goto LAB90;

LAB91:    t2 = ((char*)((ng11)));
    t30 = xsi_vlog_unsigned_case_compare(t32, 4, t2, 4);
    if (t30 == 1)
        goto LAB92;

LAB93:    t2 = ((char*)((ng13)));
    t30 = xsi_vlog_unsigned_case_compare(t32, 4, t2, 4);
    if (t30 == 1)
        goto LAB94;

LAB95:    t2 = ((char*)((ng3)));
    t30 = xsi_vlog_unsigned_case_compare(t32, 4, t2, 4);
    if (t30 == 1)
        goto LAB96;

LAB97:    t2 = ((char*)((ng16)));
    t30 = xsi_vlog_unsigned_case_compare(t32, 4, t2, 4);
    if (t30 == 1)
        goto LAB98;

LAB99:    t2 = ((char*)((ng18)));
    t30 = xsi_vlog_unsigned_case_compare(t32, 4, t2, 4);
    if (t30 == 1)
        goto LAB100;

LAB101:    t2 = ((char*)((ng20)));
    t30 = xsi_vlog_unsigned_case_compare(t32, 4, t2, 4);
    if (t30 == 1)
        goto LAB102;

LAB103:
LAB104:    goto LAB81;

LAB84:    xsi_set_current_line(87, ng0);
    t12 = ((char*)((ng5)));
    t13 = (t0 + 1904);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 8, 0LL);
    goto LAB104;

LAB86:    xsi_set_current_line(89, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 1904);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB104;

LAB88:    xsi_set_current_line(91, ng0);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 1904);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB104;

LAB90:    xsi_set_current_line(93, ng0);
    t3 = ((char*)((ng10)));
    t5 = (t0 + 1904);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB104;

LAB92:    xsi_set_current_line(95, ng0);
    t3 = ((char*)((ng12)));
    t5 = (t0 + 1904);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB104;

LAB94:    xsi_set_current_line(97, ng0);
    t3 = ((char*)((ng14)));
    t5 = (t0 + 1904);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB104;

LAB96:    xsi_set_current_line(99, ng0);
    t3 = ((char*)((ng15)));
    t5 = (t0 + 1904);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB104;

LAB98:    xsi_set_current_line(101, ng0);
    t3 = ((char*)((ng17)));
    t5 = (t0 + 1904);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB104;

LAB100:    xsi_set_current_line(103, ng0);
    t3 = ((char*)((ng19)));
    t5 = (t0 + 1904);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB104;

LAB102:    xsi_set_current_line(105, ng0);
    t3 = ((char*)((ng21)));
    t5 = (t0 + 1904);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB104;

}


extern void work_m_00000000002675987042_2825223271_init()
{
	static char *pe[] = {(void *)Always_13_0};
	xsi_register_didat("work_m_00000000002675987042_2825223271", "isim/tb_lfsr_isim_beh.exe.sim/work/m_00000000002675987042_2825223271.didat");
	xsi_register_executes(pe);
}
