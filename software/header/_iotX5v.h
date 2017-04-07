#ifndef ___iotX5v_h
#define ___iotX5v_h

/* ATtinyX5 register and bit name header file
 * for ImageCraft ICCAVR compiler
 */

/* 2004/11/19 created
   2004/12/19 modified int vector spelling
   2005/05/12 added EECR bits EEMPE,EEPE
   2005/05/16 added GPIOR0..2, fixed DTPS1
   2006/01/16 fixed ACSR size
   2006/05/17 added MCUCR bit BODS/BODSE
              changed PLLCSR SM to LSM
   2008/01/21 added SPMCSR,RSIG
              fixed TIMSK,OCIE0B
   2009/03/06 changed to ___sram/___eeprom
   2009/03/21 fixed EEAR double define
 */

/* ADC */
#define ADCSRB	(*(volatile unsigned char *)0x23)
#define ADC	(*(volatile unsigned int *)0x24)
#define ADCL	(*(volatile unsigned char *)0x24)
#define ADCH	(*(volatile unsigned char *)0x25)
#define ADCSRA	(*(volatile unsigned char *)0x26)
#define ADMUX	(*(volatile unsigned char *)0x27)
#define ADCMUX	ADMUX

/* Analog Comp */
#define ACSR	(*(volatile unsigned char *)0x28)

/* Universal Serial Interface */
#define USICR	(*(volatile unsigned char *)0x2D)
#define USISR	(*(volatile unsigned char *)0x2E)
#define USIDR	(*(volatile unsigned char *)0x2F)
#define USIBR	(*(volatile unsigned char *)0x30)

/* GPIO */
#define GPIOR0	(*(volatile unsigned char *)0x31)
#define GPIOR1	(*(volatile unsigned char *)0x32)
#define GPIOR2	(*(volatile unsigned char *)0x33)

/* DIDR */
#define DIDR0	(*(volatile unsigned char *)0x34)

/* PCMSK */
#define PCMSK	(*(volatile unsigned char *)0x35)

/* Port B */
#define PINB	(*(volatile unsigned char *)0x36)
#define DDRB	(*(volatile unsigned char *)0x37)
#define PORTB	(*(volatile unsigned char *)0x38)

/* EEPROM */
#define EECR	(*(volatile unsigned char *)0x3C)
#define EEDR	(*(volatile unsigned char *)0x3D)
#ifdef ___eepromGT256B
#define EEAR	(*(volatile unsigned int *)0x3E)
#define EEARL	(*(volatile unsigned char *)0x3E)
#define EEARH	(*(volatile unsigned char *)0x3F)
#else
#define EEAR	(*(volatile unsigned char *)0x3E)
#define EEARL	(*(volatile unsigned char *)0x3E)
#endif

/* PRR */
#define PRR	(*(volatile unsigned char *)0x40)

/* Watchdog Timer Control Register */
#define WDTCR	(*(volatile unsigned char *)0x41)

/* DWD Register */
#define DWDR	(*(volatile unsigned char *)0x42)

/* DT.. */
#define DTPS1	(*(volatile unsigned char *)0x43)
#define DTPS	(*(volatile unsigned char *)0x43)
#define DT1B	(*(volatile unsigned char *)0x44)
/*#define DTVALB	(*(volatile unsigned char *)0x44)*/
#define DT1A	(*(volatile unsigned char *)0x45)
/*#define DTVALA	(*(volatile unsigned char *)0x45)*/

/* CLK + PLL */
#define CLKPR	(*(volatile unsigned char *)0x46)
#define PLLCSR	(*(volatile unsigned char *)0x47)

/* Timer/Counter 0, part 1 */
#define OCR0B	(*(volatile unsigned char *)0x48)
#define OCR0A	(*(volatile unsigned char *)0x49)
#define TCCR0A	(*(volatile unsigned char *)0x4A)

/* Timer/Counter 1 */
#define OCR1B	(*(volatile unsigned char *)0x4B)
#define GTCCR	(*(volatile unsigned char *)0x4C)
#define OCR1C	(*(volatile unsigned char *)0x4D)
#define OCR1A	(*(volatile unsigned char *)0x4E)
#define TCNT1	(*(volatile unsigned char *)0x4F)
#define TCCR1	(*(volatile unsigned char *)0x50)
#define TCCR1A	(*(volatile unsigned char *)0x50)

/* RC oscillator */
#define OSCCAL	(*(volatile unsigned char *)0x51)

/* Timer/Counter 0, part 2 */
#define TCNT0	(*(volatile unsigned char *)0x52)
#define TCCR0B	(*(volatile unsigned char *)0x53)

/* MCU */
#define MCUSR	(*(volatile unsigned char *)0x54)
#define MCUCR	(*(volatile unsigned char *)0x55)

/* SPM */
#define SPMCSR	(*(volatile unsigned char *)0x57)

/* Timer/Counter Interrupts */
#define TIFR	(*(volatile unsigned char *)0x58)
#define TIMSK	(*(volatile unsigned char *)0x59)

/* General Interrupts */
#define GIFR	(*(volatile unsigned char *)0x5A)
#define GIMSK	(*(volatile unsigned char *)0x5B)

/* Stack Pointer */
#ifdef ___sramGT256B
#define SP	(*(volatile unsigned int *)0x5D)
#define SPL	(*(volatile unsigned char *)0x5D)
#define SPH	(*(volatile unsigned char *)0x5E)
#else
#define SP	(*(volatile unsigned char *)0x5D)
#define SPL	(*(volatile unsigned char *)0x5D)
#endif

/* Status REGister */
#define SREG	(*(volatile unsigned char *)0x5F)

/* General Interrupt registers */
#define    INT0     6
#define    PCIE     5

#define    INTF0    6
#define    PCIF     5

