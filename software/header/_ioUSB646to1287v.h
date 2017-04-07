#ifndef ___ioUSB646to1287v_h
#define ___ioUSB646to1287v_h

/* AT90USB646..1287 header file for
 * ImageCraft ICCAVR compiler
 */

/* 2006/02/11 created as ioUSB1287v.h
   2006/07/23 changes as by datasheet rev D,
              fixed missing PLLCSR,
              added USART and USART0 for convenience
   2006/10/28 fixed PLLCSR address,
              fixed some misspelled USB regsisters/bits,
              added USB enpoint/pipe number bits
   2008/01/22 fixed ADCSRB
   2008/04/21 added USART bits for SPI mode
 */

/* Port F */
#define PINF	(*(volatile unsigned char *)0x2F)
#define DDRF	(*(volatile unsigned char *)0x30)
#define PORTF	(*(volatile unsigned char *)0x31)

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

/* Port A */
#define PINA	(*(volatile unsigned char *)0x20)
#define DDRA	(*(volatile unsigned char *)0x21)
#define PORTA	(*(volatile unsigned char *)0x22)

/* ADC */
#define ADC 	(*(volatile unsigned int *)0x78)
#define ADCL	(*(volatile unsigned char *)0x78)
#define ADCH	(*(volatile unsigned char *)0x79)
#define ADCSRA	(*(volatile unsigned char *)0x7A)
#define  ADEN     7
#define  ADSC     6
#define  ADATE    5
#define  ADIF     4
#define  ADIE     3
#define  ADPS2    2
#define  ADPS1    1
#define  ADPS0    0
#define ADCSRB	(*(volatile unsigned char *)0x7B)
#define  ADHSM    7
#define  ACME     6
#define  ADTS2    2
#define  ADTS1    1
#define  ADTS0    0
#define ADMUX	(*(volatile unsigned char *)0x7C)
#define  REFS1    7
#define  REFS0    6
#define  ADLAR    5
#define  MUX4     4
#define  MUX3     3
#define  MUX2     2
#define  MUX1     1
#define  MUX0     0

/* Analog Comparator Control and Status Register */
#define ACSR	(*(volatile unsigned char *)0x50)
#define  ACD      7
#define  ACBG     6
#define  ACO      5
#define  ACI      4
#define  ACIE     3
#define  ACIC     2
#define  ACIS1    1
#define  ACIS0    0

/* DIDR */
#define DIDR0	(*(volatile unsigned char *)0x7E)
#define  ADC7D    7
#define  ADC6D    6
#define  ADC5D    5
#define  ADC4D    4
#define  ADC3D    3
#define  ADC2D    2
#define  ADC1D    1
#define  ADC0D    0
#define DIDR1	(*(volatile unsigned char *)0x7F)
#define  AIN1D    1
#define  AIN0D    0

/* USART1 - as by datasheet */
#define UBRR1H	(*(volatile unsigned char *)0xCD)
#define UBRR1L	(*(volatile unsigned char *)0xCC)
#define UBRR1	(*(volatile unsigned int *)0xCC)
#define UCSR1C	(*(volatile unsigned char *)0xCA)
#define  UMSEL11  7
#define  UMSEL10  6
#define  UPM11    5
#define  UPM10    4
#define  USBS1    3
#define  UCSZ11   2
#define  UCSZ10   1
#define  UCPOL1   0
/* in SPI mode */
#define  UDORD1   2
#define  UCPHA1   1
#define UCSR1B	(*(volatile unsigned char *)0xC9)
#define  RXCIE1   7
#define  TXCIE1   6
#define  UDRIE1   5
#define  RXEN1    4
#define  TXEN1    3
#define  UCSZ12   2
#define  RXB81    1
#define  TXB81    0
#define UCSR1A	(*(volatile unsigned char *)0xC8)
#define  RXC1     7
#define  TXC1     6
#define  UDRE1    5
#define  FE1      4
#define  DOR1     3
#define  UPE1     2
#define  U2X1     1
#define  MPCM1    0
#define UDR1	(*(volatile unsigned char *)0xCE)

