/*
 * Lcd.c
 *
 *  Created on: Jun 21, 2022
 *      Author: lenovo
 */

#include "Lcd.h"

void H_Lcd_void_LcdInit(void)
{
	//M_Dio_void_PinMode(LCD_DATA0_PIN,OUTPUT);
	//M_Dio_void_PinMode(LCD_DATA1_PIN,OUTPUT);
	//M_Dio_void_PinMode(LCD_DATA2_PIN,OUTPUT);
	M_Dio_void_PinMode(LCD_DATA3_PIN,OUTPUT);
	M_Dio_void_PinMode(LCD_DATA4_PIN,OUTPUT);
	M_Dio_void_PinMode(LCD_DATA5_PIN,OUTPUT);
	M_Dio_void_PinMode(LCD_DATA6_PIN,OUTPUT);
	//M_Dio_void_PinMode(LCD_DATA7_PIN,OUTPUT);
	M_Dio_void_PinMode(LCD_EN_PIN,OUTPUT);
	M_Dio_void_PinMode(LCD_RS_PIN,OUTPUT);

	_delay_ms(1000); //all the above is related to kit-MC which functions with 16MHZ, all the below is related to LCD-MC which functions slower with 8MHZ or less
	//so we use a delay

	//H_Lcd_void_LcdWriteCommand(_8_Bits_Mode); //it's a must command when initiating pins to say that LCD will work with 8 pins not 4
	H_Lcd_void_LcdWriteCommand(_4_Bits_Mode0);
	H_Lcd_void_LcdWriteCommand(_4_Bits_Mode1);
	H_Lcd_void_LcdWriteCommand(_4_Bits_Mode2);
	H_Lcd_void_LcdWriteCommand(DISPLAY_ON_CURSOR_OFF); //it's a must command also to make display work?!?
	H_Lcd_void_LcdWriteCommand(LCD_RETURN_HOME);
	H_Lcd_void_LcdWriteCommand(LCD_CLEAR);
	//H_Lcd_void_LcdWriteCommand(LCD_2LINES_4BIT_MODE);

	_delay_ms(5); //this delay is because of the difference between the 2 crystals
}


void H_Lcd_void_LcdWriteCharacter(u8 Local_u8_Character)
{
	M_Dio_void_PinWrite(LCD_RS_PIN,HIGH);
	Lcd_Data_Port = ((Local_u8_Character >> 1) & 0b01111000) | (Lcd_Data_Port & 0b10000111);
	M_Dio_void_PinWrite(LCD_EN_PIN,HIGH);
	_delay_ms(1);
	M_Dio_void_PinWrite(LCD_EN_PIN,LOW);
	_delay_ms(1);
	Lcd_Data_Port = ((Local_u8_Character << 3) & 0b01111000) | (Lcd_Data_Port & 0b10000111);
	M_Dio_void_PinWrite(LCD_EN_PIN,HIGH);
	_delay_ms(1);
	M_Dio_void_PinWrite(LCD_EN_PIN,LOW);
	_delay_ms(5); //this delay is because of the difference between the 2 crystals
}


void H_Lcd_void_LcdWriteCommand(u8 Local_u8_Command)
{
	M_Dio_void_PinWrite(LCD_RS_PIN,LOW);
	Lcd_Data_Port = ((Local_u8_Command >> 1) & 0b01111000) | (Lcd_Data_Port & 0b10000111); //you may notice that i am sending bits'values to register PORTA before enabling MC to avoid any possible noise
	M_Dio_void_PinWrite(LCD_EN_PIN,HIGH); //effect, because if i enable then send the bits values, maybe in a microsecond in between, some noise affect what shall be sent.
	_delay_ms(1);
	M_Dio_void_PinWrite(LCD_EN_PIN,LOW); //Had to close it also for noise
	_delay_ms(1);
	Lcd_Data_Port = ((Local_u8_Command << 3) & 0b01111000) | (Lcd_Data_Port & 0b10000111) ;
	M_Dio_void_PinWrite(LCD_EN_PIN,HIGH);
	_delay_ms(1);
	M_Dio_void_PinWrite(LCD_EN_PIN,LOW);
	_delay_ms(5); //this delay is because of the difference between the 2 crystals
}


void H_Lcd_void_LcdWriteString(u8* Local_u8_Ptr) //This function is about repeating the writing function several times quickly
{
	u8 Local_u8_Counter = 0;
	while(Local_u8_Ptr[Local_u8_Counter] != NULL_CHARACTER)
	{
		H_Lcd_void_LcdWriteCharacter(Local_u8_Ptr[Local_u8_Counter]);
		Local_u8_Counter++;
	}
}


void H_Lcd_void_LcdClear(void) //this function just to increase readability to the user, but we can directly use the command clear
{
	H_Lcd_void_LcdWriteCommand(LCD_CLEAR);
}
