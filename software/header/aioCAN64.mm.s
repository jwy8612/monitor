; iccavr asm header file for CAN64 - all io memory mapped
; generated by maschag 0.8.7 on 04-15-2009
;-------------------------------------------------------------
;
; Memory info
FLASHEND                =0xFFFF
E2END                   =0x07FF
RAMSTART                =0x0100
RAMEND                  =0x10FF
XRAMEND                 =0xFFFF
;
;-------------------------------------------------------------
;
; Port A
PINA                    =0x20
PINA_io                 =0x00  ; for IN/OUT, CBI/SBI, SBIC/SBIS
PINA7                   =7
PINA6                   =6
PINA5                   =5
PINA4                   =4
PINA3                   =3
PINA2                   =2
PINA1                   =1
PINA0                   =0
DDRA                    =0x21
DDRA_io                 =0x01  ; for IN/OUT, CBI/SBI, SBIC/SBIS
DDA7                    =7
DDA6                    =6
DDA5                    =5
DDA4                    =4
DDA3                    =3
DDA2                    =2
DDA1                    =1
DDA0                    =0
PORTA                   =0x22
PORTA_io                =0x02  ; for IN/OUT, CBI/SBI, SBIC/SBIS
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
;
; Port B
PINB                    =0x23
PINB_io                 =0x03  ; for IN/OUT, CBI/SBI, SBIC/SBIS
PINB7                   =7
PINB6                   =6
PINB5                   =5
PINB4                   =4
PINB3                   =3
PINB2                   =2
PINB1                   =1
PINB0                   =0
DDRB                    =0x24
DDRB_io                 =0x04  ; for IN/OUT, CBI/SBI, SBIC/SBIS
DDB7                    =7
DDB6                    =6
DDB5                    =5
DDB4                    =4
DDB3                    =3
DDB2                    =2
DDB1                    =1
DDB0                    =0
PORTB                   =0x25
PORTB_io                =0x05  ; for IN/OUT, CBI/SBI, SBIC/SBIS
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
;
; Port C
PINC                    =0x26
PINC_io                 =0x06  ; for IN/OUT, CBI/SBI, SBIC/SBIS
PINC7                   =7
PINC6                   =6
PINC5                   =5
PINC4                   =4
PINC3                   =3
PINC2                   =2
PINC1                   =1
PINC0                   =0
DDRC                    =0x27
DDRC_io                 =0x07  ; for IN/OUT, CBI/SBI, SBIC/SBIS
DDC7                    =7
DDC6                    =6
DDC5                    =5
DDC4                    =4
DDC3                    =3
DDC2                    =2
DDC1                    =1
DDC0                    =0
PORTC                   =0x28
PORTC_io                =0x08  ; for IN/OUT, CBI/SBI, SBIC/SBIS
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
;
; Port D
PIND                    =0x29
PIND_io                 =0x09  ; for IN/OUT, CBI/SBI, SBIC/SBIS
PIND7                   =7
PIND6                   =6
PIND5                   =5
PIND4                   =4
PIND3                   =3
PIND2                   =2
PIND1                   =1
PIND0                   =0
DDRD                    =0x2A
DDRD_io                 =0x0A  ; for IN/OUT, CBI/SBI, SBIC/SBIS
DDD7                    =7
DDD6                    =6
DDD5                    =5
DDD4                    =4
DDD3                    =3
DDD2                    =2
DDD1                    =1
DDD0                    =0
PORTD                   =0x2B
PORTD_io                =0x0B  ; for IN/OUT, CBI/SBI, SBIC/SBIS
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
;
; Port E
PINE                    =0x2C
PINE_io                 =0x0C  ; for IN/OUT, CBI/SBI, SBIC/SBIS
PINE7                   =7
PINE6                   =6
PINE5                   =5
PINE4                   =4
PINE3                   =3
PINE2                   =2
PINE1                   =1
PINE0                   =0
DDRE                    =0x2D
DDRE_io                 =0x0D  ; for IN/OUT, CBI/SBI, SBIC/SBIS
DDE7                    =7
DDE6                    =6
DDE5                    =5
DDE4                    =4
DDE3                    =3
DDE2                    =2
DDE1                    =1
DDE0                    =0
PORTE                   =0x2E
PORTE_io                =0x0E  ; for IN/OUT, CBI/SBI, SBIC/SBIS
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
;
; Port F
PINF                    =0x2F
PINF_io                 =0x0F  ; for IN/OUT, CBI/SBI, SBIC/SBIS
PINF7                   =7
PINF6                   =6
PINF5                   =5
PINF4                   =4
PINF3                   =3
PINF2                   =2
PINF1                   =1
PINF0                   =0
DDRF                    =0x30
DDRF_io                 =0x10  ; for IN/OUT, CBI/SBI, SBIC/SBIS
DDF7                    =7
DDF6                    =6
DDF5                    =5
DDF4                    =4
DDF3                    =3
DDF2                    =2
DDF1                    =1
DDF0                    =0
PORTF                   =0x31
PORTF_io                =0x11  ; for IN/OUT, CBI/SBI, SBIC/SBIS
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
;
; Port G
PING                    =0x32
PING_io                 =0x12  ; for IN/OUT, CBI/SBI, SBIC/SBIS
PING4                   =4
PING3                   =3
PING2                   =2
PING1                   =1
PING0                   =0
DDRG                    =0x33
DDRG_io                 =0x13  ; for IN/OUT, CBI/SBI, SBIC/SBIS
DDG4                    =4
DDG3                    =3
DDG2                    =2
DDG1                    =1
DDG0                    =0
PORTG                   =0x34
PORTG_io                =0x14  ; for IN/OUT, CBI/SBI, SBIC/SBIS
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
;
; Timer/Counter Interrupts
TIFR0                   =0x35
TIFR0_io                =0x15  ; for IN/OUT, CBI/SBI, SBIC/SBIS
OCF0A                   =1
OCF0                    =1
TOV0                    =0
TIFR1                   =0x36
TIFR1_io                =0x16  ; for IN/OUT, CBI/SBI, SBIC/SBIS
ICF1                    =5
OCF1C                   =3
OCF1B                   =2
OCF1A                   =1
TOV1                    =0
TIFR2                   =0x37
TIFR2_io                =0x17  ; for IN/OUT, CBI/SBI, SBIC/SBIS
OCF2A                   =1
OCF2                    =1
TOV2                    =0
TIFR3                   =0x38
TIFR3_io                =0x18  ; for IN/OUT, CBI/SBI, SBIC/SBIS
ICF3                    =5
OCF3C                   =3
OCF3B                   =2
OCF3A                   =1
TOV3                    =0
;
; External Interrupt Flags and Masks
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
;
; GPIO Registers
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
EERIE                   =3
EEMWE                   =2
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
; General Timer Control
GTCCR                   =0x43
GTCCR_io                =0x23  ; for IN/OUT
TSM                     =7
PSR2                    =1
PSR310                  =0
;
; to enable multi-part lib writing
;
; Timer/Counter 0
TCCR0A                  =0x44
TCCR0A_io               =0x24  ; for IN/OUT
TCCR0                   =0x44
TCCR0_io                =0x24  ; for IN/OUT
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
TCNT0                   =0x46
TCNT0_io                =0x26  ; for IN/OUT
OCR0                    =0x47
OCR0_io                 =0x27  ; for IN/OUT
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
; Analog Comparator
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
; OCDR
OCDR                    =0x51
OCDR_io                 =0x31  ; for IN/OUT
IDRD                    =7
OCD7                    =7
OCD6                    =6
OCD5                    =5
OCD4                    =4
OCD3                    =3
OCD2                    =2
OCD1                    =1
OCD0                    =0
;
; MCU general
SMCR                    =0x53
SMCR_io                 =0x33  ; for IN/OUT
SM2                     =3
SM1                     =2
SM0                     =1
SE                      =0
MCUSR                   =0x54
MCUSR_io                =0x34  ; for IN/OUT
JTRF                    =4
WDRF                    =3
BORF                    =2
EXTRF                   =1
PORF                    =0
MCUCR                   =0x55
MCUCR_io                =0x35  ; for IN/OUT
JTD                     =7
PUD                     =4
IVSEL                   =1
IVCE                    =0
;
; SPM Conrol Register
SPMCSR                  =0x57
SPMCSR_io               =0x37  ; for IN/OUT
SPMIE                   =7
RWWSB                   =6
RWWSRE                  =4
BLBSET                  =3
PGWRT                   =2
PGERS                   =1
SPMEN                   =0
;
; ProgRAm Memory msb address Z-Pointer
RAMPZ                   =0x5B
RAMPZ_io                =0x3B  ; for IN/OUT
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
WDTCR                   =0x60
WDTOE                   =4
WDCE                    =4
WDE                     =3
WDP2                    =2
WDP1                    =1
WDP0                    =0
;
; Oscillator
CLKPR                   =0x61
CLKPCE                  =7
CLKPS3                  =3
CLKPS2                  =2
CLKPS1                  =1
CLKPS0                  =0
OSCCAL                  =0x66
;
; External Interrupt configuration
EICRA                   =0x69
ISC31                   =7
ISC30                   =6
ISC21                   =5
ISC20                   =4
ISC11                   =3
ISC10                   =2
ISC01                   =1
ISC00                   =0
EICRB                   =0x6A
ISC71                   =7
ISC70                   =6
ISC61                   =5
ISC60                   =4
ISC51                   =3
ISC50                   =2
ISC41                   =1
ISC40                   =0
;
; Timer/Counter Interrupts
TIMSK0                  =0x6E
OCIE0A                  =1
OCIE0                   =1
TOIE0                   =0
TIMSK1                  =0x6F
TICIE1                  =5
ICIE1                   =5
OCIE1C                  =3
OCIE1B                  =2
OCIE1A                  =1
TOIE1                   =0
TIMSK2                  =0x70
OCIE2A                  =1
OCIE2                   =1
TOIE2                   =0
TIMSK3                  =0x71
TICIE3                  =5
ICIE3                   =5
OCIE3C                  =3
OCIE3B                  =2
OCIE3A                  =1
TOIE3                   =0
;
; eXternal Memory Control Register
XMCRA                   =0x74
SRE                     =7
SRL2                    =6
SRL1                    =5
SRL0                    =4
SRW11                   =3
SRW10                   =2
SRW01                   =1
SRW00                   =0
XMCRB                   =0x75
XMBK                    =7
XMM2                    =2
XMM1                    =1
XMM0                    =0
;
; Analog Digital Converter
ADC                     =0x78
ADCL                    =0x78
ADCH                    =0x79
ADCSRA                  =0x7A
ADEN                    =7
ADSC                    =6
ADATE                   =5
ADFR                    =5
ADIF                    =4
ADIE                    =3
ADPS2                   =2
ADPS1                   =1
ADPS0                   =0
ADCSRB                  =0x7B
ADHSM                   =7
ACME                    =6
ADTS2                   =2
ADTS1                   =1
ADTS0                   =0
ADMUX                   =0x7C
REFS1                   =7
REFS0                   =6
ADLAR                   =5
MUX4                    =4
MUX3                    =3
MUX2                    =2
MUX1                    =1
MUX0                    =0
DIDR1                   =0x7F
AIN1D                   =1
AIN0D                   =0
DIDR0                   =0x7E
ADC7D                   =7
ADC6D                   =6
ADC5D                   =5
ADC4D                   =4
ADC3D                   =3
ADC2D                   =2
ADC1D                   =1
ADC0D                   =0
;
; Timer/Counter 1
TCCR1A                  =0x80
COM1A1                  =7
COM1A0                  =6
COM1B1                  =5
COM1B0                  =4
COM1C1                  =3
COM1C0                  =2
WGM11                   =1
WGM10                   =0
TCCR1B                  =0x81
ICNC1                   =7
ICES1                   =6
WGM13                   =4
WGM12                   =3
CS12                    =2
CS11                    =1
CS10                    =0
TCCR1C                  =0x82
FOC1A                   =7
FOC1B                   =6
FOC1C                   =5
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
OCR1C                   =0x8C
OCR1CL                  =0x8C
OCR1CH                  =0x8D
;
; Timer/Counter 3
TCCR3A                  =0x90
COM3A1                  =7
COM3A0                  =6
COM3B1                  =5
COM3B0                  =4
COM3C1                  =3
COM3C0                  =2
WGM31                   =1
WGM30                   =0
TCCR3B                  =0x91
ICNC3                   =7
ICES3                   =6
WGM33                   =4
WGM32                   =3
CS32                    =2
CS31                    =1
CS30                    =0
TCCR3C                  =0x92
FOC3A                   =7
FOC3B                   =6
FOC3C                   =5
TCNT3                   =0x94
TCNT3L                  =0x94
TCNT3H                  =0x95
ICR3                    =0x96
ICR3L                   =0x96
ICR3H                   =0x97
OCR3A                   =0x98
OCR3AL                  =0x98
OCR3AH                  =0x99
OCR3B                   =0x9A
OCR3BL                  =0x9A
OCR3BH                  =0x9B
OCR3C                   =0x9C
OCR3CL                  =0x9C
OCR3CH                  =0x9D
;
; Timer/Counter 2
TCCR2A                  =0xB0
TCCR2                   =0xB0
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
TCNT2                   =0xB2
OCR2A                   =0xB3
OCR2                    =0xB3
ASSR                    =0xB6
EXCLK                   =4
AS2                     =3
TCN2UB                  =2
OCR2UB                  =1
TCR2UB                  =0
;
; Two-Wire serial Interface
TWBR                    =0xB8
TWSR                    =0xB9
TWS7                    =7
TWS6                    =6
TWS5                    =5
TWS4                    =4
TWS3                    =3
TWS                     =3
TWPS1                   =1
TWPS0                   =0
TWAR                    =0xBA
TWA6                    =7
TWA5                    =6
TWA4                    =5
TWA3                    =4
TWA2                    =3
TWA1                    =2
TWA0                    =1
TWA                     =1
TWGCE                   =0
TWDR                    =0xBB
TWCR                    =0xBC
TWINT                   =7
TWEA                    =6
TWSTA                   =5
TWSTO                   =4
TWWC                    =3
TWEN                    =2
TWIE                    =0
;
; USART-0 (default USART)
UCSR0A                  =0xC0
UCSRA                   =0xC0
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
UCSR0B                  =0xC1
UCSRB                   =0xC1
RXCIE0                  =7
TXCIE0                  =6
UDRIE0                  =5
RXEN0                   =4
TXEN0                   =3
UCSZ02                  =2
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
UCSR0C                  =0xC2
UCSRC                   =0xC2
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
UBRR0                   =0xC4
UBRR                    =0xC4
UBRR0L                  =0xC4
UBRRL                   =0xC4
UBRR0H                  =0xC5
UBRRH                   =0xC5
UDR0                    =0xC6
UDR                     =0xC6
;
; USART-1
UCSR1A                  =0xC8
RXC1                    =7
TXC1                    =6
UDRE1                   =5
FE1                     =4
DOR1                    =3
UPE1                    =2
U2X1                    =1
MPCM1                   =0
UCSR1B                  =0xC9
RXCIE1                  =7
TXCIE1                  =6
UDRIE1                  =5
RXEN1                   =4
TXEN1                   =3
UCSZ12                  =2
RXB81                   =1
TXB81                   =0
UCSR1C                  =0xCA
UMSEL1                  =6
UPM11                   =5
UPM10                   =4
USBS1                   =3
UCSZ11                  =2
UCSZ10                  =1
UCPOL1                  =0
UBRR1                   =0xCC
UBRR1L                  =0xCC
UBRR1H                  =0xCD
UDR1                    =0xCE
;
; C.A.N
CANGCON                 =0xD8
ABRQ                    =7
OVRQ                    =6
TTC                     =5
SYNCTTC                 =4
LISTEN                  =3
TEST                    =2
ENA                     =1
SWRES                   =0
CANGSTA                 =0xD9
OVFG                    =6
OVRG                    =6
TXBSY                   =4
RXBSY                   =3
ENFG                    =2
BOFF                    =1
ERRP                    =0
CANGIT                  =0xDA
CANIT                   =7
BOFFIT                  =6
OVRTIM                  =5
OVRBUF                  =4
BXOK                    =4
SERG                    =3
CERG                    =2
FERG                    =1
AERG                    =0
ERR_GEN_MSK             =15
INT_GEN_MSK             =0x5F
INT_GEN_MSK_io          =0x3F  ; for IN/OUT
CANGIE                  =0xDB
ENIT                    =7
ENBOFF                  =6
ENRX                    =5
ENTX                    =4
ENERMOB                 =3
ENERR                   =3
ENBUF                   =2
ENBX                    =2
ENERG                   =1
ENOVRT                  =0
CANEN2                  =0xDC
CANEN1                  =0xDD
CANIE2                  =0xDE
CANIE1                  =0xDF
CANSIT2                 =0xE0
CANSIT1                 =0xE1
CANBT1                  =0xE2
BRP                     =1
BRP_MSK                 =0x7E
CANBT2                  =0xE3
SJW1                    =6
SJW0                    =5
SJW                     =5
PRS2                    =3
PRS1                    =2
PRS0                    =1
PRS                     =1
SJW_MSK                 =0x60
PRS_MSK                 =14
CANBT3                  =0xE4
PHS22                   =6
PHS21                   =5
PHS20                   =4
PHS2                    =4
PHS12                   =3
PHS11                   =2
PHS10                   =1
PHS1                    =1
SMP                     =0
PHS2_MSK                =0x70
PHS1_MSK                =14
CANTCON                 =0xE5
CANTIM                  =0xE6
CANTIML                 =0xE6
CANTIMH                 =0xE7
CANTTC                  =0xE8
CANTTCL                 =0xE8
CANTTCH                 =0xE9
CANTEC                  =0xEA
CANREC                  =0xEB
CANHPMOB                =0xEC
HPMOB3                  =7
HPMOB2                  =6
HPMOB1                  =5
HPMOB0                  =4
HPMOB                   =4
HPMOB_MSK               =0xF0
CGP33                   =3
CGP32                   =2
CGP31                   =1
CGP30                   =0
CGP                     =0
CANPAGE                 =0xED
MOBNB3                  =7
MOBNB2                  =6
MOBNB1                  =5
MOBNB0                  =4
MOBNB                   =4
MOBNB_MSK               =0xF0
AINC                    =3
INDX2                   =2
INDX1                   =1
INDX0                   =0
INDX                    =0
INDX_MSK                =7
CANSTMOB                =0xEE
DLCW                    =7
TXOK                    =6
RXOK                    =5
BERR                    =4
SERR                    =3
CERR                    =2
FERR                    =1
AERR                    =0
ERR_MOB_MSK             =31
INT_MOB_MSK             =0x7F
CANCDMOB                =0xEF
CONMOB1                 =7
CONMOB0                 =6
CONMOB                  =6
RPLV                    =5
IDE                     =4
DLC3                    =3
DLC2                    =2
DLC1                    =1
DLC0                    =0
DLC                     =0
CONMOB_MSK              =0xC0
DLC_MSK                 =15
CANIDT4                 =0xF0
RTRTAG                  =2
RB1TAG                  =1
RB0TAG                  =0
CANIDT3                 =0xF1
CANIDT2                 =0xF2
CANIDT1                 =0xF3
CANIDM4                 =0xF4
RTRMSK                  =2
IDEMSK                  =0
CANIDM3                 =0xF5
CANIDM2                 =0xF6
CANIDM1                 =0xF7
CANSTM                  =0xF8
CANSTML                 =0xF8
CANSTMH                 =0xF9
CANMSG                  =0xFA
;
; Lock and Fuse Bits
;
; lock bits
BLB12                   =5
BLB11                   =4
BLB02                   =3
BLB01                   =2
BLB                     =2
LB2                     =1
LB1                     =0
LB                      =0
;
; fuses extended bits
BODLEVEL2               =3
BODLEVEL1               =2
BODLEVEL0               =1
BODLEVEL                =1
TA0SEL                  =0
;
; fuses high bits
OCDEN                   =7
JTAGEN                  =6
SPIEN                   =5
WDTON                   =4
EESAVE                  =3
BOOTSZ1                 =2
BOOTSZ0                 =1
BOOTSZ                  =1
BOOTRST                 =0
;
; fuses low bits
CKDIV8                  =7
CKOUT                   =6
SUT1                    =5
SUT0                    =4
SUT                     =4
CKSEL3                  =3
CKSEL2                  =2
CKSEL1                  =1
CKSEL0                  =0
CKSEL                   =0
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
.macro set_vector_TIM2_COMP
 .area vector (abs)
 .org  0x24
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIMER2_COMP
 .area vector (abs)
 .org  0x24
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIM2_OVF
 .area vector (abs)
 .org  0x28
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIMER2_OVF
 .area vector (abs)
 .org  0x28
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIM1_CAPT
 .area vector (abs)
 .org  0x2C
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIMER1_CAPT
 .area vector (abs)
 .org  0x2C
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIM1_COMPA
 .area vector (abs)
 .org  0x30
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIMER1_COMPA
 .area vector (abs)
 .org  0x30
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIM1_COMPB
 .area vector (abs)
 .org  0x34
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIMER1_COMPB
 .area vector (abs)
 .org  0x34
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIM1_COMPC
 .area vector (abs)
 .org  0x38
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIMER1_COMPC
 .area vector (abs)
 .org  0x38
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIM1_OVF
 .area vector (abs)
 .org  0x3C
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIMER1_OVF
 .area vector (abs)
 .org  0x3C
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIM0_COMP
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
.macro set_vector_TIM0_OVF
 .area vector (abs)
 .org  0x44
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIMER0_OVF
 .area vector (abs)
 .org  0x44
  jmp  @0
 .area text
