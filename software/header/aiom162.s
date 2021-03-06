; iccavr asm header file for m162
; generated by maschag 0.8.7 on 04-15-2009
;-------------------------------------------------------------
;
; Memory info
FLASHEND                =0x3FFF
E2END                   =0x01FF
RAMSTART                =0x0100
RAMEND                  =0x04FF
XRAMEND                 =0xFFFF
;
;-------------------------------------------------------------
;
; UART1
UBRR1H                  =0x3C  ; for IN/OUT
URSEL1                  =7
UBRR1L                  =0x00  ; for IN/OUT, CBI/SBI, SBIC/SBIS
UBRR1                   =0x00  ; for IN/OUT, CBI/SBI, SBIC/SBIS
UCSR1C                  =0x3C  ; for IN/OUT
URSEL1                  =7
UMSEL1                  =6
UPM11                   =5
UPM10                   =4
USBS1                   =3
UCSZ11                  =2
UCSZ10                  =1
UCPOL1                  =0
UCSR1B                  =0x01  ; for IN/OUT, CBI/SBI, SBIC/SBIS
RXCIE1                  =7
TXCIE1                  =6
UDRIE1                  =5
RXEN1                   =4
TXEN1                   =3
UCSZ12                  =2
RXB81                   =1
TXB81                   =0
UCSR1A                  =0x02  ; for IN/OUT, CBI/SBI, SBIC/SBIS
RXC1                    =7
TXC1                    =6
UDRE1                   =5
FE1                     =4
OVR1                    =3
DOR1                    =3
OR1                     =3
UPE1                    =2
U2X1                    =1
MPCM1                   =0
UDR1                    =0x03  ; for IN/OUT, CBI/SBI, SBIC/SBIS
;
; UART0
UBRR0H                  =0x20  ; for IN/OUT, CBI/SBI, SBIC/SBIS
URSEL0                  =7
UBRR0L                  =0x09  ; for IN/OUT, CBI/SBI, SBIC/SBIS
UBRR0                   =0x09  ; for IN/OUT, CBI/SBI, SBIC/SBIS
UCSR0C                  =0x20  ; for IN/OUT, CBI/SBI, SBIC/SBIS
URSEL0                  =7
UMSEL0                  =6
UPM01                   =5
UPM00                   =4
USBS0                   =3
UCSZ01                  =2
UCSZ00                  =1
UCPOL0                  =0
UCSR0B                  =0x0A  ; for IN/OUT, CBI/SBI, SBIC/SBIS
RXCIE0                  =7
TXCIE0                  =6
UDRIE0                  =5
RXEN0                   =4
TXEN0                   =3
UCSZ02                  =2
RXB80                   =1
TXB80                   =0
UCSR0A                  =0x0B  ; for IN/OUT, CBI/SBI, SBIC/SBIS
RXC0                    =7
TXC0                    =6
UDRE0                   =5
FE0                     =4
OVR0                    =3
DOR0                    =3
OR0                     =3
UPE0                    =2
U2X0                    =1
MPCM0                   =0
UDR0                    =0x0C  ; for IN/OUT, CBI/SBI, SBIC/SBIS
;
; Analog Comparator
ACSR                    =0x08  ; for IN/OUT, CBI/SBI, SBIC/SBIS
ACD                     =7
AINBG                   =6
ACBG                    =6
ACO                     =5
ACI                     =4
ACIE                    =3
ACIC                    =2
ACIS1                   =1
ACIS0                   =0
;
; SPI
SPCR                    =0x0D  ; for IN/OUT, CBI/SBI, SBIC/SBIS
SPIE                    =7
SPE                     =6
DORD                    =5
MSTR                    =4
CPOL                    =3
CPHA                    =2
SPR1                    =1
SPR0                    =0
SPSR                    =0x0E  ; for IN/OUT, CBI/SBI, SBIC/SBIS
SPIF                    =7
WCOL                    =6
SPI2X                   =0
SPDR                    =0x0F  ; for IN/OUT, CBI/SBI, SBIC/SBIS
;
; Port E
PINE                    =0x05  ; for IN/OUT, CBI/SBI, SBIC/SBIS
DDRE                    =0x06  ; for IN/OUT, CBI/SBI, SBIC/SBIS
PORTE                   =0x07  ; for IN/OUT, CBI/SBI, SBIC/SBIS
;
; Port D
PIND                    =0x10  ; for IN/OUT, CBI/SBI, SBIC/SBIS
DDRD                    =0x11  ; for IN/OUT, CBI/SBI, SBIC/SBIS
PORTD                   =0x12  ; for IN/OUT, CBI/SBI, SBIC/SBIS
;
; Port C
PINC                    =0x13  ; for IN/OUT, CBI/SBI, SBIC/SBIS
DDRC                    =0x14  ; for IN/OUT, CBI/SBI, SBIC/SBIS
PORTC                   =0x15  ; for IN/OUT, CBI/SBI, SBIC/SBIS
;
; Port B
PINB                    =0x16  ; for IN/OUT, CBI/SBI, SBIC/SBIS
DDRB                    =0x17  ; for IN/OUT, CBI/SBI, SBIC/SBIS
PORTB                   =0x18  ; for IN/OUT, CBI/SBI, SBIC/SBIS
;
; Port A
PINA                    =0x19  ; for IN/OUT, CBI/SBI, SBIC/SBIS
DDRA                    =0x1A  ; for IN/OUT, CBI/SBI, SBIC/SBIS
PORTA                   =0x1B  ; for IN/OUT, CBI/SBI, SBIC/SBIS
;
; EEPROM
EECR                    =0x1C  ; for IN/OUT, CBI/SBI, SBIC/SBIS
EERIE                   =3
EEMWE                   =2
EEWE                    =1
EERE                    =0
EEDR                    =0x1D  ; for IN/OUT, CBI/SBI, SBIC/SBIS
EEAR                    =0x1E  ; for IN/OUT, CBI/SBI, SBIC/SBIS
EEARL                   =0x1E  ; for IN/OUT, CBI/SBI, SBIC/SBIS
EEARH                   =0x1F  ; for IN/OUT, CBI/SBI, SBIC/SBIS
;
; Watch Dog Timer Control Register
WDTCR                   =0x21  ; for IN/OUT
WDTOE                   =4
WDCE                    =4
WDE                     =3
WDP2                    =2
WDP1                    =1
WDP0                    =0
;
; Timer/Counter3
ICR3                    =0x80  ; memory mapped, for LD/ST
ICR3L                   =0x80  ; memory mapped, for LD/ST
ICR3H                   =0x81  ; memory mapped, for LD/ST
OCR3B                   =0x84  ; memory mapped, for LD/ST
OCR3BL                  =0x84  ; memory mapped, for LD/ST
OCR3BH                  =0x85  ; memory mapped, for LD/ST
OCR3A                   =0x86  ; memory mapped, for LD/ST
OCR3AL                  =0x86  ; memory mapped, for LD/ST
OCR3AH                  =0x87  ; memory mapped, for LD/ST
TCNT3                   =0x88  ; memory mapped, for LD/ST
TCNT3L                  =0x88  ; memory mapped, for LD/ST
TCNT3H                  =0x89  ; memory mapped, for LD/ST
TCCR3B                  =0x8A  ; memory mapped, for LD/ST
ICNC3                   =7
ICES3                   =6
WGM33                   =4
WGM32                   =3
CS32                    =2
CS31                    =1
CS30                    =0
TCCR3A                  =0x8B  ; memory mapped, for LD/ST
COM3A1                  =7
COM3A0                  =6
COM3B1                  =5
COM3B0                  =4
FOC3A                   =3
FOC3B                   =2
WGM31                   =1
WGM30                   =0
;
; Timer/Counter2
ASSR                    =0x26  ; for IN/OUT
AS2                     =3
TCN2UB                  =2
OCR2UB                  =1
TCR2UB                  =0
OCR2                    =0x22  ; for IN/OUT
TCNT2                   =0x23  ; for IN/OUT
TCCR2                   =0x27  ; for IN/OUT
FOC2                    =7
WGM20                   =6
COM21                   =5
COM20                   =4
WGM21                   =3
CS22                    =2
CS21                    =1
CS20                    =0
;
; Timer/Counter1
ICR1                    =0x24  ; for IN/OUT
ICR1L                   =0x24  ; for IN/OUT
ICR1H                   =0x25  ; for IN/OUT
OCR1B                   =0x28  ; for IN/OUT
OCR1BL                  =0x28  ; for IN/OUT
OCR1BH                  =0x29  ; for IN/OUT
OCR1A                   =0x2A  ; for IN/OUT
OCR1AL                  =0x2A  ; for IN/OUT
OCR1AH                  =0x2B  ; for IN/OUT
TCNT1                   =0x2C  ; for IN/OUT
TCNT1L                  =0x2C  ; for IN/OUT
TCNT1H                  =0x2D  ; for IN/OUT
TCCR1B                  =0x2E  ; for IN/OUT
ICNC1                   =7
ICES1                   =6
WGM13                   =4
WGM12                   =3
CS12                    =2
CS11                    =1
CS10                    =0
TCCR1A                  =0x2F  ; for IN/OUT
COM1A1                  =7
COM1A0                  =6
COM1B1                  =5
COM1B0                  =4
FOC1A                   =3
FOC1B                   =2
WGM11                   =1
WGM10                   =0
;
; Timer/Counter0
OCR0                    =0x31  ; for IN/OUT
TCNT0                   =0x32  ; for IN/OUT
TCCR0                   =0x33  ; for IN/OUT
FOC0                    =7
WGM00                   =6
COM01                   =5
COM00                   =4
WGM01                   =3
CS02                    =2
CS01                    =1
CS00                    =0
;
; Timer/Counter Interrupts
TIFR                    =0x38  ; for IN/OUT
TOV1                    =7
OCF1A                   =6
OCF1B                   =5
OCF2                    =4
ICF1                    =3
TOV2                    =2
TOV0                    =1
OCF0                    =0
TIMSK                   =0x39  ; for IN/OUT
TOIE1                   =7
OCIE1A                  =6
OCIE1B                  =5
OCIE2                   =4
TICIE1                  =3
TOIE2                   =2
TOIE0                   =1
OCIE0                   =0
ETIFR                   =0x7C  ; memory mapped, for LD/ST
ICF3                    =5
OCF3A                   =4
OCF3B                   =3
TOV3                    =2
ETIMSK                  =0x7D  ; memory mapped, for LD/ST
TICIE3                  =5
OCIE3A                  =4
OCIE3B                  =3
TOIE3                   =2
;
; Special Function I/O Register
SFIOR                   =0x30  ; for IN/OUT
TSM                     =7
XMBK                    =6
XMM2                    =5
XMM1                    =4
XMM0                    =3
PUD                     =2
PSR2                    =1
PSR310                  =0
;
; MCU Control/Status Register
MCUSR                   =0x34  ; for IN/OUT
MCUCSR                  =0x34  ; for IN/OUT
JTD                     =7
SM2                     =5
JTRF                    =4
WDRF                    =3
BORF                    =2
EXTRF                   =1
PORF                    =0
MCUCR                   =0x35  ; for IN/OUT
SRE                     =7
SRW10                   =6
SE                      =5
SM1                     =4
ISC11                   =3
ISC10                   =2
ISC01                   =1
ISC00                   =0
EMCUCR                  =0x36  ; for IN/OUT
SM0                     =7
SRL2                    =6
SRL1                    =5
SRL0                    =4
SRW01                   =3
SRW00                   =2
SRW11                   =1
ISC2                    =0
;
; SPM Conrol Register
SPMCR                   =0x37  ; for IN/OUT
SPMIE                   =7
RWWSB                   =6
RWWSRE                  =4
BLBSET                  =3
PGWRT                   =2
PGERS                   =1
SPMEN                   =0
;
; JTAG Debug Register
OCDR                    =0x04  ; for IN/OUT, CBI/SBI, SBIC/SBIS
;
; OSC Calibration Register
OSCCAL                  =0x04  ; for IN/OUT, CBI/SBI, SBIC/SBIS
;
; Clock Prescaler
CLKPR                   =0x61  ; memory mapped, for LD/ST
CLKPCE                  =7
CLKPS3                  =3
CLKPS2                  =2
CLKPS1                  =1
CLKPS0                  =0
;
; Pin Change Interrupts
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
; General Interrupts
GIFR                    =0x3A  ; for IN/OUT
INTF1                   =7
INTF0                   =6
INTF2                   =5
PCIF1                   =4
PCIF0                   =3
GICR                    =0x3B  ; for IN/OUT
INT1                    =7
INT0                    =6
INT2                    =5
PCIE1                   =4
PCIE0                   =3
IVSEL                   =1
IVCE                    =0
;
; Stack Pointer
SP                      =0x3D  ; for IN/OUT
SPL                     =0x3D  ; for IN/OUT
SPH                     =0x3E  ; for IN/OUT
;
; Status Register
SREG                    =0x3F  ; for IN/OUT
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
; Port E bits
PORTE2                  =2
PORTE1                  =1
PORTE0                  =0
PE2                     =2
PE1                     =1
PE0                     =0
DDE2                    =2
DDE1                    =1
DDE0                    =0
PINE2                   =2
PINE1                   =1
PINE0                   =0
;
; Lock and Fuse Bits with LPM/SPM instructions
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
CKSEL3                  =3
CKSEL2                  =2
CKSEL1                  =1
CKSEL0                  =0
;
; fuses high bits
OCDEN                   =7
JTAGEN                  =6
SPIEN                   =5
WDTON                   =4
EESAVE                  =3
BOOTSZ1                 =2
BOOTSZ0                 =1
BOOTRST                 =0
;
; extended fuses
M161C                   =4
BODLEVEL2               =3
BODLEVEL1               =2
BODLEVEL0               =1
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
.macro set_vector_PCINT0
 .area vector (abs)
 .org  0x10
  jmp  @0
 .area text
