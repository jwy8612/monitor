; iccavr asm header file for t48
; generated by maschag 0.8.7 on 04-29-2009
;-------------------------------------------------------------
;
; Memory info
FLASHEND                =0x0FFF
E2END                   =0x003F
RAMSTART                =0x0100
RAMEND                  =0x01FF
XRAMEND                 =0 ; Part has no external RAM interface
;
;-------------------------------------------------------------
;
; Port D
PIND                    =0x09  ; for IN/OUT, CBI/SBI, SBIC/SBIS
DDRD                    =0x0A  ; for IN/OUT, CBI/SBI, SBIC/SBIS
PORTD                   =0x0B  ; for IN/OUT, CBI/SBI, SBIC/SBIS
;
; Port C
PINC                    =0x06  ; for IN/OUT, CBI/SBI, SBIC/SBIS
DDRC                    =0x07  ; for IN/OUT, CBI/SBI, SBIC/SBIS
PORTC                   =0x08  ; for IN/OUT, CBI/SBI, SBIC/SBIS
;
; Port B
PINB                    =0x03  ; for IN/OUT, CBI/SBI, SBIC/SBIS
DDRB                    =0x04  ; for IN/OUT, CBI/SBI, SBIC/SBIS
PORTB                   =0x05  ; for IN/OUT, CBI/SBI, SBIC/SBIS
;
; Port A
PINA                    =0x0C  ; for IN/OUT, CBI/SBI, SBIC/SBIS
DDRA                    =0x0D  ; for IN/OUT, CBI/SBI, SBIC/SBIS
PORTA                   =0x0E  ; for IN/OUT, CBI/SBI, SBIC/SBIS
;
; Port Control Register
PORTCR                  =0x12  ; for IN/OUT, CBI/SBI, SBIC/SBIS
BBMD                    =7
BBMC                    =6
BBMB                    =5
BBMA                    =4
PUDD                    =3
PUDC                    =2
PUDB                    =1
PUDA                    =0
;
; External Interrupts
EIFR                    =0x1C  ; for IN/OUT, CBI/SBI, SBIC/SBIS
INTF1                   =1
INTF0                   =0
EIMSK                   =0x1D  ; for IN/OUT, CBI/SBI, SBIC/SBIS
INT1                    =1
INT0                    =0
;
; GPIO
GPIOR2                  =0x2B  ; for IN/OUT
GPIOR1                  =0x2A  ; for IN/OUT
GPIOR0                  =0x1E  ; for IN/OUT, CBI/SBI, SBIC/SBIS
;
; ADC
ADC                     =0x78  ; memory mapped, for LD/ST
ADCL                    =0x78  ; memory mapped, for LD/ST
ADCH                    =0x79  ; memory mapped, for LD/ST
ADCSRB                  =0x7B  ; memory mapped, for LD/ST
ACME                    =6
ADTS2                   =2
ADTS1                   =1
ADTS0                   =0
ADCSRA                  =0x7A  ; memory mapped, for LD/ST
ADEN                    =7
ADSC                    =6
ADRF                    =5
ADATE                   =5
ADIF                    =4
ADIE                    =3
ADPS2                   =2
ADPS1                   =1
ADPS0                   =0
ADMUX                   =0x7C  ; memory mapped, for LD/ST
REFS1                   =7
REFS0                   =6
ADLAR                   =5
MUX3                    =3
MUX2                    =2
MUX1                    =1
MUX0                    =0
;
; Analog Comparator Control and Status Register
ACSR                    =0x30  ; for IN/OUT
ACD                     =7
ACBG                    =6
ACO                     =5
ACI                     =4
ACIE                    =3
ACIC                    =2
ACIS1                   =1
ACIS0                   =0
;
; 2-wire SI
TWBR                    =0xB8  ; memory mapped, for LD/ST
TWSR                    =0xB9  ; memory mapped, for LD/ST
TWS7                    =7
TWS6                    =6
TWS5                    =5
TWS4                    =4
TWS3                    =3
TWPS1                   =1
TWPS0                   =0
TWAR                    =0xBA  ; memory mapped, for LD/ST
TWGCE                   =0
TWDR                    =0xBB  ; memory mapped, for LD/ST
TWCR                    =0xBC  ; memory mapped, for LD/ST
TWINT                   =7
TWEA                    =6
TWSTA                   =5
TWSTO                   =4
TWWC                    =3
TWEN                    =2
TWIE                    =0
TWAMR                   =0xBD  ; memory mapped, for LD/ST
TWAM6                   =7
TWAM5                   =6
TWAM4                   =5
TWAM3                   =4
TWAM2                   =3
TWAM1                   =2
TWAM0                   =1
TWHSR                   =0xBE  ; memory mapped, for LD/ST
TWIHS                   =0
;
; SPI
SPCR                    =0x2C  ; for IN/OUT
SPIE                    =7
SPE                     =6
DORD                    =5
MSTR                    =4
CPOL                    =3
CPHA                    =2
SPR1                    =1
SPR0                    =0
SPSR                    =0x2D  ; for IN/OUT
SPIF                    =7
WCOL                    =6
SPI2X                   =0
SPDR                    =0x2E  ; for IN/OUT
;
; EEPROM
EECR                    =0x1F  ; for IN/OUT, CBI/SBI, SBIC/SBIS
EEPM1                   =5
EEPM0                   =4
EERIE                   =3
EEMWE                   =2
EEMPE                   =2
EEWE                    =1
EEPE                    =1
EERE                    =0
EEDR                    =0x20  ; for IN/OUT, CBI/SBI, SBIC/SBIS
EEAR                    =0x21  ; for IN/OUT
EEARL                   =0x21  ; for IN/OUT
;
; high byte unused with m48, must be written 0
;
; DWDR
DWDR                    =0x31  ; for IN/OUT
;
; MCU
MCUSR                   =0x34  ; for IN/OUT
WDRF                    =3
BORF                    =2
EXTRF                   =1
PORF                    =0
MCUCR                   =0x35  ; for IN/OUT
BODS                    =6
BODSE                   =5
PUD                     =4
;
; SPM Control and Status Register
SPMCSR                  =0x37  ; for IN/OUT
RWWSB                   =6
CTPB                    =4
RFLB                    =3
PGWRT                   =2
PGERS                   =1
SPMEN                   =0
SELFPRGEN               =0
;
; SMCR
SMCR                    =0x33  ; for IN/OUT
SM1                     =2
SM0                     =1
SE                      =0
;
; Stack Pointer
SP                      =0x3D  ; for IN/OUT
SPL                     =0x3D  ; for IN/OUT
SPH                     =0x3E  ; for IN/OUT
;
; Status REGister
SREG                    =0x3F  ; for IN/OUT
;
; Watchdog Timer Control Register
WDTCSR                  =0x60  ; memory mapped, for LD/ST
WDTCR                   =0x60  ; memory mapped, for LD/ST
WDIF                    =7
WDIE                    =6
WDP3                    =5
WDCE                    =4
WDE                     =3
WDP2                    =2
WDP1                    =1
WDP0                    =0
;
; CLKPR
CLKPR                   =0x61  ; memory mapped, for LD/ST
CLKPCE                  =7
CLKPS3                  =3
CLKPS2                  =2
CLKPS1                  =1
CLKPS0                  =0
;
; PRR
PRR                     =0x64  ; memory mapped, for LD/ST
PRTWI                   =7
PRTIM1                  =3
PRTIM0                  =5
PRSPI                   =2
PRADC                   =0
;
; OSCCAL
OSCCAL                  =0x66  ; memory mapped, for LD/ST
;
; PCIFR
PCIFR                   =0x1B  ; for IN/OUT, CBI/SBI, SBIC/SBIS
PCIF3                   =3
PCIF2                   =2
PCIF1                   =1
PCIF0                   =0
;
; PCICR
PCICR                   =0x68  ; memory mapped, for LD/ST
PCIE3                   =3
PCIE2                   =2
PCIE1                   =1
PCIE0                   =0
;
; PCMSK registers
PCMSK3                  =0x6A  ; memory mapped, for LD/ST
PCINT27                 =3
PCINT26                 =2
PCINT25                 =1
PCINT24                 =0
PCMSK2                  =0x6D  ; memory mapped, for LD/ST
PCINT23                 =7
PCINT22                 =6
PCINT21                 =5
PCINT20                 =4
PCINT19                 =3
PCINT18                 =2
PCINT17                 =1
PCINT16                 =0
PCMSK1                  =0x6C  ; memory mapped, for LD/ST
PCINT15                 =7
PCINT14                 =6
PCINT13                 =5
PCINT12                 =4
PCINT11                 =3
PCINT10                 =2
PCINT9                  =1
PCINT8                  =0
PCMSK0                  =0x6B  ; memory mapped, for LD/ST
PCINT7                  =7
PCINT6                  =6
PCINT5                  =5
PCINT4                  =4
PCINT3                  =3
PCINT2                  =2
PCINT1                  =1
PCINT0                  =0
;
; EICRA
EICRA                   =0x69  ; memory mapped, for LD/ST
ISC11                   =3
ISC10                   =2
ISC01                   =1
ISC00                   =0
;
; Timer/Counter 0
OCR0B                   =0x28  ; for IN/OUT
OCR0A                   =0x27  ; for IN/OUT
TCNT0                   =0x26  ; for IN/OUT
TCCR0A                  =0x25  ; for IN/OUT
TCCR0                   =0x25  ; for IN/OUT
CTC0                    =3
CS02                    =2
CS01                    =1
CS00                    =0
;
; Timer/Counter1
ICR1                    =0x86  ; memory mapped, for LD/ST
ICR1L                   =0x86  ; memory mapped, for LD/ST
ICR1H                   =0x87  ; memory mapped, for LD/ST
OCR1B                   =0x8A  ; memory mapped, for LD/ST
OCR1BL                  =0x8A  ; memory mapped, for LD/ST
OCR1BH                  =0x8B  ; memory mapped, for LD/ST
OCR1A                   =0x88  ; memory mapped, for LD/ST
OCR1AL                  =0x88  ; memory mapped, for LD/ST
OCR1AH                  =0x89  ; memory mapped, for LD/ST
TCNT1                   =0x84  ; memory mapped, for LD/ST
TCNT1L                  =0x84  ; memory mapped, for LD/ST
TCNT1H                  =0x85  ; memory mapped, for LD/ST
TCCR1C                  =0x82  ; memory mapped, for LD/ST
FOC1A                   =7
FOC1B                   =6
TCCR1B                  =0x81  ; memory mapped, for LD/ST
ICNC1                   =7
ICES1                   =6
WGM13                   =4
WGM12                   =3
CS12                    =2
CS11                    =1
CS10                    =0
TCCR1A                  =0x80  ; memory mapped, for LD/ST
COM1A1                  =7
COM1A0                  =6
COM1B1                  =5
COM1B0                  =4
WGM11                   =1
WGM10                   =0
;
; GTCCR
GTCCR                   =0x23  ; for IN/OUT
TSM                     =7
PSR10                   =0
PSRSYNC                 =0
;
; Timer/Counter Interrupts
TIFR0                   =0x15  ; for IN/OUT, CBI/SBI, SBIC/SBIS
OCF0B                   =2
OCF0A                   =1
TOV0                    =0
TIFR1                   =0x16  ; for IN/OUT, CBI/SBI, SBIC/SBIS
ICF1                    =5
OCF1B                   =2
OCF1A                   =1
TOV1                    =0
TIMSK0                  =0x6E  ; memory mapped, for LD/ST
OCIE0B                  =2
OCIE0A                  =1
TOIE0                   =0
TIMSK1                  =0x6F  ; memory mapped, for LD/ST
ICIE1                   =5
OCIE1B                  =2
OCIE1A                  =1
TOIE1                   =0
;
; Digital Inputs Disahle Registers
DIDR1                   =0x7F  ; memory mapped, for LD/ST
AIN1D                   =1
AIN0D                   =0
DIDR0                   =0x7E  ; memory mapped, for LD/ST
ADC7D                   =7
ADC6D                   =6
ADC5D                   =5
ADC4D                   =4
ADC3D                   =3
ADC2D                   =2
ADC1D                   =1
ADC0D                   =0
;
; Port A bits
PORTA3                  =3
PORTA2                  =2
PORTA1                  =1
PORTA0                  =0
PA3                     =3
PA2                     =2
PA1                     =1
PA0                     =0
DDA3                    =3
DDA2                    =2
DDA1                    =1
DDA0                    =0
PINA3                   =3
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
; Port C bits
PORTC7                  =7
PORTC6                  =6
PORTC5                  =5
PORTC4                  =4
PORTC3                  =3
PORTC2                  =2
PORTC1                  =1
PORTC0                  =0
PC7                     =7
PC6                     =6
PC5                     =5
PC4                     =4
PC3                     =3
PC2                     =2
PC1                     =1
PC0                     =0
DDC7                    =7
DDC6                    =6
DDC5                    =5
DDC4                    =4
DDC3                    =3
DDC2                    =2
DDC1                    =1
DDC0                    =0
PINC7                   =7
PINC6                   =6
PINC5                   =5
PINC4                   =4
PINC3                   =3
PINC2                   =2
PINC1                   =1
PINC0                   =0
;
; Port D bits
PORTD7                  =7
PORTD6                  =6
PORTD5                  =5
PORTD4                  =4
PORTD3                  =3
PORTD2                  =2
PORTD1                  =1
PORTD0                  =0
PD7                     =7
PD6                     =6
PD5                     =5
PD4                     =4
PD3                     =3
PD2                     =2
PD1                     =1
PD0                     =0
DDD7                    =7
DDD6                    =6
DDD5                    =5
DDD4                    =4
DDD3                    =3
DDD2                    =2
DDD1                    =1
DDD0                    =0
PIND7                   =7
PIND6                   =6
PIND5                   =5
PIND4                   =4
PIND3                   =3
PIND2                   =2
PIND1                   =1
PIND0                   =0
;
; Lock and Fuse Bits with LPM/SPM instructions
LB2                     =1
LB1                     =0
;
; fuses low bits (Z = 0x0000)
CKDIV8                  =7
CKOUT                   =6
SUT1                    =5
SUT0                    =4
CKSEL3                  =3
CKSEL2                  =2
CKSEL1                  =1
CKSEL0                  =0
;
; fuses high bits (Z = 0x0003)
RSTDISBL                =7
DWEN                    =6
SPIEN                   =5
WDTON                   =4
EESAVE                  =3
BODLEVEL2               =2
BODLEVEL1               =1
BODLEVEL0               =0
;
; extended fuses (Z = 0x0002)
; #define  SELFPRGEN    0 * / / * already defined with SPMCSR 
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
.macro set_vector_PCINT0
 .area vector (abs)
 .org  0x06
  rjmp @0
 .area text
