; iccavr asm header file for t167 - all io memory mapped
; generated by maschag 0.8.7 on 04-15-2009
;-------------------------------------------------------------
;
; Memory info
FLASHEND                =0x3FFF
E2END                   =0x01FF
RAMSTART                =0x0100
RAMEND                  =0x02FF
XRAMEND                 =0 ; Part has no external RAM interface
;
;-------------------------------------------------------------
;
; for tiny167 and higher do not
; #define ___char_EEAR 
; #define ___char_SP 
;
; Port A
PINA                    =0x20
PINA_io                 =0x00  ; for IN/OUT, CBI/SBI, SBIC/SBIS
DDRA                    =0x21
DDRA_io                 =0x01  ; for IN/OUT, CBI/SBI, SBIC/SBIS
PORTA                   =0x22
PORTA_io                =0x02  ; for IN/OUT, CBI/SBI, SBIC/SBIS
;
; Port B
PINB                    =0x23
PINB_io                 =0x03  ; for IN/OUT, CBI/SBI, SBIC/SBIS
DDRB                    =0x24
DDRB_io                 =0x04  ; for IN/OUT, CBI/SBI, SBIC/SBIS
PORTB                   =0x25
PORTB_io                =0x05  ; for IN/OUT, CBI/SBI, SBIC/SBIS
;
; PORTCR
PORTCR                  =0x32
PORTCR_io               =0x12  ; for IN/OUT, CBI/SBI, SBIC/SBIS
;
; Timer/Counter Interrupts
TIFR0                   =0x35
TIFR0_io                =0x15  ; for IN/OUT, CBI/SBI, SBIC/SBIS
TIFR1                   =0x36
TIFR1_io                =0x16  ; for IN/OUT, CBI/SBI, SBIC/SBIS
TIMSK0                  =0x6E
TIMSK1                  =0x6F
;
; Pin Interrupts
PCIFR                   =0x3B
PCIFR_io                =0x1B  ; for IN/OUT, CBI/SBI, SBIC/SBIS
PCMSK0                  =0x6B
PCMSK1                  =0x6C
PCICR                   =0x68
EIFR                    =0x3C
EIFR_io                 =0x1C  ; for IN/OUT, CBI/SBI, SBIC/SBIS
EIMSK                   =0x3D
EIMSK_io                =0x1D  ; for IN/OUT, CBI/SBI, SBIC/SBIS
EICR                    =0x69
;
; GPIOR
GPIOR0                  =0x3E
GPIOR0_io               =0x1E  ; for IN/OUT, CBI/SBI, SBIC/SBIS
GPIOR1                  =0x4A
GPIOR1_io               =0x2A  ; for IN/OUT
GPIOR2                  =0x4B
GPIOR2_io               =0x2B  ; for IN/OUT
;
; EEPROM
EECR                    =0x3F
EECR_io                 =0x1F  ; for IN/OUT, CBI/SBI, SBIC/SBIS
EEDR                    =0x40
EEDR_io                 =0x20  ; for IN/OUT
EEAR                    =0x41
EEAR_io                 =0x21  ; for IN/OUT
EEARL                   =0x41
EEARL_io                =0x21  ; for IN/OUT
EEARH                   =0x42
EEARH_io                =0x22  ; for IN/OUT
;
; GTCCR
GTCCR                   =0x43
GTCCR_io                =0x23  ; for IN/OUT
;
; Timer/Counter 0
ASSR                    =0xB6
TCCR0A                  =0x45
TCCR0A_io               =0x25  ; for IN/OUT
TCCR0B                  =0x46
TCCR0B_io               =0x26  ; for IN/OUT
TCNT0                   =0x47
TCNT0_io                =0x27  ; for IN/OUT
OCR0A                   =0x48
OCR0A_io                =0x28  ; for IN/OUT
;
; SPI
SPCR                    =0x4C
SPCR_io                 =0x2C  ; for IN/OUT
SPSR                    =0x4D
SPSR_io                 =0x2D  ; for IN/OUT
SPDR                    =0x4E
SPDR_io                 =0x2E  ; for IN/OUT
;
; Analog Comp
ACSR                    =0x50
ACSR_io                 =0x30  ; for IN/OUT
;
; DWD Register
DWDR                    =0x51
DWDR_io                 =0x31  ; for IN/OUT
;
; Sleep Mode Register
SMCR                    =0x53
SMCR_io                 =0x33  ; for IN/OUT
;
; MCU
MCUSR                   =0x54
MCUSR_io                =0x34  ; for IN/OUT
MCUCR                   =0x55
MCUCR_io                =0x35  ; for IN/OUT
;
; SPM
SPMCSR                  =0x57
SPMCSR_io               =0x37  ; for IN/OUT
;
; Stack Pointer
SP                      =0x5D
SP_io                   =0x3D  ; for IN/OUT
SPL                     =0x5D
SPL_io                  =0x3D  ; for IN/OUT
SPH                     =0x5E
SPH_io                  =0x3E  ; for IN/OUT
;
; Status REGister
SREG                    =0x5F
SREG_io                 =0x3F  ; for IN/OUT
;
; Watchdog Timer Control Register
WDTCSR                  =0x60
;
; CLK
CLKPR                   =0x61
CLKCSR                  =0x62
CLKSELR                 =0x63
;
; PRR
PRR                     =0x64
;
; RC oscillator
OSCCAL                  =0x66
;
; AMISCR
AMISCR                  =0x77
;
; ADC
ADC                     =0x78
ADCL                    =0x78
ADCH                    =0x79
ADCSRA                  =0x7A
ADCSRB                  =0x7B
ADMUX                   =0x7C
;
; DIDR
DIDR0                   =0x7E
DIDR1                   =0x7F
;
; Timer/Counter 1
; #define GTCCR	(*(volatile unsigned char *)0x43)
TCCR1A                  =0x80
TCCR1B                  =0x81
TCCR1C                  =0x82
TCCR1D                  =0x83
TCNT1                   =0x84
TCNT1L                  =0x84
TCNT1H                  =0x85
ICR1                    =0x86
ICR1L                   =0x86
ICR1H                   =0x87
OCR1A                   =0x88
OCR1AL                  =0x88
OCR1AH                  =0x89
OCR1B                   =0x8A
OCR1BL                  =0x8A
OCR1BH                  =0x8B
;
; Universal Serial Interface
USICR                   =0xB8
USISR                   =0xB9
USIDR                   =0xBA
USIBR                   =0xBB
USIPP                   =0xBC
;
; LIN / UART
LINCR                   =0xC8
LINSIR                  =0xC9
LINENIR                 =0xCA
LINERR                  =0xCB
LINBTR                  =0xCC
LINBRR                  =0xCD
LINBRRL                 =0xCD
LINBRRH                 =0xCE
LINDLR                  =0xCF
LINIDR                  =0xD0
LINSEL                  =0xD1
LINDAT                  =0xD2
;
; io bits
;
; pin io
;
; Port A
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
; Port B
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
; PORTCR
BBMB                    =5
BBMA                    =4
PUDB                    =1
PUDA                    =0
;
; pin interrupts
;
; PCMSK
PCINT15                 =7
PCINT14                 =6
PCINT13                 =5
PCINT12                 =4
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
; PCIFR
PCIF1                   =1
PCIF0                   =0
;
; PCICR
PCIE1                   =1
PCIE0                   =0
;
; EIMSK
INT1                    =1
INT0                    =0
;
; EIFR
INTF1                   =1
INTF0                   =0
;
; EICR
ISC11                   =3
ISC10                   =2
ISC01                   =1
ISC00                   =0
;
; timer/counter interrupts
;
; TIMSK
OCIE0A                  =1
TOIE0                   =0
ICIE1                   =5
OCIE1B                  =2
OCIE1A                  =1
TOIE1                   =0
;
; TIFR
OCF0A                   =1
TOV0                    =0
ICF1                    =5
OCF1B                   =2
OCF1A                   =1
TOV1                    =0
;
; DIDR
ADC10D                  =2
ADC9D                   =1
ADC8D                   =0
ADC7D                   =7
ADC6D                   =6
ADC5D                   =5
ADC4D                   =4
ADC3D                   =3
ADC2D                   =2
ADC1D                   =1
ADC0D                   =0
AIN1D                   =7
AIN0D                   =6
;
; SMCR
SM1                     =2
SM0                     =1
SE                      =0
;
; SPMCSR
RWWSB                   =6
SIGRD                   =5
CTPB                    =4
RFLB                    =3
PGWRT                   =2
PGERS                   =1
SPMEN                   =0
;
; MCUCR
BODS                    =6
BODSE                   =5
PUD                     =4
;
; MCUSR
WDRF                    =3
BORF                    =2
EXTRF                   =1
PORF                    =0
;
; EECR
EEPM1                   =5
EEPM0                   =4
EERIE                   =3
EEMPE                   =2
EEMWE                   =2
EEPE                    =1
EEWE                    =1
EERE                    =0
;
; GTCCR
TSM                     =7
PSR1                    =1
PSR0                    =0
;
; Timer/Counter 0
COM0A1                  =7
COM0A0                  =6
WGM01                   =1
WGM00                   =0
FOC0A                   =7
CS02                    =2
CS01                    =1
CS00                    =0
;
; ASSR
EXCLK                   =6
AS0                     =5
TCN0UB                  =4
OCR0AUB                 =3
TCR0AUB                 =1
TCR0BUB                 =0
;
; Timer/Counter 1
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
OC1BX                   =7
OC1BW                   =6
OC1BV                   =5
OC1BU                   =4
OC1AX                   =3
OC1AW                   =2
OC1AV                   =1
OC1AU                   =0
;
; CLKPR
CLKPCE                  =7
CLKPS3                  =3
CLKPS2                  =2
CLKPS1                  =1
CLKPS0                  =0
;
; CLKCSR
CLKCCE                  =7
CLKRDY                  =4
CLKC3                   =3
CLKC2                   =2
CLKC1                   =1
CLKC0                   =0
;
; CLKSELR
COUT                    =6
CSUT1                   =5
CSUT0                   =4
CSEL3                   =3
CSEL2                   =2
CSEL1                   =1
CSEL0                   =0
;
; PRR
PRLIN                   =5
PRSPI                   =4
PRTIM1                  =3
PRTIM0                  =2
PRUSI                   =1
PRADC                   =0
;
; WDTCR
WDIF                    =7
WDIE                    =6
WDP3                    =5
WDCE                    =4
WDE                     =3
WDP2                    =2
WDP1                    =1
WDP0                    =0
;
; SPI
SPIE                    =7
SPE                     =6
DORD                    =5
MSTR                    =4
CPOL                    =3
CPHA                    =2
SPR1                    =1
SPR0                    =0
SPIF                    =7
WCOL                    =6
SPI2X                   =0
;
; USI
USISIE                  =7
USIOIE                  =6
USIWM1                  =5
USIWM0                  =4
USICS1                  =3
USICS0                  =2
USICLK                  =1
USITC                   =0
USISIF                  =7
USIOIF                  =6
USIPF                   =5
USIDC                   =4
USICNT3                 =3
USICNT2                 =2
USICNT1                 =1
USICNT0                 =0
USIPOS                  =0
;
; AC
ACD                     =7
ACIRS                   =6
ACO                     =5
ACI                     =4
ACIE                    =3
ACIC                    =2
ACIS1                   =1
ACIS0                   =0
;
; ADC
REFS1                   =7
REFS0                   =6
ADLAR                   =5
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
ADIR1                   =5
ADIR0                   =4
ADTS2                   =2
ADTS1                   =1
ADTS0                   =0
;
; AMISCR
AREFEN                  =2
XREFEN                  =1
ISRCEN                  =0
;
; LIN/UART
LAINC                   =3
LINDX2                  =2
LINDX1                  =1
LINDX0                  =0
LP1                     =7
LP0                     =6
LDL1                    =5
LDL0                    =4
LTXDL3                  =7
LTXDL2                  =6
LTXDL1                  =5
LTXDL0                  =4
LRXDL3                  =3
LRXDL2                  =2
LRXDL1                  =1
LRXDL0                  =0
LDISR                   =7
LABORT                  =7
LTOERR                  =6
LOVERR                  =5
LFERR                   =4
LSERR                   =3
LPERR                   =2
LCERR                   =1
LBERR                   =0
LENERR                  =3
LENIDOK                 =2
LENTXOK                 =1
LENRXOK                 =0
LIDST2                  =7
LIDST1                  =6
LIDST0                  =5
LBUSY                   =4
LERR                    =3
LIDOK                   =2
LTXOK                   =1
LRXOK                   =0
LSWRES                  =7
LIN13                   =6
LCONF1                  =5
LCONF0                  =4
LENA                    =3
LCMD2                   =2
LCMD1                   =1
LCMD0                   =0
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
.macro set_vector_WDT
 .area vector (abs)
 .org  0x0A
  rjmp @0
 .area text
