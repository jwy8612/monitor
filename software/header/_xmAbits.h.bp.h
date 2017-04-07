#ifndef ___xmAbits_h
#define ___xmAbits_h

/* XMegaXXXAX io bits and values header file
 * to be included by ioxmXXXAXv.h
 */

/* 2008/06/18   alpha based on early datasheets
                defining _gm, _gc and _bm masks/values, no _bp yet
   2009/03/09   corrected PORTCFG EVOUT and CLKOUT bit locations - jph
   2009/03/09   added TC_EVACT_.._gc values for RESTART, FRQ and PW
   2009/04/09   changed all _bm values to non-expression,
                added _bp definitions
 */

/* ***************************************************** */
/* XMega A bit definitions */
/* ***************************************************** */

/* ----------------------------------------------------- */
/* XOCD - On-Chip Debug System */
/* ----------------------------------------------------- */

/* OCD.OCDR1 masks */
/* #define OCD_OCDRD_bm 0x01 */ /* OCDR Dirty */

/* ----------------------------------------------------- */
/* CPU - CPU */
/* ----------------------------------------------------- */

/* CPU.CCP masks */
#define CPU_CCP_gm 0xFF /* CCP signature */

/* CPU.SREG masks */


/* CCP signatures */
#define CCP_SPM_gc (0x9D) /* SPM Instruction Protection */
#define CCP_IOREG_gc (0xD8) /* IO Register Protection */

/* ----------------------------------------------------- */
/* CLK - Clock System */
/* ----------------------------------------------------- */

/* CLK.CTRL masks */
#define CLK_SCLKSEL_gm 0x07 /* System Clock Selection */

/* CLK.PSCTRL masks */
#define CLK_PSADIV_gm 0x7C /* Prescaler A Division Factor */
#define CLK_PSBCDIV_gm 0x03 /* Prescaler B and D Division factor */

/* CLK.LOCK masks */
#define CLK_LOCK_bm 0x01 /* Clock System Lock */
#define CLK_LOCK_bp 0

/* CLK.RTCCTRL masks */
#define CLK_RTCSRC_gm 0x0E /* Clock Source */
#define CLK_RTCEN_bm 0x01 /* RTC Clock Source Enable */
#define CLK_RTCEN_bp 0

/* PR.PR masks */
#define PR_EBI_bm 0x08 /* External Bus Interface */
#define PR_EBI_bp 3
#define PR_RTC_bm 0x04 /* Real-time Counter */
#define PR_RTC_bp 2
#define PR_EVSYS_bm 0x02 /* Event System */
#define PR_EVSYS_bp 1
#define PR_DMA_bm 0x01 /* DMA-Controller */
#define PR_DMA_bp 0

/* PR.PRP... masks */
#define PR_DAC_bm 0x04 /* Port A DAC */
#define PR_DAC_bp 2
#define PR_ADC_bm 0x02 /* Port A ADC */
#define PR_ADC_bp 1
#define PR_AC_bm 0x01 /* Port A Analog Comparator */
#define PR_AC_bp 0

/* PR.PRPC masks */
#define PR_TWI_bm 0x40 /* Port C Two-wire Interface */
#define PR_TWI_bp 6
#define PR_USART1_bm 0x20 /* Port C USART1 */
#define PR_USART1_bp 5
#define PR_USART0_bm 0x10 /* Port C USART0 */
#define PR_USART0_bp 4
#define PR_SPI_bm 0x08 /* Port C SPI */
#define PR_SPI_bp 3
#define PR_HIRES_bm 0x04 /* Port C AWEX */
#define PR_HIRES_bp 2
#define PR_TC1_bm 0x02 /* Port C Timer/Counter1 */
#define PR_TC1_bp 1
#define PR_TC0_bm 0x01 /* Port C Timer/Counter0 */
#define PR_TC0_bp 0


/* System Clock Selection */
#define CLK_SCLKSEL_RC2M_gc (0x00) /* Internal 2MHz RC Oscillator */
#define CLK_SCLKSEL_RC32M_gc (0x01) /* Internal 32MHz RC Oscillator */
#define CLK_SCLKSEL_RC32K_gc (0x02) /* Internal 32kHz RC Oscillator */
#define CLK_SCLKSEL_XOSC_gc (0x03) /* External Crystal Oscillator or Clock */
#define CLK_SCLKSEL_PLL_gc (0x04) /* Phase Locked Loop */

/* Prescaler A Division Factor */
#define CLK_PSADIV_1_gc (0x00<<2) /* Divide by 1 */
#define CLK_PSADIV_2_gc (0x01<<2) /* Divide by 2 */
#define CLK_PSADIV_4_gc (0x03<<2) /* Divide by 4 */
#define CLK_PSADIV_8_gc (0x05<<2) /* Divide by 8 */
#define CLK_PSADIV_16_gc (0x07<<2) /* Divide by 16 */
#define CLK_PSADIV_32_gc (0x09<<2) /* Divide by 32 */
#define CLK_PSADIV_64_gc (0x0B<<2) /* Divide by 64 */
#define CLK_PSADIV_128_gc (0x0D<<2) /* Divide by 128 */
#define CLK_PSADIV_256_gc (0x0F<<2) /* Divide by 256 */
#define CLK_PSADIV_512_gc (0x11<<2) /* Divide by 512 */

/* Prescaler B and C Division Factor */
#define CLK_PSBCDIV_1_1_gc (0x00) /* Divide B by 1 and C by 1 */
#define CLK_PSBCDIV_1_2_gc (0x01) /* Divide B by 1 and C by 2 */
#define CLK_PSBCDIV_4_1_gc (0x02) /* Divide B by 4 and C by 1 */
#define CLK_PSBCDIV_2_2_gc (0x03) /* Divide B by 2 and C by 2 */

/* RTC Clock Source */
#define CLK_RTCSRC_ULP_gc (0x00<<1) /* 1kHz from internal 32kHz ULP */
#define CLK_RTCSRC_TOSC_gc (0x01<<1) /* 1kHz from 32kHz crystal oscillator on TOSC */
#define CLK_RTCSRC_RCOSC_gc (0x02<<1) /* 1kHz from internal 32kHz RC oscillator */
#define CLK_RTCSRC_TOSC32_gc (0x05<<1) /* 32kHz from 32kHz crystal oscillator on TOSC */

/* ----------------------------------------------------- */
/* SLEEP - Sleep Controller */
/* ----------------------------------------------------- */

/* SLEEP.CTRL masks */
#define SLEEP_SMODE_gm 0x0E /* Sleep Mode */
#define SLEEP_SEN_bm 0x01 /* Sleep Enable */
#define SLEEP_SEN_bp 0


/* Sleep Mode */
#define SLEEP_SMODE_IDLE_gc (0x00<<1) /* Idle mode */
#define SLEEP_SMODE_PDOWN_gc (0x02<<1) /* Power-down Mode */
#define SLEEP_SMODE_PSAVE_gc (0x03<<1) /* Power-save Mode */
#define SLEEP_SMODE_STDBY_gc (0x06<<1) /* Standby Mode */
#define SLEEP_SMODE_ESTDBY_gc (0x07<<1) /* Extended Standby Mode */

/* ----------------------------------------------------- */
/* OSC - Oscillator */
/* ----------------------------------------------------- */

/* OSC.CTRL masks */
#define OSC_PLLEN_bm 0x10 /* PLL Enable */
#define OSC_PLLEN_bp 4
#define OSC_XOSCEN_bm 0x08 /* External Oscillator Enable */
#define OSC_XOSCEN_bp 3
#define OSC_RC32KEN_bm 0x04 /* Internal 32kHz RC Oscillator Enable */
#define OSC_RC32KEN_bp 2
#define OSC_RC32MEN_bm 0x02 /* Internal 32MHz RC Oscillator Enable */
#define OSC_RC32MEN_bp 1
#define OSC_RC2MEN_bm 0x01 /* Internal 2MHz RC Oscillator Enable */
#define OSC_RC2MEN_bp 0

/* OSC.STATUS masks */
#define OSC_PLLRDY_bm 0x10 /* PLL Ready */
#define OSC_PLLRDY_bp 4
#define OSC_XOSCRDY_bm 0x08 /* External Oscillator Ready */
#define OSC_XOSCRDY_bp 3
#define OSC_RC32KRDY_bm 0x04 /* Internal 32kHz RC Oscillator Ready */
#define OSC_RC32KRDY_bp 2
#define OSC_RC32MRDY_bm 0x02 /* Internal 32MHz RC Oscillator Ready */
#define OSC_RC32MRDY_bp 1
#define OSC_RC2MRDY_bm 0x01 /* Internal 2MHz RC Oscillator Ready */
#define OSC_RC2MRDY_bp 0

/* OSC.XOSCCTRL masks */
#define OSC_FRQRANGE_gm 0xC0 /* Frequency Range */
#define OSC_X32KLPM_bm 0x20 /* 32kHz XTAL OSC Low-power Mode */
#define OSC_X32KLPM_bp 5
#define OSC_XOSCSEL_gm 0x0F /* External Oscillator Selection and Startup Time */

/* OSC.XOSCFAIL masks */
#define OSC_XOSCFDIF_bm 0x02 /* Failure Detection Interrupt Flag */
#define OSC_XOSCFDIF_bp 1
#define OSC_XOSCFDEN_bm 0x01 /* Failure Detection Enable */
#define OSC_XOSCFDEN_bp 0

/* OSC.PLLCTRL masks */
#define OSC_PLLSRC_gm 0xC0 /* Clock Source */
#define OSC_PLLFAC_gm 0x1F /* Multiplication Factor */

/* OSC.DFLLCTRL masks */
#define OSC_RC32MCREF_bm 0x02 /* 32MHz Calibration Reference */
#define OSC_RC32MCREF_bp 1
#define OSC_RC2MCREF_bm 0x01 /* 2MHz Calibration Reference */
#define OSC_RC2MCREF_bp 0


/* Frequency Range */
#define OSC_FRQRANGE_04TO2_gc (0x00<<6) /* 0.4 - 2 MHz */
#define OSC_FRQRANGE_2TO9_gc (0x01<<6) /* 2 - 9 MHz */
#define OSC_FRQRANGE_9TO12_gc (0x02<<6) /* 9 - 12 MHz */
#define OSC_FRQRANGE_12TO16_gc (0x03<<6) /* 12 - 16 MHz */

/* External Oscillator Selection and Startup Time */
#define OSC_XOSCSEL_EXTCLK_gc (0x00) /* External Clock - 6 CLK */
#define OSC_XOSCSEL_32KHz_gc (0x02) /* 32kHz TOSC - 32K CLK */
#define OSC_XOSCSEL_XTAL_256CLK_gc (0x03) /* 0.4-16MHz XTAL - 256 CLK */
#define OSC_XOSCSEL_XTAL_1KCLK_gc (0x07) /* 0.4-16MHz XTAL - 1K CLK */
#define OSC_XOSCSEL_XTAL_16KCLK_gc (0x0B) /* 0.4-16MHz XTAL - 16K CLK */

/* PLL Clock Source */
#define OSC_PLLSRC_RC2M_gc (0x00<<6) /* Internal 2MHz RC Oscillator */
#define OSC_PLLSRC_RC32M_gc (0x02<<6) /* Internal 32MHz RC Oscillator */
#define OSC_PLLSRC_XOSC_gc (0x03<<6) /* External Oscillator */

/* ----------------------------------------------------- */
/* DFLL - DFLL */
/* ----------------------------------------------------- */

/* DFLL.CALA masks */
#define DFLL_CALL_gm 0xFE /* DFLL Calibration bits [6:0] */
#define DFLL_ENABLE_bm 0x01 /* DFLL Enable */
#define DFLL_ENABLE_bp 0

/* DFLL.CALB masks */
#define DFLL_CALH_gm 0x1F /* DFLL Calibration bits [11:7] */

/* ----------------------------------------------------- */
/* RST - Reset */
/* ----------------------------------------------------- */

/* RST.STATUS masks */
#define RST_SDRF_bm 0x40 /* Spike Detection Reset Flag */
#define RST_SDRF_bp 6
#define RST_SRF_bm 0x20 /* Software Reset Flag */
#define RST_SRF_bp 5
#define RST_PDIRF_bm 0x10 /* Programming and Debug Interface Interface Reset Flag */
#define RST_PDIRF_bp 4
#define RST_WDRF_bm 0x08 /* Watchdog Reset Flag */
#define RST_WDRF_bp 3
#define RST_BORF_bm 0x04 /* Brown-out Reset Flag */
#define RST_BORF_bp 2
#define RST_EXTRF_bm 0x02 /* External Reset Flag */
#define RST_EXTRF_bp 1
#define RST_PORF_bm 0x01 /* Power-on Reset Flag */
#define RST_PORF_bp 0

/* RST.CTRL masks */
#define RST_SWRST_bm 0x01 /* Software Reset */
#define RST_SWRST_bp 0

/* ----------------------------------------------------- */
/* WDT - Watch-Dog Timer */
/* ----------------------------------------------------- */

/* WDT.CTRL masks */
#define WDT_PER_gm 0x3C /* Period */
#define WDT_ENABLE_bm 0x02 /* Enable */
#define WDT_ENABLE_bp 1
#define WDT_CEN_bm 0x01 /* Change Enable */
#define WDT_CEN_bp 0

/* WDT.WINCTRL masks */
#define WDT_WPER_gm 0x3C /* Windowed Mode Period */
#define WDT_WEN_bm 0x02 /* Windowed Mode Enable */
#define WDT_WEN_bp 1
#define WDT_WCEN_bm 0x01 /* Windowed Mode Change Enable */
#define WDT_WCEN_bp 0

/* WDT.STATUS masks */
#define WDT_SYNCBUSY_bm 0x01 /* Syncronization busy */
#define WDT_SYNCBUSY_bp 0


/* */
#define WDT_PER_8CLK_gc (0x00<<2) /* 8 cycles (8ms @ 3.3V) */
#define WDT_PER_16CLK_gc (0x01<<2) /* 16 cycles (16ms @ 3.3V) */
#define WDT_PER_32CLK_gc (0x02<<2) /* 32 cycles (32ms @ 3.3V) */
#define WDT_PER_64CLK_gc (0x03<<2) /* 64 cycles (64ms @ 3.3V) */
#define WDT_PER_128CLK_gc (0x04<<2) /* 128 cycles (0.125s @ 3.3V) */
#define WDT_PER_256CLK_gc (0x05<<2) /* 256 cycles (0.25s @ 3.3V) */
#define WDT_PER_512CLK_gc (0x06<<2) /* 512 cycles (0.5s @ 3.3V) */
#define WDT_PER_1KCLK_gc (0x07<<2) /* 1K cycles (1s @ 3.3V) */
#define WDT_PER_2KCLK_gc (0x08<<2) /* 2K cycles (2s @ 3.3V) */
#define WDT_PER_4KCLK_gc (0x09<<2) /* 4K cycles (4s @ 3.3V) */
#define WDT_PER_8KCLK_gc (0x0A<<2) /* 8K cycles (8s @ 3.3V) */

/* */
#define WDT_WPER_8CLK_gc (0x00<<2) /* 8 cycles (8ms @ 3.3V) */
#define WDT_WPER_16CLK_gc (0x01<<2) /* 16 cycles (16ms @ 3.3V) */
#define WDT_WPER_32CLK_gc (0x02<<2) /* 32 cycles (32ms @ 3.3V) */
#define WDT_WPER_64CLK_gc (0x03<<2) /* 64 cycles (64ms @ 3.3V) */
#define WDT_WPER_128CLK_gc (0x04<<2) /* 128 cycles (0.125s @ 3.3V) */
#define WDT_WPER_256CLK_gc (0x05<<2) /* 256 cycles (0.25s @ 3.3V) */
#define WDT_WPER_512CLK_gc (0x06<<2) /* 512 cycles (0.5s @ 3.3V) */
#define WDT_WPER_1KCLK_gc (0x07<<2) /* 1K cycles (1s @ 3.3V) */
#define WDT_WPER_2KCLK_gc (0x08<<2) /* 2K cycles (2s @ 3.3V) */
#define WDT_WPER_4KCLK_gc (0x09<<2) /* 4K cycles (4s @ 3.3V) */
#define WDT_WPER_8KCLK_gc (0x0A<<2) /* 8K cycles (8s @ 3.3V) */

/* ----------------------------------------------------- */
/* PMIC - Programmable Multi-level Interrupt Controller */
/* ----------------------------------------------------- */

/* PMIC.STATUS masks */
#define PMIC_NMIEX_bm 0x80 /* Non-maskable Interrupt Executing */
#define PMIC_NMIEX_bp 7
#define PMIC_HILVLEX_bm 0x04 /* High Level Interrupt Executing */
#define PMIC_HILVLEX_bp 2
#define PMIC_MEDLVLEX_bm 0x02 /* Medium Level Interrupt Executing */
#define PMIC_MEDLVLEX_bp 1
#define PMIC_LOLVLEX_bm 0x01 /* Low Level Interrupt Executing */
#define PMIC_LOLVLEX_bp 0

/* PMIC.CTRL masks */
#define PMIC_RREN_bm 0x80 /* Round-Robin Priority Enable */
#define PMIC_RREN_bp 7
#define PMIC_IVSEL_bm 0x40 /* Interrupt Vector Select */
#define PMIC_IVSEL_bp 6
#define PMIC_HILVLEN_bm 0x04 /* High Level Enable */
#define PMIC_HILVLEN_bp 2
#define PMIC_MEDLVLEN_bm 0x02 /* Medium Level Enable */
#define PMIC_MEDLVLEN_bp 1
#define PMIC_LOLVLEN_bm 0x01 /* Low Level Enable */
#define PMIC_LOLVLEN_bp 0

