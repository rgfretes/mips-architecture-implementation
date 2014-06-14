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
    work_m_00000000002921813545_3261382441_init();
    work_m_00000000002522438234_1026576484_init();
    work_m_00000000003867465871_3264538098_init();
    work_m_00000000003538238476_3383896982_init();
    xilinxcorelib_ver_m_00000000001358910285_1255613365_init();
    xilinxcorelib_ver_m_00000000001687936702_4216483150_init();
    xilinxcorelib_ver_m_00000000000277421008_3854570670_init();
    xilinxcorelib_ver_m_00000000001786246093_0750819482_init();
    work_m_00000000002489990758_2413555135_init();
    work_m_00000000000950111063_3960456194_init();
    work_m_00000000003093705211_2052158563_init();
    work_m_00000000000857419640_3245280214_init();
    work_m_00000000002120488516_2415336395_init();
    work_m_00000000000440839185_3093772975_init();
    work_m_00000000000080201132_1093138604_init();
    work_m_00000000003020784224_2489259343_init();
    work_m_00000000002086211284_3964131445_init();
    work_m_00000000001563312456_2725559894_init();
    work_m_00000000003373423332_1059438215_init();
    work_m_00000000003826848244_0590948025_init();
    xilinxcorelib_ver_m_00000000001358910285_2711597471_init();
    xilinxcorelib_ver_m_00000000001358910285_0057010046_init();
    xilinxcorelib_ver_m_00000000001687936702_1513404662_init();
    xilinxcorelib_ver_m_00000000000277421008_0801757630_init();
    xilinxcorelib_ver_m_00000000001786246093_0404795591_init();
    work_m_00000000000621624591_3749266846_init();
    work_m_00000000003488695348_1774216237_init();
    work_m_00000000000446441880_1323274903_init();
    work_m_00000000002181863375_4059336135_init();
    work_m_00000000002498391542_0700984775_init();
    work_m_00000000004158889600_3390108623_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000004158889600_3390108623");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
