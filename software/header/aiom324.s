; icc7avr asm header file "aiom324.s"
; converted from c iom324v.h at 2006/2/11
;---------------------------------------------------------------
;
; Some basic chip info
FLASHEND    =0x7FFF
E2END       =0x3FF
RAMEND      =0x8FF
XRAMEND     =0 ; No external RAM
;
;
; Port D
PIND        =0x09
DDRD        =0x0A
PORTD       =0x0B
;
; Port C
PINC        =0x06
DDRC        =0x07
PORTC       =0x08
;
; Port B
PINB        =0x03
DDRB        =0x04
PORTB       =0x05
;
; Port A
PINA        =0x00
DDRA        =0x01
PORTA       =0x02
;
; ADC
ADC         =0x78 ; memory mapped io
ADCL        =0x78 ; memory mapped io
ADCH        =0x79 ; memory mapped io
ADCSRA      =0x7A ; memory mapped io
ADEN        =7
ADSC        =6
ADATE       =5
ADIF        =4
ADIE        =3
ADPS2       =2
ADPS1       =1
ADPS0       =0
ADCSRB      =0x7B ; memory mapped io
ACME        =6
ADTS2       =2
ADTS1       =1
ADTS0       =0
ADMUX       =0x7C ; memory mapped io
REFS1       =7
REFS0       =6
ADLAR       =5
MUX4        =4
MUX3        =3
MUX2        =2
MUX1        =1
MUX0        =0
;
; Analog Comparator Control and Status Register
ACSR        =0x30
ACD         =7
ACBG        =6
ACO         =5
ACI         =4
ACIE        =3
ACIC        =2
ACIS1       =1
ACIS0       =0
;
; DIDR
DIDR0       =0x7E ; memory mapped io
ADC7D       =7
ADC6D       =6
ADC5D       =5
ADC4D       =4
ADC3D       =3
ADC2D       =2
ADC1D       =1
ADC0D       =0
DIDR1       =0x7F ; memory mapped io
AIN1D       =1
AIN0D       =0
;
; USART0
UBRR0H      =0xC5 ; memory mapped io
UBRR0L      =0xC4 ; memory mapped io
UBRR0       =0xC4 ; memory mapped io
UCSR0C      =0xC2 ; memory mapped io
UMSEL01     =7
UMSEL00     =6
UPM01       =5
UPM00       =4
USBS0       =3
UCSZ01      =2
UCSZ00      =1
UCPOL0      =0
UCSR0B      =0xC1 ; memory mapped io
RXCIE0      =7
TXCIE0      =6
UDRIE0      =5
RXEN0       =4
TXEN0       =3
UCSZ02      =2
RXB80       =1
TXB80       =0
UCSR0A      =0xC0 ; memory mapped io
RXC0        =7
TXC0        =6
UDRE0       =5
FE0         =4
DOR0        =3
UPE0        =2
U2X0        =1
MPCM0       =0
UDR0        =0xC6 ; memory mapped io
;
; USART1
UBRR1H      =0xCD ; memory mapped io
UBRR1L      =0xCC ; memory mapped io
UBRR1       =0xCC ; memory mapped io
UCSR1C      =0xCA ; memory mapped io
UMSEL11     =7
UMSEL10     =6
UPM11       =5
UPM10       =4
USBS1       =3
UCSZ11      =2
UCSZ10      =1
UCPOL1      =0
UCSR1B      =0xC9 ; memory mapped io
RXCIE1      =7
TXCIE1      =6
UDRIE1      =5
RXEN1       =4
TXEN1       =3
UCSZ12      =2
RXB81       =1
TXB81       =0
UCSR1A      =0xC8 ; memory mapped io
RXC1        =7
TXC1        =6
UDRE1       =5
FE1         =4
DOR1        =3
UPE1        =2
U2X1        =1
MPCM1       =0
UDR1        =0xCE ; memory mapped io
;
; 2-wire SI
TWBR        =0xB8 ; memory mapped io
TWSR        =0xB9 ; memory mapped io
TWPS1       =1
TWPS0       =0
TWAR        =0xBA ; memory mapped io
TWGCE       =0
TWDR        =0xBB ; memory mapped io
TWCR        =0xBC ; memory mapped io
TWINT       =7
TWEA        =6
TWSTA       =5
TWSTO       =4
TWWC        =3
TWEN        =2
TWIE        =0
TWAM        =0xBD ; memory mapped io
TWAMR       =0xBD ; memory mapped io
;
; SPI
SPCR        =0x2C
SPIE        =7
SPE         =6
DORD        =5
MSTR        =4
CPOL        =3
CPHA        =2
SPR1        =1
SPR0        =0
SPSR        =0x2D
SPIF        =7
WCOL        =6
SPI2X       =0
SPDR        =0x2E
SPCR0       =0x2C
SPIE0       =7
SPE0        =6
DORD0       =5
MSTR0       =4
CPOL0       =3
CPHA0       =2
SPR01       =1
SPR00       =0
SPSR0       =0x2D
SPIF0       =7
WCOL0       =6
SPI2X0      =0
SPDR0       =0x2E
;
; EEPROM
EECR        =0x1F
EEPM1       =5
EEPM0       =4
EERIE       =3
EEMPE       =2
EEMWE       =2
EEPE        =1
EEWE        =1
EERE        =0
EEDR        =0x20
EEAR        =0x21
EEARL       =0x21
EEARH       =0x22
;
; GTCCR
GTCCR       =0x23
TSM         =7
PSRASY      =1
PSR2        =1
PSRSYNC     =0
PSR10       =0
;
; Watchdog Timer Control Register
WDTCSR      =0x60 ; memory mapped io
WDTCR       =0x60 ; memory mapped io
WDIF        =7
WDIE        =6
WDP3        =5
WDCE        =4
WDE         =3
WDP2        =2
WDP1        =1
WDP0        =0
;
; OCDR
OCDR        =0x31
MONDR       =0x31
;
; Timer/Counter 0
OCR0B       =0x28
OCR0A       =0x27
TCNT0       =0x26
TCCR0B      =0x25
FOC0        =7
FOC0A       =7
FOC0B       =6
WGM02       =3
CS02        =2
CS01        =1
CS00        =0
TCCR0A      =0x24
COM0A1      =7
COM0A0      =6
COM0B1      =5
COM0B0      =4
WGM01       =1
WGM00       =0
;
; Timer/Counter1
ICR1        =0x86 ; memory mapped io
ICR1L       =0x86 ; memory mapped io
ICR1H       =0x87 ; memory mapped io
OCR1B       =0x8A ; memory mapped io
OCR1BL      =0x8A ; memory mapped io
OCR1BH      =0x8B ; memory mapped io
OCR1A       =0x88 ; memory mapped io
OCR1AL      =0x88 ; memory mapped io
OCR1AH      =0x89 ; memory mapped io
TCNT1       =0x84 ; memory mapped io
TCNT1L      =0x84 ; memory mapped io
TCNT1H      =0x85 ; memory mapped io
TCCR1C      =0x82 ; memory mapped io
FOC1A       =7
FOC1B       =6
TCCR1B      =0x81 ; memory mapped io
ICNC1       =7
ICES1       =6
WGM13       =4
WGM12       =3
CS12        =2
CS11        =1
CS10        =0
TCCR1A      =0x80 ; memory mapped io
COM1A1      =7
COM1A0      =6
COM1B1      =5
COM1B0      =4
WGM11       =1
WGM10       =0
;
; Timer/Counter2
ASSR        =0xB6 ; memory mapped io
EXCLK       =6
AS2         =5
TCN2UB      =4
OCR2AUB     =3
OCR2BUB     =2
TCR2AUB     =1
TCR2BUB     =0
OCR2B       =0xB4 ; memory mapped io
OCR2A       =0xB3 ; memory mapped io
TCNT2       =0xB2 ; memory mapped io
TCCR2B      =0xB1 ; memory mapped io
FOC2A       =7
FOC2B       =6
WGM22       =3
CS22        =2
CS21        =1
CS20        =0
TCCR2A      =0xB0 ; memory mapped io
COM2A1      =7
COM2A0      =6
COM2B1      =5
COM2B0      =4
WGM21       =1
WGM20       =0
;
; Oscillator Calibration Register
OSCCAL      =0x66 ; memory mapped io
; clock prescaler control register 
CLKPR       =0x61 ; memory mapped io
CLKPCE      =7
CLKPS3      =3
CLKPS2      =2
CLKPS1      =1
CLKPS0      =0
;
; PRR
PRR0        =0x64 ; memory mapped io
PRTWI       =7
PRTIM2      =6
PRTIM0      =5
PRUSART1    =4
PRTIM1      =3
PRSPI       =2
PRUSART0    =1
PRADC       =0
;
; MCU
MCUSR       =0x34
JTRF        =4
WDRF        =3
BORF        =2
EXTRF       =1
PORF        =0
MCUCR       =0x35
JTD         =7
PUD         =4
IVSEL       =1
IVCE        =0
SMCR        =0x33
SM2         =3
SM1         =2
SM0         =1
SE          =0
;
; SPM Control and Status Register
SPMCSR      =0x37
SPMIE       =7
RWWSB       =6
SIGRD       =5
RWWSRE      =4
BLBSET      =3
PGWRT       =2
PGERS       =1
SPMEN       =0
;
; Timer/Counter Interrupts
TIFR0       =0x15
OCF0B       =2
OCF0A       =1
TOV0        =0
TIMSK0      =0x6E ; memory mapped io
OCIE0B      =2
OCIE0A      =1
TOIE0       =0
TIFR1       =0x16
ICF1        =5
OCF1B       =2
OCF1A       =1
TOV1        =0
TIMSK1      =0x6F ; memory mapped io
ICIE1       =5
OCIE1B      =2
OCIE1A      =1
TOIE1       =0
TIFR2       =0x17
OCF2B       =2
OCF2A       =1
TOV2        =0
TIMSK2      =0x70 ; memory mapped io
OCIE2B      =2
OCIE2A      =1
TOIE2       =0
; Èxternal Interrupts 
EIFR        =0x1C
INTF2       =2
INTF1       =1
INTF0       =0
EIMSK       =0x1D
INT2        =2
INT1        =1
INT0        =0
EICRA       =0x69 ; memory mapped io
ISC21       =5
ISC20       =4
ISC11       =3
ISC10       =2
ISC01       =1
ISC00       =0
;
; Pin Change Interrupts
PCIFR       =0x1B
PCIF3       =3
PCIF2       =2
PCIF1       =1
PCIF0       =0
PCICR       =0x68 ; memory mapped io
PCIE3       =3
PCIE2       =2
PCIE1       =1
PCIE0       =0
PCMSK0      =0x6B ; memory mapped io
PCMSK1      =0x6C ; memory mapped io
PCMSK2      =0x6D ; memory mapped io
PCMSK3      =0x73 ; memory mapped io
;
; GPIO
GPIO0       =0x1E
GPIO1       =0x2A
GPIO2       =0x2B
;
; RAM page Z-pointer
; #define RAMPZ	(*(volatile unsigned char *)0x5B) 
; #define  RAMPZ0   0 
;
; Stack Pointer
SP          =0x3D
SPL         =0x3D
SPH         =0x3E
;
; Status REGister
SREG        =0x3F
; bits 
;
; Port A
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
; Port B
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
; Port C
PORTC7      =7
PORTC6      =6
PORTC5      =5
PORTC4      =4
PORTC3      =3
PORTC2      =2
PORTC1      =1
PORTC0      =0
PC7         =7
PC6         =6
PC5         =5
PC4         =4
PC3         =3
PC2         =2
PC1         =1
PC0         =0
DDC7        =7
DDC6        =6
DDC5        =5
DDC4        =4
DDC3        =3
DDC2        =2
DDC1        =1
DDC0        =0
PINC7       =7
PINC6       =6
PINC5       =5
PINC4       =4
PINC3       =3
PINC2       =2
PINC1       =1
PINC0       =0
;
; Port D
PORTD7      =7
PORTD6      =6
PORTD5      =5
PORTD4      =4
PORTD3      =3
PORTD2      =2
PORTD1      =1
PORTD0      =0
PD7         =7
PD6         =6
PD5         =5
PD4         =4
PD3         =3
PD2         =2
PD1         =1
PD0         =0
DDD7        =7
DDD6        =6
DDD5        =5
DDD4        =4
DDD3        =3
DDD2        =2
DDD1        =1
DDD0        =0
PIND7       =7
PIND6       =6
PIND5       =5
PIND4       =4
PIND3       =3
PIND2       =2
PIND1       =1
PIND0       =0
;
; PCMSK3
PCINT31     =7
PCINT30     =6
PCINT29     =5
PCINT28     =4
PCINT27     =3
PCINT26     =2
PCINT25     =1
PCINT24     =0
;
; PCMSK2
PCINT23     =7
PCINT22     =6
PCINT21     =5
PCINT20     =4
PCINT19     =3
PCINT18     =2
PCINT17     =1
PCINT16     =0
;
; PCMSK1
PCINT15     =7
PCINT14     =6
PCINT13     =5
PCINT12     =4
PCINT11     =3
PCINT10     =2
PCINT9      =1
PCINT8      =0
;
; PCMSK0
PCINT7      =7
PCINT6      =6
PCINT5      =5
PCINT4      =4
PCINT3      =3
PCINT2      =2
PCINT1      =1
PCINT0      =0
;
; Lock and Fuse Bits with LPM/SPM instructions
; lock bits 
BLB12       =5
BLB11       =4
BLB02       =3
BLB01       =2
LB2         =1
LB1         =0
;
; fuses low bits
CKDIV8      =7
CKOUT       =6
SUT1        =5
SUT0        =4
CKSEL3      =3
CKSEL2      =2
CKSEL1      =1
CKSEL0      =0
;
; fuses high bits
OCDEN       =7
JTAGEN      =6
SPIEN       =5
WDTON       =4
EESAVE      =3
BOOTSZ1     =2
BOOTSZ0     =1
BOOTRST     =0
;
; extended fuses
BODLEVEL2   =2
BODLEVEL1   =1
BODLEVEL0   =0
;
;
; Interrupt Vectors
;
.macro set_vector_INT0
 .area vector (abs)
 .org  4
  jmp  @0
 .area text
