#ifndef __io4433v_h
#define __io4433v_h

/* AT90S4433 register and bit name header file
 * for ImageCraft ICCAVR compiler
 */

/* last changed 01-12-01
 */

/* ADC */
#define ADC 	(*(volatile unsigned int *)0x24)
#define ADCL	(*(volatile unsigned char *)0x24)
#define ADCH	(*(volatile unsigned char *)0x25)
#define ADCSR	(*(volatile unsigned char *)0x26)
#define ADMUX	(*(volatile unsigned char *)0x27)

/* Analog Comparator */
#define ACSR	(*(volatile unsigned char *)0x28)

/* UART */
#define UBRRHI	(*(volatile unsigned char *)0x23)
#define UBRRH	(*(volatile unsigned char *)0x23)
#define UBRR	(*(volatile unsigned char *)0x29)
#define UBRRL	(*(volatile unsigned char *)0x29)
#define UCSRB	(*(volatile unsigned char *)0x2A)
#define UCSRA	(*(volatile unsigned char *)0x2B)
#define UDR 	(*(volatile unsigned char *)0x2C)

/* SPI */
#define SPCR	(*(volatile unsigned char *)0x2D)
#define SPSR	(*(volatile unsigned char *)0x2E)
#define SPDR	(*(volatile unsigned char *)0x2F)

/* Port D */
#define PIND	(*(volatile unsigned char *)0x30)
#define DDRD	(*(volatile unsigned char *)0x31)
#define PORTD	(*(volatile unsigned char *)0x32)

/* Port C */
#define PINC	(*(volatile unsigned char *)0x33)
#define DDRC	(*(volatile unsigned char *)0x34)
#define PORTC	(*(volatile unsigned char *)0x35)

/* Input Pins, Port B */
#define PINB	(*(volatile unsigned char *)0x36)
#define DDRB	(*(volatile unsigned char *)0x37)
#define PORTB	(*(volatile unsigned char *)0x38)

/* EEPROM Control Register */
#define EECR	(*(volatile unsigned char *)0x3C)
#define EEDR	(*(volatile unsigned char *)0x3D)
#define EEAR	(*(volatile unsigned char *)0x3E)
#define EEARL	(*(volatile unsigned char *)0x3E)

/* Watchdog Timer Control Register */
#define WDTCR	(*(volatile unsigned char *)0x41)

/* T/C 1 Input Capture Register */
#define ICR1	(*(volatile unsigned int *)0x46)
#define ICR1L	(*(volatile unsigned char *)0x46)
#define ICR1H	(*(volatile unsigned char *)0x47)
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

/* MCU general Status Register */
#define MCUSR	(*(volatile unsigned char *)0x54)
#define MCUCR	(*(volatile unsigned char *)0x55)

/* Timer/Counter Interrupt Flag register */
#define TIFR	(*(volatile unsigned char *)0x58)
#define TIMSK	(*(volatile unsigned char *)0x59)

/* General Interrupt Flag Register */
#define GIFR	(*(volatile unsigned char *)0x5A)
#define GIMSK	(*(volatile unsigned char *)0x5B)

/* Stack Pointer */
#define SP	(*(volatile unsigned char *)0x5D)
#define SPL	(*(volatile unsigned char *)0x5D)

/* Status REGister */
#define SREG	(*(volatile unsigned char *)0x5F)


/* General Interrupts */
#define    INT1     7
#define    INT0     6

#define    INTF1    7
#define    INTF0    6

/* Timer/Counter Interrupts */
#define    TOIE1    7
#define    OCIE1    6
#define    TICIE1   3
#define    TOIE0    1

#define    TOV1     7
#define    OCF1     6
#define    ICF1     3
#define    TOV0     1

/* MCU general */
#define    WDRF     3
#define    BORF     2
#define    EXTRF    1
#define    PORF     0

#define    SE       5
#define    SM       4
#define    ISC11    3
#define    ISC10    2
#define    ISC01    1
#define    ISC00    0

/* Timer/Counter 0 */
#define    CS02     2
#define    CS01     1
#define    CS00     0

/* Timer/Counter 1 */
#define    COM11    7
#define    COM10    6
#define    PWM11    1
#define    PWM10    0

