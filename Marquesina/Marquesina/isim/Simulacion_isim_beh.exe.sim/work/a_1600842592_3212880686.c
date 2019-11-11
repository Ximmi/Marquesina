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
static const char *ng0 = "C:/Users/ximmi_000/Documents/DSD/Marquesina/Marquesina/Marquesina.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );


static void work_a_1600842592_3212880686_p_0(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    int t9;
    unsigned char t10;
    char *t11;
    int t12;
    int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 992U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 4856);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(54, ng0);
    t4 = (t0 + 2152U);
    t8 = *((char **)t4);
    t9 = *((int *)t8);
    t10 = (t9 < 1);
    if (t10 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 4984);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((int *)t11) = 0;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 2312U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t1);
    t2 = (t0 + 5048);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t14 = *((char **)t11);
    *((unsigned char *)t14) = t3;
    xsi_driver_first_trans_fast(t2);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(55, ng0);
    t4 = (t0 + 2152U);
    t11 = *((char **)t4);
    t12 = *((int *)t11);
    t13 = (t12 + 1);
    t4 = (t0 + 4984);
    t14 = (t4 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((int *)t17) = t13;
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

}

static void work_a_1600842592_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(64, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 5112);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);
    t1 = (t0 + 4872);
    *((int *)t1) = 1;

LAB1:    return;
}

static void work_a_1600842592_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(70, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 2272U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 4888);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(71, ng0);
    t1 = (t0 + 5176);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 2632U);
    t6 = *((char **)t2);
    t11 = *((unsigned char *)t6);
    t2 = (t0 + 5176);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t12 = (t8 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t11;
    xsi_driver_first_trans_fast(t2);
    goto LAB3;

LAB7:    t2 = (t0 + 2312U);
    t5 = *((char **)t2);
    t9 = *((unsigned char *)t5);
    t10 = (t9 == (unsigned char)3);
    t3 = t10;
    goto LAB9;

}

static void work_a_1600842592_3212880686_p_3(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    static char *nl0[] = {&&LAB3, &&LAB4, &&LAB5, &&LAB6, &&LAB7, &&LAB8, &&LAB9, &&LAB10};

LAB0:    xsi_set_current_line(80, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB2:    t1 = (t0 + 4904);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(82, ng0);
    t4 = (t0 + 8539);
    t6 = (t0 + 5240);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t4, 7U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(83, ng0);
    t1 = (t0 + 8546);
    t4 = (t0 + 5304);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 7U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(84, ng0);
    t1 = (t0 + 8553);
    t4 = (t0 + 5368);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 7U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(85, ng0);
    t1 = (t0 + 8560);
    t4 = (t0 + 5432);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 7U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(86, ng0);
    t1 = (t0 + 5496);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB4:    xsi_set_current_line(88, ng0);
    t1 = (t0 + 8567);
    t4 = (t0 + 5240);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 7U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(89, ng0);
    t1 = (t0 + 8574);
    t4 = (t0 + 5304);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 7U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(90, ng0);
    t1 = (t0 + 8581);
    t4 = (t0 + 5368);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 7U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(91, ng0);
    t1 = (t0 + 8588);
    t4 = (t0 + 5432);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 7U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(92, ng0);
    t1 = (t0 + 5496);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB5:    xsi_set_current_line(94, ng0);
    t1 = (t0 + 8595);
    t4 = (t0 + 5240);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 7U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(95, ng0);
    t1 = (t0 + 8602);
    t4 = (t0 + 5304);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 7U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(96, ng0);
    t1 = (t0 + 8609);
    t4 = (t0 + 5368);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 7U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(97, ng0);
    t1 = (t0 + 8616);
    t4 = (t0 + 5432);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 7U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(98, ng0);
    t1 = (t0 + 5496);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    xsi_set_current_line(100, ng0);
    t1 = (t0 + 8623);
    t4 = (t0 + 5240);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 7U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(101, ng0);
    t1 = (t0 + 8630);
    t4 = (t0 + 5304);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 7U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(102, ng0);
    t1 = (t0 + 8637);
    t4 = (t0 + 5368);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 7U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(103, ng0);
    t1 = (t0 + 8644);
    t4 = (t0 + 5432);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 7U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(104, ng0);
    t1 = (t0 + 5496);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB7:    xsi_set_current_line(106, ng0);
    t1 = (t0 + 8651);
    t4 = (t0 + 5240);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 7U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(107, ng0);
    t1 = (t0 + 8658);
    t4 = (t0 + 5304);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 7U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(108, ng0);
    t1 = (t0 + 8665);
    t4 = (t0 + 5368);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 7U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(109, ng0);
    t1 = (t0 + 8672);
    t4 = (t0 + 5432);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 7U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(110, ng0);
    t1 = (t0 + 5496);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)5;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB8:    xsi_set_current_line(112, ng0);
    t1 = (t0 + 8679);
    t4 = (t0 + 5240);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 7U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(113, ng0);
    t1 = (t0 + 8686);
    t4 = (t0 + 5304);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 7U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(114, ng0);
    t1 = (t0 + 8693);
    t4 = (t0 + 5368);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 7U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(115, ng0);
    t1 = (t0 + 8700);
    t4 = (t0 + 5432);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 7U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(116, ng0);
    t1 = (t0 + 5496);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)6;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB9:    xsi_set_current_line(118, ng0);
    t1 = (t0 + 8707);
    t4 = (t0 + 5240);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 7U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(119, ng0);
    t1 = (t0 + 8714);
    t4 = (t0 + 5304);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 7U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(120, ng0);
    t1 = (t0 + 8721);
    t4 = (t0 + 5368);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 7U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(121, ng0);
    t1 = (t0 + 8728);
    t4 = (t0 + 5432);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 7U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(122, ng0);
    t1 = (t0 + 5496);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)7;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB10:    xsi_set_current_line(124, ng0);
    t1 = (t0 + 8735);
    t4 = (t0 + 5240);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 7U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(125, ng0);
    t1 = (t0 + 8742);
    t4 = (t0 + 5304);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 7U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(126, ng0);
    t1 = (t0 + 8749);
    t4 = (t0 + 5368);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 7U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(127, ng0);
    t1 = (t0 + 8756);
    t4 = (t0 + 5432);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 7U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(128, ng0);
    t1 = (t0 + 5496);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

}


extern void work_a_1600842592_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1600842592_3212880686_p_0,(void *)work_a_1600842592_3212880686_p_1,(void *)work_a_1600842592_3212880686_p_2,(void *)work_a_1600842592_3212880686_p_3};
	xsi_register_didat("work_a_1600842592_3212880686", "isim/Simulacion_isim_beh.exe.sim/work/a_1600842592_3212880686.didat");
	xsi_register_executes(pe);
}
