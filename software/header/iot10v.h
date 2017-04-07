#ifndef __iot10v_h
#define __iot10v_h

/* ATtiny10 register and bit name header file
 * for ImageCraft ICCAVR compiler
 */

/* created 2009-04-28
 */

/* IO registers */

/* Port B */
#define PINB	(*(volatile unsigned char *)0x00)
#define DDRB	(*(volatile unsigned char *)0x01)
#define PORTB	(*(volatile unsigned char *)0x02)
#define PUEB	(*(volatile unsigned char *)0x03)
#define PORTCR	(*(volatile unsigned char *)0x0c)
#define DIDR0	(*(volatile unsigned char *)0x17)

/* Pin Interrupts */
#define PCMSK	(*(volatile unsigned char *)0x10)
#define PCIFR	(*(volatile unsigned char *)0x11)
#define PCICR	(*(volatile unsigned char *)0x12)
#define EIMSK	(*(volatile unsigned char *)0x13)
#define EIFR	(*(volatile unsigned char *)0x14)
#define EICRA	(*(volatile unsigned char *)0x15)

/* ADC */
#define ADC	(*(volatile unsigned char *)0x19)
#define ADCL	(*(volatile unsigned char *)0x19)
#define ADMUX	(*(volatile unsigned char *)0x1b)
#define ADCMUX	(*(volatile unsigned char *)0x1b)
#define ADCSRB	(*(volatile unsigned char *)0x1c)
#define ADCSRA	(*(volatile unsigned char *)0x1d)

/* Analog Comp */
#define ACSR	(*(volatile unsigned char *)0x1f)

/* Timer/Counter 0 */
#define ICR0	(*(volatile unsigned int *)0x22)
#define ICR0L	(*(volatile unsigned char *)0x22)
#define ICR0H	(*(volatile unsigned char *)0x23)
#define OCR0A	(*(volatile unsigned int *)0x26)
#define OCR0AL	(*(volatile unsigned char *)0x26)
#define OCR0AH	(*(volatile unsigned char *)0x27)
#define OCR0B	(*(volatile unsigned int *)0x24)
#define OCR0BL	(*(volatile unsigned char *)0x24)
#define OCR0BH	(*(volatile unsigned char *)0x25)
#define TCNT0	(*(volatile unsigned int *)0x28)
#define TCNT0L	(*(volatile unsigned char *)0x28)
#define TCNT0H	(*(volatile unsigned char *)0x29)
#define TCCR0A	(*(volatile unsigned char *)0x2e)
#define TCCR0B	(*(volatile unsigned char *)0x2d)
#define TCCR0C	(*(volatile unsigned char *)0x2c)

/* Timer/Counter Interrupts */
#define TIFR0	(*(volatile unsigned char *)0x2a)
#define TIFR	(*(volatile unsigned char *)0x2a)
#define TIMSK0	(*(volatile unsigned char *)0x2b)
#define TIMSK	(*(volatile unsigned char *)0x2b)

/* General Control */
#define GTCCR	(*(volatile unsigned char *)0x2f)

/* Watchdog Timer Control */
#define WDTCR	(*(volatile unsigned char *)0x31)

/* NVM */
#define NVMCSR	(*(volatile unsigned char *)0x32)
#define NVMCMD	(*(volatile unsigned char *)0x33)

/* VLM */
#define VLMCSR	(*(volatile unsigned char *)0x34)

/* Power Reduction */
#define PRR	(*(volatile unsigned char *)0x35)

/* Clock Control */
#define CLKPSR	(*(volatile unsigned char *)0x36)
#define CLKMSR	(*(volatile unsigned char *)0x37)

/* RC oscillator */
#define OSCCAL	(*(volatile unsigned char *)0x39)

/* MCU */
#define SMCR	(*(volatile unsigned char *)0x3a)
#define RSTFLR	(*(volatile unsigned char *)0x3b)
#define CCP	(*(volatile unsigned char *)0x3c)

/* Stack Pointer */
#define SP	(*(volatile unsigned char *)0x3d)
#define SPL	(*(volatile unsigned char *)0x3d)

/* Status REGister */
#define SREG	(*(volatile unsigned char *)0x5F)


