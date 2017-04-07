#ifndef __ioUSB320v_h
#define __ioUSB320v_h

/* AT43USB320A header file for
 * ImageCraft ICCAVR compiler
 */

/* AVR core is similar to 8515
 * USB h/w memory mapped at 0x1FA0..0x1FFF
 */

/* not strictly sorted by address
 */

/* last changed 2002/09/25
 */

/* AVR io */

/* UART */
#define UBRR	(*(volatile unsigned char *)0x29)
#define UCR 	(*(volatile unsigned char *)0x2A)
#define USR 	(*(volatile unsigned char *)0x2B)
#define UDR 	(*(volatile unsigned char *)0x2C)

/* SPI */
#define SPCR	(*(volatile unsigned char *)0x2D)
#define SPSR	(*(volatile unsigned char *)0x2E)
#define SPDR	(*(volatile unsigned char *)0x2F)

/* Port D */
#define PIND	(*(volatile unsigned char *)0x30)
#define DDRD	(*(volatile unsigned char *)0x31)
#define PORTD	(*(volatile unsigned char *)0x32)

/* Port C */
#define PINC	(*(volatile unsigned char *)0x33)
#define DDRC	(*(volatile unsigned char *)0x34)
#define PORTC	(*(volatile unsigned char *)0x35)

/* Port B */
#define PINB	(*(volatile unsigned char *)0x36)
#define DDRB	(*(volatile unsigned char *)0x37)
#define PORTB	(*(volatile unsigned char *)0x38)

/* Port A */
#define PINA	(*(volatile unsigned char *)0x39)
#define DDRA	(*(volatile unsigned char *)0x3A)
#define PORTA	(*(volatile unsigned char *)0x3B)

/* Watchdog Timer */
#define WDTCR	(*(volatile unsigned char *)0x41)

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
#define TCCR1B	(*(volatile unsigned char *)0x4E)
#define TCCR1A	(*(volatile unsigned char *)0x4F)

/* Timer/Counter 0 */
#define TCNT0	(*(volatile unsigned char *)0x52)
#define TCCR0	(*(volatile unsigned char *)0x53)

/* MCU general */
#define MCUCR	(*(volatile unsigned char *)0x55)

/* Timer/Counter Interrupts */
#define TIFR	(*(volatile unsigned char *)0x58)
#define TIMSK	(*(volatile unsigned char *)0x59)

/* General Interrupts */
#define GIFR	(*(volatile unsigned char *)0x5A)
#define GIMSK	(*(volatile unsigned char *)0x5B)

/* Stack Pointer */
#define SP  	(*(volatile unsigned int *)0x5D)
#define SPL 	(*(volatile unsigned char *)0x5D)
#define SPH 	(*(volatile unsigned char *)0x5E)

/* CPU Status */
#define SREG	(*(volatile unsigned char *)0x5F)


/* AVR io bits */

/* General Interrupts */
#define    INT1     7
#define    INT0     6

#define    INTF1    7
#define    INTF0    6

/* Timer/Counter Interrupts */
#define    TOIE1    7
#define    OCIE1A   6
#define    OCIE1B   5
#define    TICIE1   3
#define    TOIE0    1

#define    TOV1     7
#define    OCF1A    6
#define    OCF1B    5
#define    ICF1     3
#define    TOV0     1

/* MCU general controls */
#define    SRE      7
#define    SRW      6
#define    SE       5
#define    SM       4
#define    ISC11    3
#define    ISC10    2
#define    ISC01    1
#define    ISC00    0

/* Timer/Counter 0 */
#define    CS02     2
#define    CS01     1
#define    CS00     0

/* Timer/Counter 1 */
#define    COM1A1   7
#define    COM1A0   6
#define    COM1B1   5
#define    COM1B0   4
#define    PWM11    1
#define    PWM10    0

#define    ICNC1    7
#define    ICES1    6
#define    CTC1     3
#define    CS12     2
#define    CS11     1
#define    CS10     0

/* Watchdog Timer */
#define    WDTOE    4
#define    WDE      3
#define    WDP2     2
#define    WDP1     1
#define    WDP0     0

/* Port A */
#define    PORTA7   7
#define    PORTA6   6
#define    PORTA5  	5
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
#define    PORTB5  	5
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

/* Port C */
#define    PORTC7   7
#define    PORTC6   6
#define    PORTC5  	5
#define    PORTC4   4
#define    PORTC3   3
#define    PORTC2   2
#define    PORTC1   1
#define    PORTC0   0

#define    PC7      7
#define    PC6      6
#define    PC5      5
#define    PC4      4
#define    PC3      3
#define    PC2      2
#define    PC1      1
#define    PC0      0

#define    DDC7     7
#define    DDC6     6
#define    DDC5     5
#define    DDC4     4
#define    DDC3     3
#define    DDC2     2
#define    DDC1     1
#define    DDC0     0

#define    PINC7    7
#define    PINC6    6
#define    PINC5    5
#define    PINC4    4
#define    PINC3    3
#define    PINC2    2
#define    PINC1    1
#define    PINC0    0

