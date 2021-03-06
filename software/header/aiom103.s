;-------------------------------------------------
; ICCAVR asm header file
; target = ATmega103
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
RAMEND  =0xFFF	 ;Last On-Chip SRAM Location
XRAMEND =0xFFFF	 ;Last SRAM Location
E2END	=0xFFF	 ;Last On-Chip EEPROM Location
FLASHEND=0x1FFFF ;Last On-Chip Flash Location
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
XDIV	=0x3c
 XDIVEN	=7
;
RAMPZ	=0x3b
 RAMPZ0	=0
;
EICR	=0x3a
 ISC71	=7
 ISC70	=6
 ISC61	=5
 ISC60	=4
 ISC51	=3
 ISC50	=2
 ISC41	=1
 ISC40	=0
EIMSK	=0x39
 INT7	=7
 INT6	=6
 INT5	=5
 INT4	=4
 INT3	=3
 INT2	=2
 INT1	=1
 INT0	=0
EIFR	=0x38
 INTF7	=7
 INTF6	=6
 INTF5	=5
 INTF4	=4
;
TIMSK	=0x37
 OCIE2	=7
 TOIE2	=6
 TICIE1	=5
 OCIE1A	=4
 OCIE1B	=3
 TOIE1	=2
 OCIE0	=1
 TOIE0	=0
TIFR	=0x36
 OCF2	=7
 TOV2	=6
 ICF1	=5
 OCF1A	=4
 OCF1B	=3
 TOV1	=2
 OCF0	=1
 TOV0	=0
;
MCUCR	=0x35
 SRE  	=7
 SRW  	=6
 SE  	=5
 SM1  	=4
 SM0  	=3
MCUSR	=0x34
 EXTRF	=1
 PORF	=0
;
TCCR0	=0x33
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
ASSR	=0x30
 AS0	=3
 TCN0UB	=2
 OCR0UB	=1
 TCR0UB	=0
;
TCCR1A	=0x2f
 COM1A1	=7
 COM1A0	=6
 COM1B1	=5
 COM1B0	=4
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
ICR1H	=0x27
ICR1L	=0x26
ICR1	=0x26	; 16 bit base address
;
TCCR2	=0x25
 PWM2 	=6
 COM21 	=5
 COM20 	=4
 CTC2 	=3
 CS22	=2
 CS21	=1
 CS20	=0
TCNT2	=0x24
OCR2	=0x23
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
UDR		=0x0c
USR		=0x0b
 RXC	=7
 TXC	=6
 UDRE	=5
 FE		=4
 OR		=3		; original bit name
 DOR	=3		; bit name used in C header
 OVR	=3		; bit name used in C header
UCR		=0x0a
 RXCIE	=7
 TXCIE	=6
 UDRIE	=5
 RXEN	=4
 TXEN	=3
 CHR9	=2
 RXB8	=1
 TXB8	=0
UBRR	=0x09
;
ACSR	=0x08
 ACD	=7
 ACO 	=5
 ACI 	=4
 ACIE	=3
 ACIC	=2
 ACIS1	=1
 ACIS0	=0
;
ADMUX	=0x07
 MUX2	=2
 MUX1	=1
 MUX0	=0
ADCSR	=0x06
 ADEN	=7
 ADSC	=6
 ADIF	=4
 ADIE	=3
 ADPS2	=2
 ADPS1	=1
 ADPS0	=0
ADCH	=0x05
ADCL	=0x04
ADC		=0x04	; 16 bit base address
;
PORTE	=0x03
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
DDRE	=0x02
 DDE7	=7
 DDE6	=6
 DDE5	=5
 DDE4	=4
 DDE3	=3
 DDE2	=2
 DDE1	=1
 DDE0	=0
PINE	=0x01
 PINE7	=7
 PINE6	=6
 PINE5	=5
 PINE4	=4
 PINE3	=3
 PINE2	=2
 PINE1	=1
 PINE0	=0