.endmacro
.macro set_vector_CAN_IT
 .area vector (abs)
 .org  0x48
  jmp  @0
 .area text
.endmacro
.macro set_vector_CANIT
 .area vector (abs)
 .org  0x48
  jmp  @0
 .area text
.endmacro
.macro set_vector_CAN
 .area vector (abs)
 .org  0x48
  jmp  @0
 .area text
.endmacro
.macro set_vector_CAN_TRANSFER
 .area vector (abs)
 .org  0x48
  jmp  @0
 .area text
.endmacro
.macro set_vector_CTIM_OVF
 .area vector (abs)
 .org  0x4C
  jmp  @0
 .area text
.endmacro
.macro set_vector_OVRIT
 .area vector (abs)
 .org  0x4C
  jmp  @0
 .area text
.endmacro
.macro set_vector_CAN_TIM_OVF
 .area vector (abs)
 .org  0x4C
  jmp  @0
 .area text
.endmacro
.macro set_vector_CAN_TIM_OVR
 .area vector (abs)
 .org  0x4C
  jmp  @0
 .area text
.endmacro
.macro set_vector_SPI_STC
 .area vector (abs)
 .org  0x50
  jmp  @0
 .area text
.endmacro
.macro set_vector_USART0_RX
 .area vector (abs)
 .org  0x54
  jmp  @0
 .area text
