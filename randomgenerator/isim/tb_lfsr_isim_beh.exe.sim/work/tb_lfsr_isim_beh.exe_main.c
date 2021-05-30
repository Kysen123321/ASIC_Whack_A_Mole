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



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000000889006411_1044692975_init();
    work_m_00000000001331597630_0331321127_init();
    work_m_00000000004023846189_1403913271_init();
    work_m_00000000002675987042_2825223271_init();
    work_m_00000000004062746852_1740065246_init();
    work_m_00000000001782310071_0249743200_init();
    work_m_00000000002362940361_2773285361_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002362940361_2773285361");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
