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
static const char *ng0 = "C:/Users/fran/Desktop/UPM/ERASMUS/CUATRIMESTRE 2/CICT - Digital Electronics 1/COUNTDOWNPROJECT_FINAL/tb_countdown.vhd";



static void work_a_3011744462_2372691052_p_0(char *t0)
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

LAB2:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 3904);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3080);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 3904);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(88, ng0);
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

static void work_a_3011744462_2372691052_p_1(char *t0)
{
    char *t1;
    char *t2;
    int64 t3;
    char *t4;
    int64 t5;
    int t6;
    int t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    int t13;

LAB0:    t1 = (t0 + 3520U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(97, ng0);
    t3 = (100 * 1000LL);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, t3);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 2288U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t5 = (t3 * 10);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, t5);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 7268);
    *((int *)t2) = 0;
    t4 = (t0 + 7272);
    *((int *)t4) = 4;
    t6 = 0;
    t7 = 4;

LAB12:    if (t6 <= t7)
        goto LAB13;

LAB15:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 4096);
    t4 = (t2 + 56U);
    t8 = *((char **)t4);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(113, ng0);
    t2 = (t0 + 2288U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, t3);

LAB35:    *((char **)t1) = &&LAB36;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB13:    xsi_set_current_line(102, ng0);
    t8 = (t0 + 3968);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(103, ng0);
    t3 = (5 * 1000000000LL);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, t3);

LAB18:    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB14:    t2 = (t0 + 7268);
    t6 = *((int *)t2);
    t4 = (t0 + 7272);
    t7 = *((int *)t4);
    if (t6 == t7)
        goto LAB15;

LAB32:    t13 = (t6 + 1);
    t6 = t13;
    t8 = (t0 + 7268);
    *((int *)t8) = t6;
    goto LAB12;

LAB16:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 4032);
    t4 = (t2 + 56U);
    t8 = *((char **)t4);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(105, ng0);
    t3 = (5 * 1000000000LL);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, t3);

LAB22:    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB17:    goto LAB16;

LAB19:    goto LAB17;

LAB20:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 3968);
    t4 = (t2 + 56U);
    t8 = *((char **)t4);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(107, ng0);
    t3 = (5 * 1000000000LL);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, t3);

LAB26:    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB21:    goto LAB20;

LAB23:    goto LAB21;

LAB24:    xsi_set_current_line(108, ng0);
    t2 = (t0 + 4032);
    t4 = (t2 + 56U);
    t8 = *((char **)t4);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(109, ng0);
    t3 = (5 * 1000000000LL);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, t3);

LAB30:    *((char **)t1) = &&LAB31;
    goto LAB1;

LAB25:    goto LAB24;

LAB27:    goto LAB25;

LAB28:    goto LAB14;

LAB29:    goto LAB28;

LAB31:    goto LAB29;

LAB33:    xsi_set_current_line(114, ng0);
    t2 = (t0 + 4096);
    t4 = (t2 + 56U);
    t8 = *((char **)t4);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(117, ng0);
    t2 = (t0 + 7276);
    *((int *)t2) = 0;
    t4 = (t0 + 7280);
    *((int *)t4) = 10;
    t6 = 0;
    t7 = 10;

LAB37:    if (t6 <= t7)
        goto LAB38;

LAB40:    xsi_set_current_line(123, ng0);
    t2 = (t0 + 4096);
    t4 = (t2 + 56U);
    t8 = *((char **)t4);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(123, ng0);
    t2 = (t0 + 2288U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, t3);

LAB52:    *((char **)t1) = &&LAB53;
    goto LAB1;

LAB34:    goto LAB33;

LAB36:    goto LAB34;

LAB38:    xsi_set_current_line(118, ng0);
    t8 = (t0 + 4160);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(118, ng0);
    t2 = (t0 + 2288U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, t3);

LAB43:    *((char **)t1) = &&LAB44;
    goto LAB1;

LAB39:    t2 = (t0 + 7276);
    t6 = *((int *)t2);
    t4 = (t0 + 7280);
    t7 = *((int *)t4);
    if (t6 == t7)
        goto LAB40;

LAB49:    t13 = (t6 + 1);
    t6 = t13;
    t8 = (t0 + 7276);
    *((int *)t8) = t6;
    goto LAB37;

LAB41:    xsi_set_current_line(119, ng0);
    t2 = (t0 + 4160);
    t4 = (t2 + 56U);
    t8 = *((char **)t4);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(119, ng0);
    t2 = (t0 + 2288U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t5 = (t3 * 3);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, t5);

LAB47:    *((char **)t1) = &&LAB48;
    goto LAB1;

LAB42:    goto LAB41;

LAB44:    goto LAB42;

LAB45:    goto LAB39;

LAB46:    goto LAB45;

LAB48:    goto LAB46;

LAB50:    xsi_set_current_line(124, ng0);
    t2 = (t0 + 4096);
    t4 = (t2 + 56U);
    t8 = *((char **)t4);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(127, ng0);
    t2 = (t0 + 7284);
    *((int *)t2) = 0;
    t4 = (t0 + 7288);
    *((int *)t4) = 100;
    t6 = 0;
    t7 = 100;

LAB54:    if (t6 <= t7)
        goto LAB55;

LAB57:    xsi_set_current_line(132, ng0);

LAB69:    *((char **)t1) = &&LAB70;
    goto LAB1;

LAB51:    goto LAB50;

LAB53:    goto LAB51;

LAB55:    xsi_set_current_line(128, ng0);
    t8 = (t0 + 4160);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(128, ng0);
    t2 = (t0 + 2288U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, t3);

LAB60:    *((char **)t1) = &&LAB61;
    goto LAB1;

LAB56:    t2 = (t0 + 7284);
    t6 = *((int *)t2);
    t4 = (t0 + 7288);
    t7 = *((int *)t4);
    if (t6 == t7)
        goto LAB57;

LAB66:    t13 = (t6 + 1);
    t6 = t13;
    t8 = (t0 + 7284);
    *((int *)t8) = t6;
    goto LAB54;

LAB58:    xsi_set_current_line(129, ng0);
    t2 = (t0 + 4160);
    t4 = (t2 + 56U);
    t8 = *((char **)t4);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(129, ng0);
    t2 = (t0 + 2288U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t5 = (t3 * 3);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, t5);

LAB64:    *((char **)t1) = &&LAB65;
    goto LAB1;

LAB59:    goto LAB58;

LAB61:    goto LAB59;

LAB62:    goto LAB56;

LAB63:    goto LAB62;

LAB65:    goto LAB63;

LAB67:    goto LAB2;

LAB68:    goto LAB67;

LAB70:    goto LAB68;

}


extern void work_a_3011744462_2372691052_init()
{
	static char *pe[] = {(void *)work_a_3011744462_2372691052_p_0,(void *)work_a_3011744462_2372691052_p_1};
	xsi_register_didat("work_a_3011744462_2372691052", "isim/tb_countdown_isim_beh.exe.sim/work/a_3011744462_2372691052.didat");
	xsi_register_executes(pe);
}
