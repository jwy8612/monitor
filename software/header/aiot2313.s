; iccavr asm header file for t2313
; generated by maschag 0.8.7 on 04-15-2009
;-------------------------------------------------------------
;
; Memory info
FLASHEND                =0x07FF
E2END                   =0x007F
RAMSTART                =0x0060
RAMEND                  =0x00DF
XRAMEND                 =0 ; Part has no external RAM interface
;
;-------------------------------------------------------------
;
; DIDR
DIDR                    =0x01
;
; Analog Comp
ACSR                    =0x08
;
; USART
UBRRL                   =0x09
UBRR                    =0x09
UBRRH                   =0x02
UCSRC                   =0x03
UCSRB                   =0x0A
UCSRA                   =0x0B
UDR                     =0x0C
;
; Universal Serial Interface
USICR                   =0x0D
USISR                   =0x0E
USIDR                   =0x0F
;
; GPIORs
GPIOR0                  =0x13
GPIOR1                  =0x14
GPIOR2                  =0x15
;
; Port D
PIND                    =0x10
DDRD                    =0x11
PORTD                   =0x12
;
; Port B
PINB                    =0x16
DDRB                    =0x17
PORTB                   =0x18
;
; Port A
PINA                    =0x19
DDRA                    =0x1A
PORTA                   =0x1B
;
; EEPROM
EECR                    =0x1C
EEDR                    =0x1D
EEARL                   =0x1E
EEAR                    =0x1E
;
; Watchdog Timer Control Register
WDTCSR                  =0x21
WDTCR                   =0x21
;
; CLK Registers
CLKPR                   =0x26
OSCCAL                  =0x31
;
; SFIOR
SFIOR                   =0x23
;
; Timer/Counter 1
ICR1                    =0x24
ICR1L                   =0x24
ICR1H                   =0x25
OCR1B                   =0x28
OCR1BL                  =0x28
OCR1BH                  =0x29
OCR1A                   =0x2A
OCR1AL                  =0x2A
OCR1AH                  =0x2B
TCNT1                   =0x2C
TCNT1L                  =0x2C
TCNT1H                  =0x2D
TCCR1C                  =0x22
TCCR1B                  =0x2E
TCCR1A                  =0x2F
;
; Timer/Counter 0
TCNT0                   =0x32
TCCR0B                  =0x33
TCCR0A                  =0x30
OCR0A                   =0x36
OCR0B                   =0x3C
;
; MCU
MCUSR                   =0x34
MCUCR                   =0x35
;
; SPMCSR
SPMCSR                  =0x37
;
; Timer/Counter Interrupts
TIFR                    =0x38
TIMSK                   =0x39
;
; General Interrupts
PCMSK                   =0x20
EIFR                    =0x3A
GIMSK                   =0x3B
;
; Stack Pointer
SP                      =0x3D
SPL                     =0x3D
;
; Status REGister
SREG                    =0x3F
;
; General Interrupt registers
INT1                    =7
INT0                    =6
PCIE                    =5
INTF1                   =6
INTF0                   =6
PCIF                    =5
;
; Timer/Counter Interrupt registers
TOIE1                   =7
OCIE1A                  =6
OCIE1B                  =5
ICIE1                   =3
OCIE0B                  =2
TOIE0                   =1
OCIE0A                  =0
TOV1                    =7
OCF1A                   =6
OCF1B                   =5
ICF1                    =3
OCF0B                   =2
TOV0                    =1
OCF0A                   =0
;
; SPMCR
CTPB                    =4
RFLB                    =3
PGWRT                   =2
PGERS                   =1
SPMEN                   =0
;
; MCU general Control Register
PUD                     =7
SM1                     =6
SE                      =5
SM0                     =4
ISC11                   =3
ISC10                   =2
ISC01                   =1
ISC00                   =0
;
; MCU general Status Register
WDRF                    =3
BORF                    =2
EXTRF                   =1
PORF                    =0
;
; Timer/Counter 0 Control Register
COM0A1                  =7
COM0A0                  =6
COM0B1                  =5
COM0B0                  =4
WGM01                   =1
WGM00                   =0
FOC0A                   =7
FOC0B                   =6
WGM02                   =3
CS02                    =2
CS01                    =1
CS00                    =0
;
; Timer/Counter 1 Control Registers
COM1A1                  =7
COM1A0                  =6
COM1B1                  =5
COM1B0                  =4
WGM11                   =1
WGM10                   =0
ICNC1                   =7
ICES1                   =6
WGM13                   =4
WGM12                   =3
CS12                    =2
CS11                    =1
CS10                    =0
FOC1A                   =7
FOC1B                   =6
;
; CLKPR
CLKPCE                  =7
CLKPS3                  =3
CLKPS2                  =2
CLKPS1                  =1
CLKPS0                  =0
;
; SFIOR
PSR10                   =0
;
; Watchdog Timer Control Register
WDIF                    =7
WDIE                    =6
WDP3                    =5
WDCE                    =4
WDE                     =3
WDP2                    =2
WDP1                    =1
WDP0                    =0
;
; EEPROM Control Register
EEPM1                   =5
EEPM0                   =4
EERIE                   =3
EEMPE                   =2
EEMWE                   =2
EEPE                    =1
EEWE                    =1
EERE                    =0
;
; Port A bits
PORTA2                  =2
PORTA1                  =1
PORTA0                  =0
PA2                     =2
PA1                     =1
PA0                     =0
DDA2                    =2
DDA1                    =1
DDA0                    =0
PINA2                   =2
PINA1                   =1
PINA0                   =0
;
; Port B bits
PORTB7                  =7
PORTB6                  =6
PORTB5                  =5
PORTB4                  =4
PORTB3                  =3
PORTB2                  =2
PORTB1                  =1
PORTB0                  =0
PB7                     =7
PB6                     =6
PB5                     =5
PB4                     =4
PB3                     =3
PB2                     =2
PB1                     =1
PB0                     =0
DDB7                    =7
DDB6                    =6
DDB5                    =5
DDB4                    =4
DDB3                    =3
DDB2                    =2
DDB1                    =1
DDB0                    =0
PINB7                   =7
PINB6                   =6
PINB5                   =5
PINB4                   =4
PINB3                   =3
PINB2                   =2
PINB1                   =1
PINB0                   =0
;
; Port D bits
PORTD6                  =6
PORTD5                  =5
PORTD4                  =4
PORTD3                  =3
PORTD2                  =2
PORTD1                  =1
PORTD0                  =0
PD6                     =6
PD5                     =5
PD4                     =4
PD3                     =3
PD2                     =2
PD1                     =1
PD0                     =0
DDD6                    =6
DDD5                    =5
DDD4                    =4
DDD3                    =3
DDD2                    =2
DDD1                    =1
DDD0                    =0
PIND6                   =6
PIND5                   =5
PIND4                   =4
PIND3                   =3
PIND2                   =2
PIND1                   =1
PIND0                   =0
;
; PCMSK
PCINT7                  =7
PCINT6                  =6
PCINT5                  =5
PCINT4                  =4
PCINT3                  =3
PCINT2                  =2
PCINT1                  =1
PCINT0                  =0
;
; Universal Serial Interface
USISIF                  =7
USIOIF                  =6
USIPF                   =5
USIDC                   =4
USICNT3                 =3
USICNT2                 =2
USICNT1                 =1
USICNT0                 =0
USISIE                  =7
USIOIE                  =6
USIWM1                  =5
USIWM0                  =4
USICS1                  =3
USICS0                  =2
USICLK                  =1
USITC                   =0
;
; USART
RXC                     =7
TXC                     =6
UDRE                    =5
FE                      =4
DOR                     =3
OVR                     =3
UPE                     =2
PE                      =2
U2X                     =1
MPCM                    =0
RXCIE                   =7
TXCIE                   =6
UDRIE                   =5
RXEN                    =4
TXEN                    =3
UCSZ2                   =2
RXB8                    =1
TXB8                    =0
UMSEL                   =6
UPM1                    =5
UPM0                    =4
USBS                    =3
UCSZ1                   =2
UCSZ0                   =1
UCPOL                   =0
;
; Analog Comparator Control and Status Register
ACD                     =7
ACBG                    =6
ACO                     =5
ACI                     =4
ACIE                    =3
ACIC                    =2
ACIS1                   =1
ACIS0                   =0
;
; Digital Input Disable Register
AIN1D                   =1
AIN0D                   =0
;
; Lock and Fuse Bits with LPM/SPM instructions
;
; lock bits
LB2                     =1
LB1                     =0
;
; fuses low bits
CKDIV8                  =7
CKOUT                   =6
SUT1                    =5
SUT0                    =4
CKSEL3                  =3
CKSEL2                  =2
CKSEL1                  =1
CKSEL0                  =0
;
; fuses high bits
DWEN                    =7
EESAVE                  =6
SPIEN                   =5
WDTON                   =4
BODLEVEL2               =3
BODLEVEL1               =2
BODLEVEL0               =1
RSTDISBL                =0
;
; fuses extended bits
SELFPRGEN               =0
;
; ------------------------------------------------------------
;
; Interrupt Vector Macros
;
.macro set_vector_INT0
 .area vector (abs)
 .org  0x02
  rjmp @0
 .area text
