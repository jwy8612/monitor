#ifndef __iot26v_h
#define __iot26v_h

/* ATtiny26 register and bit name header file
 * for ImageCraft ICCAVR compiler
 */

/* last changed 2005-10-15
   changed 2006-02-26 (ADMUX)
 */

/* ADC */
#define ADC	(*(volatile unsigned int *)0x24)
#define ADCL	(*(volatile unsigned char *)0x24)
#define ADCH	(*(volatile unsigned char *)0x25)
#define ADCSR	(*(volatile unsigned char *)0x26)
#define ADMUX	(*(volatile unsigned char *)0x27)
#define ADCMUX	(*(volatile unsigned char *)0x27)

/* Analog Comp */
#define ACSR	(*(volatile unsigned char *)0x28)

/* Universal Serial Interface */
#define USICR	(*(volatile unsigned char *)0x2D)
#define USISR	(*(volatile unsigned char *)0x2E)
#define USIDR	(*(volatile unsigned char *)0x2F)

/* Port B */
#define PINB	(*(volatile unsigned char *)0x36)
#define DDRB	(*(volatile unsigned char *)0x37)
#define PORTB	(*(volatile unsigned char *)0x38)

/* Port A */
#define PINA	(*(volatile unsigned char *)0x39)
#define DDRA	(*(volatile unsigned char *)0x3A)
#define PORTA	(*(volatile unsigned char *)0x3B)

/* EEPROM */
#define EECR	(*(volatile unsigned char *)0x3C)
#define EEDR	(*(volatile unsigned char *)0x3D)
#define EEARL	(*(volatile unsigned char *)0x3E)
#define EEAR	(*(volatile unsigned char *)0x3E)

/* Watchdog Timer Control Register */
#define WDTCR	(*(volatile unsigned char *)0x41)

/* PLL */
#define PLLCSR	(*(volatile unsigned char *)0x49)

/* Timer/Counter 1 */
#define OCR1C	(*(volatile unsigned char *)0x4B)
#define OCR1B	(*(volatile unsigned char *)0x4C)
#define OCR1A	(*(volatile unsigned char *)0x4D)
#define TCNT1	(*(volatile unsigned char *)0x4E)
#define TCCR1B	(*(volatile unsigned char *)0x4F)
#define TCCR1A	(*(volatile unsigned char *)0x50)

/* RC oscillator */
#define OSCCAL	(*(volatile unsigned char *)0x51)

/* Timer/Counter 0 */
#define TCNT0	(*(volatile unsigned char *)0x52)
#define TCCR0	(*(volatile unsigned char *)0x53)

/* MCU */
#define MCUSR	(*(volatile unsigned char *)0x54)
#define MCUCR	(*(volatile unsigned char *)0x55)

/* Timer/Counter Interrupts */
#define TIFR	(*(volatile unsigned char *)0x58)
#define TIMSK	(*(volatile unsigned char *)0x59)

/* General Interrupts */
#define GIFR	(*(volatile unsigned char *)0x5A)
#define GIMSK	(*(volatile unsigned char *)0x5B)

/* Stack Pointer */
#define SP	(*(volatile unsigned char *)0x5D)
#define SPL	(*(volatile unsigned char *)0x5D)

/* Status REGister */
#define SREG	(*(volatile unsigned char *)0x5F)

/* General Interrupt registers */
#define    INT0     6
#define    PCIE1    5
#define    PCIE0    4

#define    INTF0    6
#define    PCIF     5

/* Timer/Counter Interrupt registers */
#define    OCIE1A   6
#define    OCIE1B   5
#define    TOIE1    2
#define    TOIE0    1

#define    OCF1A    6
#define    OCF1B    5
#define    TOV1     2
#define    TOV0     1

/* MCU general Control Register */
#define    PUD      6
#define    SE       5
#define    SM1      4
#define    SM0      3
#define    ISC01    1
#define    ISC00    0

/* MCU general Status Register */
#define    WDRF     3
#define    BORF     2
#define    EXTRF    1
#define    PORF     0

/* Timer/Counter 0 Control Register */
#define    PSR0     3
#define    CS02     2
#define    CS01     1
#define    CS00     0

/* Timer/Counter 1 Control Registers */
#define    COM1A1   7
#define    COM1A0   6
#define    COM1B1   5
#define    COM1B0   4
#define    FOC1A    3
#define    FOC1B    2
#define    PWM1A    1
#define    PWM1B    0

