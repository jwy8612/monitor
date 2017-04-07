#ifndef __iot2313v_h
#define __iot2313v_h

/* ATtiny2313 register and bit name header file
 * for ImageCraft ICCAVR compiler
 */

/* last changed 2005-10-15
 */

/* DIDR */
#define DIDR	(*(volatile unsigned char *)0x21)

/* Analog Comp */
#define ACSR	(*(volatile unsigned char *)0x28)

/* USART */
#define UBRRL	(*(volatile unsigned char *)0x29)
#define UBRR	(*(volatile unsigned char *)0x29)
#define UBRRH	(*(volatile unsigned char *)0x22)
#define UCSRC	(*(volatile unsigned char *)0x23)
#define UCSRB	(*(volatile unsigned char *)0x2A)
#define UCSRA	(*(volatile unsigned char *)0x2B)
#define UDR	(*(volatile unsigned char *)0x2C)

/* Universal Serial Interface */
#define USICR	(*(volatile unsigned char *)0x2D)
#define USISR	(*(volatile unsigned char *)0x2E)
#define USIDR	(*(volatile unsigned char *)0x2F)

/* GPIORs */
#define GPIOR0	(*(volatile unsigned char *)0x33)
#define GPIOR1	(*(volatile unsigned char *)0x34)
#define GPIOR2	(*(volatile unsigned char *)0x35)

/* Port D */
#define PIND	(*(volatile unsigned char *)0x30)
#define DDRD	(*(volatile unsigned char *)0x31)
#define PORTD	(*(volatile unsigned char *)0x32)

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
#define EEARL	(*(volatile unsigned char *)0x3E)
#define EEAR	(*(volatile unsigned char *)0x3E)

/* Watchdog Timer Control Register */
#define WDTCSR	(*(volatile unsigned char *)0x41)
#define WDTCR	(*(volatile unsigned char *)0x41)

/* CLK Registers */
#define CLKPR	(*(volatile unsigned char *)0x46)
#define OSCCAL	(*(volatile unsigned char *)0x51)

/* SFIOR */
#define SFIOR	(*(volatile unsigned char *)0x43)

/* Timer/Counter 1 */
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
#define TCCR1B	(*(volatile unsigned char *)0x4E)
#define TCCR1A	(*(volatile unsigned char *)0x4F)

/* Timer/Counter 0 */
#define TCNT0	(*(volatile unsigned char *)0x52)
#define TCCR0B	(*(volatile unsigned char *)0x53)
#define TCCR0A	(*(volatile unsigned char *)0x50)
#define OCR0A	(*(volatile unsigned char *)0x56)
#define OCR0B	(*(volatile unsigned char *)0x5C)

/* MCU */
#define MCUSR	(*(volatile unsigned char *)0x54)
#define MCUCR	(*(volatile unsigned char *)0x55)

/* SPMCSR */
#define SPMCSR	(*(volatile unsigned char *)0x57)

/* Timer/Counter Interrupts */
#define TIFR	(*(volatile unsigned char *)0x58)
#define TIMSK	(*(volatile unsigned char *)0x59)

/* General Interrupts */
#define PCMSK	(*(volatile unsigned char *)0x40)
#define EIFR	(*(volatile unsigned char *)0x5A)
#define GIMSK	(*(volatile unsigned char *)0x5B)

/* Stack Pointer */
#define SP	(*(volatile unsigned char *)0x5D)
#define SPL	(*(volatile unsigned char *)0x5D)

/* Status REGister */
#define SREG	(*(volatile unsigned char *)0x5F)

/* General Interrupt registers */
#define    INT1     7
#define    INT0     6
#define    PCIE     5

#define    INTF1    6
#define    INTF0    6
#define    PCIF     5

/* Timer/Counter Interrupt registers */
#define    TOIE1    7
#define    OCIE1A   6
#define    OCIE1B   5
#define    ICIE1    3
#define    OCIE0B   2
#define    TOIE0    1
#define    OCIE0A   0

#define    TOV1     7
#define    OCF1A    6
#define    OCF1B    5
#define    ICF1     3
#define    OCF0B    2
#define    TOV0     1
#define    OCF0A    0

/* SPMCR */
#define  CTPB     4
#define  RFLB     3
#define  PGWRT    2
#define  PGERS    1
#define  SPMEN    0

/* MCU general Control Register */
#define    PUD      7
#define    SM1      6
#define    SE       5
#define    SM0      4
#define    ISC11    3
#define    ISC10    2
#define    ISC01    1
#define    ISC00    0

