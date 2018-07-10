#ifndef SWD_PIN_CONFIG_H_
#define SWD_PIN_CONFIG_H_
#include "stm32f1xx_hal_gpio.h"

/* определение портов и пинов SWD */
#define SWDIO_PORT	GPIOA
#define SWDIO_PIN	  GPIO_PIN_4
#define SWCLK_PORT	GPIOA
#define SWCLK_PIN	  GPIO_PIN_5
#define nRESET_PORT	GPIOA
#define nRESET_PIN	GPIO_PIN_6

/* остальные определения */
#define LED1_Pin GPIO_PIN_13
#define LED1_GPIO_Port GPIOC

#define DAP_LED_1_Pin GPIO_PIN_0
#define DAP_LED_1_GPIO_Port GPIOA
#define DAP_LED_2_Pin GPIO_PIN_1
#define DAP_LED_2_GPIO_Port GPIOA

#define TX_Pin GPIO_PIN_2
#define TX_GPIO_Port GPIOA
#define RX_Pin GPIO_PIN_3
#define RX_GPIO_Port GPIOA

#define DBG_TX_Pin GPIO_PIN_9
#define DBG_TX_GPIO_Port GPIOA
#define DBG_RX_Pin GPIO_PIN_10
#define DBG_RX_GPIO_Port GPIOA

#define USB_DM_Pin GPIO_PIN_11
#define USB_DM_GPIO_Port GPIOA
#define USB_DP_Pin GPIO_PIN_12
#define USB_DP_GPIO_Port GPIOA
#define USB_FS_Pin GPIO_PIN_15
#define USB_FS_GPIO_Port GPIOA

#define SYS_SWDIO_Pin GPIO_PIN_13
#define SYS_SWDIO_GPIO_Port GPIOA
#define SYS_SWCLK_Pin GPIO_PIN_14
#define SYS_SWCLK_GPIO_Port GPIOA


#endif /* SWD_PIN_CONFIG_H_ */
