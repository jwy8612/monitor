#ifndef ___iom32to64C1v_h
#define ___iom32to64C1v_h

/* ATmega32..64C1 header file for
 * ImageCraft ICCAVR compiler
 */

/* 2008-03-10   derived from ioCAN32v.h
   2008-07-13   added PCICR ior and SIGRD bit definitions
   2008-10-26   fixed interrupt vectors
 */

/* Port B */
#define PINB	(*(volatile unsigned char *)0x23)
#define  PINB7    7
#define  PINB6    6
#define  PINB5    5
#define  PINB4    4
#define  PINB3    3
#define  PINB2    2
#define  PINB1    1
#define  PINB0    0
#define DDRB	(*(volatile unsigned char *)0x24)
#define  DDB7     7
#define  DDB6     6
#define  DDB5     5
#define  DDB4     4
#define  DDB3     3
#define  DDB2     2
#define  DDB1     1
#define  DDB0     0
#define PORTB	(*(volatile unsigned char *)0x25)
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

/* Port C */
#define PINC	(*(volatile unsigned char *)0x26)
#define  PINC7    7
#define  PINC6    6
#define  PINC5    5
#define  PINC4    4
#define  PINC3    3
#define  PINC2    2
#define  PINC1    1
#define  PINC0    0
#define DDRC	(*(volatile unsigned char *)0x27)
#define  DDC7     7
#define  DDC6     6
#define  DDC5     5
#define  DDC4     4
#define  DDC3     3
#define  DDC2     2
#define  DDC1     1
#define  DDC0     0
#define PORTC	(*(volatile unsigned char *)0x28)
#define  PORTC7   7
#define  PORTC6   6
#define  PORTC5   5
#define  PORTC4   4
#define  PORTC3   3
#define  PORTC2   2
#define  PORTC1   1
#define  PORTC0   0
#define  PC7      7
#define  PC6      6
#define  PC5      5
#define  PC4      4
#define  PC3      3
#define  PC2      2
#define  PC1      1
#define  PC0      0

/* Port D */
#define PIND	(*(volatile unsigned char *)0x29)
#define  PIND7    7
#define  PIND6    6
#define  PIND5    5
#define  PIND4    4
#define  PIND3    3
#define  PIND2    2
#define  PIND1    1
#define  PIND0    0
#define DDRD	(*(volatile unsigned char *)0x2a)
#define  DDD7     7
#define  DDD6     6
#define  DDD5     5
#define  DDD4     4
#define  DDD3     3
#define  DDD2     2
#define  DDD1     1
#define  DDD0     0
#define PORTD	(*(volatile unsigned char *)0x2b)
#define  PORTD7   7
#define  PORTD6   6
#define  PORTD5   5
#define  PORTD4   4
#define  PORTD3   3
#define  PORTD2   2
#define  PORTD1   1
#define  PORTD0   0
#define  PD7      7
#define  PD6      6
#define  PD5      5
#define  PD4      4
#define  PD3      3
#define  PD2      2
#define  PD1      1
#define  PD0      0

/* Port E */
#define PINE	(*(volatile unsigned char *)0x2c)
#define  PINE2    2
#define  PINE1    1
#define  PINE0    0
#define DDRE	(*(volatile unsigned char *)0x2d)
#define  DDE2     2
#define  DDE1     1
#define  DDE0     0
#define PORTE	(*(volatile unsigned char *)0x2e)
#define  PORTE2   2
#define  PORTE1   1
#define  PORTE0   0
#define  PE2      2
#define  PE1      1
#define  PE0      0

/* Timer/Counter Interrupts */
#define TIFR0	(*(volatile unsigned char *)0x35)
#define  OCF0B    2
#define  OCF0A    1
#define  TOV0     0
#define TIFR1	(*(volatile unsigned char *)0x36)
#define  ICF1     5
#define  OCF1B    2
#define  OCF1A    1
#define  TOV1     0

/* GPIO registers */
#define GPIOR0	(*(volatile unsigned char *)0x3e)
#define GPIOR1	(*(volatile unsigned char *)0x39)
#define GPIOR2	(*(volatile unsigned char *)0x3a)

