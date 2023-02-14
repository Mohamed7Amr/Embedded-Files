/*
 * Buzzer.h
 *
 *  Created on: Jun 13, 2022
 *      Author: lenovo
 */

#ifndef HAL_BUZ_BUZ_H_
#define HAL_BUZ_BUZ_H_

/***********************************************************INCLUDES*******************************************/
#include "Dio.h"
#include "BuzCfg.h"
#include <util/delay.h>
/***********************************************************PROTOTYPES*******************************************/
void H_Buz_void_BuzInit(void);
void H_Buz_void_BuzOn(void);
void H_Buz_void_BuzOff(void);
void H_Buz_void_BuzBeep(void);


#endif /* HAL_BUZ_BUZ_H_ */
