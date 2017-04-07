; iccavr asm header file for PWM316
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
; Port E
PINE                    =0x0C  ; for IN/OUT, CBI/SBI, SBIC/SBIS
DDRE                    =0x0D  ; for IN/OUT, CBI/SBI, SBIC/SBIS
PORTE                   =0x0E  ; for IN/OUT, CBI/SBI, SBIC/SBIS
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
; External Interrupts
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
; GPIO
GPIOR3                  =0x1B  ; for IN/OUT, CBI/SBI, SBIC/SBIS
GPIOR2                  =0x1A  ; for IN/OUT, CBI/SBI, SBIC/SBIS
GPIOR1                  =0x19  ; for IN/OUT, CBI/SBI, SBIC/SBIS
GPIOR0                  =0x1E  ; for IN/OUT, CBI/SBI, SBIC/SBIS
;
; ADC
ADC                     =0x78  ; memory mapped, for LD/ST
ADCL                    =0x78  ; memory mapped, for LD/ST
ADCH                    =0x79  ; memory mapped, for LD/ST
ADCSRB                  =0x7B  ; memory mapped, for LD/ST
ADHSM                   =7
ADTS3                   =3
ADTS2                   =2
ADTS1                   =1
ADTS0                   =0
ADCSRA                  =0x7A  ; memory mapped, for LD/ST
ADEN                    =7
ADSC                    =6
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
AMP0CSR                 =0x76  ; memory mapped, for LD/ST
AMP0EN                  =7
AMP0IS                  =6
AMP0G1                  =5
AMP0G0                  =4
AMP0TS2                 =2
AMP0TS1                 =1
AMP0TS0                 =0
AMP1CSR                 =0x77  ; memory mapped, for LD/ST
AMP1EN                  =7
AMP1IS                  =6
AMP1G1                  =5
AMP1G0                  =4
AMP1TS2                 =2
AMP1TS1                 =1
AMP1TS0                 =0
;
; Analog Comparator Control and Status Register
ACSR                    =0x30  ; for IN/OUT
ACCKDIV                 =7
AC2IF                   =6
AC1IF                   =5
AC0IF                   =4
AC2O                    =2
AC1O                    =1
AC0O                    =0
AC0CON                  =0xAD  ; memory mapped, for LD/ST
AC0EN                   =7
AC0IE                   =6
AC0IS1                  =5
AC0IS0                  =4
AC0M2                   =2
AC0M1                   =1
AC0M0                   =0
AC1CON                  =0xAE  ; memory mapped, for LD/ST
AC1EN                   =7
AC1IE                   =6
AC1IS1                  =5
AC1IS0                  =4
AC1ICE                  =3
AC1M2                   =2
AC1M1                   =1
AC1M0                   =0
AC2CON                  =0xAF  ; memory mapped, for LD/ST
AC2EN                   =7
AC2IE                   =6
AC2IS1                  =5
AC2IS0                  =4
AC2M2                   =2
AC2M1                   =1
AC2M0                   =0
;
; DAC
DAC                     =0xAB  ; memory mapped, for LD/ST
DACL                    =0xAB  ; memory mapped, for LD/ST
DACH                    =0xAC  ; memory mapped, for LD/ST
DACON                   =0xAA  ; memory mapped, for LD/ST
DAATE                   =7
DATS2                   =6
DATS1                   =5
DATS0                   =4
DALA                    =2
DAOE                    =1
DAEN                    =0
;
; USART
UBRR0H                  =0xC5  ; memory mapped, for LD/ST
UBRR0L                  =0xC4  ; memory mapped, for LD/ST
UBRR0                   =0xC4  ; memory mapped, for LD/ST
UBRRH                   =0xC5  ; memory mapped, for LD/ST
UBRRL                   =0xC4  ; memory mapped, for LD/ST
UBRR                    =0xC4  ; memory mapped, for LD/ST
UCSR0C                  =0xC2  ; memory mapped, for LD/ST
UMSEL0                  =6
UPM01                   =5
UPM00                   =4
USBS0                   =3
UCSZ01                  =2
UCSZ00                  =1
UCPOL0                  =0
UCSRC                   =0xC2  ; memory mapped, for LD/ST
UMSEL                   =6
UPM1                    =5
UPM0                    =4
USBS                    =3
UCSZ1                   =2
UCSZ0                   =1
UCPOL                   =0
UCSR0B                  =0xC1  ; memory mapped, for LD/ST
RXCIE0                  =7
TXCIE0                  =6
UDRIE0                  =5
RXEN0                   =4
TXEN0                   =3
UCSZ02                  =2
RXB80                   =1
TXB80                   =0
UCSRB                   =0xC1  ; memory mapped, for LD/ST
RXCIE                   =7
TXCIE                   =6
UDRIE                   =5
RXEN                    =4
TXEN                    =3
UCSZ2                   =2
RXB8                    =1
TXB8                    =0
UCSR0A                  =0xC0  ; memory mapped, for LD/ST
RXC0                    =7
TXC0                    =6
UDRE0                   =5
FE0                     =4
DOR0                    =3
UPE0                    =2
U2X0                    =1
MPCM0                   =0
UCSRA                   =0xC0  ; memory mapped, for LD/ST
RXC                     =7
TXC                     =6
UDRE                    =5
FE                      =4
DOR                     =3
UPE                     =2
U2X                     =1
MPCM                    =0
UDR0                    =0xC6  ; memory mapped, for LD/ST
UDR                     =0xC6  ; memory mapped, for LD/ST
;
; Extended USART
MUBRRH                  =0xCD  ; memory mapped, for LD/ST
MUBRRL                  =0xCC  ; memory mapped, for LD/ST
MUBRR                   =0xCC  ; memory mapped, for LD/ST
EUCSRC                  =0xCA  ; memory mapped, for LD/ST
FEM                     =3
F1617                   =2
STP1                    =1
STP0                    =0
EUCSRB                  =0xC9  ; memory mapped, for LD/ST
EUSART                  =4
EUSBS                   =3
EMCH                    =1
BODR                    =0
EUCSRA                  =0xC8  ; memory mapped, for LD/ST
UTxS3                   =7
UTXS3                   =7
UTxS2                   =6
UTXS2                   =6
UTxS1                   =5
UTXS1                   =5
UTxS0                   =4
UTXS0                   =4
URxS3                   =3
URXS3                   =3
URxS2                   =2
URXS2                   =2
URxS1                   =1
URXS1                   =1
URxS0                   =0
URXS0                   =0
EUDR                    =0xCE  ; memory mapped, for LD/ST
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
EERIE                   =3
EEMWE                   =2
EEWE                    =1
EERE                    =0
EEDR                    =0x20  ; for IN/OUT, CBI/SBI, SBIC/SBIS
EEAR                    =0x21  ; for IN/OUT
EEARL                   =0x21  ; for IN/OUT
EEARH                   =0x22  ; for IN/OUT
;
; high byte unused with m48, must be written 0
;
; Monitor ??
MSMCR                   =0x32  ; for IN/OUT
MONDR                   =0x31  ; for IN/OUT
;
; MCU
MCUSR                   =0x34  ; for IN/OUT
WDRF                    =3
BORF                    =2
EXTRF                   =1
PORF                    =0
MCUCR                   =0x35  ; for IN/OUT
SPIPS                   =7
PUD                     =4
IVSEL                   =1
IVCE                    =0
;
; SPM Control and Status Register
SPMCSR                  =0x37  ; for IN/OUT
SPMIE                   =7
RWWSB                   =6
RWWSRE                  =4
BLBSET                  =3
PGWRT                   =2
PGERS                   =1
SPMEN                   =0
;
; SMCR
SMCR                    =0x33  ; for IN/OUT
SM2                     =3
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
PRPSC2                  =7
PRPSC1                  =6
PRPSC0                  =5
PRTIM1                  =4
PRTIM0                  =3
PRSPI                   =2
PRUSART                 =1
PRADC                   =0
;
; OSCCAL
OSCCAL                  =0x66  ; memory mapped, for LD/ST
;
; PLLCSR
PLLCSR                  =0x29  ; for IN/OUT
PLLF                    =2
PLLE                    =1
PLOCK                   =0
PLLOCK                  =0
;
; EICRA
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
; Timer/Counter 0
OCR0B                   =0x28  ; for IN/OUT
OCR0A                   =0x27  ; for IN/OUT
TCNT0                   =0x26  ; for IN/OUT
TCCR0B                  =0x25  ; for IN/OUT
FOC0A                   =7
FOC0B                   =6
WGM02                   =3
CS02                    =2
CS01                    =1
CS00                    =0
TCCR0A                  =0x24  ; for IN/OUT
COM0A1                  =7
COM0A0                  =6
COM0B1                  =5
COM0B0                  =4
WGM01                   =1
WGM00                   =0
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
ICPSEL1                 =6
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
TICIE1                  =5
OCIE1B                  =2
OCIE1A                  =1
TOIE1                   =0
;
; Digital Inputs Disahle Registers
DIDR1                   =0x7F  ; memory mapped, for LD/ST
ACMP0D                  =5
AMP0PD                  =4
AMP0ND                  =3
ADC10D                  =2
ACMP1D                  =2
ADC9D                   =1
AMP1PD                  =1
ADC8D                   =0
AMP1ND                  =0
DIDR0                   =0x7E  ; memory mapped, for LD/ST
ADC7D                   =7
ADC6D                   =6
ADC5D                   =5
ADC4D                   =4
ADC3D                   =3
ACMPMD                  =3
ADC2D                   =2
ACMP2D                  =2
ADC1D                   =1
ADC0D                   =0
;
; PSCs
PSOC0                   =0xD0  ; memory mapped, for LD/ST
PSYNC01                 =5
PSYNC00                 =4
POEN0B                  =2
POEN0A                  =0
OCR0SA                  =0xD2  ; memory mapped, for LD/ST
OCR0SAL                 =0xD2  ; memory mapped, for LD/ST
OCR0SAH                 =0xD3  ; memory mapped, for LD/ST
OCR0RA                  =0xD4  ; memory mapped, for LD/ST
OCR0RAL                 =0xD4  ; memory mapped, for LD/ST
OCR0RAH                 =0xD5  ; memory mapped, for LD/ST
OCR0SB                  =0xD6  ; memory mapped, for LD/ST
OCR0SBL                 =0xD6  ; memory mapped, for LD/ST
OCR0SBH                 =0xD7  ; memory mapped, for LD/ST
OCR0RB                  =0xD8  ; memory mapped, for LD/ST
OCR0RBL                 =0xD8  ; memory mapped, for LD/ST
OCR0RBH                 =0xD9  ; memory mapped, for LD/ST
PCNF0                   =0xDA  ; memory mapped, for LD/ST
PFIFTY0                 =7
PALOCK0                 =6
PLOCK0                  =5
PMODE01                 =4
PMODE00                 =3
POP0                    =2
PCLKSEL0                =1
PCTL0                   =0xDB  ; memory mapped, for LD/ST
PPRE01                  =7
PPRE00                  =6
PBFM0                   =5
PAOC0B                  =4
PAOC0A                  =3
PARUN0                  =2
PCCYC0                  =1
PRUN0                   =0
PFRC0A                  =0xDC  ; memory mapped, for LD/ST
PCAE0A                  =7
PISEL0A                 =6
PELEV0A                 =5
PFLTE0A                 =4
PRFM0A3                 =3
PRFM0A2                 =2
PRFM0A1                 =1
PRFM0A0                 =0
PFRC0B                  =0xDD  ; memory mapped, for LD/ST
PCAE0B                  =7
PISEL0B                 =6
PELEV0B                 =5
PFLTE0B                 =4
PRFM0B3                 =3
PRFM0B2                 =2
PRFM0B1                 =1
PRFM0B0                 =0
PICR0                   =0xDE  ; memory mapped, for LD/ST
PICR0L                  =0xDE  ; memory mapped, for LD/ST
PICR0H                  =0xDF  ; memory mapped, for LD/ST
PSOC1                   =0xE0  ; memory mapped, for LD/ST
PSYNC11                 =5
PSYNC10                 =4
POEN1B                  =2
POEN1A                  =0
OCR1SA                  =0xE2  ; memory mapped, for LD/ST
OCR1SAL                 =0xE2  ; memory mapped, for LD/ST
OCR1SAH                 =0xE3  ; memory mapped, for LD/ST
OCR1RA                  =0xE4  ; memory mapped, for LD/ST
OCR1RAL                 =0xE4  ; memory mapped, for LD/ST
OCR1RAH                 =0xE5  ; memory mapped, for LD/ST
OCR1SB                  =0xE6  ; memory mapped, for LD/ST
OCR1SBL                 =0xE6  ; memory mapped, for LD/ST
OCR1SBH                 =0xE7  ; memory mapped, for LD/ST
OCR1RB                  =0xE8  ; memory mapped, for LD/ST
OCR1RBL                 =0xE8  ; memory mapped, for LD/ST
OCR1RBH                 =0xE9  ; memory mapped, for LD/ST
PCNF1                   =0xEA  ; memory mapped, for LD/ST
PFIFTY1                 =7
PALOCK1                 =6
PLOCK1                  =5
PMODE11                 =4
PMODE10                 =3
POP1                    =2
PCLKSEL1                =1
PCTL1                   =0xEB  ; memory mapped, for LD/ST
PPRE11                  =7
PPRE10                  =6
PBFM1                   =5
PAOC1B                  =4
PAOC1A                  =3
PARUN1                  =2
PCCYC1                  =1
PRUN1                   =0
PFRC1A                  =0xEC  ; memory mapped, for LD/ST
PCAE1A                  =7
PISEL1A                 =6
PELEV1A                 =5
PFLTE1A                 =4
PRFM1A3                 =3
PRFM1A2                 =2
PRFM1A1                 =1
PRFM1A0                 =0
PFRC1B                  =0xED  ; memory mapped, for LD/ST
PCAE1B                  =7
PISEL1B                 =6
PELEV1B                 =5
PFLTE1B                 =4
PRFM1B3                 =3
PRFM1B2                 =2
PRFM1B1                 =1
PRFM1B0                 =0
PICR1                   =0xEE  ; memory mapped, for LD/ST
PICR1L                  =0xEE  ; memory mapped, for LD/ST
PICR1H                  =0xEF  ; memory mapped, for LD/ST
PSOC2                   =0xF0  ; memory mapped, for LD/ST
POS23                   =7
POS22                   =6
PSYNC21                 =5
PSYNC20                 =4
POEN2D                  =3
POEN2B                  =2
POEN2C                  =1
POEN2A                  =0
POM2                    =0xF1  ; memory mapped, for LD/ST
POMV2B3                 =7
POMV2B2                 =6
POMV2B1                 =5
POMV2B0                 =4
POMV2A3                 =3
POMV2A2                 =2
POMV2A1                 =1
POMV2A0                 =0
OCR2SA                  =0xF2  ; memory mapped, for LD/ST
OCR2SAL                 =0xF2  ; memory mapped, for LD/ST
OCR2SAH                 =0xF3  ; memory mapped, for LD/ST
OCR2RA                  =0xF4  ; memory mapped, for LD/ST
OCR2RAL                 =0xF4  ; memory mapped, for LD/ST
OCR2RAH                 =0xF5  ; memory mapped, for LD/ST
OCR2SB                  =0xF6  ; memory mapped, for LD/ST
OCR2SBL                 =0xF6  ; memory mapped, for LD/ST
OCR2SBH                 =0xF7  ; memory mapped, for LD/ST
OCR2RB                  =0xF8  ; memory mapped, for LD/ST
OCR2RBL                 =0xF8  ; memory mapped, for LD/ST
OCR2RBH                 =0xF9  ; memory mapped, for LD/ST
PCNF2                   =0xFA  ; memory mapped, for LD/ST
PFIFTY2                 =7
PALOCK2                 =6
PLOCK2                  =5
PMODE21                 =4
PMODE20                 =3
POP2                    =2
PCLKSEL2                =1
POME2                   =0
PCTL2                   =0xFB  ; memory mapped, for LD/ST
PPRE21                  =7
PPRE20                  =6
PBFM2                   =5
PAOC2B                  =4
PAOC2A                  =3
PARUN2                  =2
PCCYC2                  =1
PRUN2                   =0
PFRC2A                  =0xFC  ; memory mapped, for LD/ST
PCAE2A                  =7
PISEL2A                 =6
PELEV2A                 =5
PFLTE2A                 =4
PRFM2A3                 =3
PRFM2A2                 =2
PRFM2A1                 =1
PRFM2A0                 =0
PFRC2B                  =0xFD  ; memory mapped, for LD/ST
PCAE2B                  =7
PISEL2B                 =6
PELEV2B                 =5
PFLTE2B                 =4
PRFM2B3                 =3
PRFM2B2                 =2
PRFM2B1                 =1
PRFM2B0                 =0
PICR2                   =0xFE  ; memory mapped, for LD/ST
PICR2L                  =0xFE  ; memory mapped, for LD/ST
PICR2H                  =0xFF  ; memory mapped, for LD/ST
;
; PSC interrupts
PIFR0                   =0xA0  ; memory mapped, for LD/ST
POAC0B                  =7
POAC0A                  =6
PSEI0                   =5
PEV0B                   =4
PEV0A                   =3
PRN01                   =2
PRN00                   =1
PEOP0                   =0
PIM0                    =0xA1  ; memory mapped, for LD/ST
PSEIE0                  =5
PEVE0B                  =4
PEVE0A                  =3
PEOPE0                  =0
PIFR1                   =0xA2  ; memory mapped, for LD/ST
POAC1B                  =7
POAC1A                  =6
PSEI1                   =5
PEV1B                   =4
PEV1A                   =3
PRN11                   =2
PRN10                   =1
PEOP1                   =0
PIM1                    =0xA3  ; memory mapped, for LD/ST
PSEIE1                  =5
PEVE1B                  =4
PEVE1A                  =3
PEOPE1                  =0
PIFR2                   =0xA4  ; memory mapped, for LD/ST
POAC2B                  =7
POAC2A                  =6
PSEI2                   =5
PEV2B                   =4
PEV2A                   =3
PRN21                   =2
PRN20                   =1
PEOP2                   =0
PIM2                    =0xA5  ; memory mapped, for LD/ST
PSEIE2                  =5
PEVE2B                  =4
PEVE2A                  =3
PEOPE2                  =0
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
;
; lock bits (Z = 0x0001)
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
RSTDISBL                =7
DWEN                    =6
SPIEN                   =5
WDTON                   =4
EESAVE                  =3
BODLEVEL2               =2
BODLEVEL1               =1
BODLEVEL0               =0
;
; extended fuses
PSC2RB                  =7
PSC1RB                  =6
PSC0RB                  =5
PSCRV                   =4
BOOTSZ1                 =2
BOOTSZ0                 =1
BOOTRST                 =0
;
; ------------------------------------------------------------
;
; Interrupt Vector Macros
;
.macro set_vector_PSC2_CAPT
 .area vector (abs)
 .org  0x04
  jmp  @0
 .area text
