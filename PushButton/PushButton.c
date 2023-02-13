/*
 * PushButton.c
 *
 *  Created on: Jun 18, 2022
 *      Author: lenovo
 */

#include "PushButton.h"
#include "Led.h"
#include "Buz.h"

void H_PushButton_void_PBInit(u8 Local_u8_PushButton)
{
	switch(Local_u8_PushButton)
	{
	case PushButton1:
		M_Dio_void_PinMode(PushButton1_Pin,INPUT);
		break;
	case PushButton2:
		M_Dio_void_PinMode(PushButton2_Pin,INPUT);
		break;
	case PushButton3:
		M_Dio_void_PinMode(PushButton3_Pin,INPUT);
		break;
	case PushButton4:
		M_Dio_void_PinMode(PushButton4_Pin,INPUT);
		break;
	default:
		break;
	}

}

u8 H_PushButton_u8_PBRead(u8 Local_u8_PushButton)
{
	u8 Local_u8_Reading = 0;

	switch(Local_u8_PushButton)
	{
	case PushButton1:
		Local_u8_Reading = M_Dio_u8_PinRead(PushButton1_Pin); //here you gonna passs PD2 to PinRead Fn in Dio.c
		break;
	case PushButton2:
		Local_u8_Reading = M_Dio_u8_PinRead(PushButton2_Pin);
		break;
	case PushButton3:
		Local_u8_Reading = M_Dio_u8_PinRead(PushButton3_Pin);
		break;
	case PushButton4:
		Local_u8_Reading = M_Dio_u8_PinRead(PushButton4_Pin);
		break;
	default:
		break;
	}

	return Local_u8_Reading;
}

void H_PushButton_void_LEDPB(u8 Local_u8_LEDPBcolor)
{
	switch(Local_u8_LEDPBcolor)
		{
			case BLUPushButton:
				if(H_PushButton_u8_PBRead (PushButton1) == PRESSED)
				{
					H_Led_void_LedInit(BLU_LED);
					H_Led_void_LedOn(BLU_LED);
				}
				else
				{
					H_Led_void_LedOff(BLU_LED);
				}
			break;

			case GRNPushButton:
				if(H_PushButton_u8_PBRead (PushButton2) == PRESSED)
				{
					H_Led_void_LedInit(GRN_LED);
					H_Led_void_LedOn(GRN_LED);
				}
				else
				{
					H_Led_void_LedOff(GRN_LED);
				}
				break;

			case REDPushButton:
				if(H_PushButton_u8_PBRead (PushButton3) == PRESSED)
				{
					H_Led_void_LedInit(RED_LED);
					H_Led_void_LedOn(RED_LED);
				}
				else
				{
					H_Led_void_LedOff(RED_LED);
				}
				break;
		}

}

void H_PushButton_void_BuzPB(void)
{
	if(H_PushButton_u8_PBRead (PushButton4) == PRESSED)
	{
	 /*	H_Buz_void_BuzInit();
		H_Buz_void_BuzOn();*/

		H_Buz_void_BuzBeep();
	}
	else
	{
		H_Buz_void_BuzOff();
	}



}
