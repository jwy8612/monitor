#ifndef __iom406v_h
#define __iom406v_h

/* ATmega406 header file for
 * ImageCraft ICCAVR compiler
 */

/* 2004/11/11 created
   2004/12/19 harmonized interrupt vectors
   2005/05/12 added EECR bits EEMPE,EEPE
   2005/05/13 set for both WDTCSR and WDTCR
   2006/07/22 deleted PRASY and two tab chars
 */

/* Port A */
#define PINA	(*(volatile unsigned char *)0x20)
#define DDRA	(*(volatile unsigned char *)0x21)
#define PORTA	(*(volatile unsigned char *)0x22)

/* Port B */
#define PINB	(*(volatile unsigned char *)0x23)
#define DDRB	(*(volatile unsigned char *)0x24)
#define PORTB	(*(volatile unsigned char *)0x25)

/* Port C */
#define PORTC	(*(volatile unsigned char *)0x28)

/* Port D */
#define PIND	(*(volatile unsigned char *)0x29)
#define DDRD	(*(volatile unsigned char *)0x2a)
#define PORTD	(*(volatile unsigned char *)0x2b)

/* GPIO */
#define GPIOR0	(*(volatile unsigned char *)0x3e)
#define GPIOR1	(*(volatile unsigned char *)0x4a)
#define GPIOR2	(*(volatile unsigned char *)0x4b)

/* EEPROM */
#define EECR	(*(volatile unsigned char *)0x3f)
#define  EEPM1    5
#define  EEPM0    4
#define  EERIE    3
#define  EEMPE    2
#define  EEMWE    2
#define  EEPE     1
#define  EEWE     1
#define  EERE     0
#define EEDR	(*(volatile unsigned char *)0x40)
#define EEAR	(*(volatile unsigned int *)0x41)
#define EEARL	(*(volatile unsigned char *)0x41)
#define EEARH	(*(volatile unsigned char *)0x42)

/* OCDR */
#define OCDR	(*(volatile unsigned char *)0x51)
#define  IDRD     7


/* MCU general */
#define SMCR	(*(volatile unsigned char *)0x53)
#define  SM2      3
#define  SM1      2
#define  SM0      1
#define  SE       0

#define MCUSR	(*(volatile unsigned char *)0x54)
#define  JTRF     4
#define  WDRF     3
#define  BODRF    2
#define  BORF     2
#define  EXTRF    1
#define  PORF     0
#define MCUCR	(*(volatile unsigned char *)0x55)
#define  JTD      7
#define  PUD      4
#define  IVSEL    1
#define  IVCE     0

/* SPM Conrol Register */
#define SPMCSR	(*(volatile unsigned char *)0x57)
#define  SPMIE    7
#define  RWWSB    6
#define  SIGRD    5
#define  RWWSRE   4
#define  BLBSET   3
#define  PGWRT    2
#define  PGERS    1
#define  SPMEN    0

/* Stack Pointer */
#define SP	(*(volatile unsigned int *)0x5D)
#define SPL	(*(volatile unsigned char *)0x5D)
#define SPH	(*(volatile unsigned char *)0x5E)

/* Status REGister */
#define SREG	(*(volatile unsigned char *)0x5F)

/* External Interrupts */
#define PCIFR	(*(volatile unsigned char *)0x3b)
#define  PCIF1    1
#define  PCIF0    0
#define EIFR	(*(volatile unsigned char *)0x3c)
#define  INTF3    3
#define  INTF2    2
#define  INTF1    1
#define  INTF0    0
#define EIMSK	(*(volatile unsigned char *)0x3d)
#define  INT3     3
#define  INT2     2
#define  INT1     1
#define  INT0     0

/* Timer/Counter Interrupts */
#define TIFR0	(*(volatile unsigned char *)0x35)
#define  OCF0B    2
#define  OCF0A    1
#define  TOV0     0
#define TIFR1	(*(volatile unsigned char *)0x36)
#define  OCF1A    1
#define  TOV1     0

/* General Timer Control */
#define GTCCR	(*(volatile unsigned char *)0x43)
#define  TSM      7
#define  PSRSYNC  0

