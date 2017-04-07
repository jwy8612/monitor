#ifndef __io2313v_h
#define __io2313v_h

/* AT90S2313 register and bit name header file
 * for ImageCraft ICCAVR compiler
 */

/* last changed 01-12-01
 */

/* Analog Comparator Control and Status Register */
#define ACSR	(*(volatile unsigned char *)0x28)

/* UART */
#define UBRR	(*(volatile unsigned char *)0x29)
#define UCR 	(*(volatile unsigned char *)0x2A)
#define USR 	(*(volatile unsigned char *)0x2B)
#define UDR 	(*(volatile unsigned char *)0x2C)

/* Port D */
#define PIND	(*(volatile unsigned char *)0x30)
#define DDRD	(*(volatile unsigned char *)0x31)
#define PORTD	(*(volatile unsigned char *)0x32)

/* Port B */
#define PINB	(*(volatile unsigned char *)0x36)
#define DDRB	(*(volatile unsigned char *)0x37)
#define PORTB	(*(volatile unsigned char *)0x38)

/* EEPROM */
#define EECR	(*(volatile unsigned char *)0x3C)
#define EEDR	(*(volatile unsigned char *)0x3D)
#define EEAR	(*(volatile unsigned char *)0x3E)
#define EEARL	(*(volatile unsigned char *)0x3E)

/* Watchdog Timer Control Register */
#define WDTCR	(*(volatile unsigned char *)0x41)

/* Timer/Counter 1 */
#define ICR1	(*(volatile unsigned int *)0x44)
#define ICR1L	(*(volatile unsigned char *)0x44)
#define ICR1H	(*(volatile unsigned char *)0x45)
#define OCR1	(*(volatile unsigned int *)0x4A)
#define OCR1L	(*(volatile unsigned char *)0x4A)
#define OCR1H	(*(volatile unsigned char *)0x4B)
#define TCNT1	(*(volatile unsigned int *)0x4C)
#define TCNT1L	(*(volatile unsigned char *)0x4C)
#define TCNT1H	(*(volatile unsigned char *)0x4D)
#define TCCR1B	(*(volatile unsigned char *)0x4E)
#define TCCR1A	(*(volatile unsigned char *)0x4F)

/* Timer/Counter 0 */
#define TCNT0	(*(volatile unsigned char *)0x52)
#define TCCR0	(*(volatile unsigned char *)0x53)

/* MCU general Control Register */
#define MCUCR	(*(volatile unsigned char *)0x55)

/* Timer/Counter Interrupt registers */
#define TIFR	(*(volatile unsigned char *)0x58)
#define TIMSK	(*(volatile unsigned char *)0x59)

/* General Interrupt registers */
#define GIFR	(*(volatile unsigned char *)0x5A)
#define GIMSK	(*(volatile unsigned char *)0x5B)

/* Stack Pointer */
#define SP  	(*(volatile unsigned char *)0x5D)
#define SPL 	(*(volatile unsigned char *)0x5D)

/* Status REGister */
#define SREG	(*(volatile unsigned char *)0x5F)


/* General Interrupt bits */
#define    INT1     7
#define    INT0     6

#define    INTF1    7
#define    INTF0    6

/* Timer/Counter Interrupt bits */
#define    TOIE1    7
#define    OCIE1A   6
#define    TICIE    3
#define    TOIE0    1

#define    TOV1     7
#define    OCF1A    6
#define    ICF1     3
#define    TOV0     1

/* MCU general Control bits */
#define    SE       5
#define    SM       4
#define    ISC11    3
#define    ISC10    2
#define    ISC01    1
#define    ISC00    0

/* Timer/Counter 0 Control bits */
#define    CS02     2
#define    CS01     1
#define    CS00     0

/* Timer/Counter 1 Control bits */
#define    COM1A1   7
#define    COM1A0   6
#define    PWM11    1
#define    PWM10    0

#define    ICNC1    7
#define    ICES1    6
#define    CTC1     3
#define    CS12     2
#define    CS11     1
#define    CS10     0

/* Watchdog Timer Control bits */
#define    WDTOE    4
#define    WDE      3
#define    WDP2     2
#define    WDP1     1
#define    WDP0     0

/* EEprom Control bits */
#define    EEMWE    2
#define    EEWE     1
#define    EERE     0

/* Port B bits */
#define    PORTB7   7
#define    PORTB6   6
#define    PORTB5   5
#define    PORTB4   4
#define    PORTB3   3
#define    PORTB2   2
#define    PORTB1   1
#define    PORTB0   0

#define    PB7      7
#define    PB6      6
#define    PB5      5
#define    PB4      4
#define    PB3      3
#define    PB2      2
#define    PB1      1
#define    PB0      0

#define    DDB7     7
#define    DDB6     6
#define    DDB5     5
#define    DDB4     4
#define    DDB3     3
#define    DDB2     2
#define    DDB1     1
#define    DDB0     0

#define    PINB7    7
#define    PINB6    6
#define    PINB5    5
#define    PINB4    4
#define    PINB3    3
#define    PINB2    2
#define    PINB1    1
#define    PINB0    0

/* Port D bits */
#define    PORTD6   6
#define    PORTD5   5
#define    PORTD4   4
#define    PORTD3   3
#define    PORTD2   2
#define    PORTD1   1
#define    PORTD0   0

#define    PD6      6
#define    PD5      5
#define    PD4      4
#define    PD3      3
#define    PD2      2
#define    PD1      1
#define    PD0      0

#define    DDD6     6
#define    DDD5     5
#define    DDD4     4
#define    DDD3     3
#define    DDD2     2
#define    DDD1     1
#define    DDD0     0

#define    PIND6    6
#define    PIND5    5
#define    PIND4    4
#define    PIND3    3
#define    PIND2    2
#define    PIND1    1
#define    PIND0    0

/* UART Status bits */
#define    RXC      7
#define    TXC      6
#define    UDRE     5
#define    FE       4
#define    DOR      3   /*This definition differs from the databook*/
#define    OVR      3   /*This definition differs from the databook*/

/* UART Control bits */
#define    RXCIE    7
#define    TXCIE    6
#define    UDRIE    5
#define    RXEN     4
#define    TXEN     3
#define    CHR9     2
#define    RXB8     1
#define    TXB8     0

/* Analog Comparator Control and Status bits */
#define    ACD      7
#define    ACO      5
#define    ACI      4
#define    ACIE     3
#define    ACIC     2
#define    ACIS1    1
#define    ACIS0    0


/* Interrupt Vector Numbers */

#define iv_RESET        1
#define iv_INT0         2
#define iv_INT1         3
#define iv_TIMER1_CAPT  4
#define iv_TIMER1_COMP  5
#define iv_TIMER1_OVF   6
#define iv_TIMER0_OVF   7
#define iv_UART_RX      8
#define iv_UART_RXC     8
#define iv_UART_DRE     9
#define iv_UART_UDRE    9
#define iv_UART_TX      10
#define iv_UART_TXC     10
#define iv_ANA_COMP     11
#define iv_ANALOG_COMP  11

/* */

#endif

