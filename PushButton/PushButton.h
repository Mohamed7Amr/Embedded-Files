/*
 * PushButton.h
 *
 *  Created on: Jun 18, 2022
 *      Author: lenovo
 */

#ifndef HAL_PUSHBUTTON_PUSHBUTTON_H_
#define HAL_PUSHBUTTON_PUSHBUTTON_H_

/**************************************************************************INCLUDES**************************************************/

#include "Dio.h"
#include "PushButtonCfg.h"





/**************************************************************************MACROS**************************************************/

#define PushButton1		1
#define PushButton2		2
#define PushButton3		3
#define PushButton4		4

#define ActiveLow		1
#define ActiveHigh		2

#if PushButtonSystem == ActiveLow
#define PRESSED			0
#define RELEASED		1
#elif PushButtonSystem == ActiveHigh
#define PRESSED			1
#define RELEASED		0
#endif


#define BLUPushButton	1
#define REDPushButton	2
#define GRNPushButton	3





/**************************************************************************PROTOTYPES**************************************************/

void H_PushButton_void_PBInit(u8);
u8 H_PushButton_u8_PBRead(u8);
void H_PushButton_void_LEDPB(u8);
void H_PushButton_void_BuzPB(void);



#endif /* HAL_PUSHBUTTON_PUSHBUTTON_H_ */
