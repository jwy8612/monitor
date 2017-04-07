; icc7avr asm header file for t26
; converted from c iot26v.h at 2006/2/28
;---------------------------------------------------------------
;
; Some basic chip info
FLASHEND    =0x07FF
E2END       =0x07F
RAMSTART    =0x060
RAMEND      =0x0DF
XRAMEND     =0 ; No external RAM
;
;
; ADC
ADC         =0x04
ADCL        =0x04
ADCH        =0x05
ADCSR       =0x06
ADMUX       =0x07
ADCMUX      =0x07
;
; Analog Comp
ACSR        =0x08
;
; Universal Serial Interface
USICR       =0x0D
USISR       =0x0E
USIDR       =0x0F
;
; Port B
PINB        =0x16
DDRB        =0x17
PORTB       =0x18
;
; Port A
PINA        =0x19
DDRA        =0x1A
PORTA       =0x1B
;
; EEPROM
EECR        =0x1C
EEDR        =0x1D
EEARL       =0x1E
EEAR        =0x1E
;
; Watchdog Timer Control Register
WDTCR       =0x21
;
; PLL
PLLCSR      =0x29
;
; Timer/Counter 1
OCR1C       =0x2B
OCR1B       =0x2C
OCR1A       =0x2D
TCNT1       =0x2E
TCCR1B      =0x2F
TCCR1A      =0x30
;
; RC oscillator
OSCCAL      =0x31
;
; Timer/Counter 0
TCNT0       =0x32
TCCR0       =0x33
;
; MCU
MCUSR       =0x34
MCUCR       =0x35
;
; Timer/Counter Interrupts
TIFR        =0x38
TIMSK       =0x39
;
; General Interrupts
GIFR        =0x3A
GIMSK       =0x3B
;
; Stack Pointer
SP          =0x3D
SPL         =0x3D
;
; Status REGister
SREG        =0x3F
;
; General Interrupt registers
INT0        =6
PCIE1       =5
PCIE0       =4
INTF0       =6
PCIF        =5
;
; Timer/Counter Interrupt registers
OCIE1A      =6
OCIE1B      =5
TOIE1       =2
TOIE0       =1
OCF1A       =6
OCF1B       =5
TOV1        =2
TOV0        =1
;
; MCU general Control Register
PUD         =6
SE          =5
SM1         =4
SM0         =3
ISC01       =1
ISC00       =0
;
; MCU general Status Register
WDRF        =3
BORF        =2
EXTRF       =1
PORF        =0
;
; Timer/Counter 0 Control Register
PSR0        =3
CS02        =2
CS01        =1
CS00        =0
;
; Timer/Counter 1 Control Registers
COM1A1      =7
COM1A0      =6
COM1B1      =5
COM1B0      =4
FOC1A       =3
FOC1B       =2
PWM1A       =1
PWM1B       =0
CTC1        =7
PSR1        =6
CS13        =3
CS12        =2
CS11        =1
CS10        =0
;
; PLLCSR
PCKE        =2
PLLE        =1
PLOCK       =0
;
; Watchdog Timer Control Register
WDCE        =4
WDE         =3
WDP2        =2
WDP1        =1
WDP0        =0
;
; EEPROM Control Register
EERIE       =3
EEMWE       =2
EEWE        =1
EERE        =0
;
; Port A bits
PORTA7      =7
PORTA6      =6
PORTA5      =5
PORTA4      =4
PORTA3      =3
PORTA2      =2
PORTA1      =1
PORTA0      =0
PA7         =7
PA6         =6
PA5         =5
PA4         =4
PA3         =3
PA2         =2
PA1         =1
PA0         =0
DDA7        =7
DDA6        =6
DDA5        =5
DDA4        =4
DDA3        =3
DDA2        =2
DDA1        =1
DDA0        =0
PINA7       =7
PINA6       =6
PINA5       =5
PINA4       =4
PINA3       =3
PINA2       =2
PINA1       =1
PINA0       =0
;
; Port B bits
PORTB7      =7
PORTB6      =6
PORTB5      =5
PORTB4      =4
PORTB3      =3
PORTB2      =2
PORTB1      =1
PORTB0      =0
PB7         =7
PB6         =6
PB5         =5
PB4         =4
PB3         =3
PB2         =2
PB1         =1
PB0         =0
DDB7        =7
DDB6        =6
DDB5        =5
DDB4        =4
DDB3        =3
DDB2        =2
DDB1        =1
DDB0        =0
PINB7       =7
PINB6       =6
PINB5       =5
PINB4       =4
PINB3       =3
PINB2       =2
PINB1       =1
PINB0       =0
;
; Universal Serial Interface
USISIF      =7
USIOIF      =6
USIPF       =5
USIDC       =4
USICNT3     =3
USICNT2     =2
USICNT1     =1
USICNT0     =0
USISIE      =7
USIOIE      =6
USIWM1      =5
USIWM0      =4
USICS1      =3
USICS0      =2
USICLK      =1
USITC       =0
;
; Analog Comparator Control and Status Register
ACD         =7
ACBG        =6
ACO         =5
ACI         =4
ACIE        =3
ACME        =2
ACIS1       =1
ACIS0       =0
;
; Analog Digital Converter MUX Register
REFS1       =7
REFS0       =6
ADLAR       =5
MUX4        =4
MUX3        =3
MUX2        =2
MUX1        =1
MUX0        =0
;
; Analog Digital Converter Control/Status Register
ADEN        =7
ADSC        =6
ADFR        =5
ADIF        =4
ADIE        =3
ADPS2       =2
ADPS1       =1
ADPS0       =0
;
; Lock and Fuse Bits with LPM/SPM instructions
; lock bits 
LB2         =1
LB1         =0
;
; fuses low bits
PLLCK       =7
CKOPT       =6
SUT1        =5
SUT0        =4
CKSEL3      =3
CKSEL2      =2
CKSEL1      =1
CKSEL0      =0
;
; fuses high bits
RSTDISBL    =4
SPIEN       =3
EESAVE      =2
BODLEVEL    =1
BODEN       =0
;
;
; Interrupt Vectors
;
.macro set_vector_INT0
 .area vector (abs)
 .org  2
  rjmp @0
 .area text