/* Pin Change Interrupt Flags and Masks */
#define PCIFR	(*(volatile unsigned char *)0x3b)
#define  PCIF3    3
#define  PCIF2    2
#define  PCIF1    1
#define  PCIF0    0
#define PCICR	(*(volatile unsigned char *)0x68)
#define  PCIE3    3
#define  PCIE2    2
#define  PCIE1    1
#define  PCIE0    0
#define PCMSK0	(*(volatile unsigned char *)0x6a)
#define  PCINT7   7
#define  PCINT6   6
#define  PCINT5   5
#define  PCINT4   4
#define  PCINT3   3
#define  PCINT2   2
#define  PCINT1   1
#define  PCINT0   0
#define PCMSK1	(*(volatile unsigned char *)0x6b)
#define  PCINT15  7
#define  PCINT14  6
#define  PCINT13  5
#define  PCINT12  4
#define  PCINT11  3
#define  PCINT10  2
#define  PCINT9   1
#define  PCINT8   0
#define PCMSK2	(*(volatile unsigned char *)0x6c)
#define  PCINT23  7
#define  PCINT22  6
#define  PCINT21  5
#define  PCINT20  4
#define  PCINT19  3
#define  PCINT18  2
#define  PCINT17  1
#define  PCINT16  0
#define PCMSK3	(*(volatile unsigned char *)0x6d)
#define  PCINT26  2
#define  PCINT25  1
#define  PCINT24  0

/* External Interrupt Flags and Masks */
#define EIFR	(*(volatile unsigned char *)0x3c)
#define  INTF3    3
#define  INTF2    2
#define  INTF1    1
#define  INTF0    0
#define EICRA	(*(volatile unsigned char *)0x69)
#define  ISC31    7
#define  ISC30    6
#define  ISC21    5
#define  ISC20    4
#define  ISC11    3
#define  ISC10    2
#define  ISC01    1
#define  ISC00    0
#define EIMSK	(*(volatile unsigned char *)0x3d)
#define  INT3     3
#define  INT2     2
#define  INT1     1
#define  INT0     0

/* EEPROM */
#define EECR	(*(volatile unsigned char *)0x3f)
#define  EERIE    3
#define  EEMWE    2
#define  EEWE     1
#define  EERE     0
#define EEDR	(*(volatile unsigned char *)0x40)
#define EEAR	(*(volatile unsigned int *)0x41)
#define EEARL	(*(volatile unsigned char *)0x41)
#define EEARH	(*(volatile unsigned char *)0x42)

/* General Timer Control */
#define GTCCR	(*(volatile unsigned char *)0x43)
#define  TSM      7
#define  ICPSEL1  6
#define  PSRSYNC  0
#define  PSR10    0
/* to enable multi-part lib writing */
#define  PSR1     PSR10
#define  PSR0     PSR10

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

/* PLL */
#define PLLCSR	(*(volatile unsigned char *)0x49)
#define  PLLF     2
#define  PLLE     1
#define  PLOCK    0

/* SPI */
#define SPCR	(*(volatile unsigned char *)0x4c)
#define  SPIE     7
#define  SPE      6
#define  DORD     5
#define  MSTR     4
#define  CPOL     3
#define  CPHA     2
#define  SPR1     1
#define  SPR0     0
#define SPSR	(*(volatile unsigned char *)0x4d)
#define  SPIF     7
#define  WCOL     6
#define  SPI2X    0
#define SPDR	(*(volatile unsigned char *)0x4e)

/* Analog Comparator */
#define ACSR	(*(volatile unsigned char *)0x50)
#define  AC3IF    7
#define  AC2IF    6
#define  AC1IF    5
#define  AC0IF    4
#define  AC3O     3
#define  AC2O     2
#define  AC1O     1
#define  AC0O     0

/* Debug Monitor Registers */
/* #define MONDR	(*(volatile unsigned char *)0x51) */
/* #define MSMCR	(*(volatile unsigned char *)0x52) */
/* #define DWDR 	(*(volatile unsigned char *)0x51) */

/* MCU general */
#define SMCR	(*(volatile unsigned char *)0x53)
#define  SM2      3
#define  SM1      2
#define  SM0      1
#define  SE       0

#define MCUSR	(*(volatile unsigned char *)0x54)
#define	 WDRF     3
#define  BORF     2
#define  EXTRF    1
#define  PORF     0
#define MCUCR	(*(volatile unsigned char *)0x55)
#define  SPIPS    7
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

