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
static const char *ng0 = "C:/Users/fran/Desktop/UPM/ERASMUS/CUATRIMESTRE 2/CICT - Digital Electronics 1/PROJECT/encoder_ky040.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_3620187407_sub_2546418145_3965413181(char *, char *, char *, int );
char *ieee_p_3620187407_sub_436279890_3965413181(char *, char *, char *, char *, int );
char *ieee_p_3620187407_sub_436351764_3965413181(char *, char *, char *, char *, int );


static void work_a_2655112395_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(58, ng0);

LAB3:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 5088);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast(t1);

LAB2:    t8 = (t0 + 4976);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2655112395_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(59, ng0);

LAB3:    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 5152);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast(t1);

LAB2:    t8 = (t0 + 4992);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2655112395_3212880686_p_2(char *t0)
{
    char *t1;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(60, ng0);

LAB3:    t1 = (t0 + 8809);
    t3 = (t0 + 5216);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 4U);
    xsi_driver_first_trans_fast(t3);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2655112395_3212880686_p_3(char *t0)
{
    char t24[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned char t13;
    unsigned char t14;
    unsigned char t15;
    unsigned char t16;
    unsigned char t17;
    unsigned char t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t25;
    unsigned int t26;

LAB0:    xsi_set_current_line(68, ng0);
    t1 = (t0 + 1152U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    xsi_set_current_line(90, ng0);
    t1 = (t0 + 2152U);
    t3 = *((char **)t1);
    t1 = (t0 + 5408);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t3, 4U);
    xsi_driver_first_trans_fast_port(t1);
    t1 = (t0 + 5008);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(69, ng0);
    t3 = (t0 + 1032U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)2);
    if (t6 != 0)
        goto LAB5;

LAB7:    t1 = (t0 + 1832U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB8;

LAB9:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(70, ng0);
    t3 = xsi_get_transient_memory(4U);
    memset(t3, 0, 4U);
    t7 = t3;
    memset(t7, (unsigned char)2, 4U);
    t8 = (t0 + 5280);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t3, 4U);
    xsi_driver_first_trans_fast(t8);
    goto LAB6;

LAB8:    xsi_set_current_line(72, ng0);
    t1 = (t0 + 2472U);
    t4 = *((char **)t1);
    t6 = *((unsigned char *)t4);
    t1 = (t0 + 2312U);
    t7 = *((char **)t1);
    t13 = *((unsigned char *)t7);
    t14 = (t6 != t13);
    if (t14 != 0)
        goto LAB10;

LAB12:
LAB11:    goto LAB6;

LAB10:    xsi_set_current_line(73, ng0);
    t1 = (t0 + 2632U);
    t8 = *((char **)t1);
    t15 = *((unsigned char *)t8);
    t1 = (t0 + 2472U);
    t9 = *((char **)t1);
    t16 = *((unsigned char *)t9);
    t17 = (t15 != t16);
    if (t17 != 0)
        goto LAB13;

LAB15:    xsi_set_current_line(80, ng0);
    t1 = (t0 + 2152U);
    t3 = *((char **)t1);
    t1 = (t0 + 8768U);
    t2 = ieee_p_3620187407_sub_2546418145_3965413181(IEEE_P_3620187407, t3, t1, 0);
    if (t2 != 0)
        goto LAB21;

LAB23:    xsi_set_current_line(83, ng0);
    t1 = (t0 + 2152U);
    t3 = *((char **)t1);
    t1 = (t0 + 8768U);
    t4 = ieee_p_3620187407_sub_436351764_3965413181(IEEE_P_3620187407, t24, t3, t1, 1);
    t7 = (t24 + 12U);
    t25 = *((unsigned int *)t7);
    t26 = (1U * t25);
    t2 = (4U != t26);
    if (t2 == 1)
        goto LAB24;

LAB25:    t8 = (t0 + 5280);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t4, 4U);
    xsi_driver_first_trans_fast(t8);

LAB22:
LAB14:    xsi_set_current_line(86, ng0);
    t1 = (t0 + 2472U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 5344);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t2;
    xsi_driver_first_trans_fast(t1);
    goto LAB11;

LAB13:    xsi_set_current_line(74, ng0);
    t1 = (t0 + 2152U);
    t10 = *((char **)t1);
    t1 = (t0 + 8768U);
    t18 = ieee_p_3620187407_sub_2546418145_3965413181(IEEE_P_3620187407, t10, t1, 0);
    if (t18 != 0)
        goto LAB16;

LAB18:    xsi_set_current_line(77, ng0);
    t1 = (t0 + 2152U);
    t3 = *((char **)t1);
    t1 = (t0 + 8768U);
    t4 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t24, t3, t1, 1);
    t7 = (t24 + 12U);
    t25 = *((unsigned int *)t7);
    t26 = (1U * t25);
    t2 = (4U != t26);
    if (t2 == 1)
        goto LAB19;

LAB20:    t8 = (t0 + 5280);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t4, 4U);
    xsi_driver_first_trans_fast(t8);

LAB17:    goto LAB14;

LAB16:    xsi_set_current_line(75, ng0);
    t11 = xsi_get_transient_memory(4U);
    memset(t11, 0, 4U);
    t12 = t11;
    memset(t12, (unsigned char)2, 4U);
    t19 = (t0 + 5280);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t11, 4U);
    xsi_driver_first_trans_fast(t19);
    goto LAB17;

LAB19:    xsi_size_not_matching(4U, t26, 0);
    goto LAB20;

LAB21:    xsi_set_current_line(81, ng0);
    t4 = xsi_get_transient_memory(4U);
    memset(t4, 0, 4U);
    t7 = t4;
    memset(t7, (unsigned char)2, 4U);
    t8 = (t0 + 5280);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t4, 4U);
    xsi_driver_first_trans_fast(t8);
    goto LAB22;

LAB24:    xsi_size_not_matching(4U, t26, 0);
    goto LAB25;

}


extern void work_a_2655112395_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2655112395_3212880686_p_0,(void *)work_a_2655112395_3212880686_p_1,(void *)work_a_2655112395_3212880686_p_2,(void *)work_a_2655112395_3212880686_p_3};
	xsi_register_didat("work_a_2655112395_3212880686", "isim/testbench_isim_beh.exe.sim/work/a_2655112395_3212880686.didat");
	xsi_register_executes(pe);
}