/* ----------------------------------------------------- */
/* DMA - DMA Controller */
/* ----------------------------------------------------- */

/* DMA_CH.CTRL masks */
#define DMA_CH_ENABLE_bm 0x80 /* Channel Enable */
#define DMA_CH_ENABLE_bp 7
#define DMA_CH_RESET_bm 0x40 /* Channel Software Reset */
#define DMA_CH_RESET_bp 6
#define DMA_CH_REPEAT_bm 0x20 /* Channel Repeat Mode */
#define DMA_CH_REPEAT_bp 5
#define DMA_CH_TRFREQ_bm 0x10 /* Channel Transfer Request */
#define DMA_CH_TRFREQ_bp 4
#define DMA_CH_SINGLE_bm 0x04 /* Channel Single Shot Data Transfer */
#define DMA_CH_SINGLE_bp 2
#define DMA_CH_BURSTLEN_gm 0x03 /* Channel Transfer Mode */
#define DMA_CH_BURSTLEN0_bm 0x01 /* Channel Transfer Mode bit 0 */
#define DMA_CH_BURSTLEN0_bp 0
#define DMA_CH_BURSTLEN1_bm 0x02 /* Channel Transfer Mode bit 1 */
#define DMA_CH_BURSTLEN1_bp 1

/* DMA_CH.ADDRCTRL masks */
#define DMA_CH_SRCRELOAD_gm 0xC0 /* Channel Source Address Reload */
#define DMA_CH_SRCDIR_gm 0x30 /* Channel Source Address Mode */
#define DMA_CH_DESTRELOAD_gm 0x0C /* Channel Destination Address Reload */
#define DMA_CH_DESTDIR_gm 0x03 /* Channel Destination Address Mode */

/* DMA.CTRL masks */
#define DMA_ENABLE_bm 0x80 /* Enable */
#define DMA_ENABLE_bp 7
#define DMA_RESET_bm 0x40 /* Software Reset */
#define DMA_RESET_bp 6
#define DMA_DBUFMODE_gm 0x0C /* Double Buffering Mode */
#define DMA_PRIMODE_gm 0x03 /* Channel Priority Mode */

/* DMA.TRNINTCTRL masks */
#define DMA_CH3INTLVL_gm 0xC0 /* Channel 3 Transaction Complete Interrupt Level */
#define DMA_CH2INTLVL_gm 0x30 /* Channel 2 Transaction Complete Interrupt Level */
#define DMA_CH1INTLVL_gm 0x0C /* Channel 1 Transaction Complete Interrupt Level */
#define DMA_CH0INTLVL_gm 0x03 /* Channel 0 Transaction Complete Interrupt Level */

/* DMA.ERRINTCTRL masks already defined */

/* DMA.INTFLAGS masks */
#define DMA_CH3ERRIF_bm 0x80 /* Channel 3 Block Transfer Error Interrupt Flag */
#define DMA_CH3ERRIF_bp 7
#define DMA_CH2ERRIF_bm 0x40 /* Channel 2 Block Transfer Error Interrupt Flag */
#define DMA_CH2ERRIF_bp 6
#define DMA_CH1ERRIF_bm 0x20 /* Channel 1 Block Transfer Error Interrupt Flag */
#define DMA_CH1ERRIF_bp 5
#define DMA_CH0ERRIF_bm 0x10 /* Channel 0 Block Transfer Error Interrupt Flag */
#define DMA_CH0ERRIF_bp 4
#define DMA_CH3TRNIF_bm 0x08 /* Channel 3 Transaction Complete Interrupt Flag */
#define DMA_CH3TRNIF_bp 3
#define DMA_CH2TRNIF_bm 0x04 /* Channel 2 Transaction Complete Interrupt Flag */
#define DMA_CH2TRNIF_bp 2
#define DMA_CH1TRNIF_bm 0x02 /* Channel 1 Transaction Complete Interrupt Flag */
#define DMA_CH1TRNIF_bp 1
#define DMA_CH0TRNIF_bm 0x01 /* Channel 0 Transaction Complete Interrupt Flag */
#define DMA_CH0TRNIF_bp 0

/* DMA.STATUS masks */
#define DMA_CH3BUSY_bm 0x80 /* Channel 3 Block Transfer Busy */
#define DMA_CH3BUSY_bp 7
#define DMA_CH2BUSY_bm 0x40 /* Channel 2 Block Transfer Busy */
#define DMA_CH2BUSY_bp 6
#define DMA_CH1BUSY_bm 0x20 /* Channel 1 Block Transfer Busy */
#define DMA_CH1BUSY_bp 5
#define DMA_CH0BUSY_bm 0x10 /* Channel 0 Block Transfer Busy */
#define DMA_CH0BUSY_bp 4
#define DMA_CH3PEND_bm 0x08 /* Channel 3 Block Transfer Pending */
#define DMA_CH3PEND_bp 3
#define DMA_CH2PEND_bm 0x04 /* Channel 2 Block Transfer Pending */
#define DMA_CH2PEND_bp 2
#define DMA_CH1PEND_bm 0x02 /* Channel 1 Block Transfer Pending */
#define DMA_CH1PEND_bp 1
#define DMA_CH0PEND_bm 0x01 /* Channel 0 Block Transfer Pending */
#define DMA_CH0PEND_bp 0


/* */
#define DMA_CH_BURSTLEN_1BYTE_gc (0x00) /* 1-byte burst mode */
#define DMA_CH_BURSTLEN_2BYTE_gc (0x01) /* 2-byte burst mode */
#define DMA_CH_BURSTLEN_4BYTE_gc (0x02) /* 4-byte burst mode */
#define DMA_CH_BURSTLEN_8BYTE_gc (0x03) /* 8-byte burst mode */

/* */
#define DMA_CH_SRCRELOAD_NONE_gc (0x00<<6) /* No reload */
#define DMA_CH_SRCRELOAD_BLOCK_gc (0x01<<6) /* Reload at end of block */
#define DMA_CH_SRCRELOAD_BURST_gc (0x02<<6) /* Reload at end of burst */
#define DMA_CH_SRCRELOAD_TRANSACTION_gc (0x03<<6) /* Reload at end of transaction */

/* */
#define DMA_CH_SRCDIR_FIXED_gc (0x00<<4) /* Fixed */
#define DMA_CH_SRCDIR_INC_gc (0x01<<4) /* Increment */
#define DMA_CH_SRCDIR_DEC_gc (0x02<<4) /* Decrement */

/* */
#define DMA_CH_DESTRELOAD_NONE_gc (0x00<<2) /* No reload */
#define DMA_CH_DESTRELOAD_BLOCK_gc (0x01<<2) /* Reload at end of block */
#define DMA_CH_DESTRELOAD_BURST_gc (0x02<<2) /* Reload at end of burst */
#define DMA_CH_DESTRELOAD_TRANSACTION_gc (0x03<<2) /* Reload at end of transaction */

/* */
#define DMA_CH_DESTDIR_FIXED_gc (0x00) /* Fixed */
#define DMA_CH_DESTDIR_INC_gc (0x01) /* Increment */
#define DMA_CH_DESTDIR_DEC_gc (0x02) /* Decrement */

/* */
#define DMA_CH_TRIGSRC_OFF_gc (0x00) /* Off software triggers only */
#define DMA_CH_TRIGSRC_EVSYS_CH0_gc (0x01) /* Event System Channel 0 */
#define DMA_CH_TRIGSRC_EVSYS_CH1_gc (0x02) /* Event System Channel 1 */
#define DMA_CH_TRIGSRC_EVSYS_CH2_gc (0x03) /* Event System Channel 2 */
#define DMA_CH_TRIGSRC_ADCA_CH0_gc (0x10) /* ADCA Channel 0 */
#define DMA_CH_TRIGSRC_ADCA_CH1_gc (0x11) /* ADCA Channel 1 */
#define DMA_CH_TRIGSRC_ADCA_CH2_gc (0x12) /* ADCA Channel 2 */
#define DMA_CH_TRIGSRC_ADCA_CH3_gc (0x13) /* ADCA Channel 3 */
#define DMA_CH_TRIGSRC_ADCA_CH4_gc (0x14) /* ADCA Channel 0,1,2,3 combined */
#define DMA_CH_TRIGSRC_DACA_CH0_gc (0x15) /* DACA Channel 0 */
#define DMA_CH_TRIGSRC_DACA_CH1_gc (0x16) /* DACA Channel 1 */
#define DMA_CH_TRIGSRC_ADCB_CH0_gc (0x20) /* ADCB Channel 0 */
#define DMA_CH_TRIGSRC_ADCB_CH1_gc (0x21) /* ADCB Channel 1 */
#define DMA_CH_TRIGSRC_ADCB_CH2_gc (0x22) /* ADCB Channel 2 */
#define DMA_CH_TRIGSRC_ADCB_CH3_gc (0x23) /* ADCB Channel 3 */
#define DMA_CH_TRIGSRC_ADCB_CH4_gc (0x24) /* ADCB Channel 4 */
#define DMA_CH_TRIGSRC_DACB_CH0_gc (0x25) /* DACB Channel 0 */
#define DMA_CH_TRIGSRC_DACB_CH1_gc (0x26) /* DACB Channel 1 */
#define DMA_CH_TRIGSRC_TCC0_OVF_gc (0x40) /* Timer/Counter C0 Overflow */
#define DMA_CH_TRIGSRC_TCC0_ERR_gc (0x41) /* Timer/Counter C0 Error */
#define DMA_CH_TRIGSRC_TCC0_CCA_gc (0x42) /* Timer/Counter C0 Compare or Capture A */
#define DMA_CH_TRIGSRC_TCC0_CCB_gc (0x43) /* Timer/Counter C0 Compare or Capture B */
#define DMA_CH_TRIGSRC_TCC0_CCC_gc (0x44) /* Timer/Counter C0 Compare or Capture C */
#define DMA_CH_TRIGSRC_TCC0_CCD_gc (0x45) /* Timer/Counter C0 Compare or Capture D */
#define DMA_CH_TRIGSRC_TCC1_OVF_gc (0x46) /* Timer/Counter C1 Overflow */
#define DMA_CH_TRIGSRC_TCC1_ERR_gc (0x47) /* Timer/Counter C1 Error */
#define DMA_CH_TRIGSRC_TCC1_CCA_gc (0x48) /* Timer/Counter C1 Compare or Capture A */
#define DMA_CH_TRIGSRC_TCC1_CCB_gc (0x49) /* Timer/Counter C1 Compare or Capture B */
#define DMA_CH_TRIGSRC_SPIC_gc (0x4A) /* SPI C Transfer Complete */
#define DMA_CH_TRIGSRC_USARTC0_RXC_gc (0x4B) /* USART C0 Receive Complete */
#define DMA_CH_TRIGSRC_USARTC0_DRE_gc (0x4C) /* USART C0 Data Register Empty */
#define DMA_CH_TRIGSRC_USARTC1_RXC_gc (0x4E) /* USART C1 Receive Complete */
#define DMA_CH_TRIGSRC_USARTC1_DRE_gc (0x4F) /* USART C1 Data Register Empty */
#define DMA_CH_TRIGSRC_TCD0_OVF_gc (0x60) /* Timer/Counter D0 Overflow */
#define DMA_CH_TRIGSRC_TCD0_ERR_gc (0x61) /* Timer/Counter D0 Error */
#define DMA_CH_TRIGSRC_TCD0_CCA_gc (0x62) /* Timer/Counter D0 Compare or Capture A */
#define DMA_CH_TRIGSRC_TCD0_CCB_gc (0x63) /* Timer/Counter D0 Compare or Capture B */
#define DMA_CH_TRIGSRC_TCD0_CCC_gc (0x64) /* Timer/Counter D0 Compare or Capture C */
#define DMA_CH_TRIGSRC_TCD0_CCD_gc (0x65) /* Timer/Counter D0 Compare or Capture D */
#define DMA_CH_TRIGSRC_TCD1_OVF_gc (0x66) /* Timer/Counter D1 Overflow */
#define DMA_CH_TRIGSRC_TCD1_ERR_gc (0x67) /* Timer/Counter D1 Error */
#define DMA_CH_TRIGSRC_TCD1_CCA_gc (0x68) /* Timer/Counter D1 Compare or Capture A */
#define DMA_CH_TRIGSRC_TCD1_CCB_gc (0x69) /* Timer/Counter D1 Compare or Capture B */
#define DMA_CH_TRIGSRC_SPID_gc (0x6A) /* SPI D Transfer Complete */
#define DMA_CH_TRIGSRC_USARTD0_RXC_gc (0x6B) /* USART D0 Receive Complete */
#define DMA_CH_TRIGSRC_USARTD0_DRE_gc (0x6C) /* USART D0 Data Register Empty */
#define DMA_CH_TRIGSRC_USARTD1_RXC_gc (0x6E) /* USART D1 Receive Complete */
#define DMA_CH_TRIGSRC_USARTD1_DRE_gc (0x6F) /* USART D1 Data Register Empty */
#define DMA_CH_TRIGSRC_TCE0_OVF_gc (0x80) /* Timer/Counter E0 Overflow */
#define DMA_CH_TRIGSRC_TCE0_ERR_gc (0x81) /* Timer/Counter E0 Error */
#define DMA_CH_TRIGSRC_TCE0_CCA_gc (0x82) /* Timer/Counter E0 Compare or Capture A */
#define DMA_CH_TRIGSRC_TCE0_CCB_gc (0x83) /* Timer/Counter E0 Compare or Capture B */
#define DMA_CH_TRIGSRC_TCE0_CCC_gc (0x84) /* Timer/Counter E0 Compare or Capture C */
#define DMA_CH_TRIGSRC_TCE0_CCD_gc (0x85) /* Timer/Counter E0 Compare or Capture D */
#define DMA_CH_TRIGSRC_TCE1_OVF_gc (0x86) /* Timer/Counter E1 Overflow */
#define DMA_CH_TRIGSRC_TCE1_ERR_gc (0x87) /* Timer/Counter E1 Error */
#define DMA_CH_TRIGSRC_TCE1_CCA_gc (0x88) /* Timer/Counter E1 Compare or Capture A */
#define DMA_CH_TRIGSRC_TCE1_CCB_gc (0x89) /* Timer/Counter E1 Compare or Capture B */
#define DMA_CH_TRIGSRC_SPIE_gc (0x8A) /* SPI E Transfer Complete */
#define DMA_CH_TRIGSRC_USARTE0_RXC_gc (0x8B) /* USART E0 Receive Complete */
#define DMA_CH_TRIGSRC_USARTE0_DRE_gc (0x8C) /* USART E0 Data Register Empty */
#define DMA_CH_TRIGSRC_USARTE1_RXC_gc (0x8E) /* USART E1 Receive Complete */
#define DMA_CH_TRIGSRC_USARTE1_DRE_gc (0x8F) /* USART E1 Data Register Empty */
#define DMA_CH_TRIGSRC_TCF0_OVF_gc (0xA0) /* Timer/Counter F0 Overflow */
#define DMA_CH_TRIGSRC_TCF0_ERR_gc (0xA1) /* Timer/Counter F0 Error */
#define DMA_CH_TRIGSRC_TCF0_CCA_gc (0xA2) /* Timer/Counter F0 Compare or Capture A */
#define DMA_CH_TRIGSRC_TCF0_CCB_gc (0xA3) /* Timer/Counter F0 Compare or Capture B */
#define DMA_CH_TRIGSRC_TCF0_CCC_gc (0xA4) /* Timer/Counter F0 Compare or Capture C */
#define DMA_CH_TRIGSRC_TCF0_CCD_gc (0xA5) /* Timer/Counter F0 Compare or Capture D */
#define DMA_CH_TRIGSRC_TCF1_OVF_gc (0xA6) /* Timer/Counter F1 Overflow */
#define DMA_CH_TRIGSRC_TCF1_ERR_gc (0xA7) /* Timer/Counter F1 Error */
#define DMA_CH_TRIGSRC_TCF1_CCA_gc (0xA8) /* Timer/Counter F1 Compare or Capture A */
#define DMA_CH_TRIGSRC_TCF1_CCB_gc (0xA9) /* Timer/Counter F1 Compare or Capture B */
#define DMA_CH_TRIGSRC_SPIF_gc (0xAA) /* SPI F Transfer Complete */
#define DMA_CH_TRIGSRC_USARTF0_RXC_gc (0xAB) /* USART F0 Receive Complete */
#define DMA_CH_TRIGSRC_USARTF0_DRE_gc (0xAC) /* USART F0 Data Register Empty */
#define DMA_CH_TRIGSRC_USARTF1_RXC_gc (0xAE) /* USART F1 Receive Complete */
#define DMA_CH_TRIGSRC_USARTF1_DRE_gc (0xAF) /* USART F1 Data Register Empty */

/* */
#define DMA_DBUFMODE_DISABLED_gc (0x00<<2) /* Double buffering disabled */
#define DMA_DBUFMODE_CH01_gc (0x01<<2) /* Double buffering enabled on channel 0/1 */
#define DMA_DBUFMODE_CH23_gc (0x02<<2) /* Double buffering enabled on channel 2/3 */
#define DMA_DBUFMODE_CH01CH23_gc (0x03<<2) /* Double buffering enabled on ch. 0/1 and ch. 2/3 */

