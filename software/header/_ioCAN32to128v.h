#ifndef ___ioCAN32to128v_h
#define ___ioCAN32to128v_h

/* AT90CAN32..128 header file for
 * ImageCraft ICCAVR compiler
 */

/* creation 26 MAr 2004 - JT
   changes because of changed datasheet 14 Oct 2005 - ja
 */

/* Port A */
#define PINA	(*(volatile unsigned char *)0x20)
#define  PINA7    7
#define  PINA6    6
#define  PINA5    5
#define  PINA4    4
#define  PINA3    3
#define  PINA2    2
#define  PINA1    1
#define  PINA0    0
#define DDRA	(*(volatile unsigned char *)0x21)
#define  DDA7     7
#define  DDA6     6
#define  DDA5     5
#define  DDA4     4
#define  DDA3     3
#define  DDA2     2
#define  DDA1     1
#define  DDA0     0
#define PORTA	(*(volatile unsigned char *)0x22)
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
#define  PINE7    7
#define  PINE6    6
#define  PINE5    5
#define  PINE4    4
#define  PINE3    3
#define  PINE2    2
#define  PINE1    1
#define  PINE0    0
#define DDRE	(*(volatile unsigned char *)0x2d)
#define  DDE7     7
#define  DDE6     6
#define  DDE5     5
#define  DDE4     4
#define  DDE3     3
#define  DDE2     2
#define  DDE1     1
#define  DDE0     0
#define PORTE	(*(volatile unsigned char *)0x2e)
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

/* Port F */
#define PINF	(*(volatile unsigned char *)0x2f)
#define  PINF7    7
#define  PINF6    6
#define  PINF5    5
#define  PINF4    4
#define  PINF3    3
#define  PINF2    2
#define  PINF1    1
#define  PINF0    0
#define DDRF	(*(volatile unsigned char *)0x30)
#define  DDF7     7
#define  DDF6     6
#define  DDF5     5
#define  DDF4     4
#define  DDF3     3
#define  DDF2     2
#define  DDF1     1
#define  DDF0     0
#define PORTF	(*(volatile unsigned char *)0x31)
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

/* Port G */
#define PING	(*(volatile unsigned char *)0x32)
#define  PING4    4
#define  PING3    3
#define  PING2    2
#define  PING1    1
#define  PING0    0
#define DDRG	(*(volatile unsigned char *)0x33)
#define  DDG4     4
#define  DDG3     3
#define  DDG2     2
#define  DDG1     1
#define  DDG0     0
#define PORTG	(*(volatile unsigned char *)0x34)
#define  PORTG4   4
#define  PORTG3   3
#define  PORTG2   2
#define  PORTG1   1
#define  PORTG0   0
#define  PG4      4
#define  PG3      3
#define  PG2      2
#define  PG1      1
#define  PG0      0

/* Timer/Counter Interrupts */
#define TIFR0	(*(volatile unsigned char *)0x35)
#define  OCF0A    1
#define  OCF0     1
#define  TOV0     0
#define TIFR1	(*(volatile unsigned char *)0x36)
#define  ICF1     5
#define  OCF1C    3
#define  OCF1B    2
#define  OCF1A    1
#define  TOV1     0
#define TIFR2	(*(volatile unsigned char *)0x37)
#define  OCF2A    1
#define  OCF2     1
#define  TOV2     0
#define TIFR3	(*(volatile unsigned char *)0x38)
#define  ICF3     5
#define  OCF3C    3
#define  OCF3B    2
#define  OCF3A    1
#define  TOV3     0

/* External Interrupt Flags and Masks */
#define EIFR	(*(volatile unsigned char *)0x3c)
#define  INTF7    7
#define  INTF6    6
#define  INTF5    5
#define  INTF4    4
#define  INTF3    3
#define  INTF2    2
#define  INTF1    1
#define  INTF0    0
#define EIMSK	(*(volatile unsigned char *)0x3d)
#define  INT7     7
#define  INT6     6
#define  INT5     5
#define  INT4     4
#define  INT3     3
#define  INT2     2
#define  INT1     1
#define  INT0     0

