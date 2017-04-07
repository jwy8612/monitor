#ifndef ___xmstructs_h
#define ___xmstructs_h

/* XMegaXXX ior structs header file
 * to be included by ioxmXXXv.h
 */

/* 2008/03/09   alpha release based on Astudio 4.14.0.580
   2008/03/24   Astudio 4.14 RC 1 cleared up a lot
   2008/03/25   fixed macros for iccavr, fixed buggy comments
   2008/07/10   fixed USART offset 0x02
   2008/08/07   changes by xmega A manual rev B
   2008/08/22   rewrote WORDIOR macros
   2009/02/11   fix WAFERX and Y locations
   2009/02/18   reworked NVM_struct ... jph
   2009/03/25   fixed DMA struct
   2009/04/09   excluded part specific structs
   2009/05/08   fixed ADC struct member CAL
   2009/05/13   added NVM signature struct members TEMPSENSE
 */

/*************************************************************/

/* word definition macros used below */

enum ior_16b_offsets {L=0,H}; 
enum ior_32b_offsets {LL=0,LH,HL,HH}; 

#define WORDIORLH(iorname,unique) \
    union union16b_##unique##_##iorname \
          { unsigned int i; \
            unsigned char b[2]; \
          } ##iorname

#define WORDIOR0123(iorname,unique) \
    union union32b_##unique##_##iorname \
          { unsigned long l; \
            unsigned int i[2]; \
            unsigned char b[4]; \
          } ##iorname

/*************************************************************/

/* GPIO registers */
typedef struct GPIO_struct
    { unsigned char GPIO0;
      unsigned char GPIO1;
      unsigned char GPIO2;
      unsigned char GPIO3;
      unsigned char GPIO4;
      unsigned char GPIO5;
      unsigned char GPIO6;
      unsigned char GPIO7;
      unsigned char GPIO8;
      unsigned char GPIO9;
      unsigned char GPIOA;
      unsigned char GPIOB;
      unsigned char GPIOC;
      unsigned char GPIOD;
      unsigned char GPIOE;
      unsigned char GPIOF;
    } GPIO_t;

/* VPORT registers */
typedef struct VPORT_struct
    { unsigned char DIR;
      unsigned char OUT;
      unsigned char IN;
      unsigned char INTFLAGS;
    } VPORT_t;

/* CPU registers */
typedef struct CPU_struct
    { unsigned char reserved_0x00;
      unsigned char reserved_0x01;
      unsigned char reserved_0x02;
      unsigned char reserved_0x03;
      unsigned char CCP;
      unsigned char reserved_0x05;
      unsigned char reserved_0x06;
      unsigned char reserved_0x07;
      unsigned char RAMPD;
      unsigned char RAMPX;
      unsigned char RAMPY;
      unsigned char RAMPZ;
      unsigned char EIND;
      WORDIORLH(SP,CPU);
      unsigned char SREG;
    } CPU_t;

/* CLK registers */
typedef struct CLK_struct
    { unsigned char CTRL;
      unsigned char PSCTRL;
      unsigned char LOCK;
      unsigned char RTCCTRL;
    } CLK_t;

/* SLEEP registers */
typedef struct SLEEP_struct
    { unsigned char CTRL;
    } SLEEP_t;

/* OSC registers */
typedef struct OSC_struct
    { unsigned char CTRL;
      unsigned char STATUS;
      unsigned char XOSCCTRL;
      unsigned char XOSCFAIL;
      unsigned char RC32KCAL;
      unsigned char PLLCTRL;
      unsigned char DFLLCTRL;
    } OSC_t;

/* DFFLRC registers */
#ifndef __ioxm128A1revDv_h /* struct defined in "ioxm128A1revDv.h" */
typedef struct DFLLRC_struct
    { unsigned char CTRL;
      unsigned char reserved_0x01;
      unsigned char CALA;
      unsigned char CALB;
      unsigned char COMP0;
      unsigned char COMP1;
      unsigned char COMP2;
    } DFLLRC_t;
#endif

/* PR registers */
typedef struct PR_struct
    { unsigned char PR;
      unsigned char PRPA;
      unsigned char PRPB;
      unsigned char PRPC;
      unsigned char PRPD;
      unsigned char PRPE;
      unsigned char PRPF;
    } PR_t;