/* */
#define DMA_PRIMODE_RR0123_gc (0x00) /* Round Robin */
#define DMA_PRIMODE_CH0RR123_gc (0x01) /* Channel 0 > Round Robin on channel 1/2/3 */
#define DMA_PRIMODE_CH01RR23_gc (0x02) /* Channel 0 > channel 1 > Round Robin on channel 2/3 */
#define DMA_PRIMODE_CH0123_gc (0x03) /* Channel 0 > channel 1 > channel 2 > channel 3 */

/* */
#define DMA_CH3INTLVL_OFF_gc (0x00<<6) /* Interrupt disabled */
#define DMA_CH3INTLVL_LO_gc (0x01<<6) /* Low level */
#define DMA_CH3INTLVL_MED_gc (0x02<<6) /* Medium level */
#define DMA_CH3INTLVL_HI_gc (0x03<<6) /* High level */

/* */
#define DMA_CH2INTLVL_OFF_gc (0x00<<4) /* Interrupt disabled */
#define DMA_CH2INTLVL_LO_gc (0x01<<4) /* Low level */
#define DMA_CH2INTLVL_MED_gc (0x02<<4) /* Medium level */
#define DMA_CH2INTLVL_HI_gc (0x03<<4) /* High level */

/* */
#define DMA_CH1INTLVL_OFF_gc (0x00<<2) /* Interrupt disabled */
#define DMA_CH1INTLVL_LO_gc (0x01<<2) /* Low level */
#define DMA_CH1INTLVL_MED_gc (0x02<<2) /* Medium level */
#define DMA_CH1INTLVL_HI_gc (0x03<<2) /* High level */

/* */
#define DMA_CH0INTLVL_OFF_gc (0x00) /* Interrupt disabled */
#define DMA_CH0INTLVL_LO_gc (0x01) /* Low level */
#define DMA_CH0INTLVL_MED_gc (0x02) /* Medium level */
#define DMA_CH0INTLVL_HI_gc (0x03) /* High level */

/* ----------------------------------------------------- */
/* EVSYS - Event System */
/* ----------------------------------------------------- */

/* EVSYS.CH0MUX masks */
#define EVSYS_CHMUX_gm 0xFF /* Event Channel 0 Multiplexer */

/* EVSYS.CH0CTRL masks */
#define EVSYS_QDIRM_gm 0x60 /* Quadrature Decoder Index Recognition Mode */
#define EVSYS_QDIEN_bm 0x10 /* Quadrature Decoder Index Enable */
#define EVSYS_QDIEN_bp 4
#define EVSYS_QDEN_bm 0x08 /* Quadrature Decoder Enable */
#define EVSYS_QDEN_bp 3
#define EVSYS_DIGFILT_gm 0x07 /* Digital Filter */


/* */
#define EVSYS_QDIRM_00_gc (0x00<<5) /* QDPH0 0, QDPH90 0 */
#define EVSYS_QDIRM_01_gc (0x01<<5) /* QDPH0 0, QDPH90 1 */
#define EVSYS_QDIRM_10_gc (0x02<<5) /* QDPH0 1, QDPH90 0 */
#define EVSYS_QDIRM_11_gc (0x03<<5) /* QDPH0 1, QDPH90 1 */

/* */
#define EVSYS_DIGFILT_1SAMPLE_gc (0x00) /* 1 SAMPLE */
#define EVSYS_DIGFILT_2SAMPLES_gc (0x01) /* 2 SAMPLES */
#define EVSYS_DIGFILT_3SAMPLES_gc (0x02) /* 3 SAMPLES */
#define EVSYS_DIGFILT_4SAMPLES_gc (0x03) /* 4 SAMPLES */
#define EVSYS_DIGFILT_5SAMPLES_gc (0x04) /* 5 SAMPLES */
#define EVSYS_DIGFILT_6SAMPLES_gc (0x05) /* 6 SAMPLES */
#define EVSYS_DIGFILT_7SAMPLES_gc (0x06) /* 7 SAMPLES */
#define EVSYS_DIGFILT_8SAMPLES_gc (0x07) /* 8 SAMPLES */

/* */
#define EVSYS_CHMUX_OFF_gc (0x00) /* Off */
#define EVSYS_CHMUX_RTC_OVF_gc (0x08) /* RTC Overflow */
#define EVSYS_CHMUX_RTC_CMP_gc (0x09) /* RTC Compare Match */
#define EVSYS_CHMUX_ACA_CH0_gc (0x10) /* Analog Comparator A Channel 0 */
#define EVSYS_CHMUX_ACA_CH1_gc (0x11) /* Analog Comparator A Channel 1 */
#define EVSYS_CHMUX_ACA_WIN_gc (0x12) /* Analog Comparator A Window */
#define EVSYS_CHMUX_ACB_CH0_gc (0x13) /* Analog Comparator B Channel 0 */
#define EVSYS_CHMUX_ACB_CH1_gc (0x14) /* Analog Comparator B Channel 1 */
#define EVSYS_CHMUX_ACB_WIN_gc (0x15) /* Analog Comparator B Window */
#define EVSYS_CHMUX_ADCA_CH0_gc (0x20) /* ADC A Channel 0 */
#define EVSYS_CHMUX_ADCA_CH1_gc (0x21) /* ADC A Channel 1 */
#define EVSYS_CHMUX_ADCA_CH2_gc (0x22) /* ADC A Channel 2 */
#define EVSYS_CHMUX_ADCA_CH3_gc (0x23) /* ADC A Channel 3 */
#define EVSYS_CHMUX_ADCB_CH0_gc (0x24) /* ADC B Channel 0 */
#define EVSYS_CHMUX_ADCB_CH1_gc (0x25) /* ADC B Channel 1 */
#define EVSYS_CHMUX_ADCB_CH2_gc (0x26) /* ADC B Channel 2 */
#define EVSYS_CHMUX_ADCB_CH3_gc (0x27) /* ADC B Channel 3 */
#define EVSYS_CHMUX_PORTA_PIN0_gc (0x50) /* Port A, Pin0 */
#define EVSYS_CHMUX_PORTA_PIN1_gc (0x51) /* Port A, Pin1 */
#define EVSYS_CHMUX_PORTA_PIN2_gc (0x52) /* Port A, Pin2 */
#define EVSYS_CHMUX_PORTA_PIN3_gc (0x53) /* Port A, Pin3 */
#define EVSYS_CHMUX_PORTA_PIN4_gc (0x54) /* Port A, Pin4 */
#define EVSYS_CHMUX_PORTA_PIN5_gc (0x55) /* Port A, Pin5 */
#define EVSYS_CHMUX_PORTA_PIN6_gc (0x56) /* Port A, Pin6 */
#define EVSYS_CHMUX_PORTA_PIN7_gc (0x57) /* Port A, Pin7 */
#define EVSYS_CHMUX_PORTB_PIN0_gc (0x58) /* Port B, Pin0 */
#define EVSYS_CHMUX_PORTB_PIN1_gc (0x59) /* Port B, Pin1 */
#define EVSYS_CHMUX_PORTB_PIN2_gc (0x5A) /* Port B, Pin2 */
#define EVSYS_CHMUX_PORTB_PIN3_gc (0x5B) /* Port B, Pin3 */
#define EVSYS_CHMUX_PORTB_PIN4_gc (0x5C) /* Port B, Pin4 */
#define EVSYS_CHMUX_PORTB_PIN5_gc (0x5D) /* Port B, Pin5 */
#define EVSYS_CHMUX_PORTB_PIN6_gc (0x5E) /* Port B, Pin6 */
#define EVSYS_CHMUX_PORTB_PIN7_gc (0x5F) /* Port B, Pin7 */
#define EVSYS_CHMUX_PORTC_PIN0_gc (0x60) /* Port C, Pin0 */
#define EVSYS_CHMUX_PORTC_PIN1_gc (0x61) /* Port C, Pin1 */
#define EVSYS_CHMUX_PORTC_PIN2_gc (0x62) /* Port C, Pin2 */
#define EVSYS_CHMUX_PORTC_PIN3_gc (0x63) /* Port C, Pin3 */
#define EVSYS_CHMUX_PORTC_PIN4_gc (0x64) /* Port C, Pin4 */
#define EVSYS_CHMUX_PORTC_PIN5_gc (0x65) /* Port C, Pin5 */
#define EVSYS_CHMUX_PORTC_PIN6_gc (0x66) /* Port C, Pin6 */
#define EVSYS_CHMUX_PORTC_PIN7_gc (0x67) /* Port C, Pin7 */
#define EVSYS_CHMUX_PORTD_PIN0_gc (0x68) /* Port D, Pin0 */
#define EVSYS_CHMUX_PORTD_PIN1_gc (0x69) /* Port D, Pin1 */
#define EVSYS_CHMUX_PORTD_PIN2_gc (0x6A) /* Port D, Pin2 */
#define EVSYS_CHMUX_PORTD_PIN3_gc (0x6B) /* Port D, Pin3 */
#define EVSYS_CHMUX_PORTD_PIN4_gc (0x6C) /* Port D, Pin4 */
#define EVSYS_CHMUX_PORTD_PIN5_gc (0x6D) /* Port D, Pin5 */
#define EVSYS_CHMUX_PORTD_PIN6_gc (0x6E) /* Port D, Pin6 */
#define EVSYS_CHMUX_PORTD_PIN7_gc (0x6F) /* Port D, Pin7 */
#define EVSYS_CHMUX_PORTE_PIN0_gc (0x70) /* Port E, Pin0 */
#define EVSYS_CHMUX_PORTE_PIN1_gc (0x71) /* Port E, Pin1 */
#define EVSYS_CHMUX_PORTE_PIN2_gc (0x72) /* Port E, Pin2 */
#define EVSYS_CHMUX_PORTE_PIN3_gc (0x73) /* Port E, Pin3 */
#define EVSYS_CHMUX_PORTE_PIN4_gc (0x74) /* Port E, Pin4 */
#define EVSYS_CHMUX_PORTE_PIN5_gc (0x75) /* Port E, Pin5 */
#define EVSYS_CHMUX_PORTE_PIN6_gc (0x76) /* Port E, Pin6 */
#define EVSYS_CHMUX_PORTE_PIN7_gc (0x77) /* Port E, Pin7 */
#define EVSYS_CHMUX_PORTF_PIN0_gc (0x78) /* Port F, Pin0 */
#define EVSYS_CHMUX_PORTF_PIN1_gc (0x79) /* Port F, Pin1 */
#define EVSYS_CHMUX_PORTF_PIN2_gc (0x7A) /* Port F, Pin2 */
#define EVSYS_CHMUX_PORTF_PIN3_gc (0x7B) /* Port F, Pin3 */
#define EVSYS_CHMUX_PORTF_PIN4_gc (0x7C) /* Port F, Pin4 */
#define EVSYS_CHMUX_PORTF_PIN5_gc (0x7D) /* Port F, Pin5 */
#define EVSYS_CHMUX_PORTF_PIN6_gc (0x7E) /* Port F, Pin6 */
#define EVSYS_CHMUX_PORTF_PIN7_gc (0x7F) /* Port F, Pin7 */
#define EVSYS_CHMUX_PRESCALER_1_gc (0x80) /* Prescaler, divide by 1 */
#define EVSYS_CHMUX_PRESCALER_2_gc (0x81) /* Prescaler, divide by 2 */
#define EVSYS_CHMUX_PRESCALER_4_gc (0x82) /* Prescaler, divide by 4 */
#define EVSYS_CHMUX_PRESCALER_8_gc (0x83) /* Prescaler, divide by 8 */
#define EVSYS_CHMUX_PRESCALER_16_gc (0x84) /* Prescaler, divide by 16 */
#define EVSYS_CHMUX_PRESCALER_32_gc (0x85) /* Prescaler, divide by 32 */
#define EVSYS_CHMUX_PRESCALER_64_gc (0x86) /* Prescaler, divide by 64 */
#define EVSYS_CHMUX_PRESCALER_128_gc (0x87) /* Prescaler, divide by 128 */
#define EVSYS_CHMUX_PRESCALER_256_gc (0x88) /* Prescaler, divide by 256 */
#define EVSYS_CHMUX_PRESCALER_512_gc (0x89) /* Prescaler, divide by 512 */
#define EVSYS_CHMUX_PRESCALER_1024_gc (0x8A) /* Prescaler, divide by 1024 */
#define EVSYS_CHMUX_PRESCALER_2048_gc (0x8B) /* Prescaler, divide by 2048 */
#define EVSYS_CHMUX_PRESCALER_4096_gc (0x8C) /* Prescaler, divide by 4096 */
#define EVSYS_CHMUX_PRESCALER_8192_gc (0x8D) /* Prescaler, divide by 8192 */
#define EVSYS_CHMUX_PRESCALER_16384_gc (0x8E) /* Prescaler, divide by 16384 */
#define EVSYS_CHMUX_PRESCALER_32768_gc (0x8F) /* Prescaler, divide by 32768 */
#define EVSYS_CHMUX_TCC0_OVF_gc (0xC0) /* Timer/Counter C0 Overflow */
#define EVSYS_CHMUX_TCC0_ERR_gc (0xC1) /* Timer/Counter C0 Error */
#define EVSYS_CHMUX_TCC0_CCA_gc (0xC4) /* Timer/Counter C0 Compare or Capture A */
#define EVSYS_CHMUX_TCC0_CCB_gc (0xC5) /* Timer/Counter C0 Compare or Capture B */
#define EVSYS_CHMUX_TCC0_CCC_gc (0xC6) /* Timer/Counter C0 Compare or Capture C */
#define EVSYS_CHMUX_TCC0_CCD_gc (0xC7) /* Timer/Counter C0 Compare or Capture D */
#define EVSYS_CHMUX_TCC1_OVF_gc (0xC8) /* Timer/Counter C1 Overflow */
#define EVSYS_CHMUX_TCC1_ERR_gc (0xC9) /* Timer/Counter C1 Error */
#define EVSYS_CHMUX_TCC1_CCA_gc (0xCC) /* Timer/Counter C1 Compare or Capture A */
#define EVSYS_CHMUX_TCC1_CCB_gc (0xCD) /* Timer/Counter C1 Compare or Capture B */
#define EVSYS_CHMUX_TCD0_OVF_gc (0xD0) /* Timer/Counter D0 Overflow */
#define EVSYS_CHMUX_TCD0_ERR_gc (0xD1) /* Timer/Counter D0 Error */
#define EVSYS_CHMUX_TCD0_CCA_gc (0xD4) /* Timer/Counter D0 Compare or Capture A */
#define EVSYS_CHMUX_TCD0_CCB_gc (0xD5) /* Timer/Counter D0 Compare or Capture B */
#define EVSYS_CHMUX_TCD0_CCC_gc (0xD6) /* Timer/Counter D0 Compare or Capture C */
#define EVSYS_CHMUX_TCD0_CCD_gc (0xD7) /* Timer/Counter D0 Compare or Capture D */
#define EVSYS_CHMUX_TCD1_OVF_gc (0xD8) /* Timer/Counter D1 Overflow */
#define EVSYS_CHMUX_TCD1_ERR_gc (0xD9) /* Timer/Counter D1 Error */
#define EVSYS_CHMUX_TCD1_CCA_gc (0xDC) /* Timer/Counter D1 Compare or Capture A */
#define EVSYS_CHMUX_TCD1_CCB_gc (0xDD) /* Timer/Counter D1 Compare or Capture B */
#define EVSYS_CHMUX_TCE0_OVF_gc (0xE0) /* Timer/Counter E0 Overflow */
#define EVSYS_CHMUX_TCE0_ERR_gc (0xE1) /* Timer/Counter E0 Error */
#define EVSYS_CHMUX_TCE0_CCA_gc (0xE4) /* Timer/Counter E0 Compare or Capture A */
#define EVSYS_CHMUX_TCE0_CCB_gc (0xE5) /* Timer/Counter E0 Compare or Capture B */
#define EVSYS_CHMUX_TCE0_CCC_gc (0xE6) /* Timer/Counter E0 Compare or Capture C */
#define EVSYS_CHMUX_TCE0_CCD_gc (0xE7) /* Timer/Counter E0 Compare or Capture D */
#define EVSYS_CHMUX_TCE1_OVF_gc (0xE8) /* Timer/Counter E1 Overflow */
#define EVSYS_CHMUX_TCE1_ERR_gc (0xE9) /* Timer/Counter E1 Error */
#define EVSYS_CHMUX_TCE1_CCA_gc (0xEC) /* Timer/Counter E1 Compare or Capture A */
#define EVSYS_CHMUX_TCE1_CCB_gc (0xED) /* Timer/Counter E1 Compare or Capture B */
#define EVSYS_CHMUX_TCF0_OVF_gc (0xF0) /* Timer/Counter F0 Overflow */
#define EVSYS_CHMUX_TCF0_ERR_gc (0xF1) /* Timer/Counter F0 Error */
#define EVSYS_CHMUX_TCF0_CCA_gc (0xF4) /* Timer/Counter F0 Compare or Capture A */
#define EVSYS_CHMUX_TCF0_CCB_gc (0xF5) /* Timer/Counter F0 Compare or Capture B */
#define EVSYS_CHMUX_TCF0_CCC_gc (0xF6) /* Timer/Counter F0 Compare or Capture C */
#define EVSYS_CHMUX_TCF0_CCD_gc (0xF7) /* Timer/Counter F0 Compare or Capture D */
#define EVSYS_CHMUX_TCF1_OVF_gc (0xF8) /* Timer/Counter F1 Overflow */
#define EVSYS_CHMUX_TCF1_ERR_gc (0xF9) /* Timer/Counter F1 Error */
#define EVSYS_CHMUX_TCF1_CCA_gc (0xFC) /* Timer/Counter F1 Compare or Capture A */
#define EVSYS_CHMUX_TCF1_CCB_gc (0xFD) /* Timer/Counter F1 Compare or Capture B */

