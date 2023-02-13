/*
 * Lcd.h
 *
 *  Created on: Jun 21, 2022
 *      Author: lenovo
 */

#ifndef HAL_LCD_LCD_H_
#define HAL_LCD_LCD_H_

/**************************************************************************INCLUDES**************************************************/

#include "Dio.h"
#include "LcdCfg.h"
#include <util/delay.h>





/**************************************************************************MACROS**************************************************/

#define _8_Bits_Mode					0X38 //you can't start macro with a number(dunno y maybe by convention) thus started with underscore
#define _4_Bits_Mode0					0X33
#define _4_Bits_Mode1					0X32
#define _4_Bits_Mode2					0X28
#define DISPLAY_ON_CURSOR_OFF			0X0C
#define LCD_RETURN_HOME					0X02
#define LCD_CLEAR						0X01
#define LCD_2LINES_4BIT_MODE			0X28


#define NULL_CHARACTER					'\0'






/**************************************************************************PROTOTYPES**************************************************/

void H_Lcd_void_LcdInit(void);
void H_Lcd_void_LcdWriteCharacter(u8);
void H_Lcd_void_LcdWriteCommand(u8);
void H_Lcd_void_LcdWriteString(u8*);
void H_Lcd_void_LcdClear(void);



#endif /* HAL_LCD_LCD_H_ */
