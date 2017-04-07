#ifndef ___iotX7v_h
#define ___iotX7v_h

/* ATtinyX7 register and bit name header file
 * for ImageCraft ICC7AVR compiler
 */

/* 2009/05/20   saved as from iot167v.h
 */

/* Port A */
#define PINA	(*(volatile unsigned char *)0x20)
#define DDRA	(*(volatile unsigned char *)0x21)
#define PORTA	(*(volatile unsigned char *)0x22)

/* Port B */
#define PINB	(*(volatile unsigned char *)0x23)
#define DDRB	(*(volatile unsigned char *)0x24)
#define PORTB	(*(volatile unsigned char *)0x25)

/* PORTCR */
#define PORTCR	(*(volatile unsigned char *)0x32)

/* Timer/Counter Interrupts */
#define TIFR0	(*(volatile unsigned char *)0x35)
#define TIFR1	(*(volatile unsigned char *)0x36)
#define TIMSK0	(*(volatile unsigned char *)0x6e)
#define TIMSK1	(*(volatile unsigned char *)0x6f)

/* Pin Interrupts */
#define PCIFR	(*(volatile unsigned char *)0x3b)
#define PCMSK0	(*(volatile unsigned char *)0x6b)
#define PCMSK1	(*(volatile unsigned char *)0x6c)
#define PCICR	(*(volatile unsigned char *)0x68)
#define EIFR	(*(volatile unsigned char *)0x3c)
#define EIMSK	(*(volatile unsigned char *)0x3d)
#define EICR	(*(volatile unsigned char *)0x69)

/* GPIOR */
#define GPIOR0	(*(volatile unsigned char *)0x3e)
#define GPIOR1	(*(volatile unsigned char *)0x4a)
#define GPIOR2	(*(volatile unsigned char *)0x4b)

/* EEPROM */
#define EECR	(*(volatile unsigned char *)0x3f)
#define EEDR	(*(volatile unsigned char *)0x40)
#ifdef ___char_EEAR
#define EEAR	(*(volatile unsigned char *)0x41)
#define EEARL	(*(volatile unsigned char *)0x41)
#else
#define EEAR	(*(volatile unsigned int *)0x41)
#define EEARL	(*(volatile unsigned char *)0x41)
#define EEARH	(*(volatile unsigned char *)0x42)
#endif

/* GTCCR */
#define GTCCR	(*(volatile unsigned char *)0x43)

/* Timer/Counter 0 */
#define ASSR	(*(volatile unsigned char *)0xb6)
#define TCCR0A	(*(volatile unsigned char *)0x45)
#define TCCR0B	(*(volatile unsigned char *)0x46)
#define TCNT0	(*(volatile unsigned char *)0x47)
#define OCR0A	(*(volatile unsigned char *)0x48)

/* SPI */
#define SPCR	(*(volatile unsigned char *)0x4c)
#define SPSR	(*(volatile unsigned char *)0x4d)
#define SPDR	(*(volatile unsigned char *)0x4e)

/* Analog Comp */
#define ACSR	(*(volatile unsigned char *)0x50)

/* DWD Register */
#define DWDR	(*(volatile unsigned char *)0x51)

/* Sleep Mode Register */
#define SMCR	(*(volatile unsigned char *)0x53)

/* MCU */
#define MCUSR	(*(volatile unsigned char *)0x54)
#define MCUCR	(*(volatile unsigned char *)0x55)

/* SPM */
#define SPMCSR	(*(volatile unsigned char *)0x57)

/* Stack Pointer */
#ifdef ___char_SP
#define SP	(*(volatile unsigned char *)0x5D)
#define SPL	(*(volatile unsigned char *)0x5D)
#else
#define SP	(*(volatile unsigned int *)0x5D)
#define SPL	(*(volatile unsigned char *)0x5D)
#define SPH	(*(volatile unsigned char *)0x5E)
#endif

/* Status REGister */
#define SREG	(*(volatile unsigned char *)0x5F)


/* Watchdog Timer Control Register */
#define WDTCSR	(*(volatile unsigned char *)0x60)

/* CLK */
#define CLKPR	(*(volatile unsigned char *)0x61)
#define CLKCSR	(*(volatile unsigned char *)0x62)
#define CLKSELR	(*(volatile unsigned char *)0x63)

/* PRR */
#define PRR	(*(volatile unsigned char *)0x64)

/* RC oscillator */
#define OSCCAL	(*(volatile unsigned char *)0x66)

/* AMISCR */
#define AMISCR	(*(volatile unsigned char *)0x77)

/* ADC */
#define ADC (*(volatile unsigned int *)0x78)
#define ADCL	(*(volatile unsigned char *)0x78)
#define ADCH	(*(volatile unsigned char *)0x79)
#define ADCSRA	(*(volatile unsigned char *)0x7a)
#define ADCSRB	(*(volatile unsigned char *)0x7b)
#define ADMUX	(*(volatile unsigned char *)0x7c)
#define ADCMUX	ADMUX

/* DIDR */
#define DIDR0	(*(volatile unsigned char *)0x7e)
#define DIDR1	(*(volatile unsigned char *)0x7f)

