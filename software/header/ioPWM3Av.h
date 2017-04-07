#ifndef __ioPWM3Av_h
#define __ioPWM3Av_h

/* AT90PWM3A header file for
 * ImageCraft ICCAVR compiler
 */

/* created 2005/02/15
   edited  2005/06/15 (atmel answered my questions now)
   edited  2005/07/23 (PSIE1/2 were missing, added UTxS/URxS)
   edited  2006/02/15 (fixes for wrong old register summary)
   edited  2006/02/16 (fixed comment on PSCs)
   edited  2006/06/30 (fixed PRFM2B2/3)
   renamed 2007/06/29 (supposing AT90PWM3B will be future standard)
 */

/* Port E */
#define PINE	(*(volatile unsigned char *)0x2C)
#define DDRE	(*(volatile unsigned char *)0x2D)
#define PORTE	(*(volatile unsigned char *)0x2E)

/* Port D */
#define PIND	(*(volatile unsigned char *)0x29)
#define DDRD	(*(volatile unsigned char *)0x2A)
#define PORTD	(*(volatile unsigned char *)0x2B)

/* Port C */
#define PINC	(*(volatile unsigned char *)0x26)
#define DDRC	(*(volatile unsigned char *)0x27)
#define PORTC	(*(volatile unsigned char *)0x28)

/* Port B */
#define PINB	(*(volatile unsigned char *)0x23)
#define DDRB	(*(volatile unsigned char *)0x24)
#define PORTB	(*(volatile unsigned char *)0x25)

/* External Interrupts */
#define EIFR	(*(volatile unsigned char *)0x3C)
#define  INTF3    3
#define  INTF2    2
#define  INTF1    1
#define  INTF0    0
#define EIMSK	(*(volatile unsigned char *)0x3D)
#define  INT3     3
#define  INT2     2
#define  INT1     1
#define  INT0     0

/* GPIO */
#define GPIOR3	(*(volatile unsigned char *)0x3B)
#define GPIOR2	(*(volatile unsigned char *)0x3A)
#define GPIOR1	(*(volatile unsigned char *)0x39)
#define GPIOR0	(*(volatile unsigned char *)0x3E)


/* ADC */
#define ADC 	(*(volatile unsigned int *)0x78) /* m/m */
#define ADCL	(*(volatile unsigned char *)0x78) /* m/m */
#define ADCH	(*(volatile unsigned char *)0x79) /* m/m */
#define ADCSRB	(*(volatile unsigned char *)0x7B) /* m/m */
#define  ADHSM    7
#define  ADASCR   4
#define  ADTS3    3
#define  ADTS2    2
#define  ADTS1    1
#define  ADTS0    0
#define ADCSRA	(*(volatile unsigned char *)0x7A) /* m/m */
#define  ADEN     7
#define  ADSC     6
#define  ADATE    5
#define  ADIF     4
#define  ADIE     3
#define  ADPS2    2
#define  ADPS1    1
#define  ADPS0    0
#define ADMUX	(*(volatile unsigned char *)0x7C) /* m/m */
#define  REFS1    7
#define  REFS0    6
#define  ADLAR    5
#define  MUX3     3
#define  MUX2     2
#define  MUX1     1
#define  MUX0     0
#define AMP0CSR	(*(volatile unsigned char *)0x76) /* m/m */
#define  AMP0EN   7
#define  AMP0IS   6
#define  AMP0G1   5
#define  AMP0G0   4
#define  AMP0TS2  2
#define  AMP0TS1  1
#define  AMP0TS0  0
#define AMP1CSR	(*(volatile unsigned char *)0x77) /* m/m */
#define  AMP1EN   7
#define  AMP1IS   6
#define  AMP1G1   5
#define  AMP1G0   4
#define  AMP1TS2  2
#define  AMP1TS1  1
#define  AMP1TS0  0

