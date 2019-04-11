
#include "gd32f10x.h"
void RunLedInit(void)
{
    /* enable the led clock */
    rcu_periph_clock_enable(RCU_GPIOB);
    gpio_init(GPIOB, GPIO_MODE_OUT_PP, GPIO_OSPEED_2MHZ, GPIO_PIN_9);

}
void RunLed(void)
{
    GPIO_OCTL(GPIOB) ^= (uint32_t)GPIO_PIN_9;
}
















