;-------------------------------------------------
; ICCAVR asm header file
; target = AT94K FPSLIC
; ja 12/23/2001
;
; Note: there are no memory end addresses defined
;       for FPSLIC because of dynamic layout. ja
;
; creation of int vectors is supported by macros:
; - "set_vector_table"
;   makes whole vector table with original labels
; - "set_vector_<original label>"
;   makes single vector with label by argument
;   e.g.
;    set_vector_INT0 react_on_INT0
;   results in code
;    .org 4
;    jmp  react_on_INT0
;
; macros leave with area set to text.
;-------------------------------------------------
;
; io register definitions
;
SREG	=0x3f
 I		=7		; in asm sources
 T		=6		; original bit names
 H		=5		; are ok
 S		=4
 V		=3
 N		=2
 Zero	=1		; except for Z
 C		=0
;
SPH		=0x3e
SPL		=0x3d
SP		=0x3d	; 16 bit base address
;
EIMF	=0x3b
 INTF7	=7
 INTF5	=6
 INTF3	=5
 INTF1	=4
 INT7	=3
 INT5	=2
 INT3	=1
 INT1	=0
;
SFTCR	=0x3a
 SRST	=0
;
TIMSK	=0x39
 TOIE1	=7
 OCIE1A	=6
 OCIE1B	=5
 TOIE2	=4
 TICIE1	=3
 OCIE2	=2
 TOIE0	=1
 OCIE0	=0
TIFR	=0x38
 TOV1	=7
 OCF1A	=6
 OCF1B	=5
 TOV2	=4
 ICF1	=3
 OCF2	=2
 TOV0	=1
 OCF0	=0
;
I2CR	=0x36	; old names
 I2INT 	=7
 I2EA	=6
 I2STA	=5
 I2STO	=4
 I2WC 	=3
 I2EN 	=2
 I2IE  	=0
TWCR	=0x36	; new names
 TWINT 	=7
 TWEA	=6
 TWSTA	=5
 TWSTO	=4
 TWWC 	=3
 TWEN 	=2
 TWIE  	=0
;
MCUCR	=0x35
 SE  	=5
 SM1  	=4
 SM0  	=3
 WDRF	=1
 EXTRF	=0
;
TCCR0	=0x33
 FOC0 	=7
 PWM0 	=6
 COM01 	=5
 COM00 	=4
 CTC0 	=3
 CS02	=2
 CS01	=1
 CS00	=0
TCNT0	=0x32
OCR0	=0x31
;
SFIOR	=0x30
 PSR2	=1
 PSR10	=0
;
TCCR1A	=0x2f
 COM1A1	=7
 COM1A0	=6
 COM1B1	=5
 COM1B0	=4
 FOC1A	=3
 FOC1B	=2
 PWM11	=1
 PWM10	=0
TCCR1B	=0x2e
 ICNC1	=7
 ICES1	=6
 ICPE	=5
 CTC1	=3
 CS12	=2
 CS11	=1
 CS10	=0
TCNT1H	=0x2d
TCNT1L	=0x2c
TCNT1	=0x2c	; 16 bit base address
OCR1AH	=0x2b
OCR1AL	=0x2a
OCR1A	=0x2a	; 16 bit base address
OCR1BH	=0x29
OCR1BL	=0x28
OCR1B	=0x28	; 16 bit base address
ICR1H	=0x25
ICR1L	=0x24
ICR1	=0x24	; 16 bit base address
;
TCCR2	=0x27
 FOC2	=7
 PWM2 	=6
 COM21 	=5
 COM20 	=4
 CTC2 	=3
 CS22	=2
 CS21	=1
 CS20	=0
ASSR	=0x26
 AS2	=3
 TCN2UB	=2
 OCR2UB	=1
 TCR2UB	=0
TCNT2	=0x23
OCR2	=0x22
;
WDTCR	=0x21
 WDTOE	=4
 WDE 	=3
 WDP2	=2
 WDP1	=1
 WDP0	=0