/* Analog Comparator Control and Status Register */
#define ACSR	(*(volatile unsigned char *)0x50)
#define  ACCKDIV  7
#define  AC2IF    6
#define  AC1IF    5
#define  AC0IF    4
#define  AC2O     2
#define  AC1O     1
#define  AC0O     0
#define AC0CON	(*(volatile unsigned char *)0xAD) /* m/m */
#define  AC0EN    7
#define  AC0IE    6
#define  AC0IS1   5
#define  AC0IS0   4
#define  AC0M2    2
#define  AC0M1    1
#define  AC0M0    0
#define AC1CON	(*(volatile unsigned char *)0xAE) /* m/m */
#define  AC1EN    7
#define  AC1IE    6
#define  AC1IS1   5
#define  AC1IS0   4
#define  AC1ICE   3
#define  AC1M2    2
#define  AC1M1    1
#define  AC1M0    0
#define AC2CON	(*(volatile unsigned char *)0xAF) /* m/m */
#define  AC2EN    7
#define  AC2IE    6
#define  AC2IS1   5
#define  AC2IS0   4
#define  AC2M2    2
#define  AC2M1    1
#define  AC2M0    0

/* DAC */
#define DAC 	(*(volatile unsigned int *)0xAB) /* m/m */
#define DACL	(*(volatile unsigned char *)0xAB) /* m/m */
#define DACH	(*(volatile unsigned char *)0xAC) /* m/m */
#define DACON	(*(volatile unsigned char *)0xAA) /* m/m */
#define  DAATE    7
#define  DATS2    6
#define  DATS1    5
#define  DATS0    4
#define  DALA     2
#define  DAOE     1
#define  DAEN     0


/* USART */
#define UBRR0H	(*(volatile unsigned char *)0xC5) /* m/m */
#define UBRR0L	(*(volatile unsigned char *)0xC4) /* m/m */
#define UBRR0	(*(volatile unsigned int *)0xC4) /* m/m */
#define UBRRH	(*(volatile unsigned char *)0xC5) /* m/m */
#define UBRRL	(*(volatile unsigned char *)0xC4) /* m/m */
#define UBRR	(*(volatile unsigned int *)0xC4) /* m/m */
#define UCSR0C	(*(volatile unsigned char *)0xC2) /* m/m */
#define  UMSEL0   6
#define  UPM01    5
#define  UPM00    4
#define  USBS0    3
#define  UCSZ01   2
#define  UCSZ00   1
#define  UCPOL0   0
#define UCSRC	(*(volatile unsigned char *)0xC2) /* m/m */
#define  UMSEL    6
#define  UPM1     5
#define  UPM0     4
#define  USBS     3
#define  UCSZ1    2
#define  UCSZ0    1
#define  UCPOL    0
#define UCSR0B	(*(volatile unsigned char *)0xC1) /* m/m */
#define  RXCIE0   7
#define  TXCIE0   6
#define  UDRIE0   5
#define  RXEN0    4
#define  TXEN0    3
#define  UCSZ02   2
#define  RXB80    1
#define  TXB80    0
#define UCSRB	(*(volatile unsigned char *)0xC1) /* m/m */
#define  RXCIE    7
#define  TXCIE    6
#define  UDRIE    5
#define  RXEN     4
#define  TXEN     3
#define  UCSZ2    2
#define  RXB8     1
#define  TXB8     0
#define UCSR0A	(*(volatile unsigned char *)0xC0) /* m/m */
#define  RXC0     7
#define  TXC0     6
#define  UDRE0    5
#define  FE0      4
#define  DOR0     3
#define  UPE0     2
#define  U2X0     1
#define  MPCM0    0
#define UCSRA	(*(volatile unsigned char *)0xC0) /* m/m */
#define  RXC      7
#define  TXC      6
#define  UDRE     5
#define  FE       4
#define  DOR      3
#define  UPE      2
#define  U2X      1
#define  MPCM     0
#define UDR0	(*(volatile unsigned char *)0xC6) /* m/m */
#define UDR 	(*(volatile unsigned char *)0xC6) /* m/m */

/* Extended USART */
#define MUBRRH	(*(volatile unsigned char *)0xCD) /* m/m */
#define MUBRRL	(*(volatile unsigned char *)0xCC) /* m/m */
#define MUBRR	(*(volatile unsigned int *)0xCC) /* m/m */
#define EUCSRC	(*(volatile unsigned char *)0xCA) /* m/m */
#define  FEM      3
#define  F1617    2
#define  STP1     1
#define  STP0     0
#define EUCSRB	(*(volatile unsigned char *)0xC9) /* m/m */
#define  EUSART   4
#define  EUSBS    3
#define  EMCH     1
#define  BODR     0
#define EUCSRA	(*(volatile unsigned char *)0xC8) /* m/m */
#define  UTxS3    7
#define  UTXS3    7
#define  UTxS2    6
#define  UTXS2    6
#define  UTxS1    5
#define  UTXS1    5
#define  UTxS0    4
#define  UTXS0    4
#define  URxS3    3
#define  URXS3    3
#define  URxS2    2
#define  URXS2    2
#define  URxS1    1
#define  URXS1    1
#define  URxS0    0
#define  URXS0    0
#define EUDR 	(*(volatile unsigned char *)0xCE) /* m/m */


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


