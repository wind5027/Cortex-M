/**
  ******************************************************************************
  * @file    sysled.c
  * @author  Jungle
  * @version V1.0
  * @date    2017/9/15
  * @brief
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx.h"
#include <sysled.h>

/** @addtogroup Template_Project
  * @{
  */

/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
#define led_ws2812T0High       34
#define led_ws2812T1High       71

/* Private macro -------------------------------------------------------------*/
uint32_t reset[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
uint32_t white[] = {71,71,71,71,71,71,71,71,71,71,71,71,71,71,71,71,71,71,71,71,71,71,71,71};
uint32_t red[]   = {34,34,34,34,34,34,34,34,71,71,71,71,71,71,71,71,34,34,34,34,34,34,34,34};
uint32_t yellow[]= {71,71,71,71,71,71,71,71,71,71,71,71,71,71,71,71,35,35,35,35,35,35,35,35};
uint32_t purple[]= {34,34,34,34,34,34,34,34,71,71,71,71,71,71,71,71,71,71,71,71,71,71,71,71};
uint32_t green[] = {71,71,71,71,71,71,71,71,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34};
uint32_t blue[]  = {34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,71,71,71,71,71,71,71,71};
uint32_t putout[]= {34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34,34};

/* Private variables ---------------------------------------------------------*/
/* Private function prototypes -----------------------------------------------*/
/* Private functions ---------------------------------------------------------*/
/**
  * @brief  led_ws2812Test
  * @param  None
  * @retval None
  */
void led_ws2812Test(void)
{
    while(1) {
        for (int i = 0; i < 10000000; i++);
        tim_CCRxSetByDMA(tim_ws2812GRB_tim, 25, white)
        for (int i = 0; i < 10000000; i++);
        tim_CCRxSetByDMA(tim_ws2812GRB_tim, 25, red)
        for (int i = 0; i < 10000000; i++);
        tim_CCRxSetByDMA(tim_ws2812GRB_tim, 25, yellow)
        for (int i = 0; i < 10000000; i++);
        tim_CCRxSetByDMA(tim_ws2812GRB_tim, 25, green)
        for (int i = 0; i < 10000000; i++);
        tim_CCRxSetByDMA(tim_ws2812GRB_tim, 25, blue)
    }
}

/**
  * @}
  */

/************************ Copyright (C) Jungleeee 2017 *****END OF FILE****/