.endmacro
.macro set_vector_TIM1_CAPT
 .area vector (abs)
 .org  0x0C
  rjmp @0
 .area text
.endmacro
.macro set_vector_TIMER1_CAPT
 .area vector (abs)
 .org  0x0C
  rjmp @0
 .area text
.endmacro
.macro set_vector_TIM1_COMPA
 .area vector (abs)
 .org  0x0E
  rjmp @0
 .area text
.endmacro
.macro set_vector_TIMER1_COMPA
 .area vector (abs)
 .org  0x0E
  rjmp @0
 .area text
.endmacro
.macro set_vector_TIM1_COMPB
 .area vector (abs)
 .org  0x10
  rjmp @0
 .area text
.endmacro
.macro set_vector_TIMER1_COMPB
 .area vector (abs)
 .org  0x10
  rjmp @0
 .area text
.endmacro
.macro set_vector_TIM1_OVF
 .area vector (abs)
 .org  0x12
  rjmp @0
 .area text
.endmacro
.macro set_vector_TIMER1_OVF
 .area vector (abs)
 .org  0x12
  rjmp @0
 .area text
.endmacro
.macro set_vector_TIM0_COMPA
 .area vector (abs)
 .org  0x14
  rjmp @0
 .area text
.endmacro
.macro set_vector_TIMER0_COMPA
 .area vector (abs)
 .org  0x14
  rjmp @0
 .area text
