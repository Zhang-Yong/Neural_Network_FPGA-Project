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
static const char *ng0 = "E:/Xilinx/Pendulum_Actor_Critic_RL/Pendulum_Actor_Critic_RL/ReplayBuffer_tb.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
char *ieee_p_3620187407_sub_767668596_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_1099109676_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 3920);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3080);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 3920);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3080);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_1099109676_2372691052_p_1(char *t0)
{
    char t9[16];
    char t13[16];
    char t17[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned char t8;
    int t10;
    unsigned int t11;
    unsigned char t12;
    char *t14;
    char *t15;
    char *t16;
    char *t18;
    char *t19;
    int t20;
    char *t21;
    unsigned int t22;
    unsigned char t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;

LAB0:    xsi_set_current_line(99, ng0);
    t1 = (t0 + 6964);
    t3 = (t0 + 3984);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 1U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(100, ng0);
    t1 = (t0 + 992U);
    t8 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t8 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 3840);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t2 = (t0 + 6804U);
    t4 = (t0 + 6965);
    t6 = (t9 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 0;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t10 = (0 - 0);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t11;
    t12 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t3, t2, t4, t9);
    if (t12 != 0)
        goto LAB5;

LAB7:
LAB6:    xsi_set_current_line(116, ng0);
    t1 = (t0 + 7018);
    t3 = (t0 + 3984);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 1U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(117, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t1 = (t0 + 6804U);
    t3 = (t0 + 7019);
    t5 = (t9 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 0;
    t6 = (t5 + 4U);
    *((int *)t6) = 0;
    t6 = (t5 + 8U);
    *((int *)t6) = 1;
    t10 = (0 - 0);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t11;
    t8 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t3, t9);
    if (t8 != 0)
        goto LAB15;

LAB17:
LAB16:    goto LAB3;

LAB5:    xsi_set_current_line(105, ng0);
    t7 = (t0 + 1352U);
    t14 = *((char **)t7);
    t7 = (t0 + 6820U);
    t15 = (t0 + 6966);
    t18 = (t17 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = 0;
    t19 = (t18 + 4U);
    *((int *)t19) = 0;
    t19 = (t18 + 8U);
    *((int *)t19) = 1;
    t20 = (0 - 0);
    t11 = (t20 * 1);
    t11 = (t11 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t11;
    t19 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t13, t14, t7, t15, t17);
    t21 = (t13 + 12U);
    t11 = *((unsigned int *)t21);
    t22 = (1U * t11);
    t23 = (14U != t22);
    if (t23 == 1)
        goto LAB8;

LAB9:    t24 = (t0 + 4048);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memcpy(t28, t19, 14U);
    xsi_driver_first_trans_fast(t24);
    xsi_set_current_line(106, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 6852U);
    t3 = (t0 + 6967);
    t5 = (t13 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 0;
    t6 = (t5 + 4U);
    *((int *)t6) = 0;
    t6 = (t5 + 8U);
    *((int *)t6) = 1;
    t10 = (0 - 0);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t11;
    t6 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t9, t2, t1, t3, t13);
    t7 = (t9 + 12U);
    t11 = *((unsigned int *)t7);
    t22 = (1U * t11);
    t8 = (14U != t22);
    if (t8 == 1)
        goto LAB10;

LAB11:    t14 = (t0 + 4112);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t18 = (t16 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t6, 14U);
    xsi_driver_first_trans_fast(t14);
    xsi_set_current_line(107, ng0);
    t1 = (t0 + 6968);
    t3 = (t0 + 4176);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 8U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(108, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 6852U);
    t3 = (t0 + 6976);
    t5 = (t9 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 0;
    t6 = (t5 + 4U);
    *((int *)t6) = 13;
    t6 = (t5 + 8U);
    *((int *)t6) = 1;
    t10 = (13 - 0);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t11;
    t8 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t3, t9);
    if (t8 != 0)
        goto LAB12;

LAB14:
LAB13:    goto LAB6;

LAB8:    xsi_size_not_matching(14U, t22, 0);
    goto LAB9;

LAB10:    xsi_size_not_matching(14U, t22, 0);
    goto LAB11;

LAB12:    xsi_set_current_line(109, ng0);
    t6 = (t0 + 6990);
    t14 = (t0 + 4112);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t18 = (t16 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t6, 14U);
    xsi_driver_first_trans_fast(t14);
    xsi_set_current_line(110, ng0);
    t1 = (t0 + 7004);
    t3 = (t0 + 4048);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 14U);
    xsi_driver_first_trans_fast(t3);
    goto LAB13;

LAB15:    xsi_set_current_line(118, ng0);
    t6 = (t0 + 1352U);
    t7 = *((char **)t6);
    t6 = (t0 + 6820U);
    t14 = (t0 + 7020);
    t16 = (t17 + 0U);
    t18 = (t16 + 0U);
    *((int *)t18) = 0;
    t18 = (t16 + 4U);
    *((int *)t18) = 0;
    t18 = (t16 + 8U);
    *((int *)t18) = 1;
    t20 = (0 - 0);
    t11 = (t20 * 1);
    t11 = (t11 + 1);
    t18 = (t16 + 12U);
    *((unsigned int *)t18) = t11;
    t18 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t13, t7, t6, t14, t17);
    t19 = (t13 + 12U);
    t11 = *((unsigned int *)t19);
    t22 = (1U * t11);
    t12 = (14U != t22);
    if (t12 == 1)
        goto LAB18;

LAB19:    t21 = (t0 + 4048);
    t24 = (t21 + 56U);
    t25 = *((char **)t24);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    memcpy(t27, t18, 14U);
    xsi_driver_first_trans_fast(t21);
    xsi_set_current_line(119, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 6852U);
    t3 = (t0 + 7021);
    t5 = (t13 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 0;
    t6 = (t5 + 4U);
    *((int *)t6) = 0;
    t6 = (t5 + 8U);
    *((int *)t6) = 1;
    t10 = (0 - 0);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t11;
    t6 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t9, t2, t1, t3, t13);
    t7 = (t9 + 12U);
    t11 = *((unsigned int *)t7);
    t22 = (1U * t11);
    t8 = (14U != t22);
    if (t8 == 1)
        goto LAB20;

LAB21:    t14 = (t0 + 4240);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t18 = (t16 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t6, 14U);
    xsi_driver_first_trans_fast(t14);
    xsi_set_current_line(120, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 6868U);
    t3 = (t0 + 7022);
    t5 = (t9 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 0;
    t6 = (t5 + 4U);
    *((int *)t6) = 7;
    t6 = (t5 + 8U);
    *((int *)t6) = 1;
    t10 = (7 - 0);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t11;
    t8 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t3, t9);
    if (t8 == 0)
        goto LAB22;

LAB23:    xsi_set_current_line(122, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 6852U);
    t3 = (t0 + 7050);
    t5 = (t9 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 0;
    t6 = (t5 + 4U);
    *((int *)t6) = 13;
    t6 = (t5 + 8U);
    *((int *)t6) = 1;
    t10 = (13 - 0);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t11;
    t8 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t3, t9);
    if (t8 != 0)
        goto LAB24;

LAB26:
LAB25:    goto LAB16;

LAB18:    xsi_size_not_matching(14U, t22, 0);
    goto LAB19;

LAB20:    xsi_size_not_matching(14U, t22, 0);
    goto LAB21;

LAB22:    t6 = (t0 + 7030);
    xsi_report(t6, 20U, 2);
    goto LAB23;

LAB24:    xsi_set_current_line(123, ng0);
    t6 = (t0 + 7064);
    t14 = (t0 + 4240);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t18 = (t16 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t6, 14U);
    xsi_driver_first_trans_fast(t14);
    xsi_set_current_line(124, ng0);
    t1 = (t0 + 7078);
    t3 = (t0 + 4048);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 14U);
    xsi_driver_first_trans_fast(t3);
    goto LAB25;

}


extern void work_a_1099109676_2372691052_init()
{
	static char *pe[] = {(void *)work_a_1099109676_2372691052_p_0,(void *)work_a_1099109676_2372691052_p_1};
	xsi_register_didat("work_a_1099109676_2372691052", "isim/ReplayBuffer_tb_isim_beh.exe.sim/work/a_1099109676_2372691052.didat");
	xsi_register_executes(pe);
}