/* USART0 - to ease port of existing code */
#define UBRR0H	(*(volatile unsigned char *)0xCD)
#define UBRR0L	(*(volatile unsigned char *)0xCC)
#define UBRR0	(*(volatile unsigned int *)0xCC)
#define UCSR0C	(*(volatile unsigned char *)0xCA)
#define  UMSEL01  7
#define  UMSEL00  6
#define  UPM01    5
#define  UPM00    4
#define  USBS0    3
#define  UCSZ01   2
#define  UCSZ00   1
#define  UCPOL0   0
/* in SPI mode */
#define  UDORD0   2
#define  UCPHA0   1
#define UCSR0B	(*(volatile unsigned char *)0xC9)
#define  RXCIE0   7
#define  TXCIE0   6
#define  UDRIE0   5
#define  RXEN0    4
#define  TXEN0    3
#define  UCSZ02   2
#define  RXB80    1
#define  TXB80    0
#define UCSR0A	(*(volatile unsigned char *)0xC8)
#define  RXC0     7
#define  TXC0     6
#define  UDRE0    5
#define  FE0      4
#define  DOR0     3
#define  UPE0     2
#define  U2X0     1
#define  MPCM0    0
#define UDR0	(*(volatile unsigned char *)0xCE)

/* USART - to ease port of existing code */
#define UBRRH	(*(volatile unsigned char *)0xCD)
#define UBRRL	(*(volatile unsigned char *)0xCC)
#define UBRR	(*(volatile unsigned int *)0xCC)
#define UCSRC	(*(volatile unsigned char *)0xCA)
#define  UMSEL1   7
#define  UMSEL0   6
#define  UPM1     5
#define  UPM0     4
#define  USBS     3
#define  UCSZ1    2
#define  UCSZ0    1
#define  UCPOL    0
/* in SPI mode */
#define  UDORD    2
#define  UCPHA    1
#define UCSRB	(*(volatile unsigned char *)0xC9)
#define  RXCIE    7
#define  TXCIE    6
#define  UDRIE    5
#define  RXEN     4
#define  TXEN     3
#define  UCSZ2    2
#define  RXB8     1
#define  TXB8     0
#define UCSRA	(*(volatile unsigned char *)0xC8)
#define  RXC      7
#define  TXC      6
#define  UDRE     5
#define  FE       4
#define  DOR      3
#define  PE       2
#define  UPE      2
#define  U2X      1
#define  MPCM     0
#define UDR	(*(volatile unsigned char *)0xCE)

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

/* GTCCR */
#define GTCCR	(*(volatile unsigned char *)0x43)
#define  TSM      7
#define  PSRASY   1
#define  PSRSYNC  0

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

/* OCDR */
#define OCDR	(*(volatile unsigned char *)0x51)
#define MONDR	(*(volatile unsigned char *)0x51)

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
#define ICR1	(*(volatile unsigned int *)0x86)
#define ICR1L	(*(volatile unsigned char *)0x86)
#define ICR1H	(*(volatile unsigned char *)0x87)
#define OCR1C	(*(volatile unsigned int *)0x8C)
#define OCR1CL	(*(volatile unsigned char *)0x8C)
#define OCR1CH	(*(volatile unsigned char *)0x8D)
#define OCR1B	(*(volatile unsigned int *)0x8A)
#define OCR1BL	(*(volatile unsigned char *)0x8A)
#define OCR1BH	(*(volatile unsigned char *)0x8B)
#define OCR1A	(*(volatile unsigned int *)0x88)
#define OCR1AL	(*(volatile unsigned char *)0x88)
#define OCR1AH	(*(volatile unsigned char *)0x89)
#define TCNT1	(*(volatile unsigned int *)0x84)
#define TCNT1L	(*(volatile unsigned char *)0x84)
#define TCNT1H	(*(volatile unsigned char *)0x85)
#define TCCR1C	(*(volatile unsigned char *)0x82)
#define  FOC1A    7
#define  FOC1B    6
#define  FOC1C    5
#define TCCR1B	(*(volatile unsigned char *)0x81)
#define  ICNC1    7
#define  ICES1    6
#define  WGM13    4
#define  WGM12    3
#define  CS12     2
#define  CS11     1
#define  CS10     0
#define TCCR1A	(*(volatile unsigned char *)0x80)
#define  COM1A1   7
#define  COM1A0   6
#define  COM1B1   5
#define  COM1B0   4
#define  COM1C1   3
#define  COM1C0   2
#define  WGM11    1
#define  WGM10    0

