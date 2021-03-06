;-------------------------------------------------
; ICCAVR asm header file
; target = AT43USB320A
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
;-------------------------------------------------
; USB register definitions
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
UIER	=0x1ff3
 SOF_IE	=7
 EOF2_IE =6
 EOF1_IE =5
 HEP1_IE =4
 HEP0_IE =3
 FEP2_IE =2
 FEP1_IE =1
 FEP0_IE =0
UIAR	=0x1ff5
 SOF_INTA =7
 EOF2_INTA =6
 EOF1_INTA =5
 HEP1_INTA =4
 HEP0_INTA =3
 FEP2_INTA =2
 FEP1_INTA =1
 FEP0_INTA =0
;
HADDR	=0x1fef
 SAEN	=7
FADDR	=0x1fee
 FEN	=7
;
FRM_NUM_L	=0x1ffc
FRM_NUM_H	=0x1ffd
 SOF_OK	=7
;
HENDP0_CNTR	=0x1fe7
HENDP1_CNTR	=0x1fe6
FENDP0_CNTR	=0x1fe5
FENDP1_CNTR	=0x1fe4
FENDP2_CNTR	=0x1fe3
 EPEDS	=7
 DTGLE	=3
 EPDIR	=2
 EPTYPE1 =1
 EPTYPE0 =0
;
HDR0	=0x1fd7
HDR1	=0x1fd6
FDR0	=0x1fd5
FDR1	=0x1fd4
FDR2	=0x1fd3
;
HBYTE_CNT0	=0x1fcf
FBYTE_CNT0	=0x1fcd
FBYTE_CNT1	=0x1fcc
FBYTE_CNT2	=0x1fcb
;
HCSR0	=0x1fdf
HCSR1	=0x1fde
FCSR0	=0x1fdd
FCSR1	=0x1fdc
FCSR2	=0x1fdb
 STALL_SENT =3
 RX_SETUP =2
 RX_OUT_PACKET =1
 TX_COMPLETE =0
;
HCAR0	=0x1fa7
HCAR1	=0x1fa6
FCAR0	=0x1fa5
FCAR1	=0x1fa4
FCAR2	=0x1fa3
 CTL_DIR =7
 DIR	=7
 DATA_END =6
 FORCE_STALL =5
 TX_PACKET_RDY =4
 CSRACK3 =3
 CSRACK2 =2
 CSRACK1 =1
 CSRACK0 =0
;
GLB_STATE	=0x1ffb
 OVC_MODE =7
 SW_PWR	=6
 PWR_MODE =5
 RMWUPE	=2
 CONFG	=1
 HADD_EN =0
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
HPSTAT1	=0x1fb8
HPSTAT2	=0x1fb9
HPSTAT3	=0x1fba
HPSTAT4	=0x1fbb
HPSTAT5	=0x1fbc
 LSP	=6
 PPSTAT	=5
 PRSTAT	=4
 POCI	=3
 PSSTAT	=2
 PESTAT	=1
 PCSTAT	=0
;
PSTATE1	=0x1fa8
PSTATE2	=0x1fa9
PSTATE3	=0x1faa
PSTATE4	=0x1fab
PSTATE5	=0x1fac
 DPSTATE =1
 DMSTATE =1
;
HPSTCH1	=0x1fb0
HPSTCH2	=0x1fb1
HPSTCH3	=0x1fb2
HPSTCH4	=0x1fb3
HPSTCH5	=0x1fb4
 RSTSC	=4
 POCIC	=3
 PSSC	=2
 PESC	=1
 PCSC	=0
;
SPRSR	=0x1ffa
 FRWUP	=2
 RSM	=1
 GLB_SUSP =0
SPRSIE	=0x1ff9
 FRWUP_IE =2
 RSM_IE	=1
 GLB_SUSP_IE =0
;
;-------------------------------------------------
; useful memory definitions
;
RAMEND  =0x25F	;Last On-Chip SRAM Location
XRAMEND =0x25F	;Last SRAM Location
;E2END	=0x0	;Last EEPROM Location (none)
FLASHEND=0xFFFF	;Last Flash Location (off chip)
;
;-------------------------------------------------
.macro set_vector_table
 .area vector (abs)
 .org	2
  rjmp	USB_SUS_RES
  rjmp	EXT_INT1
  rjmp	TIM1_CAPT
  rjmp	TIM1_COMPA
  rjmp	TIM1_COMPB
  rjmp	TIM1_OVF
  rjmp	TIM0_OVF
  rjmp	SPI_STC
  rjmp	UART_RXC
  rjmp	UART_DRE
  rjmp	UART_TXC
  rjmp	USB_HW
 .area text
.endmacro
;
.macro set_vector_USB_SUS_RES
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
.macro set_vector_TIMER1_COMPA
 .area vector (abs)
 .org	8
  rjmp	@0
 .area text
.endmacro
.macro set_vector_TIMER1_COMPB
 .area vector (abs)
 .org	10
  rjmp	@0
 .area text
.endmacro
.macro set_vector_TIMER1_OVF
 .area vector (abs)
 .org	12
  rjmp	@0
 .area text
.endmacro
.macro set_vector_TIMER0_OVF
 .area vector (abs)
 .org	14
  rjmp	@0
 .area text
.endmacro
.macro set_vector_SPI_STC
 .area vector (abs)
 .org	16
  rjmp	@0
 .area text
.endmacro
.macro set_vector_UART_RX
 .area vector (abs)
 .org	18
  rjmp	@0
 .area text
.endmacro
.macro set_vector_UART_RXC
 .area vector (abs)
 .org	18
  rjmp	@0
 .area text
.endmacro
.macro set_vector_UART_DRE
 .area vector (abs)
 .org	20
  rjmp	@0
 .area text
.endmacro
.macro set_vector_UART_UDRE
 .area vector (abs)
 .org	20
  rjmp	@0
 .area text
.endmacro
.macro set_vector_UART_TX
 .area vector (abs)
 .org	22
  rjmp	@0
 .area text
.endmacro
.macro set_vector_UART_TXC
 .area vector (abs)
 .org	22
  rjmp	@0
 .area text
.endmacro
.macro set_vector_USB_HW
 .area vector (abs)
 .org	24
  rjmp	@0
 .area text
.endmacro
;-------------------------------------------------
;<eof>