.endmacro
.macro set_vector_PSC2_EC
 .area vector (abs)
 .org  0x08
  jmp  @0
 .area text
.endmacro
.macro set_vector_PSC1_CAPT
 .area vector (abs)
 .org  0x0C
  jmp  @0
 .area text
.endmacro
.macro set_vector_PSC1_EC
 .area vector (abs)
 .org  0x10
  jmp  @0
 .area text
.endmacro
.macro set_vector_PSC0_CAPT
 .area vector (abs)
 .org  0x14
  jmp  @0
 .area text
.endmacro
.macro set_vector_PSC0_EC
 .area vector (abs)
 .org  0x18
  jmp  @0
 .area text
.endmacro
.macro set_vector_ANA_COMP0
 .area vector (abs)
 .org  0x1C
  jmp  @0
 .area text
.endmacro
.macro set_vector_ANA_COMP1
 .area vector (abs)
 .org  0x20
  jmp  @0
 .area text
.endmacro
.macro set_vector_ANA_COMP2
 .area vector (abs)
 .org  0x24
  jmp  @0
 .area text
.endmacro
.macro set_vector_INT0
 .area vector (abs)
 .org  0x28
  jmp  @0
 .area text
.endmacro
.macro set_vector_EXT_INT0
 .area vector (abs)
 .org  0x28
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIMER1_CAPT
 .area vector (abs)
 .org  0x2C
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIM1_CAPT
 .area vector (abs)
 .org  0x2C
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIMER1_COMPA
 .area vector (abs)
 .org  0x30
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIM1_COMPA
 .area vector (abs)
 .org  0x30
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIMER1_COMPB
 .area vector (abs)
 .org  0x34
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIM1_COMPB
 .area vector (abs)
 .org  0x34
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
.macro set_vector_TIM0_COMPA
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
.macro set_vector_ADC
 .area vector (abs)
 .org  0x48
  jmp  @0
 .area text
