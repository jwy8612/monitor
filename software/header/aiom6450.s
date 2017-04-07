; iccavr asm header file for m6450
; generated by maschag 0.8.7 on 04-15-2009
;-------------------------------------------------------------
;
; Memory info
FLASHEND                =0xFFFF
E2END                   =0x07FF
RAMSTART                =0x0100
RAMEND                  =0x10FF
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
PINC                    =0x06  ; for IN/OUT, CBI/SBI, SBIC/SBIS
DDRC                    =0x07  ; for IN/OUT, CBI/SBI, SBIC/SBIS
PORTC                   =0x08  ; for IN/OUT, CBI/SBI, SBIC/SBIS
;
; Port D
PIND                    =0x09  ; for IN/OUT, CBI/SBI, SBIC/SBIS
DDRD                    =0x0A  ; for IN/OUT, CBI/SBI, SBIC/SBIS
PORTD                   =0x0B  ; for IN/OUT, CBI/SBI, SBIC/SBIS
;
; Port E
PINE                    =0x0C  ; for IN/OUT, CBI/SBI, SBIC/SBIS
DDRE                    =0x0D  ; for IN/OUT, CBI/SBI, SBIC/SBIS
PORTE                   =0x0E  ; for IN/OUT, CBI/SBI, SBIC/SBIS
;
; Port F
PINF                    =0x0F  ; for IN/OUT, CBI/SBI, SBIC/SBIS
DDRF                    =0x10  ; for IN/OUT, CBI/SBI, SBIC/SBIS
PORTF                   =0x11  ; for IN/OUT, CBI/SBI, SBIC/SBIS
;
; Port G
PING                    =0x12  ; for IN/OUT, CBI/SBI, SBIC/SBIS
DDRG                    =0x13  ; for IN/OUT, CBI/SBI, SBIC/SBIS
PORTG                   =0x14  ; for IN/OUT, CBI/SBI, SBIC/SBIS
;
; Port H
PINH                    =0xD8  ; memory mapped, for LD/ST
DDRH                    =0xD9  ; memory mapped, for LD/ST
PORTH                   =0xDA  ; memory mapped, for LD/ST
;
; Port J
PINJ                    =0xDB  ; memory mapped, for LD/ST
DDRJ                    =0xDC  ; memory mapped, for LD/ST
PORTJ                   =0xDD  ; memory mapped, for LD/ST
;
; GPIO
GPIOR0                  =0x1E  ; for IN/OUT, CBI/SBI, SBIC/SBIS
GPIOR1                  =0x2A  ; for IN/OUT
GPIOR2                  =0x2B  ; for IN/OUT
;
; EEPROM
EECR                    =0x1F  ; for IN/OUT, CBI/SBI, SBIC/SBIS
EERIE                   =3
EEMWE                   =2
EEWE                    =1
EERE                    =0
EEDR                    =0x20  ; for IN/OUT, CBI/SBI, SBIC/SBIS
EEAR                    =0x21  ; for IN/OUT
EEARL                   =0x21  ; for IN/OUT
EEARH                   =0x22  ; for IN/OUT
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
; Analog Comparator
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
MCUCSR                  =0x34  ; for IN/OUT
MCUSR                   =0x34  ; for IN/OUT
JTRF                    =4
WDRF                    =3
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
SPMCR                   =0x37  ; for IN/OUT
SPMIE                   =7
RWWSB                   =6
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
EIFR                    =0x1C  ; for IN/OUT, CBI/SBI, SBIC/SBIS
PCIF3                   =7
PCIF2                   =6
PCIF1                   =5
PCIF0                   =4
INTF0                   =0
EIMSK                   =0x1D  ; for IN/OUT, CBI/SBI, SBIC/SBIS
PCIE3                   =7
PCIE2                   =6
PCIE1                   =5
PCIE0                   =4
INT0                    =0
;
; Timer/Counter Interrupts
TIFR0                   =0x15  ; for IN/OUT, CBI/SBI, SBIC/SBIS
OCF0A                   =1
OCF0                    =1
TOV0                    =0
TIFR1                   =0x16  ; for IN/OUT, CBI/SBI, SBIC/SBIS
ICF1                    =5
OCF1B                   =2
OCF1A                   =1
TOV1                    =0
TIFR2                   =0x17  ; for IN/OUT, CBI/SBI, SBIC/SBIS
OCF2A                   =1
OCF2                    =1
TOV2                    =0
;
; General Timer Control
GTCCR                   =0x23  ; for IN/OUT
TSM                     =7
PSR2                    =1
PSR10                   =0
;
; to enable multi-part lib writing
;
; Timer/Counter 0
TCCR0A                  =0x24  ; for IN/OUT
TCCR0                   =0x24  ; for IN/OUT
FOC0                    =7
FOC0A                   =7
WGM00                   =6
COM01                   =5
COM00                   =4
COM0A1                  =5
COM0A0                  =4
WGM01                   =3
CS02                    =2
CS01                    =1
CS00                    =0
TCNT0                   =0x26  ; for IN/OUT
OCR0A                   =0x27  ; for IN/OUT
OCR0                    =0x27  ; for IN/OUT
;
; rest is memory mapped
;
; Watchdog Timer Control Register
WDTCR                   =0x60  ; memory mapped, for LD/ST
WDTOE                   =4
WDCE                    =4
WDE                     =3
WDP2                    =2
WDP1                    =1
WDP0                    =0
;
; Oscillator
CLKPR                   =0x61  ; memory mapped, for LD/ST
CLKPCE                  =7
CLKPS3                  =3
CLKPS2                  =2
CLKPS1                  =1
CLKPS0                  =0
OSCCAL                  =0x66  ; memory mapped, for LD/ST
;
; PRR
PRR                     =0x64  ; memory mapped, for LD/ST
PRTIM1                  =3
PRSPI                   =2
PRUSART0                =1
PRUSART                 =1
PRADC                   =0
;
; External Interrupts
EICRA                   =0x69  ; memory mapped, for LD/ST
ISC01                   =1
ISC00                   =0
;
; Pin Change Interrupts
;
; PCINT0..7
PCMSK0                  =0x6B  ; memory mapped, for LD/ST
;
; PCINT8..15
PCMSK1                  =0x6C  ; memory mapped, for LD/ST
;
; PCINT16..23
PCMSK2                  =0x6D  ; memory mapped, for LD/ST
;
; PCINT24..30
PCMSK3                  =0x73  ; memory mapped, for LD/ST
;
; Timer/Counter Interrupts
TIMSK0                  =0x6E  ; memory mapped, for LD/ST
OCIE0A                  =1
OCIE0                   =1
TOIE0                   =0
TIMSK1                  =0x6F  ; memory mapped, for LD/ST
TICIE1                  =5
ICIE1                   =5
OCIE1B                  =2
OCIE1A                  =1
TOIE1                   =0
TIMSK2                  =0x70  ; memory mapped, for LD/ST
OCIE2A                  =1
OCIE2                   =1
TOIE2                   =0
;
; Timer/Counter 1
TCCR1A                  =0x80  ; memory mapped, for LD/ST
COM1A1                  =7
COM1A0                  =6
COM1B1                  =5
COM1B0                  =4
WGM11                   =1
WGM10                   =0
TCCR1B                  =0x81  ; memory mapped, for LD/ST
ICNC1                   =7
ICES1                   =6
WGM13                   =4
WGM12                   =3
CS12                    =2
CS11                    =1
CS10                    =0
TCCR1C                  =0x82  ; memory mapped, for LD/ST
FOC1A                   =7
FOC1B                   =6
TCNT1                   =0x84  ; memory mapped, for LD/ST
TCNT1L                  =0x84  ; memory mapped, for LD/ST
TCNT1H                  =0x85  ; memory mapped, for LD/ST
ICR1                    =0x86  ; memory mapped, for LD/ST
ICR1L                   =0x86  ; memory mapped, for LD/ST
ICR1H                   =0x87  ; memory mapped, for LD/ST
OCR1A                   =0x88  ; memory mapped, for LD/ST
OCR1AL                  =0x88  ; memory mapped, for LD/ST
OCR1AH                  =0x89  ; memory mapped, for LD/ST
OCR1B                   =0x8A  ; memory mapped, for LD/ST
OCR1BL                  =0x8A  ; memory mapped, for LD/ST
OCR1BH                  =0x8B  ; memory mapped, for LD/ST
;
; Timer/Counter 2
TCCR2A                  =0xB0  ; memory mapped, for LD/ST
TCCR2                   =0xB0  ; memory mapped, for LD/ST
FOC2                    =7
FOC2A                   =7
WGM20                   =6
COM21                   =5
COM20                   =4
COM2A1                  =5
COM2A0                  =4
WGM21                   =3
CS22                    =2
CS21                    =1
CS20                    =0
TCNT2                   =0xB2  ; memory mapped, for LD/ST
OCR2A                   =0xB3  ; memory mapped, for LD/ST
OCR2                    =0xB3  ; memory mapped, for LD/ST
;
; ASSR
ASSR                    =0xB6  ; memory mapped, for LD/ST
EXCLK                   =4
AS2                     =3
TCN2UB                  =2
OCR2UB                  =1
TCR2UB                  =0
;
; ADC
ADC                     =0x78  ; memory mapped, for LD/ST
ADCL                    =0x78  ; memory mapped, for LD/ST
ADCH                    =0x79  ; memory mapped, for LD/ST
ADCSRA                  =0x7A  ; memory mapped, for LD/ST
ADEN                    =7
ADSC                    =6
ADATE                   =5
ADFR                    =5
ADIF                    =4
ADIE                    =3
ADPS2                   =2
ADPS1                   =1
ADPS0                   =0
ADCSRB                  =0x7B  ; memory mapped, for LD/ST
ACME                    =6
ADTS2                   =2
ADTS1                   =1
ADTS0                   =0
ADMUX                   =0x7C  ; memory mapped, for LD/ST
REFS1                   =7
REFS0                   =6
ADLAR                   =5
MUX4                    =4
MUX3                    =3
MUX2                    =2
MUX1                    =1
MUX0                    =0
DIDR0                   =0x7E  ; memory mapped, for LD/ST
ADC7D                   =7
ADC6D                   =6
ADC5D                   =5
ADC4D                   =4
ADC3D                   =3
ADC2D                   =2
ADC1D                   =1
ADC0D                   =0
DIDR1                   =0x7F  ; memory mapped, for LD/ST
AIN1D                   =1
AIN0D                   =0
;
; universal serial interface
USICR                   =0xB8  ; memory mapped, for LD/ST
USISIE                  =7
USIOIE                  =6
USIWM1                  =5
USIWM0                  =4
USICS1                  =3
USICS0                  =2
USICLK                  =1
USITC                   =0
USISR                   =0xB9  ; memory mapped, for LD/ST
USISIF                  =7
USIOIF                  =6
USIPF                   =5
USIDC                   =4
USICNT3                 =3
USICNT2                 =2
USICNT1                 =1
USICNT0                 =0
USIDR                   =0xBA  ; memory mapped, for LD/ST
;
; USART
UCSR0A                  =0xC0  ; memory mapped, for LD/ST
UCSRA                   =0xC0  ; memory mapped, for LD/ST
RXC0                    =7
TXC0                    =6
UDRE0                   =5
FE0                     =4
DOR0                    =3
UPE0                    =2
U2X0                    =1
MPCM0                   =0
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
UCSR0B                  =0xC1  ; memory mapped, for LD/ST
UCSRB                   =0xC1  ; memory mapped, for LD/ST
RXCIE0                  =7
TXCIE0                  =6
UDRIE0                  =5
RXEN0                   =4
TXEN0                   =3
UCSZ20                  =2
RXB80                   =1
TXB80                   =0
RXCIE                   =7
TXCIE                   =6
UDRIE                   =5
RXEN                    =4
TXEN                    =3
UCSZ2                   =2
RXB8                    =1
TXB8                    =0
UCSR0C                  =0xC2  ; memory mapped, for LD/ST
UCSRC                   =0xC2  ; memory mapped, for LD/ST
UMSEL0                  =6
UPM01                   =5
UPM00                   =4
USBS0                   =3
UCSZ01                  =2
UCSZ00                  =1
UCPOL0                  =0
UMSEL                   =6
UPM1                    =5
UPM0                    =4
USBS                    =3
UCSZ1                   =2
UCSZ0                   =1
UCPOL                   =0
UBRR0                   =0xC4  ; memory mapped, for LD/ST
UBRR                    =0xC4  ; memory mapped, for LD/ST
UBRR0L                  =0xC4  ; memory mapped, for LD/ST
UBRRL                   =0xC4  ; memory mapped, for LD/ST
UBRR0H                  =0xC5  ; memory mapped, for LD/ST
UBRRH                   =0xC5  ; memory mapped, for LD/ST
UDR0                    =0xC6  ; memory mapped, for LD/ST
UDR                     =0xC6  ; memory mapped, for LD/ST
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
PORTE7                  =7
PORTE6                  =6
PORTE5                  =5
PORTE4                  =4
PORTE3                  =3
PORTE2                  =2
PORTE1                  =1
PORTE0                  =0
PE7                     =7
PE6                     =6
PE5                     =5
PE4                     =4
PE3                     =3
PE2                     =2
PE1                     =1
PE0                     =0
DDE7                    =7
DDE6                    =6
DDE5                    =5
DDE4                    =4
DDE3                    =3
DDE2                    =2
DDE1                    =1
DDE0                    =0
PINE7                   =7
PINE6                   =6
PINE5                   =5
PINE4                   =4
PINE3                   =3
PINE2                   =2
PINE1                   =1
PINE0                   =0
;
; Port F bits
PORTF7                  =7
PORTF6                  =6
PORTF5                  =5
PORTF4                  =4
PORTF3                  =3
PORTF2                  =2
PORTF1                  =1
PORTF0                  =0
PF7                     =7
PF6                     =6
PF5                     =5
PF4                     =4
PF3                     =3
PF2                     =2
PF1                     =1
PF0                     =0
DDF7                    =7
DDF6                    =6
DDF5                    =5
DDF4                    =4
DDF3                    =3
DDF2                    =2
DDF1                    =1
DDF0                    =0
PINF7                   =7
PINF6                   =6
PINF5                   =5
PINF4                   =4
PINF3                   =3
PINF2                   =2
PINF1                   =1
PINF0                   =0
;
; Port G bits
PORTG4                  =4
PORTG3                  =3
PORTG2                  =2
PORTG1                  =1
PORTG0                  =0
PG4                     =4
PG3                     =3
PG2                     =2
PG1                     =1
PG0                     =0
DDG4                    =4
DDG3                    =3
DDG2                    =2
DDG1                    =1
DDG0                    =0
PING5                   =5
PING4                   =4
PING3                   =3
PING2                   =2
PING1                   =1
PING0                   =0
;
; Port H bits
PORTH7                  =7
PORTH6                  =6
PORTH5                  =5
PORTH4                  =4
PORTH3                  =3
PORTH2                  =2
PORTH1                  =1
PORTH0                  =0
PH7                     =7
PH6                     =6
PH5                     =5
PH4                     =4
PH3                     =3
PH2                     =2
PH1                     =1
PH0                     =0
DDH7                    =7
DDH6                    =6
DDH5                    =5
DDH4                    =4
DDH3                    =3
DDH2                    =2
DDH1                    =1
DDH0                    =0
PINH7                   =7
PINH6                   =6
PINH5                   =5
PINH4                   =4
PINH3                   =3
PINH2                   =2
PINH1                   =1
PINH0                   =0
;
; Port J bits
PORTJ6                  =6
PORTJ5                  =5
PORTJ4                  =4
PORTJ3                  =3
PORTJ2                  =2
PORTJ1                  =1
PORTJ0                  =0
PJ6                     =6
PJ5                     =5
PJ4                     =4
PJ3                     =3
PJ2                     =2
PJ1                     =1
PJ0                     =0
DDJ6                    =6
DDJ5                    =5
DDJ4                    =4
DDJ3                    =3
DDJ2                    =2
DDJ1                    =1
DDJ0                    =0
PINJ6                   =6
PINJ5                   =5
PINJ4                   =4
PINJ3                   =3
PINJ2                   =2
PINJ1                   =1
PINJ0                   =0
;
; Pin Change Interrupts
;
; PCMSK3
PCINT30                 =6
PCINT29                 =5
PCINT28                 =4
PCINT27                 =3
PCINT26                 =2
PCINT25                 =1
PCINT24                 =0
;
; PCMSK2
PCINT23                 =7
PCINT22                 =6
PCINT21                 =5
PCINT20                 =4
PCINT19                 =3
PCINT18                 =2
PCINT17                 =1
PCINT16                 =0
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
; extended fuses bits
; #define  BODLEVEL2 3 
BODLEVEL1               =2
BODLEVEL0               =1
RSTDISBL                =0
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
.macro set_vector_PCINT0
 .area vector (abs)
 .org  0x08
  jmp  @0
 .area text
