#ifndef __ioAT94Kv_h
#define __ioAT94Kv_h

/* FPSLIC AT94k header file for
 * ImageCraft ICCAVR compiler
 */

/* not strictly sorted by address no more
 */

/* interrupt vector number definitions added
 */
 
/* last changed 2002/09/28
 */

/* UARTs Baud Rate Register High */
#define     UBRRHI      (*(volatile unsigned char *)0x40)

/* UART1 */
#define     UBRR1       (*(volatile unsigned char *)0x20)
#define     UCSR1B      (*(volatile unsigned char *)0x21)
#define      RXCIE1      7
#define      TXCIE1      6
#define      UDRIE1      5
#define      RXEN1       4
#define      TXEN1       3
#define      CHR91       2
#define      RXB81       1
#define      TXB81       0
#define     UCSR1A      (*(volatile unsigned char *)0x22)
#define      RXC1        7
#define      TXC1        6
#define      UDRE1       5
#define      FE1         4
#define      OVR1        3       /* Alternative Definition */
#define      DOR1        3       /* Alternative Definition */
#define      OR1         3
#define      U2X1        1
#define      MPCM1       0
#define     UDR1        (*(volatile unsigned char *)0x23)

/* UART0 */
#define     UBRR0       (*(volatile unsigned char *)0x29)
#define     UCSR0B      (*(volatile unsigned char *)0x2A)
#define      RXCIE0      7
#define      TXCIE0      6
#define      UDRIE0      5
#define      RXEN0       4
#define      TXEN0       3
#define      CHR90       2
#define      RXB80       1
#define      TXB80       0
#define     UCSR0A      (*(volatile unsigned char *)0x2B)
#define      RXC0        7
#define      TXC0        6
#define      UDRE0       5
#define      FE0         4
#define      OVR0        3       /* Alternative Definition */
#define      DOR0        3       /* Alternative Definition */
#define      OR0         3
#define      U2X0        1
#define      MPCM0       0
#define     UDR0        (*(volatile unsigned char *)0x2C)

/* Port E */
#define     PINE        (*(volatile unsigned char *)0x25)
#define     DDRE        (*(volatile unsigned char *)0x26)
#define     PORTE       (*(volatile unsigned char *)0x27)

/* Port D */
#define     PIND        (*(volatile unsigned char *)0x30)
#define     DDRD        (*(volatile unsigned char *)0x31)
#define     PORTD       (*(volatile unsigned char *)0x32)

/* FPGA I/O Select Control Register */
#define     FISCR       (*(volatile unsigned char *)0x33)
#define      FIADR       7
#define      XFIS1       1
#define      XFIS0       0
/* FPGA I/O Select, Interrupt Mask/Flag Registers */
#define     FISUA       (*(volatile unsigned char *)0x34)
#define      FIF3        7
#define      FIF2        6
#define      FIF1        5
#define      FIF0        4
#define      FINT3       3
#define      FINT2       2
#define      FINT1       1
#define      FINT0       0
#define     FISUB       (*(volatile unsigned char *)0x35)
#define      FIF7        7
#define      FIF6        6
#define      FIF5        5
#define      FIF4        4
#define      FINT7       3
#define      FINT6       2
#define      FINT5       1
#define      FINT4       0
#define     FISUC       (*(volatile unsigned char *)0x36)
#define      FIF11       7
#define      FIF10       6
#define      FIF9        5
#define      FIF8        4
#define      FINT11      3
#define      FINT10      2
#define      FINT9       1
#define      FINT8       0
#define     FISUD       (*(volatile unsigned char *)0x37)
#define      FIF15       7
#define      FIF14       6
#define      FIF13       5
#define      FIF12       4
#define      FINT15      3
#define      FINT14      2
#define      FINT13      1
#define      FINT12      0

/* FPGA Cache Address Registers */
#define     FPGAX       (*(volatile unsigned char *)0x38)
#define     FPGAY       (*(volatile unsigned char *)0x39)
#define     FPGAZ       (*(volatile unsigned char *)0x3A)
/* FPGA Cache Data Register */
#define     FPGAD       (*(volatile unsigned char *)0x3B)

/* 2-wire Serial Interface */
#define     TWBR        (*(volatile unsigned char *)0x3C)
#define     TWSR        (*(volatile unsigned char *)0x3D)
#define     TWCR        (*(volatile unsigned char *)0x56)
#define      TWINT       7
#define      TWEA        6
#define      TWSTA       5
#define      TWSTO       4
#define      TWWC        3
#define      TWEN        2
#define      TWIE        0
#define     TWAR        (*(volatile unsigned char *)0x3E)
#define      TWGCE       0
#define     TWDR        (*(volatile unsigned char *)0x3F)

