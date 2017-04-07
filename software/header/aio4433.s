;-------------------------------------------------
; ICCAVR asm header file
; target = AT90S4433
; ja 12/11/2001
;
; creation of int vectors is supported by macros:
; - "set_vector_table"
;   makes whole vector table with original labels
; - "set_vector_<original label>"
;   makes single vector with label by argument
;   e.g.
;    set_vector_INT0 react_on_INT0
;   results in code
;    .org 2
;    rjmp  react_on_INT0
;
; macros leave with area set to text.
;-------------------------------------------------
;
; predefined spi bits
;
 SCK	=5
 MISO	=4
 MOSI	=3
 SS		=2
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
SPL		=0x3d
SP		=0x3d	; byte address
;
GIMSK	=0x3b
 INT1	=7
 INT0	=6
GIFR	=0x3a
 INTF1	=7
 INTF0	=6
;
TIMSK	=0x39
 TOIE1	=7
 OCIE1	=6
 TICIE1	=3
 TOIE0	=1
TIFR	=0x38
 TOV1	=7
 OCF1	=6
 ICF1	=3
 TOV0	=1
;
MCUCR	=0x35
 SE  	=5
 SM  	=4
 ISC11	=3
 ISC10	=2
 ISC01	=1
 ISC00	=0
MCUSR	=0x34
 WDRF	=3
 BORF	=2
 EXTRF	=1
 PORF	=0
;
TCCR0	=0x33
 CS02	=2
 CS01	=1
 CS00	=0
TCNT0	=0x32
;
TCCR1A	=0x2f
 COM11	=7
 COM10	=6
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
OCR1H	=0x2b
OCR1L	=0x2a
OCR1	=0x2a	; 16 bit base address
ICR1H	=0x27
ICR1L	=0x26
ICR1	=0x26	; 16 bit base address
;
WDTCR	=0x21
 WDTOE	=4
 WDE 	=3
 WDP2	=2
 WDP1	=1
 WDP0	=0
;
EEAR	=0x1e	; byte address
EEDR	=0x1d
EECR	=0x1c
 EERIE	=3
 EEMWE	=2
 EEWE	=1
 EERE	=0
;
PORTB	=0x18
 PORTB5	=5
 PORTB4	=4
 PORTB3	=3
 PORTB2	=2
 PORTB1	=1
 PORTB0	=0
 PB5	=5
 PB4	=4
 PB3	=3
 PB2	=2
 PB1	=1
 PB0	=0
DDRB	=0x17
 DDB5	=5
 DDB4	=4
 DDB3	=3
 DDB2	=2
 DDB1	=1
 DDB0	=0
PINB	=0x16
 PINB5	=5
 PINB4	=4
 PINB3	=3
 PINB2	=2
 PINB1	=1
 PINB0	=0
PORTC	=0x15
 PORTC5	=5
 PORTC4	=4
 PORTC3	=3
 PORTC2	=2
 PORTC1	=1
 PORTC0	=0
 PC5	=5
 PC4	=4
 PC3	=3
 PC2	=2
 PC1	=1
 PC0	=0
DDRC	=0x14
 DDC5	=5
 DDC4	=4
 DDC3	=3
 DDC2	=2
 DDC1	=1
 DDC0	=0
PINC	=0x13
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
UCSRA	=0x0b
 RXC	=7
 TXC	=6
 UDRE	=5
 FE		=4
 OR		=3		; original bit name
 DOR	=3		; bit name used in C header
 OVR	=3		; bit name used in C header
UCSRB	=0x0a
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
 AINBG	=6
 ACBG	=6
 ACO 	=5
 ACI 	=4
 ACIE	=3
 ACIC	=2
 ACIS1	=1
 ACIS0	=0
;
ADMUX	=0x07
 ADCBG	=6
 MUX2	=2
 MUX1	=1
 MUX0	=0
ADCSR	=0x06
 ADEN	=7
 ADSC	=6
 ADFR	=5
 ADIF	=4
 ADIE	=3
 ADPS2	=2
 ADPS1	=1
 ADPS0	=0
ADCH	=0x05
ADCL	=0x04
ADC		=0x04	; 16 bit base address
;
UBRRHI	=0x03
;
;-------------------------------------------------
; useful memory definitions
;
RAMEND  =0xDF	;Last On-Chip SRAM Location
E2END	=0xFF	;Last On-Chip EEPROM Location
FLASHEND=0xFFF	;Last On-Chip Flash Location
;
;-------------------------------------------------
.macro set_vector_table
 .area vector (abs)
 .org	2
  rjmp	EXT_INT0
  rjmp	EXT_INT1
  rjmp	TIM1_CAPT
  rjmp	TIM1_COMP
  rjmp	TIM1_OVF
  rjmp	TIM0_OVF
  rjmp	SPI_STC
  rjmp	UART_RXC
  rjmp	UART_DRE
  rjmp	UART_TXC
  rjmp	ADC
  rjmp	EE_RDY
  rjmp	ANA_COMP
 .area text
.endmacro
;
.macro set_vector_INT0
 .area vector (abs)
 .org	2
  rjmp	@0
 .area text
.endmacro
.macro set_vector_INT1
 .area vector (abs)
 .org	4
  rjmp	@0
 .area text
.endmacro
.macro set_vector_TIMER1_CAPT
 .area vector (abs)
 .org	6
  rjmp	@0
 .area text
.endmacro
.macro set_vector_TIMER1_COMP
 .area vector (abs)
 .org	8
  rjmp	@0
 .area text
.endmacro
.macro set_vector_TIMER1_OVF
 .area vector (abs)
 .org	10
  rjmp	@0
 .area text
.endmacro
.macro set_vector_TIMER0_OVF
 .area vector (abs)
 .org	12
  rjmp	@0
 .area text
.endmacro
.macro set_vector_SPI_STC
 .area vector (abs)
 .org	14
  rjmp	@0
 .area text
.endmacro
.macro set_vector_UART_RX
 .area vector (abs)
 .org	16
  rjmp	@0
 .area text
.endmacro
.macro set_vector_UART_RXC
 .area vector (abs)
 .org	16
  rjmp	@0
 .area text
.endmacro
.macro set_vector_UART_DRE
 .area vector (abs)
 .org	18
  rjmp	@0
 .area text
.endmacro
.macro set_vector_UART_UDRE
 .area vector (abs)
 .org	18
  rjmp	@0
 .area text
.endmacro
.macro set_vector_UART_TX
 .area vector (abs)
 .org	20
  rjmp	@0
 .area text
.endmacro
.macro set_vector_UART_TXC
 .area vector (abs)
 .org	20
  rjmp	@0
 .area text
.endmacro
.macro set_vector_ADC
 .area vector (abs)
 .org	22
  rjmp	@0
 .area text
.endmacro
.macro set_vector_EE_RDY
 .area vector (abs)
 .org	24
  rjmp	@0
 .area text
.endmacro
.macro set_vector_EE_READY
 .area vector (abs)
 .org	24
  rjmp	@0
 .area text
.endmacro
.macro set_vector_ANA_COMP
 .area vector (abs)
 .org	26
  rjmp	@0
 .area text
.endmacro
.macro set_vector_ANALOG_COMP
 .area vector (abs)
 .org	26
  rjmp	@0
 .area text
.endmacro
;-------------------------------------------------
;<eof>