.endmacro
.macro set_vector_PCINT1
 .area vector (abs)
 .org  0x08
  rjmp @0
 .area text
.endmacro
.macro set_vector_PCINT2
 .area vector (abs)
 .org  0x0A
  rjmp @0
 .area text
.endmacro
.macro set_vector_PCINT3
 .area vector (abs)
 .org  0x0C
  rjmp @0
 .area text
.endmacro
.macro set_vector_WDT
 .area vector (abs)
 .org  0x0E
  rjmp @0
 .area text
.endmacro
.macro set_vector_TIMER1_CAPT
 .area vector (abs)
 .org  0x10
  rjmp @0
 .area text
.endmacro
.macro set_vector_TIM1_CAPT
 .area vector (abs)
 .org  0x10
  rjmp @0
 .area text
.endmacro
.macro set_vector_TIMER1_COMPA
 .area vector (abs)
 .org  0x12
  rjmp @0
 .area text
.endmacro
.macro set_vector_TIM1_COMPA
 .area vector (abs)
 .org  0x12
  rjmp @0
 .area text
.endmacro
.macro set_vector_TIMER1_COMPB
 .area vector (abs)
 .org  0x14
  rjmp @0
 .area text
.endmacro
.macro set_vector_TIM1_COMPB
 .area vector (abs)
 .org  0x14
  rjmp @0
 .area text