/* RST registers */
typedef struct RST_struct
    { unsigned char STATUS;
      unsigned char CTRL;
    } RST_t;

/* WDT registers */
typedef struct WDT_struct
    { unsigned char CTRL;
      unsigned char WINCTRL;
      unsigned char STATUS;
    } WDT_t;

/* MCU registers */
typedef struct MCU_struct
    { unsigned char DEVID0;
      unsigned char DEVID1;
      unsigned char DEVID2;
      unsigned char REVID;
      unsigned char JTAGUID;
      unsigned char reserved_0x05;
      unsigned char MCUCR;
      unsigned char reserved_0x07;
      unsigned char EVSYSLOCK;
      unsigned char AWEXLOCK;
    } MCU_t;

/* PMIC registers */
typedef struct PMIC_struct
    { unsigned char STATUS;
      unsigned char INTPRI;
      unsigned char CTRL;
    } PMIC_t;

/* PORTCFG registers */
typedef struct PORTCFG_struct
    { unsigned char MPCMASK;
      unsigned char reserved_0x01;
      unsigned char VPCTRLA;
      unsigned char VPCTRLB;
      unsigned char CLKEVOUT;
    } PORTCFG_t;

/* AES registers */
typedef struct AES_struct
    { unsigned char CTRL;
      unsigned char STATUS;
      unsigned char STATE;
      unsigned char KEY;
      unsigned char INTCTRL;
    } AES_t;

/* DMA registers */
#ifndef __ioxm128A1revDv_h /* struct defined in "ioxm128A1revDv.h" */
typedef struct DMA_CH_struct
    { unsigned char CTRLA;
      unsigned char CTRLB;
      unsigned char ADDRCTRL;
      unsigned char TRIGSRC;
      WORDIORLH(TRFCNT,DMA_CH);
      unsigned char REPCNT;
      unsigned char reserved_0x07;
      WORDIOR0123(SRCADDR,DMA_CH);
      WORDIOR0123(DESTADDR,DMA_CH);
    } DMA_CH_t;
#endif

typedef struct DMA_struct
    { unsigned char CTRL;
      unsigned char reserved_0x01;
      unsigned char reserved_0x02;
      unsigned char INTFLAGS;
      unsigned char STATUS;
      unsigned char reserved_0x05;
      WORDIORLH(TEMP,DMA);
      unsigned char reserved_0x08;
      unsigned char reserved_0x09;
      unsigned char reserved_0x0A;
      unsigned char reserved_0x0B;
      unsigned char reserved_0x0C;
      unsigned char reserved_0x0D;
      unsigned char reserved_0x0E;
      unsigned char reserved_0x0F;
      DMA_CH_t CH0;
      DMA_CH_t CH1;
      DMA_CH_t CH2;
      DMA_CH_t CH3;
    } DMA_t;

/* EVSYS registers */
typedef struct EVSYS_struct
    { unsigned char CH0MUX;
      unsigned char CH1MUX;
      unsigned char CH2MUX;
      unsigned char CH3MUX;
      unsigned char CH4MUX;
      unsigned char CH5MUX;
      unsigned char CH6MUX;
      unsigned char CH7MUX;
      unsigned char CH0CTRL;
      unsigned char CH1CTRL;
      unsigned char CH2CTRL;
      unsigned char CH3CTRL;
      unsigned char CH4CTRL;
      unsigned char CH5CTRL;
      unsigned char CH6CTRL;
      unsigned char CH7CTRL;
      unsigned char STROBE;
      unsigned char DATA;
    } EVSYS_t;

/* NVM controller registers */
typedef struct NVM_struct
    { 
      unsigned char ADDR0; // jph
      unsigned char ADDR1; // jph
      unsigned char ADDR2; // jph
      unsigned char reserved_0x03; // jph
      unsigned char DATA0; // jph
      unsigned char DATA1; // jph
      unsigned char DATA2; // jph
      unsigned char reserved_0x07; // jph
      unsigned char reserved_0x08;
      unsigned char reserved_0x09;
      unsigned char CMD;
      unsigned char CTRLA;
      unsigned char CTRLB;
      unsigned char INTCTRL;
      unsigned char reserved_0x0E;
      unsigned char STATUS;
      unsigned char LOCKBITS;
    } NVM_t;

