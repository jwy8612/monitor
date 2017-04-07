;-------------------------------------------------
; ICCAVR asm header file
; target = AT43USB355
; ja 2002/07/03
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
; AVR io register definitions
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
 TOIE1	=7
 OCIE1A	=6
 OCIE1B	=5
 TICIE1	=3
 TOIE0	=1
TIFR	=0x38
 TOV1	=7
 OCF1A	=6
 OCF1B	=5
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
;
TCCR0	=0x33
 CS02	=2
 CS01	=1
 CS00	=0
TCNT0	=0x32
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
ICR1H	=0x25
ICR1L	=0x24
ICR1	=0x24	; 16 bit base address
;
WDTCR	=0x21
 WDTOE	=4
 WDE 	=3
 WDP2	=2
 WDP1	=1
 WDP0	=0
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
PORTF	=0x06
 PORTF3	=3
 PORTF2	=2
 PORTF1	=1
 PF3	=3
 PF2	=2
 PF1	=1
DDRF	=0x05
 DDF3	=3
 DDF2	=2
 DDF1	=1
PINF	=0x10
 PINF3	=3
 PINF2	=2
 PINF1	=1
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
ADC 	=0x02
ADCL	=0x02
ADCH	=0x03
ADCSR	=0x07
 ADEN	=7
 ADSC	=6
 ADFR	=5
 ADIF	=4
 ADIE	=3
 ADPS2	=2
 ADPS1	=1
 ADPS0	=0
ADMUX	=0x08
 MUX3	=3
 MUX2	=2
 MUX1	=1
 MUX0	=0
;
;-------------------------------------------------
; USB register definitions
;
FRM_NUM_H	=0x1ffd
 SOF_OK	=7
FRM_NUM_L	=0x1ffc
;
GLB_STATE	=0x1ffb
 SUSP_FLG =4
 RESUME_FLG =3
 RMWUPE	=2
 CONFG	=1
 HADD_EN =0
;
SPRSR	=0x1ffa
 FRWUP	=2
 RSM	=1
 GLB_SUSP =0
SPRSIE	=0x1ff9
 FRWUP_IE =2
 RSM_IE	=1
 GLB_SUSP_IE =0
SPRSMSK	=0x1ff8
 FRWUP_MSK =2
 RSM_MSK =1
 GLB_SUSP_MSK =0
;
UISR	=0x1ff7
 SOF_INT =7
 EOF2_INT =6
 EOF1_INT =5
 HEP1_INT =4
 HEP0_INT =3
 FEP2_INT =2
 FEP1_INT =1
 FEP0_INT =0
UIMSKR	=0x1ff6
 SOF_IMSK =7
 EOF2_IMSK =6
 EOF1_IMSK =5
 HEP1_IMSK =4
 HEP0_IMSK =3
 FEP2_IMSK =2
 FEP1_IMSK =1
 FEP0_IMSK =0
UIAR	=0x1ff5
 SOF_INTACK =7
 EOF2_INTACK =6
 EOF1_INTACK =5
 HEP1_INTACK =4
 HEP0_INTACK =3
 FEP2_INTACK =2
 FEP1_INTACK =1
 FEP0_INTACK =0
UIER	=0x1ff3
 SOF_IE	=7
 EOF2_IE =6
 EOF1_IE =5
 HEP1_IE =4
 HEP0_IE =3
 FEP2_IE =2
 FEP1_IE =1
 FEP0_IE =0
UOVCER	=0x1ff2
 PORT2	=2
;
HADDR	=0x1fef
 SAEN	=7
FADDR	=0x1fee
 FEN	=7
;
HENDP0_CNTR	=0x1fe7
FENDP0_CNTR	=0x1fe5
FENDP1_CNTR	=0x1fe4
FENDP2_CNTR	=0x1fe3
FENDP3_CNTR	=0x1fe2
 EPEN	=7
 DTGLE	=3
 EPDIR	=2
 EPTYPE1 =1
 EPTYPE0 =0
