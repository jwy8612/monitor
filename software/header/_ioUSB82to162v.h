#ifndef __ioUSB82to162v_h
#define __ioUSB82to162v_h

/* AT90USB82..162 header file for
 * ImageCraft ICCAVR compiler
 */

/* 2007/03/08 created as ioUSB162v.h
   2007/09/20 commented out CKSEL fuses temporarily
              until collision with iors is solved
   2008/04/21 added USART bits for SPI mode
 */

/* USART0 and USART defines included to ease port of existing code */

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

/* USART1 - as by datasheet */
#define UBRR1H	(*(volatile unsigned char *)0xCD)
#define UBRR1L	(*(volatile unsigned char *)0xCC)
#define UBRR1	(*(volatile unsigned int *)0xCC)
#define UCSR1D	(*(volatile unsigned char *)0xCB)
#define  CTSEN    1
#define  RTSEN    0
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
#define  UDORD0   2
#define  UCPHA0   1
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
#define UCSR0D	(*(volatile unsigned char *)0xCB)
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
#define UCSRD	(*(volatile unsigned char *)0xCB)
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
#define  WDIF     7
#define  WDIE     6
#define  WDP3     5
#define  WDCE     4
#define  WDE      3
#define  WDP2     2
#define  WDP1     1
#define  WDP0     0
#define WDTCKD	(*(volatile unsigned char *)0x62)
#define  WDEWIF   3
#define  WDEWIE   2
#define  WCLKD1   1
#define  WCLKD0   0

/* REGCR */
#define REGCR	(*(volatile unsigned char *)0x63)
#define  REGDIS   0

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

/* Oscillator Calibration Register */
#define OSCCAL	(*(volatile unsigned char *)0x66)

/* clock prescaler control register */
#define CLKPR	(*(volatile unsigned char *)0x61)
#define  CLKPCE   7
#define  CLKPS3   3
#define  CLKPS2   2
#define  CLKPS1   1
#define  CLKPS0   0

/* clock control registers */
#define CKSTA	(*(volatile unsigned char *)0xD2)
#define  RCON     1
#define  EXTON    0
#define CKSEL1	(*(volatile unsigned char *)0xD1)
#define  RCCKSEL3 7
#define  RCCKSEL2 6
#define  RCCKSEL1 5
#define  RCCKSEL0 4
#define  EXCKSEL3 3
#define  EXCKSEL2 2
#define  EXCKSEL1 1
#define  EXCKSEL0 0
#define CKSEL0	(*(volatile unsigned char *)0xD0)
#define  RCSUT1   7
#define  RCSUT0   6
#define  EXSUT1   5
#define  EXSUT0   4
#define  RCE      3
#define  EXTE     2
#define  CLKS     0

/* PLL control register */
#define PLLCSR	(*(volatile unsigned char *)0x49)
#define  PLLP2    4
#define  PLLP1    3
#define  PLLP0    2
#define  PLLE     1
#define  PLOCK    0

/* PRR */
#define PRR0	(*(volatile unsigned char *)0x64)
#define  PRTIM0   5
#define  PRTIM1   3
#define  PRSPI    2
#define PRR1	(*(volatile unsigned char *)0x65)
#define  PRUSB    7
#define  PRUSART1 0

/* MCU */
#define MCUSR	(*(volatile unsigned char *)0x54)
#define  USBRF    5
#define  WDRF     3
#define  BORF     2
#define  EXTRF    1
#define  PORF     0
#define MCUCR	(*(volatile unsigned char *)0x55)
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
#define  PCIF1    1
#define  PCIF0    0
#define PCICR	(*(volatile unsigned char *)0x68)
#define  PCIE1    1
#define  PCIE0    0
#define PCMSK1	(*(volatile unsigned char *)0x6C)
#define PCMSK0	(*(volatile unsigned char *)0x6B)

/* GPIO */
#define GPIOR0	(*(volatile unsigned char *)0x3E)
#define GPIOR1	(*(volatile unsigned char *)0x4A)
#define GPIOR2	(*(volatile unsigned char *)0x4B)

/* Stack Pointer */
#define SP  	(*(volatile unsigned int *)0x5D)
#define SPL 	(*(volatile unsigned char *)0x5D)
#define SPH 	(*(volatile unsigned char *)0x5E)

/* Status REGister */
#define SREG	(*(volatile unsigned char *)0x5F)