/* EEPROM */
#define EECR	(*(volatile unsigned char *)0x3F)
#define  EERIE    3
#define  EEMWE    2
#define  EEWE     1
#define  EERE     0
#define EEDR	(*(volatile unsigned char *)0x40)
#define EEAR	(*(volatile unsigned int *)0x41)
#define EEARL	(*(volatile unsigned char *)0x41)
#define EEARH	(*(volatile unsigned char *)0x42)
/* high byte unused with m48, must be written 0 */


/* Monitor ?? */
#define MSMCR	(*(volatile unsigned char *)0x52)
#define MONDR	(*(volatile unsigned char *)0x51)

/* MCU */
#define MCUSR	(*(volatile unsigned char *)0x54)
#define  WDRF     3
#define  BORF     2
#define  EXTRF    1
#define  PORF     0
#define MCUCR	(*(volatile unsigned char *)0x55)
#define  SPIPS    7
#define  PUD      4
#define  IVSEL    1
#define  IVCE     0

/* SPM Control and Status Register */
#define SPMCSR	(*(volatile unsigned char *)0x57)
#define  SPMIE    7
#define  RWWSB    6
#define  RWWSRE   4
#define  BLBSET   3
#define  PGWRT    2
#define  PGERS    1
#define  SPMEN    0

/* SMCR */
#define SMCR	(*(volatile unsigned char *)0x53)
#define  SM2      3
#define  SM1      2
#define  SM0      1
#define  SE       0

/* Stack Pointer */
#define SP  	(*(volatile unsigned int *)0x5D)
#define SPL 	(*(volatile unsigned char *)0x5D)
#define SPH 	(*(volatile unsigned char *)0x5E)

/* Status REGister */
#define SREG	(*(volatile unsigned char *)0x5F)

/* Watchdog Timer Control Register */
#define WDTCSR	(*(volatile unsigned char *)0x60) /* m/m */
#define  WDIF     7
#define  WDIE     6
#define  WDP3     5
#define  WDCE     4
#define  WDE      3
#define  WDP2     2
#define  WDP1     1
#define  WDP0     0

/* CLKPR */
#define CLKPR	(*(volatile unsigned char *)0x61) /* m/m */
#define  CLKPCE   7
#define  CLKPS3   3
#define  CLKPS2   2
#define  CLKPS1   1
#define  CLKPS0   0

/* PRR */
#define PRR 	(*(volatile unsigned char *)0x64) /* m/m */
#define  PRPSC2   7
#define  PRPSC1   6
#define  PRPSC0   5
#define  PRTIM1   4
#define  PRTIM0   3
#define  PRSPI    2
#define  PRUSART  1
#define  PRADC    0

/* OSCCAL */
#define OSCCAL	(*(volatile unsigned char *)0x66) /* m/m */

/* PLLCSR */
#define PLLCSR	(*(volatile unsigned char *)0x49)
#define  PLLF     2
#define  PLLE     1
#define  PLOCK    0
#define  PLLOCK   0


/* EICRA */
#define EICRA	(*(volatile unsigned char *)0x69) /* m/m */
#define  ISC31    7
#define  ISC30    6
#define  ISC21    5
#define  ISC20    4
#define  ISC11    3
#define  ISC10    2
#define  ISC01    1
#define  ISC00    0


/* Timer/Counter 0 */
#define OCR0B	(*(volatile unsigned char *)0x48)
#define OCR0A	(*(volatile unsigned char *)0x47)
#define TCNT0	(*(volatile unsigned char *)0x46)
#define TCCR0B	(*(volatile unsigned char *)0x45)
#define  FOC0A    7
#define  FOC0B    6
#define  WGM02    3
#define  CS02     2
#define  CS01     1
#define  CS00     0
#define TCCR0A	(*(volatile unsigned char *)0x44)
#define  COM0A1   7
#define  COM0A0   6
#define  COM0B1   5
#define  COM0B0   4
#define  WGM01    1
#define  WGM00    0