.endmacro
.macro set_vector_EXT_INT0
 .area vector (abs)
 .org  0x02
  rjmp @0
 .area text
.endmacro
.macro set_vector_INT1
 .area vector (abs)
 .org  0x04
  rjmp @0
 .area text
.endmacro
.macro set_vector_EXT_INT1
 .area vector (abs)
 .org  0x04
  rjmp @0
 .area text
.endmacro
.macro set_vector_TIM1_CAPT
 .area vector (abs)
 .org  0x06
  rjmp @0
 .area text
.endmacro
.macro set_vector_TIMER1_CAPT
 .area vector (abs)
 .org  0x06
  rjmp @0
 .area text
.endmacro
.macro set_vector_TIM1_COMPA
 .area vector (abs)
 .org  0x08
  rjmp @0
 .area text
.endmacro
.macro set_vector_TIMER1_COMPA
 .area vector (abs)
 .org  0x08
  rjmp @0
 .area text
.endmacro
.macro set_vector_TIM1_OVF
 .area vector (abs)
 .org  0x0A
  rjmp @0
 .area text
.endmacro
.macro set_vector_TIMER1_OVF
 .area vector (abs)
 .org  0x0A
  rjmp @0
 .area text
.endmacro
.macro set_vector_TIM0_OVF
 .area vector (abs)
 .org  0x0C
  rjmp @0
 .area text
