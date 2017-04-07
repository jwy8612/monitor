;-------------------------------------------------
; ICCAVR asm header file
; target = AT90S2343
; ja 12/11/2001
;
; creation of int vectors is supported by macros:
; - "set_vector_table"
;   makes whole vector table with original labels
; - "set_vector_<original label>"
;   makes single vector with label by argument
;   e.g.
;    set_vector_EXT_INT0 react_on_INT0
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
SPL		=0x3d
SP		=0x3d	; byte address
;
GIMSK	=0x3b
 INT0	=6
GIFR	=0x3a
 INTF0	=6
;
TIMSK	=0x39
 TOIE0	=1
TIFR	=0x38
 TOV0	=1
;
MCUCR	=0x35
 SE  	=5
 SM  	=4
 ISC01	=1
 ISC00	=0
;
TCCR0	=0x33
 CS02	=2
 CS01	=1
 CS00	=0
TCNT0	=0x32
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
 EEMWE	=2
 EEWE	=1
 EERE	=0
;
PORTB	=0x18
 PORTB4	=4
 PORTB3	=3
 PORTB2	=2
 PORTB1	=1
 PORTB0	=0
 PB4	=4
 PB3	=3
 PB2	=2
 PB1	=1
 PB0	=0
DDRB	=0x17
 DDB4	=4
 DDB3	=3
 DDB2	=2
 DDB1	=1
 DDB0	=0
PINB	=0x16
 PINB4	=4
 PINB3	=3
 PINB2	=2
 PINB1	=1
 PINB0	=0
;
;-------------------------------------------------
; useful memory definitions
;
RAMEND  =0xDF	;Last On-Chip SRAM Location
E2END	=0x7F	;Last On-Chip EEPROM Location
FLASHEND=0x7FF	;Last On-Chip Flash Location
;
;-------------------------------------------------
.macro set_vector_table
 .area vector (abs)
 .org	2
  rjmp	EXT_INT0
  rjmp	TIM0_OVF
 .area text
.endmacro
;
.macro set_vector_INT0
 .area vector (abs)
 .org	2
  rjmp	@0
 .area text
.endmacro
.macro set_vector_TIMER0_OVF
 .area vector (abs)
 .org	4
  rjmp	@0
 .area text
.endmacro
.macro set_vector_TIMER0_OVF0
 .area vector (abs)
 .org	4
  rjmp	@0
 .area text
.endmacro
;-------------------------------------------------
;<eof>