/* Timer/Counter1 */
#define ICR1	(*(volatile unsigned int *)0x86) /* m/m */
#define ICR1L	(*(volatile unsigned char *)0x86) /* m/m */
#define ICR1H	(*(volatile unsigned char *)0x87) /* m/m */
#define OCR1B	(*(volatile unsigned int *)0x8A) /* m/m */
#define OCR1BL	(*(volatile unsigned char *)0x8A) /* m/m */
#define OCR1BH	(*(volatile unsigned char *)0x8B) /* m/m */
#define OCR1A	(*(volatile unsigned int *)0x88) /* m/m */
#define OCR1AL	(*(volatile unsigned char *)0x88) /* m/m */
#define OCR1AH	(*(volatile unsigned char *)0x89) /* m/m */
#define TCNT1	(*(volatile unsigned int *)0x84) /* m/m */
#define TCNT1L	(*(volatile unsigned char *)0x84) /* m/m */
#define TCNT1H	(*(volatile unsigned char *)0x85) /* m/m */
#define TCCR1C	(*(volatile unsigned char *)0x82) /* m/m */
#define  FOC1A    7
#define  FOC1B    6
#define TCCR1B	(*(volatile unsigned char *)0x81) /* m/m */
#define  ICNC1    7
#define  ICES1    6
#define  WGM13    4
#define  WGM12    3
#define  CS12     2
#define  CS11     1
#define  CS10     0
#define TCCR1A	(*(volatile unsigned char *)0x80) /* m/m */
#define  COM1A1   7
#define  COM1A0   6
#define  COM1B1   5
#define  COM1B0   4
#define  WGM11    1
#define  WGM10    0


/* GTCCR */
#define GTCCR	(*(volatile unsigned char *)0x43)
#define  TSM      7
#define  ICPSEL1  6
#define  PSRSYNC  0


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

#define TIMSK0	(*(volatile unsigned char *)0x6E) /* m/m */
#define  OCIE0B   2
#define  OCIE0A   1
#define  TOIE0    0
#define TIMSK1	(*(volatile unsigned char *)0x6F) /* m/m */
#define  TICIE1   5
#define  OCIE1B   2
#define  OCIE1A   1
#define  TOIE1    0


/* Digital Inputs Disahle Registers */
#define DIDR1	(*(volatile unsigned char *)0x7F) /* m/m */
#define  ACMP0D   5
#define  AMP0PD   4
#define  AMP0ND   3
#define  ADC10D   2
#define  ACMP1D   2
#define  ADC9D    1
#define  AMP1PD   1
#define  ADC8D    0
#define  AMP1ND   0
#define DIDR0	(*(volatile unsigned char *)0x7E) /* m/m */
#define  ADC7D    7
#define  ADC6D    6
#define  ADC5D    5
#define  ADC4D    4
#define  ADC3D    3
#define  ACMPMD   3
#define  ADC2D    2
#define  ACMP2D   2
#define  ADC1D    1
#define  ADC0D    0