.endmacro
.macro set_vector_PCINT1
 .area vector (abs)
 .org  0x0C
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIMER2_COMPA
 .area vector (abs)
 .org  0x10
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIMER2_COMP
 .area vector (abs)
 .org  0x10
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIM2_COMP
 .area vector (abs)
 .org  0x10
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIMER2_OVF
 .area vector (abs)
 .org  0x14
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIM2_OVF
 .area vector (abs)
 .org  0x14
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIMER1_CAPT
 .area vector (abs)
 .org  0x18
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIM1_CAPT
 .area vector (abs)
 .org  0x18
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIMER1_COMPA
 .area vector (abs)
 .org  0x1C
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIM1_COMPA
 .area vector (abs)
 .org  0x1C
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIMER1_COMPB
 .area vector (abs)
 .org  0x20
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIM1_COMPB
 .area vector (abs)
 .org  0x20
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIMER1_OVF
 .area vector (abs)
 .org  0x24
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIM1_OVF
 .area vector (abs)
 .org  0x24
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIMER0_COMPA
 .area vector (abs)
 .org  0x28
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIMER0_COMP
 .area vector (abs)
 .org  0x28
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIM0_COMP
 .area vector (abs)
 .org  0x28
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIMER0_OVF
 .area vector (abs)
 .org  0x2C
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIM0_OVF
 .area vector (abs)
 .org  0x2C
  jmp  @0
 .area text
