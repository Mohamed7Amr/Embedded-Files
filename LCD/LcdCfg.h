/*
 * LcdCfg.h
 *
 *  Created on: Jun 21, 2022
 *      Author: lenovo
 */

#ifndef HAL_LCD_LCDCFG_H_
#define HAL_LCD_LCDCFG_H_

/*******************************************************SELECT_LCD-DATA_PINS*************************************************/

#define LCD_DATA0_PIN				PA0_PIN //it deosn't matter if macros are repeated with EN and RS, cuz only ones exist will be replaced
#define LCD_DATA1_PIN				PA1_PIN //Means that you can't write both LCD_DATA0_PIN and LCD_EN_PIN in any file, u have to always use one of them
#define LCD_DATA2_PIN				PA2_PIN
#define LCD_DATA3_PIN				PA3_PIN
#define LCD_DATA4_PIN				PA4_PIN
#define LCD_DATA5_PIN				PA5_PIN
#define LCD_DATA6_PIN				PA6_PIN
#define LCD_DATA7_PIN				PA7_PIN
#define LCD_EN_PIN					PA2_PIN
#define LCD_RS_PIN					PA1_PIN

/*******************************************************SELECT_LCD-DATA_PINS*************************************************/


#define Lcd_Data_Port						PORTA

/*****************************************************SELECT_FREQUENCY_CPU**************************************************/

#define F_CPU 					16000000UL



#endif /* HAL_LCD_LCDCFG_H_ */
