#ifndef ___iom8to16HVAv_h
#define ___iom8to16HVAv_h

/* ATmega8/16HVA header file for
 * ImageCraft ICCAVR compiler
 */

/* 2000/05/21   derived from iom16HVAv.h
 */

/* Port C */
#define PINC	(*(volatile unsigned char *)0x26)
#define PORTC	(*(volatile unsigned char *)0x28)

/* Port B */
#define PINB	(*(volatile unsigned char *)0x23)
#define DDRB	(*(volatile unsigned char *)0x24)
#define PORTB	(*(volatile unsigned char *)0x25)

/* Port A */
#define PINA	(*(volatile unsigned char *)0x20)
#define DDRA	(*(volatile unsigned char *)0x21)
#define PORTA	(*(volatile unsigned char *)0x22)

/* Timer/Counter Interrupts */
#define TIFR0	(*(volatile unsigned char *)0x35)
#define  ICF0     3
#define  OCF0B    2
#define  OCF0A    1
#define  TOV0     0
#define TIMSK0	(*(volatile unsigned char *)0x6E)
#define  ICIE1    3
#define  OCIE0B   2
#define  OCIE0A   1
#define  TOIE0    0
#define TIFR1	(*(volatile unsigned char *)0x36)
#define  ICF1     3
#define  OCF1B    2
#define  OCF1A    1
#define  TOV1     0
#define TIMSK1	(*(volatile unsigned char *)0x6F)
#define  ICIE1    3
#define  OCIE1B   2
#define  OCIE1A   1
#define  TOIE1    0

/* OSI */
#define OSICSR	(*(volatile unsigned char *)0x37)
#define  OSISEL   4
#define  OSIST    1
#define  OSIEN    0

/* External Interrupts */
#define EIFR	(*(volatile unsigned char *)0x3C)
#define  INTF2    2
#define  INTF1    1
#define  INTF0    0
#define EIMSK	(*(volatile unsigned char *)0x3D)
#define  INT2     2
#define  INT1     1
#define  INT0     0
#define EICRA	(*(volatile unsigned char *)0x69)
#define  ISC21    5
#define  ISC20    4
#define  ISC11    3
#define  ISC10    2
#define  ISC01    1
#define  ISC00    0

/* GPIOR */
#define GPIOR0	(*(volatile unsigned char *)0x3E)
#define GPIOR1	(*(volatile unsigned char *)0x4A)
#define GPIOR2	(*(volatile unsigned char *)0x4B)

/* EEPROM */
#define EECR	(*(volatile unsigned char *)0x3F)
#define  EEPM1    5
#define  EEPM0    4
#define  EERIE    3
#define  EEMPE    2
#define  EEMWE    2
#define  EEPE     1
#define  EEWE     1
#define  EERE     0
#define EEDR	(*(volatile unsigned char *)0x40)
#define EEAR	(*(volatile unsigned char *)0x41)
#define EEARL	(*(volatile unsigned char *)0x41)

/* GTCCR */
#define GTCCR	(*(volatile unsigned char *)0x43)
#define  TSM      7
#define  PSRSYNC  0
#define  PSR10    0

/* Timer/Counter 0 */
#define OCR0B	(*(volatile unsigned char *)0x49)
#define OCR0A	(*(volatile unsigned char *)0x48)
#define TCNT0	(*(volatile unsigned int *)0x46)
#define TCNT0L	(*(volatile unsigned char *)0x46)
#define TCNT0H	(*(volatile unsigned char *)0x47)
#define TCCR0B	(*(volatile unsigned char *)0x45)
#define  CS02     2
#define  CS01     1
#define  CS00     0
#define TCCR0A	(*(volatile unsigned char *)0x44)
#define  TCW0     7
#define  ICEN0    6
#define  ICNC0    5
#define  ICES0    4
#define  ICS0     3
#define  WGM00    0

/* SPI */
#define SPCR	(*(volatile unsigned char *)0x4C)
#define  SPIE     7
#define  SPE      6
#define  DORD     5
#define  MSTR     4
#define  CPOL     3
#define  CPHA     2
#define  SPR1     1
#define  SPR0     0
#define SPSR	(*(volatile unsigned char *)0x4D)
#define  SPIF     7
#define  WCOL     6
#define  SPI2X    0
#define SPDR	(*(volatile unsigned char *)0x4E)

/* DWDR */
#define DWDR	(*(volatile unsigned char *)0x51)

