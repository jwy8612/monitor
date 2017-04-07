; iccavr asm header file for USB162 - all io memory mapped
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
; USART0 and USART defines included to ease port of existing code
;
; Port D
PIND                    =0x29
PIND_io                 =0x09  ; for IN/OUT, CBI/SBI, SBIC/SBIS
DDRD                    =0x2A
DDRD_io                 =0x0A  ; for IN/OUT, CBI/SBI, SBIC/SBIS
PORTD                   =0x2B
PORTD_io                =0x0B  ; for IN/OUT, CBI/SBI, SBIC/SBIS
;
; Port C
PINC                    =0x26
PINC_io                 =0x06  ; for IN/OUT, CBI/SBI, SBIC/SBIS
DDRC                    =0x27
DDRC_io                 =0x07  ; for IN/OUT, CBI/SBI, SBIC/SBIS
PORTC                   =0x28
PORTC_io                =0x08  ; for IN/OUT, CBI/SBI, SBIC/SBIS
;
; Port B
PINB                    =0x23
PINB_io                 =0x03  ; for IN/OUT, CBI/SBI, SBIC/SBIS
DDRB                    =0x24
DDRB_io                 =0x04  ; for IN/OUT, CBI/SBI, SBIC/SBIS
PORTB                   =0x25
PORTB_io                =0x05  ; for IN/OUT, CBI/SBI, SBIC/SBIS
;
; Analog Comparator Control and Status Register
ACSR                    =0x50
ACSR_io                 =0x30  ; for IN/OUT
ACD                     =7
ACBG                    =6
ACO                     =5
ACI                     =4
ACIE                    =3
ACIC                    =2
ACIS1                   =1
ACIS0                   =0
;
; USART1 - as by datasheet
UBRR1H                  =0xCD
UBRR1L                  =0xCC
UBRR1                   =0xCC
UCSR1D                  =0xCB
CTSEN                   =1
RTSEN                   =0
UCSR1C                  =0xCA
UMSEL11                 =7
UMSEL10                 =6
UPM11                   =5
UPM10                   =4
USBS1                   =3
UCSZ11                  =2
UCSZ10                  =1
UCPOL1                  =0
;
; in SPI mode
UDORD0                  =2
UCPHA0                  =1
UCSR1B                  =0xC9
RXCIE1                  =7
TXCIE1                  =6
UDRIE1                  =5
RXEN1                   =4
TXEN1                   =3
UCSZ12                  =2
RXB81                   =1
TXB81                   =0
UCSR1A                  =0xC8
RXC1                    =7
TXC1                    =6
UDRE1                   =5
FE1                     =4
DOR1                    =3
UPE1                    =2
U2X1                    =1
MPCM1                   =0
UDR1                    =0xCE
;
; USART0 - to ease port of existing code
UBRR0H                  =0xCD
UBRR0L                  =0xCC
UBRR0                   =0xCC
UCSR0D                  =0xCB
UCSR0C                  =0xCA
UMSEL01                 =7
UMSEL00                 =6
UPM01                   =5
UPM00                   =4
USBS0                   =3
UCSZ01                  =2
UCSZ00                  =1
UCPOL0                  =0
;
; in SPI mode
UDORD0                  =2
UCPHA0                  =1
UCSR0B                  =0xC9
RXCIE0                  =7
TXCIE0                  =6
UDRIE0                  =5
RXEN0                   =4
TXEN0                   =3
UCSZ02                  =2
RXB80                   =1
TXB80                   =0
UCSR0A                  =0xC8
RXC0                    =7
TXC0                    =6
UDRE0                   =5
FE0                     =4
DOR0                    =3
UPE0                    =2
U2X0                    =1
MPCM0                   =0
UDR0                    =0xCE
;
; USART - to ease port of existing code
UBRRH                   =0xCD
UBRRL                   =0xCC
UBRR                    =0xCC
UCSRD                   =0xCB
UCSRC                   =0xCA
UMSEL1                  =7
UMSEL0                  =6
UPM1                    =5
UPM0                    =4
USBS                    =3
UCSZ1                   =2
UCSZ0                   =1
UCPOL                   =0
;
; in SPI mode
UDORD                   =2
UCPHA                   =1
UCSRB                   =0xC9
RXCIE                   =7
TXCIE                   =6
UDRIE                   =5
RXEN                    =4
TXEN                    =3
UCSZ2                   =2
RXB8                    =1
TXB8                    =0
UCSRA                   =0xC8
RXC                     =7
TXC                     =6
UDRE                    =5
FE                      =4
DOR                     =3
PE                      =2
UPE                     =2
U2X                     =1
MPCM                    =0
UDR                     =0xCE
;
; SPI
SPCR                    =0x4C
SPCR_io                 =0x2C  ; for IN/OUT
SPIE                    =7
SPE                     =6
DORD                    =5
MSTR                    =4
CPOL                    =3
CPHA                    =2
SPR1                    =1
SPR0                    =0
SPSR                    =0x4D
SPSR_io                 =0x2D  ; for IN/OUT
SPIF                    =7
WCOL                    =6
SPI2X                   =0
SPDR                    =0x4E
SPDR_io                 =0x2E  ; for IN/OUT
;
; EEPROM
EECR                    =0x3F
EECR_io                 =0x1F  ; for IN/OUT, CBI/SBI, SBIC/SBIS
EEPM1                   =5
EEPM0                   =4
EERIE                   =3
EEMPE                   =2
EEMWE                   =2
EEPE                    =1
EEWE                    =1
EERE                    =0
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
TSM                     =7
PSRASY                  =1
PSRSYNC                 =0
;
; Watchdog Timer Control Register
WDTCSR                  =0x60
WDIF                    =7
WDIE                    =6
WDP3                    =5
WDCE                    =4
WDE                     =3
WDP2                    =2
WDP1                    =1
WDP0                    =0
WDTCKD                  =0x62
WDEWIF                  =3
WDEWIE                  =2
WCLKD1                  =1
WCLKD0                  =0
;
; REGCR
REGCR                   =0x63
REGDIS                  =0
;
; OCDR
OCDR                    =0x51
OCDR_io                 =0x31  ; for IN/OUT
MONDR                   =0x51
MONDR_io                =0x31  ; for IN/OUT
;
; Timer/Counter 0
OCR0B                   =0x48
OCR0B_io                =0x28  ; for IN/OUT
OCR0A                   =0x47
OCR0A_io                =0x27  ; for IN/OUT
TCNT0                   =0x46
TCNT0_io                =0x26  ; for IN/OUT
TCCR0B                  =0x45
TCCR0B_io               =0x25  ; for IN/OUT
FOC0A                   =7
FOC0B                   =6
WGM02                   =3
CS02                    =2
CS01                    =1
CS00                    =0
TCCR0A                  =0x44
TCCR0A_io               =0x24  ; for IN/OUT
COM0A1                  =7
COM0A0                  =6
COM0B1                  =5
COM0B0                  =4
WGM01                   =1
WGM00                   =0
;
; Timer/Counter1
ICR1                    =0x86
ICR1L                   =0x86
ICR1H                   =0x87
OCR1C                   =0x8C
OCR1CL                  =0x8C
OCR1CH                  =0x8D
OCR1B                   =0x8A
OCR1BL                  =0x8A
OCR1BH                  =0x8B
OCR1A                   =0x88
OCR1AL                  =0x88
OCR1AH                  =0x89
TCNT1                   =0x84
TCNT1L                  =0x84
TCNT1H                  =0x85
TCCR1C                  =0x82
FOC1A                   =7
FOC1B                   =6
FOC1C                   =5
TCCR1B                  =0x81
ICNC1                   =7
ICES1                   =6
WGM13                   =4
WGM12                   =3
CS12                    =2
CS11                    =1
CS10                    =0
TCCR1A                  =0x80
COM1A1                  =7
COM1A0                  =6
COM1B1                  =5
COM1B0                  =4
COM1C1                  =3
COM1C0                  =2
WGM11                   =1
WGM10                   =0
;
; Oscillator Calibration Register
OSCCAL                  =0x66
;
; clock prescaler control register
CLKPR                   =0x61
CLKPCE                  =7
CLKPS3                  =3
CLKPS2                  =2
CLKPS1                  =1
CLKPS0                  =0
;
; clock control registers
CKSTA                   =0xD2
RCON                    =1
EXTON                   =0
CKSEL1                  =0xD1
RCCKSEL3                =7
RCCKSEL2                =6
RCCKSEL1                =5
RCCKSEL0                =4
EXCKSEL3                =3
EXCKSEL2                =2
EXCKSEL1                =1
EXCKSEL0                =0
CKSEL0                  =0xD0
RCSUT1                  =7
RCSUT0                  =6
EXSUT1                  =5
EXSUT0                  =4
RCE                     =3
EXTE                    =2
CLKS                    =0
;
; PLL control register
PLLCSR                  =0x49
PLLCSR_io               =0x29  ; for IN/OUT
PLLP2                   =4
PLLP1                   =3
PLLP0                   =2
PLLE                    =1
PLOCK                   =0
;
; PRR
PRR0                    =0x64
PRTIM0                  =5
PRTIM1                  =3
PRSPI                   =2
PRR1                    =0x65
PRUSB                   =7
PRUSART1                =0
;
; MCU
MCUSR                   =0x54
MCUSR_io                =0x34  ; for IN/OUT
USBRF                   =5
WDRF                    =3
BORF                    =2
EXTRF                   =1
PORF                    =0
MCUCR                   =0x55
MCUCR_io                =0x35  ; for IN/OUT
IVSEL                   =1
IVCE                    =0
SMCR                    =0x53
SMCR_io                 =0x33  ; for IN/OUT
SM2                     =3
SM1                     =2
SM0                     =1
SE                      =0
;
; SPM Control and Status Register
SPMCSR                  =0x57
SPMCSR_io               =0x37  ; for IN/OUT
SPMIE                   =7
RWWSB                   =6
SIGRD                   =5
RWWSRE                  =4
BLBSET                  =3
PGWRT                   =2
PGERS                   =1
SPMEN                   =0
;
; Timer/Counter Interrupts
TIFR0                   =0x35
TIFR0_io                =0x15  ; for IN/OUT, CBI/SBI, SBIC/SBIS
OCF0B                   =2
OCF0A                   =1
TOV0                    =0
TIMSK0                  =0x6E
OCIE0B                  =2
OCIE0A                  =1
TOIE0                   =0
TIFR1                   =0x36
TIFR1_io                =0x16  ; for IN/OUT, CBI/SBI, SBIC/SBIS
ICF1                    =5
OCF1C                   =3
OCF1B                   =2
OCF1A                   =1
TOV1                    =0
TIMSK1                  =0x6F
ICIE1                   =5
OCIE1C                  =3
OCIE1B                  =2
OCIE1A                  =1
TOIE1                   =0
;
; External Interrupts
EIFR                    =0x3C
EIFR_io                 =0x1C  ; for IN/OUT, CBI/SBI, SBIC/SBIS
INTF7                   =7
INTF6                   =6
INTF5                   =5
INTF4                   =4
INTF3                   =3
INTF2                   =2
INTF1                   =1
INTF0                   =0
EIMSK                   =0x3D
EIMSK_io                =0x1D  ; for IN/OUT, CBI/SBI, SBIC/SBIS
INT7                    =7
INT6                    =6
INT5                    =5
INT4                    =4
INT3                    =3
INT2                    =2
INT1                    =1
INT0                    =0
EICRB                   =0x6A
ISC71                   =7
ISC70                   =6
ISC61                   =5
ISC60                   =4
ISC51                   =3
ISC50                   =2
ISC41                   =1
ISC40                   =0
EICRA                   =0x69
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
PCIFR                   =0x3B
PCIFR_io                =0x1B  ; for IN/OUT, CBI/SBI, SBIC/SBIS
PCIF1                   =1
PCIF0                   =0
PCICR                   =0x68
PCIE1                   =1
PCIE0                   =0
PCMSK1                  =0x6C
PCMSK0                  =0x6B
;
; GPIO
GPIOR0                  =0x3E
GPIOR0_io               =0x1E  ; for IN/OUT, CBI/SBI, SBIC/SBIS
GPIOR1                  =0x4A
GPIOR1_io               =0x2A  ; for IN/OUT
GPIOR2                  =0x4B
GPIOR2_io               =0x2B  ; for IN/OUT
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
; io bits
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
; Port C
PORTC7                  =7
PORTC6                  =6
PORTC5                  =5
PORTC4                  =4
PORTC2                  =2
PORTC1                  =1
PORTC0                  =0
PC7                     =7
PC6                     =6
PC5                     =5
PC4                     =4
PC2                     =2
PC1                     =1
PC0                     =0
DDC7                    =7
DDC6                    =6
DDC5                    =5
DDC4                    =4
DDC2                    =2
DDC1                    =1
DDC0                    =0
PINC7                   =7
PINC6                   =6
PINC5                   =5
PINC4                   =4
PINC2                   =2
PINC1                   =1
PINC0                   =0
;
; Port D
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
; PCMSK
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
; USB io (all memory mapped)
USBCON                  =0xD8
USBE                    =7
FRZCLK                  =5
UDPADD                  =0xDB
UDPADDL                 =0xDB
UDPADDH                 =0xDC
DPACC                   =7
UDCON                   =0xE0
RSTCPU                  =2
RMWKUP                  =1
DETACH                  =0
UDINT                   =0xE1
UPRSMI                  =6
EORSMI                  =5
WAKEUPI                 =4
EORSTI                  =3
SOFI                    =2
SUSPI                   =0
UDIEN                   =0xE2
UPRSME                  =6
EORSME                  =5
WAKEUPE                 =4
EORSTE                  =3
SOFE                    =2
SUSPE                   =0
UDADDR                  =0xE3
ADDEN                   =7
UDFNUM                  =0xE4
UDFNUML                 =0xE4
UDFNUMH                 =0xE5
UDMFN                   =0xE6
FNCERR                  =4
UEINTX                  =0xE8
FIFOCON                 =7
NAKINI                  =6
RWAL                    =5
NAKOUTI                 =4
RXSTPI                  =3
RXOUTI                  =2
STALLEDI                =1
TXINI                   =0
UENUM                   =0xE9
UERST                   =0xEA
EPRST4                  =4
EPRST3                  =3
EPRST2                  =2
EPRST1                  =1
EPRST0                  =0
UECONX                  =0xEB
STALLRQ                 =5
STALLRQC                =4
RSTDT                   =3
EPEN                    =0
UECFG0X                 =0xEC
EPTYPE1                 =7
EPTYPE0                 =6
EPDIR                   =0
UECFG1X                 =0xED
EPSIZE2                 =6
EPSIZE1                 =5
EPSIZE0                 =4
EPBK1                   =3
EPBK0                   =2
ALLOC                   =1
UESTA0X                 =0xEE
CFGOK                   =7
OVERFI                  =6
UNDERFI                 =5
DTSEQ1                  =3
DTSEQ0                  =2
NBUSYBK1                =1
NBUSYBK0                =0
UESTA1X                 =0xEF
CTRLDIR                 =2
CURRBK1                 =1
CURRBK0                 =0
UEIENX                  =0xF0
FLERRE                  =7
NAKINE                  =6
NAKOUTE                 =4
RXSTPE                  =3
RXOUTE                  =2
STALLEDE                =1
TXINE                   =0
UEDATX                  =0xF1
UEBCX                   =0xF2
UEBCLX                  =0xF2
UEINT                   =0xF4
EPINT4                  =4
EPINT3                  =3
EPINT2                  =2
EPINT1                  =1
EPINT0                  =0
PS2CON                  =0xFA
PS2EN                   =0
UPOE                    =0xFB
UPWE1                   =7
UPWE0                   =6
UPDRV1                  =5
UPDRV0                  =4
SCKI                    =3
DATAI                   =2
DPI                     =1
DMI                     =0
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
CKDIV8                  =7
CKOUT                   =6
SUT1                    =5
SUT0                    =4
; #define  CKSEL3   3 
; #define  CKSEL2   2 
; #define  CKSEL1   1 
; #define  CKSEL0   0 
;
; fuses high bits
DWEN                    =7
RSTDSBL                 =6
SPIEN                   =5
WDTON                   =4
EESAVE                  =3
BOOTSZ1                 =2
BOOTSZ0                 =1
BOOTRST                 =0
;
; extended fuses
HWBE                    =3
BODLEVEL2               =2
BODLEVEL1               =1
BODLEVEL0               =0
;
; ------------------------------------------------------------
;
; Interrupt Vector Macros
;
.macro set_vector_INT0
 .area vector (abs)
 .org  0x04
  jmp  @0
 .area text