.endmacro
.macro set_vector_TIMER0_OVF
 .area vector (abs)
 .org  0x0C
  rjmp @0
 .area text
.endmacro
.macro set_vector_USART0_RXC
 .area vector (abs)
 .org  0x0E
  rjmp @0
 .area text
.endmacro
.macro set_vector_USART0_DRE
 .area vector (abs)
 .org  0x10
  rjmp @0
 .area text
.endmacro
.macro set_vector_USART0_TXC
 .area vector (abs)
 .org  0x12
  rjmp @0
 .area text
.endmacro
.macro set_vector_ANA_COMP
 .area vector (abs)
 .org  0x14
  rjmp @0
 .area text
.endmacro
.macro set_vector_PCINT
 .area vector (abs)
 .org  0x16
  rjmp @0
 .area text
.endmacro
.macro set_vector_PCINT0
 .area vector (abs)
 .org  0x16
  rjmp @0
 .area text
.endmacro
.macro set_vector_TIMER1_COMPB
 .area vector (abs)
 .org  0x18
  rjmp @0
 .area text
.endmacro
.macro set_vector_TIMER0_COMPA
 .area vector (abs)
 .org  0x1A
  rjmp @0
 .area text
.endmacro
.macro set_vector_TIMER0_COMPB
 .area vector (abs)
 .org  0x1C
  rjmp @0
 .area text
.endmacro
.macro set_vector_USI_START
 .area vector (abs)
 .org  0x1E
  rjmp @0
 .area text
.endmacro
.macro set_vector_USI_OVERFLOW
 .area vector (abs)
 .org  0x20
  rjmp @0
 .area text
.endmacro
.macro set_vector_USI_OVF
 .area vector (abs)
 .org  0x20
  rjmp @0
 .area text
.endmacro
.macro set_vector_EE_RDY
 .area vector (abs)
 .org  0x22
  rjmp @0
 .area text
.endmacro
.macro set_vector_EE_READY
 .area vector (abs)
 .org  0x22
  rjmp @0
 .area text
.endmacro
.macro set_vector_WDT_OVERFLOW
 .area vector (abs)
 .org  0x24
  rjmp @0
 .area text
.endmacro
.macro set_vector_WDT
 .area vector (abs)
 .org  0x24
  rjmp @0
 .area text
.endmacro
;------
;<eof>