/* MCU */
#define MCUSR	(*(volatile unsigned char *)0x54)
#define  OCDRF    4
#define  WDRF     3
#define  BODRF    2
#define  BORF     2
#define  EXTRF    1
#define  PORF     0
#define MCUCR	(*(volatile unsigned char *)0x55)
#define  CKOE     5
#define  PUD      4

#define SMCR	(*(volatile unsigned char *)0x53)
#define  SM2      3
#define  SM1      2
#define  SM0      1
#define  SE       0

/* SPM Control and Status Register */
#define SPMCSR	(*(volatile unsigned char *)0x57)
#define  SIGRD    5
#define  CTPB     4
#define  RFLB     3
#define  PGWRT    2
#define  PGERS    1
#define  SPMEN    0

/* Stack Pointer */
#define SP  	(*(volatile unsigned int *)0x5D)
#define SPL 	(*(volatile unsigned char *)0x5D)
#define SPH 	(*(volatile unsigned char *)0x5E)

/* Status REGister */
#define SREG	(*(volatile unsigned char *)0x5F)

/* Watchdog Timer Control Register */
#define WDTCSR	(*(volatile unsigned char *)0x60)
#define WDTCR	(*(volatile unsigned char *)0x60)
#define  WDIF     7
#define  WDIE     6
#define  WDP3     5
#define  WDCE     4
#define  WDE      3
#define  WDP2     2
#define  WDP1     1
#define  WDP0     0

/* clock prescaler control register */
#define CLKPR	(*(volatile unsigned char *)0x61)
#define  CLKPCE   7
/*#define  CLKPS3   3*/
/*#define  CLKPS2   2*/
#define  CLKPS1   1
#define  CLKPS0   0

/* PRR */
#define PRR0	(*(volatile unsigned char *)0x64)
#define  PRVRM    6
#define  PRSPI    3
#define  PRTIM1   2
#define  PRTIM0   1
#define  PRVADC   0

/* Oscillator Calibration Register */
#define FOSCCAL	(*(volatile unsigned char *)0x66)

/* VADC */
#define VADC 	(*(volatile unsigned int *)0x78)
#define VADCL	(*(volatile unsigned char *)0x78)
#define VADCH	(*(volatile unsigned char *)0x79)
#define VADCSR	(*(volatile unsigned char *)0x7A)
#define  VADEN    3
#define  VADSC    2
#define  VADCCIF  1
#define  VADCCIE  0
#define VADMUX	(*(volatile unsigned char *)0x7C)
#define  VADMUX3  3
#define  VADMUX2  2
#define  VADMUX1  1
#define  VADMUX0  0

/* DIDR */
#define DIDR0	(*(volatile unsigned char *)0x7E)
#define  PA1DID   1
#define  PA0DID   1

/* Timer/Counter1 */
#define OCR1B	(*(volatile unsigned char *)0x89)
#define OCR1A	(*(volatile unsigned char *)0x88)
#define TCNT1	(*(volatile unsigned int *)0x84)
#define TCNT1L	(*(volatile unsigned char *)0x84)
#define TCNT1H	(*(volatile unsigned char *)0x85)
#define TCCR1B	(*(volatile unsigned char *)0x81)
#define  CS12     2
#define  CS11     1
#define  CS10     0
#define TCCR1A	(*(volatile unsigned char *)0x80)
#define  TCW1     7
#define  ICEN1    6
#define  ICNC1    5
#define  ICES1    4
#define  ICS1     3
#define  WGM10    0

/* RO */
#define ROCR	(*(volatile unsigned char *)0xC8)
#define  ROCS     7
#define  ROCWIF   1
#define  ROCWIE   0

/* BGC */
#define BGCCR	(*(volatile unsigned char *)0xD0)
#define  BGD      7
#define BGCRR	(*(volatile unsigned char *)0xD1)

/* CAD */
#define CADAC	(*(volatile unsigned long *)0xE0)
#define CADAC0	(*(volatile unsigned char *)0xE0)
#define CADAC1	(*(volatile unsigned char *)0xE1)
#define CADAC2	(*(volatile unsigned char *)0xE2)
#define CADAC3	(*(volatile unsigned char *)0xE3)
#define CADCSRA	(*(volatile unsigned char *)0xE4)
#define  CADEN    7
#define  CADPOL   6
#define  CADUB    5
#define  CADAS1   4
#define  CADAS0   3
#define  CADSI1   2
#define  CADSI0   1
#define  CADSE    0
#define CADCSRB	(*(volatile unsigned char *)0xE5)
#define  CADACIE  6
#define  CADICIE  4
#define  CADACIF  2
#define  CADRCIF  1
#define  CADICIF  0
#define CADRC	(*(volatile unsigned char *)0xE6)
#define CADIC	(*(volatile unsigned int *)0xE8)
#define CADICL	(*(volatile unsigned char *)0xE8)
#define CADICH	(*(volatile unsigned char *)0xE9)

