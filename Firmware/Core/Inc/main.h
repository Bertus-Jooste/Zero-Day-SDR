/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define MX_ENBL_Pin GPIO_PIN_2
#define MX_ENBL_GPIO_Port GPIOE
#define VGA_ENB_Pin GPIO_PIN_3
#define VGA_ENB_GPIO_Port GPIOE
#define VGA_HILO_Pin GPIO_PIN_4
#define VGA_HILO_GPIO_Port GPIOE
#define ADC_DCS_Pin GPIO_PIN_5
#define ADC_DCS_GPIO_Port GPIOE
#define ADC_DFS_Pin GPIO_PIN_6
#define ADC_DFS_GPIO_Port GPIOE
#define HSE_IN_Pin GPIO_PIN_0
#define HSE_IN_GPIO_Port GPIOH
#define HSE_OUT_Pin GPIO_PIN_1
#define HSE_OUT_GPIO_Port GPIOH
#define ADC_B0_Pin GPIO_PIN_0
#define ADC_B0_GPIO_Port GPIOC
#define ADC_B1_Pin GPIO_PIN_1
#define ADC_B1_GPIO_Port GPIOC
#define ADC_B2_Pin GPIO_PIN_2
#define ADC_B2_GPIO_Port GPIOC
#define ADC_B3_Pin GPIO_PIN_3
#define ADC_B3_GPIO_Port GPIOC
#define UART_TX_Pin GPIO_PIN_0
#define UART_TX_GPIO_Port GPIOA
#define UART_RX_Pin GPIO_PIN_1
#define UART_RX_GPIO_Port GPIOA
#define VGA_GAIN_Pin GPIO_PIN_4
#define VGA_GAIN_GPIO_Port GPIOA
#define ADC_B4_Pin GPIO_PIN_4
#define ADC_B4_GPIO_Port GPIOC
#define ADC_B5_Pin GPIO_PIN_5
#define ADC_B5_GPIO_Port GPIOC
#define ADC_PWDN_A_Pin GPIO_PIN_7
#define ADC_PWDN_A_GPIO_Port GPIOE
#define ADC_PWDN_B_Pin GPIO_PIN_8
#define ADC_PWDN_B_GPIO_Port GPIOE
#define ADC_OEB_A_Pin GPIO_PIN_9
#define ADC_OEB_A_GPIO_Port GPIOE
#define ADC_OEB_B_Pin GPIO_PIN_10
#define ADC_OEB_B_GPIO_Port GPIOE
#define ADC_OTR_A_Pin GPIO_PIN_11
#define ADC_OTR_A_GPIO_Port GPIOE
#define ADC_OTR_B_Pin GPIO_PIN_12
#define ADC_OTR_B_GPIO_Port GPIOE
#define ADC_XO_OE_Pin GPIO_PIN_13
#define ADC_XO_OE_GPIO_Port GPIOE
#define LO_XO_OE_Pin GPIO_PIN_10
#define LO_XO_OE_GPIO_Port GPIOB
#define ADC_A8_Pin GPIO_PIN_8
#define ADC_A8_GPIO_Port GPIOD
#define ADC_A9_Pin GPIO_PIN_9
#define ADC_A9_GPIO_Port GPIOD
#define ADC_A10_Pin GPIO_PIN_10
#define ADC_A10_GPIO_Port GPIOD
#define ADC_A11_Pin GPIO_PIN_11
#define ADC_A11_GPIO_Port GPIOD
#define ADC_B6_Pin GPIO_PIN_6
#define ADC_B6_GPIO_Port GPIOC
#define ADC_B7_Pin GPIO_PIN_7
#define ADC_B7_GPIO_Port GPIOC
#define ADC_B8_Pin GPIO_PIN_8
#define ADC_B8_GPIO_Port GPIOC
#define ADC_B9_Pin GPIO_PIN_9
#define ADC_B9_GPIO_Port GPIOC
#define USB_DM_Pin GPIO_PIN_11
#define USB_DM_GPIO_Port GPIOA
#define USB_DP_Pin GPIO_PIN_12
#define USB_DP_GPIO_Port GPIOA
#define SWDIO_Pin GPIO_PIN_13
#define SWDIO_GPIO_Port GPIOA
#define SWCLK_Pin GPIO_PIN_14
#define SWCLK_GPIO_Port GPIOA
#define ADC_B10_Pin GPIO_PIN_10
#define ADC_B10_GPIO_Port GPIOC
#define ADC_B11_Pin GPIO_PIN_11
#define ADC_B11_GPIO_Port GPIOC
#define ADC_A0_Pin GPIO_PIN_0
#define ADC_A0_GPIO_Port GPIOD
#define ADC_A1_Pin GPIO_PIN_1
#define ADC_A1_GPIO_Port GPIOD
#define ADC_A2_Pin GPIO_PIN_2
#define ADC_A2_GPIO_Port GPIOD
#define ADC_A3_Pin GPIO_PIN_3
#define ADC_A3_GPIO_Port GPIOD
#define ADC_A4_Pin GPIO_PIN_4
#define ADC_A4_GPIO_Port GPIOD
#define ADC_A5_Pin GPIO_PIN_5
#define ADC_A5_GPIO_Port GPIOD
#define ADC_A6_Pin GPIO_PIN_6
#define ADC_A6_GPIO_Port GPIOD
#define ADC_A7_Pin GPIO_PIN_7
#define ADC_A7_GPIO_Port GPIOD
#define LO_SCK_Pin GPIO_PIN_3
#define LO_SCK_GPIO_Port GPIOB
#define LO_SDO_Pin GPIO_PIN_4
#define LO_SDO_GPIO_Port GPIOB
#define LO_SDI_Pin GPIO_PIN_5
#define LO_SDI_GPIO_Port GPIOB
#define LO_LE_Pin GPIO_PIN_6
#define LO_LE_GPIO_Port GPIOB
#define LO_HW_PD_Pin GPIO_PIN_7
#define LO_HW_PD_GPIO_Port GPIOB
#define LO_PDRF1_Pin GPIO_PIN_8
#define LO_PDRF1_GPIO_Port GPIOB
#define LO_PDRF2_Pin GPIO_PIN_9
#define LO_PDRF2_GPIO_Port GPIOB
#define RF_SWITCH_VCTL_Pin GPIO_PIN_0
#define RF_SWITCH_VCTL_GPIO_Port GPIOE
#define RF_SWITCH_EN_Pin GPIO_PIN_1
#define RF_SWITCH_EN_GPIO_Port GPIOE

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
