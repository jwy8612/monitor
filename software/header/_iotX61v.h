#ifndef ___iotX61v_h
#define ___iotX61v_h

/* ATtinyX61 register and bit name header file
 * for ImageCraft ICC7AVR compiler
 */

/* 2005/08/06 created
   2005/10/15 fixed data size of EEAR and SP
   2006/06/22 preliminary datasheet rev A prereleased
   2009/03/06 changed to ___sram/___eeprom
   2009/03/21 fixed EEAR double define
 */

/* DIDR */
#define DIDR0	(*(volatile unsigned char *)0x21)
#define DIDR1	(*(volatile unsigned char *)0x22)

/* ADC */
#define ADCSRB	(*(volatile unsigned char *)0x23)
#define ADC	(*(volatile unsigned int *)0x24)
#define ADCL	(*(volatile unsigned char *)0x24)
#define ADCH	(*(volatile unsigned char *)0x25)
#define ADCSRA	(*(volatile unsigned char *)0x26)
#define ADMUX	(*(volatile unsigned char *)0x27)
#define ADCMUX	ADMUX

/* Analog Comp */
#define ACSRA	(*(volatile unsigned char *)0x28)
#define ACSRB	(*(volatile unsigned char *)0x29)

/* GPIO */
#define GPIO0	(*(volatile unsigned char *)0x2A)
#define GPIO1	(*(volatile unsigned char *)0x2B)
#define GPIO2	(*(volatile unsigned char *)0x2C)

/* Universal Serial Interface */
#define USICR	(*(volatile unsigned char *)0x2D)
#define USISR	(*(volatile unsigned char *)0x2E)
#define USIDR	(*(volatile unsigned char *)0x2F)
#define USIBR	(*(volatile unsigned char *)0x30)
#define USIPP	(*(volatile unsigned char *)0x31)

/* Timer/Counter 0 */
#define OCR0B	(*(volatile unsigned char *)0x32)
#define OCR0A	(*(volatile unsigned char *)0x33)
#define TCNT0H	(*(volatile unsigned char *)0x34)
#define TCNT0L	(*(volatile unsigned char *)0x52)
#define TCCR0A	(*(volatile unsigned char *)0x35)
#define TCCR0B	(*(volatile unsigned char *)0x53)

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
#ifdef ___eepromGT256B
#define EEAR	(*(volatile unsigned int *)0x3E)
#define EEARL	(*(volatile unsigned char *)0x3E)
#define EEARH	(*(volatile unsigned char *)0x3F)
#else
#define EEAR	(*(volatile unsigned char *)0x3E)
#define EEARL	(*(volatile unsigned char *)0x3E)
#endif

/* DWDR */
#define DWDR	(*(volatile unsigned char *)0x40)

/* Watchdog Timer Control Register */
#define WDTCR	(*(volatile unsigned char *)0x41)

/* PCMSK */
#define PCMSK1	(*(volatile unsigned char *)0x42)
#define PCMSK0	(*(volatile unsigned char *)0x43)

/* Timer/Counter 1 */
#define DT1	(*(volatile unsigned char *)0x44)
#define TC1H	(*(volatile unsigned char *)0x45)
/* #define TCNT1H	(*(volatile unsigned char *)0x45) */
#define TCNT1	(*(volatile unsigned char *)0x4E)
/* #define TCNT1L	(*(volatile unsigned char *)0x4E) */
#define TCCR1E	(*(volatile unsigned char *)0x20)
#define TCCR1D	(*(volatile unsigned char *)0x46)
#define TCCR1C	(*(volatile unsigned char *)0x47)
#define OCR1D	(*(volatile unsigned char *)0x4A)
#define OCR1C	(*(volatile unsigned char *)0x4B)
#define OCR1B	(*(volatile unsigned char *)0x4C)
#define OCR1A	(*(volatile unsigned char *)0x4D)
#define TCCR1B	(*(volatile unsigned char *)0x4F)
#define TCCR1A	(*(volatile unsigned char *)0x50)

/* CLKPR */
#define CLKPR	(*(volatile unsigned char *)0x48)

/* PLL */
#define PLLCSR	(*(volatile unsigned char *)0x49)

/* RC oscillator */
#define OSCCAL	(*(volatile unsigned char *)0x51)

/* MCU */
#define MCUSR	(*(volatile unsigned char *)0x54)
#define MCUCR	(*(volatile unsigned char *)0x55)

/* PRR */
#define PRR	(*(volatile unsigned char *)0x56)

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
#define    INT1     7
#define    INT0     6
#define    PCIE1    5
#define    PCIE0    4

#define    INTF1    7
#define    INTF0    6
#define    PCIF     5