/* Watchdog Timer Control Register */
#define WDTCSR	(*(volatile unsigned char *)0x60)
#define  WDIF     7
#define  WDIE     6
#define  WDP3     5
#define  WDCE     4
#define  WDE      3
#define  WDP2     2
#define  WDP1     1
#define  WDP0     0

/* Oscillator */
#define CLKPR	(*(volatile unsigned char *)0x61)
#define  CLKPCE   7
#define  CLKPS3   3
#define  CLKPS2   2
#define  CLKPS1   1
#define  CLKPS0   0
#define OSCCAL	(*(volatile unsigned char *)0x66)

/* Power Reduction Register */
#define PRR 	(*(volatile unsigned char *)0x64)
#define  PRCAN    6
#define  PRPSC    5
#define  PRTIM1   4
#define  PRTIM0   3
#define  PRSPI    2
#define  PRLIN    1
#define  PRADC    0

/* Analog Amplifier */
#define AMP0CSR	(*(volatile unsigned int *)0x75)
#define  AMP0EN   7
#define  AMP0IS   6
#define  AMP0G1   5
#define  AMP0G0   4
#define  AMPCMP0  3
#define  AMP0TS2  2
#define  AMP0TS1  1
#define  AMP0TS0  0
#define AMP1CSR	(*(volatile unsigned int *)0x76)
#define  AMP1EN   7
#define  AMP1IS   6
#define  AMP1G1   5
#define  AMP1G0   4
#define  AMPCMP1  3
#define  AMP1TS2  2
#define  AMP1TS1  1
#define  AMP1TS0  0
#define AMP2CSR	(*(volatile unsigned int *)0x77)
#define  AMP2EN   7
#define  AMP2IS   6
#define  AMP2G1   5
#define  AMP2G0   4
#define  AMPCMP2  3
#define  AMP2TS2  2
#define  AMP2TS1  1
#define  AMP2TS0  0

/* Analog Digital Converter */
#define ADC 	(*(volatile unsigned int *)0x78)
#define ADCL	(*(volatile unsigned char *)0x78)
#define ADCH	(*(volatile unsigned char *)0x79)
#define ADCSRA	(*(volatile unsigned char *)0x7a)
#define  ADEN     7
#define  ADSC     6
#define  ADATE    5
#define  ADFR     5
#define  ADIF     4
#define  ADIE     3
#define  ADPS2    2
#define  ADPS1    1
#define  ADPS0    0
#define ADCSRB	(*(volatile unsigned char *)0x7b)
#define  ADHSM    7
#define  ISRCEN   6
#define  AREFEN   5
#define  ADTS3    3
#define  ADTS2    2
#define  ADTS1    1
#define  ADTS0    0
#define ADMUX	(*(volatile unsigned char *)0x7c)
#define  REFS1    7
#define  REFS0    6
#define  ADLAR    5
#define  MUX3     3
#define  MUX2     2
#define  MUX1     1
#define  MUX0     0

#define DIDR1	(*(volatile unsigned char *)0x7f)
#define  AMP2PD   6
#define  ACMP0D   5
#define  AMP0PD   4
#define  AMP0ND   3
#define  ACMP1D   2
#define  ADC10D   2
#define  ACMP3D   1
#define  AMP1PD   1
#define  ADC9D    1
#define  AMP1ND   0
#define  ADC8D    0
#define DIDR0	(*(volatile unsigned char *)0x7e)
#define  ADC7D    7
#define  ACMPN1D  6
#define  AMP2ND   6
#define  ADC6D    6
#define  ACMPN0D  5
#define  ADC5D    5
#define  ADC4D    4
#define  ACMPN2D  3
#define  ADC3D    3
#define  ACMP2D   2
#define  ADC2D    2
#define  ADC1D    1
#define  ACMPN3D  0
#define  ADC0D    0

/* DAC */
#define DACON	(*(volatile unsigned char *)0x90)
#define  DAATE    7
#define  DATS2    6
#define  DATS1    5
#define  DATS0    4
#define  DALA     2
#define  DAOE     1
#define  DAEN     0
#define DAC 	(*(volatile unsigned int *)0x91)
#define DACL	(*(volatile unsigned char *)0x91)
#define DACH	(*(volatile unsigned char *)0x92)