/* GPIO Registers */
#define GPIOR0	(*(volatile unsigned char *)0x3e)
#define GPIOR1	(*(volatile unsigned char *)0x4a)
#define GPIOR2	(*(volatile unsigned char *)0x4b)

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
#define  PSR2     1
#define  PSR310   0
/* to enable multi-part lib writing */
#define  PSR3     PSR310
#define  PSR1     PSR310
#define  PSR0     PSR310

/* Timer/Counter 0 */
#define TCCR0A	(*(volatile unsigned char *)0x44)
#define TCCR0	(*(volatile unsigned char *)0x44)
#define  FOC0     7
#define  FOC0A    7
#define  WGM00    6
#define  COM01    5
#define  COM00    4
#define  COM0A1   5
#define  COM0A0   4
#define  WGM01    3
#define  CS02     2
#define  CS01     1
#define  CS00     0
#define TCNT0	(*(volatile unsigned char *)0x46)
#define OCR0	(*(volatile unsigned char *)0x47)

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
#define  ACD      7
#define  ACBG     6
#define  ACO      5
#define  ACI      4
#define  ACIE     3
#define  ACIC     2
#define  ACIS1    1
#define  ACIS0    0

/* OCDR */
#define OCDR	(*(volatile unsigned char *)0x51)
#define  IDRD     7
#define  OCD7     7
#define  OCD6     6
#define  OCD5     5
#define  OCD4     4
#define  OCD3     3
#define  OCD2     2
#define  OCD1     1
#define  OCD0     0


/* MCU general */
#define SMCR	(*(volatile unsigned char *)0x53)
#define  SM2      3
#define  SM1      2
#define  SM0      1
#define  SE       0

#define MCUSR	(*(volatile unsigned char *)0x54)
#define	 JTRF     4
#define	 WDRF     3
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
#define  RWWSRE   4
#define  BLBSET   3
#define  PGWRT    2
#define  PGERS    1
#define  SPMEN    0

/* ProgRAm Memory msb address Z-Pointer */
#define RAMPZ	(*(volatile unsigned char *)0x5B)

/* Stack Pointer */
#define SP	(*(volatile unsigned int *)0x5D)
#define SPL	(*(volatile unsigned char *)0x5D)
#define SPH	(*(volatile unsigned char *)0x5E)

/* Status REGister */
#define SREG	(*(volatile unsigned char *)0x5F)

/* Watchdog Timer Control Register */
#define WDTCR	(*(volatile unsigned char *)0x60)
#define  WDTOE    4
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

/* External Interrupt configuration */
#define EICRA	(*(volatile unsigned char *)0x69)
#define  ISC31    7
#define  ISC30    6
#define  ISC21    5
#define  ISC20    4
#define  ISC11    3
#define  ISC10    2
#define  ISC01    1
#define  ISC00    0
#define EICRB	(*(volatile unsigned char *)0x6A)
#define  ISC71    7
#define  ISC70    6
#define  ISC61    5
#define  ISC60    4
#define  ISC51    3
#define  ISC50    2
#define  ISC41    1
#define  ISC40    0

/* Timer/Counter Interrupts */
#define TIMSK0	(*(volatile unsigned char *)0x6e)
#define  OCIE0A   1
#define  OCIE0    1
#define  TOIE0    0
#define TIMSK1	(*(volatile unsigned char *)0x6f)
#define  TICIE1   5
#define  ICIE1    5
#define  OCIE1C   3
#define  OCIE1B   2
#define  OCIE1A   1
#define  TOIE1    0
#define TIMSK2	(*(volatile unsigned char *)0x70)
#define  OCIE2A   1
#define  OCIE2    1
#define  TOIE2    0
#define TIMSK3	(*(volatile unsigned char *)0x71)
#define  TICIE3   5
#define  ICIE3    5
#define  OCIE3C   3
#define  OCIE3B   2
#define  OCIE3A   1
#define  TOIE3    0

