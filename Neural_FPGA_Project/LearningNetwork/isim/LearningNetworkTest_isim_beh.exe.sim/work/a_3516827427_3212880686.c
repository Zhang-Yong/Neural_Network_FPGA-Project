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
static const char *ng0 = "E:/Xilinx/Neural_FPGA_Project/Hardware_Neural_Net-master/Node/Node/WeightMult.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_3273497107_1035706684(char *, char *, char *, char *, char *, char *);
char *ieee_p_1242562249_sub_3481121704_1035706684(char *, char *, char *, char *);


static void work_a_3516827427_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    xsi_set_current_line(21, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = (4 - 4);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t7 == (unsigned char)3);
    if (t8 != 0)
        goto LAB3;

LAB4:
LAB5:    t15 = xsi_get_transient_memory(8U);
    memset(t15, 0, 8U);
    t16 = t15;
    memset(t16, (unsigned char)2, 8U);
    t17 = (t0 + 5616);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t15, 8U);
    xsi_driver_first_trans_fast(t17);

LAB2:    t22 = (t0 + 5440);
    *((int *)t22) = 1;

LAB1:    return;
LAB3:    t9 = (t0 + 1032U);
    t10 = *((char **)t9);
    t9 = (t0 + 5616);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t10, 8U);
    xsi_driver_first_trans_fast(t9);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_3516827427_3212880686_p_1(char *t0)
{
    char t17[16];
    char t19[16];
    char t24[16];
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t18;
    char *t20;
    char *t21;
    int t22;
    unsigned int t23;
    char *t25;
    int t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;

LAB0:    xsi_set_current_line(23, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = (3 - 4);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t7 == (unsigned char)3);
    if (t8 != 0)
        goto LAB3;

LAB4:
LAB5:    t31 = xsi_get_transient_memory(8U);
    memset(t31, 0, 8U);
    t32 = t31;
    memset(t32, (unsigned char)2, 8U);
    t33 = (t0 + 5680);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    memcpy(t37, t31, 8U);
    xsi_driver_first_trans_fast(t33);

LAB2:    t38 = (t0 + 5456);
    *((int *)t38) = 1;

LAB1:    return;
LAB3:    t9 = (t0 + 9109);
    t11 = (t0 + 1032U);
    t12 = *((char **)t11);
    t13 = (7 - 7);
    t14 = (t13 * 1U);
    t15 = (0 + t14);
    t11 = (t12 + t15);
    t18 = ((IEEE_P_2592010699) + 4024);
    t20 = (t19 + 0U);
    t21 = (t20 + 0U);
    *((int *)t21) = 0;
    t21 = (t20 + 4U);
    *((int *)t21) = 0;
    t21 = (t20 + 8U);
    *((int *)t21) = 1;
    t22 = (0 - 0);
    t23 = (t22 * 1);
    t23 = (t23 + 1);
    t21 = (t20 + 12U);
    *((unsigned int *)t21) = t23;
    t21 = (t24 + 0U);
    t25 = (t21 + 0U);
    *((int *)t25) = 7;
    t25 = (t21 + 4U);
    *((int *)t25) = 1;
    t25 = (t21 + 8U);
    *((int *)t25) = -1;
    t26 = (1 - 7);
    t23 = (t26 * -1);
    t23 = (t23 + 1);
    t25 = (t21 + 12U);
    *((unsigned int *)t25) = t23;
    t16 = xsi_base_array_concat(t16, t17, t18, (char)97, t9, t19, (char)97, t11, t24, (char)101);
    t25 = (t0 + 5680);
    t27 = (t25 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    memcpy(t30, t16, 8U);
    xsi_driver_first_trans_fast(t25);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_3516827427_3212880686_p_2(char *t0)
{
    char t17[16];
    char t19[16];
    char t24[16];
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t18;
    char *t20;
    char *t21;
    int t22;
    unsigned int t23;
    char *t25;
    int t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;

LAB0:    xsi_set_current_line(25, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = (2 - 4);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t7 == (unsigned char)3);
    if (t8 != 0)
        goto LAB3;

LAB4:
LAB5:    t31 = xsi_get_transient_memory(8U);
    memset(t31, 0, 8U);
    t32 = t31;
    memset(t32, (unsigned char)2, 8U);
    t33 = (t0 + 5744);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    memcpy(t37, t31, 8U);
    xsi_driver_first_trans_fast(t33);

LAB2:    t38 = (t0 + 5472);
    *((int *)t38) = 1;

LAB1:    return;
LAB3:    t9 = (t0 + 9110);
    t11 = (t0 + 1032U);
    t12 = *((char **)t11);
    t13 = (7 - 7);
    t14 = (t13 * 1U);
    t15 = (0 + t14);
    t11 = (t12 + t15);
    t18 = ((IEEE_P_2592010699) + 4024);
    t20 = (t19 + 0U);
    t21 = (t20 + 0U);
    *((int *)t21) = 0;
    t21 = (t20 + 4U);
    *((int *)t21) = 1;
    t21 = (t20 + 8U);
    *((int *)t21) = 1;
    t22 = (1 - 0);
    t23 = (t22 * 1);
    t23 = (t23 + 1);
    t21 = (t20 + 12U);
    *((unsigned int *)t21) = t23;
    t21 = (t24 + 0U);
    t25 = (t21 + 0U);
    *((int *)t25) = 7;
    t25 = (t21 + 4U);
    *((int *)t25) = 2;
    t25 = (t21 + 8U);
    *((int *)t25) = -1;
    t26 = (2 - 7);
    t23 = (t26 * -1);
    t23 = (t23 + 1);
    t25 = (t21 + 12U);
    *((unsigned int *)t25) = t23;
    t16 = xsi_base_array_concat(t16, t17, t18, (char)97, t9, t19, (char)97, t11, t24, (char)101);
    t25 = (t0 + 5744);
    t27 = (t25 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    memcpy(t30, t16, 8U);
    xsi_driver_first_trans_fast(t25);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_3516827427_3212880686_p_3(char *t0)
{
    char t17[16];
    char t19[16];
    char t24[16];
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t18;
    char *t20;
    char *t21;
    int t22;
    unsigned int t23;
    char *t25;
    int t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;

LAB0:    xsi_set_current_line(27, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = (1 - 4);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t7 == (unsigned char)3);
    if (t8 != 0)
        goto LAB3;

LAB4:
LAB5:    t31 = xsi_get_transient_memory(8U);
    memset(t31, 0, 8U);
    t32 = t31;
    memset(t32, (unsigned char)2, 8U);
    t33 = (t0 + 5808);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    memcpy(t37, t31, 8U);
    xsi_driver_first_trans_fast(t33);

LAB2:    t38 = (t0 + 5488);
    *((int *)t38) = 1;

LAB1:    return;
LAB3:    t9 = (t0 + 9112);
    t11 = (t0 + 1032U);
    t12 = *((char **)t11);
    t13 = (7 - 7);
    t14 = (t13 * 1U);
    t15 = (0 + t14);
    t11 = (t12 + t15);
    t18 = ((IEEE_P_2592010699) + 4024);
    t20 = (t19 + 0U);
    t21 = (t20 + 0U);
    *((int *)t21) = 0;
    t21 = (t20 + 4U);
    *((int *)t21) = 2;
    t21 = (t20 + 8U);
    *((int *)t21) = 1;
    t22 = (2 - 0);
    t23 = (t22 * 1);
    t23 = (t23 + 1);
    t21 = (t20 + 12U);
    *((unsigned int *)t21) = t23;
    t21 = (t24 + 0U);
    t25 = (t21 + 0U);
    *((int *)t25) = 7;
    t25 = (t21 + 4U);
    *((int *)t25) = 3;
    t25 = (t21 + 8U);
    *((int *)t25) = -1;
    t26 = (3 - 7);
    t23 = (t26 * -1);
    t23 = (t23 + 1);
    t25 = (t21 + 12U);
    *((unsigned int *)t25) = t23;
    t16 = xsi_base_array_concat(t16, t17, t18, (char)97, t9, t19, (char)97, t11, t24, (char)101);
    t25 = (t0 + 5808);
    t27 = (t25 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    memcpy(t30, t16, 8U);
    xsi_driver_first_trans_fast(t25);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_3516827427_3212880686_p_4(char *t0)
{
    char t17[16];
    char t19[16];
    char t24[16];
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t18;
    char *t20;
    char *t21;
    int t22;
    unsigned int t23;
    char *t25;
    int t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;

LAB0:    xsi_set_current_line(29, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = (0 - 4);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t7 == (unsigned char)3);
    if (t8 != 0)
        goto LAB3;

LAB4:
LAB5:    t31 = xsi_get_transient_memory(8U);
    memset(t31, 0, 8U);
    t32 = t31;
    memset(t32, (unsigned char)2, 8U);
    t33 = (t0 + 5872);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    memcpy(t37, t31, 8U);
    xsi_driver_first_trans_fast(t33);

LAB2:    t38 = (t0 + 5504);
    *((int *)t38) = 1;

LAB1:    return;
LAB3:    t9 = (t0 + 9115);
    t11 = (t0 + 1032U);
    t12 = *((char **)t11);
    t13 = (7 - 7);
    t14 = (t13 * 1U);
    t15 = (0 + t14);
    t11 = (t12 + t15);
    t18 = ((IEEE_P_2592010699) + 4024);
    t20 = (t19 + 0U);
    t21 = (t20 + 0U);
    *((int *)t21) = 0;
    t21 = (t20 + 4U);
    *((int *)t21) = 3;
    t21 = (t20 + 8U);
    *((int *)t21) = 1;
    t22 = (3 - 0);
    t23 = (t22 * 1);
    t23 = (t23 + 1);
    t21 = (t20 + 12U);
    *((unsigned int *)t21) = t23;
    t21 = (t24 + 0U);
    t25 = (t21 + 0U);
    *((int *)t25) = 7;
    t25 = (t21 + 4U);
    *((int *)t25) = 4;
    t25 = (t21 + 8U);
    *((int *)t25) = -1;
    t26 = (4 - 7);
    t23 = (t26 * -1);
    t23 = (t23 + 1);
    t25 = (t21 + 12U);
    *((unsigned int *)t25) = t23;
    t16 = xsi_base_array_concat(t16, t17, t18, (char)97, t9, t19, (char)97, t11, t24, (char)101);
    t25 = (t0 + 5872);
    t27 = (t25 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    memcpy(t30, t16, 8U);
    xsi_driver_first_trans_fast(t25);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_3516827427_3212880686_p_5(char *t0)
{
    char t1[16];
    char t2[16];
    char t3[16];
    char t4[16];
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned char t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;

LAB0:    xsi_set_current_line(32, ng0);

LAB3:    t5 = (t0 + 2472U);
    t6 = *((char **)t5);
    t5 = (t0 + 9016U);
    t7 = (t0 + 2312U);
    t8 = *((char **)t7);
    t7 = (t0 + 9016U);
    t9 = ieee_p_1242562249_sub_3273497107_1035706684(IEEE_P_1242562249, t4, t6, t5, t8, t7);
    t10 = (t0 + 2152U);
    t11 = *((char **)t10);
    t10 = (t0 + 9016U);
    t12 = ieee_p_1242562249_sub_3273497107_1035706684(IEEE_P_1242562249, t3, t9, t4, t11, t10);
    t13 = (t0 + 1992U);
    t14 = *((char **)t13);
    t13 = (t0 + 9016U);
    t15 = ieee_p_1242562249_sub_3273497107_1035706684(IEEE_P_1242562249, t2, t12, t3, t14, t13);
    t16 = (t0 + 1832U);
    t17 = *((char **)t16);
    t16 = (t0 + 9016U);
    t18 = ieee_p_1242562249_sub_3273497107_1035706684(IEEE_P_1242562249, t1, t15, t2, t17, t16);
    t19 = (t1 + 12U);
    t20 = *((unsigned int *)t19);
    t21 = (1U * t20);
    t22 = (8U != t21);
    if (t22 == 1)
        goto LAB5;

LAB6:    t23 = (t0 + 5936);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    memcpy(t27, t18, 8U);
    xsi_driver_first_trans_fast(t23);

LAB2:    t28 = (t0 + 5520);
    *((int *)t28) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(8U, t21, 0);
    goto LAB6;

}

static void work_a_3516827427_3212880686_p_6(char *t0)
{
    char t28[16];
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned char t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;

LAB0:    xsi_set_current_line(33, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = (7 - 7);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t7 == (unsigned char)2);
    if (t8 != 0)
        goto LAB3;

LAB4:    t15 = (t0 + 1192U);
    t16 = *((char **)t15);
    t15 = (t0 + 9119);
    t18 = 1;
    if (5U == 5U)
        goto LAB7;

LAB8:    t18 = 0;

LAB9:    if (t18 != 0)
        goto LAB5;

LAB6:
LAB13:    t29 = (t0 + 1512U);
    t30 = *((char **)t29);
    t29 = (t0 + 8984U);
    t31 = ieee_p_1242562249_sub_3481121704_1035706684(IEEE_P_1242562249, t28, t30, t29);
    t32 = (t0 + 6000);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    memcpy(t36, t31, 8U);
    xsi_driver_first_trans_fast_port(t32);

LAB2:    t37 = (t0 + 5536);
    *((int *)t37) = 1;

LAB1:    return;
LAB3:    t9 = (t0 + 1512U);
    t10 = *((char **)t9);
    t9 = (t0 + 6000);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t10, 8U);
    xsi_driver_first_trans_fast_port(t9);
    goto LAB2;

LAB5:    t22 = (t0 + 1032U);
    t23 = *((char **)t22);
    t22 = (t0 + 6000);
    t24 = (t22 + 56U);
    t25 = *((char **)t24);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    memcpy(t27, t23, 8U);
    xsi_driver_first_trans_fast_port(t22);
    goto LAB2;

LAB7:    t19 = 0;

LAB10:    if (t19 < 5U)
        goto LAB11;
    else
        goto LAB9;

LAB11:    t20 = (t16 + t19);
    t21 = (t15 + t19);
    if (*((unsigned char *)t20) != *((unsigned char *)t21))
        goto LAB8;

LAB12:    t19 = (t19 + 1);
    goto LAB10;

LAB14:    goto LAB2;

}


extern void work_a_3516827427_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3516827427_3212880686_p_0,(void *)work_a_3516827427_3212880686_p_1,(void *)work_a_3516827427_3212880686_p_2,(void *)work_a_3516827427_3212880686_p_3,(void *)work_a_3516827427_3212880686_p_4,(void *)work_a_3516827427_3212880686_p_5,(void *)work_a_3516827427_3212880686_p_6};
	xsi_register_didat("work_a_3516827427_3212880686", "isim/LearningNetworkTest_isim_beh.exe.sim/work/a_3516827427_3212880686.didat");
	xsi_register_executes(pe);
}
