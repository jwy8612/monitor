#ifndef __ioRF401v_h
#define __ioRF401v_h

#ifndef _AVR
#warning "You try to include ICCAVR header file."
#else

/* AT86RF401
 * register and bit name header file
 * for ImageCraft ICCAVR compiler
 */

/* last changed 2002/09/25
 */

/* RF controls */
#define LOCKDET1 (*(volatile unsigned char *)0x30)
#define   UPOK    4
#define   ENKO    3
#define   BOD     2
#define   CS1     1
#define   CS0     1
#define VCOTUNE  (*(volatile unsigned char *)0x32)
#define   VCOVDET1  7
#define   VCOVDET0  6
#define PWR_ATTEN (*(volatile unsigned char *)0x34)
#define   PCC2    5
#define   PCC1    4
#define   PCC0    3
#define   PCF2    2
#define   PCF1    1
#define   PCF0    0
#define TX_CNTL  (*(volatile unsigned char *)0x36)
#define   TXE     5
#define   TXK     4
#define   LOC     2
#define LOCKDET2 (*(volatile unsigned char *)0x37)
#define   EUD     7
#define   LAT     6
#define   ULC2    5
#define   ULC1    4
#define   ULC0    3
#define   LC2     2
#define   LC1     1
#define   LC0     0

/* EEPROM Control Register */
#define DEECR	(*(volatile unsigned char *)0x3C)
#define   BSY     3
#define   EEU     2
#define   EEL     1
#define   EER     0
#define DEEDR	(*(volatile unsigned char *)0x3D)
#define DEEARL	(*(volatile unsigned char *)0x3E)
#define DEEAR	(*(volatile unsigned char *)0x3E)

/* Timer/Counter 0 */
#define BTCNT	(*(volatile unsigned char *)0x40)
/* BTCNT[0..7] = C0..7 */
#define BTCR	(*(volatile unsigned char *)0x41)
#define   C9      7
#define   C8      6
#define   M1      5
#define   M0      4
#define   IE      3
#define   F2      2
#define   DATA    1
#define   F0      0

/* Watchdog Timer Control Register */
#define WDTCR	(*(volatile unsigned char *)0x42)
#define   WDTOE   4
#define   WDE     3
#define   WDP2    2
#define   WDP1    1
#define   WDP0    0

/* IO port */
#define IO_ENAB   (*(volatile unsigned char *)0x50)
#define   IOE5    5
#define   IOE4    4
#define   IOE3    3
#define   IOE2    2
#define   IOE1    1
#define   IOE0    0
#define IO_DATOUT (*(volatile unsigned char *)0x51)
#define   IOO5    5
#define   IOO4    4
#define   IOO3    3
#define   IOO2    2
#define   IOO1    1
#define   IOO0    0
#define IO_DATIN  (*(volatile unsigned char *)0x52)
#define   IOI5    5
#define   IOI4    4
#define   IOI3    3
#define   IOI2    2
#define   IOI1    1
#define   IOI0    0

/* chip config */
#define AVR_CONFIG (*(volatile unsigned char *)0x53)
#define   ACS1    6
#define   ACS0    5
#define   TM      4
#define   BD      3
#define   BLI     2
#define   SLEEP   1
#define   BBM     0

/* Button detect */
#define B_DET	  (*(volatile unsigned char *)0x54)
#define   BD5     5
#define   BD4     4
#define   BD3     3
#define   BD2     2
#define   BD1     1
#define   BD0     0

/* Battery Low config */
#define BL_CONFIG (*(volatile unsigned char *)0x55)
#define   BL      7
#define   BLV     6
#define   BL5     5
#define   BL4     4
#define   BL3     3
#define   BL2     2
#define   BL1     1
#define   BL0     0

/* Stack Pointer */
#define SP		(*(volatile unsigned int *)0x5D)
#define SPL		(*(volatile unsigned char *)0x5D)
#define SPH		(*(volatile unsigned char *)0x5E)

/* Status REGister */
#define SREG	(*(volatile unsigned char *)0x5F)


/* General Interrupt registers */
#define    INT0     6
#define    INTF0    6

/* Timer/Counter Interrupt registers */
#define    TOIE0    1
#define    TOV0     1

/* MCU general Control Register */
#define    SE       5
#define    SM       4
#define    ISC01    1
#define    ISC00    0

/* MCU general Status Register */
#define    EXTRF    1
#define    PORF     0

/* Timer/Counter 0 Control Register */
#define    CS02     2
#define    CS01     1
#define    CS00     0

/* Watchdog Timer Control Register */

/* EEPROM Control Register */
#define    EEMWE    2
#define    EEWE     1
#define    EERE     0

/* Data Register, Port B */
#define    PORTB4   4
#define    PORTB3   3
#define    PORTB2   2
#define    PORTB1   1
#define    PORTB0   0

#define    PB4      4
#define    PB3      3
#define    PB2      2
#define    PB1      1
#define    PB0      0

/* Data Direction Register, Port B */
#define    DDB4     4
#define    DDB3     3
#define    DDB2     2
#define    DDB1     1
#define    DDB0     0

/* Input Pins, Port B */


/* Interrupt Vector Numbers */

#define iv_RESET        1
#define iv_BT_F2        2
#define iv_TXDONE       2
#define iv_BT_F0        3

/* with Project Option "Use long Call/Jmp" unchecked */
#define iv_BT_F2_r      3
#define iv_TXDONE_r     3
#define iv_BT_F0_r      5

/* */

#endif
#endif
