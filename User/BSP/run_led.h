#ifndef __RUN_LED_H
#define __RUN_LED_H
#include "main.h"
#if (VER == 1)
#define RUN_LED_CLK     RCU_GPIOB
#define RUN_LED_PORT    GPIOB
#define RUN_LED_PIN     GPIO_PIN_9
#elif (VER == 2)

#define RUN_LED_CLK     RCU_GPIOB
#define RUN_LED_PORT    GPIOB
#define RUN_LED_PIN     GPIO_PIN_8

#endif


void RunLedInit(void);
void RunLed(void);


#endif