/* PSCs */
#define PSOC0	(*(volatile unsigned char *)0xD0) /* m/m */
#define  PSYNC01  5
#define  PSYNC00  4
#define  POEN0B   2
#define  POEN0A   0
#define OCR0SA	(*(volatile unsigned int *)0xD2) /* m/m */
#define OCR0SAL	(*(volatile unsigned char *)0xD2) /* m/m */
#define OCR0SAH	(*(volatile unsigned char *)0xD3) /* m/m */
#define OCR0RA	(*(volatile unsigned int *)0xD4) /* m/m */
#define OCR0RAL	(*(volatile unsigned char *)0xD4) /* m/m */
#define OCR0RAH	(*(volatile unsigned char *)0xD5) /* m/m */
#define OCR0SB	(*(volatile unsigned int *)0xD6) /* m/m */
#define OCR0SBL	(*(volatile unsigned char *)0xD6) /* m/m */
#define OCR0SBH	(*(volatile unsigned char *)0xD7) /* m/m */
#define OCR0RB	(*(volatile unsigned int *)0xD8) /* m/m */
#define OCR0RBL	(*(volatile unsigned char *)0xD8) /* m/m */
#define OCR0RBH	(*(volatile unsigned char *)0xD9) /* m/m */
#define PCNF0	(*(volatile unsigned char *)0xDA) /* m/m */
#define  PFIFTY0  7
#define  PALOCK0  6
#define  PLOCK0   5
#define  PMODE01  4
#define  PMODE00  3
#define  POP0     2
#define  PCLKSEL0 1
#define PCTL0	(*(volatile unsigned char *)0xDB) /* m/m */
#define  PPRE01   7
#define  PPRE00   6
#define  PBFM0    5
#define  PAOC0B   4
#define  PAOC0A   3
#define  PARUN0   2
#define  PCCYC0   1
#define  PRUN0    0
#define PFRC0A	(*(volatile unsigned char *)0xDC) /* m/m */
#define  PCAE0A   7
#define  PISEL0A  6
#define  PELEV0A  5
#define  PFLTE0A  4
#define  PRFM0A3  3
#define  PRFM0A2  2
#define  PRFM0A1  1
#define  PRFM0A0  0
#define PFRC0B	(*(volatile unsigned char *)0xDD) /* m/m */
#define  PCAE0B   7
#define  PISEL0B  6
#define  PELEV0B  5
#define  PFLTE0B  4
#define  PRFM0B3  3
#define  PRFM0B2  2
#define  PRFM0B1  1
#define  PRFM0B0  0
#define PICR0	(*(volatile unsigned int *)0xDE) /* m/m */
#define PICR0L	(*(volatile unsigned char *)0xDE) /* m/m */
#define PICR0H	(*(volatile unsigned char *)0xDF) /* m/m */

#define PSOC1	(*(volatile unsigned char *)0xE0) /* m/m */
#define  PSYNC11  5
#define  PSYNC10  4
#define  POEN1B   2
#define  POEN1A   0
#define OCR1SA	(*(volatile unsigned int *)0xE2) /* m/m */
#define OCR1SAL	(*(volatile unsigned char *)0xE2) /* m/m */
#define OCR1SAH	(*(volatile unsigned char *)0xE3) /* m/m */
#define OCR1RA	(*(volatile unsigned int *)0xE4) /* m/m */
#define OCR1RAL	(*(volatile unsigned char *)0xE4) /* m/m */
#define OCR1RAH	(*(volatile unsigned char *)0xE5) /* m/m */
#define OCR1SB	(*(volatile unsigned int *)0xE6) /* m/m */
#define OCR1SBL	(*(volatile unsigned char *)0xE6) /* m/m */
#define OCR1SBH	(*(volatile unsigned char *)0xE7) /* m/m */
#define OCR1RB	(*(volatile unsigned int *)0xE8) /* m/m */
#define OCR1RBL	(*(volatile unsigned char *)0xE8) /* m/m */
#define OCR1RBH	(*(volatile unsigned char *)0xE9) /* m/m */
#define PCNF1	(*(volatile unsigned char *)0xEA) /* m/m */
#define  PFIFTY1  7
#define  PALOCK1  6
#define  PLOCK1   5
#define  PMODE11  4
#define  PMODE10  3
#define  POP1     2
#define  PCLKSEL1 1
#define PCTL1	(*(volatile unsigned char *)0xEB) /* m/m */
#define  PPRE11   7
#define  PPRE10   6
#define  PBFM1    5
#define  PAOC1B   4
#define  PAOC1A   3
#define  PARUN1   2
#define  PCCYC1   1
#define  PRUN1    0
#define PFRC1A	(*(volatile unsigned char *)0xEC) /* m/m */
#define  PCAE1A   7
#define  PISEL1A  6
#define  PELEV1A  5
#define  PFLTE1A  4
#define  PRFM1A3  3
#define  PRFM1A2  2
#define  PRFM1A1  1
#define  PRFM1A0  0
#define PFRC1B	(*(volatile unsigned char *)0xED) /* m/m */
#define  PCAE1B   7
#define  PISEL1B  6
#define  PELEV1B  5
#define  PFLTE1B  4
#define  PRFM1B3  3
#define  PRFM1B2  2
#define  PRFM1B1  1
#define  PRFM1B0  0
#define PICR1	(*(volatile unsigned int *)0xEE) /* m/m */
#define PICR1L	(*(volatile unsigned char *)0xEE) /* m/m */
#define PICR1H	(*(volatile unsigned char *)0xEF) /* m/m */

