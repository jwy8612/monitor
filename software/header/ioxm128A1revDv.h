#ifndef __ioxm128A1revDv_h
#define __ioxm128A1revDv_h

/* XMega128A1revD io header file
 * for ImageCraft ICCAVR compiler
 */

/* 2008/03/09   alpha release based on Astudio 4.14 beta2
                #including files with bits/values definitions,
                new structed and old flat ior addressing
   2008/03/24   Astudio 4.14 RC 1 cleared up a lot
   2009/04/09   excluded rev D specials from common _xmstructs.h
 */

/* XMega128A1 rev D described by xml file only...
 */

/*************************************************************/
#include <_xmmemories.h>
#include <_xmstructs.h>
#include <_xmA1bits.h>

/* 128A1revD-only structs */
typedef struct DFLLRC_struct
    { unsigned char OSCCNT0;
      unsigned char OSCCNT1;
      unsigned char OSCCNT2;
      unsigned char CALA;
      unsigned char CALB;
    } DFLLRC_t;
	
typedef struct DMA_CH_struct
    { unsigned char CTRL;
      unsigned char ADDRCTRL;
      unsigned char TRIGSRC;
      unsigned char reserved_0x03;
      WORDIORLH(TRFCNT,DMA_CH);
      unsigned char REPCNT;
      unsigned char reserved_0x07;
      WORDIOR0123(SRCADDR,DMA_CH);
      WORDIOR0123(DESTADDR,DMA_CH);
    } DMA_CH_t;

/*************************************************************/

/* IO Registers Addresses */

/* GPIO registers */
#define GPIO    (*(volatile GPIO_t *)0x0000)

/* VPORT registers */
#define VPORT0  (*(volatile VPORT_t *)0x0010)
#define VPORT1  (*(volatile VPORT_t *)0x0014)
#define VPORT2  (*(volatile VPORT_t *)0x0018)
#define VPORT3  (*(volatile VPORT_t *)0x001C)

/* OCD registers */
#define OCD     (*(volatile OCD_t *)0x002E)

/* CPU registers */
#define CPU     (*(volatile CPU_t *)0x0030)

/* CLK registers */
#define CLK     (*(volatile CLK_t *)0x0040)

/* SLEEP registers */
#define SLEEP   (*(volatile SLEEP_t*)0x0048)

/* OSC registers */
#define OSC     (*(volatile OSC_t *)0x0050)

/* DFFLRC registers */
#define DFLLRC32M (*(volatile DFLLRC_t *)0x0060)
#define DFLLRC2M  (*(volatile DFLLRC_t *)0x0068)

/* PR registers */
#define PR      (*(volatile PR_t *)0x0070)

/* RST registers */
#define RST     (*(volatile RST_t *)0x0078)

/* WDT registers */
#define WDT     (*(volatile WDT_t *)0x0080)

/* MCU registers */
#define MCU     (*(volatile MCU_t *)0x0090)

/* PMIC registers */
#define PMIC    (*(volatile PMIC_t *)0x00A0)

/* PORTCFG registers */
#define PORTCFG (*(volatile PORTCFG_t *)0x00B0)

/* AES registers */
#define AES     (*(volatile AES_t *)0x00C0)

/* DMA registers */
#define DMA     (*(volatile DMA_t *)0x0100)

/* EVSYS registers */
#define EVSYS   (*(volatile EVSYS_t *)0x0180)

/* NVM controller registers */
#define NVM     (*(volatile NVM_t *)0x01C0)

/* ADC registers */
#define ADCA    (*(volatile ADC_t *)0x0200)
#define ADCB    (*(volatile ADC_t *)0x0240)

/* DAC registers */
#define DACA    (*(volatile DAC_t *)0x0300)
#define DACB    (*(volatile DAC_t *)0x0320)

/* AC registers */
#define ACA     (*(volatile AC_t *)0x0380)
#define ACB     (*(volatile AC_t *)0x0390)

/* RTC registers */
#define RTC     (*(volatile RTC_t *)0x0400)

/* EBI registers */
#define EBI     (*(volatile EBI_t *)0x0440)

