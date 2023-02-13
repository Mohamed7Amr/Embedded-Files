/*
 * Ssd.h
 *
 *  Created on: Jun 14, 2022
 *      Author: lenovo
 */

#ifndef HAL_SSD_SSD_H_
#define HAL_SSD_SSD_H_

/**************************************************************************INCLUDES**************************************************/
#include "Dio.h"
#include "SsdCfg.h"
#include<util/delay.h>


/**************************************************************************MACROS**************************************************/



/**************************************************************************PROTOTYPES**************************************************/

void H_Ssd_void_SsdInit(void);
void H_Ssd_void_SsdDisplay_PlayingDigits(u8);
void H_Ssd_void_SsdDisplay_IncDec(u8);//function to increment or decrement numbers
void H_Ssd_void_SsdDisplay_Decimal(f32);

#endif /* HAL_SSD_SSD_H_ */