.endmacro
.macro set_vector_EXT_INT0
 .area vector (abs)
 .org  0x04
  jmp  @0
 .area text
.endmacro
.macro set_vector_INT1
 .area vector (abs)
 .org  0x08
  jmp  @0
 .area text
.endmacro
.macro set_vector_EXT_INT1
 .area vector (abs)
 .org  0x08
  jmp  @0
 .area text
.endmacro
.macro set_vector_INT2
 .area vector (abs)
 .org  0x0C
  jmp  @0
 .area text
.endmacro
.macro set_vector_EXT_INT2
 .area vector (abs)
 .org  0x0C
  jmp  @0
 .area text
.endmacro
.macro set_vector_INT3
 .area vector (abs)
 .org  0x10
  jmp  @0
 .area text
.endmacro
.macro set_vector_EXT_INT3
 .area vector (abs)
 .org  0x10
  jmp  @0
 .area text
.endmacro
.macro set_vector_INT4
 .area vector (abs)
 .org  0x14
  jmp  @0
 .area text
.endmacro
.macro set_vector_EXT_INT4
 .area vector (abs)
 .org  0x14
  jmp  @0
 .area text
.endmacro
.macro set_vector_INT5
 .area vector (abs)
 .org  0x18
  jmp  @0
 .area text