;
UBRRHI	=0x20
;
I2DR	=0x1f	; old names
I2AR	=0x1e
I2SR	=0x1d
I2BR	=0x1c
TWDR	=0x1f	; new names
TWAR	=0x1e
 TWGCE	=0
TWSR	=0x1d
 TWPS1	=1
 TWPS0	=0
TWBR	=0x1c
;
FPGAD	=0x1b
FPGAZ	=0x1a
FPGAY	=0x19
FPGAX	=0x18
FISUD	=0x17
FISUC	=0x16
FISUB	=0x15
FISUA	=0x14
FISCR	=0x13
 FIADR	=7
 XFIS1	=1
 XFIS0	=0
;
PORTD	=0x12
 PORTD7	=7
 PORTD6	=6
 PORTD5	=5
 PORTD4	=4
 PORTD3	=3
 PORTD2	=2
 PORTD1	=1
 PORTD0	=0
 PD7	=7
 PD6	=6
 PD5	=5
 PD4	=4
 PD3	=3
 PD2	=2
 PD1	=1
 PD0	=0
DDRD	=0x11
 DDD7	=7
 DDD6	=6
 DDD5	=5
 DDD4	=4
 DDD3	=3
 DDD2	=2
 DDD1	=1
 DDD0	=0
PIND	=0x10
 PIND7	=7
 PIND6	=6
 PIND5	=5
 PIND4	=4
 PIND3	=3
 PIND2	=2
 PIND1	=1
 PIND0	=0
;
UDR0	=0x0c
UCSR0A	=0x0b
 RXC0	=7
 TXC0	=6
 UDRE0	=5
 FE0	=4
 OR0	=3
 DOR0	=3		; bit name used in C header
 OVR0	=3		; bit name used in C header
 U2X0	=1
 MPCM0	=0
UCSR0B	=0x0a
 RXCIE0	=7
 TXCIE0	=6
 UDRIE0	=5
 RXEN0	=4
 TXEN0	=3
 CHR90	=2
 RXB80	=1
 TXB80	=0
UBRR0	=0x09
;
PORTE	=0x07
 PORTE7	=7
 PORTE6	=6
 PORTE5	=5
 PORTE4	=4
 PORTE3	=3
 PORTE2	=2
 PORTE1	=1
 PORTE0	=0
 PE7	=7
 PE6	=6
 PE5	=5
 PE4	=4
 PE3	=3
 PE2	=2
 PE1	=1
 PE0	=0
DDRE	=0x06
 DDE7	=7
 DDE6	=6
 DDE5	=5
 DDE4	=4
 DDE3	=3
 DDE2	=2
 DDE1	=1
 DDE0	=0
PINE	=0x05
 PINE7	=7
 PINE6	=6
 PINE5	=5
 PINE4	=4
 PINE3	=3
 PINE2	=2
 PINE1	=1
 PINE0	=0
;
UDR1	=0x03
UCSR1A	=0x02
 RXC1	=7
 TXC1	=6
 UDRE1	=5
 FE1	=4
 OR1	=3
 DOR1	=3		; bit name used in C header
 OVR1	=3		; bit name used in C header
 U2X1	=1
 MPCM1	=0
UCSR1B	=0x01
 RXCIE1	=7
 TXCIE1	=6
 UDRIE1	=5
 RXEN1	=4
 TXEN1	=3
 CHR91	=2
 RXB81	=1
 TXB81	=0