/* TWI registers */
#define TWIC    (*(volatile TWI_t *)0x0480)
#define TWID    (*(volatile TWI_t *)0x0490)
#define TWIE    (*(volatile TWI_t *)0x04A0)
#define TWIF    (*(volatile TWI_t *)0x04B0)

/* PORT registers */
#define PORTA   (*(volatile PORT_t *)0x0600)
#define PORTB   (*(volatile PORT_t *)0x0620)
#define PORTC   (*(volatile PORT_t *)0x0640)
#define PORTD   (*(volatile PORT_t *)0x0660)
#define PORTE   (*(volatile PORT_t *)0x0680)
#define PORTF   (*(volatile PORT_t *)0x06A0)
#define PORTG   (*(volatile PORT_t *)0x06C0)
#define PORTH   (*(volatile PORT_t *)0x06E0)
#define PORTJ   (*(volatile PORT_t *)0x0700)
#define PORTK   (*(volatile PORT_t *)0x0720)
#define PORTQ   (*(volatile PORT_t *)0x07C0)
#define PORTR   (*(volatile PORT_t *)0x07E0)

/* TC registers */
#define TCC0    (*(volatile TC_t *)0x0800)
#define TCC1    (*(volatile TC_t *)0x0840)
#define TCD0    (*(volatile TC_t *)0x0900)
#define TCD1    (*(volatile TC_t *)0x0940)
#define TCE0    (*(volatile TC_t *)0x0A00)
#define TCE1    (*(volatile TC_t *)0x0A40)
#define TCF0    (*(volatile TC_t *)0x0B00)
#define TCF1    (*(volatile TC_t *)0x0B40)

/* AWEX registers */
#define AWEXC   (*(volatile AWEX_t *)0x0880)
#define AWEXE   (*(volatile AWEX_t *)0x0A80)

/* HIRES registers */
#define HIRESC  (*(volatile HIRES_t *)0x0890)
#define HIRESD  (*(volatile HIRES_t *)0x0990)
#define HIRESE  (*(volatile HIRES_t *)0x0A90)
#define HIRESF  (*(volatile HIRES_t *)0x0B90)

/* USART registers */
#define USARTC0 (*(volatile USART_t *)0x08A0)
#define USARTC1 (*(volatile USART_t *)0x08B0)
#define USARTD0 (*(volatile USART_t *)0x09A0)
#define USARTD1 (*(volatile USART_t *)0x09B0)
#define USARTE0 (*(volatile USART_t *)0x0AA0)
#define USARTE1 (*(volatile USART_t *)0x0AB0)
#define USARTF0 (*(volatile USART_t *)0x0BA0)
#define USARTF1 (*(volatile USART_t *)0x0BB0)

/* SPI registers */
#define SPIC    (*(volatile SPI_t *)0x08C0)
#define SPID    (*(volatile SPI_t *)0x09C0)
#define SPIE    (*(volatile SPI_t *)0x0AC0)
#define SPIF    (*(volatile SPI_t *)0x0BC0)

/*************************************************************/

/* Interrupt Vector Numbers */