/* ----------------------------------------------------- */
/* NVM - Non Volatile Memory */
/* ----------------------------------------------------- */

/* NVM.CMD masks */
#define NVM_CMD_gm 0xFF /* Command */

/* NVM.CTRLA masks */
#define NVM_CMDEX_bm 0x01 /* Command Execute */
#define NVM_CMDEX_bp 0

/* NVM.CTRLB masks */
#define NVM_EEMAPEN_bm 0x08 /* EEPROM Mapping Enable */
#define NVM_EEMAPEN_bp 3
#define NVM_FPRM_bm 0x04 /* Flash Power Reduction Enable */
#define NVM_FPRM_bp 2
#define NVM_EPRM_bm 0x02 /* EEPROM Power Reduction Enable */
#define NVM_EPRM_bp 1
#define NVM_SPMLOCK_bm 0x01 /* SPM Lock */
#define NVM_SPMLOCK_bp 0

/* NVM.INTCTRL masks */
#define NVM_SPMLVL_gm 0x0C /* SPM Interrupt Level */
#define NVM_EELVL_gm 0x03 /* EEPROM Interrupt Level */

/* NVM.STATUS masks */
#define NVM_NVMBUSY_bm 0x80 /* Non-volatile Memory Busy */
#define NVM_NVMBUSY_bp 7
#define NVM_FBUSY_bm 0x40 /* Flash Memory Busy */
#define NVM_FBUSY_bp 6
#define NVM_EELOAD_bm 0x02 /* EEPROM Page Buffer Active Loading */
#define NVM_EELOAD_bp 1
#define NVM_FLOAD_bm 0x01 /* Flash Page Buffer Active Loading */
#define NVM_FLOAD_bp 0

/* NVM.LOCKBITS masks */
#define NVM_BLBB_gm 0xC0 /* Boot Lock Bits - Boot Section */
#define NVM_BLBA_gm 0x30 /* Boot Lock Bits - Application Section */
#define NVM_BLBAT_gm 0x0C /* Boot Lock Bits - Application Table */
#define NVM_LB_gm 0x03 /* Lock Bits */

/* NVM_LOCKBITS.LOCKBITS masks */
#define NVM_LOCKBITS_BLBB_gm 0xC0 /* Boot Lock Bits - Boot Section */
#define NVM_LOCKBITS_BLBA_gm 0x30 /* Boot Lock Bits - Application Section */
#define NVM_LOCKBITS_BLBAT_gm 0x0C /* Boot Lock Bits - Application Table */
#define NVM_LOCKBITS_LB_gm 0x03  /* Lock Bits */

/* NVM_FUSES.FUSEBYTE0 masks */
#define NVM_FUSES_JTAGUSERID_gm 0xFF /* JTAG User ID */

/* NVM_FUSES.FUSEBYTE1 masks */
#define NVM_FUSES_WDWP_gm 0xF0 /* Watchdog Window Timeout Period */
#define NVM_FUSES_WDP_gm 0x0F /* Watchdog Timeout Period */

/* NVM_FUSES.FUSEBYTE2 masks */
#define NVM_FUSES_DVSDON_bm 0x80 /* Spike Detector Enable */
#define NVM_FUSES_DVSDON_bp 7
#define NVM_FUSES_BOOTRST_bm 0x40 /* Boot Loader Section Reset Vector */
#define NVM_FUSES_BOOTRST_bp 6
#define NVM_FUSES_BODACT_gm 0x0C /* BOD Operation in Active Mode */
#define NVM_FUSES_BODPD_gm 0x03 /* BOD Operation in Power-Down Mode */

/* NVM_FUSES.FUSEBYTE4 masks */
#define NVM_FUSES_SUT_gm 0x0C /* Start-up Time */
#define NVM_FUSES_WDLOCK_bm 0x02 /* Watchdog Timer Lock */
#define NVM_FUSES_WDLOCK_bp 1
#define NVM_FUSES_JTAGEN_bm 0x01 /* JTAG Interface Enable */
#define NVM_FUSES_JTAGEN_bp 0

/* NVM_FUSES.FUSEBYTE5 masks */
#define NVM_FUSES_EESAVE_bm 0x08 /* Preserve EEPROM Through Chip Erase */
#define NVM_FUSES_EESAVE_bp 3
#define NVM_FUSES_BODLVL_gm 0x07 /* Brown Out Detection Voltage Level */


/* */
#define NVM_CMD_NO_OPERATION_gc (0x00) /* Noop/Ordinary LPM */
#define NVM_CMD_READ_CALIB_ROW_gc (0x02) /* Read calibration row */
#define NVM_CMD_READ_USER_SIG_ROW_gc (0x03) /* Read user signature row */
#define NVM_CMD_READ_EEPROM_gc (0x06) /* Read EEPROM */
#define NVM_CMD_READ_FUSES_gc (0x07) /* Read fuse byte */
#define NVM_CMD_WRITE_LOCK_BITS_gc (0x08) /* Write lock bits */
#define NVM_CMD_ERASE_USER_SIG_ROW_gc (0x18) /* Erase user signature row */
#define NVM_CMD_WRITE_USER_SIG_ROW_gc (0x1A) /* Write user signature row */
#define NVM_CMD_ERASE_APP_gc (0x20) /* Erase Application Section */
#define NVM_CMD_ERASE_APP_PAGE_gc (0x22) /* Erase Application Section page */
#define NVM_CMD_LOAD_FLASH_BUFFER_gc (0x23) /* Load Flash page buffer */
#define NVM_CMD_WRITE_APP_PAGE_gc (0x24) /* Write Application Section page */
#define NVM_CMD_ERASE_WRITE_APP_PAGE_gc (0x25) /* Erase-and-write Application Section page */
#define NVM_CMD_ERASE_FLASH_BUFFER_gc (0x26) /* Erase/flush Flash page buffer */
#define NVM_CMD_ERASE_BOOT_PAGE_gc (0x2A) /* Erase Boot Section page */
#define NVM_CMD_WRITE_BOOT_PAGE_gc (0x2C) /* Write Boot Section page */
#define NVM_CMD_ERASE_WRITE_BOOT_PAGE_gc (0x2D) /* Erase-and-write Boot Section page */
#define NVM_CMD_ERASE_EEPROM_gc (0x30) /* Erase EEPROM */
#define NVM_CMD_ERASE_EEPROM_PAGE_gc (0x32) /* Erase EEPROM page */
#define NVM_CMD_LOAD_EEPROM_BUFFER_gc (0x33) /* Load EEPROM page buffer */
#define NVM_CMD_WRITE_EEPROM_PAGE_gc (0x34) /* Write EEPROM page */
#define NVM_CMD_ERASE_WRITE_EEPROM_PAGE_gc (0x35) /* Erase-and-write EEPROM page */
#define NVM_CMD_ERASE_EEPROM_BUFFER_gc (0x36) /* Erase/flush EEPROM page buffer */
#define NVM_CMD_APP_CRC_gc (0x38) /* Generate Application section CRC */
#define NVM_CMD_BOOT_CRC_gc (0x39) /* Generate Boot Section CRC */

/* */
#define NVM_SPMLVL_OFF_gc (0x00<<2) /* Interrupt disabled */
#define NVM_SPMLVL_LO_gc (0x01<<2) /* Low level */
#define NVM_SPMLVL_MED_gc (0x02<<2) /* Medium level */
#define NVM_SPMLVL_HI_gc (0x03<<2) /* High level */

/* */
#define NVM_EELVL_OFF_gc (0x00) /* Interrupt disabled */
#define NVM_EELVL_LO_gc (0x01) /* Low level */
#define NVM_EELVL_MED_gc (0x02) /* Medium level */
#define NVM_EELVL_HI_gc (0x03) /* High level */

/* */
#define NVM_BLBB_NOLOCK_gc (0x03<<6) /* No locks */
#define NVM_BLBB_WLOCK_gc (0x02<<6) /* Write not allowed */
#define NVM_BLBB_RLOCK_gc (0x01<<6) /* Read not allowed */
#define NVM_BLBB_RWLOCK_gc (0x00<<6) /* Read and write not allowed */

/* */
#define NVM_BLBA_NOLOCK_gc (0x03<<4) /* No locks */
#define NVM_BLBA_WLOCK_gc (0x02<<4) /* Write not allowed */
#define NVM_BLBA_RLOCK_gc (0x01<<4) /* Read not allowed */
#define NVM_BLBA_RWLOCK_gc (0x00<<4) /* Read and write not allowed */

/* */
#define NVM_BLBAT_NOLOCK_gc (0x03<<2) /* No locks */
#define NVM_BLBAT_WLOCK_gc (0x02<<2) /* Write not allowed */
#define NVM_BLBAT_RLOCK_gc (0x01<<2) /* Read not allowed */
#define NVM_BLBAT_RWLOCK_gc (0x00<<2) /* Read and write not allowed */

/* */
#define NVM_LB_NOLOCK_gc (0x03) /* No locks */
#define NVM_LB_WLOCK_gc (0x02) /* Write not allowed */
#define NVM_LB_RWLOCK_gc (0x00) /* Read and write not allowed */

/* Boot Loader Section Reset Vector */
#define BOOTRST_BOOTLDR_gc (0x00<<6) /* Boot Loader Reset */
#define BOOTRST_APPLICATION_gc (0x01<<6) /* Application Reset */

/* BOD operation */
#define BOD_INSAMPLEDMODE_gc (0x01<<2) /* BOD enabled in sampled mode */
#define BOD_CONTINOUSLY_gc (0x02<<2) /* BOD enabled continuously */
#define BOD_DISABLED_gc (0x03<<2) /* BOD Disabled */

/* Watchdog (Window) Timeout Period */
#define WD_8CLK_gc (0x00<<4) /* 8 cycles (8ms @ 3.3V) */
#define WD_16CLK_gc (0x01<<4) /* 16 cycles (16ms @ 3.3V) */
#define WD_32CLK_gc (0x02<<4) /* 32 cycles (32ms @ 3.3V) */
#define WD_64CLK_gc (0x03<<4) /* 64 cycles (64ms @ 3.3V) */
#define WD_128CLK_gc (0x04<<4) /* 128 cycles (0.125s @ 3.3V) */
#define WD_256CLK_gc (0x05<<4) /* 256 cycles (0.25s @ 3.3V) */
#define WD_512CLK_gc (0x06<<4) /* 512 cycles (0.5s @ 3.3V) */
#define WD_1KCLK_gc (0x07<<4) /* 1K cycles (1s @ 3.3V) */
#define WD_2KCLK_gc (0x08<<4) /* 2K cycles (2s @ 3.3V) */
#define WD_4KCLK_gc (0x09<<4) /* 4K cycles (4s @ 3.3V) */
#define WD_8KCLK_gc (0x0A<<4) /* 8K cycles (8s @ 3.3V) */

/* Start-up Time */
#define SUT_0MS_gc (0x03<<2) /* 0 ms */
#define SUT_4MS_gc (0x01<<2) /* 4 ms */
#define SUT_64MS_gc (0x00<<2) /* 64 ms */

/* Brown Out Detection Voltage Level */
#define BODLVL_1V6_gc (0x07) /* 1.6 V */
#define BODLVL_1V8_gc (0x06) /* 1.8 V */
#define BODLVL_2V0_gc (0x05) /* 2.0 V */
#define BODLVL_2V2_gc (0x04) /* 2.2 V */
#define BODLVL_2V4_gc (0x03) /* 2.4 V */
#define BODLVL_2V7_gc (0x02) /* 2.7 V */
#define BODLVL_2V9_gc (0x01) /* 2.9 V */
#define BODLVL_3V2_gc (0x00) /* 3.2 V */

/* ----------------------------------------------------- */
/* AC - Analog Comparator */
/* ----------------------------------------------------- */

/* AC.AC0CTRL masks */
#define AC_INTMODE_gm 0xC0 /* Interrupt Mode */
#define AC_INTLVL_gm 0x30 /* Interrupt Level */
#define AC_HSMODE_bm 0x08 /* High-speed Mode */
#define AC_HSMODE_bp 3
#define AC_HYSMODE_gm 0x06 /* Hysteresis Mode */
#define AC_ENABLE_bm 0x01 /* Enable */
#define AC_ENABLE_bp 0

/* AC.AC1CTRL masks */
/* Masks already defined */

/* AC.AC0MUXCTRL masks */
#define AC_MUXPOS_gm 0x38 /* MUX Positive Input */
#define AC_MUXNEG_gm 0x07 /* MUX Negative Input */

/* AC.CTRLA masks */
#define AC_AC0OUT_bm 0x01 /* Comparator 0 Output Enable */
#define AC_AC0OUT_bp 0

/* AC.CTRLB masks */
#define AC_SCALEFAC_gm 0x3F /* VCC Voltage Scaler Factor */

/* AC.WINCTRL masks */
#define AC_WEN_bm 0x10 /* Window Mode Enable */
#define AC_WEN_bp 4
#define AC_WINTMODE_gm 0x0C /* Window Interrupt Mode */
#define AC_WINTLVL_gm 0x03 /* Window Interrupt Level */

/* AC.STATUS masks */
#define AC_WSTATE_gm 0xC0 /* Window Mode State */
#define AC_AC1STATE_bm 0x20 /* Comparator 1 State */
#define AC_AC1STATE_bp 5
#define AC_AC0STATE_bm 0x10 /* Comparator 0 State */
#define AC_AC0STATE_bp 4
#define AC_WIF_bm 0x04 /* Window Mode Interrupt Flag */
#define AC_WIF_bp 2
#define AC_AC1IF_bm 0x02 /* Comparator 1 Interrupt Flag */
#define AC_AC1IF_bp 1
#define AC_AC0IF_bm 0x01 /* Comparator 0 Interrupt Flag */
#define AC_AC0IF_bp 0


/* */
#define AC_INTMODE_BOTHEDGES_gc (0x00<<6) /* Interrupt on both edges */
#define AC_INTMODE_FALLING_gc (0x02<<6) /* Interrupt on falling edge */
#define AC_INTMODE_RISING_gc (0x03<<6) /* Interrupt on rising edge */

/* */
#define AC_INTLVL_OFF_gc (0x00<<4) /* Interrupt disabled */
#define AC_INTLVL_LO_gc (0x01<<4) /* Low level */
#define AC_INTLVL_MED_gc (0x02<<4) /* Medium level */
#define AC_INTLVL_HI_gc (0x03<<4) /* High level */

/* */
#define AC_HYSMODE_NO_gc (0x00<<1) /* No hysteresis */
#define AC_HYSMODE_SMALL_gc (0x01<<1) /* Small hysteresis */
#define AC_HYSMODE_LARGE_gc (0x02<<1) /* Large hysteresis */

/* */
#define AC_MUXPOS_PIN0_gc (0x00<<3) /* Pin 0 */
#define AC_MUXPOS_PIN1_gc (0x01<<3) /* Pin 1 */
#define AC_MUXPOS_PIN2_gc (0x02<<3) /* Pin 2 */
#define AC_MUXPOS_PIN4_gc (0x03<<3) /* Pin 4 */
#define AC_MUXPOS_PIN6_gc (0x04<<3) /* Pin 6 */
#define AC_MUXPOS_DAC_gc (0x05<<3) /* DAC output */
#define AC_MUXPOS_BANDGAP_gc (0x06<<3) /* Internal bandgap voltage */
#define AC_MUXPOS_SCALER_gc (0x07<<3) /* Internal voltage scaler */

/* */
#define AC_MUXNEG_PIN0_gc (0x00) /* Pin 0 */
#define AC_MUXNEG_PIN1_gc (0x01) /* Pin 1 */
#define AC_MUXNEG_PIN3_gc (0x02) /* Pin 3 */
#define AC_MUXNEG_PIN5_gc (0x03) /* Pin 5 */
#define AC_MUXNEG_PIN7_gc (0x04) /* Pin 7 */
#define AC_MUXNEG_DAC_gc (0x05) /* DAC output */
#define AC_MUXNEG_BANDGAP_gc (0x06) /* Bandgap Reference */
#define AC_MUXNEG_SCALER_gc (0x07) /* Internal voltage scaler */

/* */
#define AC_WINTMODE_ABOVE_gc (0x00<<2) /* Interrupt on above window */
#define AC_WINTMODE_INSIDE_gc (0x01<<2) /* Interrupt on inside window */
#define AC_WINTMODE_BELOW_gc (0x02<<2) /* Interrupt on below window */
#define AC_WINTMODE_OUTSIDE_gc (0x03<<2) /* Interrupt on outside window */

/* */
#define AC_WINTLVL_OFF_gc (0x00) /* Interrupt disabled */
#define AC_WINTLVL_LO_gc (0x01) /* Low priority */
#define AC_WINTLVL_MED_gc (0x02) /* Medium priority */
#define AC_WINTLVL_HI_gc (0x03) /* High priority */

/* */
#define AC_WSTATE_ABOVE_gc (0x00<<6) /* Signal above window */
#define AC_WSTATE_INSIDE_gc (0x01<<6) /* Signal inside window */
#define AC_WSTATE_BELOW_gc (0x02<<6) /* Signal below window */

/* ----------------------------------------------------- */
/* ADC - Analog/Digital Converter */
/* ----------------------------------------------------- */