/* Timer/Counter2 */
#define ASSR	(*(volatile unsigned char *)0xB6)
#define  EXCLK    6
#define  AS2      5
#define  TCN2UB   4
#define  OCR2AUB  3
#define  OCR2BUB  2
#define  TCR2AUB  1
#define  TCR2BUB  0
#define OCR2B	(*(volatile unsigned char *)0xB4)
#define OCR2A	(*(volatile unsigned char *)0xB3)
#define TCNT2	(*(volatile unsigned char *)0xB2)
#define TCCR2B	(*(volatile unsigned char *)0xB1)
#define  FOC2A    7
#define  FOC2B    6
#define  WGM22    3
#define  CS22     2
#define  CS21     1
#define  CS20     0
#define TCCR2A	(*(volatile unsigned char *)0xB0)
#define  COM2A1   7
#define  COM2A0   6
#define  COM2B1   5
#define  COM2B0   4
#define  WGM21    1
#define  WGM20    0

/* Timer/Counter3 */
#define OCR3CH	(*(volatile unsigned char *)0x9D)
#define OCR3CL	(*(volatile unsigned char *)0x9C)
#define OCR3C	(*(volatile unsigned int *)0x9C)
#define OCR3BH	(*(volatile unsigned char *)0x9B)
#define OCR3BL	(*(volatile unsigned char *)0x9A)
#define OCR3B	(*(volatile unsigned int *)0x9A)
#define OCR3AH	(*(volatile unsigned char *)0x99)
#define OCR3AL	(*(volatile unsigned char *)0x98)
#define OCR3A	(*(volatile unsigned int *)0x98)
#define ICR3H	(*(volatile unsigned char *)0x97)
#define ICR3L	(*(volatile unsigned char *)0x96)
#define ICR3	(*(volatile unsigned int *)0x96)
#define TCNT3H	(*(volatile unsigned char *)0x95)
#define TCNT3L	(*(volatile unsigned char *)0x94)
#define TCNT3	(*(volatile unsigned int *)0x94)
#define TCCR3C	(*(volatile unsigned char *)0x92)
#define  FOC3A    7
#define  FOC3B    6
#define  FOC3C    5
#define TCCR3B	(*(volatile unsigned char *)0x91)
#define  ICNC3    7
#define  ICES3    6
#define  WGM33    4
#define  WGM32    3
#define  CS32     2
#define  CS31     1
#define  CS30     0
#define TCCR3A	(*(volatile unsigned char *)0x90)
#define  COM3A1   7
#define  COM3A0   6
#define  COM3B1   5
#define  COM3B0   4
#define  COM3C1   3
#define  COM3C0   2
#define  WGM31    1
#define  WGM30    0

/* Oscillator Calibration Register */
#define OSCCAL	(*(volatile unsigned char *)0x66)

/* clock prescaler control register */
#define CLKPR	(*(volatile unsigned char *)0x61)
#define  CLKPCE   7
#define  CLKPS3   3
#define  CLKPS2   2
#define  CLKPS1   1
#define  CLKPS0   0

/* PLL control register */
#define PLLCSR	(*(volatile unsigned char *)0x49)
#define  PLLP2    4
#define  PLLP1    3
#define  PLLP0    2
#define  PLLE     1
#define  PLOCK    0