PINF	=0x00
 PINF7	=7
 PINF6	=6
 PINF5	=5
 PINF4	=4
 PINF3	=3
 PINF2	=2
 PINF1	=1
 PINF0	=0
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
  jmp	EXT_INT3
  jmp	EXT_INT4
  jmp	EXT_INT5
  jmp	EXT_INT6
  jmp	EXT_INT7
  jmp	TIM2_COMP
  jmp	TIM2_OVF
  jmp	TIM1_CAPT
  jmp	TIM1_COMPA
  jmp	TIM1_COMPB
  jmp	TIM1_OVF
  jmp	TIM0_COMP
  jmp	TIM0_OVF
  jmp	SPI_STC
  jmp	UART_RXC
  jmp	UART_DRE
  jmp	UART_TXC
  jmp	ADC
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
.macro set_vector_INT3
 .area vector (abs)
 .org	16
  jmp	@0
 .area text
.endmacro
.macro set_vector_INT4
 .area vector (abs)
 .org	20
  jmp	@0
 .area text
.endmacro
.macro set_vector_INT5
 .area vector (abs)
 .org	24
  jmp	@0
 .area text
.endmacro
.macro set_vector_INT6
 .area vector (abs)
 .org	28
  jmp	@0
 .area text
.endmacro
.macro set_vector_INT7
 .area vector (abs)
 .org	32
  jmp	@0
 .area text
.endmacro
.macro set_vector_TIMER2_COMP
 .area vector (abs)
 .org	36
  jmp	@0
 .area text
.endmacro
.macro set_vector_TIMER2_OVF
 .area vector (abs)
 .org	40
  jmp	@0
 .area text
.endmacro
.macro set_vector_TIMER1_CAPT
 .area vector (abs)
 .org	44
  jmp	@0
 .area text
.endmacro
.macro set_vector_TIMER1_COMPA
 .area vector (abs)
 .org	48
  jmp	@0
 .area text
.endmacro
.macro set_vector_TIMER1_COMPB
 .area vector (abs)
 .org	52
  jmp	@0
 .area text
.endmacro
.macro set_vector_TIMER1_OVF
 .area vector (abs)
 .org	56
  jmp	@0
 .area text
.endmacro
.macro set_vector_TIMER0_COMP
 .area vector (abs)
 .org	60
  jmp	@0
 .area text
.endmacro
.macro set_vector_TIMER0_OVF
 .area vector (abs)
 .org	64
  jmp	@0
 .area text
.endmacro
.macro set_vector_SPI_STC
 .area vector (abs)
 .org	68
  jmp	@0
 .area text
.endmacro
.macro set_vector_UART_RX
 .area vector (abs)
 .org	72
  jmp	@0
 .area text
.endmacro
.macro set_vector_UART_RXC
 .area vector (abs)
 .org	72
  jmp	@0
 .area text
.endmacro
.macro set_vector_UART_DRE
 .area vector (abs)
 .org	76
  jmp	@0
 .area text
.endmacro
.macro set_vector_UART_UDRE
 .area vector (abs)
 .org	76
  jmp	@0
 .area text
.endmacro
.macro set_vector_UART_TX
 .area vector (abs)
 .org	80
  jmp	@0
 .area text
.endmacro
.macro set_vector_UART_TXC
 .area vector (abs)
 .org	80
  jmp	@0
 .area text
.endmacro
.macro set_vector_ADC
 .area vector (abs)
 .org	84
  jmp	@0
 .area text
.endmacro
.macro set_vector_EE_RDY
 .area vector (abs)
 .org	88
  jmp	@0
 .area text
.endmacro
.macro set_vector_EE_READY
 .area vector (abs)
 .org	88
  jmp	@0
 .area text
.endmacro
.macro set_vector_ANA_COMP
 .area vector (abs)
 .org	92
  jmp	@0
 .area text
.endmacro
.macro set_vector_ANALOG_COMP
 .area vector (abs)
 .org	92
  jmp	@0
 .area text
.endmacro
;-------------------------------------------------
;<eof>
