#ifndef SWD_PIN_CONFIG_H_
#define SWD_PIN_CONFIG_H_
#include "stm32f1xx_hal_gpio.h"

/* определение портов и пинов SWD */
#define SWDIO_PORT	        GPIOB
#define SWDIO_PIN_NUMBER	  8   // не баг, а фича: так приходится определять для быстродействия, см. макросы в DAP_config.h
#define SWCLK_PORT	        GPIOA
#define SWCLK_PIN_NUMBER	  5
#define nRESET_PORT	        GPIOA
#define nRESET_PIN_NUMBER	  6

#define SWDIO_PIN   ((uint16_t)(1 << SWDIO_PIN_NUMBER))
#define SWCLK_PIN   ((uint16_t)(1 << SWCLK_PIN_NUMBER))
#define nRESET_PIN  ((uint16_t)(1 << nRESET_PIN_NUMBER))

/* остальные определения */
#define LED1_PIN            GPIO_PIN_13
#define LED1_GPIO_PORT      GPIOC

#define DAP_LED_1_PIN       GPIO_PIN_0
#define DAP_LED_1_GPIO_PORT GPIOA
#define DAP_LED_2_PIN       GPIO_PIN_1
#define DAP_LED_2_GPIO_PORT GPIOA

#define TX_PIN              GPIO_PIN_2
#define TX_GPIO_PORT        GPIOA
#define RX_PIN              GPIO_PIN_3
#define RX_GPIO_PORT        GPIOA

#define DBG_TX_PIN          GPIO_PIN_9
#define DBG_TX_GPIO_PORT    GPIOA
#define DBG_RX_PIN          GPIO_PIN_10
#define DBG_RX_GPIO_PORT    GPIOA

#define USB_DM_PIN          GPIO_PIN_11
#define USB_DM_GPIO_PORT    GPIOA
#define USB_DP_PIN          GPIO_PIN_12
#define USB_DP_GPIO_PORT    GPIOA
#define USB_FS_PIN          GPIO_PIN_15
#define USB_FS_GPIO_PORT    GPIOA

#define SYS_SWDIO_PIN       GPIO_PIN_13
#define SYS_SWDIO_GPIO_PORT GPIOA
#define SYS_SWCLK_PIN       GPIO_PIN_14
#define SYS_SWCLK_GPIO_PORT GPIOA

#endif /* SWD_PIN_CONFIG_H_ */