/* Timer/Counter 1 */
/*#define GTCCR	(*(volatile unsigned char *)0x43)*/
#define TCCR1A	(*(volatile unsigned char *)0x80)
#define TCCR1B	(*(volatile unsigned char *)0x81)
#define TCCR1C	(*(volatile unsigned char *)0x82)
#define TCCR1D	(*(volatile unsigned char *)0x83)
#define TCNT1	(*(volatile unsigned int *)0x84)
#define TCNT1L	(*(volatile unsigned char *)0x84)
#define TCNT1H	(*(volatile unsigned char *)0x85)
#define ICR1	(*(volatile unsigned int *)0x86)
#define ICR1L	(*(volatile unsigned char *)0x86)
#define ICR1H	(*(volatile unsigned char *)0x87)
#define OCR1A	(*(volatile unsigned int *)0x88)
#define OCR1AL	(*(volatile unsigned char *)0x88)
#define OCR1AH	(*(volatile unsigned char *)0x89)
#define OCR1B	(*(volatile unsigned int *)0x8a)
#define OCR1BL	(*(volatile unsigned char *)0x8a)
#define OCR1BH	(*(volatile unsigned char *)0x8b)

/* Universal Serial Interface */
#define USICR	(*(volatile unsigned char *)0xb8)
#define USISR	(*(volatile unsigned char *)0xb9)
#define USIDR	(*(volatile unsigned char *)0xba)
#define USIBR	(*(volatile unsigned char *)0xbb)
#define USIPP	(*(volatile unsigned char *)0xbc)


/* LIN / UART */
#define LINCR	(*(volatile unsigned char *)0xc8)
#define LINSIR	(*(volatile unsigned char *)0xc9)
#define LINENIR	(*(volatile unsigned char *)0xca)
#define LINERR	(*(volatile unsigned char *)0xcb)
#define LINBTR	(*(volatile unsigned char *)0xcc)
#define LINBRR	(*(volatile unsigned int *)0xcd)
#define LINBRRL	(*(volatile unsigned char *)0xcd)
#define LINBRRH	(*(volatile unsigned char *)0xce)
#define LINDLR	(*(volatile unsigned char *)0xcf)
#define LINIDR	(*(volatile unsigned char *)0xd0)
#define LINSEL	(*(volatile unsigned char *)0xd1)
#define LINDAT	(*(volatile unsigned char *)0xd2)


/* io bits */

/* pin io */
/* Port A */
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
/* Port B */
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
/* PORTCR */
#define    BBMB     5
#define    BBMA     4
#define    PUDB     1
#define    PUDA     0

/* pin interrupts */
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
/* PCIFR */
#define    PCIF1    1
#define    PCIF0    0
/* PCICR */
#define    PCIE1    1
#define    PCIE0    0
/* EIMSK */
#define    INT1     1
#define    INT0     0
/* EIFR */
#define    INTF1    1
#define    INTF0    0
/* EICR */
#define    ISC11    3
#define    ISC10    2
#define    ISC01    1
#define    ISC00    0

/* timer/counter interrupts */
/* TIMSK */
#define    OCIE0A   1
#define    TOIE0    0
#define    ICIE1    5
#define    OCIE1B   2
#define    OCIE1A   1
#define    TOIE1    0
/* TIFR */
#define    OCF0A    1
#define    TOV0     0
#define    ICF1     5
#define    OCF1B    2
#define    OCF1A    1
#define    TOV1     0

/* DIDR */
#define    ADC10D   2
#define    ADC9D    1
#define    ADC8D    0
#define    ADC7D    7
#define    ADC6D    6
#define    ADC5D    5
#define    ADC4D    4
#define    ADC3D    3
#define    ADC2D    2
#define    ADC1D    1
#define    ADC0D    0
#define    AIN1D    7
#define    AIN0D    6

/* SMCR */
#define    SM1      2
#define    SM0      1
#define    SE       0

/* SPMCSR */
#define    RWWSB    6
#define    SIGRD    5
#define    CTPB     4
#define    RFLB     3
#define    PGWRT    2
#define    PGERS    1
#define    SPMEN    0

/* MCUCR */
#define    BODS     6
#define    BODSE    5
#define    PUD      4

/* MCUSR */
#define    WDRF     3
#define    BORF     2
#define    EXTRF    1
#define    PORF     0

/* EECR */
#define    EEPM1    5
#define    EEPM0    4
#define    EERIE    3
#define    EEMPE    2
#define    EEMWE    2
#define    EEPE     1
#define    EEWE     1
#define    EERE     0

/* GTCCR */
#define    TSM      7
#define    PSR1     1
#define    PSR0     0

/* Timer/Counter 0 */
#define    COM0A1   7
#define    COM0A0   6
#define    WGM01    1
#define    WGM00    0
#define    FOC0A    7
#define    CS02     2
#define    CS01     1
#define    CS00     0
/* ASSR */
#define    EXCLK    6
#define    AS0      5
#define    TCN0UB   4
#define    OCR0AUB  3
#define    TCR0AUB  1
#define    TCR0BUB  0

