#ifndef __ioUSB355v_h
#define __ioUSB355v_h

/* AT43USB355 header file for
 * ImageCraft ICCAVR compiler
 */

/* AVR core is similar to 8515 but uses
 * long jmp in vector table (at least).
 * USB h/w memory mapped at 0x1FA0..0x1FFF
 */

/* not strictly sorted by address
 */

/* last changed 2002/09/25
 */

/* AVR io */

/* ADC */
#define ADC		(*(volatile unsigned int *)0x22)
#define ADCL	(*(volatile unsigned char *)0x22)
#define ADCH	(*(volatile unsigned char *)0x23)
#define ADCSR	(*(volatile unsigned char *)0x27)
#define ADMUX	(*(volatile unsigned char *)0x28)

/* SPI */
#define SPCR	(*(volatile unsigned char *)0x2D)
#define SPSR	(*(volatile unsigned char *)0x2E)
#define SPDR	(*(volatile unsigned char *)0x2F)

/* Port F */
#define PINF	(*(volatile unsigned char *)0x24)
#define DDRF	(*(volatile unsigned char *)0x25)
#define PORTF	(*(volatile unsigned char *)0x26)

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

/* ADC */
#define    MUX3     3
#define    MUX2     2
#define    MUX1     1
#define    MUX0     0

#define    ADEN     7
#define    ADSC     6
#define    ADFR     5
#define    ADIF     4
#define    ADIE     3
#define    ADPS2    2
#define    ADPS1    1
#define    ADPS0    0

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

/* Port F */
#define    PORTF3   3
#define    PORTF2   2
#define    PORTF1   1

#define    PF3      3
#define    PF2      2
#define    PF1      1

#define    DDF3     3
#define    DDF2     2
#define    DDF1     1

#define    PINF3    3
#define    PINF2    2
#define    PINF1    1


/* USB */
#define UISR	(*(volatile unsigned char *)0x1ff7)
#define UIMSKR	(*(volatile unsigned char *)0x1ff6)
#define UIAR	(*(volatile unsigned char *)0x1ff5)
#define UIER	(*(volatile unsigned char *)0x1ff3)
#define UOVCER	(*(volatile unsigned char *)0x1ff2)

#define HADDR	(*(volatile unsigned char *)0x1fef)
#define FADDR	(*(volatile unsigned char *)0x1fee)

#define FRM_NUM_L (*(volatile unsigned char *)0x1ffc)
#define FRM_NUM_H (*(volatile unsigned char *)0x1ffd)

#define HENDP0_CNTR (*(volatile unsigned char *)0x1fe7)
#define FENDP0_CNTR (*(volatile unsigned char *)0x1fe5)
#define FENDP1_CNTR (*(volatile unsigned char *)0x1fe4)
#define FENDP2_CNTR (*(volatile unsigned char *)0x1fe3)
#define FENDP3_CNTR (*(volatile unsigned char *)0x1fe2)

#define HDR0	(*(volatile unsigned char *)0x1fd7)
#define FDR0	(*(volatile unsigned char *)0x1fd5)
#define FDR1	(*(volatile unsigned char *)0x1fd4)
#define FDR2	(*(volatile unsigned char *)0x1fd3)
#define FDR3	(*(volatile unsigned char *)0x1fd2)

#define HBYTE_CNT0 (*(volatile unsigned char *)0x1fcf)
#define FBYTE_CNT0 (*(volatile unsigned char *)0x1fcd)
#define FBYTE_CNT1 (*(volatile unsigned char *)0x1fcc)
#define FBYTE_CNT2 (*(volatile unsigned char *)0x1fcb)
#define FBYTE_CNT3 (*(volatile unsigned char *)0x1fca)

