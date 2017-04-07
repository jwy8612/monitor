#ifndef __iom1284pv_h
#define __iom1284pv_h

/* ATmega1284P header file for
 * ImageCraft ICCAVR compiler
 */

/* 2008/04/22 created
   2008/05/26 fixed PRR0
 */


/* IO Registers beyond #include */

/* RAMPZ */
#define RAMPZ	(*(volatile unsigned char *)0x5B)

/* PRR */
#define PRR0	(*(volatile unsigned char *)0x64)
#define PRR1	(*(volatile unsigned char *)0x65)
#define  PRTIM3   0

/* Timer/Counter3 */
#define TIFR3	(*(volatile unsigned char *)0x38)
#define  ICF3     5
#define  OCF3B    2
#define  OCF3A    1
#define  TOV3     0
#define TIMSK3	(*(volatile unsigned char *)0x71)
#define  ICIE3    5
#define  OCIE3B   2
#define  OCIE3A   1
#define  TOIE3    0

#define ICR3	(*(volatile unsigned int *)0x96)
#define ICR3L	(*(volatile unsigned char *)0x96)
#define ICR3H	(*(volatile unsigned char *)0x97)
#define OCR3B	(*(volatile unsigned int *)0x9A)
#define OCR3BL	(*(volatile unsigned char *)0x9A)
#define OCR3BH	(*(volatile unsigned char *)0x9B)
#define OCR3A	(*(volatile unsigned int *)0x98)
#define OCR3AL	(*(volatile unsigned char *)0x98)
#define OCR3AH	(*(volatile unsigned char *)0x99)
#define TCNT3	(*(volatile unsigned int *)0x94)
#define TCNT3L	(*(volatile unsigned char *)0x94)
#define TCNT3H	(*(volatile unsigned char *)0x95)
#define TCCR3C	(*(volatile unsigned char *)0x92)
#define  FOC3A    7
#define  FOC3B    6
#define TCCR3B	(*(volatile unsigned char *)0x91)
#define  ICNC3    7
#define  ICES3    6
#define  WGM33    4
#define  WGM32    3
#define  CS32     2
#define  CS31     1
#define  CS30     0
#define TCCR3A	(*(volatile unsigned char *)0x90)
#define  COM3A1   7
#define  COM3A0   6
#define  COM3B1   5
#define  COM3B0   4
#define  WGM31    1
#define  WGM30    0

/* */

#include <_iom164to644pv.h>

/* Interrupt Vector Numbers beyond #include */

#define iv_TIMER3_CAPT  32
#define iv_TIMER3_COMPA 33
#define iv_TIMER3_COMPB 34
#define iv_TIMER3_OVF   35
#define iv_TIM3_CAPT    32
#define iv_TIM3_COMPA   33
#define iv_TIM3_COMPB   34
#define iv_TIM3_OVF     35

/* */

#endif
