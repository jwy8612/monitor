#ifndef ___iotX4v_h
#define ___iotX4v_h

/* ATtinyX4 register and bit name header file
 * for ImageCraft ICC7AVR compiler
 */

/* 2005/08/06 created
   2006/01/16 fixed int define for ACSR
   2006/10/01 fixed GPIORx
   2008/01/21 added SPMCSR,RSIG and MCUCR,BODS(E)
   2008/07/08 fixed PCIF0
   2009/03/06 changed to ___sram/___eeprom
              added tiny43U modifications
 */

/* PRR */
#define PRR	(*(volatile unsigned char *)0x20)

/* DIDR */
#define DIDR0	(*(volatile unsigned char *)0x21)

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

/* Timer/Counter Interrupts 1 */
#define TIFR1	(*(volatile unsigned char *)0x2B)
#define TIMSK1	(*(volatile unsigned char *)0x2C)

/* Universal Serial Interface */
#define USICR	(*(volatile unsigned char *)0x2D)
#define USISR	(*(volatile unsigned char *)0x2E)
#define USIDR	(*(volatile unsigned char *)0x2F)
#define USIBR	(*(volatile unsigned char *)0x30)

/* PCMSK */
#define PCMSK0	(*(volatile unsigned char *)0x32)
#define PCMSK1	(*(volatile unsigned char *)0x40)

/* GPIOR */
#define GPIOR0	(*(volatile unsigned char *)0x33)
#define GPIOR1	(*(volatile unsigned char *)0x34)
#define GPIOR2	(*(volatile unsigned char *)0x35)

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

/* Watchdog Timer Control Register */
#define WDTCSR	(*(volatile unsigned char *)0x41)

/* General Timer Counter Control Register */
#define GTCCR	(*(volatile unsigned char *)0x43)

/* Timer/Counter 1 */
#ifdef __iot43Uv_h
#define OCR1A	(*(volatile unsigned char *)0x4B)
#define OCR1B	(*(volatile unsigned char *)0x4C)
#define TCNT1	(*(volatile unsigned char *)0x4D)
#else
#define ICR1	(*(volatile unsigned int *)0x44)
#define ICR1L	(*(volatile unsigned char *)0x44)
#define ICR1H	(*(volatile unsigned char *)0x45)
#define OCR1B	(*(volatile unsigned int *)0x48)
#define OCR1BL	(*(volatile unsigned char *)0x48)
#define OCR1BH	(*(volatile unsigned char *)0x49)
#define OCR1A	(*(volatile unsigned int *)0x4A)
#define OCR1AL	(*(volatile unsigned char *)0x4A)
#define OCR1AH	(*(volatile unsigned char *)0x4B)
#define TCNT1	(*(volatile unsigned int *)0x4C)
#define TCNT1L	(*(volatile unsigned char *)0x4C)
#define TCNT1H	(*(volatile unsigned char *)0x4D)
#define TCCR1C	(*(volatile unsigned char *)0x42)
#endif
#define TCCR1B	(*(volatile unsigned char *)0x4E)
#define TCCR1A	(*(volatile unsigned char *)0x4F)

/* CLKPR */
#define CLKPR	(*(volatile unsigned char *)0x46)

/* DWD Register */
#define DWDR	(*(volatile unsigned char *)0x47)

/* Timer/Counter 0 */
#define TCCR0A	(*(volatile unsigned char *)0x50)
#define TCNT0	(*(volatile unsigned char *)0x52)
#define TCCR0B	(*(volatile unsigned char *)0x53)
#define OCR0A	(*(volatile unsigned char *)0x56)
#define OCR0B	(*(volatile unsigned char *)0x5C)

/* RC oscillator */
#define OSCCAL	(*(volatile unsigned char *)0x51)

/* MCU */
#define MCUSR	(*(volatile unsigned char *)0x54)
#define MCUCR	(*(volatile unsigned char *)0x55)

/* SPM */
#define SPMCSR	(*(volatile unsigned char *)0x57)

/* Timer/Counter Interrupts 0 */
#define TIFR0	(*(volatile unsigned char *)0x58)
#define TIMSK0	(*(volatile unsigned char *)0x59)

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
#define    PCIE1    5
#define    PCIE0    4

#define    INTF0    6
#define    PCIF1    5
#define    PCIF0    4

/* Timer/Counter Interrupt registers */
#ifdef __iot43Uv_h
#else
#define    ICIE1    5
#endif
#define    OCIE1B   2
#define    OCIE1A   1
#define    TOIE1    0

#ifdef __iot43Uv_h
#else
#define    ICF1     5
#endif
#define    OCF1B    2
#define    OCF1A    1
#define    TOV1     0