/* Analog Comparator */
#define AC0CON	(*(volatile unsigned char *)0x94)
#define  AC0EN    7
#define  AC0IE    6
#define  AC0IS1   5
#define  AC0IS0   4
#define  ACCKSEL  3
#define  AC0M2    2
#define  AC0M1    1
#define  AC0M0    0
#define AC1CON	(*(volatile unsigned char *)0x95)
#define  AC1EN    7
#define  AC1IE    6
#define  AC1IS1   5
#define  AC1IS0   4
#define  AC1ICE   3
#define  AC1M2    2
#define  AC1M1    1
#define  AC1M0    0
#define AC2CON	(*(volatile unsigned char *)0x96)
#define  AC2EN    7
#define  AC2IE    6
#define  AC2IS1   5
#define  AC2IS0   4
#define  AC2M2    2
#define  AC2M1    1
#define  AC2M0    0
#define AC3CON	(*(volatile unsigned char *)0x97)
#define  AC3EN    7
#define  AC3IE    6
#define  AC3IS1   5
#define  AC3IS0   4
#define  AC3M2    2
#define  AC3M1    1
#define  AC3M0    0

/* Timer/Counter Interrupts */
#define TIMSK0	(*(volatile unsigned char *)0x6e)
#define  OCIE0B   1
#define  OCIE0A   0
#define  TOIE0    0
#define TIMSK1	(*(volatile unsigned char *)0x6f)
#define  TICIE1   5
#define  ICIE1    5
#define  OCIE1B   2
#define  OCIE1A   1
#define  TOIE1    0

/* Timer/Counter 1 */
#define TCCR1A	(*(volatile unsigned char *)0x80)
#define  COM1A1   7
#define  COM1A0   6
#define  COM1B1   5
#define  COM1B0   4
#define  WGM11    1
#define  WGM10    0
#define TCCR1B	(*(volatile unsigned char *)0x81)
#define  ICNC1    7
#define  ICES1    6
#define  WGM13    4
#define  WGM12    3
#define  CS12     2
#define  CS11     1
#define  CS10     0
#define TCCR1C	(*(volatile unsigned char *)0x82)
#define  FOC1A    7
#define  FOC1B    6
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


/* L.I.N */
#define LINCR	(*(volatile unsigned char *)0xc8)
#define  LSWRES   7
#define  LIN13    6
#define  LCONF1   5
#define  LCONF0   4
#define  LENA     3
#define  LCMD2    2
#define  LCMD1    1
#define  LCMD0    0
#define LINSIR	(*(volatile unsigned char *)0xc9)
#define  LIDST2   7
#define  LIDST1   6
#define  LIDST0   5
#define  LBUSY    4
#define  LERR     3
#define  LIDOK    2
#define  LTXOK    1
#define  LRXOK    0
#define LINENIR	(*(volatile unsigned char *)0xca)
#define  LENERR   3
#define  LENIDOK  2
#define  LENTXOK  1
#define  LENRXOK  0
#define LINERR	(*(volatile unsigned char *)0xcb)
#define  LABORT   7
#define  LTOERR   6
#define  LOVERR   5
#define  LFERR    4
#define  LSERR    3
#define  LPERR    2
#define  LCERR    1
#define  LBERR    0
#define LINBTR	(*(volatile unsigned char *)0xcc)
#define  LDISR    7
#define LINBRR	(*(volatile unsigned char *)0xcd)
#define LINBRRL	(*(volatile unsigned char *)0xcd)
#define LINBRRH	(*(volatile unsigned char *)0xce)
#define LINDLR	(*(volatile unsigned char *)0xcf)
#define  LTXDL3   7
#define  LTXDL2   6
#define  LTXDL1   5
#define  LTXDL0   4
#define  LRXDL3   3
#define  LRXDL2   2
#define  LRXDL1   1
#define  LRXDL0   0
#define LINIDR	(*(volatile unsigned char *)0xd0)
#define  LP1      7
#define  LP0      6
#define  LDL1     5
#define  LDL0     4
#define  LID5     5
#define  LID4     4
#define  LID3     3
#define  LID2     2
#define  LID1     1
#define  LID0     0
#define LINSEL	(*(volatile unsigned char *)0xd1)
#define  LAINC    3
#define  LINDX2   2
#define  LINDX1   1
#define  LINDX0   0
#define LINDAT	(*(volatile unsigned char *)0xd2)


