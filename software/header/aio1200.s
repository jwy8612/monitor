;-------------------------------------------------
; ICCtiny asm header file
; target = AT90S1200
; ja 01/01/2002
;
; creation of int vectors is supported by:
; - macro "set_vector_table <dummy_arg>"
;   makes whole vector table with original labels
; - iv_<original label>
;   to be used with .interrupt directive
;   e.g.
;   .interrupt "t0_handler", iv_TIMER0_OVF
;
; please note:
; - macro leave with area set to text.
; - macro need dummy argument or will not expand
; - .interrupt directive must not come before
;    definition of label used
; - .interrupt directive needs label be exported
;-------------------------------------------------
; io register definitions
;
.set SREG	= "0x3f"
;
.set GIMSK	= "0x3b"
 .set INT0	= "6"
.set TIMSK	= "0x39"
 .set TOIE0	= "1"
.set TIFR	= "0x38"
 .set TOV0	= "1"
;
.set MCUCR	= "0x35"
 .set SE	= "5"
 .set SM	= "4"
 .set ISC01	= "1"
 .set ISC00	= "0"
;
.set TCCR0	= "0x33"
 .set CS02	= "2"
 .set CS01	= "1"
 .set CS00	= "0"
.set TCNT0	= "0x32"
;
.set WDTCR	= "0x21"
 .set WDE	= "3"
 .set WDP2	= "2"
 .set WDP1	= "1"
 .set WDP0	= "0"
;
.set EEAR	= "0x1e"
.set EEDR	= "0x1d"
.set EECR	= "0x1c"
 .set EEWE	= "1"
 .set EERE	= "0"
;
.set PORTB	= "0x18"
 .set PORTB7 = "7"
 .set PORTB6 = "6"
 .set PORTB5 = "5"
 .set PORTB4 = "4"
 .set PORTB3 = "3"
 .set PORTB2 = "2"
 .set PORTB1 = "1"
 .set PORTB0 = "0"
 .set PB7	= "7"
 .set PB6	= "6"
 .set PB5	= "5"
 .set PB4	= "4"
 .set PB3	= "3"
 .set PB2	= "2"
 .set PB1	= "1"
 .set PB0	= "0"
.set DDRB	= "0x17"
 .set DDB7	= "7"
 .set DDB6	= "6"
 .set DDB5	= "5"
 .set DDB4	= "4"
 .set DDB3	= "3"
 .set DDB2	= "2"
 .set DDB1	= "1"
 .set DDB0	= "0"
.set PINB	= "0x16"
 .set PINB7	= "7"
 .set PINB6	= "6"
 .set PINB5	= "5"
 .set PINB4	= "4"
 .set PINB3	= "3"
 .set PINB2	= "2"
 .set PINB1	= "1"
 .set PINB0	= "0"
;
.set PORTD	= "0x12"
 .set PORTD6 = "6"
 .set PORTD5 = "5"
 .set PORTD4 = "4"
 .set PORTD3 = "3"
 .set PORTD2 = "2"
 .set PORTD1 = "1"
 .set PORTD0 = "0"
 .set PD6	= "6"
 .set PD5	= "5"
 .set PD4	= "4"
 .set PD3	= "3"
 .set PD2	= "2"
 .set PD1	= "1"
 .set PD0	= "0"
.set DDRD	= "0x11"
 .set DDD6	= "6"
 .set DDD5	= "5"
 .set DDD4	= "4"
 .set DDD3	= "3"
 .set DDD2	= "2"
 .set DDD1	= "1"
 .set DDD0	= "0"
.set PIND	= "0x10"
 .set PIND6	= "6"
 .set PIND5	= "5"
 .set PIND4	= "4"
 .set PIND3	= "3"
 .set PIND2	= "2"
 .set PIND1	= "1"
 .set PIND0	= "0"
;
.set ACSR	= "0x08"
 .set ACD	= "7"
 .set ACO	= "5"
 .set ACI	= "4"
 .set ACIE	= "3"
 .set ACIS1	= "1"
 .set ACIS0	= "0"
;-------------------------------------------------
; useful memory definitions
;
.set RAMEND  ="0x5F" ;Last On-Chip reg/io Location
.set E2END	 ="0x3F" ;Last On-Chip EEPROM Location
.set FLASHEND="0x3FF";Last On-Chip Flash Location
;-------------------------------------------------
.macro set_vector_table dummy
 .text
 .interrupt	"EXT_INT0",1
 .interrupt	"TIM0_OVF",2
 .interrupt	"ANA_COMP",3
.endm
;
.set iv_INT0 		= "1"
.set iv_TIMER0_OVF	= "2"
.set iv_TIMER0_OVF0	= "2"
.set iv_ANA_COMP	= "3"
.set iv_ANALOG_COMP	= "3"
;-------------------------------------------------
;<eof>
