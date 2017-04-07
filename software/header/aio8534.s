;-------------------------------------------------
; ICCAVR asm header file
; target = AT90S8534
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
GIFR	=0x3a
 INTF1	=7
 INTF0	=6
;
TIMSK	=0x39
 TOIE1	=2
 TOIE0	=0
TIFR	=0x38
 TOV1	=2
 TOV0	=0
;
MCUCR	=0x35
 SE  	=6
 SM  	=5
 ISC1	=2
 ISC0	=0
;
TCCR0	=0x33
 CS02	=2
 CS01	=1
 CS00	=0
TCNT0	=0x32
;
TCCR1	=0x2e
 CS12	=2
 CS11	=1
 CS10	=0
TCNT1H	=0x2d
TCNT1L	=0x2c
TCNT1	=0x2c	; 16 bit base address
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
 PORTA6	=6
 PORTA5	=5
 PORTA4	=4
 PORTA3	=3
 PORTA2	=2
 PORTA1	=1
 PORTA0	=0
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
;
GIPR	=0x10
 IPIN1	=3
 IPIN0	=2
;
ADMUX	=0x07
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
;-------------------------------------------------
; useful memory definitions
;
RAMEND  =0x15F	;Last On-Chip SRAM Location
E2END	=0x1FF	;Last On-Chip EEPROM Location
FLASHEND=0x1FFF	;Last On-Chip Flash Location
;
;-------------------------------------------------
.macro set_vector_table
 .area vector (abs)
 .org	2
  rjmp	EXT_INT0
  rjmp	EXT_INT1
  rjmp	TIM1_OVF
  rjmp	TIM0_OVF
  rjmp	ADC
  rjmp	EE_RDY
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
.macro set_vector_TIMER1_OVF
 .area vector (abs)
 .org	6
  rjmp	@0
 .area text
.endmacro
.macro set_vector_TIMER0_OVF
 .area vector (abs)
 .org	8
  rjmp	@0
 .area text
.endmacro
.macro set_vector_ADC
 .area vector (abs)
 .org	10
  rjmp	@0
 .area text
.endmacro
.macro set_vector_EE_RDY
 .area vector (abs)
 .org	12
  rjmp	@0
 .area text
.endmacro
.macro set_vector_EE_READY
 .area vector (abs)
 .org	12
  rjmp	@0
 .area text
.endmacro
;-------------------------------------------------
;<eof>