.endmacro
.macro set_vector_EXT_INT0
 .area vector (abs)
 .org  2
  rjmp @0
 .area text
.endmacro
.macro set_vector_IO_PINS
 .area vector (abs)
 .org  4
  rjmp @0
 .area text
.endmacro
.macro set_vector_PIN_CHANGE
 .area vector (abs)
 .org  4
  rjmp @0
 .area text
.endmacro
.macro set_vector_PCINT0
 .area vector (abs)
 .org  4
  rjmp @0
 .area text
.endmacro
.macro set_vector_TIM1_COMPA
 .area vector (abs)
 .org  6
  rjmp @0
 .area text
.endmacro
.macro set_vector_TIM1_CMP1A
 .area vector (abs)
 .org  6
  rjmp @0
 .area text
.endmacro
.macro set_vector_TIMER1_CMPA
 .area vector (abs)
 .org  6
  rjmp @0
 .area text
.endmacro
.macro set_vector_TIMER1_COMPA
 .area vector (abs)
 .org  6
  rjmp @0
 .area text
.endmacro
.macro set_vector_TIM1_COMPB
 .area vector (abs)
 .org  8
  rjmp @0
 .area text
.endmacro
.macro set_vector_TIM1_CMP1B
 .area vector (abs)
 .org  8
  rjmp @0
 .area text
.endmacro
.macro set_vector_TIMER1_CMPB
 .area vector (abs)
 .org  8
  rjmp @0
 .area text
.endmacro
.macro set_vector_TIMER1_COMPB
 .area vector (abs)
 .org  8
  rjmp @0
 .area text
.endmacro
.macro set_vector_TIM1_OVF
 .area vector (abs)
 .org  10
  rjmp @0
 .area text
.endmacro
.macro set_vector_TIMER1_OVF1
 .area vector (abs)
 .org  10
  rjmp @0
 .area text
.endmacro
.macro set_vector_TIMER1_OVF
 .area vector (abs)
 .org  10
  rjmp @0
 .area text
.endmacro
.macro set_vector_TIM0_OVF
 .area vector (abs)
 .org  12
  rjmp @0
 .area text
.endmacro
.macro set_vector_TIMER0_OVF0
 .area vector (abs)
 .org  12
  rjmp @0
 .area text
.endmacro
.macro set_vector_TIMER0_OVF
 .area vector (abs)
 .org  12
  rjmp @0
 .area text
.endmacro
.macro set_vector_USI_STRT
 .area vector (abs)
 .org  14
  rjmp @0
 .area text
.endmacro
.macro set_vector_USI_START
 .area vector (abs)
 .org  14
  rjmp @0
 .area text
.endmacro
.macro set_vector_USI_OVF
 .area vector (abs)
 .org  16
  rjmp @0
 .area text
.endmacro
.macro set_vector_EE_RDY
 .area vector (abs)
 .org  18
  rjmp @0
 .area text
.endmacro
.macro set_vector_ANA_COMP
 .area vector (abs)
 .org  20
  rjmp @0
 .area text
.endmacro
.macro set_vector_ADC
 .area vector (abs)
 .org  22
  rjmp @0
 .area text
.endmacro
;
;---------
;<eof>
