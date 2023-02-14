/*
 * Buzzer.c
 *
 *  Created on: Jun 13, 2022
 *      Author: lenovo
 */

#include "Buz.h"

void H_Buz_void_BuzInit(void)
{
	M_Dio_void_PinMode(BuzPin,OUTPUT);
}

void H_Buz_void_BuzOn(void)
{
	M_Dio_void_PinWrite(BuzPin,HIGH);
}

void H_Buz_void_BuzOff(void)
{
	M_Dio_void_PinWrite(BuzPin,LOW);
}

void H_Buz_void_BuzBeep(void)
{
	H_Buz_void_BuzInit();
	H_Buz_void_BuzOn();
	_delay_ms(BUZ_DELAY_TIME);
	H_Buz_void_BuzOff();
	_delay_ms(BUZ_DELAY_TIME);
}