/* ADC.CH0MUXCTRL masks */
#define ADC_MUXPORT_bm 0x80 /* Alternate Port Select */
#define ADC_MUXPORT_bp 7
#define ADC_MUXPOS_gm 0x70 /* Positive Input Select */
#define ADC_MUXINT_gm 0x70 /* Internal Input Select */
#define ADC_MUXNEG_gm 0x0C /* Negative Input Select */
#define ADC_INPUTMODE_gm 0x03 /* Input Mode */

/* ADC.CTRLA masks */
#define ADC_GAIN_gm 0xE0 /* Gain Selection */
#define ADC_CONVMODE_bm 0x10 /* Conversion Mode */
#define ADC_CONVMODE_bp 4
#define ADC_FREERUN_bm 0x08 /* Free Running Mode Enable */
#define ADC_FREERUN_bp 3
#define ADC_RESOLUTION_gm 0x06 /* Result Resolution */

/* ADC.CTRLB masks */
#define ADC_CH3START_bm 0x20 /* Channel 3 Start Conversion */
#define ADC_CH3START_bp 5
#define ADC_CH2START_bm 0x10 /* Channel 2 Start Conversion */
#define ADC_CH2START_bp 4
#define ADC_CH1START_bm 0x08 /* Channel 1 Start Conversion */
#define ADC_CH1START_bp 3
#define ADC_CH0START_bm 0x04 /* Channel 0 Start Conversion */
#define ADC_CH0START_bp 2
#define ADC_FLUSH_bm 0x02 /* Flush Pipeline */
#define ADC_FLUSH_bp 1
#define ADC_ENABLE_bm 0x01 /* Enable ADC */
#define ADC_ENABLE_bp 0

/* ADC.REFCTRL masks */
#define ADC_REFSEL_gm 0x70 /* Reference Selection */
#define ADC_BANDGAP_bm 0x02 /* Bandgap enable */
#define ADC_BANDGAP_bp 1
#define ADC_TEMPREF_bm 0x01 /* Temperature Reference Enable */
#define ADC_TEMPREF_bp 0

/* ADC.EVCTRL masks */
#define ADC_SWEEP_gm 0xC0 /* Channel Sweep Selection */
#define ADC_EVSEL_gm 0x38 /* Event Input Select */
#define ADC_EVACT_gm 0x07 /* Event Action Select */

/* ADC.CH0INTCTRL masks */
#define ADC_INTMODE_gm 0x0C /* Interrupt Mode */
#define ADC_INTLVL_gm 0x03 /* Interrupt Level */

/* ADC.INTFLAGS masks */
#define ADC_CH3IF_bm 0x08 /* Channel 3 Interrupt Flag */
#define ADC_CH3IF_bp 3
#define ADC_CH2IF_bm 0x04 /* Channel 2 Interrupt Flag */
#define ADC_CH2IF_bp 2
#define ADC_CH1IF_bm 0x02 /* Channel 1 Interrupt Flag */
#define ADC_CH1IF_bp 1
#define ADC_CH0IF_bm 0x01 /* Channel 0 Interrupt Flag */
#define ADC_CH0IF_bp 0

/* ADC.PRESCALER masks */
#define ADC_PRESCALER_gm 0x07 /* Clock Prescaler Selection */

/* ADC.CALCTRL masks */
#define ADC_CALIBRATE_bm 0x01 /* Enable Calibration */
#define ADC_CALIBRATE_bp 0


/* */
#define ADC_MUXPOS_PIN0_gc (0x00<<4) /* Input pin 0 */
#define ADC_MUXPOS_PIN1_gc (0x01<<4) /* Input pin 1 */
#define ADC_MUXPOS_PIN2_gc (0x02<<4) /* Input pin 2 */
#define ADC_MUXPOS_PIN3_gc (0x03<<4) /* Input pin 3 */
#define ADC_MUXPOS_PIN4_gc (0x04<<4) /* Input pin 4 */
#define ADC_MUXPOS_PIN5_gc (0x05<<4) /* Input pin 5 */
#define ADC_MUXPOS_PIN6_gc (0x06<<4) /* Input pin 6 */
#define ADC_MUXPOS_PIN7_gc (0x07<<4) /* Input pin 7 */

/* */
#define ADC_MUXINT_TEMP_gc (0x00<<4) /* Temperature Reference */
#define ADC_MUXINT_BANDGAP_gc (0x01<<4) /* Bandgap Reference */
#define ADC_MUXINT_SCALEDVCC_gc (0x02<<4) /* 1/10 scaled VCC */
#define ADC_MUXINT_DAC_gc (0x03<<4) /* DAC output */

/* */
#define ADC_MUXNEG_PIN0_gc (0x00<<2) /* Input pin 0 */
#define ADC_MUXNEG_PIN1_gc (0x01<<2) /* Input pin 1 */
#define ADC_MUXNEG_PIN2_gc (0x02<<2) /* Input pin 2 */
#define ADC_MUXNEG_PIN3_gc (0x03<<2) /* Input pin 3 */

/* */
#define ADC_INPUTMODE_DIFF_gc (0x00) /* Differential input, no gain */
#define ADC_INPUTMODE_DIFFWGAIN_gc (0x01) /* Differential input, with gain */
#define ADC_INPUTMODE_INTERNAL_gc (0x02) /* Internal inputs, no gain */
#define ADC_INPUTMODE_SINGLEENDED_gc (0x03) /* Single-ended input, no gain */

/* */
#define ADC_GAIN_1X_gc (0x00<<5) /* 1x gain */
#define ADC_GAIN_2X_gc (0x01<<5) /* 2x gain */
#define ADC_GAIN_4X_gc (0x02<<5) /* 4x gain */
#define ADC_GAIN_8X_gc (0x03<<5) /* 8x gain */
#define ADC_GAIN_16X_gc (0x04<<5) /* 16x gain */
#define ADC_GAIN_32X_gc (0x05<<5) /* 32x gain */
#define ADC_GAIN_64X_gc (0x06<<5) /* 64x gain */

/* */
#define ADC_RESOLUTION_12BIT_gc (0x00<<1) /* 12-bit right-adjusted result */
#define ADC_RESOLUTION_10BIT_gc (0x01<<1) /* 10-bit right-adjusted result */
#define ADC_RESOLUTION_8BIT_gc (0x02<<1) /* 8-bit right-adjusted result */
#define ADC_RESOLUTION_LEFT12BIT_gc (0x03<<1) /* 12-bit left-adjusted result */

/* */
#define ADC_REFSEL_INT1V_gc (0x00<<4) /* Internal 1.0V */
#define ADC_REFSEL_INT1VDECOUPLED_gc (0x01<<4) /* Internal 1.0V connected to pins */
#define ADC_REFSEL_INTVCC_gc (0x02<<4) /* Internal VCC-0.6V */
#define ADC_REFSEL_INTVCCDECOUPLED_gc (0x03<<4) /* Internal VCC-0.6V connected to pins */
#define ADC_REFSEL_EXT_gc (0x04<<4) /* External reference */

/* */
#define ADC_SWEEP_0_gc (0x00<<6) /* Channel 0 */
#define ADC_SWEEP_01_gc (0x01<<6) /* Channel 0,1 */
#define ADC_SWEEP_012_gc (0x02<<6) /* Channel 0,1,2 */
#define ADC_SWEEP_0123_gc (0x03<<6) /* Channel 0,1,2,3 */

/* */
#define ADC_EVSEL_0123_gc (0x00<<3) /* Event Channel 0,1,2,3 */
#define ADC_EVSEL_1234_gc (0x01<<3) /* Event Channel 1,2,3,4 */
#define ADC_EVSEL_2345_gc (0x02<<3) /* Event Channel 2,3,4,5 */
#define ADC_EVSEL_3456_gc (0x03<<3) /* Event Channel 3,4,5,6 */
#define ADC_EVSEL_4567_gc (0x04<<3) /* Event Channel 4,5,6,7 */
#define ADC_EVSEL_567_gc (0x05<<3) /* Event Channel 5,6,7 */
#define ADC_EVSEL_67_gc (0x06<<3) /* Event Channel 6,7 */
#define ADC_EVSEL_7_gc (0x07<<3) /* Event Channel 7 */

/* */
#define ADC_EVACT_NONE_gc (0x00) /* No event action */
#define ADC_EVACT_CH0_gc (0x01) /* First event triggers channel 0 */
#define ADC_EVACT_CH01_gc (0x02) /* First two events trigger channel 0,1 */
#define ADC_EVACT_CH012_gc (0x03) /* First three events trigger channel 0,1,2 */
#define ADC_EVACT_CH0123_gc (0x04) /* Events trigger channel 0,1,2,3 */
#define ADC_EVACT_SWEEP_gc (0x05) /* First event triggers sweep */
#define ADC_EVACT_SYNCHSWEEP_gc (0x06) /* First event triggers synchronized sweep */

/* */
#define ADC_INTMODE_COMPLETE_gc (0x00<<2) /* Interrupt on conversion complete */
#define ADC_INTMODE_BELOW_gc (0x01<<2) /* Interrupt on result below compare value */
#define ADC_INTMODE_ABOVE_gc (0x03<<2) /* Interrupt on result above compare value */

/* */
#define ADC_INTLVL_OFF_gc (0x00) /* Interrupt disabled */
#define ADC_INTLVL_LO_gc (0x01) /* Low level */
#define ADC_INTLVL_MED_gc (0x02) /* Medium level */
#define ADC_INTLVL_HI_gc (0x03) /* High level */

/* */
#define ADC_PRESCALER_DIV1_gc (0x00) /* Divide clock by 1 */
#define ADC_PRESCALER_DIV2_gc (0x01) /* Divide clock by 2 */
#define ADC_PRESCALER_DIV4_gc (0x02) /* Divide clock by 4 */
#define ADC_PRESCALER_DIV8_gc (0x03) /* Divide clock by 8 */
#define ADC_PRESCALER_DIV16_gc (0x04) /* Divide clock by 16 */
#define ADC_PRESCALER_DIV32_gc (0x05) /* Divide clock by 32 */
#define ADC_PRESCALER_DIV64_gc (0x06) /* Divide clock by 64 */

/* ----------------------------------------------------- */
/* DAC - Digital/Analog Converter */
/* ----------------------------------------------------- */

/* DAC.CTRLA masks */
#define DAC_IDOEN_bm 0x10 /* Internal Output Enable */
#define DAC_IDOEN_bp 4
#define DAC_CH1EN_bm 0x08 /* Channel 1 Output Enable */
#define DAC_CH1EN_bp 3
#define DAC_CH0EN_bm 0x04 /* Channel 0 Output Enable */
#define DAC_CH0EN_bp 2
#define DAC_LPMODE_bm 0x02 /* Low Power Mode */
#define DAC_LPMODE_bp 1
#define DAC_ENABLE_bm 0x01 /* Enable */
#define DAC_ENABLE_bp 0

/* DAC.CTRLB masks */
#define DAC_CHSEL_gm 0x60 /* Channel Select */
#define DAC_CH1TRIG_bm 0x02 /* Channel 1 Event Trig Enable */
#define DAC_CH1TRIG_bp 1
#define DAC_CH0TRIG_bm 0x01 /* Channel 0 Event Trig Enable */
#define DAC_CH0TRIG_bp 0

/* DAC.CTRLC masks */
#define DAC_REFSEL_gm 0x18 /* Reference Select */
#define DAC_TRUEGND_bm 0x04 /* Force true GND when converting 0x000 */
#define DAC_TRUEGND_bp 2
#define DAC_LEFTADJ_bm 0x01 /* Left-adjust Result */
#define DAC_LEFTADJ_bp 0

/* DAC.EVCTRL masks */
#define DAC_EVSEL_gm 0x07 /* Event Input Selection */

/* DAC.TIMCTRL masks */
#define DAC_CHSEP_gm 0x70 /* Channel Separation Control */
#define DAC_REFRESH_gm 0x0F /* Refresh Timing Control */

/* DAC.STATUS masks */
#define DAC_CH1DRE_bm 0x02 /* Channel 1 Data Register Empty */
#define DAC_CH1DRE_bp 1
#define DAC_CH0DRE_bm 0x01 /* Channel 0 Data Register Empty */
#define DAC_CH0DRE_bp 0


/* */
#define DAC_CHSEL_SINGLE_gc (0x00<<5) /* Single channel operation (Channel A only) */
#define DAC_CHSEL_DUAL_gc (0x02<<5) /* Dual channel operation (S/H on both channels) */

/* */
#define DAC_REFSEL_BANDGAP_gc (0x00<<3) /* Bandgap Reference */
#define DAC_REFSEL_AVCC_gc (0x01<<3) /* Analog supply voltage */
#define DAC_REFSEL_EXTREF_gc (0x02<<3) /* External reference */

/* */
#define DAC_EVSEL_EV0_gc (0x00) /* Event line 0 */
#define DAC_EVSEL_EV1_gc (0x01) /* Event line 1 */
#define DAC_EVSEL_EV2_gc (0x02) /* Event line 2 */
#define DAC_EVSEL_EV3_gc (0x03) /* Event line 3 */
#define DAC_EVSEL_EV4_gc (0x04) /* Event line 4 */
#define DAC_EVSEL_EV5_gc (0x05) /* Event line 5 */
#define DAC_EVSEL_EV6_gc (0x06) /* Event line 6 */
#define DAC_EVSEL_EV7_gc (0x07) /* Event line 7 */

/* */
#define DAC_CHSEP_1CLK_gc (0x00<<4) /* 1 CLK */
#define DAC_CHSEP_2CLK_gc (0x01<<4) /* 2 CLK */
#define DAC_CHSEP_4CLK_gc (0x02<<4) /* 4 CLK */
#define DAC_CHSEP_8CLK_gc (0x03<<4) /* 8 CLK */
#define DAC_CHSEP_16CLK_gc (0x04<<4) /* 16 CLK */
#define DAC_CHSEP_32CLK_gc (0x05<<4) /* 32 CLK */
#define DAC_CHSEP_64CLK_gc (0x06<<4) /* 64 CLK */

/* */
#define DAC_REFRESH_2CLK_gc (0x00) /* 2 CLK */
#define DAC_REFRESH_4CLK_gc (0x01) /* 4 CLK */
#define DAC_REFRESH_8CLK_gc (0x02) /* 8 CLK */
#define DAC_REFRESH_16CLK_gc (0x03) /* 16 CLK */
#define DAC_REFRESH_32CLK_gc (0x04) /* 32 CLK */
#define DAC_REFRESH_64CLK_gc (0x05) /* 64 CLK */
#define DAC_REFRESH_128CLK_gc (0x06) /* 128 CLK */
#define DAC_REFRESH_256CLK_gc (0x07) /* 256 CLK */
#define DAC_REFRESH_512CLK_gc (0x08) /* 512 CLK */
#define DAC_REFRESH_1024CLK_gc (0x09) /* 1024 CLK */
#define DAC_REFRESH_2048CLK_gc (0x0A) /* 2048 CLK */
#define DAC_REFRESH_OFF_gc (0x0F) /* Auto refresh OFF */

/* ----------------------------------------------------- */
/* RTC - Real-Time Clock */
/* ----------------------------------------------------- */

/* RTC.CTRL masks */
#define RTC_PRESCALER_gm 0x07 /* Prescaling Factor */

/* RTC.STATUS masks */
#define RTC_SYNCBUSY_bm 0x01 /* Synchronization Busy Flag */
#define RTC_SYNCBUSY_bp 0

/* RTC.INTCTRL masks */
#define RTC_COMPINTLVL_gm 0x0C /* Compare Match Interrupt Level */
#define RTC_OVFINTLVL_gm 0x03 /* Overflow Interrupt Level */

/* RTC.INTFLAGS masks */
#define RTC_COMPIF_bm 0x02 /* Compare Match Interrupt Flag */
#define RTC_COMPIF_bp 1
#define RTC_OVFIF_bm 0x01 /* Overflow Interrupt Flag */
#define RTC_OVFIF_bp 0


/* Prescaler Factor */
#define RTC_PRESCALER_OFF_gc (0x00) /* RTC Off */
#define RTC_PRESCALER_DIV1_gc (0x01) /* RTC Clock */
#define RTC_PRESCALER_DIV2_gc (0x02) /* RTC Clock / 2 */
#define RTC_PRESCALER_DIV8_gc (0x03) /* RTC Clock / 8 */
#define RTC_PRESCALER_DIV16_gc (0x04) /* RTC Clock / 16 */
#define RTC_PRESCALER_DIV64_gc (0x05) /* RTC Clock / 64 */
#define RTC_PRESCALER_DIV256_gc (0x06) /* RTC Clock / 256 */
#define RTC_PRESCALER_DIV1024_gc (0x07) /* RTC Clock / 1024 */

/* Compare Interrupt level */
#define RTC_COMPINTLVL_OFF_gc (0x00<<2) /* Interrupt Disabled */
#define RTC_COMPINTLVL_LO_gc (0x01<<2) /* Low Level */
#define RTC_COMPINTLVL_MED_gc (0x02<<2) /* Medium Level */
#define RTC_COMPINTLVL_HI_gc (0x03<<2) /* High Level */

/* Overflow Interrupt level */
#define RTC_OVFINTLVL_OFF_gc (0x00) /* Interrupt Disabled */
#define RTC_OVFINTLVL_LO_gc (0x01) /* Low Level */
#define RTC_OVFINTLVL_MED_gc (0x02) /* Medium Level */
#define RTC_OVFINTLVL_HI_gc (0x03) /* High Level */