.endmacro
.macro set_vector_USART0_RXC
 .area vector (abs)
 .org  0x54
  jmp  @0
 .area text
.endmacro
.macro set_vector_USART0_DRE
 .area vector (abs)
 .org  0x58
  jmp  @0
 .area text
.endmacro
.macro set_vector_USART0_UDRE
 .area vector (abs)
 .org  0x58
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
.macro set_vector_ANA_COMP
 .area vector (abs)
 .org  0x60
  jmp  @0
 .area text
.endmacro
.macro set_vector_ANALOG_COMP
 .area vector (abs)
 .org  0x60
  jmp  @0
 .area text
.endmacro
.macro set_vector_ADC
 .area vector (abs)
 .org  0x64
  jmp  @0
 .area text
.endmacro
.macro set_vector_EE_RDY
 .area vector (abs)
 .org  0x68
  jmp  @0
 .area text
.endmacro
.macro set_vector_EE_READY
 .area vector (abs)
 .org  0x68
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIM3_CAPT
 .area vector (abs)
 .org  0x6C
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIMER3_CAPT
 .area vector (abs)
 .org  0x6C
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIM3_COMPA
 .area vector (abs)
 .org  0x70
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIMER3_COMPA
 .area vector (abs)
 .org  0x70
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIM3_COMPB
 .area vector (abs)
 .org  0x74
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIMER3_COMPB
 .area vector (abs)
 .org  0x74
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIM3_COMPC
 .area vector (abs)
 .org  0x78
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIMER3_COMPC
 .area vector (abs)
 .org  0x78
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIM3_OVF
 .area vector (abs)
 .org  0x7C
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIMER3_OVF
 .area vector (abs)
 .org  0x7C
  jmp  @0
 .area text