UBRR1	=0x00
;
;-------------------------------------------------
; macros creating int vectors
;
.macro set_vector_table
 .area vector (abs)
 .org	4
  jmp	FPGA_INT0
  jmp	EXT_INT0
  jmp	FPGA_INT1
  jmp	EXT_INT1
  jmp	FPGA_INT2
  jmp	EXT_INT2
  jmp	FPGA_INT3
  jmp	EXT_INT3
  jmp	TIM2_COMP
  jmp	TIM2_OVF
  jmp	TIM1_CAPT
  jmp	TIM1_COMPA
  jmp	TIM1_COMPB
  jmp	TIM1_OVF
  jmp	TIM0_COMP
  jmp	TIM0_OVF
  jmp	FPGA_INT4
  jmp	FPGA_INT5
  jmp	FPGA_INT6
  jmp	FPGA_INT7
  jmp	UART0_RXC
  jmp	UART0_DRE
  jmp	UART0_TXC
  jmp	FPGA_INT8
  jmp	FPGA_INT9
  jmp	FPGA_INT10
  jmp	FPGA_INT11
  jmp	UART1_RXC
  jmp	UART1_DRE
  jmp	UART1_TXC
  jmp	FPGA_INT12
  jmp	FPGA_INT13
  jmp	FPGA_INT14
  jmp	FPGA_INT15
  jmp	TWS_INT
 .area text
.endmacro
;
.macro set_vector_FPGA_INT0
 .area vector (abs)
 .org	4
  jmp	@0
 .area text
.endmacro
.macro set_vector_FPGA_INT1
 .area vector (abs)
 .org	12
  jmp	@0
 .area text
.endmacro
.macro set_vector_FPGA_INT2
 .area vector (abs)
 .org	20
  jmp	@0
 .area text
.endmacro
.macro set_vector_FPGA_INT3
 .area vector (abs)
 .org	28
  jmp	@0
 .area text
.endmacro
.macro set_vector_FPGA_INT4
 .area vector (abs)
 .org	68
  jmp	@0
 .area text
.endmacro
.macro set_vector_FPGA_INT5
 .area vector (abs)
 .org	72
  jmp	@0
 .area text
.endmacro
.macro set_vector_FPGA_INT6
 .area vector (abs)
 .org	76
  jmp	@0
 .area text
.endmacro
.macro set_vector_FPGA_INT7
 .area vector (abs)
 .org	80
  jmp	@0
 .area text
.endmacro
.macro set_vector_FPGA_INT8
 .area vector (abs)
 .org	96
  jmp	@0
 .area text
.endmacro
.macro set_vector_FPGA_INT9
 .area vector (abs)
 .org	100
  jmp	@0
 .area text
.endmacro
.macro set_vector_FPGA_INT10
 .area vector (abs)
 .org	104
  jmp	@0
 .area text
.endmacro
.macro set_vector_FPGA_INT11
 .area vector (abs)
 .org	108
  jmp	@0
 .area text
.endmacro
.macro set_vector_FPGA_INT12
 .area vector (abs)
 .org	124
  jmp	@0
 .area text
.endmacro
.macro set_vector_FPGA_INT13
 .area vector (abs)
 .org	128
  jmp	@0
 .area text
.endmacro
.macro set_vector_FPGA_INT14
 .area vector (abs)
 .org	132
  jmp	@0
 .area text
.endmacro
.macro set_vector_FPGA_INT15
 .area vector (abs)
 .org	136
  jmp	@0
 .area text
.endmacro
;
.macro set_vector_EXT_INT0
 .area vector (abs)
 .org	8
  jmp	@0
 .area text
.endmacro
.macro set_vector_INT0
 .area vector (abs)
 .org	8
  jmp	@0
 .area text
.endmacro
.macro set_vector_EXT_INT1
 .area vector (abs)
 .org	16
  jmp	@0
 .area text
.endmacro
.macro set_vector_INT1
 .area vector (abs)
 .org	16
  jmp	@0
 .area text
.endmacro
.macro set_vector_EXT_INT2
 .area vector (abs)
 .org	24
  jmp	@0
 .area text
.endmacro
.macro set_vector_INT2
 .area vector (abs)
 .org	24
  jmp	@0
 .area text
.endmacro
.macro set_vector_EXT_INT3
 .area vector (abs)
 .org	32
  jmp	@0
 .area text
.endmacro
.macro set_vector_INT3
 .area vector (abs)
 .org	32
  jmp	@0
 .area text
.endmacro
;
.macro set_vector_TIM2_COMP
 .area vector (abs)
 .org	36
  jmp	@0
 .area text
.endmacro
.macro set_vector_TIMER2_COMP
 .area vector (abs)
 .org	36
  jmp	@0
 .area text