;
HCSR0	=0x1fdf
FCSR0	=0x1fdd
FCSR1	=0x1fdc
FCSR2	=0x1fdb
FCSR3	=0x1fda
 STALL_SENT =3
 RX_SETUP =2
 RX_OUT_PACKET =1
 TX_COMPLETE =0
;
HDR0	=0x1fd7
FDR0	=0x1fd5
FDR1	=0x1fd4
FDR2	=0x1fd3
FDR3	=0x1fd2
;
HBYTE_CNT0	=0x1fcf
FBYTE_CNT0	=0x1fcd
FBYTE_CNT1	=0x1fcc
FBYTE_CNT2	=0x1fcb
FBYTE_CNT3	=0x1fca
;
HSTR	=0x1fc7
 OVLSC	=3
 LPSC	=2
 OVI	=1
 LPS	=0
HPCON	=0x1fc5
 HPCON2	=6
 HPCON1	=5
 HPCON0	=4
 HPADD2	=2
 HPADD1	=1
 HPADD0	=0
;
HPSTAT3	=0x1fba
HPSTAT2	=0x1fb9
HPSTAT1	=0x1fb8
 LSP	=6
 PPSTAT	=5
 PRSTAT	=4
 POCI	=3
 PSSTAT	=2
 PESTAT	=1
 PCSTAT	=0
;
HPSCR3	=0x1fb2
HPSCR2	=0x1fb1
HPSCR1	=0x1fb0
 RSTSC	=4
 POCIC	=3
 PSSC	=2
 PESC	=1
 PCSC	=0
;
PSTATE3	=0x1faa
PSTATE2	=0x1fa9
;PSTATE1	=0x1fa8
 DPSTATE =1
 DMSTATE =1
;
HCAR0	=0x1fa7
FCAR0	=0x1fa5
FCAR1	=0x1fa4
FCAR2	=0x1fa3
FCAR3	=0x1fa2
 CTL_DIR =7
 DATA_END =6
 FORCE_STALL =5
 TX_PACKET_RDY =4
 STALL_SENT_ACK =3
 RX_SETUP_ACK =2
 RX_OUT_PACKET_ACK =1
 TX_COMPLETE_ACK =0
;
;-------------------------------------------------
; useful memory definitions
;
RAMEND  =0x45F	;Last On-Chip SRAM Location
XRAMEND =0x45F	;Last SRAM Location
;E2END	=0x0	;Last EEPROM Location (none)
FLASHEND=0x5FFF	;Last Flash Location (off chip)
;
;-------------------------------------------------
.macro set_vector_table
 .area vector (abs)
 .org	4
  jmp	USB_SUS_RES
  jmp	EXT_INT1
  jmp	TIM1_CAPT
  jmp	TIM1_COMPA
  jmp	TIM1_COMPB
  jmp	TIM1_OVF
  jmp	TIM0_OVF
  jmp	SPI_STC
  jmp	0
  jmp	0
  jmp	ADC
  jmp	USB_HW
 .area text
.endmacro
;
.macro set_vector_USB_SUS_RES
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
.macro set_vector_TIMER1_CAPT
 .area vector (abs)
 .org	12
  jmp	@0
 .area text
.endmacro
.macro set_vector_TIMER1_COMPA
 .area vector (abs)
 .org	16
  jmp	@0
 .area text
.endmacro
.macro set_vector_TIMER1_COMPB
 .area vector (abs)
 .org	20
  jmp	@0
 .area text
.endmacro
.macro set_vector_TIMER1_OVF
 .area vector (abs)
 .org	24
  jmp	@0
 .area text
.endmacro
.macro set_vector_TIMER0_OVF
 .area vector (abs)
 .org	28
  jmp	@0
 .area text
.endmacro
.macro set_vector_SPI_STC
 .area vector (abs)
 .org	32
  jmp	@0
 .area text
.endmacro
.macro set_vector_ADC
 .area vector (abs)
 .org	44
  jmp	@0
 .area text
.endmacro
.macro set_vector_USB_HW
 .area vector (abs)
 .org	48
  jmp	@0
 .area text
.endmacro
;-------------------------------------------------
;<eof>