/* PRR */
#define PRR0	(*(volatile unsigned char *)0x64)
#define  PRTWI    7
#define  PRTIM2   6
#define  PRTIM0   5
#define  PRTIM1   3
#define  PRSPI    2
#define  PRADC    0
#define PRR1	(*(volatile unsigned char *)0x65)
#define  PRUSB    7
#define  PRTIM3   3
#define  PRUSART1 0

/* MCU */
#define MCUSR	(*(volatile unsigned char *)0x54)
#define  JTRF     4
#define  WDRF     3
#define  BORF     2
#define  EXTRF    1
#define  PORF     0
#define MCUCR	(*(volatile unsigned char *)0x55)
#define  JTD      7
#define  PUD      4
#define  IVSEL    1
#define  IVCE     0

#define SMCR	(*(volatile unsigned char *)0x53)
#define  SM2      3
#define  SM1      2
#define  SM0      1
#define  SE       0

/* SPM Control and Status Register */
#define SPMCSR	(*(volatile unsigned char *)0x57)
#define  SPMIE    7
#define  RWWSB    6
#define  SIGRD    5
#define  RWWSRE   4
#define  BLBSET   3
#define  PGWRT    2
#define  PGERS    1
#define  SPMEN    0

/* Timer/Counter Interrupts */
#define TIFR0	(*(volatile unsigned char *)0x35)
#define  OCF0B    2
#define  OCF0A    1
#define  TOV0     0
#define TIMSK0	(*(volatile unsigned char *)0x6E)
#define  OCIE0B   2
#define  OCIE0A   1
#define  TOIE0    0
#define TIFR1	(*(volatile unsigned char *)0x36)
#define  ICF1     5
#define  OCF1C    3
#define  OCF1B    2
#define  OCF1A    1
#define  TOV1     0
#define TIMSK1	(*(volatile unsigned char *)0x6F)
#define  ICIE1    5
#define  OCIE1C   3
#define  OCIE1B   2
#define  OCIE1A   1
#define  TOIE1    0
#define TIFR2	(*(volatile unsigned char *)0x37)
#define  OCF2B    2
#define  OCF2A    1
#define  TOV2     0
#define TIMSK2	(*(volatile unsigned char *)0x70)
#define  OCIE2B   2
#define  OCIE2A   1
#define  TOIE2    0
#define TIFR3	(*(volatile unsigned char *)0x38)
#define  ICF3     5
#define  OCF3C    3
#define  OCF3B    2
#define  OCF3A    1
#define  TOV3     0
#define TIMSK3	(*(volatile unsigned char *)0x71)
#define  ICIE3    5
#define  OCIE3C   3
#define  OCIE3B   2
#define  OCIE3A   1
#define  TOIE3    0

/* External Interrupts */
#define EIFR	(*(volatile unsigned char *)0x3C)
#define  INTF7    7
#define  INTF6    6
#define  INTF5    5
#define  INTF4    4
#define  INTF3    3
#define  INTF2    2
#define  INTF1    1
#define  INTF0    0
#define EIMSK	(*(volatile unsigned char *)0x3D)
#define  INT7     7
#define  INT6     6
#define  INT5     5
#define  INT4     4
#define  INT3     3
#define  INT2     2
#define  INT1     1
#define  INT0     0
#define EICRB	(*(volatile unsigned char *)0x6A)
#define  ISC71    7
#define  ISC70    6
#define  ISC61    5
#define  ISC60    4
#define  ISC51    3
#define  ISC50    2
#define  ISC41    1
#define  ISC40    0
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
#define PCIFR	(*(volatile unsigned char *)0x3B)
#define  PCIF0    0
#define PCICR	(*(volatile unsigned char *)0x68)
#define  PCIE0    0
#define PCMSK0	(*(volatile unsigned char *)0x6B)

