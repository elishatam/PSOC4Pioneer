.ifndef INCLUDED_CYFITTERGNU_INC
.set INCLUDED_CYFITTERGNU_INC, 1
.include "cydevicegnu_trm.inc"

/* Pin_Vin */
.set Pin_Vin__0__DM__MASK, 0x7000
.set Pin_Vin__0__DM__SHIFT, 12
.set Pin_Vin__0__DR, CYREG_PRT0_DR
.set Pin_Vin__0__HSIOM, CYREG_HSIOM_PORT_SEL0
.set Pin_Vin__0__HSIOM_MASK, 0x000F0000
.set Pin_Vin__0__HSIOM_SHIFT, 16
.set Pin_Vin__0__INTCFG, CYREG_PRT0_INTCFG
.set Pin_Vin__0__INTSTAT, CYREG_PRT0_INTSTAT
.set Pin_Vin__0__MASK, 0x10
.set Pin_Vin__0__OUT_SEL, CYREG_UDB_PA0_CFG10
.set Pin_Vin__0__OUT_SEL_SHIFT, 8
.set Pin_Vin__0__OUT_SEL_VAL, 3
.set Pin_Vin__0__PA__CFG0, CYREG_UDB_PA0_CFG0
.set Pin_Vin__0__PA__CFG1, CYREG_UDB_PA0_CFG1
.set Pin_Vin__0__PA__CFG10, CYREG_UDB_PA0_CFG10
.set Pin_Vin__0__PA__CFG11, CYREG_UDB_PA0_CFG11
.set Pin_Vin__0__PA__CFG12, CYREG_UDB_PA0_CFG12
.set Pin_Vin__0__PA__CFG13, CYREG_UDB_PA0_CFG13
.set Pin_Vin__0__PA__CFG14, CYREG_UDB_PA0_CFG14
.set Pin_Vin__0__PA__CFG2, CYREG_UDB_PA0_CFG2
.set Pin_Vin__0__PA__CFG3, CYREG_UDB_PA0_CFG3
.set Pin_Vin__0__PA__CFG4, CYREG_UDB_PA0_CFG4
.set Pin_Vin__0__PA__CFG5, CYREG_UDB_PA0_CFG5
.set Pin_Vin__0__PA__CFG6, CYREG_UDB_PA0_CFG6
.set Pin_Vin__0__PA__CFG7, CYREG_UDB_PA0_CFG7
.set Pin_Vin__0__PA__CFG8, CYREG_UDB_PA0_CFG8
.set Pin_Vin__0__PA__CFG9, CYREG_UDB_PA0_CFG9
.set Pin_Vin__0__PC, CYREG_PRT0_PC
.set Pin_Vin__0__PC2, CYREG_PRT0_PC2
.set Pin_Vin__0__PORT, 0
.set Pin_Vin__0__PS, CYREG_PRT0_PS
.set Pin_Vin__0__SHIFT, 4
.set Pin_Vin__DR, CYREG_PRT0_DR
.set Pin_Vin__INTCFG, CYREG_PRT0_INTCFG
.set Pin_Vin__INTSTAT, CYREG_PRT0_INTSTAT
.set Pin_Vin__MASK, 0x10
.set Pin_Vin__PA__CFG0, CYREG_UDB_PA0_CFG0
.set Pin_Vin__PA__CFG1, CYREG_UDB_PA0_CFG1
.set Pin_Vin__PA__CFG10, CYREG_UDB_PA0_CFG10
.set Pin_Vin__PA__CFG11, CYREG_UDB_PA0_CFG11
.set Pin_Vin__PA__CFG12, CYREG_UDB_PA0_CFG12
.set Pin_Vin__PA__CFG13, CYREG_UDB_PA0_CFG13
.set Pin_Vin__PA__CFG14, CYREG_UDB_PA0_CFG14
.set Pin_Vin__PA__CFG2, CYREG_UDB_PA0_CFG2
.set Pin_Vin__PA__CFG3, CYREG_UDB_PA0_CFG3
.set Pin_Vin__PA__CFG4, CYREG_UDB_PA0_CFG4
.set Pin_Vin__PA__CFG5, CYREG_UDB_PA0_CFG5
.set Pin_Vin__PA__CFG6, CYREG_UDB_PA0_CFG6
.set Pin_Vin__PA__CFG7, CYREG_UDB_PA0_CFG7
.set Pin_Vin__PA__CFG8, CYREG_UDB_PA0_CFG8
.set Pin_Vin__PA__CFG9, CYREG_UDB_PA0_CFG9
.set Pin_Vin__PC, CYREG_PRT0_PC
.set Pin_Vin__PC2, CYREG_PRT0_PC2
.set Pin_Vin__PORT, 0
.set Pin_Vin__PS, CYREG_PRT0_PS
.set Pin_Vin__SHIFT, 4

