; iccavr asm header file for t44
; generated by maschag 0.8.7 on 04-15-2009
;-------------------------------------------------------------
;
; Memory info
FLASHEND                =0x0FFF
E2END                   =0x00FF
RAMSTART                =0x0060
RAMEND                  =0x015F
XRAMEND                 =0 ; Part has no external RAM interface
;
;-------------------------------------------------------------
;
; PRR
PRR                     =0x00
;
; DIDR
DIDR0                   =0x01
;
; ADC
ADCSRB                  =0x03
ADC                     =0x04
ADCL                    =0x04
ADCH                    =0x05
ADCSRA                  =0x06
ADMUX                   =0x07
;
; Analog Comp
ACSR                    =0x08
;
; Timer/Counter Interrupts 1
TIFR1                   =0x0B
TIMSK1                  =0x0C
;
; Universal Serial Interface
USICR                   =0x0D
USISR                   =0x0E
USIDR                   =0x0F
USIBR                   =0x10
;
; PCMSK
PCMSK0                  =0x12
PCMSK1                  =0x20
;
; GPIOR
GPIOR0                  =0x13
GPIOR1                  =0x14
GPIOR2                  =0x15
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
EEAR                    =0x1E
EEARL                   =0x1E
;
; Watchdog Timer Control Register
WDTCSR                  =0x21
;
; General Timer Counter Control Register
GTCCR                   =0x23
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
; CLKPR
CLKPR                   =0x26
;
; DWD Register
DWDR                    =0x27
;
; Timer/Counter 0
TCCR0A                  =0x30
TCNT0                   =0x32
TCCR0B                  =0x33
OCR0A                   =0x36
OCR0B                   =0x3C
;
; RC oscillator
OSCCAL                  =0x31
;
; MCU
MCUSR                   =0x34
MCUCR                   =0x35
;
; SPM
SPMCSR                  =0x37
;
; Timer/Counter Interrupts 0
TIFR0                   =0x38
TIMSK0                  =0x39
;
; General Interrupts
GIFR                    =0x3A
GIMSK                   =0x3B
;
; Stack Pointer
SP                      =0x3D
SPL                     =0x3D
SPH                     =0x3E
;
; Status REGister
SREG                    =0x3F
;
; General Interrupt registers
INT0                    =6
PCIE1                   =5
PCIE0                   =4
INTF0                   =6
PCIF1                   =5
PCIF0                   =4
;
; Timer/Counter Interrupt registers
ICIE1                   =5
OCIE1B                  =2
OCIE1A                  =1
TOIE1                   =0
ICF1                    =5
OCF1B                   =2
OCF1A                   =1
TOV1                    =0
OCIE0B                  =2
OCIE0A                  =1
TOIE0                   =0
OCF0B                   =2
OCF0A                   =1
TOV0                    =0
;
; SPM Control Status Register
RSIG                    =5
CTPB                    =4
RFLB                    =3
PGWRT                   =2
PGERS                   =1
SPMEN                   =0
;
; MCU general Control Register
BODS                    =7
PUD                     =6
SE                      =5
SM1                     =4
SM0                     =3
BODSE                   =2
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
FOC0A                   =7
FOC0B                   =6
WGM02                   =3
CS02                    =2
CS01                    =1
CS00                    =0
COM0A1                  =7
COM0A0                  =6
COM0B1                  =5
COM0B0                  =4
WGM01                   =1
WGM00                   =0
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
; GTCCR
TSM                     =7
PSR10                   =0
;
; CLKPR
CLKPCE                  =7
CLKPS3                  =3
CLKPS2                  =2
CLKPS1                  =1
CLKPS0                  =0
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
; PRR
PRTIM1                  =3
PRTIM0                  =2
PRUSI                   =1
PRADC                   =0
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
; PC mask bits
PCINT11                 =3
PCINT10                 =2
PCINT9                  =1
PCINT8                  =0
PCINT7                  =7
PCINT6                  =6
PCINT5                  =5
PCINT4                  =4
PCINT3                  =3
PCINT2                  =2
PCINT1                  =1
PCINT0                  =0
;
; Port A bits
PORTA7                  =7
PORTA6                  =6
PORTA5                  =5
PORTA4                  =4
PORTA3                  =3
PORTA2                  =2
PORTA1                  =1
PORTA0                  =0
PA7                     =7
PA6                     =6
PA5                     =5
PA4                     =4
PA3                     =3
PA2                     =2
PA1                     =1
PA0                     =0
DDA7                    =7
DDA6                    =6
DDA5                    =5
DDA4                    =4
DDA3                    =3
DDA2                    =2
DDA1                    =1
DDA0                    =0
PINA7                   =7
PINA6                   =6
PINA5                   =5
PINA4                   =4
PINA3                   =3
PINA2                   =2
PINA1                   =1
PINA0                   =0
;
; Port B bits
PORTB3                  =3
PORTB2                  =2
PORTB1                  =1
PORTB0                  =0
PB3                     =3
PB2                     =2
PB1                     =1
PB0                     =0
DDB3                    =3
DDB2                    =2
DDB1                    =1
DDB0                    =0
PINB3                   =3
PINB2                   =2
PINB1                   =1
PINB0                   =0
;
; DIDR
AIN1D                   =2
AIN0D                   =1
ADC7D                   =7
ADC6D                   =6
ADC5D                   =5
ADC4D                   =4
ADC3D                   =3
ADC2D                   =2
ADC1D                   =1
ADC0D                   =0
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
; Analog Digital Converter
REFS1                   =7
REFS0                   =6
MUX5                    =5
MUX4                    =4
MUX3                    =3
MUX2                    =2
MUX1                    =1
MUX0                    =0
ADEN                    =7
ADSC                    =6
ADATE                   =5
ADIF                    =4
ADIE                    =3
ADPS2                   =2
ADPS1                   =1
ADPS0                   =0
BIN                     =7
ACME                    =6
ADLAR                   =4
ADTS2                   =2
ADTS1                   =1
ADTS0                   =0
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
RSTDISBL                =7
DWEN                    =6
SPIEN                   =5
WDTON                   =4
EESAVE                  =3
BODLEVEL2               =2
BODLEVEL1               =1
BODLEVEL0               =0
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
.macro set_vector_PCINT0
 .area vector (abs)
 .org  0x04
  rjmp @0
 .area text