/* ADC registers */
typedef struct ADC_CH_struct
    { unsigned char CTRL;
      unsigned char MUXCTRL;
      unsigned char INTCTRL;
      unsigned char INTFLAG;
      WORDIORLH(RES,ADC_CH);
      unsigned char reserved_0x06;
      unsigned char reserved_0x07;
    } ADC_CH_t;

typedef struct ADC_struct
    { unsigned char CTRLA;
      unsigned char CTRLB;
      unsigned char REFCTRL;
      unsigned char EVCTRL;
      unsigned char PRESCALER;
      unsigned char reserved_0x05;
      unsigned char INTFLAGS;
      unsigned char TEMP;
      unsigned char reserved_0x08;
      unsigned char reserved_0x09;
      unsigned char reserved_0x0A;
      unsigned char reserved_0x0B;
      WORDIORLH(CAL,ADC);
      unsigned char reserved_0x0E;
      unsigned char reserved_0x0F;
      WORDIORLH(CH0RES,ADC);
      WORDIORLH(CH1RES,ADC);
      WORDIORLH(CH2RES,ADC);
      WORDIORLH(CH3RES,ADC);
      WORDIORLH(CMP,ADC);
      unsigned char reserved_0x1A;
      unsigned char reserved_0x1B;
      unsigned char reserved_0x1C;
      unsigned char reserved_0x1D;
      unsigned char reserved_0x1E;
      unsigned char reserved_0x1F;
      ADC_CH_t CH0;
      ADC_CH_t CH1;
      ADC_CH_t CH2;
      ADC_CH_t CH3;
    } ADC_t;

/* DAC registers */
typedef struct DAC_struct
    { unsigned char CTRLA;
      unsigned char CTRLB;
      unsigned char CTRLC;
      unsigned char EVCTRL;
      unsigned char TIMCTRL;
      unsigned char STATUS;
      unsigned char reserved_0x06;
      unsigned char reserved_0x07;
      unsigned char GAINCAL;
      unsigned char OFFSETCAL;
      unsigned char reserved_0x0A;
      unsigned char reserved_0x0B;
      unsigned char reserved_0x0C;
      unsigned char reserved_0x0D;
      unsigned char reserved_0x0E;
      unsigned char reserved_0x0F;
      unsigned char reserved_0x10;
      unsigned char reserved_0x11;
      unsigned char reserved_0x12;
      unsigned char reserved_0x13;
      unsigned char reserved_0x14;
      unsigned char reserved_0x15;
      unsigned char reserved_0x16;
      unsigned char reserved_0x17;
      WORDIORLH(CH0DATA,DAC);
      WORDIORLH(CH1DATA,DAC);
    } DAC_t;

/* AC registers */
typedef struct AC_struct
    { unsigned char AC0CTRL;
      unsigned char AC1CTRL;
      unsigned char AC0MUXCTRL;
      unsigned char AC1MUXCTRL;
      unsigned char CTRLA;
      unsigned char CTRLB;
      unsigned char WINCTRL;
      unsigned char STATUS;
    } AC_t;

/* RTC registers */
typedef struct RTC_struct
    { unsigned char CTRL;
      unsigned char STATUS;
      unsigned char INTCTRL;
      unsigned char INTFLAGS;
      unsigned char TEMP;
      unsigned char reserved_0x05;
      unsigned char reserved_0x06;
      unsigned char reserved_0x07;
      WORDIORLH(CNT,RTC);
      WORDIORLH(PER,RTC);
      WORDIORLH(COMP,RTC);
    } RTC_t;

/* EBI registers */
typedef struct EBI_CS_struct
    { unsigned char CTRLA;
      unsigned char CTRLB;
      WORDIORLH(BASEADDR,EBI_CS);
    } EBI_CS_t;

typedef struct EBI_struct
    { unsigned char CTRL;
      unsigned char SDRAMCTRLA;
      unsigned char reserved_0x02;
      unsigned char reserved_0x03;
      WORDIORLH(REFRESH,EBI);
      WORDIORLH(INITDLY,EBI);
      unsigned char SDRAMCTRLB;
      unsigned char SDRAMCTRLC;
      unsigned char reserved_0x0A;
      unsigned char reserved_0x0B;
      unsigned char reserved_0x0C;
      unsigned char reserved_0x0D;
      unsigned char reserved_0x0E;
      unsigned char reserved_0x0F;
      EBI_CS_t CS0;
      EBI_CS_t CS1;
      EBI_CS_t CS2;
      EBI_CS_t CS3;
    } EBI_t;