/* eXternal Memory Control Register */
#define XMCRB	(*(volatile unsigned char *)0x75)
#define  XMBK     7
#define  XMM2     2
#define  XMM1     1
#define  XMM0     0
#define XMCRA	(*(volatile unsigned char *)0x74)
#define  SRE      7
#define  SRL2     6
#define  SRL1     5
#define  SRL0     4
#define  SRW11    3
#define  SRW10    2
#define  SRW01    1
#define  SRW00    0

/* GPIO */
#define GPIOR0	(*(volatile unsigned char *)0x3E)
#define GPIOR1	(*(volatile unsigned char *)0x4A)
#define GPIOR2	(*(volatile unsigned char *)0x4B)

/* RAM page Z-pointer */
#define RAMPZ	(*(volatile unsigned char *)0x5B)

/* Stack Pointer */
#define SP  	(*(volatile unsigned int *)0x5D)
#define SPL 	(*(volatile unsigned char *)0x5D)
#define SPH 	(*(volatile unsigned char *)0x5E)

/* Status REGister */
#define SREG	(*(volatile unsigned char *)0x5F)


/* io bits */

/* Port A */
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

/* Port B */
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

/* Port C */
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

/* Port D */
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

/* Port E */
#define  PORTE7   7
#define  PORTE6   6
#define  PORTE5   5
#define  PORTE4   4
#define  PORTE3   3
#define  PORTE2   2
#define  PORTE1   1
#define  PORTE0   0
#define  PE7      7
#define  PE6      6
#define  PE5      5
#define  PE4      4
#define  PE3      3
#define  PE2      2
#define  PE1      1
#define  PE0      0
#define  DDE7     7
#define  DDE6     6
#define  DDE5     5
#define  DDE4     4
#define  DDE3     3
#define  DDE2     2
#define  DDE1     1
#define  DDE0     0
#define  PINE7    7
#define  PINE6    6
#define  PINE5    5
#define  PINE4    4
#define  PINE3    3
#define  PINE2    2
#define  PINE1    1
#define  PINE0    0

/* Port F */
#define  PORTF7   7
#define  PORTF6   6
#define  PORTF5   5
#define  PORTF4   4
#define  PORTF3   3
#define  PORTF2   2
#define  PORTF1   1
#define  PORTF0   0
#define  PF7      7
#define  PF6      6
#define  PF5      5
#define  PF4      4
#define  PF3      3
#define  PF2      2
#define  PF1      1
#define  PF0      0
#define  DDF7     7
#define  DDF6     6
#define  DDF5     5
#define  DDF4     4
#define  DDF3     3
#define  DDF2     2
#define  DDF1     1
#define  DDF0     0
#define  PINF7    7
#define  PINF6    6
#define  PINF5    5
#define  PINF4    4
#define  PINF3    3
#define  PINF2    2
#define  PINF1    1
#define  PINF0    0

/* PCMSK0 */
#define  PCINT7   7
#define  PCINT6   6
#define  PCINT5   5
#define  PCINT4   4
#define  PCINT3   3
#define  PCINT2   2
#define  PCINT1   1
#define  PCINT0   0


/* USB io (all memory mapped)*/

#define UHCON	(*(volatile unsigned char *)0x9E)
#define  RESUME   2
#define  RESET    1
#define  SOFEN    0
#define UHINT	(*(volatile unsigned char *)0x9F)
#define  HWUPI    6
#define  HWUP     6
#define  HSOFI    5
#define  HSOF     5
#define  RXRSMI   4
#define  RSMEDI   3
#define  RSTI     2
#define  DDISCI   1
#define  DCONNI   0
#define UHIEN	(*(volatile unsigned char *)0xA0)
#define  HWUPE    6
#define  HSOFE    5
#define  RXRSME   4
#define  RSMEDE   3
#define  RSTE     2
#define  DDISCE   1
#define  DCONNE   0
#define UHADDR	(*(volatile unsigned char *)0xA1)
#define UHFNUM	(*(volatile unsigned int *)0xA2)
#define UHFNUML	(*(volatile unsigned char *)0xA2)
#define UHFNUMH	(*(volatile unsigned char *)0xA3)
#define UHFLEN	(*(volatile unsigned char *)0xA4)

