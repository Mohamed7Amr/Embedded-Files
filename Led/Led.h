/*
 * Led.h
 *
 *  Created on: Jun 11, 2022
 *      Author: lenovo
 */

#ifndef HAL_LED_LED_H_
#define HAL_LED_LED_H_





/******************************************Includes****************************/
#include "Dio.h"
#include "LedCfg.h"
#include <util/delay.h>








/************************************************MACROS********************************/

#define BLU_LED					1
#define GRN_LED					2
#define RED_LED					3





/*****************************************PROTOTYPES*****************************/
void H_Led_void_LedInit(u8);
void H_Led_void_LedOn(u8);
void H_Led_void_LedOff(u8);
void H_Led_void_LedBlink(u8);
void H_Led_void_LedToggle(u8);

#endif /* HAL_LED_LED_H_ */