.endmacro
.macro set_vector_PCINT1
 .area vector (abs)
 .org  0x14
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIMER3_CAPT
 .area vector (abs)
 .org  0x18
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIMER3_COMPA
 .area vector (abs)
 .org  0x1C
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIMER3_COMPB
 .area vector (abs)
 .org  0x20
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIMER3_OVF
 .area vector (abs)
 .org  0x24
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIMER2_COMPA
 .area vector (abs)
 .org  0x28
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIMER2_COMP
 .area vector (abs)
 .org  0x28
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIMER2_OVF
 .area vector (abs)
 .org  0x2C
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIMER1_CAPT
 .area vector (abs)
 .org  0x30
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIM1_CAPT
 .area vector (abs)
 .org  0x30
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIMER1_COMPA
 .area vector (abs)
 .org  0x34
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIM1_COMPA
 .area vector (abs)
 .org  0x34
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIMER1_COMPB
 .area vector (abs)
 .org  0x38
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIM1_COMPB
 .area vector (abs)
 .org  0x38
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIMER1_OVF
 .area vector (abs)
 .org  0x3C
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIM1_OVF
 .area vector (abs)
 .org  0x3C
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIMER0_COMPA
 .area vector (abs)
 .org  0x40
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIMER0_COMP
 .area vector (abs)
 .org  0x40
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIM0_COMP
 .area vector (abs)
 .org  0x40
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIMER0_OVF
 .area vector (abs)
 .org  0x44
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIM0_OVF
 .area vector (abs)
 .org  0x44
  jmp  @0
 .area text
