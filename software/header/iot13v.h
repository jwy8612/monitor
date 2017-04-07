#ifndef __iot13v_h
#define __iot13v_h

/* ATtiny13 register and bit name header file
 * for ImageCraft ICCAVR compiler
 */

/* created 2004-01-04
   changed 2004-11-19 (int vector spelling)
   changed 2005-05-12 (EECR bits spelling)
   changed 2005-10-15 (fuses were missing)
   changed 2006-01-16 (ACSR size was int)
   changed 2006-02-11 (change to __iot13v_h)
   changed 2006-02-26 (ADMUX)
 */

/* ADC */
#define ADCSRB	(*(volatile unsigned char *)0x23)
#define ADC	(*(volatile unsigned int *)0x24)
#define ADCL	(*(volatile unsigned char *)0x24)
#define ADCH	(*(volatile unsigned char *)0x25)
#define ADCSRA	(*(volatile unsigned char *)0x26)
#define ADMUX	(*(volatile unsigned char *)0x27)
#define ADCMUX	(*(volatile unsigned char *)0x27)

/* Analog Comp */
#define ACSR	(*(volatile unsigned char *)0x28)

/* Port B */
#define DIDR0	(*(volatile unsigned char *)0x34)
#define PCMSK	(*(volatile unsigned char *)0x35)
#define PINB	(*(volatile unsigned char *)0x36)
#define DDRB	(*(volatile unsigned char *)0x37)
#define PORTB	(*(volatile unsigned char *)0x38)

/* EEPROM */
#define EECR	(*(volatile unsigned char *)0x3C)
#define EEDR	(*(volatile unsigned char *)0x3D)
#define EEARL	(*(volatile unsigned char *)0x3E)
#define EEAR	(*(volatile unsigned char *)0x3E)

/* Watchdog Timer Control Register */
#define WDTCR	(*(volatile unsigned char *)0x41)

/* Clock Control */
#define CLKPR	(*(volatile unsigned char *)0x46)

/* General Control */
#define GTCCR	(*(volatile unsigned char *)0x48)
#define DWDR	(*(volatile unsigned char *)0x4E)

/* Timer/Counter 0 */
#define OCR0B	(*(volatile unsigned char *)0x49)
#define TCCR0A	(*(volatile unsigned char *)0x4F)
#define TCNT0	(*(volatile unsigned char *)0x52)
#define TCCR0B	(*(volatile unsigned char *)0x53)
#define OCR0A	(*(volatile unsigned char *)0x56)

/* RC oscillator */
#define OSCCAL	(*(volatile unsigned char *)0x51)

/* MCU */
#define MCUSR	(*(volatile unsigned char *)0x54)
#define MCUCR	(*(volatile unsigned char *)0x55)

/* Self Programming Feature */
#define SPMCSR	(*(volatile unsigned char *)0x57)

/* Timer/Counter Interrupts */
#define TIFR0	(*(volatile unsigned char *)0x58)
#define TIFR	(*(volatile unsigned char *)0x58)
#define TIMSK0	(*(volatile unsigned char *)0x59)
#define TIMSK	(*(volatile unsigned char *)0x59)

/* General Interrupts */
#define GIFR	(*(volatile unsigned char *)0x5A)
#define GIMSK	(*(volatile unsigned char *)0x5B)

/* Stack Pointer */
#define SP	(*(volatile unsigned char *)0x5D)
#define SPL	(*(volatile unsigned char *)0x5D)

/* Status REGister */
#define SREG	(*(volatile unsigned char *)0x5F)


/* Self Programming Control register */
#define    CTPB     4
#define    RFLB     3
#define    PGWRT    2
#define    PGERS    1
#define    SPMEN    0

/* General Interrupt registers */
#define    INT0     6
#define    PCIE     5

#define    INTF0    6
#define    PCIF     5

/* Timer/Counter Interrupt registers */
#define    OCIE0A   2
#define    OCIE0B   3
#define    TOIE0    1

#define    OCF0A    2
#define    OCF0B    3
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
#define    FOC0A    7
#define    FOC0B    6
#define    WGM02    3
#define    CS02     2
#define    CS01     1
#define    CS00     0

#define    COM0A1   7
#define    COM0A0   6
#define    COM0B1   5
#define    COM0B0   4
#define    WGM01    1
#define    WGM00    0

/* GTCCR */
#define    TSM      7
#define    PSR10    0

/* CLKPR */
#define    CLKPCE   7
#define    CLKPS3   3
#define    CLKPS2   2
#define    CLKPS1   1
#define    CLKPS0   0

/* Watchdog Timer Control Register */
#define    WDTIF    7
#define    WDTIE    6
#define    WDP3     5
#define    WDCE     4
#define    WDE      3
#define    WDP2     2
#define    WDP1     1
#define    WDP0     0

/* EEPROM Control Register */
#define    EEPM1    5
#define    EEPM0    4
#define    EERIE    3
#define    EEMPE    2
#define    EEMWE    2
#define    EEPE     1
#define    EEWE     1
#define    EERE     0

/* Port B bits */
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

#define    PCINT5   5
#define    PCINT4   4
#define    PCINT3   3
#define    PCINT2   2
#define    PCINT1   1
#define    PCINT0   0

#define    ADC0D    5
#define    ADC2D    4
#define    ADC3D    3
#define    ADC1D    2
#define    AIN1D    1
#define    AIN0D    0

/* Analog Comparator Control and Status Register */
#define    ACD      7
#define    ACBG     6
#define    ACO      5
#define    ACI      4
#define    ACIE     3
#define    ACIS1    1
#define    ACIS0    0

/* Analog Digital Converter MUX Register */
#define    REFS0    6
#define    ADLAR    5
#define    MUX1     1
#define    MUX0     0

/* Analog Digital Converter Control/Status Registers */
#define    ADEN     7
#define    ADSC     6
#define    ADATE    5
#define    ADFR     5
#define    ADIF     4
#define    ADIE     3
#define    ADPS2    2
#define    ADPS1    1
#define    ADPS0    0

#define    ACME     6
#define    ADTS2    2
#define    ADTS1    1
#define    ADTS0    0


/* Lock and Fuse Bits with LPM/SPM instructions */

/* lock bits */
#define  LB2      1
#define  LB1      0

/* fuses low bits */
#define  SPIEN    7
#define  WDTON    5
#define  EESAVE   6
#define  CKDIV8   4
#define  SUT1     3
#define  SUT0     2
#define  CKSEL1   1
#define  CKSEL0   0

/* fuses high bits */
#define  SELFPRGEN 4
#define  DWEN     3
#define  BODLEVEL1 2
#define  BODLEVEL0 1
#define  RSTDISBL 0


/* Interrupt Vector Numbers */

#define iv_RESET        1
#define iv_INT0         2
#define iv_EXT_INT0     2
#define iv_PCINT0       3
#define iv_TIM0_OVF     4
#define iv_TIMER0_OVF   4
#define iv_EE_RDY       5
#define iv_ANA_COMP     6
#define iv_TIM0_COMPA   7
#define iv_TIMER0_COMPA 7
#define iv_TIM0_COMPB   8
#define iv_TIMER0_COMPB 8
#define iv_WATCHDOG     9
#define iv_WDT          9
#define iv_ADC          10

/* */

#endif