/* non-IO addresses */
#define NVMLOCKBITS (*(volatile unsigned char *)0x3F00)
#define CONFIGURATIONBITS (*(volatile unsigned char *)0x3F40)
#define FLASHPROGRAMMEMORY (*(volatile unsigned char *)0x4000)


/* IO bits */

/* Port B bits */
#define    PUEB3    3
#define    PUEB2    2
#define    PUEB1    1
#define    PUEB0    0

#define    PORTB3   3
#define    PORTB2   2
#define    PORTB1   1
#define    PORTB0   0
#define    PB3      3
#define    PB2      2
#define    PB1      1
#define    PB0      0

#define    DDB3     3
#define    DDB2     2
#define    DDB1     1
#define    DDB0     0

#define    PINB3    3
#define    PINB2    2
#define    PINB1    1
#define    PINB0    0

#define    BBMB     1

#define    PCINT3   3
#define    PCINT2   2
#define    PCINT1   1
#define    PCINT0   0

#define    ADC3D    3
#define    ADC2D    2
#define    ADC1D    1
#define    ADC0D    0

/* Pin Interrupt bits */
#define    ISC00    0
#define    ISC01    1
#define    INT0     0
#define    INTF0    0

#define    PCIE0    0
#define    PCIF0    0

/* Analog Digital Converter bits */
#define    MUX1     1
#define    MUX0     0

#define    ADEN     7
#define    ADSC     6
#define    ADATE    5
#define    ADFR     5
#define    ADIF     4
#define    ADIE     3
#define    ADPS2    2
#define    ADPS1    1
#define    ADPS0    0

#define    ADTS2    2
#define    ADTS1    1
#define    ADTS0    0

/* Analog Comparator bits */
#define    ACD      7
#define    ACO      5
#define    ACI      4
#define    ACIE     3
#define    ACIC     2
#define    ACIS1    1
#define    ACIS0    0

/* Timer/Counter Interrupt bits */
#define    ICIE0    5
#define    OCIE0A   1
#define    OCIE0B   2
#define    TOIE0    0

#define    ICF0     5
#define    OCF0A    1
#define    OCF0B    2
#define    TOV0     0

/* Timer/Counter 0 Control bits */
#define    FOC0A    7
#define    FOC0B    6

#define    ICNC0    7
#define    ICES0    6
#define    WGM03    4
#define    WGM02    3
#define    CS02     2
#define    CS01     1
#define    CS00     0

#define    COM0A1   7
#define    COM0A0   6
#define    COM0B1   5
#define    COM0B0   4
#define    WGM01    1
#define    WGM00    0

/* GTCCR bits */
#define    TSM      7
#define    PSR10    0

/* Watchdog Timer Control bits */
#define    WDIF     7
#define    WDTIF    7
#define    WDIE     6
#define    WDTIE    6
#define    WDP3     5
#define    WDE      3
#define    WDP2     2
#define    WDP1     1
#define    WDP0     0

/* NVM bits */
#define    NVMBSY   7

/* VLM bits */
#define    VLMF     7
#define    VLMIE    6
#define    VLM2     2
#define    VLM1     1
#define    VLM0     0

/* PRR bits */
#define    PRADC    1
#define    PRTIM0   0

/* CLK Control bits */
#define    CLKPS3   3
#define    CLKPS2   2
#define    CLKPS1   1
#define    CLKPS0   0

#define    CLKMS1   1
#define    CLKMS0   0

/* Sleep Mode Control bits */
#define    SM2      3
#define    SM1      2
#define    SM0      1
#define    SE       0

/* Reset Flag bits */
#define    WDRF     3
#define    EXTRF    1
#define    PORF     0


/* Lock and Config Fuses bits */

/* lock bits */
#define  NVLB2    1
#define  LB2      1
#define  NVLB1    0
#define  LB1      0

/* config bits */
#define  CKOUT    2
#define  WDTON    1
#define  RSTDISBL 0


/* Interrupt Vector Numbers */

#define iv_RESET        1
#define iv_INT0         2
#define iv_PCINT0       3
#define iv_TIM0_CAPT    4
#define iv_TIM0_OVF     5
#define iv_TIM0_COMPA   6
#define iv_TIM0_COMPB   7
#define iv_ANA_COMP     8
#define iv_WDT          9
#define iv_VLM          10
#define iv_ADC          11

/* */

#endif