#define UPINRQX	(*(volatile unsigned char *)0xA5)
#define UPINTX	(*(volatile unsigned char *)0xA6)
#define  FIFOCON  7
#define  NAKEDI   6
#define  RWAL     5
#define  PERRI    4
#define  TXSTPI   3
#define  TXOUTI   2
#define  RXSTALLI 1
#define  CRCERR   1
#define  RXINI    0
#define UPNUM	(*(volatile unsigned char *)0xA7)
#define UPRST	(*(volatile unsigned char *)0xA8)
#define  P6RST    6
#define  P5RST    5
#define  P4RST    4
#define  P3RST    3
#define  P2RST    2
#define  P1RST    1
#define  P0RST    0
#define UPCONX	(*(volatile unsigned char *)0xA9)
#define  PFREEZE  6
#define  INMODE   5
#define  RSTDT    3
#define  PEN      0
#define UPCFG0X	(*(volatile unsigned char *)0xAA)
#define  PTYPE1   7
#define  PTYPE0   6
#define  PTOKEN1  5
#define  PTOKEN0  4
#define  PEPNUM3  3
#define  PEPNUM2  2
#define  PEPNUM1  1
#define  PEPNUM0  0
#define UPCFG1X	(*(volatile unsigned char *)0xAB)
#define  PSIZE2   6
#define  PSIZE1   5
#define  PSIZE0   4
#define  PBK1     3
#define  PBK0     2
#define  ALLOC    1
#define UPSTAX	(*(volatile unsigned char *)0xAC)
#define  CFGOK    7
#define  OVERFI   6
#define  UNDERFI  5
#define  DTSEQ1   3
#define  DTSEQ0   2
#define  NBUSYBK1 1
#define  NBUSYBK0 0
#define UPCFG2X	(*(volatile unsigned char *)0xAD)
#define UPIENX	(*(volatile unsigned char *)0xAE)
#define  FLERRE   7
#define  NAKEDE   6
#define  PERRE    4
#define  TXSTPE   3
#define  TXOUTE   2
#define  RXSTALLE 1
#define  RXINE    0
#define UPDATX	(*(volatile unsigned char *)0xAF)

#define UHWCON	(*(volatile unsigned char *)0xD7)
#define  UIMOD    7
#define  UIDE     6
#define  UVCONE   4
#define  UVREGE   0
#define USBCON	(*(volatile unsigned char *)0xD8)
#define  USBE     7
#define  HOST     6
#define  FRZCLK   5
#define  OTGPADE  4
#define  IDTE     1
#define  VBUSTE   0
#define USBSTA	(*(volatile unsigned char *)0xD9)
#define  SPEED    3
#define  ID       1
#define  VBUS     0
#define USBINT	(*(volatile unsigned char *)0xDA)
#define  IDTI     1
#define  VBUSTI   0

#define OTGCON	(*(volatile unsigned char *)0xDD)
#define  HNPREQ   5
#define  SRPREQ   4
#define  SRPSEL   3
#define  VBUSHWC  2
#define  VBUSREQ  1
#define  VBUSRQC  0
#define OTGIEN	(*(volatile unsigned char *)0xDE)
#define  STOE     5
#define  HNPERRE  4
#define  ROLEEXE  3
#define  BCERRE   2
#define  VBERRE   1
#define  SRPE     0
#define OTGINT	(*(volatile unsigned char *)0xDF)
#define  STOI     5
#define  HNPERRI  4
#define  ROLEEXI  3
#define  BCERRI   2
#define  VBERRI   1
#define  SRPI     0

