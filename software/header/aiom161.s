;-------------------------------------------------
; ICCAVR asm header file
; target = ATmega161
; ja 12/23/2001
;
; supports macros to create int vectors by name
; "set_vector_<original label>"
;  makes single vector with label by argument
;  e.g.
;   set_vector_INT0 react_on_INT0
;  results in code
;   .org 4
;   jmp  react_on_INT0
;
; macros leave with area set to text.
;-------------------------------------------------
; useful memory definitions
;
RAMEND  =0x45F	 ;Last On-Chip SRAM Location
XRAMEND =0xFFFF	 ;Last SRAM Location
E2END	=0x1FF	 ;Last On-Chip EEPROM Location
FLASHEND=0x3FFF	 ;Last On-Chip Flash Location
;
;-------------------------------------------------
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
GIMSK	=0x3b
 INT1	=7
 INT0	=6
 INT2	=5
GIFR	=0x3a
 INTF1	=7
 INTF0	=6
 INTF2	=5
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
SPMCR	=0x37
 BLBSET	=3
 PGWRT	=2
 PGERS	=1
 SPMEN	=0
;
EMCUCR	=0x36
 SM0  	=7
 SRL2	=6
 SRL1	=5
 SRL0	=4
 SRW01 	=3
 SRW00 	=2
 SRW11 	=1
 ICS2  	=0
MCUCR	=0x35
 SRE  	=7
 SRW10 	=6
 SE  	=5
 SM1  	=4
 ISC11	=3
 ISC10 	=2
 ISC01	=1
 ISC00 	=0
MCUSR	=0x34
 WDRF	=3
 BORF	=2
 EXTRF	=1
 PORF	=0
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
EEARH	=0x1f
EEARL	=0x1e
EEAR	=0x1e	; 16 bit base address
EEDR	=0x1d
EECR	=0x1c
 EERIE	=3
 EEMWE	=2
 EEWE	=1
 EERE	=0
;
PORTA	=0x1b
 PORTA7	=7
 PORTA6	=6
 PORTA5	=5
 PORTA4	=4
 PORTA3	=3
 PORTA2	=2
 PORTA1	=1
 PORTA0	=0
 PA7	=7
 PA6	=6
 PA5	=5
 PA4	=4
 PA3	=3
 PA2	=2
 PA1	=1
 PA0	=0
DDRA	=0x1a
 DDA7	=7
 DDA6	=6
 DDA5	=5
 DDA4	=4
 DDA3	=3
 DDA2	=2
 DDA1	=1
 DDA0	=0
PINA	=0x19
 PINA7	=7
 PINA6	=6
 PINA5	=5
 PINA4	=4
 PINA3	=3
 PINA2	=2
 PINA1	=1
 PINA0	=0
PORTB	=0x18
 PORTB7	=7
 PORTB6	=6
 PORTB5	=5
 PORTB4	=4
 PORTB3	=3
 PORTB2	=2
 PORTB1	=1
 PORTB0	=0
 PB7	=7
 PB6	=6
 PB5	=5
 PB4	=4
 PB3	=3
 PB2	=2
 PB1	=1
 PB0	=0
DDRB	=0x17
 DDB7	=7
 DDB6	=6
 DDB5	=5
 DDB4	=4
 DDB3	=3
 DDB2	=2
 DDB1	=1
 DDB0	=0
PINB	=0x16
 PINB7	=7
 PINB6	=6
 PINB5	=5
 PINB4	=4
 PINB3	=3
 PINB2	=2
 PINB1	=1
 PINB0	=0
PORTC	=0x15
 PORTC7	=7
 PORTC6	=6
 PORTC5	=5
 PORTC4	=4
 PORTC3	=3
 PORTC2	=2
 PORTC1	=1
 PORTC0	=0
 PC7	=7
 PC6	=6
 PC5	=5
 PC4	=4
 PC3	=3
 PC2	=2
 PC1	=1
 PC0	=0
DDRC	=0x14
 DDC7	=7
 DDC6	=6
 DDC5	=5
 DDC4	=4
 DDC3	=3
 DDC2	=2
 DDC1	=1
 DDC0	=0
PINC	=0x13
 PINC7	=7
 PINC6	=6
 PINC5	=5
 PINC4	=4
 PINC3	=3
 PINC2	=2
 PINC1	=1
 PINC0	=0
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
SPDR	=0x0f
SPSR	=0x0e
 SPIF	=7
 WCOL	=6
 SPI2X	=0
SPCR	=0x0d
 SPIE	=7
 SPE 	=6
 DORD	=5
 MSTR	=4
 CPOL	=3
 CPHA	=2
 SPR1	=1
 SPR0	=0
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
ACSR	=0x08
 ACD	=7
 AINBG	=6
 ACO 	=5
 ACI 	=4
 ACIE	=3
 ACIC	=2
 ACIS1	=1
 ACIS0	=0
;
PORTE	=0x07
 PORTE2	=2
 PORTE1	=1
 PORTE0	=0
 PE2	=2
 PE1	=1
 PE0	=0
