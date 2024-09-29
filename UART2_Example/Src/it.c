/*
 * it.c
 *

 *      Author: Nizar MOJAB
 */

#include "main.h"
#include "stm32f4xx_hal.h"


void SysTick_Handler (void)
{
	HAL_IncTick();
	HAL_SYSTICK_IRQHandler();
}
