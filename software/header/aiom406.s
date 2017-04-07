; iccavr asm header file for m406
; generated by maschag 0.8.7 on 04-15-2009
;-------------------------------------------------------------
;
; Memory info
FLASHEND                =0x9FFF
E2END                   =0x01FF
RAMSTART                =0x0100
RAMEND                  =0x08FF
XRAMEND                 =0 ; Part has no external RAM interface
;
;-------------------------------------------------------------
;
; Port A
PINA                    =0x00  ; for IN/OUT, CBI/SBI, SBIC/SBIS
DDRA                    =0x01  ; for IN/OUT, CBI/SBI, SBIC/SBIS
PORTA                   =0x02  ; for IN/OUT, CBI/SBI, SBIC/SBIS
;
; Port B
PINB                    =0x03  ; for IN/OUT, CBI/SBI, SBIC/SBIS
DDRB                    =0x04  ; for IN/OUT, CBI/SBI, SBIC/SBIS
PORTB                   =0x05  ; for IN/OUT, CBI/SBI, SBIC/SBIS
;
; Port C
PORTC                   =0x08  ; for IN/OUT, CBI/SBI, SBIC/SBIS
;
; Port D
PIND                    =0x09  ; for IN/OUT, CBI/SBI, SBIC/SBIS
DDRD                    =0x0A  ; for IN/OUT, CBI/SBI, SBIC/SBIS
PORTD                   =0x0B  ; for IN/OUT, CBI/SBI, SBIC/SBIS
;
; GPIO
GPIOR0                  =0x1E  ; for IN/OUT, CBI/SBI, SBIC/SBIS
GPIOR1                  =0x2A  ; for IN/OUT
GPIOR2                  =0x2B  ; for IN/OUT
;
; EEPROM
EECR                    =0x1F  ; for IN/OUT, CBI/SBI, SBIC/SBIS
EEPM1                   =5
EEPM0                   =4
EERIE                   =3
EEMPE                   =2
EEMWE                   =2
EEPE                    =1
EEWE                    =1
EERE                    =0
EEDR                    =0x20  ; for IN/OUT, CBI/SBI, SBIC/SBIS
EEAR                    =0x21  ; for IN/OUT
EEARL                   =0x21  ; for IN/OUT
EEARH                   =0x22  ; for IN/OUT
;
; OCDR
OCDR                    =0x31  ; for IN/OUT
IDRD                    =7
;
; MCU general
SMCR                    =0x33  ; for IN/OUT
SM2                     =3
SM1                     =2
SM0                     =1
SE                      =0
MCUSR                   =0x34  ; for IN/OUT
JTRF                    =4
WDRF                    =3
BODRF                   =2
BORF                    =2
EXTRF                   =1
PORF                    =0
MCUCR                   =0x35  ; for IN/OUT
JTD                     =7
PUD                     =4
IVSEL                   =1
IVCE                    =0
;
; SPM Conrol Register
SPMCSR                  =0x37  ; for IN/OUT
SPMIE                   =7
RWWSB                   =6
SIGRD                   =5
RWWSRE                  =4
BLBSET                  =3
PGWRT                   =2
PGERS                   =1
SPMEN                   =0
;
; Stack Pointer
SP                      =0x3D  ; for IN/OUT
SPL                     =0x3D  ; for IN/OUT
SPH                     =0x3E  ; for IN/OUT
;
; Status REGister
SREG                    =0x3F  ; for IN/OUT
;
; External Interrupts
PCIFR                   =0x1B  ; for IN/OUT, CBI/SBI, SBIC/SBIS
PCIF1                   =1
PCIF0                   =0
EIFR                    =0x1C  ; for IN/OUT, CBI/SBI, SBIC/SBIS
INTF3                   =3
INTF2                   =2
INTF1                   =1
INTF0                   =0
EIMSK                   =0x1D  ; for IN/OUT, CBI/SBI, SBIC/SBIS
INT3                    =3
INT2                    =2
INT1                    =1
INT0                    =0
;
; Timer/Counter Interrupts
TIFR0                   =0x15  ; for IN/OUT, CBI/SBI, SBIC/SBIS
OCF0B                   =2
OCF0A                   =1
TOV0                    =0
TIFR1                   =0x16  ; for IN/OUT, CBI/SBI, SBIC/SBIS
OCF1A                   =1
TOV1                    =0
;
; General Timer Control
GTCCR                   =0x23  ; for IN/OUT
TSM                     =7
PSRSYNC                 =0
;
; Timer/Counter 0
TCCR0A                  =0x24  ; for IN/OUT
COM0A1                  =7
COM0A0                  =6
COM0B1                  =5
COM0B0                  =4
WGM01                   =1
WGM00                   =0
TCCR0B                  =0x25  ; for IN/OUT
FOC0A                   =7
FOC0B                   =6
WGM02                   =3
CS02                    =2
CS01                    =1
CS00                    =0
TCNT0                   =0x26  ; for IN/OUT
OCR0A                   =0x27  ; for IN/OUT
OCR0B                   =0x28  ; for IN/OUT
;
; rest is memory mapped
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
; WUT
WUTCSR                  =0x62  ; memory mapped, for LD/ST
WUTIF                   =7
WUTIE                   =6
WUTCF                   =5
WUTR                    =4
WUTE                    =3
WUTP2                   =2
WUTP1                   =1
WUTP0                   =0
;
; Oscillator
FOSCCAL                 =0x66  ; memory mapped, for LD/ST
OSCCAL                  =0x66  ; memory mapped, for LD/ST
;
; PRR
PRR0                    =0x64  ; memory mapped, for LD/ST
PRR                     =0x64  ; memory mapped, for LD/ST
PRTWI                   =3
PRTIM1                  =2
PRTIM0                  =1
PRVADC                  =0
;
; External Interrupts
EICRA                   =0x69  ; memory mapped, for LD/ST
ISC31                   =7
ISC30                   =6
ISC21                   =5
ISC20                   =4
ISC11                   =3
ISC10                   =2
ISC01                   =1
ISC00                   =0
;
; Pin Change Interrupts
PCICR                   =0x68  ; memory mapped, for LD/ST
PCIE1                   =1
PCIE0                   =0
;
; PCINT0..7
PCMSK0                  =0x6B  ; memory mapped, for LD/ST
;
; PCINT8..15
PCMSK1                  =0x6C  ; memory mapped, for LD/ST
;
; Timer/Counter Interrupts
TIMSK0                  =0x6E  ; memory mapped, for LD/ST
OCIE0B                  =2
OCIE0A                  =1
TOIE0                   =0
TIMSK1                  =0x6F  ; memory mapped, for LD/ST
OCIE1A                  =1
TOIE1                   =0
;
; Timer/Counter 1
TCCR1B                  =0x81  ; memory mapped, for LD/ST
CTC1                    =3
CS12                    =2
CS11                    =1
CS10                    =0
TCNT1                   =0x84  ; memory mapped, for LD/ST
TCNT1L                  =0x84  ; memory mapped, for LD/ST
TCNT1H                  =0x85  ; memory mapped, for LD/ST
OCR1A                   =0x88  ; memory mapped, for LD/ST
OCR1AL                  =0x88  ; memory mapped, for LD/ST
OCR1AH                  =0x89  ; memory mapped, for LD/ST
;
; VADC
VADC                    =0x78  ; memory mapped, for LD/ST
VADCL                   =0x78  ; memory mapped, for LD/ST
VADCH                   =0x79  ; memory mapped, for LD/ST
VADCSR                  =0x7A  ; memory mapped, for LD/ST
VADEN                   =3
VADSC                   =2
VADCCIF                 =1
VADCCIE                 =0
VADMUX                  =0x7C  ; memory mapped, for LD/ST
VADMUX3                 =3
VADMUX2                 =2
VADMUX1                 =1
VADMUX0                 =0
DIDR0                   =0x7E  ; memory mapped, for LD/ST
VADC3D                  =3
VADC2D                  =2
VADC1D                  =1
VADC0D                  =0
;
; 2-wire SI
TWBR                    =0xB8  ; memory mapped, for LD/ST
TWSR                    =0xB9  ; memory mapped, for LD/ST
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
TWBCSR                  =0xBE  ; memory mapped, for LD/ST
TWBCIF                  =7
TWBCIE                  =6
TWBDT1                  =2
TWBDT0                  =1
TWBCIP                  =0
;
; CCSR
CCSR                    =0xC0  ; memory mapped, for LD/ST
XOE                     =1
ACS                     =0
;
; BGC
BGCCR                   =0xD0  ; memory mapped, for LD/ST
BGEN                    =7
BGCC5                   =5
BGCC4                   =4
BGCC3                   =3
BGCC2                   =2
BGCC1                   =1
BGCC0                   =0
BGCRR                   =0xD1  ; memory mapped, for LD/ST
;
; CAD
CADAC0                  =0xE0  ; memory mapped, for LD/ST
CADAC1                  =0xE1  ; memory mapped, for LD/ST
CADAC2                  =0xE2  ; memory mapped, for LD/ST
CADAC3                  =0xE3  ; memory mapped, for LD/ST
CADCSRA                 =0xE4  ; memory mapped, for LD/ST
CADEN                   =7
CADUB                   =5
CADAS1                  =4
CADAS0                  =3
CADSI1                  =2
CADSI0                  =1
CADSE                   =0
CADCSRB                 =0xE5  ; memory mapped, for LD/ST
CADACIE                 =6
CADRCIE                 =5
CADICIE                 =4
CADACIF                 =2
CADRCIF                 =1
CADICIF                 =0
CADRCC                  =0xE6  ; memory mapped, for LD/ST
CADRDC                  =0xE7  ; memory mapped, for LD/ST
CADIC                   =0xE8  ; memory mapped, for LD/ST
CADICL                  =0xE8  ; memory mapped, for LD/ST
CADICH                  =0xE9  ; memory mapped, for LD/ST
;
; more about this ??
FCSR                    =0xF0  ; memory mapped, for LD/ST
PWMOC                   =5
PWMOPC                  =4
CPS                     =3
DFE                     =2
CFE                     =1
PFD                     =0
CBSR                    =0xF1  ; memory mapped, for LD/ST
CBE4                    =3
CBE3                    =2
CBE2                    =1
CBE1                    =0
BPIR                    =0xF2  ; memory mapped, for LD/ST
DUVIF                   =7
COCIF                   =6
DOCIF                   =5
SCIF                    =4
DUVIE                   =7
COCIE                   =6
DOCIE                   =5
SCIE                    =4
BPDUV                   =0xF3  ; memory mapped, for LD/ST
DUVT1                   =5
DUVT0                   =4
BPSCD                   =0xF4  ; memory mapped, for LD/ST
BPOCD                   =0xF5  ; memory mapped, for LD/ST
CBPTR                   =0xF6  ; memory mapped, for LD/ST
BPCR                    =0xF7  ; memory mapped, for LD/ST
DUVD                    =3
SCD                     =2
DCD                     =1
CCD                     =0
BPPLR                   =0xF8  ; memory mapped, for LD/ST
BPPLE                   =1
BPPL                    =0
;
; bits
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
PORTC0                  =0
PC0                     =0
;
; Port D bits
PORTD1                  =1
PORTD0                  =0
PD1                     =1
PD0                     =0
DDD1                    =1
DDD0                    =0
PIND1                   =1
PIND0                   =0
;
; Pin Change Interrupts
;
; PCMSK1
PCINT15                 =7
PCINT14                 =6
PCINT13                 =5
PCINT12                 =4
PCINT11                 =3
PCINT10                 =2
PCINT9                  =1
PCINT8                  =0
;
; PCMSK0
PCINT7                  =7
PCINT6                  =6
PCINT5                  =5
PCINT4                  =4
PCINT3                  =3
PCINT2                  =2
PCINT1                  =1
PCINT0                  =0
;
; BGCRR
BGCR7                   =7
BGCR6                   =6
BGCR5                   =5
BGCR4                   =4
BGCR3                   =3
BGCR2                   =2
BGCR1                   =1
BGCR0                   =0
;
; more
CCDL3                   =3
CCDL2                   =2
CCDL1                   =1
CCDL0                   =0
DCDL3                   =7
DCDL2                   =6
DCDL1                   =5
DCDL0                   =4
DUDL3                   =3
DUDL2                   =2
DUDL1                   =1
DUDL0                   =0
SCDL3                   =3
SCDL2                   =2
SCDL1                   =1
SCDL0                   =0
OCPT3                   =3
OCPT2                   =2
OCPT1                   =1
OCPT0                   =0
SCPT3                   =7
SCPT2                   =6
SCPT1                   =5
SCPT0                   =4
;
; Lock and Fuse Bits with LPM/SPM instructions
;
; lock bits
BLB12                   =5
BLB11                   =4
BLB02                   =3
BLB01                   =2
LB2                     =1
LB1                     =0
;
; fuses low bits
WDTON                   =7
EESAVE                  =6
BOOTSZ1                 =5
BOOTSZ0                 =4
BOOTRST                 =3
SUT1                    =2
SUT0                    =1
CKSEL                   =0
CKSEL0                  =0
;
; fuses high bits
OCDEN                   =1
JTAGEN                  =0
;
; ------------------------------------------------------------
;
; Interrupt Vector Macros
;
.macro set_vector_BPINT
 .area vector (abs)
 .org  0x04
  jmp  @0
 .area text
