/*
 * Led.c
 *
 *  Created on: Jun 11, 2022
 *      Author: lenovo
 */


#include"Led.h"




void H_Led_void_LedInit(u8 Local_u8_Num) //it's a LED so always will be OUTPUT
{
	switch(Local_u8_Num)
	{
		case BLU_LED:
			M_Dio_void_PinMode(BLU_LED_PIN,OUTPUT);
			break;

		case GRN_LED:
			M_Dio_void_PinMode(GRN_LED_PIN,OUTPUT);
			break;

		case RED_LED:
			M_Dio_void_PinMode(RED_LED_PIN,OUTPUT);
			break;
	}


}

void H_Led_void_LedOn(u8 Local_u8_Led)
{
	switch(Local_u8_Led)
	{
		case BLU_LED:
			M_Dio_void_PinWrite(BLU_LED_PIN,HIGH);
			break;

		case GRN_LED:
			M_Dio_void_PinWrite(GRN_LED_PIN,HIGH);
			break;

		case RED_LED:
			M_Dio_void_PinWrite(RED_LED_PIN,HIGH);
			break;

		default:
			break;
	}

}

void H_Led_void_LedOff(u8 Local_u8_Led)
{
	switch(Local_u8_Led)
		{
			case BLU_LED:
				M_Dio_void_PinWrite(BLU_LED_PIN,LOW);
				break;

			case GRN_LED:
				M_Dio_void_PinWrite(GRN_LED_PIN,LOW);
				break;

			case RED_LED:
				M_Dio_void_PinWrite(RED_LED_PIN,LOW);
				break;

			default:
				break;
		}
}

void H_Led_void_LedBlink(u8 Local_u8_Num)
{
	switch(Local_u8_Num)
	{
		case BLU_LED:

			H_Led_void_LedInit(BLU_LED);
			H_Led_void_LedOn(BLU_LED);
			_delay_ms(LED_DELAY_TIME);
			H_Led_void_LedOff(BLU_LED);
			_delay_ms(LED_DELAY_TIME);
			break;

		case RED_LED:

				H_Led_void_LedInit(RED_LED);
				H_Led_void_LedOn(RED_LED);
				_delay_ms(LED_DELAY_TIME);
				H_Led_void_LedOff(RED_LED);
				_delay_ms(LED_DELAY_TIME);
				break;

		case GRN_LED:

			H_Led_void_LedInit(GRN_LED);
			H_Led_void_LedOn(GRN_LED);
			_delay_ms(LED_DELAY_TIME);
			H_Led_void_LedOff(GRN_LED);
			_delay_ms(LED_DELAY_TIME);
			break;

		default:
			break;
	}

}

void H_Led_void_LedToggle(u8 Local_u8_Num)
{
	switch(Local_u8_Num)
	{
		case BLU_LED: M_Dio_void_PinTog(BLU_LED_PIN);break;
		case RED_LED: M_Dio_void_PinTog(RED_LED_PIN);break;
		case GRN_LED: M_Dio_void_PinTog(GRN_LED_PIN);break;
		default:										 break;
	}
}