/* Timer/Counter 0 */
#define TCCR0A	(*(volatile unsigned char *)0x44)
#define  COM0A1   7
#define  COM0A0   6
#define  COM0B1   5
#define  COM0B0   4
#define  WGM01    1
#define  WGM00    0
#define TCCR0B	(*(volatile unsigned char *)0x45)
#define  FOC0A    7
#define  FOC0B    6
#define  WGM02    3
#define  CS02     2
#define  CS01     1
#define  CS00     0
#define TCNT0	(*(volatile unsigned char *)0x46)
#define OCR0A	(*(volatile unsigned char *)0x47)
#define OCR0B	(*(volatile unsigned char *)0x48)


/* rest is memory mapped */

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

/* WUT */
#define WUTCSR	(*(volatile unsigned char *)0x62)
#define  WUTIF    7
#define  WUTIE    6
#define  WUTCF    5
#define  WUTR     4
#define  WUTE     3
#define  WUTP2    2
#define  WUTP1    1
#define  WUTP0    0

/* Oscillator */
#define FOSCCAL	(*(volatile unsigned char *)0x66)
#define OSCCAL	(*(volatile unsigned char *)0x66)

/* PRR */
#define PRR0	(*(volatile unsigned char *)0x64)
#define PRR 	(*(volatile unsigned char *)0x64)
#define  PRTWI    3
#define  PRTIM1   2
#define  PRTIM0   1
#define  PRVADC   0

/* External Interrupts */
#define EICRA	(*(volatile unsigned char *)0x69)
#define  ISC31    7
#define  ISC30    6
#define  ISC21    5
#define  ISC20    4
#define  ISC11    3
#define  ISC10    2
#define  ISC01    1
#define  ISC00    0

/* Pin Change Interrupts */
#define PCICR	(*(volatile unsigned char *)0x68)
#define  PCIE1    1
#define  PCIE0    0
/* PCINT0..7 */
#define PCMSK0	(*(volatile unsigned char *)0x6b)
/* PCINT8..15 */
#define PCMSK1	(*(volatile unsigned char *)0x6c)

/* Timer/Counter Interrupts */
#define TIMSK0	(*(volatile unsigned char *)0x6e)
#define  OCIE0B   2
#define  OCIE0A   1
#define  TOIE0    0
#define TIMSK1	(*(volatile unsigned char *)0x6f)
#define  OCIE1A   1
#define  TOIE1    0

/* Timer/Counter 1 */
#define TCCR1B	(*(volatile unsigned char *)0x81)
#define  CTC1     3
#define  CS12     2
#define  CS11     1
#define  CS10     0
#define TCNT1	(*(volatile unsigned int *)0x84)
#define TCNT1L	(*(volatile unsigned char *)0x84)
#define TCNT1H	(*(volatile unsigned char *)0x85)
#define OCR1A	(*(volatile unsigned int *)0x88)
#define OCR1AL	(*(volatile unsigned char *)0x88)
#define OCR1AH	(*(volatile unsigned char *)0x89)


/* VADC */
#define VADC 	(*(volatile unsigned int *)0x78)
#define VADCL	(*(volatile unsigned char *)0x78)
#define VADCH	(*(volatile unsigned char *)0x79)
#define VADCSR	(*(volatile unsigned char *)0x7a)
#define  VADEN    3
#define  VADSC    2
#define  VADCCIF  1
#define  VADCCIE  0
#define VADMUX	(*(volatile unsigned char *)0x7c)
#define  VADMUX3  3
#define  VADMUX2  2
#define  VADMUX1  1
#define  VADMUX0  0

#define DIDR0	(*(volatile unsigned char *)0x7e)
#define  VADC3D   3
#define  VADC2D   2
#define  VADC1D   1
#define  VADC0D   0


/* 2-wire SI */
#define TWBR	(*(volatile unsigned char *)0xB8)
#define TWSR	(*(volatile unsigned char *)0xB9)
#define  TWPS1    1
#define  TWPS0    0
#define TWAR	(*(volatile unsigned char *)0xBA)
#define  TWGCE    0
#define TWDR	(*(volatile unsigned char *)0xBB)
#define TWCR	(*(volatile unsigned char *)0xBC)
#define  TWINT    7
#define  TWEA     6
#define  TWSTA    5
#define  TWSTO    4
#define  TWWC     3
#define  TWEN     2
#define  TWIE     0
#define TWAMR	(*(volatile unsigned char *)0xBD)
#define TWBCSR	(*(volatile unsigned char *)0xBE)
#define  TWBCIF   7
#define  TWBCIE   6
#define  TWBDT1   2
#define  TWBDT0   1
#define  TWBCIP   0


