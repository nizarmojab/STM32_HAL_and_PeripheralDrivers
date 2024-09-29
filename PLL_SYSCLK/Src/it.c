/*
 * it.c
 *
 *      Author: Nizar MOJAB
 */

#include "main.h"

/**
  * @brief This function handles System tick timer.
  */
void SysTick_Handler (void)
{
	HAL_IncTick();
	HAL_SYSTICK_IRQHandler();
}