.endmacro
.macro set_vector_SPI_STC
 .area vector (abs)
 .org  0x48
  jmp  @0
 .area text
.endmacro
.macro set_vector_USART_RX
 .area vector (abs)
 .org  0x4C
  jmp  @0
 .area text
.endmacro
.macro set_vector_USART_RXC
 .area vector (abs)
 .org  0x4C
  jmp  @0
 .area text
.endmacro
.macro set_vector_USART0_RX
 .area vector (abs)
 .org  0x4C
  jmp  @0
 .area text
.endmacro
.macro set_vector_USART0_RXC
 .area vector (abs)
 .org  0x4C
  jmp  @0
 .area text
.endmacro
.macro set_vector_USART1_RX
 .area vector (abs)
 .org  0x50
  jmp  @0
 .area text
.endmacro
.macro set_vector_USART1_RXC
 .area vector (abs)
 .org  0x50
  jmp  @0
 .area text
.endmacro
.macro set_vector_USART_DRE
 .area vector (abs)
 .org  0x54
  jmp  @0
 .area text
.endmacro
.macro set_vector_USART_UDRE
 .area vector (abs)
 .org  0x54
  jmp  @0
 .area text
.endmacro
.macro set_vector_USART0_DRE
 .area vector (abs)
 .org  0x54
  jmp  @0
 .area text