.endmacro
.macro set_vector_INT1
 .area vector (abs)
 .org  0x4C
  jmp  @0
 .area text
.endmacro
.macro set_vector_EXT_INT1
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
.macro set_vector_USART_RX
 .area vector (abs)
 .org  0x54
  jmp  @0
 .area text
.endmacro
.macro set_vector_USART_RXC
 .area vector (abs)
 .org  0x54
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
.macro set_vector_USART_DRE
 .area vector (abs)
 .org  0x58
  jmp  @0
 .area text
.endmacro
.macro set_vector_USART_UDRE
 .area vector (abs)
 .org  0x58
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
.macro set_vector_INT2
 .area vector (abs)
 .org  0x60
  jmp  @0
 .area text
.endmacro
.macro set_vector_EXT_INT2
 .area vector (abs)
 .org  0x60
  jmp  @0
 .area text
.endmacro
.macro set_vector_WDT
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
.macro set_vector_TIMER0_COMPB
 .area vector (abs)
 .org  0x6C
  jmp  @0
 .area text
.endmacro
.macro set_vector_TIM0_COMPB
 .area vector (abs)
 .org  0x6C
  jmp  @0
 .area text
.endmacro
.macro set_vector_INT3
 .area vector (abs)
 .org  0x70
  jmp  @0
 .area text
.endmacro
.macro set_vector_EXT_INT3
 .area vector (abs)
 .org  0x70
  jmp  @0
 .area text
.endmacro
.macro set_vector_SPM_RDY
 .area vector (abs)
 .org  0x7C
  jmp  @0
 .area text
.endmacro
.macro set_vector_SPM_READY
 .area vector (abs)
 .org  0x7C
  jmp  @0
 .area text
.endmacro
;------
;<eof>