/* ----------------------------------------------------- */
/* EBI - External Bus Interface */
/* ----------------------------------------------------- */

/* EBI_CS.CTRLA masks */
#define EBI_CS_ASPACE_gm 0x7C /* Address Space */
#define EBI_CS_MODE_gm 0x03 /* Memory Mode */

/* EBI_CS.CTRLB masks */
#define EBI_CS_SRWS_gm 0x07 /* SRAM Wait State Cycles */
#define EBI_CS_SDINITDONE_bm 0x80 /* SDRAM Initialization Done */
#define EBI_CS_SDINITDONE_bp 7
#define EBI_CS_SDSREN_bm 0x04 /* SDRAM Self-refresh Enable */
#define EBI_CS_SDSREN_bp 2
#define EBI_CS_SDMODE_gm 0x03 /* SDRAM Mode */

/* EBI.CTRL masks */
#define EBI_SDDATAW_gm 0xC0 /* SDRAM Data Width Setting */
#define EBI_LPCMODE_gm 0x30 /* SRAM LPC Mode */
#define EBI_SRMODE_gm 0x0C /* SRAM Mode */
#define EBI_IFMODE_gm 0x03 /* Interface Mode */

/* EBI.SDRAMCTRLA masks */
#define EBI_SDCAS_bm 0x08 /* SDRAM CAS Latency Setting */
#define EBI_SDCAS_bp 3
#define EBI_SDROW_bm 0x04 /* SDRAM ROW Bits Setting */
#define EBI_SDROW_bp 2
#define EBI_SDCOL_gm 0x03 /* SDRAM Column Bits Setting */

/* EBI.SDRAMCTRLB masks */
#define EBI_MRDLY_gm 0xC0 /* SDRAM Mode Register Delay */
#define EBI_ROWCYCDLY_gm 0x38 /* SDRAM Row Cycle Delay */
#define EBI_RPDLY_gm 0x07 /* SDRAM Row-to-Precharge Delay */

/* EBI.SDRAMCTRLC masks */
#define EBI_WRDLY_gm 0xC0 /* SDRAM Write Recovery Delay */
#define EBI_ESRDLY_gm 0x38 /* SDRAM Exit-Self-refresh-to-Active Delay */
#define EBI_ROWCOLDLY_gm 0x07 /* SDRAM Row-to-Column Delay */


/* */
#define EBI_CS_ASPACE_256B_gc (0x00<<2) /* 256 bytes */
#define EBI_CS_ASPACE_512B_gc (0x01<<2) /* 512 bytes */
#define EBI_CS_ASPACE_1KB_gc (0x02<<2) /* 1K bytes */
#define EBI_CS_ASPACE_2KB_gc (0x03<<2) /* 2K bytes */
#define EBI_CS_ASPACE_4KB_gc (0x04<<2) /* 4K bytes */
#define EBI_CS_ASPACE_8KB_gc (0x05<<2) /* 8K bytes */
#define EBI_CS_ASPACE_16KB_gc (0x06<<2) /* 16K bytes */
#define EBI_CS_ASPACE_32KB_gc (0x07<<2) /* 32K bytes */
#define EBI_CS_ASPACE_64KB_gc (0x08<<2) /* 64K bytes */
#define EBI_CS_ASPACE_128KB_gc (0x09<<2) /* 128K bytes */
#define EBI_CS_ASPACE_256KB_gc (0x0A<<2) /* 256K bytes */
#define EBI_CS_ASPACE_512KB_gc (0x0B<<2) /* 512K bytes */
#define EBI_CS_ASPACE_1MB_gc (0x0C<<2) /* 1M bytes */
#define EBI_CS_ASPACE_2MB_gc (0x0D<<2) /* 2M bytes */
#define EBI_CS_ASPACE_4MB_gc (0x0E<<2) /* 4M bytes */
#define EBI_CS_ASPACE_8MB_gc (0x0F<<2) /* 8M bytes */
#define EBI_CS_ASPACE_16M_gc (0x10<<2) /* 16M bytes */

/* */
#define EBI_CS_MODE_DISABLED_gc (0x00) /* Chip Select Disabled */
#define EBI_CS_MODE_SRAM_gc (0x01) /* Chip Select in SRAM mode */
#define EBI_CS_MODE_LPC_gc (0x02) /* Chip Select in SRAM LPC mode */
#define EBI_CS_MODE_SDRAM_gc (0x03) /* Chip Select in SDRAM mode */

/* */
#define EBI_CS_SDMODE_NORMAL_gc (0x00) /* Normal mode */
#define EBI_CS_SDMODE_LOAD_gc (0x01) /* Load Mode Register command mode */

/* */
#define EBI_SDDATAW_4BIT_gc (0x00<<6) /* 4-bit data bus */
#define EBI_SDDATAW_8BIT_gc (0x01<<6) /* 8-bit data bus */

/* */
#define EBI_LPCMODE_ALE1_gc (0x00<<4) /* Data muxed with addr byte 0 */
#define EBI_LPCMODE_ALE12_gc (0x02<<4) /* Data muxed with addr byte 0 and 1 */

/* */
#define EBI_SRMODE_ALE1_gc (0x00<<2) /* Addr byte 0 muxed with 1 */
#define EBI_SRMODE_ALE2_gc (0x01<<2) /* Addr byte 0 muxed with 2 */
#define EBI_SRMODE_ALE12_gc (0x02<<2) /* Addr byte 0 muxed with 1 and 2 */
#define EBI_SRMODE_NOALE_gc (0x03<<2) /* No addr muxing */

/* */
#define EBI_IFMODE_DISABLED_gc (0x00) /* EBI Disabled */
#define EBI_IFMODE_3PORT_gc (0x01) /* 3-port mode */
#define EBI_IFMODE_4PORT_gc (0x02) /* 4-port mode */
#define EBI_IFMODE_2PORT_gc (0x03) /* 2-port mode */

/* */
#define EBI_SDCOL_8BIT_gc (0x00) /* 8 column bits */
#define EBI_SDCOL_9BIT_gc (0x01) /* 9 column bits */
#define EBI_SDCOL_10BIT_gc (0x02) /* 10 column bits */
#define EBI_SDCOL_11BIT_gc (0x03) /* 11 column bits */

/* */
#define EBI_MRDLY_0CLK_gc (0x00<<6) /* 0 cycles */
#define EBI_MRDLY_1CLK_gc (0x01<<6) /* 1 cycle */
#define EBI_MRDLY_2CLK_gc (0x02<<6) /* 2 cycles */
#define EBI_MRDLY_3CLK_gc (0x03<<6) /* 3 cycles */

/* */
#define EBI_ROWCYCDLY_0CLK_gc (0x00<<3) /* 0 cycles */
#define EBI_ROWCYCDLY_1CLK_gc (0x01<<3) /* 1 cycle */
#define EBI_ROWCYCDLY_2CLK_gc (0x02<<3) /* 2 cycles */
#define EBI_ROWCYCDLY_3CLK_gc (0x03<<3) /* 3 cycles */
#define EBI_ROWCYCDLY_4CLK_gc (0x04<<3) /* 4 cycles */
#define EBI_ROWCYCDLY_5CLK_gc (0x05<<3) /* 5 cycle */
#define EBI_ROWCYCDLY_6CLK_gc (0x06<<3) /* 6 cycles */
#define EBI_ROWCYCDLY_7CLK_gc (0x07<<3) /* 7 cycles */

/* */
#define EBI_RPDLY_0CLK_gc (0x00) /* 0 cycles */
#define EBI_RPDLY_1CLK_gc (0x01) /* 1 cycle */
#define EBI_RPDLY_2CLK_gc (0x02) /* 2 cycles */
#define EBI_RPDLY_3CLK_gc (0x03) /* 3 cycles */
#define EBI_RPDLY_4CLK_gc (0x04) /* 4 cycles */
#define EBI_RPDLY_5CLK_gc (0x05) /* 5 cycle */
#define EBI_RPDLY_6CLK_gc (0x06) /* 6 cycles */
#define EBI_RPDLY_7CLK_gc (0x07) /* 7 cycles */

/* */
#define EBI_WRDLY_0CLK_gc (0x00<<6) /* 0 cycles */
#define EBI_WRDLY_1CLK_gc (0x01<<6) /* 1 cycle */
#define EBI_WRDLY_2CLK_gc (0x02<<6) /* 2 cycles */
#define EBI_WRDLY_3CLK_gc (0x03<<6) /* 3 cycles */

/* */
#define EBI_ESRDLY_0CLK_gc (0x00<<3) /* 0 cycles */
#define EBI_ESRDLY_1CLK_gc (0x01<<3) /* 1 cycle */
#define EBI_ESRDLY_2CLK_gc (0x02<<3) /* 2 cycles */
#define EBI_ESRDLY_3CLK_gc (0x03<<3) /* 3 cycles */
#define EBI_ESRDLY_4CLK_gc (0x04<<3) /* 4 cycles */
#define EBI_ESRDLY_5CLK_gc (0x05<<3) /* 5 cycle */
#define EBI_ESRDLY_6CLK_gc (0x06<<3) /* 6 cycles */
#define EBI_ESRDLY_7CLK_gc (0x07<<3) /* 7 cycles */

/* */
#define EBI_ROWCOLDLY_0CLK_gc (0x00) /* 0 cycles */
#define EBI_ROWCOLDLY_1CLK_gc (0x01) /* 1 cycle */
#define EBI_ROWCOLDLY_2CLK_gc (0x02) /* 2 cycles */
#define EBI_ROWCOLDLY_3CLK_gc (0x03) /* 3 cycles */
#define EBI_ROWCOLDLY_4CLK_gc (0x04) /* 4 cycles */
#define EBI_ROWCOLDLY_5CLK_gc (0x05) /* 5 cycle */
#define EBI_ROWCOLDLY_6CLK_gc (0x06) /* 6 cycles */
#define EBI_ROWCOLDLY_7CLK_gc (0x07) /* 7 cycles */

/* ----------------------------------------------------- */
/* TWI - Two-Wire Interface */
/* ----------------------------------------------------- */

/* TWI_MASTER.CTRLA masks */
#define TWI_MASTER_INTLVL_gm 0xC0 /* Interrupt Level */
#define TWI_MASTER_RIEN_bm 0x20 /* Read Interrupt Enable */
#define TWI_MASTER_RIEN_bp 5
#define TWI_MASTER_WIEN_bm 0x10 /* Write Interrupt Enable */
#define TWI_MASTER_WIEN_bp 4
#define TWI_MASTER_ENABLE_bm 0x08 /* Enable TWI Master */
#define TWI_MASTER_ENABLE_bp 3

/* TWI_MASTER.CTRLB masks */
#define TWI_MASTER_TIMEOUT_gm 0x0C /* Inactive Bus Timeout */
#define TWI_MASTER_QCEN_bm 0x02 /* Quick Command Enable */
#define TWI_MASTER_QCEN_bp 1
#define TWI_MASTER_SMEN_bm 0x01 /* Smart Mode Enable */
#define TWI_MASTER_SMEN_bp 0

/* TWI_MASTER.CTRLC masks */
#define TWI_MASTER_ACKACT_bm 0x04 /* Acknowledge Action */
#define TWI_MASTER_ACKACT_bp 2
#define TWI_MASTER_CMD_gm 0x03 /* Command */

/* TWI_MASTER.STATUS masks */
#define TWI_MASTER_RIF_bm 0x80 /* Read Interrupt Flag */
#define TWI_MASTER_RIF_bp 7
#define TWI_MASTER_WIF_bm 0x40 /* Write Interrupt Flag */
#define TWI_MASTER_WIF_bp 6
#define TWI_MASTER_CLKHOLD_bm 0x20 /* Clock Hold */
#define TWI_MASTER_CLKHOLD_bp 5
#define TWI_MASTER_RXACK_bm 0x10 /* Received Acknowledge */
#define TWI_MASTER_RXACK_bp 4
#define TWI_MASTER_ARBLOST_bm 0x08 /* Arbitration Lost */
#define TWI_MASTER_ARBLOST_bp 3
#define TWI_MASTER_BUSERR_bm 0x04 /* Bus Error */
#define TWI_MASTER_BUSERR_bp 2
#define TWI_MASTER_BUSSTATE_gm 0x03 /* Bus State */

/* TWI_SLAVE.CTRLA masks */
#define TWI_SLAVE_INTLVL_gm 0xC0 /* Interrupt Level */
#define TWI_SLAVE_DIEN_bm 0x20 /* Data Interrupt Enable */
#define TWI_SLAVE_DIEN_bp 5
#define TWI_SLAVE_APIEN_bm 0x10 /* Address/Stop Interrupt Enable */
#define TWI_SLAVE_APIEN_bp 4
#define TWI_SLAVE_ENABLE_bm 0x08 /* Enable TWI Slave */
#define TWI_SLAVE_ENABLE_bp 3
#define TWI_SLAVE_PIEN_bm 0x04 /* Stop Interrupt Enable */
#define TWI_SLAVE_PIEN_bp 2
#define TWI_SLAVE_PMEN_bm 0x02 /* Promiscuous Mode Enable */
#define TWI_SLAVE_PMEN_bp 1
#define TWI_SLAVE_SMEN_bm 0x01 /* Smart Mode Enable */
#define TWI_SLAVE_SMEN_bp 0

/* TWI_SLAVE.CTRLB masks */
#define TWI_SLAVE_ACKACT_bm 0x04 /* Acknowledge Action */
#define TWI_SLAVE_ACKACT_bp 2
#define TWI_SLAVE_CMD_gm 0x03 /* Command */

/* TWI_SLAVE.STATUS masks */
#define TWI_SLAVE_DIF_bm 0x80 /* Data Interrupt Flag */
#define TWI_SLAVE_DIF_bp 7
#define TWI_SLAVE_APIF_bm 0x40 /* Address/Stop Interrupt Flag */
#define TWI_SLAVE_APIF_bp 6
#define TWI_SLAVE_CLKHOLD_bm 0x20 /* Clock Hold */
#define TWI_SLAVE_CLKHOLD_bp 5
#define TWI_SLAVE_RXACK_bm 0x10 /* Received Acknowledge */
#define TWI_SLAVE_RXACK_bp 4
#define TWI_SLAVE_COLL_bm 0x08 /* Collision */
#define TWI_SLAVE_COLL_bp 3
#define TWI_SLAVE_BUSERR_bm 0x04 /* Bus Error */
#define TWI_SLAVE_BUSERR_bp 2
#define TWI_SLAVE_DIR_bm 0x02 /* Read/Write Direction */
#define TWI_SLAVE_DIR_bp 1
#define TWI_SLAVE_AP_bm 0x01 /* Slave Address or Stop */
#define TWI_SLAVE_AP_bp 0

/* TWI.CTRL masks */
#define TWI_EDIEN_bm 0x01 /* External Driver Interface Enable */
#define TWI_EDIEN_bp 0


/* Master Interrupt Level */
#define TWI_MASTER_INTLVL_OFF_gc (0x00<<6) /* Interrupt Disabled */
#define TWI_MASTER_INTLVL_LO_gc (0x01<<6) /* Low Level */
#define TWI_MASTER_INTLVL_MED_gc (0x02<<6) /* Medium Level */
#define TWI_MASTER_INTLVL_HI_gc (0x03<<6) /* High Level */

/* Inactive Timeout */
#define TWI_MASTER_TIMEOUT_DISABLED_gc (0x00<<2) /* Bus Timeout Disabled */
#define TWI_MASTER_TIMEOUT_50US_gc (0x01<<2) /* 50 Microseconds */
#define TWI_MASTER_TIMEOUT_100US_gc (0x02<<2) /* 100 Microseconds */
#define TWI_MASTER_TIMEOUT_200US_gc (0x03<<2) /* 200 Microseconds */

/* Master Command */
#define TWI_MASTER_CMD_NOACT_gc (0x00) /* No Action */
#define TWI_MASTER_CMD_REPSTART_gc (0x01) /* Issue Repeated Start Condition */
#define TWI_MASTER_CMD_RECVTRANS_gc (0x02) /* Receive or Transmit Data */
#define TWI_MASTER_CMD_STOP_gc (0x03) /* Issue Stop Condition */

/* Master Bus State */
#define TWI_MASTER_BUSSTATE_UNKNOWN_gc (0x00) /* Unknown Bus State */
#define TWI_MASTER_BUSSTATE_IDLE_gc (0x01) /* Bus is Idle */
#define TWI_MASTER_BUSSTATE_OWNER_gc (0x02) /* This Module Controls The Bus */
#define TWI_MASTER_BUSSTATE_BUSY_gc (0x03) /* The Bus is Busy */

/* Slave Interrupt Level */
#define TWI_SLAVE_INTLVL_OFF_gc (0x00<<6) /* Interrupt Disabled */
#define TWI_SLAVE_INTLVL_LO_gc (0x01<<6) /* Low Level */
#define TWI_SLAVE_INTLVL_MED_gc (0x02<<6) /* Medium Level */
#define TWI_SLAVE_INTLVL_HI_gc (0x03<<6) /* High Level */

/* Slave Command */
#define TWI_SLAVE_CMD_NOACT_gc (0x00) /* No Action */
#define TWI_SLAVE_CMD_COMPTRANS_gc (0x02) /* Used To Complete a Transaction */
#define TWI_SLAVE_CMD_RESPONSE_gc (0x03) /* Used in Response to Address/Data Interrupt */

/* ----------------------------------------------------- */
/* PORT - Port Configuration */
/* ----------------------------------------------------- */

