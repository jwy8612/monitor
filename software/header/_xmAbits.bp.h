/* icc7avr io header file "_xmAbits.bp.h"
   generated on 04-16-2009 by maschpp 0.1.7 */
/*------------------------------------------------------------*/
// #define CLK_LOCK_bm 0x01 /* Clock System Lock */
#define CLK_LOCK_bp 0
// #define CLK_RTCEN_bm 0x01 /* RTC Clock Source Enable */
#define CLK_RTCEN_bp 0
// #define PR_EBI_bm 0x08 /* External Bus Interface */
#define PR_EBI_bp 3
// #define PR_RTC_bm 0x04 /* Real-time Counter */
#define PR_RTC_bp 2
// #define PR_EVSYS_bm 0x02 /* Event System */
#define PR_EVSYS_bp 1
// #define PR_DMA_bm 0x01 /* DMA-Controller */
#define PR_DMA_bp 0
// #define PR_DAC_bm 0x04 /* Port A DAC */
#define PR_DAC_bp 2
// #define PR_ADC_bm 0x02 /* Port A ADC */
#define PR_ADC_bp 1
// #define PR_AC_bm 0x01 /* Port A Analog Comparator */
#define PR_AC_bp 0
// #define PR_TWI_bm 0x40 /* Port C Two-wire Interface */
#define PR_TWI_bp 6
// #define PR_USART1_bm 0x20 /* Port C USART1 */
#define PR_USART1_bp 5
// #define PR_USART0_bm 0x10 /* Port C USART0 */
#define PR_USART0_bp 4
// #define PR_SPI_bm 0x08 /* Port C SPI */
#define PR_SPI_bp 3
// #define PR_HIRES_bm 0x04 /* Port C AWEX */
#define PR_HIRES_bp 2
// #define PR_TC1_bm 0x02 /* Port C Timer/Counter1 */
#define PR_TC1_bp 1
// #define PR_TC0_bm 0x01 /* Port C Timer/Counter0 */
#define PR_TC0_bp 0
// #define SLEEP_SEN_bm 0x01 /* Sleep Enable */
#define SLEEP_SEN_bp 0
// #define OSC_PLLEN_bm 0x10 /* PLL Enable */
#define OSC_PLLEN_bp 4
// #define OSC_XOSCEN_bm 0x08 /* External Oscillator Enable */
#define OSC_XOSCEN_bp 3
// #define OSC_RC32KEN_bm 0x04 /* Internal 32kHz RC Oscillator Enable */
#define OSC_RC32KEN_bp 2
// #define OSC_RC32MEN_bm 0x02 /* Internal 32MHz RC Oscillator Enable */
#define OSC_RC32MEN_bp 1
// #define OSC_RC2MEN_bm 0x01 /* Internal 2MHz RC Oscillator Enable */
#define OSC_RC2MEN_bp 0
// #define OSC_PLLRDY_bm 0x10 /* PLL Ready */
#define OSC_PLLRDY_bp 4
// #define OSC_XOSCRDY_bm 0x08 /* External Oscillator Ready */
#define OSC_XOSCRDY_bp 3
// #define OSC_RC32KRDY_bm 0x04 /* Internal 32kHz RC Oscillator Ready */
#define OSC_RC32KRDY_bp 2
// #define OSC_RC32MRDY_bm 0x02 /* Internal 32MHz RC Oscillator Ready */
#define OSC_RC32MRDY_bp 1
// #define OSC_RC2MRDY_bm 0x01 /* Internal 2MHz RC Oscillator Ready */
#define OSC_RC2MRDY_bp 0
// #define OSC_X32KLPM_bm 0x20 /* 32kHz XTAL OSC Low-power Mode */
#define OSC_X32KLPM_bp 5
// #define OSC_XOSCFDIF_bm 0x02 /* Failure Detection Interrupt Flag */
#define OSC_XOSCFDIF_bp 1
// #define OSC_XOSCFDEN_bm 0x01 /* Failure Detection Enable */
#define OSC_XOSCFDEN_bp 0
// #define OSC_RC32MCREF_bm 0x02 /* 32MHz Calibration Reference */
#define OSC_RC32MCREF_bp 1
// #define OSC_RC2MCREF_bm 0x01 /* 2MHz Calibration Reference */
#define OSC_RC2MCREF_bp 0
// #define DFLL_ENABLE_bm 0x01 /* DFLL Enable */
#define DFLL_ENABLE_bp 0
// #define RST_SDRF_bm 0x40 /* Spike Detection Reset Flag */
#define RST_SDRF_bp 6
// #define RST_SRF_bm 0x20 /* Software Reset Flag */
#define RST_SRF_bp 5
// #define RST_PDIRF_bm 0x10 /* Programming and Debug Interface Interface Reset Flag */
#define RST_PDIRF_bp 4
// #define RST_WDRF_bm 0x08 /* Watchdog Reset Flag */
#define RST_WDRF_bp 3
// #define RST_BORF_bm 0x04 /* Brown-out Reset Flag */
#define RST_BORF_bp 2
// #define RST_EXTRF_bm 0x02 /* External Reset Flag */
#define RST_EXTRF_bp 1
// #define RST_PORF_bm 0x01 /* Power-on Reset Flag */
#define RST_PORF_bp 0
// #define RST_SWRST_bm 0x01 /* Software Reset */
#define RST_SWRST_bp 0
// #define WDT_ENABLE_bm 0x02 /* Enable */
#define WDT_ENABLE_bp 1
// #define WDT_CEN_bm 0x01 /* Change Enable */
#define WDT_CEN_bp 0
// #define WDT_WEN_bm 0x02 /* Windowed Mode Enable */
#define WDT_WEN_bp 1
// #define WDT_WCEN_bm 0x01 /* Windowed Mode Change Enable */
#define WDT_WCEN_bp 0
// #define WDT_SYNCBUSY_bm 0x01 /* Syncronization busy */
#define WDT_SYNCBUSY_bp 0
// #define PMIC_NMIEX_bm 0x80 /* Non-maskable Interrupt Executing */
#define PMIC_NMIEX_bp 7
// #define PMIC_HILVLEX_bm 0x04 /* High Level Interrupt Executing */
#define PMIC_HILVLEX_bp 2
// #define PMIC_MEDLVLEX_bm 0x02 /* Medium Level Interrupt Executing */
#define PMIC_MEDLVLEX_bp 1
// #define PMIC_LOLVLEX_bm 0x01 /* Low Level Interrupt Executing */
#define PMIC_LOLVLEX_bp 0
// #define PMIC_RREN_bm 0x80 /* Round-Robin Priority Enable */
#define PMIC_RREN_bp 7
// #define PMIC_IVSEL_bm 0x40 /* Interrupt Vector Select */
#define PMIC_IVSEL_bp 6
// #define PMIC_HILVLEN_bm 0x04 /* High Level Enable */
#define PMIC_HILVLEN_bp 2
// #define PMIC_MEDLVLEN_bm 0x02 /* Medium Level Enable */
#define PMIC_MEDLVLEN_bp 1
// #define PMIC_LOLVLEN_bm 0x01 /* Low Level Enable */
#define PMIC_LOLVLEN_bp 0
// #define DMA_CH_ENABLE_bm 0x80 /* Channel Enable */
#define DMA_CH_ENABLE_bp 7
// #define DMA_CH_RESET_bm 0x40 /* Channel Software Reset */
#define DMA_CH_RESET_bp 6
// #define DMA_CH_REPEAT_bm 0x20 /* Channel Repeat Mode */
#define DMA_CH_REPEAT_bp 5
// #define DMA_CH_TRFREQ_bm 0x10 /* Channel Transfer Request */
#define DMA_CH_TRFREQ_bp 4
// #define DMA_CH_SINGLE_bm 0x04 /* Channel Single Shot Data Transfer */
#define DMA_CH_SINGLE_bp 2
// #define DMA_ENABLE_bm 0x80 /* Enable */
#define DMA_ENABLE_bp 7
// #define DMA_RESET_bm 0x40 /* Software Reset */
#define DMA_RESET_bp 6
// #define DMA_CH3ERRIF_bm 0x80 /* Channel 3 Block Transfer Error Interrupt Flag */
#define DMA_CH3ERRIF_bp 7
// #define DMA_CH2ERRIF_bm 0x40 /* Channel 2 Block Transfer Error Interrupt Flag */
#define DMA_CH2ERRIF_bp 6
// #define DMA_CH1ERRIF_bm 0x20 /* Channel 1 Block Transfer Error Interrupt Flag */
#define DMA_CH1ERRIF_bp 5
// #define DMA_CH0ERRIF_bm 0x10 /* Channel 0 Block Transfer Error Interrupt Flag */
#define DMA_CH0ERRIF_bp 4
// #define DMA_CH3TRNIF_bm 0x08 /* Channel 3 Transaction Complete Interrupt Flag */
#define DMA_CH3TRNIF_bp 3
// #define DMA_CH2TRNIF_bm 0x04 /* Channel 2 Transaction Complete Interrupt Flag */
#define DMA_CH2TRNIF_bp 2
// #define DMA_CH1TRNIF_bm 0x02 /* Channel 1 Transaction Complete Interrupt Flag */
#define DMA_CH1TRNIF_bp 1
// #define DMA_CH0TRNIF_bm 0x01 /* Channel 0 Transaction Complete Interrupt Flag */
#define DMA_CH0TRNIF_bp 0
// #define DMA_CH3BUSY_bm 0x80 /* Channel 3 Block Transfer Busy */
#define DMA_CH3BUSY_bp 7
// #define DMA_CH2BUSY_bm 0x40 /* Channel 2 Block Transfer Busy */
#define DMA_CH2BUSY_bp 6
// #define DMA_CH1BUSY_bm 0x20 /* Channel 1 Block Transfer Busy */
#define DMA_CH1BUSY_bp 5
// #define DMA_CH0BUSY_bm 0x10 /* Channel 0 Block Transfer Busy */
#define DMA_CH0BUSY_bp 4
// #define DMA_CH3PEND_bm 0x08 /* Channel 3 Block Transfer Pending */
#define DMA_CH3PEND_bp 3
// #define DMA_CH2PEND_bm 0x04 /* Channel 2 Block Transfer Pending */
#define DMA_CH2PEND_bp 2
// #define DMA_CH1PEND_bm 0x02 /* Channel 1 Block Transfer Pending */
#define DMA_CH1PEND_bp 1
// #define DMA_CH0PEND_bm 0x01 /* Channel 0 Block Transfer Pending */
#define DMA_CH0PEND_bp 0
// #define EVSYS_QDIEN_bm 0x10 /* Quadrature Decoder Index Enable */
#define EVSYS_QDIEN_bp 4
// #define EVSYS_QDEN_bm 0x08 /* Quadrature Decoder Enable */
#define EVSYS_QDEN_bp 3
// #define NVM_CMDEX_bm 0x01 /* Command Execute */
#define NVM_CMDEX_bp 0
// #define NVM_EEMAPEN_bm 0x08 /* EEPROM Mapping Enable */
#define NVM_EEMAPEN_bp 3
// #define NVM_FPRM_bm 0x04 /* Flash Power Reduction Enable */
#define NVM_FPRM_bp 2
// #define NVM_EPRM_bm 0x02 /* EEPROM Power Reduction Enable */
#define NVM_EPRM_bp 1
// #define NVM_SPMLOCK_bm 0x01 /* SPM Lock */
#define NVM_SPMLOCK_bp 0
// #define NVM_NVMBUSY_bm 0x80 /* Non-volatile Memory Busy */
#define NVM_NVMBUSY_bp 7
// #define NVM_FBUSY_bm 0x40 /* Flash Memory Busy */
#define NVM_FBUSY_bp 6
// #define NVM_EELOAD_bm 0x02 /* EEPROM Page Buffer Active Loading */
#define NVM_EELOAD_bp 1
// #define NVM_FLOAD_bm 0x01 /* Flash Page Buffer Active Loading */
#define NVM_FLOAD_bp 0
// #define NVM_FUSES_DVSDON_bm 0x80 /* Spike Detector Enable */
#define NVM_FUSES_DVSDON_bp 7
// #define NVM_FUSES_BOOTRST_bm 0x40 /* Boot Loader Section Reset Vector */
#define NVM_FUSES_BOOTRST_bp 6
// #define NVM_FUSES_WDLOCK_bm 0x02 /* Watchdog Timer Lock */
#define NVM_FUSES_WDLOCK_bp 1
// #define NVM_FUSES_JTAGEN_bm 0x01 /* JTAG Interface Enable */
#define NVM_FUSES_JTAGEN_bp 0
// #define NVM_FUSES_EESAVE_bm 0x08 /* Preserve EEPROM Through Chip Erase */
#define NVM_FUSES_EESAVE_bp 3
// #define AC_HSMODE_bm 0x08 /* High-speed Mode */
#define AC_HSMODE_bp 3
// #define AC_ENABLE_bm 0x01 /* Enable */
#define AC_ENABLE_bp 0
// #define AC_AC0OUT_bm 0x01 /* Comparator 0 Output Enable */
#define AC_AC0OUT_bp 0
// #define AC_WEN_bm 0x10 /* Window Mode Enable */
#define AC_WEN_bp 4
// #define AC_AC1STATE_bm 0x20 /* Comparator 1 State */
#define AC_AC1STATE_bp 5
// #define AC_AC0STATE_bm 0x10 /* Comparator 0 State */
#define AC_AC0STATE_bp 4
// #define AC_WIF_bm 0x04 /* Window Mode Interrupt Flag */
#define AC_WIF_bp 2
// #define AC_AC1IF_bm 0x02 /* Comparator 1 Interrupt Flag */
#define AC_AC1IF_bp 1
// #define AC_AC0IF_bm 0x01 /* Comparator 0 Interrupt Flag */
#define AC_AC0IF_bp 0
// #define ADC_CH_START_bm 0x80 /* Start Bit */
#define ADC_CH_START_bp 7
// #define ADC_CH_IF_bm 0x01 /* Interrupt Flag */
#define ADC_CH_IF_bp 0
// #define ADC_CH3START_bm 0x20 /* Channel 3 Start Conversion */
#define ADC_CH3START_bp 5
// #define ADC_CH2START_bm 0x10 /* Channel 2 Start Conversion */
#define ADC_CH2START_bp 4
// #define ADC_CH1START_bm 0x08 /* Channel 1 Start Conversion */
#define ADC_CH1START_bp 3
// #define ADC_CH0START_bm 0x04 /* Channel 0 Start Conversion */
#define ADC_CH0START_bp 2
// #define ADC_FLUSH_bm 0x02 /* Flush Pipeline */
#define ADC_FLUSH_bp 1
// #define ADC_ENABLE_bm 0x01 /* Enable ADC */
#define ADC_ENABLE_bp 0
// #define ADC_CONVMODE_bm 0x10 /* Conversion Mode */
#define ADC_CONVMODE_bp 4
// #define ADC_FREERUN_bm 0x08 /* Free Running Mode Enable */
#define ADC_FREERUN_bp 3
// #define ADC_BANDGAP_bm 0x02 /* Bandgap enable */
#define ADC_BANDGAP_bp 1
// #define ADC_TEMPREF_bm 0x01 /* Temperature Reference Enable */
#define ADC_TEMPREF_bp 0
// #define ADC_CAL_bm 0x01 /* Enable Calibration */
#define ADC_CAL_bp 0
// #define ADC_CALIBRATE_bm 0x01 /* Enable Calibration */
#define ADC_CALIBRATE_bp 0
// #define ADC_CH0IF_bm 0x01 /* Ch0 Int Flag */
#define ADC_CH0IF_bp 0
// #define ADC_CH1IF_bm 0x02 /* Ch1 Int Flag */
#define ADC_CH1IF_bp 1
// #define ADC_CH2IF_bm 0x04 /* Ch2 Int Flag */
#define ADC_CH2IF_bp 2
// #define ADC_CH3IF_bm 0x08 /* Ch3 Int Flag */
#define ADC_CH3IF_bp 3
// #define DAC_CH1EN_bm 0x08 /* Channel 1 Output Enable */
#define DAC_CH1EN_bp 3
// #define DAC_CH0EN_bm 0x04 /* Channel 0 Output Enable */
#define DAC_CH0EN_bp 2
// #define DAC_LPMODE_bm 0x02 /* Low Power Mode */
#define DAC_LPMODE_bp 1
// #define DAC_ENABLE_bm 0x01 /* Enable */
#define DAC_ENABLE_bp 0
// #define DAC_CH1TRIG_bm 0x02 /* Channel 1 Event Trig Enable */
#define DAC_CH1TRIG_bp 1
// #define DAC_CH0TRIG_bm 0x01 /* Channel 0 Event Trig Enable */
#define DAC_CH0TRIG_bp 0
// #define DAC_TRUEGND_bm 0x04 /* Force true GND when converting 0x000 */
#define DAC_TRUEGND_bp 2
// #define DAC_LEFTADJ_bm 0x01 /* Left-adjust Result */
#define DAC_LEFTADJ_bp 0
// #define DAC_CH1DRE_bm 0x02 /* Channel 1 Data Register Empty */
#define DAC_CH1DRE_bp 1
// #define DAC_CH0DRE_bm 0x01 /* Channel 0 Data Register Empty */
#define DAC_CH0DRE_bp 0
// #define RTC_SYNCBUSY_bm 0x01 /* Synchronization Busy Flag */
#define RTC_SYNCBUSY_bp 0
// #define RTC_COMPIF_bm 0x02 /* Compare Match Interrupt Flag */
#define RTC_COMPIF_bp 1
// #define RTC_OVFIF_bm 0x01 /* Overflow Interrupt Flag */
#define RTC_OVFIF_bp 0
// #define EBI_CS_SDINITDONE_bm 0x80 /* SDRAM Initialization Done */
#define EBI_CS_SDINITDONE_bp 7
// #define EBI_CS_SDSREN_bm 0x04 /* SDRAM Self-refresh Enable */
#define EBI_CS_SDSREN_bp 2
// #define EBI_SDCAS_bm 0x08 /* SDRAM CAS Latency Setting */
#define EBI_SDCAS_bp 3
// #define EBI_SDROW_bm 0x04 /* SDRAM ROW Bits Setting */
#define EBI_SDROW_bp 2
// #define TWI_MASTER_RIEN_bm 0x20 /* Read Interrupt Enable */
#define TWI_MASTER_RIEN_bp 5
// #define TWI_MASTER_WIEN_bm 0x10 /* Write Interrupt Enable */
#define TWI_MASTER_WIEN_bp 4
// #define TWI_MASTER_ENABLE_bm 0x08 /* Enable TWI Master */
#define TWI_MASTER_ENABLE_bp 3
// #define TWI_MASTER_QCEN_bm 0x02 /* Quick Command Enable */
#define TWI_MASTER_QCEN_bp 1
// #define TWI_MASTER_SMEN_bm 0x01 /* Smart Mode Enable */
#define TWI_MASTER_SMEN_bp 0
// #define TWI_MASTER_ACKACT_bm 0x04 /* Acknowledge Action */
#define TWI_MASTER_ACKACT_bp 2
// #define TWI_MASTER_RIF_bm 0x80 /* Read Interrupt Flag */
#define TWI_MASTER_RIF_bp 7
// #define TWI_MASTER_WIF_bm 0x40 /* Write Interrupt Flag */
#define TWI_MASTER_WIF_bp 6
// #define TWI_MASTER_CLKHOLD_bm 0x20 /* Clock Hold */
#define TWI_MASTER_CLKHOLD_bp 5
// #define TWI_MASTER_RXACK_bm 0x10 /* Received Acknowledge */
#define TWI_MASTER_RXACK_bp 4
// #define TWI_MASTER_ARBLOST_bm 0x08 /* Arbitration Lost */
#define TWI_MASTER_ARBLOST_bp 3
// #define TWI_MASTER_BUSERR_bm 0x04 /* Bus Error */
#define TWI_MASTER_BUSERR_bp 2
// #define TWI_SLAVE_DIEN_bm 0x20 /* Data Interrupt Enable */
#define TWI_SLAVE_DIEN_bp 5
// #define TWI_SLAVE_APIEN_bm 0x10 /* Address/Stop Interrupt Enable */
#define TWI_SLAVE_APIEN_bp 4
// #define TWI_SLAVE_ENABLE_bm 0x08 /* Enable TWI Slave */
#define TWI_SLAVE_ENABLE_bp 3
// #define TWI_SLAVE_PIEN_bm 0x04 /* Stop Interrupt Enable */
#define TWI_SLAVE_PIEN_bp 2
// #define TWI_SLAVE_PMEN_bm 0x02 /* Promiscuous Mode Enable */
#define TWI_SLAVE_PMEN_bp 1
// #define TWI_SLAVE_SMEN_bm 0x01 /* Smart Mode Enable */
#define TWI_SLAVE_SMEN_bp 0
// #define TWI_SLAVE_ACKACT_bm 0x04 /* Acknowledge Action */
#define TWI_SLAVE_ACKACT_bp 2
// #define TWI_SLAVE_DIF_bm 0x80 /* Data Interrupt Flag */
#define TWI_SLAVE_DIF_bp 7
// #define TWI_SLAVE_APIF_bm 0x40 /* Address/Stop Interrupt Flag */
#define TWI_SLAVE_APIF_bp 6
// #define TWI_SLAVE_CLKHOLD_bm 0x20 /* Clock Hold */
#define TWI_SLAVE_CLKHOLD_bp 5
// #define TWI_SLAVE_RXACK_bm 0x10 /* Received Acknowledge */
#define TWI_SLAVE_RXACK_bp 4
// #define TWI_SLAVE_COLL_bm 0x08 /* Collision */
#define TWI_SLAVE_COLL_bp 3
// #define TWI_SLAVE_BUSERR_bm 0x04 /* Bus Error */
#define TWI_SLAVE_BUSERR_bp 2
// #define TWI_SLAVE_DIR_bm 0x02 /* Read/Write Direction */
#define TWI_SLAVE_DIR_bp 1
// #define TWI_SLAVE_AP_bm 0x01 /* Slave Address or Stop */
#define TWI_SLAVE_AP_bp 0
// #define TWI_EDIEN_bm 0x01 /* External Driver Interface Enable */
#define TWI_EDIEN_bp 0
// #define VPORT_INT1IF_bm 0x02 /* Port Interrupt 1 Flag */
#define VPORT_INT1IF_bp 1
// #define VPORT_INT0IF_bm 0x01 /* Port Interrupt 0 Flag */
#define VPORT_INT0IF_bp 0
// #define PORT_INT1IF_bm 0x02 /* Port Interrupt 1 Flag */
#define PORT_INT1IF_bp 1
// #define PORT_INT0IF_bm 0x01 /* Port Interrupt 0 Flag */
#define PORT_INT0IF_bp 0
// #define PORT_SRLEN_bm 0x80 /* Slew Rate Enable */
#define PORT_SRLEN_bp 7
// #define PORT_INVEN_bm 0x40 /* Inverted I/O Enable */
#define PORT_INVEN_bp 6
// #define TC0_CCDEN_bm 0x80 /* Compare or Capture D Enable */
#define TC0_CCDEN_bp 7
// #define TC0_CCCEN_bm 0x40 /* Compare or Capture C Enable */
#define TC0_CCCEN_bp 6
// #define TC0_CCBEN_bm 0x20 /* Compare or Capture B Enable */
#define TC0_CCBEN_bp 5
// #define TC0_CCAEN_bm 0x10 /* Compare or Capture A Enable */
#define TC0_CCAEN_bp 4
// #define TC0_CMPD_bm 0x08 /* Compare D Output Value */
#define TC0_CMPD_bp 3
// #define TC0_CMPC_bm 0x04 /* Compare C Output Value */
#define TC0_CMPC_bp 2
// #define TC0_CMPB_bm 0x02 /* Compare B Output Value */
#define TC0_CMPB_bp 1
// #define TC0_CMPA_bm 0x01 /* Compare A Output Value */
#define TC0_CMPA_bp 0
// #define TC0_EVDLY_bm 0x10 /* Event Delay */
#define TC0_EVDLY_bp 4
// #define TC0_DTHM_bm 0x02 /* Dead Time Hold Mode */
#define TC0_DTHM_bp 1
// #define TC0_BYTEM_bm 0x01 /* Byte Mode */
#define TC0_BYTEM_bp 0
// #define TC0_LUPD_bm 0x02 /* Lock Update */
#define TC0_LUPD_bp 1
// #define TC0_DIR_bm 0x01 /* Direction */
#define TC0_DIR_bp 0
// #define TC0_CCDBV_bm 0x10 /* Compare or Capture D Buffer Valid */
#define TC0_CCDBV_bp 4
// #define TC0_CCCBV_bm 0x08 /* Compare or Capture C Buffer Valid */
#define TC0_CCCBV_bp 3
// #define TC0_CCBBV_bm 0x04 /* Compare or Capture B Buffer Valid */
#define TC0_CCBBV_bp 2
// #define TC0_CCABV_bm 0x02 /* Compare or Capture A Buffer Valid */
#define TC0_CCABV_bp 1
// #define TC0_PERBV_bm 0x01 /* Period Buffer Valid */
#define TC0_PERBV_bp 0
// #define TC0_CCDIF_bm 0x80 /* Compare or Capture D Interrupt Flag */
#define TC0_CCDIF_bp 7
// #define TC0_CCCIF_bm 0x40 /* Compare or Capture C Interrupt Flag */
#define TC0_CCCIF_bp 6
// #define TC0_CCBIF_bm 0x20 /* Compare or Capture B Interrupt Flag */
#define TC0_CCBIF_bp 5
// #define TC0_CCAIF_bm 0x10 /* Compare or Capture A Interrupt Flag */
#define TC0_CCAIF_bp 4
// #define TC0_ERRIF_bm 0x02 /* Error Interrupt Flag */
#define TC0_ERRIF_bp 1
// #define TC0_OVFIF_bm 0x01 /* Overflow Interrupt Flag */
#define TC0_OVFIF_bp 0
// #define TC1_CCBEN_bm 0x20 /* Compare or Capture B Enable */
#define TC1_CCBEN_bp 5
// #define TC1_CCAEN_bm 0x10 /* Compare or Capture A Enable */
#define TC1_CCAEN_bp 4
// #define TC1_CMPB_bm 0x02 /* Compare B Output Value */
#define TC1_CMPB_bp 1
// #define TC1_CMPA_bm 0x01 /* Compare A Output Value */
#define TC1_CMPA_bp 0
// #define TC1_EVDLY_bm 0x10 /* Event Delay */
#define TC1_EVDLY_bp 4
// #define TC1_DTHM_bm 0x02 /* Dead Time Hold Mode */
#define TC1_DTHM_bp 1
// #define TC1_BYTEM_bm 0x01 /* Byte Mode */
#define TC1_BYTEM_bp 0
// #define TC1_LUPD_bm 0x02 /* Lock Update */
#define TC1_LUPD_bp 1
// #define TC1_DIR_bm 0x01 /* Direction */
#define TC1_DIR_bp 0
// #define TC1_CCBBV_bm 0x04 /* Compare or Capture B Buffer Valid */
#define TC1_CCBBV_bp 2
// #define TC1_CCABV_bm 0x02 /* Compare or Capture A Buffer Valid */
#define TC1_CCABV_bp 1
// #define TC1_PERBV_bm 0x01 /* Period Buffer Valid */
#define TC1_PERBV_bp 0
// #define TC1_CCBIF_bm 0x20 /* Compare or Capture B Interrupt Flag */
#define TC1_CCBIF_bp 5
// #define TC1_CCAIF_bm 0x10 /* Compare or Capture A Interrupt Flag */
#define TC1_CCAIF_bp 4
// #define TC1_ERRIF_bm 0x02 /* Error Interrupt Flag */
#define TC1_ERRIF_bp 1
// #define TC1_OVFIF_bm 0x01 /* Overflow Interrupt Flag */
#define TC1_OVFIF_bp 0
// #define AWEX_PGM_bm 0x20 /* Pattern Generation Mode */
#define AWEX_PGM_bp 5
// #define AWEX_CWCM_bm 0x10 /* Common Waveform Channel Mode */
#define AWEX_CWCM_bp 4
// #define AWEX_DTICCDEN_bm 0x08 /* Dead Time Insertion Compare D Enable */
#define AWEX_DTICCDEN_bp 3
// #define AWEX_DTICCCEN_bm 0x04 /* Dead Time Insertion Compare C Enable */
#define AWEX_DTICCCEN_bp 2
// #define AWEX_DTICCBEN_bm 0x02 /* Dead Time Insertion Compare B Enable */
#define AWEX_DTICCBEN_bp 1
// #define AWEX_DTICCAEN_bm 0x01 /* Dead Time Insertion Compare A Enable */
#define AWEX_DTICCAEN_bp 0
// #define AWEX_FDF_bm 0x04 /* Fault Detect Flag */
#define AWEX_FDF_bp 2
// #define AWEX_DTHSBUFV_bm 0x02 /* Dead Time High Side Buffer Valid */
#define AWEX_DTHSBUFV_bp 1
// #define AWEX_DTLSBUFV_bm 0x01 /* Dead Time Low Side Buffer Valid */
#define AWEX_DTLSBUFV_bp 0
// #define USART_RXCIF_bm 0x80 /* Receive Interrupt Flag */
#define USART_RXCIF_bp 7
// #define USART_TXCIF_bm 0x40 /* Transmit Interrupt Flag */
#define USART_TXCIF_bp 6
// #define USART_DREIF_bm 0x20 /* Data Register Empty Flag */
#define USART_DREIF_bp 5
// #define USART_FERR_bm 0x10 /* Frame Error */
#define USART_FERR_bp 4
// #define USART_BUFOVF_bm 0x08 /* Buffer Overflow */
#define USART_BUFOVF_bp 3
// #define USART_PERR_bm 0x04 /* Parity Error */
#define USART_PERR_bp 2
// #define USART_RXB8_bm 0x01 /* Receive Bit 8 */
#define USART_RXB8_bp 0
// #define USART_RXEN_bm 0x10 /* Receiver Enable */
#define USART_RXEN_bp 4
// #define USART_TXEN_bm 0x08 /* Transmitter Enable */
#define USART_TXEN_bp 3
// #define USART_CLK2X_bm 0x04 /* Double transmission speed */
#define USART_CLK2X_bp 2
// #define USART_MPCM_bm 0x02 /* Multi-processor Communication Mode */
#define USART_MPCM_bp 1
// #define USART_TXB8_bm 0x01 /* Transmit bit 8 */
#define USART_TXB8_bp 0
// #define USART_PMODE0_bm  (1<<4)  /* Parity Mode bit 0 mask. */
// #define USART_SBMODE_bm 0x08 /* Stop Bit Mode */
#define USART_SBMODE_bp 3
// #define SPI_CLK2X_bm 0x80 /* Enable Double Speed */
#define SPI_CLK2X_bp 7
// #define SPI_ENABLE_bm 0x40 /* Enable Module */
#define SPI_ENABLE_bp 6
// #define SPI_DORD_bm 0x20 /* Data Order Setting */
#define SPI_DORD_bp 5
// #define SPI_MASTER_bm 0x10 /* Master Operation Enable */
#define SPI_MASTER_bp 4
// #define SPI_IF_bm 0x80 /* Interrupt Flag */
#define SPI_IF_bp 7
// #define SPI_WRCOL_bm 0x40 /* Write Collision */
#define SPI_WRCOL_bp 6
/*<eof>*/