.endmacro
.macro set_vector_EXT_INT5
 .area vector (abs)
 .org  0x18
  jmp  @0
 .area text
.endmacro
.macro set_vector_INT6
 .area vector (abs)
 .org  0x1C
  jmp  @0
 .area text
.endmacro
.macro set_vector_EXT_INT6
 .area vector (abs)
 .org  0x1C
  jmp  @0
 .area text
.endmacro
.macro set_vector_INT7
 .area vector (abs)
 .org  0x20
  jmp  @0
 .area text
.endmacro
.macro set_vector_EXT_INT7
 .area vector (abs)
 .org  0x20
  jmp  @0
 .area text
.endmacro
.macro set_vector_PCINT0
 .area vector (abs)
 .org  0x24
  jmp  @0
 .area text
.endmacro
.macro set_vector_PCINT1
 .area vector (abs)
 .org  0x28
  jmp  @0
 .area text
.endmacro
.macro set_vector_USB_GENERAL
 .area vector (abs)
 .org  0x2C
  jmp  @0
 .area text
.endmacro
.macro set_vector_USB_GEN
 .area vector (abs)
 .org  0x2C
  jmp  @0
 .area text
.endmacro
.macro set_vector_USB_ENDPOINT
 .area vector (abs)
 .org  0x30
  jmp  @0
 .area text