.endmacro
.macro set_vector_PCINT1
 .area vector (abs)
 .org  0x06
  rjmp @0
 .area text
.endmacro
.macro set_vector_WDT
 .area vector (abs)
 .org  0x08
  rjmp @0
 .area text
.endmacro
.macro set_vector_TIM1_CAPT
 .area vector (abs)
 .org  0x0A
  rjmp @0
 .area text
.endmacro
.macro set_vector_TIMER1_CAPT
 .area vector (abs)
 .org  0x0A
  rjmp @0
 .area text
.endmacro
.macro set_vector_TIM1_COMPA
 .area vector (abs)
 .org  0x0C
  rjmp @0
 .area text
.endmacro
.macro set_vector_TIMER1_COMPA
 .area vector (abs)
 .org  0x0C
  rjmp @0
 .area text
.endmacro
.macro set_vector_TIM1_COMPB
 .area vector (abs)
 .org  0x0E
  rjmp @0
 .area text
.endmacro
.macro set_vector_TIMER1_COMPB
 .area vector (abs)
 .org  0x0E
  rjmp @0
 .area text
.endmacro
.macro set_vector_TIM1_OVF
 .area vector (abs)
 .org  0x10
  rjmp @0
 .area text
.endmacro
.macro set_vector_TIMER1_OVF
 .area vector (abs)
 .org  0x10
  rjmp @0
 .area text
.endmacro
.macro set_vector_TIM0_COMPA
 .area vector (abs)
 .org  0x12
  rjmp @0
 .area text
.endmacro
.macro set_vector_TIMER0_COMPA
 .area vector (abs)
 .org  0x12
  rjmp @0
 .area text
.endmacro
.macro set_vector_TIM0_COMPB
 .area vector (abs)
 .org  0x14
  rjmp @0
 .area text
.endmacro
.macro set_vector_TIMER0_COMPB
 .area vector (abs)
 .org  0x14
  rjmp @0
 .area text
.endmacro
.macro set_vector_TIM0_OVF
 .area vector (abs)
 .org  0x16
  rjmp @0
 .area text
.endmacro
.macro set_vector_TIMER0_OVF
 .area vector (abs)
 .org  0x16
  rjmp @0
 .area text
.endmacro
.macro set_vector_ANA_COMP
 .area vector (abs)
 .org  0x18
  rjmp @0
 .area text
.endmacro
.macro set_vector_ADC
 .area vector (abs)
 .org  0x1A
  rjmp @0
 .area text
.endmacro
.macro set_vector_EE_RDY
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
.macro set_vector_USI_STRT
 .area vector (abs)
 .org  0x1E
  rjmp @0
 .area text
.endmacro
.macro set_vector_USI_OVF
 .area vector (abs)
 .org  0x20
  rjmp @0
 .area text
.endmacro
;------
;<eof>