/* ADC_SAR_Seq_cy_psoc4_sar */
.set ADC_SAR_Seq_cy_psoc4_sar__SAR_CTRL, CYREG_SAR_CTRL
.set ADC_SAR_Seq_cy_psoc4_sar__SAR_INTR, CYREG_SAR_INTR
.set ADC_SAR_Seq_cy_psoc4_sar__SAR_INTR_CAUSE, CYREG_SAR_INTR_CAUSE
.set ADC_SAR_Seq_cy_psoc4_sar__SAR_INTR_MASK, CYREG_SAR_INTR_MASK
.set ADC_SAR_Seq_cy_psoc4_sar__SAR_INTR_MASKED, CYREG_SAR_INTR_MASKED
.set ADC_SAR_Seq_cy_psoc4_sar__SAR_INTR_SET, CYREG_SAR_INTR_SET
.set ADC_SAR_Seq_cy_psoc4_sar__SAR_NUMBER, 0
.set ADC_SAR_Seq_cy_psoc4_sar__SAR_RANGE_COND, CYREG_SAR_RANGE_COND
.set ADC_SAR_Seq_cy_psoc4_sar__SAR_RANGE_INTR_MASK, CYREG_SAR_RANGE_INTR_MASK
.set ADC_SAR_Seq_cy_psoc4_sar__SAR_RANGE_INTR_MASKED, CYREG_SAR_RANGE_INTR_MASKED
.set ADC_SAR_Seq_cy_psoc4_sar__SAR_RANGE_INTR_SET, CYREG_SAR_RANGE_INTR_SET
.set ADC_SAR_Seq_cy_psoc4_sar__SAR_RANGE_THRES, CYREG_SAR_RANGE_THRES
.set ADC_SAR_Seq_cy_psoc4_sar__SAR_SAMPLE_CTRL, CYREG_SAR_SAMPLE_CTRL
.set ADC_SAR_Seq_cy_psoc4_sar__SAR_SAMPLE_TIME01, CYREG_SAR_SAMPLE_TIME01
.set ADC_SAR_Seq_cy_psoc4_sar__SAR_SAMPLE_TIME23, CYREG_SAR_SAMPLE_TIME23
.set ADC_SAR_Seq_cy_psoc4_sar__SAR_SATURATE_INTR_MASK, CYREG_SAR_SATURATE_INTR_MASK
.set ADC_SAR_Seq_cy_psoc4_sar__SAR_SATURATE_INTR_MASKED, CYREG_SAR_SATURATE_INTR_MASKED
.set ADC_SAR_Seq_cy_psoc4_sar__SAR_SATURATE_INTR_SET, CYREG_SAR_SATURATE_INTR_SET
.set ADC_SAR_Seq_cy_psoc4_sar__SAR_STATUS, CYREG_SAR_STATUS