/* Timer/Counter 1 */
#define    COM1A1   7
#define    COM1A0   6
#define    COM1B1   5
#define    COM1B0   4
#define    WGM11    1
#define    WGM10    0
#define    ICNC1    7
#define    ICES1    6
#define    WGM13    4
#define    WGM12    3
#define    CS12     2
#define    CS11     1
#define    CS10     0
#define    FOC1A    7
#define    FOC1B    6
#define    OC1BX    7
#define    OC1BW    6
#define    OC1BV    5
#define    OC1BU    4
#define    OC1AX    3
#define    OC1AW    2
#define    OC1AV    1
#define    OC1AU    0

/* CLKPR */
#define    CLKPCE   7
#define    CLKPS3   3
#define    CLKPS2   2
#define    CLKPS1   1
#define    CLKPS0   0
/* CLKCSR */
#define    CLKCCE   7
#define    CLKRDY   4
#define    CLKC3    3
#define    CLKC2    2
#define    CLKC1    1
#define    CLKC0    0
/* CLKSELR */
#define    COUT     6
#define    CSUT1    5
#define    CSUT0    4
#define    CSEL3    3
#define    CSEL2    2
#define    CSEL1    1
#define    CSEL0    0

/* PRR */
#define    PRLIN    5
#define    PRSPI    4
#define    PRTIM1   3
#define    PRTIM0   2
#define    PRUSI    1
#define    PRADC    0

/* WDTCR */
#define    WDIF     7
#define    WDIE     6
#define    WDP3     5
#define    WDCE     4
#define    WDE      3
#define    WDP2     2
#define    WDP1     1
#define    WDP0     0

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
#define    SPI2X    0

/* USI */
#define    USISIE   7
#define    USIOIE   6
#define    USIWM1   5
#define    USIWM0   4
#define    USICS1   3
#define    USICS0   2
#define    USICLK   1
#define    USITC    0
#define    USISIF   7
#define    USIOIF   6
#define    USIPF    5
#define    USIDC    4
#define    USICNT3  3
#define    USICNT2  2
#define    USICNT1  1
#define    USICNT0  0
#define    USIPOS   0

/* AC */
#define    ACD      7
#define    ACIRS    6
#define    ACO      5
#define    ACI      4
#define    ACIE     3
#define    ACIC     2
#define    ACIS1    1
#define    ACIS0    0

/* ADC */
#define    REFS1    7
#define    REFS0    6
#define    ADLAR    5
#define    MUX4     4
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
#define    ADIR1    5
#define    ADIR0    4
#define    ADTS2    2
#define    ADTS1    1
#define    ADTS0    0

/* AMISCR */
#define    AREFEN   2
#define    XREFEN   1
#define    ISRCEN   0

/* LIN/UART */
#define    LAINC    3
#define    LINDX2   2
#define    LINDX1   1
#define    LINDX0   0
#define    LP1      7
#define    LP0      6
#define    LDL1     5
#define    LDL0     4
#define    LTXDL3   7
#define    LTXDL2   6
#define    LTXDL1   5
#define    LTXDL0   4
#define    LRXDL3   3
#define    LRXDL2   2
#define    LRXDL1   1
#define    LRXDL0   0
#define    LDISR    7
#define    LABORT   7
#define    LTOERR   6
#define    LOVERR   5
#define    LFERR    4
#define    LSERR    3
#define    LPERR    2
#define    LCERR    1
#define    LBERR    0
#define    LENERR   3
#define    LENIDOK  2
#define    LENTXOK  1
#define    LENRXOK  0
#define    LIDST2   7
#define    LIDST1   6
#define    LIDST0   5
#define    LBUSY    4
#define    LERR     3
#define    LIDOK    2
#define    LTXOK    1
#define    LRXOK    0
#define    LSWRES   7
#define    LIN13    6
#define    LCONF1   5
#define    LCONF0   4
#define    LENA     3
#define    LCMD2    2
#define    LCMD1    1
#define    LCMD0    0


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
#define iv_INT1         3
#define iv_EXT_INT1     3
#define iv_PCINT0       4
#define iv_PCINT1       5
#define iv_WDT          6
#define iv_TIM1_CAPT    7
#define iv_TIMER1_CAPT  7
#define iv_TIM1_COMPA   8
#define iv_TIMER1_COMPA 8
#define iv_TIM1_COMPB   9
#define iv_TIMER1_COMPB 9
#define iv_TIM1_OVF     10
#define iv_TIMER1_OVF   10
#define iv_TIM0_COMPA   11
#define iv_TIMER0_COMPA 11
#define iv_TIM0_COMP    11
#define iv_TIMER0_COMP  11
#define iv_TIM0_OVF     12
#define iv_TIMER0_OVF   12
#define iv_LIN_TC       13
#define iv_LIN_ERR      14
#define iv_SPI_STC      15
#define iv_ADC          16
#define iv_EE_RDY       17
#define iv_ANA_COMP     18
#define iv_USI_START    19
#define iv_USI_STRT     19
#define iv_USI_OVF      20

/* */

#endif
