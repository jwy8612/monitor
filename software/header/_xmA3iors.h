#ifndef ___xmA3iors_h
#define ___xmA3iors_h

/* XMegaXXXA3 io header file
 * for ImageCraft ICCAVR compiler
 */

/* 2008/06/18   created
   2008/07/08   added missing IRCOM
   2008/08/07   removed OCD ior, reworked interrupt vectors
   2009/04/08   removed "#include _xmA3flatio.h"
   2009/05/05   swapped NVM and RTC interrupts (xmega A manual rev G)
   2009/06/22   fixed wrong iv_DMA_CH3
 */

/*************************************************************/
#include <_xmmemories.h>
#include <_xmstructs.h>
#include <_xmAbits.h>
/*************************************************************/

/* IO Registers Addresses */

/* GPIO registers */
#define GPIO    (*(volatile GPIO_t *)0x0000)

/* VPORT registers */
#define VPORT0  (*(volatile VPORT_t *)0x0010)
#define VPORT1  (*(volatile VPORT_t *)0x0014)
#define VPORT2  (*(volatile VPORT_t *)0x0018)
#define VPORT3  (*(volatile VPORT_t *)0x001C)

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
#define DACB    (*(volatile DAC_t *)0x0320)

/* AC registers */
#define ACA     (*(volatile AC_t *)0x0380)
#define ACB     (*(volatile AC_t *)0x0390)

/* RTC registers */
#define RTC     (*(volatile RTC_t *)0x0400)

/* TWI registers */
#define TWIC    (*(volatile TWI_t *)0x0480)
#define TWIE    (*(volatile TWI_t *)0x04A0)

/* PORT registers */
#define PORTA   (*(volatile PORT_t *)0x0600)
#define PORTB   (*(volatile PORT_t *)0x0620)
#define PORTC   (*(volatile PORT_t *)0x0640)
#define PORTD   (*(volatile PORT_t *)0x0660)
#define PORTE   (*(volatile PORT_t *)0x0680)
#define PORTF   (*(volatile PORT_t *)0x06A0)
#define PORTR   (*(volatile PORT_t *)0x07E0)

/* TC registers */
#define TCC0    (*(volatile TC_t *)0x0800)
#define TCC1    (*(volatile TC_t *)0x0840)
#define TCD0    (*(volatile TC_t *)0x0900)
#define TCD1    (*(volatile TC_t *)0x0940)
#define TCE0    (*(volatile TC_t *)0x0A00)
#define TCE1    (*(volatile TC_t *)0x0A40)
#define TCF0    (*(volatile TC_t *)0x0B00)

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

/* IRCOM */
#define IRCOM   (*(volatile IRCOM_t *)0x08F8)

/* SPI registers */
#define SPIC    (*(volatile SPI_t *)0x08C0)
#define SPID    (*(volatile SPI_t *)0x09C0)
#define SPIE    (*(volatile SPI_t *)0x0AC0)

/*************************************************************/

/* Interrupt Vector Numbers */

#define iv_RESET        1

#define iv_OSCF_INT     2
#define iv_OSCF_OSCF    2
#define iv_OSCF         2

#define iv_PORTC_INT0   3
#define iv_PORTC_INT1   4

#define iv_PORTR_INT0   5
#define iv_PORTR_INT1   6

#define iv_DMA_CH0      7
#define iv_DMA_CH1      8
#define iv_DMA_CH2      9
#define iv_DMA_CH3      10
/*
#define iv_RTC_COMP     11
#define iv_RTC_PER      12
*/
#define iv_RTC_PER      11
#define iv_RTC_OVF      11
#define iv_RTC_COMP     12

#define iv_TWIC_MASTER  13
#define iv_TWIC_SLAVE   14

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
#define iv_SPIC_SPI     25
#define iv_SPIC         25

#define iv_USARTC0_RXC  26
#define iv_USARTC0_DRE  27
#define iv_USARTC0_TXC  28
#define iv_USARTC1_RXC  29
#define iv_USARTC1_DRE  30
#define iv_USARTC1_TXC  31

#define iv_AES_INT      32
#define iv_AES_AES      32
#define iv_AES          32
/*
#define iv_NVM_SPM      33
#define iv_NVM_EE       34
*/
#define iv_NVM_EE       33
#define iv_NVM_SPM      34

#define iv_PORTB_INT0   35
#define iv_PORTB_INT1   36

#define iv_ACB_COMP0    37
#define iv_ACB_COMP1    38
#define iv_ACB_WINDOW   39

#define iv_ADCB_CH0     40
#define iv_ADCB_CH1     41
#define iv_ADCB_CH2     42
#define iv_ADCB_CH3     43

#define iv_PORTE_INT0   44
#define iv_PORTE_INT1   45

#define iv_TWIE_MASTER  46
#define iv_TWIE_SLAVE   47

#define iv_TCE0_OVF     48
#define iv_TCE0_ERR     49
#define iv_TCE0_CCA     50
#define iv_TCE0_CCB     51
#define iv_TCE0_CCC     52
#define iv_TCE0_CCD     53
#define iv_TCE1_OVF     54
#define iv_TCE1_ERR     55
#define iv_TCE1_CCA     56
#define iv_TCE1_CCB     57

#define iv_SPIE_INT     58
#define iv_SPIE_SPI     58
#define iv_SPIE         58

#define iv_USARTE0_RXC  59
#define iv_USARTE0_DRE  60
#define iv_USARTE0_TXC  61
#define iv_USARTE1_RXC  62
#define iv_USARTE1_DRE  63
#define iv_USARTE1_TXC  64

#define iv_PORTD_INT0   65
#define iv_PORTD_INT1   66

#define iv_PORTA_INT0   67
#define iv_PORTA_INT1   68

#define iv_ACA_COMP0    69
#define iv_ACA_COMP1    70
#define iv_ACA_WINDOW   71

#define iv_ADCA_CH0     72
#define iv_ADCA_CH1     73
#define iv_ADCA_CH2     74
#define iv_ADCA_CH3     75

#define iv_TCD0_OVF     78
#define iv_TCD0_ERR     79
#define iv_TCD0_CCA     80
#define iv_TCD0_CCB     81
#define iv_TCD0_CCC     82
#define iv_TCD0_CCD     83
#define iv_TCD1_OVF     84
#define iv_TCD1_ERR     85
#define iv_TCD1_CCA     86
#define iv_TCD1_CCB     87

#define iv_SPID_INT     88
#define iv_SPID_SPI     88
#define iv_SPID         88

#define iv_USARTD0_RXC  89
#define iv_USARTD0_DRE  90
#define iv_USARTD0_TXC  91
#define iv_USARTD1_RXC  92
#define iv_USARTD1_DRE  93
#define iv_USARTD1_TXC  94

#define iv_PORTF_INT0   105
#define iv_PORTF_INT1   106

#define iv_TCF0_OVF     109
#define iv_TCF0_ERR     110
#define iv_TCF0_CCA     111
#define iv_TCF0_CCB     112
#define iv_TCF0_CCC     113
#define iv_TCF0_CCD     114

#define iv_USARTF0_RXC  120
#define iv_USARTF0_DRE  121
#define iv_USARTF0_TXC  122

/*************************************************************/

/*ja*/
#endif