/* io bits */

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
#define  PORTC2   2
#define  PORTC1   1
#define  PORTC0   0
#define  PC7      7
#define  PC6      6
#define  PC5      5
#define  PC4      4
#define  PC2      2
#define  PC1      1
#define  PC0      0
#define  DDC7     7
#define  DDC6     6
#define  DDC5     5
#define  DDC4     4
#define  DDC2     2
#define  DDC1     1
#define  DDC0     0
#define  PINC7    7
#define  PINC6    6
#define  PINC5    5
#define  PINC4    4
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

/* PCMSK */
#define  PCINT12  4
#define  PCINT11  3
#define  PCINT10  2
#define  PCINT9   1
#define  PCINT8   0

#define  PCINT7   7
#define  PCINT6   6
#define  PCINT5   5
#define  PCINT4   4
#define  PCINT3   3
#define  PCINT2   2
#define  PCINT1   1
#define  PCINT0   0


/* USB io (all memory mapped)*/

#define USBCON	(*(volatile unsigned char *)0xD8)
#define  USBE     7
#define  FRZCLK   5

#define UDPADD	(*(volatile unsigned int *)0xDB)
#define UDPADDL	(*(volatile unsigned char *)0xDB)
#define UDPADDH	(*(volatile unsigned char *)0xDC)
#define  DPACC    7

#define UDCON	(*(volatile unsigned char *)0xE0)
#define  RSTCPU   2
#define  RMWKUP   1
#define  DETACH   0

#define UDINT	(*(volatile unsigned char *)0xE1)
#define  UPRSMI   6
#define  EORSMI   5
#define  WAKEUPI  4
#define  EORSTI   3
#define  SOFI     2
#define  SUSPI    0
#define UDIEN	(*(volatile unsigned char *)0xE2)
#define  UPRSME   6
#define  EORSME   5
#define  WAKEUPE  4
#define  EORSTE   3
#define  SOFE     2
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
#define UEBCX	(*(volatile unsigned char *)0xF2)
#define UEBCLX	(*(volatile unsigned char *)0xF2)
#define UEINT	(*(volatile unsigned char *)0xF4)
#define  EPINT4   4
#define  EPINT3   3
#define  EPINT2   2
#define  EPINT1   1
#define  EPINT0   0

#define PS2CON	(*(volatile unsigned char *)0xFA)
#define  PS2EN    0

#define UPOE	(*(volatile unsigned char *)0xFB)
#define  UPWE1    7
#define  UPWE0    6
#define  UPDRV1   5
#define  UPDRV0   4
#define  SCKI     3
#define  DATAI    2
#define  DPI      1
#define  DMI      0


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
/* #define  CKSEL3   3 */
/* #define  CKSEL2   2 */
/* #define  CKSEL1   1 */
/* #define  CKSEL0   0 */

/* fuses high bits */
#define  DWEN     7
#define  RSTDSBL  6
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
#define iv_PCINT1       11
#define iv_USB_GENERAL  12
#define iv_USB_GEN      12
#define iv_USB_ENDPOINT 13
#define iv_USB_EP       13
#define iv_WDT          14
#define iv_TIMER1_CAPT  15
#define iv_TIMER1_COMPA 16
#define iv_TIMER1_COMPB 17
#define iv_TIMER1_COMPC 18
#define iv_TIMER1_OVF   19
#define iv_TIM1_CAPT    15
#define iv_TIM1_COMPA   16
#define iv_TIM1_COMPB   17
#define iv_TIM1_COMPC   18
#define iv_TIM1_OVF     19
#define iv_TIMER0_COMPA 20
#define iv_TIMER0_COMPB 21
#define iv_TIMER0_OVF   22
#define iv_TIM0_COMPA   20
#define iv_TIM0_COMPB   21
#define iv_TIM0_OVF     22
#define iv_SPI_STC      23
/* USART0 - to ease port of existing code */
#define iv_USART0_RX    24
#define iv_USART0_RXC   24
#define iv_USART0_DRE   25
#define iv_USART0_UDRE  25
#define iv_USART0_TX    26
#define iv_USART0_TXC   26
#define iv_USART1_RX    24
#define iv_USART1_RXC   24
#define iv_USART1_DRE   25
#define iv_USART1_UDRE  25
#define iv_USART1_TX    26
#define iv_USART1_TXC   26
#define iv_ANA_COMP     27
#define iv_ANALOG_COMP  27
#define iv_EE_RDY       28
#define iv_EE_READY     28
#define iv_SPM_RDY      29
#define iv_SPM_READY    29

/*ja*/

#endif