/* PORTCFG.VPCTRLA masks */
#define PORTCFG_VP1MAP_gm 0xF0 /* Virtual Port 1 Mapping */
#define PORTCFG_VP0MAP_gm 0x0F /* Virtual Port 0 Mapping */

/* PORTCFG.VPCTRLB masks */
#define PORTCFG_VP3MAP_gm 0xF0 /* Virtual Port 3 Mapping */
#define PORTCFG_VP2MAP_gm 0x0F /* Virtual Port 2 Mapping */

/* PORTCFG.CLKEVOUT masks */ // corrected 3/8/09 jph
#define PORTCFG_CLKOUT_gm 0x03 /* Clock Output Port */
#define PORTCFG_EVOUT_gm 0x30 /* Event Output Port */

/* VPORT.INTFLAGS masks */
#define VPORT_INT1IF_bm 0x02 /* Port Interrupt 1 Flag */
#define VPORT_INT1IF_bp 1
#define VPORT_INT0IF_bm 0x01 /* Port Interrupt 0 Flag */
#define VPORT_INT0IF_bp 0

/* PORT.INTCTRL masks */
#define PORT_INT1LVL_gm 0x0C /* Port Interrupt 1 Level */
#define PORT_INT0LVL_gm 0x03 /* Port Interrupt 0 Level */

/* PORT.INTFLAGS masks */
#define PORT_INT1IF_bm 0x02 /* Port Interrupt 1 Flag */
#define PORT_INT1IF_bp 1
#define PORT_INT0IF_bm 0x01 /* Port Interrupt 0 Flag */
#define PORT_INT0IF_bp 0

/* PORT.PIN0CTRL masks */
#define PORT_SRLEN_bm 0x80 /* Slew Rate Enable */
#define PORT_SRLEN_bp 7
#define PORT_INVEN_bm 0x40 /* Inverted I/O Enable */
#define PORT_INVEN_bp 6
#define PORT_OPC_gm 0x38 /* Output/Pull Configuration */
#define PORT_ISC_gm 0x07 /* Input/Sense Configuration */


/* Virtual Port 0 Mapping */
#define PORTCFG_VP0MAP_PORTA_gc (0x00) /* Mapped To PORTA */
#define PORTCFG_VP0MAP_PORTB_gc (0x01) /* Mapped To PORTB */
#define PORTCFG_VP0MAP_PORTC_gc (0x02) /* Mapped To PORTC */
#define PORTCFG_VP0MAP_PORTD_gc (0x03) /* Mapped To PORTD */
#define PORTCFG_VP0MAP_PORTE_gc (0x04) /* Mapped To PORTE */
#define PORTCFG_VP0MAP_PORTF_gc (0x05) /* Mapped To PORTF */
#define PORTCFG_VP0MAP_PORTG_gc (0x06) /* Mapped To PORTG */
#define PORTCFG_VP0MAP_PORTH_gc (0x07) /* Mapped To PORTH */
#define PORTCFG_VP0MAP_PORTJ_gc (0x08) /* Mapped To PORTJ */
#define PORTCFG_VP0MAP_PORTK_gc (0x09) /* Mapped To PORTK */
#define PORTCFG_VP0MAP_PORTL_gc (0x0A) /* Mapped To PORTL */
#define PORTCFG_VP0MAP_PORTM_gc (0x0B) /* Mapped To PORTM */
#define PORTCFG_VP0MAP_PORTN_gc (0x0C) /* Mapped To PORTN */
#define PORTCFG_VP0MAP_PORTP_gc (0x0D) /* Mapped To PORTP */
#define PORTCFG_VP0MAP_PORTQ_gc (0x0E) /* Mapped To PORTQ */
#define PORTCFG_VP0MAP_PORTR_gc (0x0F) /* Mapped To PORTR */

/* Virtual Port 1 Mapping */
#define PORTCFG_VP1MAP_PORTA_gc (0x00<<4) /* Mapped To PORTA */
#define PORTCFG_VP1MAP_PORTB_gc (0x01<<4) /* Mapped To PORTB */
#define PORTCFG_VP1MAP_PORTC_gc (0x02<<4) /* Mapped To PORTC */
#define PORTCFG_VP1MAP_PORTD_gc (0x03<<4) /* Mapped To PORTD */
#define PORTCFG_VP1MAP_PORTE_gc (0x04<<4) /* Mapped To PORTE */
#define PORTCFG_VP1MAP_PORTF_gc (0x05<<4) /* Mapped To PORTF */
#define PORTCFG_VP1MAP_PORTG_gc (0x06<<4) /* Mapped To PORTG */
#define PORTCFG_VP1MAP_PORTH_gc (0x07<<4) /* Mapped To PORTH */
#define PORTCFG_VP1MAP_PORTJ_gc (0x08<<4) /* Mapped To PORTJ */
#define PORTCFG_VP1MAP_PORTK_gc (0x09<<4) /* Mapped To PORTK */
#define PORTCFG_VP1MAP_PORTL_gc (0x0A<<4) /* Mapped To PORTL */
#define PORTCFG_VP1MAP_PORTM_gc (0x0B<<4) /* Mapped To PORTM */
#define PORTCFG_VP1MAP_PORTN_gc (0x0C<<4) /* Mapped To PORTN */
#define PORTCFG_VP1MAP_PORTP_gc (0x0D<<4) /* Mapped To PORTP */
#define PORTCFG_VP1MAP_PORTQ_gc (0x0E<<4) /* Mapped To PORTQ */
#define PORTCFG_VP1MAP_PORTR_gc (0x0F<<4) /* Mapped To PORTR */

/* Virtual Port 2 Mapping */
#define PORTCFG_VP2MAP_PORTA_gc (0x00) /* Mapped To PORTA */
#define PORTCFG_VP2MAP_PORTB_gc (0x01) /* Mapped To PORTB */
#define PORTCFG_VP2MAP_PORTC_gc (0x02) /* Mapped To PORTC */
#define PORTCFG_VP2MAP_PORTD_gc (0x03) /* Mapped To PORTD */
#define PORTCFG_VP2MAP_PORTE_gc (0x04) /* Mapped To PORTE */
#define PORTCFG_VP2MAP_PORTF_gc (0x05) /* Mapped To PORTF */
#define PORTCFG_VP2MAP_PORTG_gc (0x06) /* Mapped To PORTG */
#define PORTCFG_VP2MAP_PORTH_gc (0x07) /* Mapped To PORTH */
#define PORTCFG_VP2MAP_PORTJ_gc (0x08) /* Mapped To PORTJ */
#define PORTCFG_VP2MAP_PORTK_gc (0x09) /* Mapped To PORTK */
#define PORTCFG_VP2MAP_PORTL_gc (0x0A) /* Mapped To PORTL */
#define PORTCFG_VP2MAP_PORTM_gc (0x0B) /* Mapped To PORTM */
#define PORTCFG_VP2MAP_PORTN_gc (0x0C) /* Mapped To PORTN */
#define PORTCFG_VP2MAP_PORTP_gc (0x0D) /* Mapped To PORTP */
#define PORTCFG_VP2MAP_PORTQ_gc (0x0E) /* Mapped To PORTQ */
#define PORTCFG_VP2MAP_PORTR_gc (0x0F) /* Mapped To PORTR */

/* Virtual Port 3 Mapping */
#define PORTCFG_VP3MAP_PORTA_gc (0x00<<4) /* Mapped To PORTA */
#define PORTCFG_VP3MAP_PORTB_gc (0x01<<4) /* Mapped To PORTB */
#define PORTCFG_VP3MAP_PORTC_gc (0x02<<4) /* Mapped To PORTC */
#define PORTCFG_VP3MAP_PORTD_gc (0x03<<4) /* Mapped To PORTD */
#define PORTCFG_VP3MAP_PORTE_gc (0x04<<4) /* Mapped To PORTE */
#define PORTCFG_VP3MAP_PORTF_gc (0x05<<4) /* Mapped To PORTF */
#define PORTCFG_VP3MAP_PORTG_gc (0x06<<4) /* Mapped To PORTG */
#define PORTCFG_VP3MAP_PORTH_gc (0x07<<4) /* Mapped To PORTH */
#define PORTCFG_VP3MAP_PORTJ_gc (0x08<<4) /* Mapped To PORTJ */
#define PORTCFG_VP3MAP_PORTK_gc (0x09<<4) /* Mapped To PORTK */
#define PORTCFG_VP3MAP_PORTL_gc (0x0A<<4) /* Mapped To PORTL */
#define PORTCFG_VP3MAP_PORTM_gc (0x0B<<4) /* Mapped To PORTM */
#define PORTCFG_VP3MAP_PORTN_gc (0x0C<<4) /* Mapped To PORTN */
#define PORTCFG_VP3MAP_PORTP_gc (0x0D<<4) /* Mapped To PORTP */
#define PORTCFG_VP3MAP_PORTQ_gc (0x0E<<4) /* Mapped To PORTQ */
#define PORTCFG_VP3MAP_PORTR_gc (0x0F<<4) /* Mapped To PORTR */

/* Clock Output Port */ // corrected 3/8/09 jph
#define PORTCFG_CLKOUT_OFF_gc (0x00) /* Clock Output Disabled */
#define PORTCFG_CLKOUT_PC7_gc (0x01) /* Clock Channel 7 Output on Port C pin 7 */
#define PORTCFG_CLKOUT_PD7_gc (0x02) /* Clock Channel 7 Output on Port D pin 7 */
#define PORTCFG_CLKOUT_PE7_gc (0x03) /* Clock Channel 7 Output on Port E pin 7 */

/* Event Output Port */ // corrected 3/8/09 jph
#define PORTCFG_EVOUT_OFF_gc (0x00<<4) /* Event Output Disabled */
#define PORTCFG_EVOUT_PC7_gc (0x01<<4) /* Event Output on Port C pin 7 */
#define PORTCFG_EVOUT_PD7_gc (0x02<<4) /* Event Output on Port D pin 7 */
#define PORTCFG_EVOUT_PE7_gc (0x03<<4) /* Event Output on Port E pin 7 */

/* Port Interrupt 0 Level */
#define PORT_INT0LVL_OFF_gc (0x00) /* Interrupt Disabled */
#define PORT_INT0LVL_LO_gc (0x01) /* Low Level */
#define PORT_INT0LVL_MED_gc (0x02) /* Medium Level */
#define PORT_INT0LVL_HI_gc (0x03) /* High Level */

/* Port Interrupt 1 Level */
#define PORT_INT1LVL_OFF_gc (0x00<<2) /* Interrupt Disabled */
#define PORT_INT1LVL_LO_gc (0x01<<2) /* Low Level */
#define PORT_INT1LVL_MED_gc (0x02<<2) /* Medium Level */
#define PORT_INT1LVL_HI_gc (0x03<<2) /* High Level */

/* Output/Pull Configuration */
#define PORT_OPC_TOTEM_gc (0x00<<3) /* Totempole */
#define PORT_OPC_BUSKEEPER_gc (0x01<<3) /* Totempole w/ Bus keeper on Input and Output */
#define PORT_OPC_PULLDOWN_gc (0x02<<3) /* Totempole w/ Pull-down on Input */
#define PORT_OPC_PULLUP_gc (0x03<<3) /* Totempole w/ Pull-up on Input */
#define PORT_OPC_WIREDOR_gc (0x04<<3) /* Wired OR */
#define PORT_OPC_WIREDAND_gc (0x05<<3) /* Wired AND */
#define PORT_OPC_WIREDORPULL_gc (0x06<<3) /* Wired OR w/ Pull-down */
#define PORT_OPC_WIREDANDPULL_gc (0x07<<3) /* Wired AND w/ Pull-up */

/* Input/Sense Configuration */
#define PORT_ISC_BOTHEDGES_gc (0x00) /* Sense Both Edges */
#define PORT_ISC_RISING_gc (0x01) /* Sense Rising Edge */
#define PORT_ISC_FALLING_gc (0x02) /* Sense Falling Edge */
#define PORT_ISC_LEVEL_gc (0x03) /* Sense Level (Transparent For Events) */
#define PORT_ISC_INPUT_DISABLE_gc (0x07) /* Disable Digital Input Buffer */

/* ----------------------------------------------------- */
/* TC - 16-bit Timer/Counter With PWM */
/* ----------------------------------------------------- */

/* TC0.CTRLA masks */
#define TC0_CLKSEL_gm 0x0F /* Clock Selection */

/* TC0.CTRLB masks */
#define TC0_CCDEN_bm 0x80 /* Compare or Capture D Enable */
#define TC0_CCDEN_bp 7
#define TC0_CCCEN_bm 0x40 /* Compare or Capture C Enable */
#define TC0_CCCEN_bp 6
#define TC0_CCBEN_bm 0x20 /* Compare or Capture B Enable */
#define TC0_CCBEN_bp 5
#define TC0_CCAEN_bm 0x10 /* Compare or Capture A Enable */
#define TC0_CCAEN_bp 4
#define TC0_WGMODE_gm 0x07 /* Waveform generation mode */

/* TC0.CTRLC masks */
#define TC0_CMPD_bm 0x08 /* Compare D Output Value */
#define TC0_CMPD_bp 3
#define TC0_CMPC_bm 0x04 /* Compare C Output Value */
#define TC0_CMPC_bp 2
#define TC0_CMPB_bm 0x02 /* Compare B Output Value */
#define TC0_CMPB_bp 1
#define TC0_CMPA_bm 0x01 /* Compare A Output Value */
#define TC0_CMPA_bp 0

/* TC0.CTRLD masks */
#define TC0_EVACT_gm 0xE0 /* Event Action */
#define TC0_EVDLY_bm 0x10 /* Event Delay */
#define TC0_EVDLY_bp 4
#define TC0_EVSEL_gm 0x0F /* Event Source Select */

/* TC0.CTRLE masks */
#define TC0_DTHM_bm 0x02 /* Dead Time Hold Mode */
#define TC0_DTHM_bp 1
#define TC0_BYTEM_bm 0x01 /* Byte Mode */
#define TC0_BYTEM_bp 0

/* TC0.INTCTRLA masks */
#define TC0_ERRINTLVL_gm 0x0C /* Error Interrupt Level */
#define TC0_OVFINTLVL_gm 0x03 /* Overflow interrupt level */

/* TC0.INTCTRLB masks */
#define TC0_CCDINTLVL_gm 0xC0 /* Compare or Capture D Interrupt Level */
#define TC0_CCCINTLVL_gm 0x30 /* Compare or Capture C Interrupt Level */
#define TC0_CCBINTLVL_gm 0x0C /* Compare or Capture B Interrupt Level */
#define TC0_CCAINTLVL_gm 0x03 /* Compare or Capture A Interrupt Level */

/* TC0.CTRLFCLR masks */
#define TC0_CMD_gm 0x0C /* Command */
#define TC0_LUPD_bm 0x02 /* Lock Update */
#define TC0_LUPD_bp 1
#define TC0_DIR_bm 0x01 /* Direction */
#define TC0_DIR_bp 0

/* TC0.CTRLGCLR masks */
#define TC0_CCDBV_bm 0x10 /* Compare or Capture D Buffer Valid */
#define TC0_CCDBV_bp 4
#define TC0_CCCBV_bm 0x08 /* Compare or Capture C Buffer Valid */
#define TC0_CCCBV_bp 3
#define TC0_CCBBV_bm 0x04 /* Compare or Capture B Buffer Valid */
#define TC0_CCBBV_bp 2
#define TC0_CCABV_bm 0x02 /* Compare or Capture A Buffer Valid */
#define TC0_CCABV_bp 1
#define TC0_PERBV_bm 0x01 /* Period Buffer Valid */
#define TC0_PERBV_bp 0

/* TC0.CTRLGSET masks */
/* Masks already defined */

/* TC0.INTFLAGS masks */
#define TC0_CCDIF_bm 0x80 /* Compare or Capture D Interrupt Flag */
#define TC0_CCDIF_bp 7
#define TC0_CCCIF_bm 0x40 /* Compare or Capture C Interrupt Flag */
#define TC0_CCCIF_bp 6
#define TC0_CCBIF_bm 0x20 /* Compare or Capture B Interrupt Flag */
#define TC0_CCBIF_bp 5
#define TC0_CCAIF_bm 0x10 /* Compare or Capture A Interrupt Flag */
#define TC0_CCAIF_bp 4
#define TC0_ERRIF_bm 0x02 /* Error Interrupt Flag */
#define TC0_ERRIF_bp 1
#define TC0_OVFIF_bm 0x01 /* Overflow Interrupt Flag */
#define TC0_OVFIF_bp 0

/* TC1.CTRLA masks */
#define TC1_CLKSEL_gm 0x0F /* Clock Selection */

/* TC1.CTRLB masks */
#define TC1_CCBEN_bm 0x20 /* Compare or Capture B Enable */
#define TC1_CCBEN_bp 5
#define TC1_CCAEN_bm 0x10 /* Compare or Capture A Enable */
#define TC1_CCAEN_bp 4
#define TC1_WGMODE_gm 0x07 /* Waveform generation mode */

/* TC1.CTRLC masks */
#define TC1_CMPB_bm 0x02 /* Compare B Output Value */
#define TC1_CMPB_bp 1
#define TC1_CMPA_bm 0x01 /* Compare A Output Value */
#define TC1_CMPA_bp 0

/* TC1.CTRLD masks */
#define TC1_EVACT_gm 0xE0 /* Event Action */
#define TC1_EVDLY_bm 0x10 /* Event Delay */
#define TC1_EVDLY_bp 4
#define TC1_EVSEL_gm 0x0F /* Event Source Select */