/* C.A.N */
#define CANGCON (*(volatile unsigned char *)0xd8)
#define  ABRQ     7
#define  OVRQ     6
#define  TTC      5
#define  SYNCTTC  4
#define  LISTEN   3
#define  TEST     2
#define  ENA      1
#define  SWRES    0
#define CANGSTA (*(volatile unsigned char *)0xd9)
#define  OVFG     6
#define  OVRG     6
#define  TXBSY    4
#define  RXBSY    3
#define  ENFG     2
#define  BOFF     1
#define  ERRP     0
#define CANGIT  (*(volatile unsigned char *)0xda)
#define  CANIT    7
#define  BOFFIT   6
#define  OVRTIM   5
#define  OVRBUF   4
#define  BXOK     4
#define  SERG     3
#define  CERG     2
#define  FERG     1
#define  AERG     0
#define  ERR_GEN_MSK 0x0f
#define  INT_GEN_MSK 0x5f
#define CANGIE  (*(volatile unsigned char *)0xdb)
#define  ENIT     7
#define  ENBOFF   6
#define  ENRX     5
#define  ENTX     4
#define  ENERMOB  3
#define  ENERR    3
#define  ENBUF    2
#define  ENBX     2
#define  ENERG    1
#define  ENOVRT   0
#define CANEN2  (*(volatile unsigned char *)0xdc)
#define CANEN1  (*(volatile unsigned char *)0xdd)
#define CANIE2  (*(volatile unsigned char *)0xde)
#define CANIE1  (*(volatile unsigned char *)0xdf)
#define CANSIT2 (*(volatile unsigned char *)0xe0)
#define CANSIT1 (*(volatile unsigned char *)0xe1)
#define CANBT1  (*(volatile unsigned char *)0xe2)
#define  BRP      1
#define  BRP_MSK  0x7e
#define CANBT2  (*(volatile unsigned char *)0xe3)
#define  SJW1     6
#define  SJW0     5
#define  SJW      5
#define  PRS2     3
#define  PRS1     2
#define  PRS0     1
#define  PRS      1
#define  SJW_MSK  0x60
#define  PRS_MSK  0x0e
#define CANBT3  (*(volatile unsigned char *)0xe4)
#define  PHS22    6
#define  PHS21    5
#define  PHS20    4
#define  PHS2     4
#define  PHS12    3
#define  PHS11    2
#define  PHS10    1
#define  PHS1     1
#define  SMP      0
#define  PHS2_MSK 0x70
#define  PHS1_MSK 0x0e
#define CANTCON (*(volatile unsigned char *)0xe5)
#define CANTIM  (*(volatile unsigned int *)0xe6)
#define CANTIML (*(volatile unsigned char *)0xe6)
#define CANTIMH (*(volatile unsigned char *)0xe7)
#define CANTTC  (*(volatile unsigned int *)0xe8)
#define CANTTCL (*(volatile unsigned char *)0xe8)
#define CANTTCH (*(volatile unsigned char *)0xe9)
#define CANTEC  (*(volatile unsigned char *)0xea)
#define CANREC  (*(volatile unsigned char *)0xeb)
#define CANHPMOB (*(volatile unsigned char *)0xec)
#define  HPMOB3   7
#define  HPMOB2   6
#define  HPMOB1   5
#define  HPMOB0   4
#define  HPMOB    4
#define  HPMOB_MSK 0xf0
#define  CGP3     3
#define  CGP2     2
#define  CGP1     1
#define  CGP0     0
#define  CGP      0
#define CANPAGE (*(volatile unsigned char *)0xed)
#define  MOBNB3   7
#define  MOBNB2   6
#define  MOBNB1   5
#define  MOBNB0   4
#define  MOBNB    4
#define  MOBNB_MSK 0xf0
#define  AINC     3
#define  INDX2    2
#define  INDX1    1
#define  INDX0    0
#define  INDX     0
#define  INDX_MSK 0x07
#define CANSTMOB (*(volatile unsigned char *)0xee)
#define  DLCW     7
#define  TXOK     6
#define  RXOK     5
#define  BERR     4
#define  SERR     3
#define  CERR     2
#define  FERR     1
#define  AERR     0
#define  ERR_MOB_MSK 0x1f
#define  INT_MOB_MSK 0x7f
#define CANCDMOB (*(volatile unsigned char *)0xef)
#define  CONMOB1  7
#define  CONMOB0  6
#define  CONMOB   6
#define  RPLV     5
#define  IDE      4
#define  DLC3     3
#define  DLC2     2
#define  DLC1     1
#define  DLC0     0
#define  DLC      0
#define  CONMOB_MSK 0xc0
#define  DLC_MSK    0x0f
#define CANIDT4 (*(volatile unsigned char *)0xf0)
#define  RTRTAG   2
#define  RB1TAG   1
#define  RB0TAG   0
#define CANIDT3 (*(volatile unsigned char *)0xf1)
#define CANIDT2 (*(volatile unsigned char *)0xf2)
#define CANIDT1 (*(volatile unsigned char *)0xf3)
#define CANIDM4 (*(volatile unsigned char *)0xf4)
#define  RTRMSK   2
#define  IDEMSK   0
#define CANIDM3 (*(volatile unsigned char *)0xf5)
#define CANIDM2 (*(volatile unsigned char *)0xf6)
#define CANIDM1 (*(volatile unsigned char *)0xf7)
#define CANSTM  (*(volatile unsigned int *)0xf8)
#define CANSTML (*(volatile unsigned char *)0xf8)
#define CANSTMH (*(volatile unsigned char *)0xf9)
#define CANMSG  (*(volatile unsigned char *)0xfa)