.endmacro
.macro set_vector_USART0_UDRE
 .area vector (abs)
 .org  0x54
  jmp  @0
 .area text
.endmacro
.macro set_vector_USART1_DRE
 .area vector (abs)
 .org  0x58
  jmp  @0
 .area text
.endmacro
.macro set_vector_USART1_UDRE
 .area vector (abs)
 .org  0x58
  jmp  @0
 .area text
.endmacro
.macro set_vector_USART_TX
 .area vector (abs)
 .org  0x5C
  jmp  @0
 .area text
.endmacro
.macro set_vector_USART_TXC
 .area vector (abs)
 .org  0x5C
  jmp  @0
 .area text
.endmacro
.macro set_vector_USART0_TX
 .area vector (abs)
 .org  0x5C
  jmp  @0
 .area text
.endmacro
.macro set_vector_USART0_TXC
 .area vector (abs)
 .org  0x5C
  jmp  @0
 .area text
.endmacro
.macro set_vector_USART1_TX
 .area vector (abs)
 .org  0x60
  jmp  @0
 .area text
.endmacro
.macro set_vector_USART1_TXC
 .area vector (abs)
 .org  0x60
  jmp  @0
 .area text
.endmacro
.macro set_vector_EE_RDY
 .area vector (abs)
 .org  0x64
  jmp  @0
 .area text
.endmacro
.macro set_vector_EE_READY
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
.macro set_vector_SPM_RDY
 .area vector (abs)
 .org  0x6C
  jmp  @0
 .area text
.endmacro
.macro set_vector_SPM_READY
 .area vector (abs)
 .org  0x6C
  jmp  @0
 .area text
.endmacro
;------
;<eof>