#define    OCIE0B   2
#define    OCIE0A   1
#define    TOIE0    0

#define    OCF0B    2
#define    OCF0A    1
#define    TOV0     0

/* SPM Control Status Register */
#ifdef __iot43Uv_h
#else
#define    RSIG     5
#endif
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
#define    COM1A1   7
#define    COM1A0   6
#define    COM1B1   5
#define    COM1B0   4
#define    WGM11    1
#define    WGM10    0

#ifdef __iot43Uv_h
#else
#define    ICNC1    7
#define    ICES1    6
#define    WGM13    4
#endif
#define    WGM12    3
#define    CS12     2
#define    CS11     1
#define    CS10     0

#define    FOC1A    7
#define    FOC1B    6

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
#define    WDIF     7
#define    WDIE     6
#define    WDP3     5
#define    WDCE     4
#define    WDE      3
#define    WDP2     2
#define    WDP1     1
#define    WDP0     0

/* PRR */
#ifdef __iot43Uv_h
#define    PRE2     7
#define    PRE1     6
#define    PRE0     5
#endif
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

/* PC mask bits */
#ifdef __iot43Uv_h
#define    PCINT15  7
#define    PCINT14  6
#define    PCINT13  5
#define    PCINT12  4
#endif
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
#ifdef __iot43Uv_h
#define    PORTB7   7
#define    PORTB6   6
#define    PORTB5   5
#define    PORTB4   4
#define    PB7      7
#define    PB6      6
#define    PB5      5
#define    PB4      4

#define    DDB7     7
#define    DDB6     6
#define    DDB5     5
#define    DDB4     4

#define    PINB7    7
#define    PINB6    6
#define    PINB5    5
#define    PINB4    4
#endif

#define    PORTB3   3
#define    PORTB2   2
#define    PORTB1   1
#define    PORTB0   0
#define    PB3      3
#define    PB2      2
#define    PB1      1
#define    PB0      0

#define    DDB3     3
#define    DDB2     2
#define    DDB1     1
#define    DDB0     0

#define    PINB3    3
#define    PINB2    2
#define    PINB1    1
#define    PINB0    0

/* DIDR */
#ifdef __iot43Uv_h
#define    AIN1D    5
#define    AIN0D    4
#else
#define    AIN1D    2
#define    AIN0D    1
#define    ADC7D    7
#define    ADC6D    6
#define    ADC5D    5
#define    ADC4D    4
#endif
#define    ADC3D    3
#define    ADC2D    2
#define    ADC1D    1
#define    ADC0D    0

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
#define    ACIC     2
#define    ACIS1    1
#define    ACIS0    0

/* Analog Digital Converter */
#ifdef __iot43Uv_h
#define    REFS     6
#else
#define    REFS1    7
#define    REFS0    6
#define    MUX5     5
#define    MUX4     4
#define    MUX3     3
#endif
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

#ifdef __iot43Uv_h
#define    BS       7
#else
#define    BIN      7
#endif
#define    ACME     6
#define    ADLAR    4
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
#define iv_PCINT1       4
#define iv_WDT          5
#ifdef __iot43Uv_h
#define iv_TIM1_COMPA   6
#define iv_TIMER1_COMPA 6
#define iv_TIM1_COMPB   7
#define iv_TIMER1_COMPB 7
#define iv_TIM1_OVF     8
#define iv_TIMER1_OVF   8
#define iv_TIM0_COMPA   9
#define iv_TIMER0_COMPA 9
#define iv_TIM0_COMPB   10
#define iv_TIMER0_COMPB 10
#define iv_TIM0_OVF     11
#define iv_TIMER0_OVF   11
#define iv_ANA_COMP     12
#define iv_ADC          13
#define iv_EE_RDY       14
#define iv_USI_START    15
#define iv_USI_STRT     15
#define iv_USI_OVF      16
#else
#define iv_TIM1_CAPT    6
#define iv_TIMER1_CAPT  6
#define iv_TIM1_COMPA   7
#define iv_TIMER1_COMPA 7
#define iv_TIM1_COMPB   8
#define iv_TIMER1_COMPB 8
#define iv_TIM1_OVF     9
#define iv_TIMER1_OVF   9
#define iv_TIM0_COMPA   10
#define iv_TIMER0_COMPA 10
#define iv_TIM0_COMPB   11
#define iv_TIMER0_COMPB 11
#define iv_TIM0_OVF     12
#define iv_TIMER0_OVF   12
#define iv_ANA_COMP     13
#define iv_ADC          14
#define iv_EE_RDY       15
#define iv_USI_START    16
#define iv_USI_STRT     16
#define iv_USI_OVF      17
#endif

/* */

#endif