.endmacro
.macro set_vector_EXT_INT0
 .area vector (abs)
 .org  4
  jmp  @0
 .area text
.endmacro
.macro set_vector_INT1
 .area vector (abs)
 .org  8
  jmp  @0
 .area text
.endmacro
.macro set_vector_EXT_INT1
 .area vector (abs)
 .org  8
  jmp  @0
 .area text
.endmacro
.macro set_vector_INT2
 .area vector (abs)
 .org  12
  jmp  @0
 .area text
.endmacro
.macro set_vector_EXT_INT2
 .area vector (abs)
 .org  12
  jmp  @0
 .area text
.endmacro
.macro set_vector_PCINT0
 .area vector (abs)
 .org  16
  jmp  @0
 .area text
.endmacro
.macro set_vector_PCINT1
 .area vector (abs)
 .org  20
  jmp  @0
 .area text
.endmacro
.macro set_vector_PCINT2
 .area vector (abs)
 .org  24
  jmp  @0
 .area text
.endmacro
.macro set_vector_PCINT3
 .area vector (abs)
 .org  28
  jmp  @0
 .area text
.endmacro
.macro set_vector_WDT
 .area vector (abs)
 .org  32
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIMER2_COMPA
 .area vector (abs)
 .org  36
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIMER2_COMPB
 .area vector (abs)
 .org  40
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIMER2_OVF
 .area vector (abs)
 .org  44
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIM2_COMPA
 .area vector (abs)
 .org  36
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIM2_COMPB
 .area vector (abs)
 .org  40
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIM2_OVF
 .area vector (abs)
 .org  44
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIMER1_CAPT
 .area vector (abs)
 .org  48
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIMER1_COMPA
 .area vector (abs)
 .org  52
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIMER1_COMPB
 .area vector (abs)
 .org  56
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIMER1_OVF
 .area vector (abs)
 .org  60
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIM1_CAPT
 .area vector (abs)
 .org  48
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIM1_COMPA
 .area vector (abs)
 .org  52
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIM1_COMPB
 .area vector (abs)
 .org  56
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIM1_OVF
 .area vector (abs)
 .org  60
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIMER0_COMPA
 .area vector (abs)
 .org  64
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIMER0_COMPB
 .area vector (abs)
 .org  68
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIMER0_OVF
 .area vector (abs)
 .org  72
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIM0_COMPA
 .area vector (abs)
 .org  64
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIM0_COMPB
 .area vector (abs)
 .org  68
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIM0_OVF
 .area vector (abs)
 .org  72
  jmp  @0
 .area text
