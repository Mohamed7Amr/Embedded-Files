/*
 * LedCfg.h
 *
 *  Created on: Jun 11, 2022
 *      Author: lenovo
 */

#ifndef HAL_LED_LEDCFG_H_
#define HAL_LED_LEDCFG_H_


/******************************************SELECT_LED_PIN****************************/

//#define LED_PIN					PC1
#define BLU_LED_PIN				PC2_PIN
#define GRN_LED_PIN				PC1_PIN
#define RED_LED_PIN				PC0_PIN

/******************************************SELECT_FREQUENCY_CPU****************************/

#define F_CPU 					16000000UL //LED doesn't spend 10 seconds on, sth wrong with frequency?

/******************************************SELECT_DELAY_TIME****************************/

#define LED_DELAY_TIME			250


#endif /* HAL_LED_LEDCFG_H_ */