/* eXternal Memory Control Register */
#define XMCRA	(*(volatile unsigned char *)0x74)
#define  SRE      7
#define  SRL2     6
#define  SRL1     5
#define  SRL0     4
#define  SRW11    3
#define  SRW10    2
#define  SRW01    1
#define  SRW00    0
#define XMCRB	(*(volatile unsigned char *)0x75)
#define  XMBK     7
#define  XMM2     2
#define  XMM1     1
#define  XMM0     0

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
#define  ACME     6
#define  ADTS2    2
#define  ADTS1    1
#define  ADTS0    0
#define ADMUX	(*(volatile unsigned char *)0x7c)
#define  REFS1    7
#define  REFS0    6
#define  ADLAR    5
#define  MUX4     4
#define  MUX3     3
#define  MUX2     2
#define  MUX1     1
#define  MUX0     0
#define DIDR1	(*(volatile unsigned char *)0x7f)
#define  AIN1D    1
#define  AIN0D    0
#define DIDR0	(*(volatile unsigned char *)0x7e)
#define  ADC7D    7
#define  ADC6D    6
#define  ADC5D    5
#define  ADC4D    4
#define  ADC3D    3
#define  ADC2D    2
#define  ADC1D    1
#define  ADC0D    0

/* Timer/Counter 1 */
#define TCCR1A	(*(volatile unsigned char *)0x80)
#define  COM1A1   7
#define  COM1A0   6
#define  COM1B1   5
#define  COM1B0   4
#define  COM1C1   3
#define  COM1C0   2
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
#define  FOC1C    5
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
#define OCR1C	(*(volatile unsigned int *)0x8c)
#define OCR1CL	(*(volatile unsigned char *)0x8c)
#define OCR1CH	(*(volatile unsigned char *)0x8d)

/* Timer/Counter 3 */
#define TCCR3A	(*(volatile unsigned char *)0x90)
#define  COM3A1   7
#define  COM3A0   6
#define  COM3B1   5
#define  COM3B0   4
#define  COM3C1   3
#define  COM3C0   2
#define  WGM31    1
#define  WGM30    0
#define TCCR3B	(*(volatile unsigned char *)0x91)
#define  ICNC3    7
#define  ICES3    6
#define  WGM33    4
#define  WGM32    3
#define  CS32     2
#define  CS31     1
#define  CS30     0
#define TCCR3C	(*(volatile unsigned char *)0x92)
#define  FOC3A    7
#define  FOC3B    6
#define  FOC3C    5
#define TCNT3	(*(volatile unsigned int *)0x94)
#define TCNT3L	(*(volatile unsigned char *)0x94)
#define TCNT3H	(*(volatile unsigned char *)0x95)
#define ICR3	(*(volatile unsigned int *)0x96)
#define ICR3L	(*(volatile unsigned char *)0x96)
#define ICR3H	(*(volatile unsigned char *)0x97)
#define OCR3A	(*(volatile unsigned int *)0x98)
#define OCR3AL	(*(volatile unsigned char *)0x98)
#define OCR3AH	(*(volatile unsigned char *)0x99)
#define OCR3B	(*(volatile unsigned int *)0x9a)
#define OCR3BL	(*(volatile unsigned char *)0x9a)
#define OCR3BH	(*(volatile unsigned char *)0x9b)
#define OCR3C	(*(volatile unsigned int *)0x9c)
#define OCR3CL	(*(volatile unsigned char *)0x9c)
#define OCR3CH	(*(volatile unsigned char *)0x9d)