#define PSOC2	(*(volatile unsigned char *)0xF0) /* m/m */
#define  POS23    7
#define  POS22    6
#define  PSYNC21  5
#define  PSYNC20  4
#define  POEN2D   3
#define  POEN2B   2
#define  POEN2C   1
#define  POEN2A   0
#define POM2	(*(volatile unsigned char *)0xF1) /* m/m */
#define  POMV2B3  7
#define  POMV2B2  6
#define  POMV2B1  5
#define  POMV2B0  4
#define  POMV2A3  3
#define  POMV2A2  2
#define  POMV2A1  1
#define  POMV2A0  0
#define OCR2SA	(*(volatile unsigned int *)0xF2) /* m/m */
#define OCR2SAL	(*(volatile unsigned char *)0xF2) /* m/m */
#define OCR2SAH	(*(volatile unsigned char *)0xF3) /* m/m */
#define OCR2RA	(*(volatile unsigned int *)0xF4) /* m/m */
#define OCR2RAL	(*(volatile unsigned char *)0xF4) /* m/m */
#define OCR2RAH	(*(volatile unsigned char *)0xF5) /* m/m */
#define OCR2SB	(*(volatile unsigned int *)0xF6) /* m/m */
#define OCR2SBL	(*(volatile unsigned char *)0xF6) /* m/m */
#define OCR2SBH	(*(volatile unsigned char *)0xF7) /* m/m */
#define OCR2RB	(*(volatile unsigned int *)0xF8) /* m/m */
#define OCR2RBL	(*(volatile unsigned char *)0xF8) /* m/m */
#define OCR2RBH	(*(volatile unsigned char *)0xF9) /* m/m */
#define PCNF2	(*(volatile unsigned char *)0xFA) /* m/m */
#define  PFIFTY2  7
#define  PALOCK2  6
#define  PLOCK2   5
#define  PMODE21  4
#define  PMODE20  3
#define  POP2     2
#define  PCLKSEL2 1
#define  POME2    0
#define PCTL2	(*(volatile unsigned char *)0xFB) /* m/m */
#define  PPRE21   7
#define  PPRE20   6
#define  PBFM2    5
#define  PAOC2B   4
#define  PAOC2A   3
#define  PARUN2   2
#define  PCCYC2   1
#define  PRUN2    0
#define PFRC2A	(*(volatile unsigned char *)0xFC) /* m/m */
#define  PCAE2A   7
#define  PISEL2A  6
#define  PELEV2A  5
#define  PFLTE2A  4
#define  PRFM2A3  3
#define  PRFM2A2  2
#define  PRFM2A1  1
#define  PRFM2A0  0
#define PFRC2B	(*(volatile unsigned char *)0xFD) /* m/m */
#define  PCAE2B   7
#define  PISEL2B  6
#define  PELEV2B  5
#define  PFLTE2B  4
#define  PRFM2B3  3
#define  PRFM2B2  2
#define  PRFM2B1  1
#define  PRFM2B0  0
#define PICR2	(*(volatile unsigned int *)0xFE) /* m/m */
#define PICR2L	(*(volatile unsigned char *)0xFE) /* m/m */
#define PICR2H	(*(volatile unsigned char *)0xFF) /* m/m */

/* PSC interrupts */
#define PIFR0	(*(volatile unsigned char *)0xA0) /* m/m */
#define  POAC0B   7
#define  POAC0A   6
#define  PSEI0    5
#define  PEV0B    4
#define  PEV0A    3
#define  PRN01    2
#define  PRN00    1
#define  PEOP0    0
#define PIM0	(*(volatile unsigned char *)0xA1) /* m/m */
#define  PSEIE0   5
#define  PEVE0B   4
#define  PEVE0A   3
#define  PEOPE0   0
#define PIFR1	(*(volatile unsigned char *)0xA2) /* m/m */
#define  POAC1B   7
#define  POAC1A   6
#define  PSEI1    5
#define  PEV1B    4
#define  PEV1A    3
#define  PRN11    2
#define  PRN10    1
#define  PEOP1    0
#define PIM1	(*(volatile unsigned char *)0xA3) /* m/m */
#define  PSEIE1   5
#define  PEVE1B   4
#define  PEVE1A   3
#define  PEOPE1   0
#define PIFR2	(*(volatile unsigned char *)0xA4) /* m/m */
#define  POAC2B   7
#define  POAC2A   6
#define  PSEI2    5
#define  PEV2B    4
#define  PEV2A    3
#define  PRN21    2
#define  PRN20    1
#define  PEOP2    0
#define PIM2	(*(volatile unsigned char *)0xA5) /* m/m */
#define  PSEIE2   5
#define  PEVE2B   4
#define  PEVE2A   3
#define  PEOPE2   0



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