.endmacro
.macro set_vector_USART1_RX
 .area vector (abs)
 .org  0x80
  jmp  @0
 .area text
.endmacro
.macro set_vector_USART1_RXC
 .area vector (abs)
 .org  0x80
  jmp  @0
 .area text
.endmacro
.macro set_vector_USART1_DRE
 .area vector (abs)
 .org  0x84
  jmp  @0
 .area text
.endmacro
.macro set_vector_USART1_UDRE
 .area vector (abs)
 .org  0x84
  jmp  @0
 .area text
.endmacro
.macro set_vector_USART1_TX
 .area vector (abs)
 .org  0x88
  jmp  @0
 .area text
.endmacro
.macro set_vector_USART1_TXC
 .area vector (abs)
 .org  0x88
  jmp  @0
 .area text
.endmacro
.macro set_vector_TWI
 .area vector (abs)
 .org  0x8C
  jmp  @0
 .area text
.endmacro
.macro set_vector_TWSI
 .area vector (abs)
 .org  0x8C
  jmp  @0
 .area text
.endmacro
.macro set_vector_SPM_RDY
 .area vector (abs)
 .org  0x90
  jmp  @0
 .area text
.endmacro
.macro set_vector_SPM_READY
 .area vector (abs)
 .org  0x90
  jmp  @0
 .area text
.endmacro
;
; not used with this chip
;
; RAMPZ
;------
;<eof>