#define iv_RESET        1
#define iv_OSC_XOSCF    2
#define iv_XOSCF        2
#define iv_PORTC_INT0   3
#define iv_PORTC_INT1   4
#define iv_PORTR_INT0   5
#define iv_PORTR_INT1   6
#define iv_DMA_CH0      7
#define iv_DMA_CH1      8
#define iv_DMA_CH2      9
#define iv_DMA_CH3      0
#define iv_RTC_OVF      11
#define iv_RTC_COMP     12
#define iv_TWIC_TWIS    13
#define iv_TWIC_TWIM    14
#define iv_TCC0_OVF     15
#define iv_TCC0_ERR     16
#define iv_TCC0_CCA     17
#define iv_TCC0_CCB     18
#define iv_TCC0_CCC     19
#define iv_TCC0_CCD     20
#define iv_TCC1_OVF     21
#define iv_TCC1_ERR     22
#define iv_TCC1_CCA     23
#define iv_TCC1_CCB     24
#define iv_SPIC_INT     25
#define iv_USARTC0_RXC  26
#define iv_USARTC0_DRE  27
#define iv_USARTC0_TXC  28
#define iv_USARTC1_RXC  29
#define iv_USARTC1_DRE  30
#define iv_USARTC1_TXC  31
#define iv_NVM_EE       32
#define iv_NVM_SPM      33
#define iv_PORTB_INT0   34
#define iv_PORTB_INT1   35
#define iv_ACB_ACW      36
#define iv_ACB_AC1      37
#define iv_ACB_AC0      38
#define iv_ADCB_CH0     39
#define iv_ADCB_CH1     40
#define iv_ADCB_CH2     41
#define iv_ADCB_CH3     42
#define iv_PORTE_INT0   43
#define iv_PORTE_INT1   44
#define iv_TWIE_TWIS    45
#define iv_TWIE_TWIM    46
#define iv_TCE0_OVF     47
#define iv_TCE0_ERR     48
#define iv_TCE0_CCA     49
#define iv_TCE0_CCB     50
#define iv_TCE0_CCC     51
#define iv_TCE0_CCD     52
#define iv_TCE1_OVF     53
#define iv_TCE1_ERR     54
#define iv_TCE1_CCA     55
#define iv_TCE1_CCB     56
#define iv_SPIE_INT     57
#define iv_USARTE0_RXC  58
#define iv_USARTE0_DRE  59
#define iv_USARTE0_TXC  60
#define iv_USARTE1_RXC  61
#define iv_USARTE1_DRE  62
#define iv_USARTE1_TXC  63
#define iv_PORTD_INT0   64
#define iv_PORTD_INT1   65
#define iv_PORTA_INT0   66
#define iv_PORTA_INT1   67
#define iv_ACA_ACW      68
#define iv_ACA_AC1      69
#define iv_ACA_AC0      70
#define iv_ADCA_CH0     71
#define iv_ADCA_CH1     72
#define iv_ADCA_CH2     73
#define iv_ADCA_CH3     74
#define iv_TWID_TWIS    75
#define iv_TWID_TWIM    76
#define iv_TCD0_OVF     77
#define iv_TCD0_ERR     78
#define iv_TCD0_CCA     79
#define iv_TCD0_CCB     80
#define iv_TCD0_CCC     81
#define iv_TCD0_CCD     82
#define iv_TCD1_OVF     83
#define iv_TCD1_ERR     84
#define iv_TCD1_CCA     85
#define iv_TCD1_CCB     86
#define iv_SPID_INT     87
#define iv_USARTD0_RXC  88
#define iv_USARTD0_DRE  89
#define iv_USARTD0_TXC  90
#define iv_USARTD1_RXC  91
#define iv_USARTD1_DRE  92
#define iv_USARTD1_TXC  93
#define iv_PORTQ_INT0   94
#define iv_PORTQ_INT1   95
#define iv_PORTH_INT0   96
#define iv_PORTH_INT1   97
#define iv_PORTJ_INT0   98
#define iv_PORTJ_INT1   99
#define iv_PORTK_INT0   100
#define iv_PORTK_INT1   101
/* reserved:
#define iv_PORTL_INT0   102
#define iv_PORTL_INT1   103
*/
#define iv_PORTF_INT0   104
#define iv_PORTF_INT1   105
#define iv_TWIF_TWIS    106
#define iv_TWIF_TWIM    107
#define iv_TCF0_OVF     108
#define iv_TCF0_ERR     109
#define iv_TCF0_CCA     110
#define iv_TCF0_CCB     111
#define iv_TCF0_CCC     112
#define iv_TCF0_CCD     113
#define iv_TCF1_OVF     114
#define iv_TCF1_ERR     115
#define iv_TCF1_CCA     116
#define iv_TCF1_CCB     117
#define iv_SPIF_INT     118
#define iv_USARTF0_RXC  119
#define iv_USARTF0_DRE  120
#define iv_USARTF0_TXC  121
#define iv_USARTF1_RXC  122
#define iv_USARTF1_DRE  123
#define iv_USARTF1_TXC  124

/*************************************************************/

/*ja*/
#endif