/* ADC_SAR_Seq_cy_psoc4_sarmux_8 */
.set ADC_SAR_Seq_cy_psoc4_sarmux_8__CH_0_PIN, 3
.set ADC_SAR_Seq_cy_psoc4_sarmux_8__CH_0_PORT, 7
.set ADC_SAR_Seq_cy_psoc4_sarmux_8__CH_1_PIN, 0
.set ADC_SAR_Seq_cy_psoc4_sarmux_8__CH_1_PORT, 7
.set ADC_SAR_Seq_cy_psoc4_sarmux_8__SAR_CHAN_CONFIG00, CYREG_SAR_CHAN_CONFIG00
.set ADC_SAR_Seq_cy_psoc4_sarmux_8__SAR_CHAN_CONFIG01, CYREG_SAR_CHAN_CONFIG01
.set ADC_SAR_Seq_cy_psoc4_sarmux_8__SAR_CHAN_CONFIG02, CYREG_SAR_CHAN_CONFIG02
.set ADC_SAR_Seq_cy_psoc4_sarmux_8__SAR_CHAN_CONFIG03, CYREG_SAR_CHAN_CONFIG03
.set ADC_SAR_Seq_cy_psoc4_sarmux_8__SAR_CHAN_CONFIG04, CYREG_SAR_CHAN_CONFIG04
.set ADC_SAR_Seq_cy_psoc4_sarmux_8__SAR_CHAN_CONFIG05, CYREG_SAR_CHAN_CONFIG05
.set ADC_SAR_Seq_cy_psoc4_sarmux_8__SAR_CHAN_CONFIG06, CYREG_SAR_CHAN_CONFIG06
.set ADC_SAR_Seq_cy_psoc4_sarmux_8__SAR_CHAN_CONFIG07, CYREG_SAR_CHAN_CONFIG07
.set ADC_SAR_Seq_cy_psoc4_sarmux_8__SAR_CHAN_EN, CYREG_SAR_CHAN_EN
.set ADC_SAR_Seq_cy_psoc4_sarmux_8__SAR_CHAN_RESULT_VALID, CYREG_SAR_CHAN_RESULT_VALID
.set ADC_SAR_Seq_cy_psoc4_sarmux_8__SAR_CHAN_RESULT00, CYREG_SAR_CHAN_RESULT00
.set ADC_SAR_Seq_cy_psoc4_sarmux_8__SAR_CHAN_RESULT01, CYREG_SAR_CHAN_RESULT01
.set ADC_SAR_Seq_cy_psoc4_sarmux_8__SAR_CHAN_RESULT02, CYREG_SAR_CHAN_RESULT02
.set ADC_SAR_Seq_cy_psoc4_sarmux_8__SAR_CHAN_RESULT03, CYREG_SAR_CHAN_RESULT03
.set ADC_SAR_Seq_cy_psoc4_sarmux_8__SAR_CHAN_RESULT04, CYREG_SAR_CHAN_RESULT04
.set ADC_SAR_Seq_cy_psoc4_sarmux_8__SAR_CHAN_RESULT05, CYREG_SAR_CHAN_RESULT05
.set ADC_SAR_Seq_cy_psoc4_sarmux_8__SAR_CHAN_RESULT06, CYREG_SAR_CHAN_RESULT06
.set ADC_SAR_Seq_cy_psoc4_sarmux_8__SAR_CHAN_RESULT07, CYREG_SAR_CHAN_RESULT07
.set ADC_SAR_Seq_cy_psoc4_sarmux_8__SAR_CHAN_WORK_VALID, CYREG_SAR_CHAN_WORK_VALID
.set ADC_SAR_Seq_cy_psoc4_sarmux_8__SAR_CHAN_WORK00, CYREG_SAR_CHAN_WORK00
.set ADC_SAR_Seq_cy_psoc4_sarmux_8__SAR_CHAN_WORK01, CYREG_SAR_CHAN_WORK01
.set ADC_SAR_Seq_cy_psoc4_sarmux_8__SAR_CHAN_WORK02, CYREG_SAR_CHAN_WORK02
.set ADC_SAR_Seq_cy_psoc4_sarmux_8__SAR_CHAN_WORK03, CYREG_SAR_CHAN_WORK03
.set ADC_SAR_Seq_cy_psoc4_sarmux_8__SAR_CHAN_WORK04, CYREG_SAR_CHAN_WORK04
.set ADC_SAR_Seq_cy_psoc4_sarmux_8__SAR_CHAN_WORK05, CYREG_SAR_CHAN_WORK05
.set ADC_SAR_Seq_cy_psoc4_sarmux_8__SAR_CHAN_WORK06, CYREG_SAR_CHAN_WORK06
.set ADC_SAR_Seq_cy_psoc4_sarmux_8__SAR_CHAN_WORK07, CYREG_SAR_CHAN_WORK07
.set ADC_SAR_Seq_cy_psoc4_sarmux_8__SAR_INJ_CHAN_CONFIG, CYREG_SAR_INJ_CHAN_CONFIG
.set ADC_SAR_Seq_cy_psoc4_sarmux_8__SAR_INJ_RESULT, CYREG_SAR_INJ_RESULT
.set ADC_SAR_Seq_cy_psoc4_sarmux_8__SAR_START_CTRL, CYREG_SAR_START_CTRL

/* ADC_SAR_Seq_intClock */
.set ADC_SAR_Seq_intClock__DIVIDER_MASK, 0x0000FFFF
.set ADC_SAR_Seq_intClock__ENABLE, CYREG_CLK_DIVIDER_A00
.set ADC_SAR_Seq_intClock__ENABLE_MASK, 0x80000000
.set ADC_SAR_Seq_intClock__MASK, 0x80000000
.set ADC_SAR_Seq_intClock__REGISTER, CYREG_CLK_DIVIDER_A00