/* Timer/Counter Interrupt registers */
#define    OCIE1D   7
#define    OCIE1A   6
#define    OCIE1B   5
#define    OCIE0A   4
#define    OCIE0B   3
#define    TOIE1    2
#define    TOIE0    1
#define    TICIE0   0

#define    OCF1D    7
#define    OCF1A    6
#define    OCF1B    5
#define    OCF0A    4
#define    OCF0B    3
#define    TOV1     2
#define    TOV0     1
#define    ICF0     0

/* SPM Control Status Register */
#define    CTPB     4
#define    RFLB     3
#define    PGWRT    2
#define    PGERS    1
#define    SPMEN    0

/* PRR */
#define    PRTIM1   3
#define    PRTIM0   2
#define    PRUSI    1
#define    PRADC    0

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
#define    TSM      4
#define    TSM0     4
#define    PSR0     3
#define    CS02     2
#define    CS01     1
#define    CS00     0

#define    TCW0     7
#define    ICEN0    6
#define    ICNC0    5
#define    ICES0    4
#define    ACIC0    3
#define    WGM00    0

/* Timer/Counter 1 Control Registers */
#define    COM1A1   7
#define    COM1A0   6
#define    COM1B1   5
#define    COM1B0   4
#define    FOC1A    3
#define    FOC1B    2
#define    PWM1A    1
#define    PWM1B    0

#define    PWM1X    7
/* #define    CTC1     7 */
#define    PSR1     6
#define    DTPS11   5
#define    DTPS10   4
#define    CS13     3
#define    CS12     2
#define    CS11     1
#define    CS10     0

#define    COM1A1S  7
#define    COM1A0S  6
#define    COM1B1S  5
#define    COM1B0S  4
#define    COM1D1   3
#define    COM1D0   2
#define    FOC1D    1
#define    PWM1D    0

#define    FPIE1    7
#define    FPEN1    6
#define    FPNC1    5
#define    FPES1    4
#define    FPAC1    3
#define    FPF1     2
#define    WGM11    1
#define    WGM10    0

#define    OC1OE5   5
#define    OC1OE4   4
#define    OC1OE3   3
#define    OC1OE2   2
#define    OC1OE1   1
#define    OC1OE0   0

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

/* TC1H */
/* #define    TC19     1 */
/* #define    TC18     0 */

/* DT1 */
#define    DT1H3    7
#define    DT1H2    6
#define    DT1H1    5
#define    DT1H0    4
#define    DT1L3    3
#define    DT1L2    2
#define    DT1L1    1
#define    DT1L0    0

/* PCMSK */
#define    PCINT15  7
#define    PCINT14  6
#define    PCINT13  5
#define    PCINT12  4
#define    PCINT11  3
#define    PCINT10  2
#define    PCINT9   1
#define    PCINT8   0

#define    PCINT7   7
#define    PCINT6   6
#define    PCINT5   5
#define    PCINT4   4
#define    PCINT3   3
#define    PCINT2   2
#define    PCINT1   1
#define    PCINT0   0

/* Watchdog Timer Control Register */
#define    WDIF     7
#define    WDIE     6
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
#define    USIPOS   0

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
#define    HSEL     7
#define    HLEV     6
#define    ACM2     2
#define    ACM1     1
#define    ACM0     0

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
#define    ADATE    5
#define    ADIF     4
#define    ADIE     3
#define    ADPS2    2
#define    ADPS1    1
#define    ADPS0    0

#define    BIN      7
#define    GSEL     6
#define    REFS2    4
#define    MUX5     3
#define    ADTS2    2
#define    ADTS1    1
#define    ADTS0    0

/* DIDR */
#define    ADC10D   7
#define    ADC9D    6
#define    ADC8D    5
#define    ADC7D    4

#define    ADC6D    7
#define    ADC5D    6
#define    ADC4D    5
#define    ADC3D    4
#define    ADC2D    2
#define    ADC1D    1
#define    ADC0D    0

#define    AREFD    3

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
#define iv_PCINT        3
#define iv_PCINT0       3
#define iv_IO_PINS      3
#define iv_PIN_CHANGE   3
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
#define iv_WDT          13
#define iv_INT1         14
#define iv_EXT_INT1     14
#define iv_TIM0_COMPA   15
#define iv_TIMER0_COMPA 15
#define iv_TIM0_COMPB   16
#define iv_TIMER0_COMPB 16
#define iv_TIM0_CAPT    17
#define iv_TIMER0_CAPT  17
#define iv_TIM1_COMPD   18
#define iv_TIMER1_COMPD 18
#define iv_FAULT_PROTECTION 19
#define iv_TIM1_FAULT_PROTECTION 19

/* */

#endif