.endmacro
.macro set_vector_TIM0_COMP
 .area vector (abs)
 .org  0x14
  rjmp @0
 .area text
.endmacro
.macro set_vector_TIMER0_COMP
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
.macro set_vector_LIN_TC
 .area vector (abs)
 .org  0x18
  rjmp @0
 .area text
.endmacro
.macro set_vector_LIN_ERR
 .area vector (abs)
 .org  0x1A
  rjmp @0
 .area text
.endmacro
.macro set_vector_SPI_STC
 .area vector (abs)
 .org  0x1C
  rjmp @0
 .area text
.endmacro
.macro set_vector_ADC
 .area vector (abs)
 .org  0x1E
  rjmp @0
 .area text
.endmacro
.macro set_vector_EE_RDY
 .area vector (abs)
 .org  0x20
  rjmp @0
 .area text
.endmacro
.macro set_vector_ANA_COMP
 .area vector (abs)
 .org  0x22
  rjmp @0
 .area text
.endmacro
.macro set_vector_USI_START
 .area vector (abs)
 .org  0x24
  rjmp @0
 .area text
.endmacro
.macro set_vector_USI_STRT
 .area vector (abs)
 .org  0x24
  rjmp @0
 .area text
.endmacro
.macro set_vector_USI_OVF
 .area vector (abs)
 .org  0x26
  rjmp @0
 .area text
.endmacro
;------
;<eof>