#define    ICNC1    7
#define    ICES1    6
#define    CTC1     3
#define    CS12     2
#define    CS11     1
#define    CS10     0

/* Watchdog Timer */
#define    WDTOE    4
#define    WDE      3
#define    WDP2     2
#define    WDP1     1
#define    WDP0     0

/* EEPROM */
#define    EERIE    3
#define    EEMWE    2
#define    EEWE     1
#define    EERE     0

/* Port B */
#define    PORTB5   5
#define    PORTB4   4
#define    PORTB3   3
#define    PORTB2   2
#define    PORTB1   1
#define    PORTB0   0

#define    PB5      5
#define    PB4      4
#define    PB3      3
#define    PB2      2
#define    PB1      1
#define    PB0      0

#define    DDB5     5
#define    DDB4     4
#define    DDB3     3
#define    DDB2     2
#define    DDB1     1
#define    DDB0     0

#define    PINB5    5
#define    PINB4    4
#define    PINB3    3
#define    PINB2    2
#define    PINB1    1
#define    PINB0    0

/* Port C */
#define    PORTC5   5
#define    PORTC4   4
#define    PORTC3   3
#define    PORTC2   2
#define    PORTC1   1
#define    PORTC0   0

#define    PC5      5
#define    PC4      4
#define    PC3      3
#define    PC2      2
#define    PC1      1
#define    PC0      0

#define    DDC5     5
#define    DDC4     4
#define    DDC3     3
#define    DDC2     2
#define    DDC1     1
#define    DDC0     0

#define    PINC5    5
#define    PINC4    4
#define    PINC3    3
#define    PINC2    2
#define    PINC1    1
#define    PINC0    0

/* Port D */
#define    PORTD7   7
#define    PORTD6   6
#define    PORTD5   5
#define    PORTD4   4
#define    PORTD3   3
#define    PORTD2   2
#define    PORTD1   1
#define    PORTD0   0

#define    PD7      7
#define    PD6      6
#define    PD5      5
#define    PD4      4
#define    PD3      3
#define    PD2      2
#define    PD1      1
#define    PD0      0

#define    DDD7     7
#define    DDD6     6
#define    DDD5     5
#define    DDD4     4
#define    DDD3     3
#define    DDD2     2
#define    DDD1     1
#define    DDD0     0

#define    PIND7    7
#define    PIND6    6
#define    PIND5    5
#define    PIND4    4
#define    PIND3    3
#define    PIND2    2
#define    PIND1    1
#define    PIND0    0

/* SPI */
#define    SPIE     7
#define    SPE      6
#define    DORD     5
#define    MSTR     4
#define    CPOL     3
#define    CPHA     2
#define    SPR1     1
#define    SPR0     0

#define    SPIF     7
#define    WCOL     6

/* UART */
#define    RXC      7
#define    TXC      6
#define    UDRE     5
#define    FE       4
#define    DOR      3    /*This definition differs from the databook*/
#define    OVR      3    /*This definition differs from the databook*/

#define    RXCIE    7
#define    TXCIE    6
#define    UDRIE    5
#define    RXEN     4
#define    TXEN     3
#define    CHR9     2
#define    RXB8     1
#define    TXB8     0

/* Analog Comparator */
#define    ACD      7
#define    AINBG    6
#define    ACBG     6
#define    ACO      5
#define    ACI      4
#define    ACIE     3
#define    ACIC     2
#define    ACIS1    1
#define    ACIS0    0

/* ADC */
#define    ADCBG    6
#define    MUX2     2
#define    MUX1     1
#define    MUX0     0

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
#define iv_TIMER1_CAPT  4
#define iv_TIMER1_COMP  5
#define iv_TIMER1_OVF   6
#define iv_TIMER0_OVF   7
#define iv_SPI_STC      8
#define iv_UART_RX      9
#define iv_UART_RXC     9
#define iv_UART_DRE     10
#define iv_UART_UDRE    10
#define iv_UART_TX      11
#define iv_UART_TXC     11
#define iv_ADC          12
#define iv_EE_RDY       13
#define iv_EE_READY     13
#define iv_ANA_COMP     14
#define iv_ANALOG_COMP  14

/* */

#endif