/* TWI registers */
typedef struct TWI_MASTER_struct
    { unsigned char CTRLA;
      unsigned char CTRLB;
      unsigned char CTRLC;
      unsigned char STATUS;
      unsigned char BAUD;
      unsigned char ADDR;
      unsigned char DATA;
    } TWI_MASTER_t;

typedef struct TWI_SLAVE_struct
    { unsigned char CTRLA;
      unsigned char CTRLB;
      unsigned char STATUS;
      unsigned char ADDR;
      unsigned char DATA;
    } TWI_SLAVE_t;

typedef struct TWI_struct
    { unsigned char CTRL;
      TWI_MASTER_t MASTER;
      TWI_SLAVE_t  SLAVE;
    } TWI_t;

/* PORT registers */
typedef struct PORT_struct
    { unsigned char DIR;
      unsigned char DIRSET;
      unsigned char DIRCLR;
      unsigned char DIRTGL;
      unsigned char OUT;
      unsigned char OUTSET;
      unsigned char OUTCLR;
      unsigned char OUTTGL;
      unsigned char IN;
      unsigned char INTLVL;
      unsigned char INT0MASK;
      unsigned char INT1MASK;
      unsigned char INTFLAGS;
      unsigned char reserved_0x0D;
      unsigned char reserved_0x0E;
      unsigned char reserved_0x0F;
      unsigned char PIN0CTRL;
      unsigned char PIN1CTRL;
      unsigned char PIN2CTRL;
      unsigned char PIN3CTRL;
      unsigned char PIN4CTRL;
      unsigned char PIN5CTRL;
      unsigned char PIN6CTRL;
      unsigned char PIN7CTRL;
    } PORT_t;

/* TC registers */
typedef struct TC_struct
    { unsigned char CTRLA;
      unsigned char CTRLB;
      unsigned char CTRLC;
      unsigned char CTRLD;
      unsigned char CTRLE;
      unsigned char reserved_0x05;
      unsigned char INTCTRLA;
      unsigned char INTCTRLB;
      unsigned char CTRLFCLR;
      unsigned char CTRLFSET;
      unsigned char CTRLGCLR;
      unsigned char CTRLGSET;
      unsigned char INTFLAGS;
      unsigned char reserved_0x0D;
      unsigned char reserved_0x0E;
      unsigned char TEMP;
      unsigned char reserved_0x10;
      unsigned char reserved_0x11;
      unsigned char reserved_0x12;
      unsigned char reserved_0x13;
      unsigned char reserved_0x14;
      unsigned char reserved_0x15;
      unsigned char reserved_0x16;
      unsigned char reserved_0x17;
      unsigned char reserved_0x18;
      unsigned char reserved_0x19;
      unsigned char reserved_0x1A;
      unsigned char reserved_0x1B;
      unsigned char reserved_0x1C;
      unsigned char reserved_0x1D;
      unsigned char reserved_0x1E;
      unsigned char reserved_0x1F;
      WORDIORLH(CNT,TC);
      unsigned char reserved_0x22;
      unsigned char reserved_0x23;
      unsigned char reserved_0x24;
      unsigned char reserved_0x25;
      WORDIORLH(PER,TC);
      WORDIORLH(CCA,TC);
      WORDIORLH(CCB,TC);
      WORDIORLH(CCC,TC);
      WORDIORLH(CCD,TC);
      unsigned char reserved_0x30;
      unsigned char reserved_0x31;
      unsigned char reserved_0x32;
      unsigned char reserved_0x33;
      unsigned char reserved_0x34;
      unsigned char reserved_0x35;
      WORDIORLH(PERBUF,TC);
      WORDIORLH(CCABUF,TC);
      WORDIORLH(CCBBUF,TC);
      WORDIORLH(CCCBUF,TC);
      WORDIORLH(CCDBUF,TC);
    } TC_t;