.endmacro
.macro set_vector_TIM2_OVF
 .area vector (abs)
 .org	40
  jmp	@0
 .area text
.endmacro
.macro set_vector_TIMER2_OVF
 .area vector (abs)
 .org	40
  jmp	@0
 .area text
.endmacro
.macro set_vector_TIM1_CAPT
 .area vector (abs)
 .org	44
  jmp	@0
 .area text
.endmacro
.macro set_vector_TIMER1_CAPT
 .area vector (abs)
 .org	44
  jmp	@0
 .area text
.endmacro
.macro set_vector_TIM1_COMPA
 .area vector (abs)
 .org	48
  jmp	@0
 .area text
.endmacro
.macro set_vector_TIMER1_COMPA
 .area vector (abs)
 .org	48
  jmp	@0
 .area text
.endmacro
.macro set_vector_TIM1_COMPB
 .area vector (abs)
 .org	52
  jmp	@0
 .area text
.endmacro
.macro set_vector_TIMER1_COMPB
 .area vector (abs)
 .org	52
  jmp	@0
 .area text
.endmacro
.macro set_vector_TIM1_OVF
 .area vector (abs)
 .org	56
  jmp	@0
 .area text
.endmacro
.macro set_vector_TIMER1_OVF
 .area vector (abs)
 .org	56
  jmp	@0
 .area text
.endmacro
.macro set_vector_TIM0_COMP
 .area vector (abs)
 .org	60
  jmp	@0
 .area text
.endmacro
.macro set_vector_TIMER0_COMP
 .area vector (abs)
 .org	60
  jmp	@0
 .area text
.endmacro
.macro set_vector_TIM0_OVF
 .area vector (abs)
 .org	64
  jmp	@0
 .area text
.endmacro
.macro set_vector_TIMER0_OVF
 .area vector (abs)
 .org	64
  jmp	@0
 .area text
.endmacro
;
.macro set_vector_UART0_RX
 .area vector (abs)
 .org	84
  jmp	@0
 .area text
.endmacro
.macro set_vector_UART0_RXC
 .area vector (abs)
 .org	84
  jmp	@0
 .area text
.endmacro
.macro set_vector_UART0_DRE
 .area vector (abs)
 .org	88
  jmp	@0
 .area text
.endmacro
.macro set_vector_UART0_UDRE
 .area vector (abs)
 .org	88
  jmp	@0
 .area text
.endmacro
.macro set_vector_UART0_TX
 .area vector (abs)
 .org	92
  jmp	@0
 .area text
.endmacro
.macro set_vector_UART0_TXC
 .area vector (abs)
 .org	92
  jmp	@0
 .area text
.endmacro
.macro set_vector_UART1_RX
 .area vector (abs)
 .org	112
  jmp	@0
 .area text
.endmacro
.macro set_vector_UART1_RXC
 .area vector (abs)
 .org	112
  jmp	@0
 .area text
.endmacro
.macro set_vector_UART1_DRE
 .area vector (abs)
 .org	116
  jmp	@0
 .area text
.endmacro
.macro set_vector_UART1_UDRE
 .area vector (abs)
 .org	116
  jmp	@0
 .area text
.endmacro
.macro set_vector_UART1_TX
 .area vector (abs)
 .org	120
  jmp	@0
 .area text
.endmacro
.macro set_vector_UART1_TXC
 .area vector (abs)
 .org	120
  jmp	@0
 .area text
.endmacro
;
.macro set_vector_I2C_INT
 .area vector (abs)
 .org	140
  jmp	@0
 .area text
.endmacro
.macro set_vector_TWS_INT
 .area vector (abs)
 .org	140
  jmp	@0
 .area text
.endmacro
.macro set_vector_TWSI
 .area vector (abs)
 .org	140
  jmp	@0
 .area text
.endmacro
.macro set_vector_TWI
 .area vector (abs)
 .org	140
  jmp	@0
 .area text
.endmacro
;-------------------------------------------------
;<eof>