/* Port D */
#define    PORTD7   7
#define    PORTD6   6
#define    PORTD5  	5
#define    PORTD4   4
#define    PORTD3   3
#define    PORTD2   2
#define    PORTD1   1
#define    PORTD0   0

#define    PD7      7
#define    PD6      6
#define    PD5      5
#define    PD4      4
#define    PD3      3
#define    PD2      2
#define    PD1      1
#define    PD0      0

#define    DDD7     7
#define    DDD6     6
#define    DDD5     5
#define    DDD4     4
#define    DDD3     3
#define    DDD2     2
#define    DDD1     1
#define    DDD0     0

#define    PIND7     7
#define    PIND6     6
#define    PIND5     5
#define    PIND4     4
#define    PIND3     3
#define    PIND2     2
#define    PIND1     1
#define    PIND0     0

/* SPI */
#define    SPIF     7
#define    WCOL     6

#define    SPIE     7
#define    SPE      6
#define    DORD     5
#define    MSTR     4
#define    CPOL     3
#define    CPHA     2
#define    SPR1     1
#define    SPR0     0

/* UART */
#define    RXC      7
#define    TXC      6
#define    UDRE     5
#define    FE       4
#define    DOR      3    /*This definition differs from the databook*/
#define    OVR      3    /*This definition differs from the databook*/

#define    RXCIE    7
#define    TXCIE    6
#define    UDRIE    5
#define    RXEN     4
#define    TXEN     3
#define    CHR9     2
#define    RXB8     1
#define    TXB8     0


/* USB hardware */

#define UISR	(*(volatile unsigned char *)0x1ff7)
#define UIAR	(*(volatile unsigned char *)0x1ff5)
#define UIER	(*(volatile unsigned char *)0x1ff3)
#define UOVCER	(*(volatile unsigned char *)0x1ff2)

#define HADDR	(*(volatile unsigned char *)0x1fef)
#define FADDR	(*(volatile unsigned char *)0x1fee)

#define FRM_NUM_L (*(volatile unsigned char *)0x1ffc)
#define FRM_NUM_H (*(volatile unsigned char *)0x1ffd)

#define HENDP0_CNTR (*(volatile unsigned char *)0x1fe7)
#define HENDP1_CNTR (*(volatile unsigned char *)0x1fe6)
#define FENDP0_CNTR (*(volatile unsigned char *)0x1fe5)
#define FENDP1_CNTR (*(volatile unsigned char *)0x1fe4)
#define FENDP2_CNTR (*(volatile unsigned char *)0x1fe3)

#define HDR0	(*(volatile unsigned char *)0x1fd7)
#define FDR0	(*(volatile unsigned char *)0x1fd5)
#define FDR1	(*(volatile unsigned char *)0x1fd4)
#define FDR2	(*(volatile unsigned char *)0x1fd3)

#define HBYTE_CNT0 (*(volatile unsigned char *)0x1fcf)
#define FBYTE_CNT0 (*(volatile unsigned char *)0x1fcd)
#define FBYTE_CNT1 (*(volatile unsigned char *)0x1fcc)
#define FBYTE_CNT2 (*(volatile unsigned char *)0x1fcb)

#define HCSR0	(*(volatile unsigned char *)0x1fdf)
#define HCSR1	(*(volatile unsigned char *)0x1fde)
#define FCSR0	(*(volatile unsigned char *)0x1fdd)
#define FCSR1	(*(volatile unsigned char *)0x1fdc)
#define FCSR2	(*(volatile unsigned char *)0x1fdb)

#define HCAR0	(*(volatile unsigned char *)0x1fa7)
#define HCAR1	(*(volatile unsigned char *)0x1fa6)
#define FCAR0	(*(volatile unsigned char *)0x1fa5)
#define FCAR1	(*(volatile unsigned char *)0x1fa4)
#define FCAR2	(*(volatile unsigned char *)0x1fa3)

#define GLB_STATE (*(volatile unsigned char *)0x1ffb)
#define GLC_STATE (*(volatile unsigned char *)0x1ffb)

#define HSTR	(*(volatile unsigned char *)0x1fc7)
#define HPCON	(*(volatile unsigned char *)0x1fc5)

#define HPSTAT1	(*(volatile unsigned char *)0x1fb8)
#define HPSTAT2	(*(volatile unsigned char *)0x1fb9)
#define HPSTAT3	(*(volatile unsigned char *)0x1fba)
#define HPSTAT4	(*(volatile unsigned char *)0x1fbb)
#define HPSTAT5	(*(volatile unsigned char *)0x1fbc)

#define PSTATE1	(*(volatile unsigned char *)0x1fa8)
#define PSTATE2	(*(volatile unsigned char *)0x1fa9)
#define PSTATE3	(*(volatile unsigned char *)0x1faa)
#define PSTATE4	(*(volatile unsigned char *)0x1fab)
#define PSTATE5	(*(volatile unsigned char *)0x1fac)

#define HPSTCH1	(*(volatile unsigned char *)0x1fb0)
#define HPSTCH2	(*(volatile unsigned char *)0x1fb1)
#define HPSTCH3	(*(volatile unsigned char *)0x1fb2)
#define HPSTCH4	(*(volatile unsigned char *)0x1fb3)
#define HPSTCH5	(*(volatile unsigned char *)0x1fb4)