.endmacro
.macro set_vector_INT0
 .area vector (abs)
 .org  0x08
  jmp  @0
 .area text
.endmacro
.macro set_vector_EXT_INT0
 .area vector (abs)
 .org  0x08
  jmp  @0
 .area text
.endmacro
.macro set_vector_INT1
 .area vector (abs)
 .org  0x0C
  jmp  @0
 .area text
.endmacro
.macro set_vector_EXT_INT1
 .area vector (abs)
 .org  0x0C
  jmp  @0
 .area text
.endmacro
.macro set_vector_INT2
 .area vector (abs)
 .org  0x10
  jmp  @0
 .area text
.endmacro
.macro set_vector_EXT_INT2
 .area vector (abs)
 .org  0x10
  jmp  @0
 .area text
.endmacro
.macro set_vector_INT3
 .area vector (abs)
 .org  0x14
  jmp  @0
 .area text
.endmacro
.macro set_vector_EXT_INT3
 .area vector (abs)
 .org  0x14
  jmp  @0
 .area text
.endmacro
.macro set_vector_PCINT0
 .area vector (abs)
 .org  0x18
  jmp  @0
 .area text
.endmacro
.macro set_vector_PC_INT0
 .area vector (abs)
 .org  0x18
  jmp  @0
 .area text