#define UDCON	(*(volatile unsigned char *)0xE0)
#define  LSM      2
#define  RMWKUP   1
#define  DETACH   0
#define UDINT	(*(volatile unsigned char *)0xE1)
#define  UPRSMI   6
#define  EORSMI   5
#define  WAKEUPI  4
#define  EORSTI   3
#define  SOFI     2
/* #define  MSOFI    1 */ /* this one is in register summary only */
#define  SUSPI    0
#define UDIEN	(*(volatile unsigned char *)0xE2)
#define  UPRSME   6
#define  EORSME   5
#define  WAKEUPE  4
#define  EORSTE   3
#define  SOFE     2
/* #define  MSOFE    1 */ /* this one is in register summary only */
#define  SUSPE    0
#define UDADDR	(*(volatile unsigned char *)0xE3)
#define  ADDEN    7
#define UDFNUM	(*(volatile unsigned int *)0xE4)
#define UDFNUML	(*(volatile unsigned char *)0xE4)
#define UDFNUMH	(*(volatile unsigned char *)0xE5)
#define UDMFN	(*(volatile unsigned char *)0xE6)
#define  FNCERR   4

#define UEINTX	(*(volatile unsigned char *)0xE8)
#define  FIFOCON  7
#define  NAKINI   6
#define  RWAL     5
#define  NAKOUTI  4
#define  RXSTPI   3
#define  RXOUTI   2
#define  STALLEDI 1
#define  TXINI    0
#define UENUM	(*(volatile unsigned char *)0xE9)
#define UERST	(*(volatile unsigned char *)0xEA)
#define  EPRST6   6
#define  EPRST5   5
#define  EPRST4   4
#define  EPRST3   3
#define  EPRST2   2
#define  EPRST1   1
#define  EPRST0   0
#define UECONX	(*(volatile unsigned char *)0xEB)
#define  STALLRQ  5
#define  STALLRQC 4
#define  RSTDT    3
#define  EPEN     0
#define UECFG0X	(*(volatile unsigned char *)0xEC)
#define  EPTYPE1  7
#define  EPTYPE0  6
#define  EPDIR    0
#define UECFG1X	(*(volatile unsigned char *)0xED)
#define  EPSIZE2  6
#define  EPSIZE1  5
#define  EPSIZE0  4
#define  EPBK1    3
#define  EPBK0    2
#define  ALLOC    1
#define UESTA0X	(*(volatile unsigned char *)0xEE)
#define  CFGOK    7
#define  OVERFI   6
#define  UNDERFI  5
#define  DTSEQ1   3
#define  DTSEQ0   2
#define  NBUSYBK1 1
#define  NBUSYBK0 0
#define UESTA1X	(*(volatile unsigned char *)0xEF)
#define  CTRLDIR  2
#define  CURRBK1  1
#define  CURRBK0  0
#define UEIENX	(*(volatile unsigned char *)0xF0)
#define  FLERRE   7
#define  NAKINE   6
#define  NAKOUTE  4
#define  RXSTPE   3
#define  RXOUTE   2
#define  STALLEDE 1
#define  TXINE    0
#define UEDATX	(*(volatile unsigned char *)0xF1)
#define UEBCX	(*(volatile unsigned int *)0xF2)
#define UEBCLX	(*(volatile unsigned char *)0xF2)
#define UEBCHX	(*(volatile unsigned char *)0xF3)
#define UEINT	(*(volatile unsigned char *)0xF4)
#define  EPINT6   6
#define  EPINT5   5
#define  EPINT4   4
#define  EPINT3   3
#define  EPINT2   2
#define  EPINT1   1
#define  EPINT0   0

#define UPERRX	(*(volatile unsigned char *)0xF5)
#define  COUNTER1 6
#define  COUNTER0 5
#define  CRC16    4
#define  TIMEOUT  3
#define  PID      2
#define  DATAPID  1
#define  DATATGL  0
#define UPBCX	(*(volatile unsigned int *)0xF6)
#define UPBCLX	(*(volatile unsigned char *)0xF6)
#define UPBCHX	(*(volatile unsigned char *)0xF7)
#define UPINT	(*(volatile unsigned char *)0xF8)
#define  PINT6    6
#define  PINT5    5
#define  PINT4    4
#define  PINT3    3
#define  PINT2    2
#define  PINT1    1
#define  PINT0    0