.endmacro
.macro set_vector_TIMER1_OVF
 .area vector (abs)
 .org  0x16
  rjmp @0
 .area text
.endmacro
.macro set_vector_TIM1_OVF
 .area vector (abs)
 .org  0x16
  rjmp @0
 .area text
.endmacro
.macro set_vector_TIMER0_COMPA
 .area vector (abs)
 .org  0x18
  rjmp @0
 .area text
.endmacro
.macro set_vector_TIM0_COMPA
 .area vector (abs)
 .org  0x18
  rjmp @0
 .area text
.endmacro
.macro set_vector_TIMER0_COMPB
 .area vector (abs)
 .org  0x1A
  rjmp @0
 .area text
.endmacro
.macro set_vector_TIM0_COMPB
 .area vector (abs)
 .org  0x1A
  rjmp @0
 .area text
.endmacro
.macro set_vector_TIMER0_OVF
 .area vector (abs)
 .org  0x1C
  rjmp @0
 .area text
.endmacro
.macro set_vector_TIM0_OVF
 .area vector (abs)
 .org  0x1C
  rjmp @0
 .area text
.endmacro
.macro set_vector_SPI_STC
 .area vector (abs)
 .org  0x1E
  rjmp @0
 .area text
.endmacro
.macro set_vector_ADC
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
.macro set_vector_ANA_COMP
 .area vector (abs)
 .org  0x24
  rjmp @0
 .area text
.endmacro
.macro set_vector_ANALOG_COMP
 .area vector (abs)
 .org  0x24
  rjmp @0
 .area text
.endmacro
.macro set_vector_TWI
 .area vector (abs)
 .org  0x26
  rjmp @0
 .area text
.endmacro
.macro set_vector_TWSI
 .area vector (abs)
 .org  0x26
  rjmp @0
 .area text
.endmacro
;------
;<eof>
