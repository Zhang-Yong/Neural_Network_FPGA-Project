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
extern char *IEEE_P_2717149903;
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1605435078_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );
void ieee_p_2717149903_sub_2486506143_2101202839(char *, char *, char *, unsigned int , unsigned int , char *, char *, char *, char *, unsigned char , char *, char *, char *, unsigned char , unsigned char , unsigned char , unsigned char , unsigned char , unsigned char , unsigned char );
void ieee_p_2717149903_sub_539877840_2101202839(char *, char *, char *, unsigned int , unsigned int , char *, char *, unsigned int , unsigned int , char *);


static void simprim_a_0140400342_4177534006_p_0(char *t0)
{
    char t7[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;

LAB0:    t1 = (t0 + 4008);
    t2 = (t0 + 1736U);
    t3 = (t0 + 5144);
    t4 = (t0 + 1576U);
    t5 = (t0 + 2472U);
    t6 = *((char **)t5);
    memcpy(t7, t6, 16U);
    ieee_p_2717149903_sub_539877840_2101202839(IEEE_P_2717149903, t1, t2, 0U, 0U, t3, t4, 0U, 0U, t7);
    t5 = (t0 + 5016);
    *((int *)t5) = 1;

LAB1:    return;
}

static void simprim_a_0140400342_4177534006_p_1(char *t0)
{
    char t7[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;

LAB0:    t1 = (t0 + 4256);
    t2 = (t0 + 1896U);
    t3 = (t0 + 5208);
    t4 = (t0 + 1416U);
    t5 = (t0 + 2592U);
    t6 = *((char **)t5);
    memcpy(t7, t6, 16U);
    ieee_p_2717149903_sub_539877840_2101202839(IEEE_P_2717149903, t1, t2, 0U, 0U, t3, t4, 0U, 0U, t7);
    t5 = (t0 + 5032);
    *((int *)t5) = 1;

LAB1:    return;
}

static void simprim_a_0140400342_4177534006_p_2(char *t0)
{
    char t11[16];
    char t37[16];
    char t43[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t12;
    char *t13;
    int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;
    int64 t23;
    char *t24;
    char *t25;
    char *t26;
    int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    int64 t33;
    char *t34;
    char *t35;
    char *t36;
    char *t38;
    char *t39;
    int t40;
    unsigned int t41;
    char *t42;
    char *t44;
    char *t45;

LAB0:    t1 = (t0 + 1936U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t3);
    t1 = (t0 + 1776U);
    t5 = *((char **)t1);
    t6 = *((unsigned char *)t5);
    t7 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t4, t6);
    t1 = (t0 + 2952U);
    t8 = *((char **)t1);
    t1 = (t8 + 0);
    *((unsigned char *)t1) = t7;
    t1 = (t0 + 4504);
    t2 = (t0 + 1256U);
    t5 = (t0 + 5272);
    t8 = (t0 + 3072U);
    t9 = *((char **)t8);
    t8 = (t0 + 8084);
    t12 = (t11 + 0U);
    t13 = (t12 + 0U);
    *((int *)t13) = 1;
    t13 = (t12 + 4U);
    *((int *)t13) = 1;
    t13 = (t12 + 8U);
    *((int *)t13) = 1;
    t14 = (1 - 1);
    t15 = (t14 * 1);
    t15 = (t15 + 1);
    t13 = (t12 + 12U);
    *((unsigned int *)t13) = t15;
    t13 = (t0 + 2952U);
    t16 = *((char **)t13);
    t3 = *((unsigned char *)t16);
    t13 = xsi_get_transient_memory(64U);
    memset(t13, 0, 64U);
    t17 = t13;
    t18 = (0 - 0);
    t15 = (t18 * 1);
    t19 = (32U * t15);
    t20 = (t17 + t19);
    t21 = t20;
    t22 = (t0 + 1736U);
    t23 = xsi_signal_get_last_event(t22);
    *((int64 *)t21) = t23;
    t24 = (t20 + 8U);
    t25 = (t0 + 2712U);
    t26 = *((char **)t25);
    memcpy(t24, t26, 16U);
    t25 = (t20 + 24U);
    *((unsigned char *)t25) = (unsigned char)1;
    t27 = (1 - 0);
    t28 = (t27 * 1);
    t29 = (32U * t28);
    t30 = (t17 + t29);
    t31 = t30;
    t32 = (t0 + 1896U);
    t33 = xsi_signal_get_last_event(t32);
    *((int64 *)t31) = t33;
    t34 = (t30 + 8U);
    t35 = (t0 + 2832U);
    t36 = *((char **)t35);
    memcpy(t34, t36, 16U);
    t35 = (t30 + 24U);
    *((unsigned char *)t35) = (unsigned char)1;
    t38 = (t37 + 0U);
    t39 = (t38 + 0U);
    *((int *)t39) = 0;
    t39 = (t38 + 4U);
    *((int *)t39) = 1;
    t39 = (t38 + 8U);
    *((int *)t39) = 1;
    t40 = (1 - 0);
    t41 = (t40 * 1);
    t41 = (t41 + 1);
    t39 = (t38 + 12U);
    *((unsigned int *)t39) = t41;
    t39 = ((IEEE_P_2717149903) + 1288U);
    t42 = *((char **)t39);
    memcpy(t43, t42, 16U);
    t39 = (t0 + 2232U);
    t44 = *((char **)t39);
    t4 = *((unsigned char *)t44);
    t39 = (t0 + 2352U);
    t45 = *((char **)t39);
    t6 = *((unsigned char *)t45);
    ieee_p_2717149903_sub_2486506143_2101202839(IEEE_P_2717149903, t1, t2, 0U, 0U, t5, t9, t8, t11, t3, t13, t37, t43, (unsigned char)3, t4, t6, (unsigned char)1, (unsigned char)0, (unsigned char)0, (unsigned char)0);
    t1 = (t0 + 5048);
    *((int *)t1) = 1;

LAB1:    return;
}


extern void simprim_a_0140400342_4177534006_3963693163_init()
{
	static char *pe[] = {(void *)simprim_a_0140400342_4177534006_p_0,(void *)simprim_a_0140400342_4177534006_p_1,(void *)simprim_a_0140400342_4177534006_p_2};
	xsi_register_didat("simprim_a_0140400342_4177534006_3963693163", "isim/LearningNetworkTest_isim_par.exe.sim/simprim/a_0140400342_4177534006_3963693163.didat");
	xsi_register_executes(pe);
}

extern void simprim_a_0140400342_4177534006_3984802396_init()
{
	static char *pe[] = {(void *)simprim_a_0140400342_4177534006_p_0,(void *)simprim_a_0140400342_4177534006_p_1,(void *)simprim_a_0140400342_4177534006_p_2};
	xsi_register_didat("simprim_a_0140400342_4177534006_3984802396", "isim/LearningNetworkTest_isim_par.exe.sim/simprim/a_0140400342_4177534006_3984802396.didat");
	xsi_register_executes(pe);
}

extern void simprim_a_0140400342_4177534006_1588448980_init()
{
	static char *pe[] = {(void *)simprim_a_0140400342_4177534006_p_0,(void *)simprim_a_0140400342_4177534006_p_1,(void *)simprim_a_0140400342_4177534006_p_2};
	xsi_register_didat("simprim_a_0140400342_4177534006_1588448980", "isim/LearningNetworkTest_isim_par.exe.sim/simprim/a_0140400342_4177534006_1588448980.didat");
	xsi_register_executes(pe);
}

extern void simprim_a_0140400342_4177534006_1558933645_init()
{
	static char *pe[] = {(void *)simprim_a_0140400342_4177534006_p_0,(void *)simprim_a_0140400342_4177534006_p_1,(void *)simprim_a_0140400342_4177534006_p_2};
	xsi_register_didat("simprim_a_0140400342_4177534006_1558933645", "isim/LearningNetworkTest_isim_par.exe.sim/simprim/a_0140400342_4177534006_1558933645.didat");
	xsi_register_executes(pe);
}

extern void simprim_a_0140400342_4177534006_3934972544_init()
{
	static char *pe[] = {(void *)simprim_a_0140400342_4177534006_p_0,(void *)simprim_a_0140400342_4177534006_p_1,(void *)simprim_a_0140400342_4177534006_p_2};
	xsi_register_didat("simprim_a_0140400342_4177534006_3934972544", "isim/LearningNetworkTest_isim_par.exe.sim/simprim/a_0140400342_4177534006_3934972544.didat");
	xsi_register_executes(pe);
}

extern void simprim_a_0140400342_4177534006_3905705177_init()
{
	static char *pe[] = {(void *)simprim_a_0140400342_4177534006_p_0,(void *)simprim_a_0140400342_4177534006_p_1,(void *)simprim_a_0140400342_4177534006_p_2};
	xsi_register_didat("simprim_a_0140400342_4177534006_3905705177", "isim/LearningNetworkTest_isim_par.exe.sim/simprim/a_0140400342_4177534006_3905705177.didat");
	xsi_register_executes(pe);
}

extern void simprim_a_0140400342_4177534006_3678237864_init()
{
	static char *pe[] = {(void *)simprim_a_0140400342_4177534006_p_0,(void *)simprim_a_0140400342_4177534006_p_1,(void *)simprim_a_0140400342_4177534006_p_2};
	xsi_register_didat("simprim_a_0140400342_4177534006_3678237864", "isim/LearningNetworkTest_isim_par.exe.sim/simprim/a_0140400342_4177534006_3678237864.didat");
	xsi_register_executes(pe);
}

extern void simprim_a_0140400342_4177534006_3648768753_init()
{
	static char *pe[] = {(void *)simprim_a_0140400342_4177534006_p_0,(void *)simprim_a_0140400342_4177534006_p_1,(void *)simprim_a_0140400342_4177534006_p_2};
	xsi_register_didat("simprim_a_0140400342_4177534006_3648768753", "isim/LearningNetworkTest_isim_par.exe.sim/simprim/a_0140400342_4177534006_3648768753.didat");
	xsi_register_executes(pe);
}

extern void simprim_a_0140400342_4177534006_1314840419_init()
{
	static char *pe[] = {(void *)simprim_a_0140400342_4177534006_p_0,(void *)simprim_a_0140400342_4177534006_p_1,(void *)simprim_a_0140400342_4177534006_p_2};
	xsi_register_didat("simprim_a_0140400342_4177534006_1314840419", "isim/LearningNetworkTest_isim_par.exe.sim/simprim/a_0140400342_4177534006_1314840419.didat");
	xsi_register_executes(pe);
}

extern void simprim_a_0140400342_4177534006_1335670100_init()
{
	static char *pe[] = {(void *)simprim_a_0140400342_4177534006_p_0,(void *)simprim_a_0140400342_4177534006_p_1,(void *)simprim_a_0140400342_4177534006_p_2};
	xsi_register_didat("simprim_a_0140400342_4177534006_1335670100", "isim/LearningNetworkTest_isim_par.exe.sim/simprim/a_0140400342_4177534006_1335670100.didat");
	xsi_register_executes(pe);
}

extern void simprim_a_0140400342_4177534006_3501149695_init()
{
	static char *pe[] = {(void *)simprim_a_0140400342_4177534006_p_0,(void *)simprim_a_0140400342_4177534006_p_1,(void *)simprim_a_0140400342_4177534006_p_2};
	xsi_register_didat("simprim_a_0140400342_4177534006_3501149695", "isim/LearningNetworkTest_isim_par.exe.sim/simprim/a_0140400342_4177534006_3501149695.didat");
	xsi_register_executes(pe);
}

extern void simprim_a_0140400342_4177534006_3513591752_init()
{
	static char *pe[] = {(void *)simprim_a_0140400342_4177534006_p_0,(void *)simprim_a_0140400342_4177534006_p_1,(void *)simprim_a_0140400342_4177534006_p_2};
	xsi_register_didat("simprim_a_0140400342_4177534006_3513591752", "isim/LearningNetworkTest_isim_par.exe.sim/simprim/a_0140400342_4177534006_3513591752.didat");
	xsi_register_executes(pe);
}

extern void simprim_a_0140400342_4177534006_1444376037_init()
{
	static char *pe[] = {(void *)simprim_a_0140400342_4177534006_p_0,(void *)simprim_a_0140400342_4177534006_p_1,(void *)simprim_a_0140400342_4177534006_p_2};
	xsi_register_didat("simprim_a_0140400342_4177534006_1444376037", "isim/LearningNetworkTest_isim_par.exe.sim/simprim/a_0140400342_4177534006_1444376037.didat");
	xsi_register_executes(pe);
}

extern void simprim_a_0140400342_4177534006_1473578962_init()
{
	static char *pe[] = {(void *)simprim_a_0140400342_4177534006_p_0,(void *)simprim_a_0140400342_4177534006_p_1,(void *)simprim_a_0140400342_4177534006_p_2};
	xsi_register_didat("simprim_a_0140400342_4177534006_1473578962", "isim/LearningNetworkTest_isim_par.exe.sim/simprim/a_0140400342_4177534006_1473578962.didat");
	xsi_register_executes(pe);
}

extern void simprim_a_0140400342_4177534006_2331278511_init()
{
	static char *pe[] = {(void *)simprim_a_0140400342_4177534006_p_0,(void *)simprim_a_0140400342_4177534006_p_1,(void *)simprim_a_0140400342_4177534006_p_2};
	xsi_register_didat("simprim_a_0140400342_4177534006_2331278511", "isim/LearningNetworkTest_isim_par.exe.sim/simprim/a_0140400342_4177534006_2331278511.didat");
	xsi_register_executes(pe);
}

extern void simprim_a_0140400342_4177534006_2335577752_init()
{
	static char *pe[] = {(void *)simprim_a_0140400342_4177534006_p_0,(void *)simprim_a_0140400342_4177534006_p_1,(void *)simprim_a_0140400342_4177534006_p_2};
	xsi_register_didat("simprim_a_0140400342_4177534006_2335577752", "isim/LearningNetworkTest_isim_par.exe.sim/simprim/a_0140400342_4177534006_2335577752.didat");
	xsi_register_executes(pe);
}

extern void simprim_a_0140400342_4177534006_0235011006_init()
{
	static char *pe[] = {(void *)simprim_a_0140400342_4177534006_p_0,(void *)simprim_a_0140400342_4177534006_p_1,(void *)simprim_a_0140400342_4177534006_p_2};
	xsi_register_didat("simprim_a_0140400342_4177534006_0235011006", "isim/LearningNetworkTest_isim_par.exe.sim/simprim/a_0140400342_4177534006_0235011006.didat");
	xsi_register_executes(pe);
}

extern void simprim_a_0140400342_4177534006_0264475017_init()
{
	static char *pe[] = {(void *)simprim_a_0140400342_4177534006_p_0,(void *)simprim_a_0140400342_4177534006_p_1,(void *)simprim_a_0140400342_4177534006_p_2};
	xsi_register_didat("simprim_a_0140400342_4177534006_0264475017", "isim/LearningNetworkTest_isim_par.exe.sim/simprim/a_0140400342_4177534006_0264475017.didat");
	xsi_register_executes(pe);
}

extern void simprim_a_0140400342_4177534006_3498085360_init()
{
	static char *pe[] = {(void *)simprim_a_0140400342_4177534006_p_0,(void *)simprim_a_0140400342_4177534006_p_1,(void *)simprim_a_0140400342_4177534006_p_2};
	xsi_register_didat("simprim_a_0140400342_4177534006_3498085360", "isim/LearningNetworkTest_isim_par.exe.sim/simprim/a_0140400342_4177534006_3498085360.didat");
	xsi_register_executes(pe);
}

extern void simprim_a_0140400342_4177534006_3536205225_init()
{
	static char *pe[] = {(void *)simprim_a_0140400342_4177534006_p_0,(void *)simprim_a_0140400342_4177534006_p_1,(void *)simprim_a_0140400342_4177534006_p_2};
	xsi_register_didat("simprim_a_0140400342_4177534006_3536205225", "isim/LearningNetworkTest_isim_par.exe.sim/simprim/a_0140400342_4177534006_3536205225.didat");
	xsi_register_executes(pe);
}

extern void simprim_a_0140400342_4177534006_2063192955_init()
{
	static char *pe[] = {(void *)simprim_a_0140400342_4177534006_p_0,(void *)simprim_a_0140400342_4177534006_p_1,(void *)simprim_a_0140400342_4177534006_p_2};
	xsi_register_didat("simprim_a_0140400342_4177534006_2063192955", "isim/LearningNetworkTest_isim_par.exe.sim/simprim/a_0140400342_4177534006_2063192955.didat");
	xsi_register_executes(pe);
}

extern void simprim_a_0140400342_4177534006_2025811234_init()
{
	static char *pe[] = {(void *)simprim_a_0140400342_4177534006_p_0,(void *)simprim_a_0140400342_4177534006_p_1,(void *)simprim_a_0140400342_4177534006_p_2};
	xsi_register_didat("simprim_a_0140400342_4177534006_2025811234", "isim/LearningNetworkTest_isim_par.exe.sim/simprim/a_0140400342_4177534006_2025811234.didat");
	xsi_register_executes(pe);
}

extern void simprim_a_0140400342_4177534006_2267354694_init()
{
	static char *pe[] = {(void *)simprim_a_0140400342_4177534006_p_0,(void *)simprim_a_0140400342_4177534006_p_1,(void *)simprim_a_0140400342_4177534006_p_2};
	xsi_register_didat("simprim_a_0140400342_4177534006_2267354694", "isim/LearningNetworkTest_isim_par.exe.sim/simprim/a_0140400342_4177534006_2267354694.didat");
	xsi_register_executes(pe);
}

extern void simprim_a_0140400342_4177534006_2263317617_init()
{
	static char *pe[] = {(void *)simprim_a_0140400342_4177534006_p_0,(void *)simprim_a_0140400342_4177534006_p_1,(void *)simprim_a_0140400342_4177534006_p_2};
	xsi_register_didat("simprim_a_0140400342_4177534006_2263317617", "isim/LearningNetworkTest_isim_par.exe.sim/simprim/a_0140400342_4177534006_2263317617.didat");
	xsi_register_executes(pe);
}

extern void simprim_a_0140400342_4177534006_1234819951_init()
{
	static char *pe[] = {(void *)simprim_a_0140400342_4177534006_p_0,(void *)simprim_a_0140400342_4177534006_p_1,(void *)simprim_a_0140400342_4177534006_p_2};
	xsi_register_didat("simprim_a_0140400342_4177534006_1234819951", "isim/LearningNetworkTest_isim_par.exe.sim/simprim/a_0140400342_4177534006_1234819951.didat");
	xsi_register_executes(pe);
}

extern void simprim_a_0140400342_4177534006_3684685913_init()
{
	static char *pe[] = {(void *)simprim_a_0140400342_4177534006_p_0,(void *)simprim_a_0140400342_4177534006_p_1,(void *)simprim_a_0140400342_4177534006_p_2};
	xsi_register_didat("simprim_a_0140400342_4177534006_3684685913", "isim/LearningNetworkTest_isim_par.exe.sim/simprim/a_0140400342_4177534006_3684685913.didat");
	xsi_register_executes(pe);
}

extern void simprim_a_0140400342_4177534006_3398403887_init()
{
	static char *pe[] = {(void *)simprim_a_0140400342_4177534006_p_0,(void *)simprim_a_0140400342_4177534006_p_1,(void *)simprim_a_0140400342_4177534006_p_2};
	xsi_register_didat("simprim_a_0140400342_4177534006_3398403887", "isim/LearningNetworkTest_isim_par.exe.sim/simprim/a_0140400342_4177534006_3398403887.didat");
	xsi_register_executes(pe);
}

extern void simprim_a_0140400342_4177534006_3410881816_init()
{
	static char *pe[] = {(void *)simprim_a_0140400342_4177534006_p_0,(void *)simprim_a_0140400342_4177534006_p_1,(void *)simprim_a_0140400342_4177534006_p_2};
	xsi_register_didat("simprim_a_0140400342_4177534006_3410881816", "isim/LearningNetworkTest_isim_par.exe.sim/simprim/a_0140400342_4177534006_3410881816.didat");
	xsi_register_executes(pe);
}