.endmacro
.macro set_vector_USB_EP
 .area vector (abs)
 .org  0x30
  jmp  @0
 .area text
.endmacro
.macro set_vector_WDT
 .area vector (abs)
 .org  0x34
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIMER1_CAPT
 .area vector (abs)
 .org  0x38
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIMER1_COMPA
 .area vector (abs)
 .org  0x3C
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIMER1_COMPB
 .area vector (abs)
 .org  0x40
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIMER1_COMPC
 .area vector (abs)
 .org  0x44
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIMER1_OVF
 .area vector (abs)
 .org  0x48
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIM1_CAPT
 .area vector (abs)
 .org  0x38
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIM1_COMPA
 .area vector (abs)
 .org  0x3C
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIM1_COMPB
 .area vector (abs)
 .org  0x40
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIM1_COMPC
 .area vector (abs)
 .org  0x44
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIM1_OVF
 .area vector (abs)
 .org  0x48
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIMER0_COMPA
 .area vector (abs)
 .org  0x4C
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIMER0_COMPB
 .area vector (abs)
 .org  0x50
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIMER0_OVF
 .area vector (abs)
 .org  0x54
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIM0_COMPA
 .area vector (abs)
 .org  0x4C
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIM0_COMPB
 .area vector (abs)
 .org  0x50
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIM0_OVF
 .area vector (abs)
 .org  0x54
  jmp  @0
 .area text