/* AWEX registers */
typedef struct AWEX_struct
    { unsigned char CTRLA;
      unsigned char reserved_0x01;
      unsigned char FDEMASK;
      unsigned char FDCTRL;
      unsigned char STATUS;
      unsigned char reserved_0x05;
      unsigned char DTBS;
      unsigned char DTBUFBS;
      unsigned char DTLS;
      unsigned char DTHS;
      unsigned char DTBUFLS;
      unsigned char DTBUFHS;
      unsigned char OUTOVEN;
    } AWEX_t;

/* HIRES registers */
typedef struct HIRES_struct
    { unsigned char CTRLA;
    } HIRES_t;

/* USART registers */
typedef struct USART_struct
    { unsigned char DATA;
      unsigned char STATUS;
      unsigned char reserved_0x02;
      unsigned char CTRLA;
      unsigned char CTRLB;
      unsigned char CTRLC;
      unsigned char BAUDCTRLA;
      unsigned char BAUDCTRLB;
    } USART_t;

/* IRCOM registers */
typedef struct IRCOM_struct
    { unsigned char TXPLCTRL;
      unsigned char RXPLCTRL;
      unsigned char CTRL;
    } IRCOM_t;

/* SPI registers */
typedef struct SPI_struct
    { unsigned char CTRL;
      unsigned char INTCTRL;
      unsigned char STATUS;
      unsigned char DATA;
    } SPI_t;

/*************************************************************/

/* OCD registers */
/* typedef struct OCD_struct
    { unsigned char OCDR0;
      unsigned char OCDR1;
    } OCD_t; */

/* NVM fuses and lockbits registers */
typedef struct NVM_FL_struct
    { unsigned char FUSEBYTE0;
      unsigned char FUSEBYTE1;
      unsigned char FUSEBYTE2;
      unsigned char reserved_0x03;
      unsigned char FUSEBYTE4;
      unsigned char FUSEBYTE5;
      unsigned char reserved_0x06;
      unsigned char LOCKBITS;
    } NVM_FL_t;

/* NVM signature row registers */
typedef struct NVM_SIG_struct
    { unsigned char RCOSC2MCAL;
      unsigned char reserved_0x01;
      unsigned char RCOSC32KCAL;
      unsigned char RCOSC32MCAL;
      unsigned char reserved_0x04;
      unsigned char reserved_0x05;
      unsigned char reserved_0x06;
      unsigned char reserved_0x07;
      unsigned char LOTNUMBYTE0;
      unsigned char LOTNUMBYTE1;
      unsigned char LOTNUMBYTE2;
      unsigned char LOTNUMBYTE3;
      unsigned char LOTNUMBYTE4;
      unsigned char LOTNUMBYTE5;
      unsigned char reserved_0x0E;
      unsigned char reserved_0x0F;
      unsigned char WAFERNUM;
      unsigned char reserved_0x11;
      unsigned char WAFERX0; // jph
      unsigned char WAFERX1; // jph
      unsigned char WAFERY0; // jph
      unsigned char WAFERY1; // jph
      unsigned char reserved_0x16;
      unsigned char reserved_0x17;
      unsigned char reserved_0x18;
      unsigned char reserved_0x19;
      unsigned char reserved_0x1A;
      unsigned char reserved_0x1B;
      unsigned char reserved_0x1C;
      unsigned char reserved_0x1D;
      unsigned char reserved_0x1E;
      unsigned char reserved_0x1F;
      unsigned char ADCACAL0;
      unsigned char ADCACAL1;
      unsigned char ADCACAL2;
      unsigned char ADCACAL3;
      unsigned char ADCBCAL0;
      unsigned char ADCBCAL1;
      unsigned char ADCBCAL2;
      unsigned char ADCBCAL3;
      unsigned char reserved_0x28;
      unsigned char reserved_0x29;
      unsigned char reserved_0x2A;
      unsigned char reserved_0x2B;
      unsigned char reserved_0x2C;
      unsigned char reserved_0x2D;
      unsigned char TEMPSENSE0;
      unsigned char TEMPSENSE1;
      unsigned char DACACAL0;
      unsigned char DACACAL1;
      unsigned char DACBCAL0;
      unsigned char DACBCAL1;
    } NVM_SIG_t;

/* PDI registers */
typedef struct PDI_struct
    { unsigned char STATUS;
      unsigned char RESET;
      unsigned char CTRL;
    } PDI_t;

/*************************************************************/

/*ja*/
#endif