DDRE	=0x06
 DDE2	=2
 DDE1	=1
 DDE0	=0
PINE	=0x05
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
; fuse and lock bit definitions
;
;				; lock byte
 BLB12	=5
 BLB12	=4
 BLB02	=3
 BLB01	=2
 LB2	=1
 LB1	=0
;
;				; fuses byte
 BOOTRST=6
 SPIEN	=5
 BODLEVEL=4
 BODEN	=3
 CKSEL2	=2
 CKSEL1	=1
 CKSEL0	=0
;
;-------------------------------------------------
; macros creating int vectors
;
.macro set_vector_table
 .area vector (abs)
 .org	4
  jmp	EXT_INT0
  jmp	EXT_INT1
  jmp	EXT_INT2
  jmp	TIM2_COMP
  jmp	TIM2_OVF
  jmp	TIM1_CAPT
  jmp	TIM1_COMPA
  jmp	TIM1_COMPB
  jmp	TIM1_OVF
  jmp	TIM0_COMP
  jmp	TIM0_OVF
  jmp	SPI_STC
  jmp	UART_RXC0
  jmp	UART_RXC1
  jmp	UART_DRE0
  jmp	UART_DRE1
  jmp	UART_TXC0
  jmp	UART_TXC1
  jmp	EE_RDY
  jmp	ANA_COMP
 .area text
.endmacro
;
.macro set_vector_INT0
 .area vector (abs)
 .org	4
  jmp	@0
 .area text
.endmacro
.macro set_vector_INT1
 .area vector (abs)
 .org	8
  jmp	@0
 .area text
.endmacro
.macro set_vector_INT2
 .area vector (abs)
 .org	12
  jmp	@0
 .area text
.endmacro
.macro set_vector_TIMER2_COMP
 .area vector (abs)
 .org	16
  jmp	@0
 .area text
.endmacro
.macro set_vector_TIMER2_OVF
 .area vector (abs)
 .org	20
  jmp	@0
 .area text
.endmacro
.macro set_vector_TIMER1_CAPT
 .area vector (abs)
 .org	24
  jmp	@0
 .area text
.endmacro
.macro set_vector_TIMER1_COMPA
 .area vector (abs)
 .org	28
  jmp	@0
 .area text
.endmacro
.macro set_vector_TIMER1_COMPB
 .area vector (abs)
 .org	32
  jmp	@0
 .area text
.endmacro
.macro set_vector_TIMER1_OVF
 .area vector (abs)
 .org	36
  jmp	@0
 .area text
.endmacro
.macro set_vector_TIMER0_COMP
 .area vector (abs)
 .org	40
  jmp	@0
 .area text
.endmacro
.macro set_vector_TIMER0_OVF
 .area vector (abs)
 .org	44
  jmp	@0
 .area text
.endmacro
.macro set_vector_SPI_STC
 .area vector (abs)
 .org	48
  jmp	@0
 .area text
.endmacro
.macro set_vector_UART0_RX
 .area vector (abs)
 .org	52
  jmp	@0
 .area text
.endmacro
.macro set_vector_UART0_RXC
 .area vector (abs)
 .org	52
  jmp	@0
 .area text
.endmacro
.macro set_vector_UART1_RX
 .area vector (abs)
 .org	56
  jmp	@0
 .area text
.endmacro
.macro set_vector_UART1_RXC
 .area vector (abs)
 .org	56
  jmp	@0
 .area text
.endmacro
.macro set_vector_UART0_DRE
 .area vector (abs)
 .org	60
  jmp	@0
 .area text
.endmacro
.macro set_vector_UART0_UDRE
 .area vector (abs)
 .org	60
  jmp	@0
 .area text
.endmacro
.macro set_vector_UART1_DRE
 .area vector (abs)
 .org	64
  jmp	@0
 .area text
.endmacro
.macro set_vector_UART1_UDRE
 .area vector (abs)
 .org	64
  jmp	@0
 .area text
.endmacro
.macro set_vector_UART0_TX
 .area vector (abs)
 .org	68
  jmp	@0
 .area text
.endmacro
.macro set_vector_UART0_TXC
 .area vector (abs)
 .org	68
  jmp	@0
 .area text
.endmacro
.macro set_vector_UART1_TX
 .area vector (abs)
 .org	72
  jmp	@0
 .area text
.endmacro
.macro set_vector_UART1_TXC
 .area vector (abs)
 .org	72
  jmp	@0
 .area text
.endmacro
.macro set_vector_EE_RDY
 .area vector (abs)
 .org	76
  jmp	@0
 .area text
.endmacro
.macro set_vector_EE_READY
 .area vector (abs)
 .org	76
  jmp	@0
 .area text
.endmacro
.macro set_vector_ANA_COMP
 .area vector (abs)
 .org	80
  jmp	@0
 .area text
.endmacro
.macro set_vector_ANALOG_COMP
 .area vector (abs)
 .org	80
  jmp	@0
 .area text
.endmacro
;-------------------------------------------------
;<eof>