#define OTGTCON	(*(volatile unsigned char *)0xF9)
#define  PAGE1    6
#define  PAGE0    5
#define  VALUE1   1
#define  VALUE0   0


/* Lock and Fuse Bits with LPM/SPM instructions */

/* lock bits */
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
#define  OCDEN    7
#define  JTAGEN   6
#define  SPIEN    5
#define  WDTON    4
#define  EESAVE   3
#define  BOOTSZ1  2
#define  BOOTSZ0  1
#define  BOOTRST  0

/* extended fuses */
#define  HWBE      3
#define  BODLEVEL2 2
#define  BODLEVEL1 1
#define  BODLEVEL0 0


/* Interrupt Vector Numbers */

#define iv_RESET        1
#define iv_INT0         2
#define iv_EXT_INT0     2
#define iv_INT1         3
#define iv_EXT_INT1     3
#define iv_INT2         4
#define iv_EXT_INT2     4
#define iv_INT3         5
#define iv_EXT_INT3     5
#define iv_INT4         6
#define iv_EXT_INT4     6
#define iv_INT5         7
#define iv_EXT_INT5     7
#define iv_INT6         8
#define iv_EXT_INT6     8
#define iv_INT7         9
#define iv_EXT_INT7     9
#define iv_PCINT0       10
#define iv_USB_GENERAL  11
#define iv_USB_GEN      11
#define iv_USB_END_PIPE 12
#define iv_USB_EP       12
#define iv_WDT          13
#define iv_TIMER2_COMPA 14
#define iv_TIMER2_COMPB 15
#define iv_TIMER2_OVF   16
#define iv_TIM2_COMPA   14
#define iv_TIM2_COMPB   15
#define iv_TIM2_OVF     16
#define iv_TIMER1_CAPT  17
#define iv_TIMER1_COMPA 18
#define iv_TIMER1_COMPB 19
#define iv_TIMER1_COMPC 20
#define iv_TIMER1_OVF   21
#define iv_TIM1_CAPT    17
#define iv_TIM1_COMPA   18
#define iv_TIM1_COMPB   19
#define iv_TIM1_COMPC   20
#define iv_TIM1_OVF     21
#define iv_TIMER0_COMPA 22
#define iv_TIMER0_COMPB 23
#define iv_TIMER0_OVF   24
#define iv_TIM0_COMPA   22
#define iv_TIM0_COMPB   23
#define iv_TIM0_OVF     24
#define iv_SPI_STC      25
#define iv_USART0_RX    26
#define iv_USART0_RXC   26
#define iv_USART0_DRE   27
#define iv_USART0_UDRE  27
#define iv_USART0_TX    28
#define iv_USART0_TXC   28
#define iv_USART1_RX    26
#define iv_USART1_RXC   26
#define iv_USART1_DRE   27
#define iv_USART1_UDRE  27
#define iv_USART1_TX    28
#define iv_USART1_TXC   28
#define iv_ANA_COMP     29
#define iv_ANALOG_COMP  29
#define iv_ADC          30
#define iv_EE_RDY       31
#define iv_EE_READY     31
#define iv_TIMER3_CAPT  32
#define iv_TIMER3_COMPA 33
#define iv_TIMER3_COMPB 34
#define iv_TIMER3_COMPC 35
#define iv_TIMER3_OVF   36
#define iv_TIM3_CAPT    32
#define iv_TIM3_COMPA   33
#define iv_TIM3_COMPB   34
#define iv_TIM3_COMPC   35
#define iv_TIM3_OVF     36
#define iv_TWI          37
#define iv_TWSI         37
#define iv_SPM_RDY      38
#define iv_SPM_READY    38

/*ja*/

#endif