#define HCSR0	(*(volatile unsigned char *)0x1fdf)
#define FCSR0	(*(volatile unsigned char *)0x1fdd)
#define FCSR1	(*(volatile unsigned char *)0x1fdc)
#define FCSR2	(*(volatile unsigned char *)0x1fdb)
#define FCSR3	(*(volatile unsigned char *)0x1fda)
#define HCAR0	(*(volatile unsigned char *)0x1fa7)
#define FCAR0	(*(volatile unsigned char *)0x1fa5)
#define FCAR1	(*(volatile unsigned char *)0x1fa4)
#define FCAR2	(*(volatile unsigned char *)0x1fa3)
#define FCAR3	(*(volatile unsigned char *)0x1fa2)

#define GLB_STATE (*(volatile unsigned char *)0x1ffb)

#define HSTR	(*(volatile unsigned char *)0x1fc7)
#define HPCON	(*(volatile unsigned char *)0x1fc5)
#define HPSTAT1	(*(volatile unsigned char *)0x1fb8)
#define HPSTAT2	(*(volatile unsigned char *)0x1fb9)
#define HPSTAT3	(*(volatile unsigned char *)0x1fba)
#define PSTATE1	(*(volatile unsigned char *)0x1fa8)
#define PSTATE2	(*(volatile unsigned char *)0x1fa9)
#define PSTATE3	(*(volatile unsigned char *)0x1faa)
#define HPSCR1	(*(volatile unsigned char *)0x1fb0)
#define HPSCR2	(*(volatile unsigned char *)0x1fb1)
#define HPSCR3	(*(volatile unsigned char *)0x1fb2)

#define SPRSR	(*(volatile unsigned char *)0x1ffa)
#define SPRSIE	(*(volatile unsigned char *)0x1ff9)
#define SPRSMSK	(*(volatile unsigned char *)0x1ff8)

/* bits */

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
#define  SUSP_FLG 4
#define  RESUME_FLG 3
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
#define  EPEN     7
#define  DTGLE    3
#define  EPDIR    2
#define  EPTYPE1  1
#define  EPTYPE0  0

/* Function Address Registers FADDR */
#define  FEN      7

/* Hub Endpoint Control Registers HADDR */
#define  SAEN     7

/* Suspend/Resume Interrupt Mask Register SPRSMSK */
#define  BUS_INT_MSK 3
#define  FRWUP_MSK 2
#define  RSM_MSK  1
#define  GLB_SUSP_MSK 0

/* Suspend/Resume Interrupt Enable Register SPRSIE */
#define  BUS_INT_IE 3
#define  FRWUP_IE 2
#define  RSM_IE   1
#define  GLB_SUSP_IE 0

/* Suspend/Resume Register SPRSR */
#define  BUS_INT  3
#define  FRWUP    2
#define  RSM      1
#define  GLB_SUSP 0

/* USB Frame Number Register FRM_NUM_H */
#define  SOF_OK   7

/* USB Interrupt Enable Register UIER */
#define  SOF_IE   7
#define  EOF2_IE  6
#define  FEP3_IE  4
#define  HEP0_IE  3
#define  FEP2_IE  2
#define  FEP1_IE  1
#define  FEP0_IE  0

/* USB Interrupt Acknowledge Register UIAR */
#define  SOF_INTACK 7
#define  EOF2_INTACK 6
#define  FEP3_INTACK 4
#define  HEP0_INTACK 3
#define  FEP2_INTACK 2
#define  FEP1_INTACK 1
#define  FEP0_INTACK 0

/* USB Interrupt Mask Register UIER */
#define  SOF_IMSK 7
#define  EOF2_IMSK 6
#define  FEP3_IMSK 4
#define  HEP0_IMSK 3
#define  FEP2_IMSK 2
#define  FEP1_IMSK 1
#define  FEP0_IMSK 0

/* USB Interrupt Status Register UISR */
#define  SOF_INT  7
#define  EOF2_INT 6
#define  FEP3_INT 4
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
#define iv_ADC          12
#define iv_USB_HW       13

/* */

#endif