/* TC1.CTRLE masks */
#define TC1_DTHM_bm 0x02 /* Dead Time Hold Mode */
#define TC1_DTHM_bp 1
#define TC1_BYTEM_bm 0x01 /* Byte Mode */
#define TC1_BYTEM_bp 0

/* TC1.INTCTRLA masks */
#define TC1_ERRINTLVL_gm 0x0C /* Error Interrupt Level */
#define TC1_OVFINTLVL_gm 0x03 /* Overflow interrupt level */

/* TC1.INTCTRLB masks */
#define TC1_CCBINTLVL_gm 0x0C /* Compare or Capture B Interrupt Level */
#define TC1_CCAINTLVL_gm 0x03 /* Compare or Capture A Interrupt Level */

/* TC1.CTRLFCLR masks */
#define TC1_CMD_gm 0x0C /* Command */
#define TC1_LUPD_bm 0x02 /* Lock Update */
#define TC1_LUPD_bp 1
#define TC1_DIR_bm 0x01 /* Direction */
#define TC1_DIR_bp 0

/* TC1.CTRLFSET masks */
/* Masks already defined */

/* TC1.CTRLGCLR masks */
#define TC1_CCBBV_bm 0x04 /* Compare or Capture B Buffer Valid */
#define TC1_CCBBV_bp 2
#define TC1_CCABV_bm 0x02 /* Compare or Capture A Buffer Valid */
#define TC1_CCABV_bp 1
#define TC1_PERBV_bm 0x01 /* Period Buffer Valid */
#define TC1_PERBV_bp 0

/* TC1.INTFLAGS masks */
#define TC1_CCBIF_bm 0x20 /* Compare or Capture B Interrupt Flag */
#define TC1_CCBIF_bp 5
#define TC1_CCAIF_bm 0x10 /* Compare or Capture A Interrupt Flag */
#define TC1_CCAIF_bp 4
#define TC1_ERRIF_bm 0x02 /* Error Interrupt Flag */
#define TC1_ERRIF_bp 1
#define TC1_OVFIF_bm 0x01 /* Overflow Interrupt Flag */
#define TC1_OVFIF_bp 0

/* AWEX.CTRL masks */
#define AWEX_FDACT_gm 0xC0 /* Fault Detect Action */
#define AWEX_PGM_bm 0x20 /* Pattern Generation Mode */
#define AWEX_PGM_bp 5
#define AWEX_CWCM_bm 0x10 /* Common Waveform Channel Mode */
#define AWEX_CWCM_bp 4
#define AWEX_DTICCDEN_bm 0x08 /* Dead Time Insertion Compare D Enable */
#define AWEX_DTICCDEN_bp 3
#define AWEX_DTICCCEN_bm 0x04 /* Dead Time Insertion Compare C Enable */
#define AWEX_DTICCCEN_bp 2
#define AWEX_DTICCBEN_bm 0x02 /* Dead Time Insertion Compare B Enable */
#define AWEX_DTICCBEN_bp 1
#define AWEX_DTICCAEN_bm 0x01 /* Dead Time Insertion Compare A Enable */
#define AWEX_DTICCAEN_bp 0

/* AWEX.STATUS masks */
#define AWEX_FDF_bm 0x04 /* Fault Detect Flag */
#define AWEX_FDF_bp 2
#define AWEX_DTHSBUFV_bm 0x02 /* Dead Time High Side Buffer Valid */
#define AWEX_DTHSBUFV_bp 1
#define AWEX_DTLSBUFV_bm 0x01 /* Dead Time Low Side Buffer Valid */
#define AWEX_DTLSBUFV_bp 0

/* HIRES.CTRL masks */
#define HIRES_HREN_gm 0x03 /* High Resolution Enable */


/* Clock Selection */
#define TC_CLKSEL_OFF_gc (0x00) /* Timer Off */
#define TC_CLKSEL_DIV1_gc (0x01) /* System Clock */
#define TC_CLKSEL_DIV2_gc (0x02) /* System Clock / 2 */
#define TC_CLKSEL_DIV4_gc (0x03) /* System Clock / 4 */
#define TC_CLKSEL_DIV8_gc (0x04) /* System Clock / 8 */
#define TC_CLKSEL_DIV64_gc (0x05) /* System Clock / 64 */
#define TC_CLKSEL_DIV256_gc (0x06) /* System Clock / 256 */
#define TC_CLKSEL_DIV1024_gc (0x07) /* System Clock / 1024 */
#define TC_CLKSEL_EVCH0_gc (0x08) /* Event Channel 0 */
#define TC_CLKSEL_EVCH1_gc (0x09) /* Event Channel 1 */
#define TC_CLKSEL_EVCH2_gc (0x0A) /* Event Channel 2 */
#define TC_CLKSEL_EVCH3_gc (0x0B) /* Event Channel 3 */
#define TC_CLKSEL_EVCH4_gc (0x0C) /* Event Channel 4 */
#define TC_CLKSEL_EVCH5_gc (0x0D) /* Event Channel 5 */
#define TC_CLKSEL_EVCH6_gc (0x0E) /* Event Channel 6 */
#define TC_CLKSEL_EVCH7_gc (0x0F) /* Event Channel 7 */

/* Waveform Generation Mode */
#define TC_WGMODE_NORMAL_gc (0x00) /* Normal Mode */
#define TC_WGMODE_FRQ_gc (0x01) /* Frequency Generation Mode */
#define TC_WGMODE_SS_gc (0x03) /* Single Slope */
#define TC_WGMODE_DS_T_gc (0x05) /* Dual Slope, Update on TOP */
#define TC_WGMODE_DS_TB_gc (0x06) /* Dual Slope, Update on TOP and BOTTOM */
#define TC_WGMODE_DS_B_gc (0x07) /* Dual Slope, Update on BOTTOM */

/* Event Action */
#define TC_EVACT_OFF_gc (0x00<<5) /* No Event Action */
#define TC_EVACT_CAPT_gc (0x01<<5) /* Input Capture */
#define TC_EVACT_UPDOWN_gc (0x02<<5) /* Externally Controlled Up/Down Count */
#define TC_EVACT_QDEC_gc (0x03<<5) /* Quadrature Decode */
#define TC_EVACT_RESTART_gc (0x04<<5) /* Restart warefirn period */
#define TC_EVACT_FRQ_gc (0x05<<5) /* Frequency Capture */
#define TC_EVACT_PW_gc (0x06<<5) /* Pulse Width Capture */

/* Event Selection */
#define TC_EVSEL_OFF_gc (0x00) /* No Event Source */
#define TC_EVSEL_CH0_gc (0x08) /* Event Channel 0 */
#define TC_EVSEL_CH1_gc (0x09) /* Event Channel 1 */
#define TC_EVSEL_CH2_gc (0x0A) /* Event Channel 2 */
#define TC_EVSEL_CH3_gc (0x0B) /* Event Channel 3 */
#define TC_EVSEL_CH4_gc (0x0C) /* Event Channel 4 */
#define TC_EVSEL_CH5_gc (0x0D) /* Event Channel 5 */
#define TC_EVSEL_CH6_gc (0x0E) /* Event Channel 6 */
#define TC_EVSEL_CH7_gc (0x0F) /* Event Channel 7 */

/* Error Interrupt Level */
#define TC_ERRINTLVL_OFF_gc (0x00<<2) /* Interrupt Disabled */
#define TC_ERRINTLVL_LO_gc (0x01<<2) /* Low Level */
#define TC_ERRINTLVL_MED_gc (0x02<<2) /* Medium Level */
#define TC_ERRINTLVL_HI_gc (0x03<<2) /* High Level */

/* Overflow Interrupt Level */
#define TC_OVFINTLVL_OFF_gc (0x00) /* Interrupt Disabled */
#define TC_OVFINTLVL_LO_gc (0x01) /* Low Level */
#define TC_OVFINTLVL_MED_gc (0x02) /* Medium Level */
#define TC_OVFINTLVL_HI_gc (0x03) /* High Level */

/* Compare or Capture D Interrupt Level */
#define TC_CCDINTLVL_OFF_gc (0x00<<6) /* Interrupt Disabled */
#define TC_CCDINTLVL_LO_gc (0x01<<6) /* Low Level */
#define TC_CCDINTLVL_MED_gc (0x02<<6) /* Medium Level */
#define TC_CCDINTLVL_HI_gc (0x03<<6) /* High Level */

/* Compare or Capture C Interrupt Level */
#define TC_CCCINTLVL_OFF_gc (0x00<<4) /* Interrupt Disabled */
#define TC_CCCINTLVL_LO_gc (0x01<<4) /* Low Level */
#define TC_CCCINTLVL_MED_gc (0x02<<4) /* Medium Level */
#define TC_CCCINTLVL_HI_gc (0x03<<4) /* High Level */

/* Compare or Capture B Interrupt Level */
#define TC_CCBINTLVL_OFF_gc (0x00<<2) /* Interrupt Disabled */
#define TC_CCBINTLVL_LO_gc (0x01<<2) /* Low Level */
#define TC_CCBINTLVL_MED_gc (0x02<<2) /* Medium Level */
#define TC_CCBINTLVL_HI_gc (0x03<<2) /* High Level */

/* Compare or Capture A Interrupt Level */
#define TC_CCAINTLVL_OFF_gc (0x00) /* Interrupt Disabled */
#define TC_CCAINTLVL_LO_gc (0x01) /* Low Level */
#define TC_CCAINTLVL_MED_gc (0x02) /* Medium Level */
#define TC_CCAINTLVL_HI_gc (0x03) /* High Level */

/* Timer/Counter Command */
#define TC_CMD_NONE_gc (0x00<<2) /* No Command */
#define TC_CMD_UPDATE_gc (0x01<<2) /* Force Update */
#define TC_CMD_RESTART_gc (0x02<<2) /* Force Restart */
#define TC_CMD_RESET_gc (0x03<<2) /* Force Hard Reset */

/* Fault Detect Action */
#define AWEX_FDACT_NONE_gc (0x00<<6) /* No Fault Protection */
#define AWEX_FDACT_CLEAROE_gc (0x01<<6) /* Clear Output Enable Bits */
#define AWEX_FDACT_CLEARDIR_gc (0x03<<6) /* Clear I/O Port Direction Bits */

/* High Resolution Enable */
#define HIRES_HREN_NONE_gc (0x00) /* Disable High Resolution */
#define HIRES_HREN_TC0_gc (0x01) /* Enable High Resolution on Timer/Counter 0 */
#define HIRES_HREN_TC1_gc (0x02) /* Enable High Resolution on Timer/Counter 1 */
#define HIRES_HREN_BOTH_gc (0x03) /* Enable High Resolution both Timer/Counters */

/* ----------------------------------------------------- */
/* USART - Universal Asynchronous Receiver-Transmitter */
/* ----------------------------------------------------- */

/* USART.STATUS masks */
#define USART_RXCIF_bm 0x80 /* Receive Interrupt Flag */
#define USART_RXCIF_bp 7
#define USART_TXCIF_bm 0x40 /* Transmit Interrupt Flag */
#define USART_TXCIF_bp 6
#define USART_DREIF_bm 0x20 /* Data Register Empty Flag */
#define USART_DREIF_bp 5
#define USART_FERR_bm 0x10 /* Frame Error */
#define USART_FERR_bp 4
#define USART_BUFOVF_bm 0x08 /* Buffer Overflow */
#define USART_BUFOVF_bp 3
#define USART_PERR_bm 0x04 /* Parity Error */
#define USART_PERR_bp 2
#define USART_RXB8_bm 0x01 /* Receive Bit 8 */
#define USART_RXB8_bp 0

/* USART.CTRLA masks */
#define USART_RXCINTLVL_gm 0x30 /* Receive Interrupt Level */
#define USART_TXCINTLVL_gm 0x0C /* Transmit Interrupt Level */
#define USART_DREINTLVL_gm 0x03 /* Data Register Empty Interrupt Level */

/* USART.CTRLB masks */
#define USART_RXEN_bm 0x10 /* Receiver Enable */
#define USART_RXEN_bp 4
#define USART_TXEN_bm 0x08 /* Transmitter Enable */
#define USART_TXEN_bp 3
#define USART_CLK2X_bm 0x04 /* Double transmission speed */
#define USART_CLK2X_bp 2
#define USART_MPCM_bm 0x02 /* Multi-processor Communication Mode */
#define USART_MPCM_bp 1
#define USART_TXB8_bm 0x01 /* Transmit bit 8 */
#define USART_TXB8_bp 0

/* USART.CTRLC masks */
#define USART_CMODE_gm 0xC0 /* Communication Mode */
#define USART_PMODE_gm 0x30 /* Parity Mode */
#define USART_SBMODE_bm 0x08 /* Stop Bit Mode */
#define USART_SBMODE_bp 3
#define USART_CHSIZE_gm 0x07 /* Character Size */

/* USART.BAUDCTRLA masks */
#define USART_BSEL_gm 0xFF /* Baud Rate Selection Bits [7:0] */
/* USART.BAUDCTRLB masks */
#define USART_BSCALE_gm 0xF0 /* Baud Rate Scale */


/* Receive Complete Interrupt level */
#define USART_RXCINTLVL_OFF_gc (0x00<<4) /* Interrupt Disabled */
#define USART_RXCINTLVL_LO_gc (0x01<<4) /* Low Level */
#define USART_RXCINTLVL_MED_gc (0x02<<4) /* Medium Level */
#define USART_RXCINTLVL_HI_gc (0x03<<4) /* High Level Transmit Complete Interrupt level */
#define USART_TXCINTLVL_OFF_gc (0x00<<2) /* Interrupt Disabled */
#define USART_TXCINTLVL_LO_gc (0x01<<2) /* Low Level */
#define USART_TXCINTLVL_MED_gc (0x02<<2) /* Medium Level */
#define USART_TXCINTLVL_HI_gc (0x03<<2) /* High Level */

/* Data Register Empty Interrupt level */
#define USART_DREINTLVL_OFF_gc (0x00) /* Interrupt Disabled */
#define USART_DREINTLVL_LO_gc (0x01) /* Low Level */
#define USART_DREINTLVL_MED_gc (0x02) /* Medium Level */
#define USART_DREINTLVL_HI_gc (0x03) /* High Level */

/* Character Size */
#define USART_CHSIZE_5BIT_gc (0x00) /* Character size: 5 bit */
#define USART_CHSIZE_6BIT_gc (0x01) /* Character size: 6 bit */
#define USART_CHSIZE_7BIT_gc (0x02) /* Character size: 7 bit */
#define USART_CHSIZE_8BIT_gc (0x03) /* Character size: 8 bit */
#define USART_CHSIZE_9BIT_gc (0x07) /* Character size: 9 bit */

/* Communication Mode */
#define USART_CMODE_ASYNCHRONOUS_gc (0x00<<6) /* Asynchronous Mode */
#define USART_CMODE_SYNCHRONOUS_gc (0x01<<6) /* Synchronous Mode */
#define USART_CMODE_MSPI_gc (0x03<<6) /* Master SPI Mode */

/* Parity Mode */
#define USART_PMODE_DISABLED_gc (0x00) /* No Parity */
#define USART_PMODE_EVEN_gc (0x02) /* Even Parity */
#define USART_PMODE_ODD_gc (0x03) /* Odd Parity */

/* ----------------------------------------------------- */
/* SPI - Serial Periph */
/* ----------------------------------------------------- */

/* SPI.CTRL masks */
#define SPI_CLK2X_bm 0x80 /* Enable Double Speed */
#define SPI_CLK2X_bp 7
#define SPI_ENABLE_bm 0x40 /* Enable Module */
#define SPI_ENABLE_bp 6
#define SPI_DORD_bm 0x20 /* Data Order Setting */
#define SPI_DORD_bp 5
#define SPI_MASTER_bm 0x10 /* Master Operation Enable */
#define SPI_MASTER_bp 4
#define SPI_MODE_gm 0x0C /* SPI Mode */
#define SPI_PRESCALER_gm 0x03 /* Prescaler */

/* SPI.INTCTRL masks */
#define SPI_INTLVL_gm 0x03 /* Interrupt level */

/* SPI.STATUS masks */
#define SPI_IF_bm 0x80 /* Interrupt Flag */
#define SPI_IF_bp 7
#define SPI_WRCOL_bm 0x40 /* Write Collision */
#define SPI_WRCOL_bp 6


/* SPI Mode */
#define SPI_MODE_0_gc (0x00<<2) /* SPI Mode 0 */
#define SPI_MODE_1_gc (0x01<<2) /* SPI Mode 1 */
#define SPI_MODE_2_gc (0x02<<2) /* SPI Mode 2 */
#define SPI_MODE_3_gc (0x03<<2) /* SPI Mode 3 */

/* Prescaler setting */
#define SPI_PRESCALER_DIV4_gc (0x00) /* System Clock / 4 */
#define SPI_PRESCALER_DIV16_gc (0x01) /* System Clock / 16 */
#define SPI_PRESCALER_DIV64_gc (0x02) /* System Clock / 64 */
#define SPI_PRESCALER_DIV128_gc (0x03) /* System Clock / 128 */

/* Interrupt level */
#define SPI_INTLVL_OFF_gc (0x00) /* Interrupt Disabled */
#define SPI_INTLVL_LO_gc (0x01) /* Low Level */
#define SPI_INTLVL_MED_gc (0x02) /* Medium Level */
#define SPI_INTLVL_HI_gc (0x03) /* High Level */

/* ----------------------------------------------------- */

/*ja*/
#endif
/*<eof>*/