.endmacro
.macro set_vector_SPI_STC
 .area vector (abs)
 .org  0x30
  jmp  @0
 .area text
.endmacro
.macro set_vector_USART_RX
 .area vector (abs)
 .org  0x34
  jmp  @0
 .area text
.endmacro
.macro set_vector_USART_RXC
 .area vector (abs)
 .org  0x34
  jmp  @0
 .area text
.endmacro
.macro set_vector_USART0_RX
 .area vector (abs)
 .org  0x34
  jmp  @0
 .area text
.endmacro
.macro set_vector_USART0_RXC
 .area vector (abs)
 .org  0x34
  jmp  @0
 .area text
.endmacro
.macro set_vector_USART_DRE
 .area vector (abs)
 .org  0x38
  jmp  @0
 .area text
.endmacro
.macro set_vector_USART_UDRE
 .area vector (abs)
 .org  0x38
  jmp  @0
 .area text
.endmacro
.macro set_vector_USART0_DRE
 .area vector (abs)
 .org  0x38
  jmp  @0
 .area text
.endmacro
.macro set_vector_USART0_UDRE
 .area vector (abs)
 .org  0x38
  jmp  @0
 .area text
.endmacro
.macro set_vector_USART_TX
 .area vector (abs)
 .org  0x3C
  jmp  @0
 .area text