#define  DDC7     7
#define  DDC6     6
#define  DDC5     5
#define  DDC4     4
#define  DDC3     3
#define  DDC2     2
#define  DDC1     1
#define  DDC0     0

#define  PINC7    7
#define  PINC6    6
#define  PINC5    5
#define  PINC4    4
#define  PINC3    3
#define  PINC2    2
#define  PINC1    1
#define  PINC0    0

/* Port D bits */
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

#define  DDD7     7
#define  DDD6     6
#define  DDD5     5
#define  DDD4     4
#define  DDD3     3
#define  DDD2     2
#define  DDD1     1
#define  DDD0     0

#define  PIND7    7
#define  PIND6    6
#define  PIND5    5
#define  PIND4    4
#define  PIND3    3
#define  PIND2    2
#define  PIND1    1
#define  PIND0    0

/* Port E bits */
#define  PORTE2   2
#define  PORTE1   1
#define  PORTE0   0
#define  PE2      2
#define  PE1      1
#define  PE0      0

#define  DDE2     2
#define  DDE1     1
#define  DDE0     0

#define  PINE2    2
#define  PINE1    1
#define  PINE0    0



/* Lock and Fuse Bits with LPM/SPM instructions */

/* lock bits (Z = 0x0001) */
#define  BLB12    5
#define  BLB11    4
#define  BLB02    3
#define  BLB01    2
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

/* extended fuses */
#define  PSC2RB   7
#define  PSC1RB   6
#define  PSC0RB   5
#define  PSCRV    4
#define  BOOTSZ1  2
#define  BOOTSZ0  1
#define  BOOTRST  0



/* Interrupt Vector Numbers */

#define iv_RESET        1
#define iv_PSC2_CAPT    2
#define iv_PSC2_EC      3
#define iv_PSC1_CAPT    4
#define iv_PSC1_EC      5
#define iv_PSC0_CAPT    6
#define iv_PSC0_EC      7
#define iv_ANA_COMP0    8
#define iv_ANA_COMP1    9
#define iv_ANA_COMP2    10
#define iv_INT0         11
#define iv_EXT_INT0     11
#define iv_TIMER1_CAPT  12
#define iv_TIM1_CAPT    12
#define iv_TIMER1_COMPA 13
#define iv_TIM1_COMPA   13
#define iv_TIMER1_COMPB 14
#define iv_TIM1_COMPB   14
#define iv_TIMER1_OVF   16
#define iv_TIM1_OVF     16
#define iv_TIMER0_COMPA 17
#define iv_TIM0_COMPA   17
#define iv_TIMER0_OVF   18
#define iv_TIM0_OVF     18
#define iv_ADC          19
#define iv_INT1         20
#define iv_EXT_INT1     20
#define iv_SPI_STC      21
#define iv_USART_RX     22
#define iv_USART_RXC    22
#define iv_USART0_RX    22
#define iv_USART0_RXC   22
#define iv_USART_DRE    23
#define iv_USART_UDRE   23
#define iv_USART0_DRE   23
#define iv_USART0_UDRE  23
#define iv_USART_TX     24
#define iv_USART_TXC    24
#define iv_USART0_TX    24
#define iv_USART0_TXC   24
#define iv_INT2         25
#define iv_EXT_INT2     25
#define iv_WDT          26
#define iv_EE_RDY       27
#define iv_EE_READY     27
#define iv_TIMER0_COMPB 28
#define iv_TIM0_COMPB   28
#define iv_INT3         29
#define iv_EXT_INT3     29
#define iv_SPM_RDY      32
#define iv_SPM_READY    32

/* */

#endif