.endmacro
.macro set_vector_PCINT1
 .area vector (abs)
 .org  0x1C
  jmp  @0
 .area text
.endmacro
.macro set_vector_PC_INT1
 .area vector (abs)
 .org  0x1C
  jmp  @0
 .area text
.endmacro
.macro set_vector_WDT
 .area vector (abs)
 .org  0x20
  jmp  @0
 .area text
.endmacro
.macro set_vector_WAKE_UP
 .area vector (abs)
 .org  0x24
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIMER1_COMPA
 .area vector (abs)
 .org  0x28
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIMER1_COMP
 .area vector (abs)
 .org  0x28
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIMER1_OVF
 .area vector (abs)
 .org  0x2C
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIM1_COMPA
 .area vector (abs)
 .org  0x28
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIM1_COMP
 .area vector (abs)
 .org  0x28
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIM1_OVF
 .area vector (abs)
 .org  0x2C
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIMER0_COMPA
 .area vector (abs)
 .org  0x30
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIMER0_COMPB
 .area vector (abs)
 .org  0x34
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIMER0_OVF
 .area vector (abs)
 .org  0x38
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIM0_COMPA
 .area vector (abs)
 .org  0x30
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIM0_COMPB
 .area vector (abs)
 .org  0x34
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIM0_OVF
 .area vector (abs)
 .org  0x38
  jmp  @0
 .area text