#define    CTC1     7
#define    PSR1     6
#define    CS13     3
#define    CS12     2
#define    CS11     1
#define    CS10     0

/* PLLCSR */
#define    PCKE     2
#define    PLLE     1
#define    PLOCK    0

/* Watchdog Timer Control Register */
#define    WDCE     4
#define    WDE      3
#define    WDP2     2
#define    WDP1     1
#define    WDP0     0

/* EEPROM Control Register */
#define    EERIE    3
#define    EEMWE    2
#define    EEWE     1
#define    EERE     0

/* Port A bits */
#define    PORTA7   7
#define    PORTA6   6
#define    PORTA5   5
#define    PORTA4   4
#define    PORTA3   3
#define    PORTA2   2
#define    PORTA1   1
#define    PORTA0   0
#define    PA7      7
#define    PA6      6
#define    PA5      5
#define    PA4      4
#define    PA3      3
#define    PA2      2
#define    PA1      1
#define    PA0      0

#define    DDA7     7
#define    DDA6     6
#define    DDA5     5
#define    DDA4     4
#define    DDA3     3
#define    DDA2     2
#define    DDA1     1
#define    DDA0     0

#define    PINA7    7
#define    PINA6    6
#define    PINA5    5
#define    PINA4    4
#define    PINA3    3
#define    PINA2    2
#define    PINA1    1
#define    PINA0    0

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

/* Universal Serial Interface */
#define    USISIF   7
#define    USIOIF   6
#define    USIPF    5
#define    USIDC    4
#define    USICNT3  3
#define    USICNT2  2
#define    USICNT1  1
#define    USICNT0  0

#define    USISIE   7
#define    USIOIE   6
#define    USIWM1   5
#define    USIWM0   4
#define    USICS1   3
#define    USICS0   2
#define    USICLK   1
#define    USITC    0

/* Analog Comparator Control and Status Register */
#define    ACD      7
#define    ACBG     6
#define    ACO      5
#define    ACI      4
#define    ACIE     3
#define    ACME     2
#define    ACIS1    1
#define    ACIS0    0

/* Analog Digital Converter MUX Register */
#define    REFS1    7
#define    REFS0    6
#define    ADLAR    5
#define    MUX4     4
#define    MUX3     3
#define    MUX2     2
#define    MUX1     1
#define    MUX0     0

/* Analog Digital Converter Control/Status Register */
#define    ADEN     7
#define    ADSC     6
#define    ADFR     5
#define    ADIF     4
#define    ADIE     3
#define    ADPS2    2
#define    ADPS1    1
#define    ADPS0    0


/* Lock and Fuse Bits with LPM/SPM instructions */

/* lock bits */
#define  LB2      1
#define  LB1      0

/* fuses low bits */
#define  PLLCK    7
#define  CKOPT    6
#define  SUT1     5
#define  SUT0     4
#define  CKSEL3   3
#define  CKSEL2   2
#define  CKSEL1   1
#define  CKSEL0   0

/* fuses high bits */
#define  RSTDISBL 4
#define  SPIEN    3
#define  EESAVE   2
#define  BODLEVEL 1
#define  BODEN    0


/* Interrupt Vector Numbers */

#define iv_RESET        1
#define iv_INT0         2
#define iv_EXT_INT0     2
#define iv_IO_PINS      3
#define iv_PIN_CHANGE   3
#define iv_PCINT0       3
#define iv_TIM1_COMPA   4
#define iv_TIM1_CMP1A   4
#define iv_TIMER1_CMPA  4
#define iv_TIMER1_COMPA 4
#define iv_TIM1_COMPB   5
#define iv_TIM1_CMP1B   5
#define iv_TIMER1_CMPB  5
#define iv_TIMER1_COMPB 5
#define iv_TIM1_OVF     6
#define iv_TIMER1_OVF1  6
#define iv_TIMER1_OVF   6
#define iv_TIM0_OVF     7
#define iv_TIMER0_OVF0  7
#define iv_TIMER0_OVF   7
#define iv_USI_STRT     8
#define iv_USI_START    8
#define iv_USI_OVF      9
#define iv_EE_RDY       10
#define iv_ANA_COMP     11
#define iv_ADC          12

/* */

#endif