/* Timer/Counter 2 */
#define TCCR2A	(*(volatile unsigned char *)0xb0)
#define TCCR2	(*(volatile unsigned char *)0xb0)
#define  FOC2     7
#define  FOC2A    7
#define  WGM20    6
#define  COM21    5
#define  COM20    4
#define  COM2A1   5
#define  COM2A0   4
#define  WGM21    3
#define  CS22     2
#define  CS21     1
#define  CS20     0
#define TCNT2	(*(volatile unsigned char *)0xb2)
#define OCR2A	(*(volatile unsigned char *)0xb3)
#define OCR2	(*(volatile unsigned char *)0xb3)
#define ASSR	(*(volatile unsigned char *)0xb6)
#define  EXCLK    4
#define  AS2      3
#define  TCN2UB   2
#define  OCR2UB   1
#define  TCR2UB   0

/* Two-Wire serial Interface */
#define TWBR	(*(volatile unsigned char *)0xb8)
#define TWSR	(*(volatile unsigned char *)0xb9)
#define  TWS7     7
#define  TWS6     6
#define  TWS5     5
#define  TWS4     4
#define  TWS3     3
#define  TWS      3
#define  TWPS1    1
#define  TWPS0    0
#define TWAR	(*(volatile unsigned char *)0xba)
#define  TWA6     7
#define  TWA5     6
#define  TWA4     5
#define  TWA3     4
#define  TWA2     3
#define  TWA1     2
#define  TWA0     1
#define  TWA      1
#define  TWGCE    0
#define TWDR	(*(volatile unsigned char *)0xbb)
#define TWCR	(*(volatile unsigned char *)0xbc)
#define  TWINT    7
#define  TWEA     6
#define  TWSTA    5
#define  TWSTO    4
#define  TWWC     3
#define  TWEN     2
#define  TWIE     0

/* USART-0 (default USART) */
#define UCSR0A	(*(volatile unsigned char *)0xc0)
#define UCSRA	(*(volatile unsigned char *)0xc0)
#define  RXC0     7
#define  TXC0     6
#define  UDRE0    5
#define  FE0      4
#define  DOR0     3
#define  UPE0     2
#define  U2X0     1
#define  MPCM0    0
#define  RXC      7
#define  TXC      6
#define  UDRE     5
#define  FE       4
#define  DOR      3
#define  OVR      3    /*This definition differs from the databook*/
#define  UPE      2
#define  PE       2
#define  U2X      1
#define  MPCM     0
#define UCSR0B	(*(volatile unsigned char *)0xc1)
#define UCSRB	(*(volatile unsigned char *)0xc1)
#define  RXCIE0   7
#define  TXCIE0   6
#define  UDRIE0   5
#define  RXEN0    4
#define  TXEN0    3
#define  UCSZ02   2
#define  RXB80    1
#define  TXB80    0
#define  RXCIE    7
#define  TXCIE    6
#define  UDRIE    5
#define  RXEN     4
#define  TXEN     3
#define  UCSZ2    2
#define  RXB8     1
#define  TXB8     0
#define UCSR0C	(*(volatile unsigned char *)0xc2)
#define UCSRC	(*(volatile unsigned char *)0xc2)
#define  UMSEL0   6
#define  UPM01    5
#define  UPM00    4
#define  USBS0    3
#define  UCSZ01   2
#define  UCSZ00   1
#define  UCPOL0   0
#define  UMSEL    6
#define  UPM1     5
#define  UPM0     4
#define  USBS     3
#define  UCSZ1    2
#define  UCSZ0    1
#define  UCPOL    0
#define UBRR0 	(*(volatile unsigned int *)0xc4)
#define UBRR	(*(volatile unsigned int *)0xc4)
#define UBRR0L	(*(volatile unsigned char *)0xc4)
#define UBRRL	(*(volatile unsigned char *)0xc4)
#define UBRR0H	(*(volatile unsigned char *)0xc5)
#define UBRRH	(*(volatile unsigned char *)0xc5)
#define UDR0	(*(volatile unsigned char *)0xc6)
#define UDR 	(*(volatile unsigned char *)0xc6)

