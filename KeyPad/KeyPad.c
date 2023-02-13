/*
 * KeyPad.c
 *
 *  Created on: Jun 14, 2022
 *      Author: lenovo
 */

/*#include "KeyPad.h"

void H_KeyPad_void_KeyPadInit(void)
{
	M_Dio_void_PinMode(KEYPAD_R0_PIN,OUTPUT);
	M_Dio_void_PinMode(KEYPAD_R1_PIN,OUTPUT);
	M_Dio_void_PinMode(KEYPAD_R2_PIN,OUTPUT);
	M_Dio_void_PinMode(KEYPAD_R3_PIN,OUTPUT);

	M_Dio_void_PinMode(KEYPAD_C0_PIN,OUTPUT);
	M_Dio_void_PinMode(KEYPAD_C1_PIN,OUTPUT);
	M_Dio_void_PinMode(KEYPAD_C2_PIN,OUTPUT);
	M_Dio_void_PinMode(KEYPAD_C3_PIN,OUTPUT);

	M_Dio_void_PinWrite(KEYPAD_R0_PIN,HIGH);
	M_Dio_void_PinWrite(KEYPAD_R1_PIN,HIGH);
	M_Dio_void_PinWrite(KEYPAD_R2_PIN,HIGH);
	M_Dio_void_PinWrite(KEYPAD_R3_PIN,HIGH);
}

u8 H_KeyPad_u8_KeyPadRead(void)
{
	u8 Local_u8_Col = 0;
	u8 Local_u8_Row = 0;
	u8 Local_u8_Reading = 1;

	for(Local_u8_Col = KEYPAD_R0_PIN; Local_u8_Row <= KEYPAD_R3_PIN; Local_u8_Row++)
	{
		M_Dio_void_PinWrite(Local_u8_Row, LOW);
		for
		{
			Local_u8_Reading = M_Dio_void_u8_PinRead(Local_u8_Col);
			if(Local_u8_Reading == 0)
				{
					return 0;
				}
		}
		M_Dio_void_PinWrite(Local_u8_Row, HIGH);
	}

}*/