/* Watch Dog Timer Control Register */
#define     WDTCR       (*(volatile unsigned char *)0x41)
#define      WDTOE       4
#define      WDE         3
#define      WDP2        2
#define      WDP1        1
#define      WDP0        0

/* Timer/Counter2 */
#define     ASSR        (*(volatile unsigned char *)0x46)
#define      AS2         3
#define      TCN2UB      2
#define      OCR2UB      1
#define      TCR2UB      0
#define     OCR2        (*(volatile unsigned char *)0x42)
#define     TCNT2       (*(volatile unsigned char *)0x43)
#define     TCCR2       (*(volatile unsigned char *)0x47)
#define      FOC2        7
#define      PWM2        6
#define      COM21       5
#define      COM20       4
#define      CTC2        3
#define      CS22        2
#define      CS21        1
#define      CS20        0

/*Timer/Counter1 */
#define     ICR1        (*(volatile unsigned int *)0x44)
#define     ICR1L       (*(volatile unsigned char *)0x44)
#define     ICR1H       (*(volatile unsigned char *)0x45)
#define     OCR1B       (*(volatile unsigned int *)0x48)
#define     OCR1BL      (*(volatile unsigned char *)0x48)
#define     OCR1BH      (*(volatile unsigned char *)0x49)
#define     OCR1A       (*(volatile unsigned int *)0x4A)
#define     OCR1AL      (*(volatile unsigned char *)0x4A)
#define     OCR1AH      (*(volatile unsigned char *)0x4B)
#define     TCNT1       (*(volatile unsigned int *)0x4C)
#define     TCNT1L      (*(volatile unsigned char *)0x4C)
#define     TCNT1H      (*(volatile unsigned char *)0x4D)
#define     TCCR1B      (*(volatile unsigned char *)0x4E)
#define      ICNC1       7
#define      ICES1       6
#define      ICPE        5
#define      CTC1        3
#define      CS12        2
#define      CS11        1
#define      CS10        0
#define     TCCR1A      (*(volatile unsigned char *)0x4F)
#define      COM1A1      7
#define      COM1A0      6
#define      COM1B1      5
#define      COM1B0      4
#define      FOC1A       3
#define      FOC1B       2
#define      PWM11       1
#define      PWM10       0

/* Special Function I/O Register */
#define     SFIOR       (*(volatile unsigned char *)0x50)
#define      PSR2        1
#define      PSR10       0

/* Timer/Counter0 */
#define     OCR0        (*(volatile unsigned char *)0x51)
#define     TCNT0       (*(volatile unsigned char *)0x52)
#define     TCCR0       (*(volatile unsigned char *)0x53)
#define      FOC0        7
#define      PWM0        6
#define      COM01       5
#define      COM00       4
#define      CTC0        3
#define      CS02        2
#define      CS01        1
#define      CS00        0

/* MCU Control/Status Register */
#define     MCUR        (*(volatile unsigned char *)0x55)
#define      SE          5
#define      SM1         4
#define      SM0         3
#define      WDRF        1
#define      EXTRF       0

/* Timer/Counter Interrupts */
#define     TIFR        (*(volatile unsigned char *)0x58)
#define      TOV1        7
#define      OCF1A       6
#define      OCF1B       5
#define      TOV2        4
#define      ICF1        3
#define      OCF2        2
#define      TOV0        1
#define      OCF0        0
#define     TIMSK       (*(volatile unsigned char *)0x59)
#define      TOIE1       7
#define      OCIE1A      6
#define      OCIE1B      5
#define      TOIE2       4
#define      TICIE1      3
#define      OCIE2       2
#define      TOIE0       1
#define      OCIE0       0

/* Software Control Register */
#define     SFTCR       (*(volatile unsigned char *)0x5A)
#define      SRST        0

/* External Interrupts */
#define     EIMF        (*(volatile unsigned char *)0x5B)
#define      INTF3       7
#define      INTF2       6
#define      INTF1       5
#define      INTF0       4
#define      INT3        3
#define      INT2        2
#define      INT1        1
#define      INT0        0

