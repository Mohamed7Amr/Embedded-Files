/*
 * BuzzerCfg.h
 *
 *  Created on: Jun 13, 2022
 *      Author: lenovo
 */

#ifndef HAL_BUZ_BUZCFG_H_
#define HAL_BUZ_BUZCFG_H_

/******************************************SELECT_BUZ_PIN****************************/

#define BuzPin				PC5_PIN

/******************************************SELECT_FREQUENCY_CPU****************************/

#define F_CPU 16000000UL //LED doesn't spend 10 seconds on, sth wrong with frequency?

/****************************************************SELECT_DELAY_TIME**************************************/

#define BUZ_DELAY_TIME			250


#endif /* HAL_BUZ_BUZCFG_H_ */
