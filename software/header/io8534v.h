#ifndef __io8534v_h
#define __io8534v_h

/* AT90S8534 register and bit name header file
 * for ImageCraft ICCAVR compiler
 * based on io8535.h and 8534 register summary
 */

/* last changed 01-12-01
 */

/* ADC Data register */
#define ADC	(*(volatile unsigned int *)0x24)
#define ADCL	(*(volatile unsigned char *)0x24)
#define ADCH	(*(volatile unsigned char *)0x25)

/* ADC Control and Status Register */
#define ADCSR	(*(volatile unsigned char *)0x26)

/* ADC MUX */
#define ADMUX	(*(volatile unsigned char *)0x27)

/* General Purpose Pin Register */
#define GIPR	(*(volatile unsigned char *)0x30)

/* Data Direction Register, Port A */
#define DDRA	(*(volatile unsigned char *)0x3A)

/* Data Register, Port A */
#define PORTA	(*(volatile unsigned char *)0x3B)

/* EEPROM Control Register */
#define EECR	(*(volatile unsigned char *)0x3C)

/* EEPROM Data Register */
#define EEDR	(*(volatile unsigned char *)0x3D)

/* EEPROM Address Register */
#define EEAR	(*(volatile unsigned int *)0x3E)
#define EEARL	(*(volatile unsigned char *)0x3E)
#define EEARH	(*(volatile unsigned char *)0x3F)

/* Timer/Counter 1 */
#define TCNT1	(*(volatile unsigned int *)0x4C)
#define TCNT1L	(*(volatile unsigned char *)0x4C)
#define TCNT1H	(*(volatile unsigned char *)0x4D)

/* Timer/Counter 1 Control and Status Register */
#define TCCR1	(*(volatile unsigned char *)0x4E)

/* Timer/Counter 0 */
#define TCNT0	(*(volatile unsigned char *)0x52)

/* Timer/Counter 0 Control Register */
#define TCCR0	(*(volatile unsigned char *)0x53)

/* MCU general Control Register */
#define MCUCR	(*(volatile unsigned char *)0x55)

/* Timer/Counter Interrupt Flag register */
#define TIFR	(*(volatile unsigned char *)0x58)

/* Timer/Counter Interrupt MaSK register */
#define TIMSK	(*(volatile unsigned char *)0x59)

/* General Interrupt Flag Register */
#define GIFR	(*(volatile unsigned char *)0x5A)

/* General Interrupt MaSK register */
#define GIMSK	(*(volatile unsigned char *)0x5B)

/* Stack Pointer */
#define SP	(*(volatile unsigned int *)0x5D)
#define SPL	(*(volatile unsigned char *)0x5D)
#define SPH	(*(volatile unsigned char *)0x5E)

/* Status REGister */
#define SREG	(*(volatile unsigned char *)0x5F)

/* General Interrupt MaSK register */
#define    INT1     7
#define    INT0     6

/* General Interrupt Flag Register */
#define    INTF1    7
#define    INTF0    6

/* Timer/Counter Interrupt MaSK register */
#define    TOIE1    2
#define    TOIE0    0

/* Timer/Counter Interrupt Flag register */
#define    TOV1     2
#define    TOV0     0

/* MCU general Control Register */
#define    SE       6
#define    SM       5
#define    ISC1     2
#define    ISC0     0

/* Timer/Counter 0 Control Register */
#define    CS02     2
#define    CS01     1
#define    CS00     0

/* Timer/Counter 1 Control Register */
#define    CS12     2
#define    CS11     1
#define    CS10     0

/* EEPROM Control Register */
#define    EERIE    3
#define    EEMWE    2
#define    EEWE     1
#define    EERE     0

/* Data Register, Port A */
#define    PORTA6   6
#define    PORTA5   5
#define    PORTA4   4
#define    PORTA3   3
#define    PORTA2   2
#define    PORTA1   1
#define    PORTA0   0

#define    PA6      6
#define    PA5      5
#define    PA4      4
#define    PA3      3
#define    PA2      2
#define    PA1      1
#define    PA0      0

/* Data Direction Register, Port A */
#define    DDA6     6
#define    DDA5     5
#define    DDA4     4
#define    DDA3     3
#define    DDA2     2
#define    DDA1     1
#define    DDA0     0

/* GIPR = Port D reduced to INT inputs */
#define	   IPIN1    3
#define    IPIN0    2

/* ADC MUX */
#define    MUX2     2
#define    MUX1     1
#define    MUX0     0

/* ADC Control and Status Register */
#define    ADEN     7
#define    ADSC     6
#define    ADFR     5
#define    ADIF     4
#define    ADIE     3
#define    ADPS2    2
#define    ADPS1    1
#define    ADPS0    0


/* Interrupt Vector Numbers */

#define iv_RESET        1
#define iv_INT0         2
#define iv_INT1         3
#define iv_TIMER1_OVF   4
#define iv_TIMER0_OVF   5
#define iv_ADC          6
#define iv_EE_RDY       7
#define iv_EE_READY     7

/* */

#endif