.endmacro
.macro set_vector_SPI_STC
 .area vector (abs)
 .org  0x58
  jmp  @0
 .area text
.endmacro
;
; USART0 - to ease port of existing code
.macro set_vector_USART0_RX
 .area vector (abs)
 .org  0x5C
  jmp  @0
 .area text
.endmacro
.macro set_vector_USART0_RXC
 .area vector (abs)
 .org  0x5C
  jmp  @0
 .area text
.endmacro
.macro set_vector_USART0_DRE
 .area vector (abs)
 .org  0x60
  jmp  @0
 .area text
.endmacro
.macro set_vector_USART0_UDRE
 .area vector (abs)
 .org  0x60
  jmp  @0
 .area text
.endmacro
.macro set_vector_USART0_TX
 .area vector (abs)
 .org  0x64
  jmp  @0
 .area text
.endmacro
.macro set_vector_USART0_TXC
 .area vector (abs)
 .org  0x64
  jmp  @0
 .area text
.endmacro
.macro set_vector_USART1_RX
 .area vector (abs)
 .org  0x5C
  jmp  @0
 .area text
.endmacro
.macro set_vector_USART1_RXC
 .area vector (abs)
 .org  0x5C
  jmp  @0
 .area text
.endmacro
.macro set_vector_USART1_DRE
 .area vector (abs)
 .org  0x60
  jmp  @0
 .area text
.endmacro
.macro set_vector_USART1_UDRE
 .area vector (abs)
 .org  0x60
  jmp  @0
 .area text
.endmacro
.macro set_vector_USART1_TX
 .area vector (abs)
 .org  0x64
  jmp  @0
 .area text
.endmacro
.macro set_vector_USART1_TXC
 .area vector (abs)
 .org  0x64
  jmp  @0
 .area text
.endmacro
.macro set_vector_ANA_COMP
 .area vector (abs)
 .org  0x68
  jmp  @0
 .area text
.endmacro
.macro set_vector_ANALOG_COMP
 .area vector (abs)
 .org  0x68
  jmp  @0
 .area text
.endmacro
.macro set_vector_EE_RDY
 .area vector (abs)
 .org  0x6C
  jmp  @0
 .area text
.endmacro
.macro set_vector_EE_READY
 .area vector (abs)
 .org  0x6C
  jmp  @0
 .area text
.endmacro
.macro set_vector_SPM_RDY
 .area vector (abs)
 .org  0x70
  jmp  @0
 .area text
.endmacro
.macro set_vector_SPM_READY
 .area vector (abs)
 .org  0x70
  jmp  @0
 .area text
.endmacro
;------
;<eof>