/*--------------------*/
/* Lock and Fuse Bits */
/*--------------------*/

/* lock bits */
#define  BLB12    5
#define  BLB11    4
#define  BLB02    3
#define  BLB01    2
#define  BLB      2
#define  LB2      1
#define  LB1      0
#define  LB       0

/* fuses extended bits */
/* #define  PSCRB     5 */
/* #define  PSCRVA    4 */
/* #define  PSCRVB    3 */
#define  BODLEVEL2 2
#define  BODLEVEL1 1
#define  BODLEVEL0 0
#define  BODLEVEL  0

/* fuses high bits */
#define  RSTDISBL 7
#define  DWEN     6
#define  SPIEN    5
#define  WDTON    4
#define  EESAVE   3
#define  BOOTSZ1  2
#define  BOOTSZ0  1
#define  BOOTSZ   1
#define  BOOTRST  0

/* fuses low bits */
#define  CKDIV8   7
#define  CKOUT    6
#define  SUT1     5
#define  SUT0     4
#define  SUT      4
#define  CKSEL3   3
#define  CKSEL2   2
#define  CKSEL1   1
#define  CKSEL0   0
#define  CKSEL    0

/*--------------------------*/
/* Interrupt Vector Numbers */
/*--------------------------*/

#define iv_RESET        1
#define iv_ANA_COMP0    2
#define iv_ANA_COMP1    3
#define iv_ANA_COMP2    4
#define iv_ANA_COMP3    5
/* #define iv_PSC_FAULT    6 */
/* #define iv_PSC_EC       7 */
#define iv_INT0         8
#define iv_EXT_INT0     8
#define iv_INT1         9
#define iv_EXT_INT1     9
#define iv_INT2         10
#define iv_EXT_INT2     10
#define iv_INT3         11
#define iv_EXT_INT3     11
#define iv_TIM1_CAPT    12
#define iv_TIMER1_CAPT  12
#define iv_TIM1_COMPA   13
#define iv_TIMER1_COMPA 13
#define iv_TIM1_COMPB   14
#define iv_TIMER1_COMPB 14
#define iv_TIM1_OVF     15
#define iv_TIMER1_OVF   15
#define iv_TIM0_COMPA   16
#define iv_TIMER0_COMPA 16
#define iv_TIM0_COMPB   17
#define iv_TIMER0_COMPB 17
#define iv_TIM0_OVF     18
#define iv_TIMER0_OVF   18
#define iv_CAN_IT       19
#define iv_CANIT        19
#define iv_CAN          19
#define iv_CAN_TRANSFER 19
#define iv_CAN_INT      19
#define iv_CTIM_OVF     20
#define iv_OVRIT        20
#define iv_CAN_TIM_OVF  20
#define iv_CAN_TIM_OVR  20
#define iv_CAN_TOVF     20
#define iv_LIN_TC       21
#define iv_LIN_ERR      22
#define iv_PCINT0       23
#define iv_PCINT1       24
#define iv_PCINT2       25
#define iv_PCINT3       26
#define iv_SPI_STC      27
#define iv_ADC          28
#define iv_WDT          29
#define iv_EE_RDY       30
#define iv_EE_READY     30
#define iv_SPM_RDY      31
#define iv_SPM_READY    31

/*ja*/

#endif

