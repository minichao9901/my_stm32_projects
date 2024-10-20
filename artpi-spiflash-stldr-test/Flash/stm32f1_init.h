#ifndef __STM32F1_INIT_H
#define __STM32F1_INIT_H
#include"stm32h750xx.h"

void gpio_init();
void SPI2_INIT();
unsigned char  SPI2_ReadWrites(unsigned char data);
void RCC_DeInit(void);
void USART1_Init(void);
void Stm32_Clock_Init(void);
#endif