.endmacro
.macro set_vector_SPI_STC
 .area vector (abs)
 .org  76
  jmp  @0
 .area text
.endmacro
.macro set_vector_USART0_RX
 .area vector (abs)
 .org  80
  jmp  @0
 .area text
.endmacro
.macro set_vector_USART0_RXC
 .area vector (abs)
 .org  80
  jmp  @0
 .area text
.endmacro
.macro set_vector_USART0_DRE
 .area vector (abs)
 .org  84
  jmp  @0
 .area text
.endmacro
.macro set_vector_USART0_UDRE
 .area vector (abs)
 .org  84
  jmp  @0
 .area text
.endmacro
.macro set_vector_USART0_TX
 .area vector (abs)
 .org  88
  jmp  @0
 .area text
.endmacro
.macro set_vector_USART0_TXC
 .area vector (abs)
 .org  88
  jmp  @0
 .area text
.endmacro
.macro set_vector_ANA_COMP
 .area vector (abs)
 .org  92
  jmp  @0
 .area text
.endmacro
.macro set_vector_ANALOG_COMP
 .area vector (abs)
 .org  92
  jmp  @0
 .area text
.endmacro
.macro set_vector_ADC
 .area vector (abs)
 .org  96
  jmp  @0
 .area text
.endmacro
.macro set_vector_EE_RDY
 .area vector (abs)
 .org  100
  jmp  @0
 .area text
