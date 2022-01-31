#pragma once
#include <variant.h>

#define HAL_MODULE_ENABLED
#define HAL_ADC_MODULE_ENABLED
#define HAL_CRC_MODULE_ENABLED
#define HAL_DMA_MODULE_ENABLED
#define HAL_GPIO_MODULE_ENABLED
#define HAL_I2C_MODULE_ENABLED
#define HAL_PWR_MODULE_ENABLED
#define HAL_RCC_MODULE_ENABLED
//#define HAL_RTC_MODULE_ENABLED Real Time Clock...do we use it?
#define HAL_SPI_MODULE_ENABLED
#define HAL_TIM_MODULE_ENABLED
#define HAL_USART_MODULE_ENABLED
#define HAL_CORTEX_MODULE_ENABLED
//#define HAL_UART_MODULE_ENABLED // by default
//#define HAL_PCD_MODULE_ENABLED  // Since STM32 v3.10700.191028 this is automatically added if any type of USB is enabled (as in Arduino IDE)
#define HAL_WWDG_MODULE_ENABLED
#define HAL_SD_MODULE_ENABLED
#define USE_SD_TRANSCEIVER 0
#define HAL_CAN_MODULE_ENABLED

//#undef HAL_SD_MODULE_ENABLED
#undef HAL_DAC_MODULE_ENABLED
#undef HAL_FLASH_MODULE_ENABLED
//#undef HAL_CAN_MODULE_ENABLED
#undef HAL_CAN_LEGACY_MODULE_ENABLED
#undef HAL_CEC_MODULE_ENABLED
#undef HAL_CRYP_MODULE_ENABLED
#undef HAL_DCMI_MODULE_ENABLED
#undef HAL_DMA2D_MODULE_ENABLED
#undef HAL_ETH_MODULE_ENABLED
#undef HAL_NAND_MODULE_ENABLED
#undef HAL_NOR_MODULE_ENABLED
#undef HAL_PCCARD_MODULE_ENABLED
#undef HAL_SRAM_MODULE_ENABLED
#undef HAL_SDRAM_MODULE_ENABLED
#undef HAL_HASH_MODULE_ENABLED
#undef HAL_EXTI_MODULE_ENABLED
#undef HAL_SMBUS_MODULE_ENABLED
#undef HAL_I2S_MODULE_ENABLED
#undef HAL_IWDG_MODULE_ENABLED
#undef HAL_LTDC_MODULE_ENABLED
#undef HAL_DSI_MODULE_ENABLED
#undef HAL_QSPI_MODULE_ENABLED
#undef HAL_RNG_MODULE_ENABLED
#undef HAL_SAI_MODULE_ENABLED
#undef HAL_IRDA_MODULE_ENABLED
#undef HAL_SMARTCARD_MODULE_ENABLED
#undef HAL_HCD_MODULE_ENABLED
#undef HAL_FMPI2C_MODULE_ENABLED
#undef HAL_SPDIFRX_MODULE_ENABLED
#undef HAL_DFSDM_MODULE_ENABLED
#undef HAL_LPTIM_MODULE_ENABLED
#undef HAL_MMC_MODULE_ENABLED