/* Stack Pointer */
#define     SP          (*(volatile unsigned int *)0x5D)
#define     SPL         (*(volatile unsigned char *)0x5D)
#define     SPH         (*(volatile unsigned char *)0x5E)

/* Status Register */
#define     SREG        (*(volatile unsigned char *)0x5F)


/* Port D bits */
#define     PORTD7      7
#define     PORTD6      6
#define     PORTD5      5
#define     PORTD4      4
#define     PORTD3      3
#define     PORTD2      2
#define     PORTD1      1
#define     PORTD0      0

#define     PD7         7
#define     PD6         6
#define     PD5         5
#define     PD4         4
#define     PD3         3
#define     PD2         2
#define     PD1         1
#define     PD0         0

#define     DDD7        7
#define     DDD6        6
#define     DDD5        5
#define     DDD4        4
#define     DDD3        3
#define     DDD2        2
#define     DDD1        1
#define     DDD0        0

#define     PIND7       7
#define     PIND6       6
#define     PIND5       5
#define     PIND4       4
#define     PIND3       3
#define     PIND2       2
#define     PIND1       1
#define     PIND0       0

/* Port E bits */
#define     PORTE7      7
#define     PORTE6      6
#define     PORTE5      5
#define     PORTE4      4
#define     PORTE3      3
#define     PORTE2      2
#define     PORTE1      1
#define     PORTE0      0

#define     PE7         7
#define     PE6         6
#define     PE5         5
#define     PE4         4
#define     PE3         3
#define     PE2         2
#define     PE1         1
#define     PE0         0

#define     DDE7        7
#define     DDE6        6
#define     DDE5        5
#define     DDE4        4
#define     DDE3        3
#define     DDE2        2
#define     DDE1        1
#define     DDE0        0

#define     PINE7       7
#define     PINE6       6
#define     PINE5       5
#define     PINE4       4
#define     PINE3       3
#define     PINE2       2
#define     PINE1       1
#define     PINE0       0


/* Interrupt Vector Numbers */

#define  iv_RESET       0x01
#define  iv_FPGA_INT0   0x02
#define  iv_EXT_INT0    0x03
#define  iv_FPGA_INT1   0x04
#define  iv_EXT_INT1    0x05
#define  iv_FPGA_INT2   0x06
#define  iv_EXT_INT2    0x07
#define  iv_FPGA_INT3   0x08
#define  iv_EXT_INT3    0x09
#define  iv_TIM2_COMP   0x0A
#define  iv_TIMER2_COMP 0x0A
#define  iv_TIM2_OVF    0x0B
#define  iv_TIMER2_OVF  0x0B
#define  iv_TIM1_CAPT   0x0C
#define  iv_TIMER1_CAPT 0x0C
#define  iv_TIM1_COMPA  0x0D
#define  iv_TIMER1_COMPA 0x0D
#define  iv_TIM1_COMPB  0x0E
#define  iv_TIMER1_COMPB 0x0E
#define  iv_TIM1_OVF    0x0F
#define  iv_TIMER1_OVF  0x0F
#define  iv_TIM0_COMP   0x10
#define  iv_TIMER0_COMP 0x10
#define  iv_TIM0_OVF    0x11
#define  iv_TIMER0_OVF  0x11
#define  iv_FPGA_INT4   0x12
#define  iv_FPGA_INT5   0x13
#define  iv_FPGA_INT6   0x14
#define  iv_FPGA_INT7   0x15
#define  iv_UART0_RX    0x16
#define  iv_UART0_RXC   0x16
#define  iv_UART0_DRE   0x17
#define  iv_UART0_UDRE  0x17
#define  iv_UART0_TX    0x18
#define  iv_UART0_TXC   0x18
#define  iv_FPGA_INT8   0x19
#define  iv_FPGA_INT9   0x1A
#define  iv_FPGA_INT10  0x1B
#define  iv_FPGA_INT11  0x1C
#define  iv_UART1_RX    0x1D
#define  iv_UART1_RXC   0x1D
#define  iv_UART1_DRE   0x1E
#define  iv_UART1_UDRE  0x1E
#define  iv_UART1_TX    0x1F
#define  iv_UART1_TXC   0x1F
#define  iv_FPGA_INT12  0x20
#define  iv_FPGA_INT13  0x21
#define  iv_FPGA_INT14  0x22
#define  iv_FPGA_INT15  0x23
#define  iv_TWS_INT     0x24
#define  iv_TWI         0x24
#define  iv_TWSI        0x24

/* */

#endif