/* CCSR */
#define CCSR	(*(volatile unsigned char *)0xc0)
#define  XOE      1
#define  ACS      0

/* BGC */
#define BGCCR	(*(volatile unsigned char *)0xd0)
#define  BGEN     7
#define  BGCC5    5
#define  BGCC4    4
#define  BGCC3    3
#define  BGCC2    2
#define  BGCC1    1
#define  BGCC0    0
#define BGCRR	(*(volatile unsigned char *)0xd1)

/* CAD */
#define CADAC0	(*(volatile unsigned char *)0xe0)
#define CADAC1	(*(volatile unsigned char *)0xe1)
#define CADAC2	(*(volatile unsigned char *)0xe2)
#define CADAC3	(*(volatile unsigned char *)0xe3)
#define CADCSRA	(*(volatile unsigned char *)0xe4)
#define  CADEN    7
#define  CADUB    5
#define  CADAS1   4
#define  CADAS0   3
#define  CADSI1   2
#define  CADSI0   1
#define  CADSE    0
#define CADCSRB	(*(volatile unsigned char *)0xe5)
#define  CADACIE  6
#define  CADRCIE  5
#define  CADICIE  4
#define  CADACIF  2
#define  CADRCIF  1
#define  CADICIF  0
#define CADRCC	(*(volatile unsigned char *)0xe6)
#define CADRDC	(*(volatile unsigned char *)0xe7)
#define CADIC	(*(volatile unsigned int *)0xe8)
#define CADICL	(*(volatile unsigned char *)0xe8)
#define CADICH	(*(volatile unsigned char *)0xe9)

/* more about this ?? */
#define FCSR	(*(volatile unsigned char *)0xf0)
#define  PWMOC    5
#define  PWMOPC   4
#define  CPS      3
#define  DFE      2
#define  CFE      1
#define  PFD      0
#define CBSR	(*(volatile unsigned char *)0xf1)
#define  CBE4     3
#define  CBE3     2
#define  CBE2     1
#define  CBE1     0
#define BPIR	(*(volatile unsigned char *)0xf2)
#define  DUVIF    7
#define  COCIF    6
#define  DOCIF    5
#define  SCIF     4
#define  DUVIE    7
#define  COCIE    6
#define  DOCIE    5
#define  SCIE     4
#define BPDUV	(*(volatile unsigned char *)0xf3)
#define  DUVT1    5
#define  DUVT0    4
#define BPSCD	(*(volatile unsigned char *)0xf4)
#define BPOCD	(*(volatile unsigned char *)0xf5)
#define CBPTR	(*(volatile unsigned char *)0xf6)
#define BPCR	(*(volatile unsigned char *)0xf7)
#define  DUVD     3
#define  SCD      2
#define  DCD      1
#define  CCD      0
#define BPPLR	(*(volatile unsigned char *)0xf8)
#define  BPPLE    1
#define  BPPL     0


/* bits */

/* Port A bits */
#define  PORTA7   7
#define  PORTA6   6
#define  PORTA5   5
#define  PORTA4   4
#define  PORTA3   3
#define  PORTA2   2
#define  PORTA1   1
#define  PORTA0   0
#define  PA7      7
#define  PA6      6
#define  PA5      5
#define  PA4      4
#define  PA3      3
#define  PA2      2
#define  PA1      1
#define  PA0      0

#define  DDA7     7
#define  DDA6     6
#define  DDA5     5
#define  DDA4     4
#define  DDA3     3
#define  DDA2     2
#define  DDA1     1
#define  DDA0     0

#define  PINA7    7
#define  PINA6    6
#define  PINA5    5
#define  PINA4    4
#define  PINA3    3
#define  PINA2    2
#define  PINA1    1
#define  PINA0    0

/* Port B bits */
#define  PORTB7   7
#define  PORTB6   6
#define  PORTB5   5
#define  PORTB4   4
#define  PORTB3   3
#define  PORTB2   2
#define  PORTB1   1
#define  PORTB0   0
#define  PB7      7
#define  PB6      6
#define  PB5      5
#define  PB4      4
#define  PB3      3
#define  PB2      2
#define  PB1      1
#define  PB0      0

