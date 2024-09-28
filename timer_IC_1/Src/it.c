/*
 * it.c
 *
 *      Author: Nizar MOJAB
 */

#include "main.h"

extern TIM_HandleTypeDef htimer2;
extern TIM_HandleTypeDef htimer6;

/**
  * @brief This function handles System tick timer.
  */
void SysTick_Handler (void)
{
	HAL_IncTick();
	HAL_SYSTICK_IRQHandler();
}

/**
  * @brief This function handles Timer 2 interrupt.
  */
void TIM2_IRQHandler(void)
{
	HAL_TIM_IRQHandler(&htimer2);
}

/**
  * @brief This function handles Timer 6 interrupt and DAC underrun interrupts.
  */
void TIM6_DAC_IRQHandler(void)
{
	HAL_GPIO_TogglePin(GPIOA,GPIO_PIN_5);
	HAL_TIM_IRQHandler(&htimer6);
}