.endmacro
.macro set_vector_USART_TXC
 .area vector (abs)
 .org  0x3C
  jmp  @0
 .area text
.endmacro
.macro set_vector_USART0_TX
 .area vector (abs)
 .org  0x3C
  jmp  @0
 .area text
.endmacro
.macro set_vector_USART0_TXC
 .area vector (abs)
 .org  0x3C
  jmp  @0
 .area text
.endmacro
.macro set_vector_USI_START
 .area vector (abs)
 .org  0x40
  jmp  @0
 .area text
.endmacro
.macro set_vector_USI_STRT
 .area vector (abs)
 .org  0x40
  jmp  @0
 .area text
.endmacro
.macro set_vector_USI_OVERFLOW
 .area vector (abs)
 .org  0x44
  jmp  @0
 .area text
.endmacro
.macro set_vector_USI_OVFL
 .area vector (abs)
 .org  0x44
  jmp  @0
 .area text
.endmacro
.macro set_vector_USI_OVF
 .area vector (abs)
 .org  0x44
  jmp  @0
 .area text
.endmacro
.macro set_vector_ANA_COMP
 .area vector (abs)
 .org  0x48
  jmp  @0
 .area text
.endmacro
.macro set_vector_ANALOG_COMP
 .area vector (abs)
 .org  0x48
  jmp  @0
 .area text
.endmacro
.macro set_vector_ADC
 .area vector (abs)
 .org  0x4C
  jmp  @0
 .area text
.endmacro
.macro set_vector_EE_RDY
 .area vector (abs)
 .org  0x50
  jmp  @0
 .area text
.endmacro
.macro set_vector_EE_READY
 .area vector (abs)
 .org  0x50
  jmp  @0
 .area text
.endmacro
.macro set_vector_SPM_RDY
 .area vector (abs)
 .org  0x54
  jmp  @0
 .area text
.endmacro
.macro set_vector_SPM_READY
 .area vector (abs)
 .org  0x54
  jmp  @0
 .area text
.endmacro
.macro set_vector_PCINT2
 .area vector (abs)
 .org  0x5C
  jmp  @0
 .area text
.endmacro
.macro set_vector_PCINT3
 .area vector (abs)
 .org  0x60
  jmp  @0
 .area text
.endmacro
;------
;<eof>
