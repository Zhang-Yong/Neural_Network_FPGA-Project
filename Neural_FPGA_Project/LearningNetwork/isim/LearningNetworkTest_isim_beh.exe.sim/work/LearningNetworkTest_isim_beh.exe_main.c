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

#include "xsi.h"

struct XSI_INFO xsi_info;

char *IEEE_P_2592010699;
char *STD_STANDARD;
char *IEEE_P_1242562249;


int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    ieee_p_2592010699_init();
    ieee_p_1242562249_init();
    work_a_3057051570_3212880686_init();
    work_a_0945777706_3212880686_init();
    work_a_4011854284_3212880686_init();
    work_a_3516827427_3212880686_init();
    work_a_3107590630_3212880686_init();
    work_a_1543187360_3212880686_init();
    work_a_4269081088_3212880686_init();
    work_a_3007545959_3212880686_init();
    work_a_2821173151_3212880686_init();
    work_a_3497178169_3212880686_init();
    work_a_0114834199_3212880686_init();
    work_a_2743592254_2372691052_init();


    xsi_register_tops("work_a_2743592254_2372691052");

    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    xsi_register_ieee_std_logic_1164(IEEE_P_2592010699);
    STD_STANDARD = xsi_get_engine_memory("std_standard");
    IEEE_P_1242562249 = xsi_get_engine_memory("ieee_p_1242562249");

    return xsi_run_simulation(argc, argv);

}