/* ADC_SAR_Seq_IRQ */
.set ADC_SAR_Seq_IRQ__INTC_CLR_EN_REG, CYREG_CM0_ICER
.set ADC_SAR_Seq_IRQ__INTC_CLR_PD_REG, CYREG_CM0_ICPR
.set ADC_SAR_Seq_IRQ__INTC_MASK, 0x4000
.set ADC_SAR_Seq_IRQ__INTC_NUMBER, 14
.set ADC_SAR_Seq_IRQ__INTC_PRIOR_MASK, 0xC00000
.set ADC_SAR_Seq_IRQ__INTC_PRIOR_NUM, 3
.set ADC_SAR_Seq_IRQ__INTC_PRIOR_REG, CYREG_CM0_IPR3
.set ADC_SAR_Seq_IRQ__INTC_SET_EN_REG, CYREG_CM0_ISER
.set ADC_SAR_Seq_IRQ__INTC_SET_PD_REG, CYREG_CM0_ISPR

/* Miscellaneous */
.set CYDEV_BCLK__HFCLK__HZ, 24000000
.set CYDEV_BCLK__HFCLK__KHZ, 24000
.set CYDEV_BCLK__HFCLK__MHZ, 24
.set CYDEV_BCLK__SYSCLK__HZ, 24000000
.set CYDEV_BCLK__SYSCLK__KHZ, 24000
.set CYDEV_BCLK__SYSCLK__MHZ, 24
.set CYDEV_CHIP_DIE_LEOPARD, 1
.set CYDEV_CHIP_DIE_PANTHER, 18
.set CYDEV_CHIP_DIE_PSOC4A, 10
.set CYDEV_CHIP_DIE_PSOC5LP, 17
.set CYDEV_CHIP_DIE_TMA4, 2
.set CYDEV_CHIP_DIE_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_PSOC3, 1
.set CYDEV_CHIP_FAMILY_PSOC4, 2
.set CYDEV_CHIP_FAMILY_PSOC5, 3
.set CYDEV_CHIP_FAMILY_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_USED, CYDEV_CHIP_FAMILY_PSOC4
.set CYDEV_CHIP_JTAG_ID, 0x04C81193
.set CYDEV_CHIP_MEMBER_3A, 1
.set CYDEV_CHIP_MEMBER_4A, 10
.set CYDEV_CHIP_MEMBER_4C, 15
.set CYDEV_CHIP_MEMBER_4D, 6
.set CYDEV_CHIP_MEMBER_4E, 4
.set CYDEV_CHIP_MEMBER_4F, 11
.set CYDEV_CHIP_MEMBER_4G, 2
.set CYDEV_CHIP_MEMBER_4H, 9
.set CYDEV_CHIP_MEMBER_4I, 14
.set CYDEV_CHIP_MEMBER_4J, 7
.set CYDEV_CHIP_MEMBER_4K, 8
.set CYDEV_CHIP_MEMBER_4L, 13
.set CYDEV_CHIP_MEMBER_4M, 12
.set CYDEV_CHIP_MEMBER_4N, 5
.set CYDEV_CHIP_MEMBER_4U, 3
.set CYDEV_CHIP_MEMBER_5A, 17
.set CYDEV_CHIP_MEMBER_5B, 16
.set CYDEV_CHIP_MEMBER_UNKNOWN, 0
.set CYDEV_CHIP_MEMBER_USED, CYDEV_CHIP_MEMBER_4A
.set CYDEV_CHIP_DIE_EXPECT, CYDEV_CHIP_MEMBER_USED
.set CYDEV_CHIP_DIE_ACTUAL, CYDEV_CHIP_DIE_EXPECT
.set CYDEV_CHIP_REV_LEOPARD_ES1, 0
.set CYDEV_CHIP_REV_LEOPARD_ES2, 1
.set CYDEV_CHIP_REV_LEOPARD_ES3, 3
.set CYDEV_CHIP_REV_LEOPARD_PRODUCTION, 3
.set CYDEV_CHIP_REV_PANTHER_ES0, 0
.set CYDEV_CHIP_REV_PANTHER_ES1, 1
.set CYDEV_CHIP_REV_PANTHER_PRODUCTION, 1
.set CYDEV_CHIP_REV_PSOC4A_ES0, 17
.set CYDEV_CHIP_REV_PSOC4A_PRODUCTION, 17
.set CYDEV_CHIP_REV_PSOC5LP_ES0, 0
.set CYDEV_CHIP_REV_PSOC5LP_PRODUCTION, 0
.set CYDEV_CHIP_REV_TMA4_ES, 17
.set CYDEV_CHIP_REV_TMA4_ES2, 33
.set CYDEV_CHIP_REV_TMA4_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_3A_ES1, 0
.set CYDEV_CHIP_REVISION_3A_ES2, 1
.set CYDEV_CHIP_REVISION_3A_ES3, 3
.set CYDEV_CHIP_REVISION_3A_PRODUCTION, 3
.set CYDEV_CHIP_REVISION_4A_ES0, 17
.set CYDEV_CHIP_REVISION_4A_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_4C_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4D_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4E_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION_256K, 0
.set CYDEV_CHIP_REVISION_4G_ES, 17
.set CYDEV_CHIP_REVISION_4G_ES2, 33
.set CYDEV_CHIP_REVISION_4G_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_4H_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4I_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4J_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4K_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4L_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4M_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4N_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4U_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_5A_ES0, 0
.set CYDEV_CHIP_REVISION_5A_ES1, 1
.set CYDEV_CHIP_REVISION_5A_PRODUCTION, 1
.set CYDEV_CHIP_REVISION_5B_ES0, 0
.set CYDEV_CHIP_REVISION_5B_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_USED, CYDEV_CHIP_REVISION_4A_PRODUCTION
.set CYDEV_CHIP_REV_EXPECT, CYDEV_CHIP_REVISION_USED
.set CYDEV_CONFIG_READ_ACCELERATOR, 1
.set CYDEV_CONFIG_UNUSED_IO_AllowButWarn, 0
.set CYDEV_CONFIG_UNUSED_IO, CYDEV_CONFIG_UNUSED_IO_AllowButWarn
.set CYDEV_CONFIG_UNUSED_IO_AllowWithInfo, 1
.set CYDEV_CONFIG_UNUSED_IO_Disallowed, 2
.set CYDEV_CONFIGURATION_COMPRESSED, 1
.set CYDEV_CONFIGURATION_MODE_COMPRESSED, 0
.set CYDEV_CONFIGURATION_MODE, CYDEV_CONFIGURATION_MODE_COMPRESSED
.set CYDEV_CONFIGURATION_MODE_DMA, 2
.set CYDEV_CONFIGURATION_MODE_UNCOMPRESSED, 1
.set CYDEV_DEBUG_PROTECT_KILL, 4
.set CYDEV_DEBUG_PROTECT_OPEN, 1
.set CYDEV_DEBUG_PROTECT, CYDEV_DEBUG_PROTECT_OPEN
.set CYDEV_DEBUG_PROTECT_PROTECTED, 2
.set CYDEV_DEBUGGING_DPS_Disable, 3
.set CYDEV_DEBUGGING_DPS_SWD, 2
.set CYDEV_DEBUGGING_DPS, CYDEV_DEBUGGING_DPS_SWD
.set CYDEV_DEBUGGING_ENABLE, 1
.set CYDEV_DFT_SELECT_CLK0, 1
.set CYDEV_DFT_SELECT_CLK1, 2
.set CYDEV_HEAP_SIZE, 0x80
.set CYDEV_IMO_TRIMMED_BY_USB, 0
.set CYDEV_IMO_TRIMMED_BY_WCO, 0
.set CYDEV_IS_EXPORTING_CODE, 0
.set CYDEV_IS_IMPORTING_CODE, 0
.set CYDEV_PROJ_TYPE, 0
.set CYDEV_PROJ_TYPE_BOOTLOADER, 1
.set CYDEV_PROJ_TYPE_LAUNCHER, 5
.set CYDEV_PROJ_TYPE_LOADABLE, 2
.set CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER, 4
.set CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER, 3
.set CYDEV_PROJ_TYPE_STANDARD, 0
.set CYDEV_STACK_SIZE, 0x0400
.set CYDEV_USE_BUNDLED_CMSIS, 1
.set CYDEV_VARIABLE_VDDA, 1
.set CYDEV_VDDA_MV, 3300
.set CYDEV_VDDD_MV, 3300
.set CYDEV_WDT_GENERATE_ISR, 1
.set CYIPBLOCK_M0S8_CTBM_VERSION, 0
.set CYIPBLOCK_m0s8cpuss_VERSION, 0
.set CYIPBLOCK_m0s8csd_VERSION, 0
.set CYIPBLOCK_m0s8gpio2_VERSION, 0
.set CYIPBLOCK_m0s8hsiom4a_VERSION, 0
.set CYIPBLOCK_m0s8lcd_VERSION, 0
.set CYIPBLOCK_m0s8lpcomp_VERSION, 0
.set CYIPBLOCK_m0s8pclk_VERSION, 0
.set CYIPBLOCK_m0s8sar_VERSION, 0
.set CYIPBLOCK_m0s8scb_VERSION, 0
.set CYIPBLOCK_m0s8srssv2_VERSION, 1
.set CYIPBLOCK_m0s8tcpwm_VERSION, 0
.set CYIPBLOCK_m0s8udbif_VERSION, 0
.set CYIPBLOCK_S8_GPIO_VERSION, 2
.set CYDEV_BOOTLOADER_ENABLE, 0
.endif