/* MCU general Status Register */
#define    WDRF     3
#define    BORF     2
#define    EXTRF    1
#define    PORF     0

/* Timer/Counter 0 Control Register */
#define    COM0A1   7
#define    COM0A0   6
#define    COM0B1   5
#define    COM0B0   4
#define    WGM01    1
#define    WGM00    0

#define    FOC0A    7
#define    FOC0B    6
#define    WGM02    3
#define    CS02     2
#define    CS01     1
#define    CS00     0

/* Timer/Counter 1 Control Registers */
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

/* CLKPR */
#define    CLKPCE   7
#define    CLKPS3   3
#define    CLKPS2   2
#define    CLKPS1   1
#define    CLKPS0   0

/* SFIOR */
#define    PSR10    0

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
#define    PORTA2   2
#define    PORTA1   1
#define    PORTA0   0
#define    PA2      2
#define    PA1      1
#define    PA0      0

#define    DDA2     2
#define    DDA1     1
#define    DDA0     0

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

/* Port D bits */
#define    PORTD6   6
#define    PORTD5   5
#define    PORTD4   4
#define    PORTD3   3
#define    PORTD2   2
#define    PORTD1   1
#define    PORTD0   0
#define    PD6      6
#define    PD5      5
#define    PD4      4
#define    PD3      3
#define    PD2      2
#define    PD1      1
#define    PD0      0

#define    DDD6     6
#define    DDD5     5
#define    DDD4     4
#define    DDD3     3
#define    DDD2     2
#define    DDD1     1
#define    DDD0     0

#define    PIND6    6
#define    PIND5    5
#define    PIND4    4
#define    PIND3    3
#define    PIND2    2
#define    PIND1    1
#define    PIND0    0

/* PCMSK */
#define    PCINT7    7
#define    PCINT6    6
#define    PCINT5    5
#define    PCINT4    4
#define    PCINT3    3
#define    PCINT2    2
#define    PCINT1    1
#define    PCINT0    0

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

/* USART */
#define  RXC      7
#define  TXC      6
#define  UDRE     5
#define  FE       4
#define  DOR      3
#define  OVR      3    /*This definition differs from the databook*/
#define  UPE      2
#define  PE       2    /*This definition differs from the databook*/
#define  U2X      1
#define  MPCM     0

#define  RXCIE    7
#define  TXCIE    6
#define  UDRIE    5
#define  RXEN     4
#define  TXEN     3
#define  UCSZ2    2
#define  RXB8     1
#define  TXB8     0

#define  UMSEL    6
#define  UPM1     5
#define  UPM0     4
#define  USBS     3
#define  UCSZ1    2
#define  UCSZ0    1
#define  UCPOL    0

/* Analog Comparator Control and Status Register */
#define    ACD      7
#define    ACBG     6
#define    ACO      5
#define    ACI      4
#define    ACIE     3
#define    ACIC     2
#define    ACIS1    1
#define    ACIS0    0

/* Digital Input Disable Register */
#define    AIN1D    1
#define    AIN0D    0


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
#define  DWEN     7
#define  EESAVE   6
#define  SPIEN    5
#define  WDTON    4
#define  BODLEVEL2 3
#define  BODLEVEL1 2
#define  BODLEVEL0 1
#define  RSTDISBL 0

/* fuses extended bits */
#define  SELFPRGEN 0


/* Interrupt Vector Numbers */

#define iv_RESET        1
#define iv_INT0         2
#define iv_EXT_INT0     2
#define iv_INT1         3
#define iv_EXT_INT1     3
#define iv_TIM1_CAPT    4
#define iv_TIMER1_CAPT  4
#define iv_TIM1_COMPA   5
#define iv_TIMER1_COMPA 5
#define iv_TIM1_OVF     6
#define iv_TIMER1_OVF   6
#define iv_TIM0_OVF     7
#define iv_TIMER0_OVF   7
#define iv_USART0_RXC   8
#define iv_USART0_DRE   9
#define iv_USART0_TXC   10
#define iv_ANA_COMP     11
#define iv_PCINT        12
#define iv_PCINT0       12
#define iv_TIMER1_COMPB 13
#define iv_TIMER0_COMPA 14
#define iv_TIMER0_COMPB 15
#define iv_USI_START    16
#define iv_USI_OVERFLOW 17
#define iv_USI_OVF      17
#define iv_EE_RDY       18
#define iv_EE_READY     18
#define iv_WDT_OVERFLOW 19
#define iv_WDT          19

/* */

#endif