#define SPRSR	(*(volatile unsigned char *)0x1ffa)
#define SPRSIE	(*(volatile unsigned char *)0x1ff9)

/* USB h/w bits */

/* Hub Port Status Register HPSTATx */
#define  LSP      6
#define  PPSTAT   5
#define  PRSTAT   4
#define  POCI     3
#define  PSSTAT   2
#define  PESTAT   1
#define  PCSTAT   0

/* Hub Port Status Change Register HPSCRx/HPSTCHx */
#define  RSTSC    4
#define  POCIC    3
#define  PSSC     2
#define  PESC     1
#define  PCSC     0

/* Hub Port State Register PSTATEx */
#define  DPSTATE  1
#define  DMSTATE  0

/* Overcurrent Detect Register UOVCER */
#define  PORT2    2

/* Hub Port Control Register HPCON */
#define  HPCON2   6
#define  HPCON1   5
#define  HPCON0   4
#define  HPADD2   2
#define  HPADD1   1
#define  HPADD0   0

/* Hub Status Register HSTR */
#define  OVLSC    3
#define  LPSC     2
#define  OVI      1
#define  LPS      0

/* Global State Register GLB_STATE */
#define  OVC_MODE 7
#define  SW_PWR   6
#define  PWR_MODE 5
#define  RMWUPE   2
#define  CONFG    1
#define  HADD_EN  0

/* Function Endpoint Control and Acknowledge Registers FCARx */
/* Hub Endpoint Control and Acknowledge Registers HCARx */
#define  CTL_DIR  7
#define  DIR      7
#define  DATA_END 6
#define  FORCE_STALL 5
#define  TX_PACKET_RDY 4
#define  STALL_SENT_ACK 3
#define  RX_SETUP_ACK 2
#define  RX_OUT_PACKET_ACK 1
#define  TX_COMPLETE_ACK 0
#define  CSRACK3  3
#define  CSRACK2  2
#define  CSRACK1  1
#define  CSRACK0  0

/* Function Endpoint Service Routine Registers FCSRx */
/* Hub Endpoint Service Routine Registers HCSRx */
#define  STALL_SENT 3
#define  RX_SETUP 2
#define  RX_OUT_PACKET 1
#define  TX_COMPLETE 0

/* Hub Data Register 1 special meaning */
#define  P3_SC    3
#define  P2_SC    2
#define  P1_SC    1
#define  H_SC     0

/* Function Endpoint Control Registers FENDPx_CNTR */
/* Hub Endpoint Control Registers HENDPx_CNTR */
#define  EPEDS    7
#define  EPEN     7
#define  DTGLE    3
#define  EPDIR    2
#define  EPTYPE1  1
#define  EPTYPE0  0

/* Function Address Registers FADDR */
#define  FEN      7

/* Hub Endpoint Control Registers HADDR */
#define  SAEN     7

/* Suspend/Resume Interrupt Enable Register SPRSIE */
#define  FRWUP_IE 2
#define  RSM_IE   1
#define  GLB_SUSP_IE 0

/* Suspend/Resume Register SPRSR */
#define  FRWUP    2
#define  RSM      1
#define  GLB_SUSP 0

/* USB Frame Number Register FRM_NUM_H */
#define  SOF_OK   7

/* USB Interrupt Enable Register UIER */
#define  SOF_IE   7
#define  EOF2_IE  6
#define  EOF1_IE  5
#define  FEP3_IE  4
#define  HEP1_IE  4
#define  HEP0_IE  3
#define  FEP2_IE  2
#define  FEP1_IE  1
#define  FEP0_IE  0

/* USB Interrupt Acknowledge Register UIAR */
#define  SOF_INTA 7
#define  EOF2_INTA 6
#define  EOF1_INTA 5
#define  FEP3_INTA 4
#define  HEP1_INTA 4
#define  HEP0_INTA 3
#define  FEP2_INTA 2
#define  FEP1_INTA 1
#define  FEP0_INTA 0

/* USB Interrupt Status Register UISR */
#define  SOF_INT  7
#define  EOF2_INT 6
#define  EOF1_INT 5
#define  FEP3_INT 4
#define  HEP1_INT 4
#define  HEP0_INT 3
#define  FEP2_INT 2
#define  FEP1_INT 1
#define  FEP0_INT 0


/* Interrupt Vector Numbers */

#define iv_RESET        1
#define iv_USB_SUS_RES  2
#define iv_INT1         3
#define iv_TIMER1_CAPT  4
#define iv_TIMER1_COMPA 5
#define iv_TIMER1_COMPB 6
#define iv_TIMER1_OVF   7
#define iv_TIMER0_OVF   8
#define iv_SPI_STC      9
#define iv_UART_RX      10
#define iv_UART_RXC     10
#define iv_UART_DRE     11
#define iv_UART_UDRE    11
#define iv_UART_TX      12
#define iv_UART_TXC     12
#define iv_USB_HW       13

/* */

#endif