/* USART-1 */
#define UCSR1A	(*(volatile unsigned char *)0xc8)
#define  RXC1     7
#define  TXC1     6
#define  UDRE1    5
#define  FE1      4
#define  DOR1     3
#define  UPE1     2
#define  U2X1     1
#define  MPCM1    0
#define UCSR1B	(*(volatile unsigned char *)0xc9)
#define  RXCIE1   7
#define  TXCIE1   6
#define  UDRIE1   5
#define  RXEN1    4
#define  TXEN1    3
#define  UCSZ12   2
#define  RXB81    1
#define  TXB81    0
#define UCSR1C	(*(volatile unsigned char *)0xca)
#define  UMSEL1   6
#define  UPM11    5
#define  UPM10    4
#define  USBS1    3
#define  UCSZ11   2
#define  UCSZ10   1
#define  UCPOL1   0
#define UBRR1 	(*(volatile unsigned int *)0xcc)
#define UBRR1L	(*(volatile unsigned char *)0xcc)
#define UBRR1H	(*(volatile unsigned char *)0xcd)
#define UDR1	(*(volatile unsigned char *)0xce)

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
#define  CGP33    3
#define  CGP32    2
#define  CGP31    1
#define  CGP30    0
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
#define  BODLEVEL2 3
#define  BODLEVEL1 2
#define  BODLEVEL0 1
#define  BODLEVEL  1
#define  TA0SEL    0

/* fuses high bits */
#define  OCDEN    7
#define  JTAGEN   6
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
#define iv_TIM2_COMP    10
#define iv_TIMER2_COMP  10
#define iv_TIM2_OVF     11
#define iv_TIMER2_OVF   11
#define iv_TIM1_CAPT    12
#define iv_TIMER1_CAPT  12
#define iv_TIM1_COMPA   13
#define iv_TIMER1_COMPA 13
#define iv_TIM1_COMPB   14
#define iv_TIMER1_COMPB 14
#define iv_TIM1_COMPC   15
#define iv_TIMER1_COMPC 15
#define iv_TIM1_OVF     16
#define iv_TIMER1_OVF   16
#define iv_TIM0_COMP    17
#define iv_TIMER0_COMP  17
#define iv_TIM0_OVF     18
#define iv_TIMER0_OVF   18
#define iv_CAN_IT       19
#define iv_CANIT        19
#define iv_CAN          19
#define iv_CAN_TRANSFER 19
#define iv_CTIM_OVF     20
#define iv_OVRIT        20
#define iv_CAN_TIM_OVF  20
#define iv_CAN_TIM_OVR  20
#define iv_SPI_STC      21
#define iv_USART0_RX    22
#define iv_USART0_RXC   22
#define iv_USART0_DRE   23
#define iv_USART0_UDRE  23
#define iv_USART0_TX    24
#define iv_USART0_TXC   24
#define iv_ANA_COMP     25
#define iv_ANALOG_COMP  25
#define iv_ADC          26
#define iv_EE_RDY       27
#define iv_EE_READY     27
#define iv_TIM3_CAPT    28
#define iv_TIMER3_CAPT  28
#define iv_TIM3_COMPA   29
#define iv_TIMER3_COMPA 29
#define iv_TIM3_COMPB   30
#define iv_TIMER3_COMPB 30
#define iv_TIM3_COMPC   31
#define iv_TIMER3_COMPC 31
#define iv_TIM3_OVF     32
#define iv_TIMER3_OVF   32
#define iv_USART1_RX    33
#define iv_USART1_RXC   33
#define iv_USART1_DRE   34
#define iv_USART1_UDRE  34
#define iv_USART1_TX    35
#define iv_USART1_TXC   35
#define iv_TWI          36
#define iv_TWSI         36
#define iv_SPM_RDY      37
#define iv_SPM_READY    37

/* */

#endif