#define  DDB7     7
#define  DDB6     6
#define  DDB5     5
#define  DDB4     4
#define  DDB3     3
#define  DDB2     2
#define  DDB1     1
#define  DDB0     0

#define  PINB7    7
#define  PINB6    6
#define  PINB5    5
#define  PINB4    4
#define  PINB3    3
#define  PINB2    2
#define  PINB1    1
#define  PINB0    0

/* Port C bits */
#define  PORTC0   0
#define  PC0      0

/* Port D bits */
#define  PORTD1   1
#define  PORTD0   0
#define  PD1      1
#define  PD0      0

#define  DDD1     1
#define  DDD0     0

#define  PIND1    1
#define  PIND0    0

/* Pin Change Interrupts */
/* PCMSK1 */
#define  PCINT15  7
#define  PCINT14  6
#define  PCINT13  5
#define  PCINT12  4
#define  PCINT11  3
#define  PCINT10  2
#define  PCINT9   1
#define  PCINT8   0
/* PCMSK0 */
#define  PCINT7   7
#define  PCINT6   6
#define  PCINT5   5
#define  PCINT4   4
#define  PCINT3   3
#define  PCINT2   2
#define  PCINT1   1
#define  PCINT0   0

/* BGCRR */
#define  BGCR7    7
#define  BGCR6    6
#define  BGCR5    5
#define  BGCR4    4
#define  BGCR3    3
#define  BGCR2    2
#define  BGCR1    1
#define  BGCR0    0

/* more */

#define  CCDL3    3
#define  CCDL2    2
#define  CCDL1    1
#define  CCDL0    0
#define  DCDL3    7
#define  DCDL2    6
#define  DCDL1    5
#define  DCDL0    4
#define  DUDL3    3
#define  DUDL2    2
#define  DUDL1    1
#define  DUDL0    0
#define  SCDL3    3
#define  SCDL2    2
#define  SCDL1    1
#define  SCDL0    0
#define  OCPT3    3
#define  OCPT2    2
#define  OCPT1    1
#define  OCPT0    0
#define  SCPT3    7
#define  SCPT2    6
#define  SCPT1    5
#define  SCPT0    4


/* Lock and Fuse Bits with LPM/SPM instructions */

/* lock bits */
#define  BLB12    5
#define  BLB11    4
#define  BLB02    3
#define  BLB01    2
#define  LB2      1
#define  LB1      0

/* fuses low bits */
#define  WDTON    7
#define  EESAVE   6
#define  BOOTSZ1  5
#define  BOOTSZ0  4
#define  BOOTRST  3
#define  SUT1     2
#define  SUT0     1
#define  CKSEL    0
#define  CKSEL0   0

/* fuses high bits */
#define  OCDEN    1
#define  JTAGEN   0


/* Interrupt Vector Numbers */

#define iv_RESET        1
#define iv_BPINT        2
#define iv_INT0         3
#define iv_EXT_INT0     3
#define iv_INT1         4
#define iv_EXT_INT1     4
#define iv_INT2         5
#define iv_EXT_INT2     5
#define iv_INT3         6
#define iv_EXT_INT3     6
#define iv_PCINT0       7
#define iv_PC_INT0      7
#define iv_PCINT1       8
#define iv_PC_INT1      8
#define iv_WDT          9
#define iv_WAKE_UP      10
#define iv_TIMER1_COMPA 11
#define iv_TIMER1_COMP  11
#define iv_TIMER1_OVF   12
#define iv_TIM1_COMPA   11
#define iv_TIM1_COMP    11
#define iv_TIM1_OVF     12
#define iv_TIMER0_COMPA 13
#define iv_TIMER0_COMPB 14
#define iv_TIMER0_OVF   15
#define iv_TIM0_COMPA   13
#define iv_TIM0_COMPB   14
#define iv_TIM0_OVF     15
#define iv_TWI_BUS_CD   16
#define iv_TWI          17
#define iv_VADC         18
#define iv_CCADC_CONV   19
#define iv_CCADC_REG_CUR 20
#define iv_CCADC_ACC    21
#define iv_EE_RDY       22
#define iv_EE_READY     22
#define iv_SPM_RDY      23
#define iv_SPM_READY    23

/* */

#endif