.endmacro
.macro set_vector_EE_READY
 .area vector (abs)
 .org  100
  jmp  @0
 .area text
.endmacro
.macro set_vector_TWI
 .area vector (abs)
 .org  104
  jmp  @0
 .area text
.endmacro
.macro set_vector_TWSI
 .area vector (abs)
 .org  104
  jmp  @0
 .area text
.endmacro
.macro set_vector_SPM_RDY
 .area vector (abs)
 .org  108
  jmp  @0
 .area text
.endmacro
.macro set_vector_SPM_READY
 .area vector (abs)
 .org  108
  jmp  @0
 .area text
.endmacro
.macro set_vector_USART1_RX
 .area vector (abs)
 .org  112
  jmp  @0
 .area text
.endmacro
.macro set_vector_USART1_RXC
 .area vector (abs)
 .org  112
  jmp  @0
 .area text
.endmacro
.macro set_vector_USART1_DRE
 .area vector (abs)
 .org  116
  jmp  @0
 .area text
.endmacro
.macro set_vector_USART1_UDRE
 .area vector (abs)
 .org  116
  jmp  @0
 .area text
.endmacro
.macro set_vector_USART1_TX
 .area vector (abs)
 .org  120
  jmp  @0
 .area text
.endmacro
.macro set_vector_USART1_TXC
 .area vector (abs)
 .org  120
  jmp  @0
 .area text
.endmacro
;
;---------
;<eof>