/* Timer/Counter Interrupt registers */
#define    OCIE1A   6
#define    OCIE1B   5
#define    OCIE0A   4
#define    OCIE0B   3
#define    TOIE1    2
#define    TOIE0    1

#define    OCF1A    6
#define    OCF1B    5
#define    OCF0A    4
#define    OCF0B    3
#define    TOV1     2
#define    TOV0     1

/* SPM Control Status Register */
#define    RSIG     5
#define    CTPB     4
#define    RFLB     3
#define    PGWRT    2
#define    PGERS    1
#define    SPMEN    0

/* MCU general Control Register */
#define    BODS     7
#define    PUD      6
#define    SE       5
#define    SM1      4
#define    SM0      3
#define    BODSE    2
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

/* Timer/Counter 1 Control Registers */
#define    CTC1     7
#define    PWM1A    6
#define    COM1A1   5
#define    COM1A0   4
#define    CS13     3
#define    CS12     2
#define    CS11     1
#define    CS10     0

/* GTCCR */
#define    TSM      7
#define    PWM1B    6
#define    COM1B1   5
#define    COM1B0   4
#define    FOC1B    3
#define    FOC1A    2
#define    PSR1     1
#define    PSR0     0

/* PLLCSR */
#define    LSM      7
#define    PCKE     2
#define    PLLE     1
#define    PLOCK    0

/* CLKPR */
#define    CLKPCE   7
#define    CLKPS3   3
#define    CLKPS2   2
#define    CLKPS1   1
#define    CLKPS0   0

/* DT1A */
#define    DT1AH3   7
#define    DT1AH2   6
#define    DT1AH1   5
#define    DT1AH0   4
#define    DT1AL3   3
#define    DT1AL2   2
#define    DT1AL1   1
#define    DT1AL0   0
/*
#define    DTVHA3   7
#define    DTVHA2   6
#define    DTVHA1   5
#define    DTVHA0   4
#define    DTVLA3   3
#define    DTVLA2   2
#define    DTVLA1   1
#define    DTVLA0   0
*/
/* DT1B */
#define    DT1BH3   7
#define    DT1BH2   6
#define    DT1BH1   5
#define    DT1BH0   4
#define    DT1BL3   3
#define    DT1BL2   2
#define    DT1BL1   1
#define    DT1BL0   0
/*
#define    DTVHB3   7
#define    DTVHB2   6
#define    DTVHB1   5
#define    DTVHB0   4
#define    DTVLB3   3
#define    DTVLB2   2
#define    DTVLB1   1
#define    DTVLB0   0
*/
/* DTPS */
#define    DTPS11   1
#define    DTPS10   0

/* Watchdog Timer Control Register */
#define    WDIF     7
#define    WDTIF    7
#define    WDIE     6
#define    WDTIE    6
#define    WDP3     5
#define    WDCE     4
#define    WDE      3
#define    WDP2     2
#define    WDP1     1
#define    WDP0     0

/* PRR */
#define    PRTIM1   3
#define    PRTIM0   2
#define    PRUSI    1
#define    PRADC    0

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

/* PCMSK */
#define    PCINT5   5
#define    PCINT4   4
#define    PCINT3   3
#define    PCINT2   2
#define    PCINT1   1
#define    PCINT0   0

/* DIDR */
#define    ADC0D    5
#define    ADC2D    4
#define    ADC3D    3
#define    ADC1D    2
#define    AIN1D    1
#define    AIN0D    0

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
#define    ACIS1    1
#define    ACIS0    0

/* Analog Digital Converter */
#define    REFS1    7
#define    REFS0    6
#define    ADLAR    5
#define    REFS2    4
#define    MUX3     3
#define    MUX2     2
#define    MUX1     1
#define    MUX0     0

#define    ADEN     7
#define    ADSC     6
#define    ADATE    5
#define    ADIF     4
#define    ADIE     3
#define    ADPS2    2
#define    ADPS1    1
#define    ADPS0    0

#define    BIN      7
#define    ACME     6
#define    IPR      5
#define    ADTS2    2
#define    ADTS1    1
#define    ADTS0    0


/* Lock and Fuse Bits with LPM/SPM instructions */

/* lock bits */
#define  LB2      1
#define  LB1      0

/* fuses low bits */
#define  CKDIV8   7
#define  CKOUT    6
#define  SUT1     5
#define  SUT0     4
#define  CKSEL3   3
#define  CKSEL2   2
#define  CKSEL1   1
#define  CKSEL0   0

/* fuses high bits */
#define  RSTDISBL 7
#define  DWEN     6
#define  SPIEN    5
#define  WDTON    4
#define  EESAVE   3
#define  BODLEVEL2 2
#define  BODLEVEL1 1
#define  BODLEVEL0 0

/* fuses extended bits */
#define  SELFPRGEN 0


/* Interrupt Vector Numbers */

#define iv_RESET        1
#define iv_INT0         2
#define iv_EXT_INT0     2
#define iv_PCINT0       3
#define iv_TIM1_COMPA   4
#define iv_TIMER1_COMPA 4
#define iv_TIM1_OVF     5
#define iv_TIMER1_OVF   5
#define iv_TIM0_OVF     6
#define iv_TIMER0_OVF   6
#define iv_EE_RDY       7
#define iv_ANA_COMP     8
#define iv_ADC          9
#define iv_TIM1_COMPB   10
#define iv_TIMER1_COMPB 10
#define iv_TIM0_COMPA   11
#define iv_TIMER0_COMPA 11
#define iv_TIM0_COMPB   12
#define iv_TIMER0_COMPB 12
#define iv_WDT          13
#define iv_USI_START    14
#define iv_USI_STRT     14
#define iv_USI_OVF      15

/* */

#endif