.endmacro
.macro set_vector_TWI_BUS_CD
 .area vector (abs)
 .org  0x3C
  jmp  @0
 .area text
.endmacro
.macro set_vector_TWI
 .area vector (abs)
 .org  0x40
  jmp  @0
 .area text
.endmacro
.macro set_vector_VADC
 .area vector (abs)
 .org  0x44
  jmp  @0
 .area text
.endmacro
.macro set_vector_CCADC_CONV
 .area vector (abs)
 .org  0x48
  jmp  @0
 .area text
.endmacro
.macro set_vector_CCADC_REG_CUR
 .area vector (abs)
 .org  0x4C
  jmp  @0
 .area text
.endmacro
.macro set_vector_CCADC_ACC
 .area vector (abs)
 .org  0x50
  jmp  @0
 .area text
.endmacro
.macro set_vector_EE_RDY
 .area vector (abs)
 .org  0x54
  jmp  @0
 .area text
.endmacro
.macro set_vector_EE_READY
 .area vector (abs)
 .org  0x54
  jmp  @0
 .area text
.endmacro
.macro set_vector_SPM_RDY
 .area vector (abs)
 .org  0x58
  jmp  @0
 .area text
.endmacro
.macro set_vector_SPM_READY
 .area vector (abs)
 .org  0x58
  jmp  @0
 .area text
.endmacro
;------
;<eof>