/* FCSR */
#define FCSR	(*(volatile unsigned char *)0xF0)
#define  DUVRD    3
#define  CPS      2
#define  DFE      1
#define  CFE      0

/* BP */
#define BPIMSK	(*(volatile unsigned char *)0xF2)
#define  SCIE     4
#define  DOCIE    3
#define  COCIE    2
#define  DHCIE    1
#define  CHCIE    0
#define BPIFR	(*(volatile unsigned char *)0xF3)
#define  SCIF     4
#define  DOCIF    3
#define  COCIF    2
#define  DHCIF    1
#define  CHCIF    0
#define BPSCD	(*(volatile unsigned char *)0xF5)
#define BPDOCD	(*(volatile unsigned char *)0xF6)
#define BPCOCD	(*(volatile unsigned char *)0xF7)
#define BPDHCD	(*(volatile unsigned char *)0xF8)
#define BPCHCD	(*(volatile unsigned char *)0xF9)
#define BPSCTR	(*(volatile unsigned char *)0xFA)
#define BPOCTR	(*(volatile unsigned char *)0xFB)
#define BPHCTR	(*(volatile unsigned char *)0xFC)
#define BPCR	(*(volatile unsigned char *)0xFD)
#define  SCD      4
#define  DOCD     3
#define  COCD     2
#define  DHCD     1
#define  CHCD     0
#define BPPLR	(*(volatile unsigned char *)0xFE)
#define  BPPLE    1
#define  BPPL     0


/* bits */

/* Port A */
#define  PORTA1   1
#define  PORTA0   0
#define  PA1      1
#define  PA0      0
#define  DDA1     1
#define  DDA0     0
#define  PINA1    1
#define  PINA0    0

/* Port B */
#define  PORTB3   3
#define  PORTB2   2
#define  PORTB1   1
#define  PORTB0   0
#define  PB3      3
#define  PB2      2
#define  PB1      1
#define  PB0      0
#define  DDB3     3
#define  DDB2     2
#define  DDB1     1
#define  DDB0     0
#define  PINB3    3
#define  PINB2    2
#define  PINB1    1
#define  PINB0    0

/* Port C */
#define  PORTC0   0
#define  PC0      0
#define  PINC0    0


/* Lock and Fuse Bits with LPM/SPM instructions */

/* lock bits */
#define  LB2      1
#define  LB1      0

/* fuses low bits */
#define  WDTON    7
#define  EESAVE   6
#define  SPIEN    5
#define  DWEN     4
#define  SELFPRGEN 3
#define  SUT2     2
#define  SUT1     1
#define  SUT0     0

/* fuses high bits */
#define  OSCSEL1  1
#define  OSCSEL0  0


/* Interrupt Vector Numbers */

#define iv_RESET        1
#define iv_BPINT        2
#define iv_PCINT1       6
#define iv_INT0         4
#define iv_EXT_INT0     4
#define iv_INT1         5
#define iv_EXT_INT1     5
#define iv_INT2         6
#define iv_EXT_INT2     6
#define iv_WDT          7
#define iv_TIMER1_CAPT  8
#define iv_TIMER1_COMPA 9
#define iv_TIMER1_COMPB 10
#define iv_TIMER1_OVF   11
#define iv_TIM1_CAPT    8
#define iv_TIM1_COMPA   9
#define iv_TIM1_COMPB   10
#define iv_TIM1_OVF     11
#define iv_TIMER0_CAPT  12
#define iv_TIMER0_COMPA 13
#define iv_TIMER0_COMPB 14
#define iv_TIMER0_OVF   15
#define iv_TIM0_CAPT    12
#define iv_TIM0_COMPA   13
#define iv_TIM0_COMPB   14
#define iv_TIM0_OVF     15
#define iv_SPI_STC      16
#define iv_VADC         17
#define iv_CCADC_CONV   18
#define iv_CCADC_REG_CUR 19
#define iv_CCADC_ACC    20
#define iv_EE_RDY       21
#define iv_EE_READY     21

/* */

#endif
