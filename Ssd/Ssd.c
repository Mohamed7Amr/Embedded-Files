/*
 * Ssd.c
 *
 *  Created on: Jun 14, 2022
 *      Author: lenovo
 */

#include "Ssd.h"

void H_Ssd_void_SsdInit(void)
{
	M_Dio_void_PinMode(Ssd_LED_A,OUTPUT);
	M_Dio_void_PinMode(Ssd_LED_B,OUTPUT);
	M_Dio_void_PinMode(Ssd_LED_C,OUTPUT);
	M_Dio_void_PinMode(Ssd_LED_D,OUTPUT);
	M_Dio_void_PinMode(Ssd_LED_E,OUTPUT);
	M_Dio_void_PinMode(Ssd_LED_F,OUTPUT);
	M_Dio_void_PinMode(Ssd_LED_G,OUTPUT);
	M_Dio_void_PinMode(Ssd_LED_DT,OUTPUT);

	M_Dio_void_PinMode(Ssd_Dispaly1_EN,OUTPUT);//Here I made the 2 pins that give voltage to the 2 SSD as output
	M_Dio_void_PinMode(Ssd_Display2_EN,OUTPUT);
}

void H_Ssd_void_SsdDisplay_PlayingDigits(u8 Local_u8_Num)
{

	//Here I made one of the 2 pins to give voltage to operate transistor as a switch(check the video) to make only the 1st SSD work
	/*	M_Dio_void_PinWrite(Ssd_Display2_EN,LOW);
		M_Dio_void_PinWrite(Ssd_Dispaly1_EN,HIGH);	these two will be transfered to the bottom of the first switch, he will choose which pins (LEDs)will have voltage then he will enable these PINs, all of this to reduce the blur!!*/

	u8 Local_u8_Units = Local_u8_Num % 10;
	u8 Local_u8_Tens = Local_u8_Num /10;

	/*u16 x = 0;
	for(x=0;x<=300;x++)
	{*/
		switch(Local_u8_Units)
		{
		case 0 :
			M_Dio_void_PinWrite(Ssd_LED_A,HIGH);
			M_Dio_void_PinWrite(Ssd_LED_F,HIGH);
			M_Dio_void_PinWrite(Ssd_LED_E,HIGH);
			M_Dio_void_PinWrite(Ssd_LED_D,HIGH);
			M_Dio_void_PinWrite(Ssd_LED_C,HIGH);
			M_Dio_void_PinWrite(Ssd_LED_B,HIGH);
			M_Dio_void_PinWrite(Ssd_LED_G,LOW);
			break;

		case 1 :
			M_Dio_void_PinWrite(Ssd_LED_A,LOW);
			M_Dio_void_PinWrite(Ssd_LED_F,LOW);
			M_Dio_void_PinWrite(Ssd_LED_E,LOW);
			M_Dio_void_PinWrite(Ssd_LED_D,LOW);
			M_Dio_void_PinWrite(Ssd_LED_C,HIGH);
			M_Dio_void_PinWrite(Ssd_LED_B,HIGH);
			M_Dio_void_PinWrite(Ssd_LED_G,HIGH);
			break;

		case 2 :
			M_Dio_void_PinWrite(Ssd_LED_A,HIGH);
			M_Dio_void_PinWrite(Ssd_LED_F,LOW);
			M_Dio_void_PinWrite(Ssd_LED_E,HIGH);
			M_Dio_void_PinWrite(Ssd_LED_D,HIGH);
			M_Dio_void_PinWrite(Ssd_LED_C,LOW);
			M_Dio_void_PinWrite(Ssd_LED_B,HIGH);
			M_Dio_void_PinWrite(Ssd_LED_G,HIGH);
			break;

		case 3 :
			M_Dio_void_PinWrite(Ssd_LED_A,HIGH);
			M_Dio_void_PinWrite(Ssd_LED_F,LOW);
			M_Dio_void_PinWrite(Ssd_LED_E,LOW);
			M_Dio_void_PinWrite(Ssd_LED_D,HIGH);
			M_Dio_void_PinWrite(Ssd_LED_C,HIGH);
			M_Dio_void_PinWrite(Ssd_LED_B,HIGH);
			M_Dio_void_PinWrite(Ssd_LED_G,HIGH);
			break;

		case 4 :
			M_Dio_void_PinWrite(Ssd_LED_A,LOW);
			M_Dio_void_PinWrite(Ssd_LED_F,HIGH);
			M_Dio_void_PinWrite(Ssd_LED_E,LOW);
			M_Dio_void_PinWrite(Ssd_LED_D,LOW);
			M_Dio_void_PinWrite(Ssd_LED_C,HIGH);
			M_Dio_void_PinWrite(Ssd_LED_B,HIGH);
			M_Dio_void_PinWrite(Ssd_LED_G,HIGH);
			break;

		case 5 :
			M_Dio_void_PinWrite(Ssd_LED_A,HIGH);
			M_Dio_void_PinWrite(Ssd_LED_F,HIGH);
			M_Dio_void_PinWrite(Ssd_LED_E,LOW);
			M_Dio_void_PinWrite(Ssd_LED_D,HIGH);
			M_Dio_void_PinWrite(Ssd_LED_C,HIGH);
			M_Dio_void_PinWrite(Ssd_LED_B,LOW);
			M_Dio_void_PinWrite(Ssd_LED_G,HIGH);
			break;

		case 6 :
			M_Dio_void_PinWrite(Ssd_LED_A,HIGH);
			M_Dio_void_PinWrite(Ssd_LED_F,HIGH);
			M_Dio_void_PinWrite(Ssd_LED_E,HIGH);
			M_Dio_void_PinWrite(Ssd_LED_D,HIGH);
			M_Dio_void_PinWrite(Ssd_LED_C,HIGH);
			M_Dio_void_PinWrite(Ssd_LED_B,LOW);
			M_Dio_void_PinWrite(Ssd_LED_G,HIGH);
			break;
		case 7 :
			M_Dio_void_PinWrite(Ssd_LED_A,HIGH);
			M_Dio_void_PinWrite(Ssd_LED_F,HIGH);
			M_Dio_void_PinWrite(Ssd_LED_E,LOW);
			M_Dio_void_PinWrite(Ssd_LED_D,LOW);
			M_Dio_void_PinWrite(Ssd_LED_C,HIGH);
			M_Dio_void_PinWrite(Ssd_LED_B,HIGH);
			M_Dio_void_PinWrite(Ssd_LED_G,LOW);
			break;

		case 8 :
			M_Dio_void_PinWrite(Ssd_LED_A,HIGH);
			M_Dio_void_PinWrite(Ssd_LED_F,HIGH);
			M_Dio_void_PinWrite(Ssd_LED_E,HIGH);
			M_Dio_void_PinWrite(Ssd_LED_D,HIGH);
			M_Dio_void_PinWrite(Ssd_LED_C,HIGH);
			M_Dio_void_PinWrite(Ssd_LED_B,HIGH);
			M_Dio_void_PinWrite(Ssd_LED_G,HIGH);
			break;

		case 9 :
			M_Dio_void_PinWrite(Ssd_LED_A,HIGH);
			M_Dio_void_PinWrite(Ssd_LED_F,HIGH);
			M_Dio_void_PinWrite(Ssd_LED_E,LOW);
			M_Dio_void_PinWrite(Ssd_LED_D,HIGH);
			M_Dio_void_PinWrite(Ssd_LED_C,HIGH);
			M_Dio_void_PinWrite(Ssd_LED_B,HIGH);
			M_Dio_void_PinWrite(Ssd_LED_G,HIGH);
			break;
		default:
			break;

		}

		M_Dio_void_PinWrite(Ssd_Display2_EN,LOW);
		M_Dio_void_PinWrite(Ssd_Dispaly1_EN,HIGH);

		_delay_ms(2000);

	/*	M_Dio_void_PinWrite(Ssd_Dispaly1_EN,LOW);
		M_Dio_void_PinWrite(Ssd_Display2_EN,HIGH); and again he will send voltage first to the pins then enable them after the switch of tens(just as he did with switch of units)*/

		M_Dio_void_PinWrite(Ssd_Dispaly1_EN,LOW);

		switch(Local_u8_Tens)
			{
			case 0 :
				M_Dio_void_PinWrite(Ssd_LED_A,HIGH);
				M_Dio_void_PinWrite(Ssd_LED_F,HIGH);
				M_Dio_void_PinWrite(Ssd_LED_E,HIGH);
				M_Dio_void_PinWrite(Ssd_LED_D,HIGH);
				M_Dio_void_PinWrite(Ssd_LED_C,HIGH);
				M_Dio_void_PinWrite(Ssd_LED_B,HIGH);
				M_Dio_void_PinWrite(Ssd_LED_G,LOW);
				break;

			case 1 :
				M_Dio_void_PinWrite(Ssd_LED_A,LOW);
				M_Dio_void_PinWrite(Ssd_LED_F,LOW);
				M_Dio_void_PinWrite(Ssd_LED_E,LOW);
				M_Dio_void_PinWrite(Ssd_LED_D,LOW);
				M_Dio_void_PinWrite(Ssd_LED_C,HIGH);
				M_Dio_void_PinWrite(Ssd_LED_B,HIGH);
				M_Dio_void_PinWrite(Ssd_LED_G,HIGH);
				break;

			case 2 :
				M_Dio_void_PinWrite(Ssd_LED_A,HIGH);
				M_Dio_void_PinWrite(Ssd_LED_F,LOW);
				M_Dio_void_PinWrite(Ssd_LED_E,HIGH);
				M_Dio_void_PinWrite(Ssd_LED_D,HIGH);
				M_Dio_void_PinWrite(Ssd_LED_C,LOW);
				M_Dio_void_PinWrite(Ssd_LED_B,HIGH);
				M_Dio_void_PinWrite(Ssd_LED_G,HIGH);
				break;

			case 3 :
				M_Dio_void_PinWrite(Ssd_LED_A,HIGH);
				M_Dio_void_PinWrite(Ssd_LED_F,LOW);
				M_Dio_void_PinWrite(Ssd_LED_E,LOW);
				M_Dio_void_PinWrite(Ssd_LED_D,HIGH);
				M_Dio_void_PinWrite(Ssd_LED_C,HIGH);
				M_Dio_void_PinWrite(Ssd_LED_B,HIGH);
				M_Dio_void_PinWrite(Ssd_LED_G,HIGH);
				break;

			case 4 :
				M_Dio_void_PinWrite(Ssd_LED_A,LOW);
				M_Dio_void_PinWrite(Ssd_LED_F,HIGH);
				M_Dio_void_PinWrite(Ssd_LED_E,LOW);
				M_Dio_void_PinWrite(Ssd_LED_D,LOW);
				M_Dio_void_PinWrite(Ssd_LED_C,HIGH);
				M_Dio_void_PinWrite(Ssd_LED_B,HIGH);
				M_Dio_void_PinWrite(Ssd_LED_G,HIGH);
				break;

			case 5 :
				M_Dio_void_PinWrite(Ssd_LED_A,HIGH);
				M_Dio_void_PinWrite(Ssd_LED_F,HIGH);
				M_Dio_void_PinWrite(Ssd_LED_E,LOW);
				M_Dio_void_PinWrite(Ssd_LED_D,HIGH);
				M_Dio_void_PinWrite(Ssd_LED_C,HIGH);
				M_Dio_void_PinWrite(Ssd_LED_B,LOW);
				M_Dio_void_PinWrite(Ssd_LED_G,HIGH);
				break;

			case 6 :
				M_Dio_void_PinWrite(Ssd_LED_A,HIGH);
				M_Dio_void_PinWrite(Ssd_LED_F,HIGH);
				M_Dio_void_PinWrite(Ssd_LED_E,HIGH);
				M_Dio_void_PinWrite(Ssd_LED_D,HIGH);
				M_Dio_void_PinWrite(Ssd_LED_C,HIGH);
				M_Dio_void_PinWrite(Ssd_LED_B,LOW);
				M_Dio_void_PinWrite(Ssd_LED_G,HIGH);
				break;

			case 7 :
				M_Dio_void_PinWrite(Ssd_LED_A,HIGH);
				M_Dio_void_PinWrite(Ssd_LED_F,HIGH);
				M_Dio_void_PinWrite(Ssd_LED_E,LOW);
				M_Dio_void_PinWrite(Ssd_LED_D,LOW);
				M_Dio_void_PinWrite(Ssd_LED_C,HIGH);
				M_Dio_void_PinWrite(Ssd_LED_B,HIGH);
				M_Dio_void_PinWrite(Ssd_LED_G,LOW);
				break;

			case 8 :
				M_Dio_void_PinWrite(Ssd_LED_A,HIGH);
				M_Dio_void_PinWrite(Ssd_LED_F,HIGH);
				M_Dio_void_PinWrite(Ssd_LED_E,HIGH);
				M_Dio_void_PinWrite(Ssd_LED_D,HIGH);
				M_Dio_void_PinWrite(Ssd_LED_C,HIGH);
				M_Dio_void_PinWrite(Ssd_LED_B,HIGH);
				M_Dio_void_PinWrite(Ssd_LED_G,HIGH);
				break;

			case 9 :
				M_Dio_void_PinWrite(Ssd_LED_A,HIGH);
				M_Dio_void_PinWrite(Ssd_LED_F,HIGH);
				M_Dio_void_PinWrite(Ssd_LED_E,LOW);
				M_Dio_void_PinWrite(Ssd_LED_D,HIGH);
				M_Dio_void_PinWrite(Ssd_LED_C,HIGH);
				M_Dio_void_PinWrite(Ssd_LED_B,HIGH);
				M_Dio_void_PinWrite(Ssd_LED_G,HIGH);
				break;

			default:
				break;

			}

			//M_Dio_void_PinWrite(Ssd_Dispaly1_EN,LOW);
			M_Dio_void_PinWrite(Ssd_Display2_EN,HIGH);

		_delay_ms(2000);

			M_Dio_void_PinWrite(Ssd_Dispaly1_EN,LOW);
			M_Dio_void_PinWrite(Ssd_Display2_EN,LOW);
	//}
}

void H_Ssd_void_SsdDisplay_IncDec(u8 Local_u8_Num)
{
	u8 Local_u8_Units = Local_u8_Num % 10;
		u8 Local_u8_Tens = Local_u8_Num /10;

		u16 x = 0;
		for(x=0;x<=300;x++)
		{
			switch(Local_u8_Units)
			{
			case 0 :
				M_Dio_void_PinWrite(Ssd_LED_A,HIGH);
				M_Dio_void_PinWrite(Ssd_LED_F,HIGH);
				M_Dio_void_PinWrite(Ssd_LED_E,HIGH);
				M_Dio_void_PinWrite(Ssd_LED_D,HIGH);
				M_Dio_void_PinWrite(Ssd_LED_C,HIGH);
				M_Dio_void_PinWrite(Ssd_LED_B,HIGH);
				M_Dio_void_PinWrite(Ssd_LED_G,LOW);
				break;

			case 1 :
				M_Dio_void_PinWrite(Ssd_LED_A,LOW);
				M_Dio_void_PinWrite(Ssd_LED_F,LOW);
				M_Dio_void_PinWrite(Ssd_LED_E,LOW);
				M_Dio_void_PinWrite(Ssd_LED_D,LOW);
				M_Dio_void_PinWrite(Ssd_LED_C,HIGH);
				M_Dio_void_PinWrite(Ssd_LED_B,HIGH);
				M_Dio_void_PinWrite(Ssd_LED_G,HIGH);
				break;

			case 2 :
				M_Dio_void_PinWrite(Ssd_LED_A,HIGH);
				M_Dio_void_PinWrite(Ssd_LED_F,LOW);
				M_Dio_void_PinWrite(Ssd_LED_E,HIGH);
				M_Dio_void_PinWrite(Ssd_LED_D,HIGH);
				M_Dio_void_PinWrite(Ssd_LED_C,LOW);
				M_Dio_void_PinWrite(Ssd_LED_B,HIGH);
				M_Dio_void_PinWrite(Ssd_LED_G,HIGH);
				break;

			case 3 :
				M_Dio_void_PinWrite(Ssd_LED_A,HIGH);
				M_Dio_void_PinWrite(Ssd_LED_F,LOW);
				M_Dio_void_PinWrite(Ssd_LED_E,LOW);
				M_Dio_void_PinWrite(Ssd_LED_D,HIGH);
				M_Dio_void_PinWrite(Ssd_LED_C,HIGH);
				M_Dio_void_PinWrite(Ssd_LED_B,HIGH);
				M_Dio_void_PinWrite(Ssd_LED_G,HIGH);
				break;

			case 4 :
				M_Dio_void_PinWrite(Ssd_LED_A,LOW);
				M_Dio_void_PinWrite(Ssd_LED_F,HIGH);
				M_Dio_void_PinWrite(Ssd_LED_E,LOW);
				M_Dio_void_PinWrite(Ssd_LED_D,LOW);
				M_Dio_void_PinWrite(Ssd_LED_C,HIGH);
				M_Dio_void_PinWrite(Ssd_LED_B,HIGH);
				M_Dio_void_PinWrite(Ssd_LED_G,HIGH);
				break;

			case 5 :
				M_Dio_void_PinWrite(Ssd_LED_A,HIGH);
				M_Dio_void_PinWrite(Ssd_LED_F,HIGH);
				M_Dio_void_PinWrite(Ssd_LED_E,LOW);
				M_Dio_void_PinWrite(Ssd_LED_D,HIGH);
				M_Dio_void_PinWrite(Ssd_LED_C,HIGH);
				M_Dio_void_PinWrite(Ssd_LED_B,LOW);
				M_Dio_void_PinWrite(Ssd_LED_G,HIGH);
				break;

			case 6 :
				M_Dio_void_PinWrite(Ssd_LED_A,HIGH);
				M_Dio_void_PinWrite(Ssd_LED_F,HIGH);
				M_Dio_void_PinWrite(Ssd_LED_E,HIGH);
				M_Dio_void_PinWrite(Ssd_LED_D,HIGH);
				M_Dio_void_PinWrite(Ssd_LED_C,HIGH);
				M_Dio_void_PinWrite(Ssd_LED_B,LOW);
				M_Dio_void_PinWrite(Ssd_LED_G,HIGH);
				break;
			case 7 :
				M_Dio_void_PinWrite(Ssd_LED_A,HIGH);
				M_Dio_void_PinWrite(Ssd_LED_F,HIGH);
				M_Dio_void_PinWrite(Ssd_LED_E,LOW);
				M_Dio_void_PinWrite(Ssd_LED_D,LOW);
				M_Dio_void_PinWrite(Ssd_LED_C,HIGH);
				M_Dio_void_PinWrite(Ssd_LED_B,HIGH);
				M_Dio_void_PinWrite(Ssd_LED_G,LOW);
				break;

			case 8 :
				M_Dio_void_PinWrite(Ssd_LED_A,HIGH);
				M_Dio_void_PinWrite(Ssd_LED_F,HIGH);
				M_Dio_void_PinWrite(Ssd_LED_E,HIGH);
				M_Dio_void_PinWrite(Ssd_LED_D,HIGH);
				M_Dio_void_PinWrite(Ssd_LED_C,HIGH);
				M_Dio_void_PinWrite(Ssd_LED_B,HIGH);
				M_Dio_void_PinWrite(Ssd_LED_G,HIGH);
				break;

			case 9 :
				M_Dio_void_PinWrite(Ssd_LED_A,HIGH);
				M_Dio_void_PinWrite(Ssd_LED_F,HIGH);
				M_Dio_void_PinWrite(Ssd_LED_E,LOW);
				M_Dio_void_PinWrite(Ssd_LED_D,HIGH);
				M_Dio_void_PinWrite(Ssd_LED_C,HIGH);
				M_Dio_void_PinWrite(Ssd_LED_B,HIGH);
				M_Dio_void_PinWrite(Ssd_LED_G,HIGH);
				break;
			default:
				break;

			}

			M_Dio_void_PinWrite(Ssd_Display2_EN,LOW);
			M_Dio_void_PinWrite(Ssd_Dispaly1_EN,HIGH);

			_delay_ms(32);

		/*	M_Dio_void_PinWrite(Ssd_Dispaly1_EN,LOW);
			M_Dio_void_PinWrite(Ssd_Display2_EN,HIGH); and again he will send voltage first to the pins then enable them after the switch of tens(just as he did with switch of units)*/

			M_Dio_void_PinWrite(Ssd_Dispaly1_EN,LOW);//2:06:00 in video, msh 3aref ashra7-ha bs now ana fahemha :D, bardo to reduce blur...
/* after he chose theLEDs he needs in the switch, he went to enable the SSD that will show the chosen LEDs, then after the delay (which makes u see the digit for a while),he disabled the SSD from the previous switch before entering the new switch to choose the new LEDs for the other SSD,where after the second switch he will enable the tens SSD and still gonna disable the same SSD we disabled before the tens switch, this means u can delete the disable-Units-SSD statement after the tens switch, i will just comment it*/
			switch(Local_u8_Tens)
				{
				case 0 :
					M_Dio_void_PinWrite(Ssd_LED_A,HIGH);
					M_Dio_void_PinWrite(Ssd_LED_F,HIGH);
					M_Dio_void_PinWrite(Ssd_LED_E,HIGH);
					M_Dio_void_PinWrite(Ssd_LED_D,HIGH);
					M_Dio_void_PinWrite(Ssd_LED_C,HIGH);
					M_Dio_void_PinWrite(Ssd_LED_B,HIGH);
					M_Dio_void_PinWrite(Ssd_LED_G,LOW);
					break;

				case 1 :
					M_Dio_void_PinWrite(Ssd_LED_A,LOW);
					M_Dio_void_PinWrite(Ssd_LED_F,LOW);
					M_Dio_void_PinWrite(Ssd_LED_E,LOW);
					M_Dio_void_PinWrite(Ssd_LED_D,LOW);
					M_Dio_void_PinWrite(Ssd_LED_C,HIGH);
					M_Dio_void_PinWrite(Ssd_LED_B,HIGH);
					M_Dio_void_PinWrite(Ssd_LED_G,HIGH);
					break;

				case 2 :
					M_Dio_void_PinWrite(Ssd_LED_A,HIGH);
					M_Dio_void_PinWrite(Ssd_LED_F,LOW);
					M_Dio_void_PinWrite(Ssd_LED_E,HIGH);
					M_Dio_void_PinWrite(Ssd_LED_D,HIGH);
					M_Dio_void_PinWrite(Ssd_LED_C,LOW);
					M_Dio_void_PinWrite(Ssd_LED_B,HIGH);
					M_Dio_void_PinWrite(Ssd_LED_G,HIGH);
					break;

				case 3 :
					M_Dio_void_PinWrite(Ssd_LED_A,HIGH);
					M_Dio_void_PinWrite(Ssd_LED_F,LOW);
					M_Dio_void_PinWrite(Ssd_LED_E,LOW);
					M_Dio_void_PinWrite(Ssd_LED_D,HIGH);
					M_Dio_void_PinWrite(Ssd_LED_C,HIGH);
					M_Dio_void_PinWrite(Ssd_LED_B,HIGH);
					M_Dio_void_PinWrite(Ssd_LED_G,HIGH);
					break;

				case 4 :
					M_Dio_void_PinWrite(Ssd_LED_A,LOW);
					M_Dio_void_PinWrite(Ssd_LED_F,HIGH);
					M_Dio_void_PinWrite(Ssd_LED_E,LOW);
					M_Dio_void_PinWrite(Ssd_LED_D,LOW);
					M_Dio_void_PinWrite(Ssd_LED_C,HIGH);
					M_Dio_void_PinWrite(Ssd_LED_B,HIGH);
					M_Dio_void_PinWrite(Ssd_LED_G,HIGH);
					break;

				case 5 :
					M_Dio_void_PinWrite(Ssd_LED_A,HIGH);
					M_Dio_void_PinWrite(Ssd_LED_F,HIGH);
					M_Dio_void_PinWrite(Ssd_LED_E,LOW);
					M_Dio_void_PinWrite(Ssd_LED_D,HIGH);
					M_Dio_void_PinWrite(Ssd_LED_C,HIGH);
					M_Dio_void_PinWrite(Ssd_LED_B,LOW);
					M_Dio_void_PinWrite(Ssd_LED_G,HIGH);
					break;

				case 6 :
					M_Dio_void_PinWrite(Ssd_LED_A,HIGH);
					M_Dio_void_PinWrite(Ssd_LED_F,HIGH);
					M_Dio_void_PinWrite(Ssd_LED_E,HIGH);
					M_Dio_void_PinWrite(Ssd_LED_D,HIGH);
					M_Dio_void_PinWrite(Ssd_LED_C,HIGH);
					M_Dio_void_PinWrite(Ssd_LED_B,LOW);
					M_Dio_void_PinWrite(Ssd_LED_G,HIGH);
					break;

				case 7 :
					M_Dio_void_PinWrite(Ssd_LED_A,HIGH);
					M_Dio_void_PinWrite(Ssd_LED_F,HIGH);
					M_Dio_void_PinWrite(Ssd_LED_E,LOW);
					M_Dio_void_PinWrite(Ssd_LED_D,LOW);
					M_Dio_void_PinWrite(Ssd_LED_C,HIGH);
					M_Dio_void_PinWrite(Ssd_LED_B,HIGH);
					M_Dio_void_PinWrite(Ssd_LED_G,LOW);
					break;

				case 8 :
					M_Dio_void_PinWrite(Ssd_LED_A,HIGH);
					M_Dio_void_PinWrite(Ssd_LED_F,HIGH);
					M_Dio_void_PinWrite(Ssd_LED_E,HIGH);
					M_Dio_void_PinWrite(Ssd_LED_D,HIGH);
					M_Dio_void_PinWrite(Ssd_LED_C,HIGH);
					M_Dio_void_PinWrite(Ssd_LED_B,HIGH);
					M_Dio_void_PinWrite(Ssd_LED_G,HIGH);
					break;

				case 9 :
					M_Dio_void_PinWrite(Ssd_LED_A,HIGH);
					M_Dio_void_PinWrite(Ssd_LED_F,HIGH);
					M_Dio_void_PinWrite(Ssd_LED_E,LOW);
					M_Dio_void_PinWrite(Ssd_LED_D,HIGH);
					M_Dio_void_PinWrite(Ssd_LED_C,HIGH);
					M_Dio_void_PinWrite(Ssd_LED_B,HIGH);
					M_Dio_void_PinWrite(Ssd_LED_G,HIGH);
					break;

				default:
					break;

				}

				//M_Dio_void_PinWrite(Ssd_Dispaly1_EN,LOW);
				M_Dio_void_PinWrite(Ssd_Display2_EN,HIGH);

			_delay_ms(32);

				M_Dio_void_PinWrite(Ssd_Dispaly1_EN,LOW);
				M_Dio_void_PinWrite(Ssd_Display2_EN,LOW);
		}
}

void H_Ssd_void_SsdDisplay_Decimal(f32 Local_f32_Num)
{
			u8 Local_u8_Units = (u8)(Local_f32_Num*10) % 10;
			u8 Local_u8_Tens = (u8)Local_f32_Num;

			u16 x = 0;
			for(x=0;x<=300;x++)
			{
				switch(Local_u8_Units)
				{
				case 0 :
					M_Dio_void_PinWrite(Ssd_LED_A,HIGH);
					M_Dio_void_PinWrite(Ssd_LED_F,HIGH);
					M_Dio_void_PinWrite(Ssd_LED_E,HIGH);
					M_Dio_void_PinWrite(Ssd_LED_D,HIGH);
					M_Dio_void_PinWrite(Ssd_LED_C,HIGH);
					M_Dio_void_PinWrite(Ssd_LED_B,HIGH);
					M_Dio_void_PinWrite(Ssd_LED_G,LOW);
				//	M_Dio_void_PinWrite(Ssd_LED_DT,HIGH);
					break;

				case 1 :
					M_Dio_void_PinWrite(Ssd_LED_A,LOW);
					M_Dio_void_PinWrite(Ssd_LED_F,LOW);
					M_Dio_void_PinWrite(Ssd_LED_E,LOW);
					M_Dio_void_PinWrite(Ssd_LED_D,LOW);
					M_Dio_void_PinWrite(Ssd_LED_C,HIGH);
					M_Dio_void_PinWrite(Ssd_LED_B,HIGH);
					M_Dio_void_PinWrite(Ssd_LED_G,HIGH);
				//	M_Dio_void_PinWrite(Ssd_LED_DT,HIGH);
					break;

				case 2 :
					M_Dio_void_PinWrite(Ssd_LED_A,HIGH);
					M_Dio_void_PinWrite(Ssd_LED_F,LOW);
					M_Dio_void_PinWrite(Ssd_LED_E,HIGH);
					M_Dio_void_PinWrite(Ssd_LED_D,HIGH);
					M_Dio_void_PinWrite(Ssd_LED_C,LOW);
					M_Dio_void_PinWrite(Ssd_LED_B,HIGH);
					M_Dio_void_PinWrite(Ssd_LED_G,HIGH);
				//	M_Dio_void_PinWrite(Ssd_LED_DT,HIGH);
					break;

				case 3 :
					M_Dio_void_PinWrite(Ssd_LED_A,HIGH);
					M_Dio_void_PinWrite(Ssd_LED_F,LOW);
					M_Dio_void_PinWrite(Ssd_LED_E,LOW);
					M_Dio_void_PinWrite(Ssd_LED_D,HIGH);
					M_Dio_void_PinWrite(Ssd_LED_C,HIGH);
					M_Dio_void_PinWrite(Ssd_LED_B,HIGH);
					M_Dio_void_PinWrite(Ssd_LED_G,HIGH);
				//	M_Dio_void_PinWrite(Ssd_LED_DT,HIGH);
					break;

				case 4 :
					M_Dio_void_PinWrite(Ssd_LED_A,LOW);
					M_Dio_void_PinWrite(Ssd_LED_F,HIGH);
					M_Dio_void_PinWrite(Ssd_LED_E,LOW);
					M_Dio_void_PinWrite(Ssd_LED_D,LOW);
					M_Dio_void_PinWrite(Ssd_LED_C,HIGH);
					M_Dio_void_PinWrite(Ssd_LED_B,HIGH);
					M_Dio_void_PinWrite(Ssd_LED_G,HIGH);
				//	M_Dio_void_PinWrite(Ssd_LED_DT,HIGH);
					break;

				case 5 :
					M_Dio_void_PinWrite(Ssd_LED_A,HIGH);
					M_Dio_void_PinWrite(Ssd_LED_F,HIGH);
					M_Dio_void_PinWrite(Ssd_LED_E,LOW);
					M_Dio_void_PinWrite(Ssd_LED_D,HIGH);
					M_Dio_void_PinWrite(Ssd_LED_C,HIGH);
					M_Dio_void_PinWrite(Ssd_LED_B,LOW);
					M_Dio_void_PinWrite(Ssd_LED_G,HIGH);
				//	M_Dio_void_PinWrite(Ssd_LED_DT,HIGH);
					break;

				case 6 :
					M_Dio_void_PinWrite(Ssd_LED_A,HIGH);
					M_Dio_void_PinWrite(Ssd_LED_F,HIGH);
					M_Dio_void_PinWrite(Ssd_LED_E,HIGH);
					M_Dio_void_PinWrite(Ssd_LED_D,HIGH);
					M_Dio_void_PinWrite(Ssd_LED_C,HIGH);
					M_Dio_void_PinWrite(Ssd_LED_B,LOW);
					M_Dio_void_PinWrite(Ssd_LED_G,HIGH);
				//	M_Dio_void_PinWrite(Ssd_LED_DT,HIGH);
					break;
				case 7 :
					M_Dio_void_PinWrite(Ssd_LED_A,HIGH);
					M_Dio_void_PinWrite(Ssd_LED_F,HIGH);
					M_Dio_void_PinWrite(Ssd_LED_E,LOW);
					M_Dio_void_PinWrite(Ssd_LED_D,LOW);
					M_Dio_void_PinWrite(Ssd_LED_C,HIGH);
					M_Dio_void_PinWrite(Ssd_LED_B,HIGH);
					M_Dio_void_PinWrite(Ssd_LED_G,LOW);
				//	M_Dio_void_PinWrite(Ssd_LED_DT,HIGH);
					break;

				case 8 :
					M_Dio_void_PinWrite(Ssd_LED_A,HIGH);
					M_Dio_void_PinWrite(Ssd_LED_F,HIGH);
					M_Dio_void_PinWrite(Ssd_LED_E,HIGH);
					M_Dio_void_PinWrite(Ssd_LED_D,HIGH);
					M_Dio_void_PinWrite(Ssd_LED_C,HIGH);
					M_Dio_void_PinWrite(Ssd_LED_B,HIGH);
					M_Dio_void_PinWrite(Ssd_LED_G,HIGH);
				//	M_Dio_void_PinWrite(Ssd_LED_DT,HIGH);
					break;

				case 9 :
					M_Dio_void_PinWrite(Ssd_LED_A,HIGH);
					M_Dio_void_PinWrite(Ssd_LED_F,HIGH);
					M_Dio_void_PinWrite(Ssd_LED_E,LOW);
					M_Dio_void_PinWrite(Ssd_LED_D,HIGH);
					M_Dio_void_PinWrite(Ssd_LED_C,HIGH);
					M_Dio_void_PinWrite(Ssd_LED_B,HIGH);
					M_Dio_void_PinWrite(Ssd_LED_G,HIGH);
				//	M_Dio_void_PinWrite(Ssd_LED_DT,HIGH);
					break;

				default:
					break;

				}

				M_Dio_void_PinWrite(Ssd_Display2_EN,LOW);
				M_Dio_void_PinWrite(Ssd_Dispaly1_EN,HIGH);

				_delay_ms(32);

			/*	M_Dio_void_PinWrite(Ssd_Dispaly1_EN,LOW);
				M_Dio_void_PinWrite(Ssd_Display2_EN,HIGH); and again he will send voltage first to the pins then enable them after the switch of tens(just as he did with switch of units)*/

				M_Dio_void_PinWrite(Ssd_Dispaly1_EN,LOW);//2:06:00 in video, msh 3aref ashra7-ha bs now ana fahemha :D, bardo to reduce blur...
	/* after he chose theLEDs he needs in the switch, he went to enable the SSD that will show the chosen LEDs, then after the delay (which makes u see the digit for a while),he disabled the SSD from the previous switch before entering the new switch to choose the new LEDs for the other SSD,where after the second switch he will enable the tens SSD and still gonna disable the same SSD we disabled before the tens switch, this means u can delete the disable-Units-SSD statement after the tens switch, i will just comment it*/
				switch(Local_u8_Tens)
					{
					case 0 :
						M_Dio_void_PinWrite(Ssd_LED_A,HIGH);
						M_Dio_void_PinWrite(Ssd_LED_F,HIGH);
						M_Dio_void_PinWrite(Ssd_LED_E,HIGH);
						M_Dio_void_PinWrite(Ssd_LED_D,HIGH);
						M_Dio_void_PinWrite(Ssd_LED_C,HIGH);
						M_Dio_void_PinWrite(Ssd_LED_B,HIGH);
						M_Dio_void_PinWrite(Ssd_LED_G,LOW);
						M_Dio_void_PinWrite(Ssd_LED_DT,HIGH);
						break;

					case 1 :
						M_Dio_void_PinWrite(Ssd_LED_A,LOW);
						M_Dio_void_PinWrite(Ssd_LED_F,LOW);
						M_Dio_void_PinWrite(Ssd_LED_E,LOW);
						M_Dio_void_PinWrite(Ssd_LED_D,LOW);
						M_Dio_void_PinWrite(Ssd_LED_C,HIGH);
						M_Dio_void_PinWrite(Ssd_LED_B,HIGH);
						M_Dio_void_PinWrite(Ssd_LED_G,HIGH);
						M_Dio_void_PinWrite(Ssd_LED_DT,HIGH);
						break;

					case 2 :
						M_Dio_void_PinWrite(Ssd_LED_A,HIGH);
						M_Dio_void_PinWrite(Ssd_LED_F,LOW);
						M_Dio_void_PinWrite(Ssd_LED_E,HIGH);
						M_Dio_void_PinWrite(Ssd_LED_D,HIGH);
						M_Dio_void_PinWrite(Ssd_LED_C,LOW);
						M_Dio_void_PinWrite(Ssd_LED_B,HIGH);
						M_Dio_void_PinWrite(Ssd_LED_G,HIGH);
						M_Dio_void_PinWrite(Ssd_LED_DT,HIGH);
						break;

					case 3 :
						M_Dio_void_PinWrite(Ssd_LED_A,HIGH);
						M_Dio_void_PinWrite(Ssd_LED_F,LOW);
						M_Dio_void_PinWrite(Ssd_LED_E,LOW);
						M_Dio_void_PinWrite(Ssd_LED_D,HIGH);
						M_Dio_void_PinWrite(Ssd_LED_C,HIGH);
						M_Dio_void_PinWrite(Ssd_LED_B,HIGH);
						M_Dio_void_PinWrite(Ssd_LED_G,HIGH);
						M_Dio_void_PinWrite(Ssd_LED_DT,HIGH);
						break;

					case 4 :
						M_Dio_void_PinWrite(Ssd_LED_A,LOW);
						M_Dio_void_PinWrite(Ssd_LED_F,HIGH);
						M_Dio_void_PinWrite(Ssd_LED_E,LOW);
						M_Dio_void_PinWrite(Ssd_LED_D,LOW);
						M_Dio_void_PinWrite(Ssd_LED_C,HIGH);
						M_Dio_void_PinWrite(Ssd_LED_B,HIGH);
						M_Dio_void_PinWrite(Ssd_LED_G,HIGH);
						M_Dio_void_PinWrite(Ssd_LED_DT,HIGH);
						break;

					case 5 :
						M_Dio_void_PinWrite(Ssd_LED_A,HIGH);
						M_Dio_void_PinWrite(Ssd_LED_F,HIGH);
						M_Dio_void_PinWrite(Ssd_LED_E,LOW);
						M_Dio_void_PinWrite(Ssd_LED_D,HIGH);
						M_Dio_void_PinWrite(Ssd_LED_C,HIGH);
						M_Dio_void_PinWrite(Ssd_LED_B,LOW);
						M_Dio_void_PinWrite(Ssd_LED_G,HIGH);
						M_Dio_void_PinWrite(Ssd_LED_DT,HIGH);
						break;

					case 6 :
						M_Dio_void_PinWrite(Ssd_LED_A,HIGH);
						M_Dio_void_PinWrite(Ssd_LED_F,HIGH);
						M_Dio_void_PinWrite(Ssd_LED_E,HIGH);
						M_Dio_void_PinWrite(Ssd_LED_D,HIGH);
						M_Dio_void_PinWrite(Ssd_LED_C,HIGH);
						M_Dio_void_PinWrite(Ssd_LED_B,LOW);
						M_Dio_void_PinWrite(Ssd_LED_G,HIGH);
						M_Dio_void_PinWrite(Ssd_LED_DT,HIGH);
						break;

					case 7 :
						M_Dio_void_PinWrite(Ssd_LED_A,HIGH);
						M_Dio_void_PinWrite(Ssd_LED_F,HIGH);
						M_Dio_void_PinWrite(Ssd_LED_E,LOW);
						M_Dio_void_PinWrite(Ssd_LED_D,LOW);
						M_Dio_void_PinWrite(Ssd_LED_C,HIGH);
						M_Dio_void_PinWrite(Ssd_LED_B,HIGH);
						M_Dio_void_PinWrite(Ssd_LED_G,LOW);
						M_Dio_void_PinWrite(Ssd_LED_DT,HIGH);
						break;

					case 8 :
						M_Dio_void_PinWrite(Ssd_LED_A,HIGH);
						M_Dio_void_PinWrite(Ssd_LED_F,HIGH);
						M_Dio_void_PinWrite(Ssd_LED_E,HIGH);
						M_Dio_void_PinWrite(Ssd_LED_D,HIGH);
						M_Dio_void_PinWrite(Ssd_LED_C,HIGH);
						M_Dio_void_PinWrite(Ssd_LED_B,HIGH);
						M_Dio_void_PinWrite(Ssd_LED_G,HIGH);
						M_Dio_void_PinWrite(Ssd_LED_DT,HIGH);
						break;

					case 9 :
						M_Dio_void_PinWrite(Ssd_LED_A,HIGH);
						M_Dio_void_PinWrite(Ssd_LED_F,HIGH);
						M_Dio_void_PinWrite(Ssd_LED_E,LOW);
						M_Dio_void_PinWrite(Ssd_LED_D,HIGH);
						M_Dio_void_PinWrite(Ssd_LED_C,HIGH);
						M_Dio_void_PinWrite(Ssd_LED_B,HIGH);
						M_Dio_void_PinWrite(Ssd_LED_G,HIGH);
						M_Dio_void_PinWrite(Ssd_LED_DT,HIGH);
						break;

					default:
						break;

					}

					//M_Dio_void_PinWrite(Ssd_Dispaly1_EN,LOW);
					M_Dio_void_PinWrite(Ssd_Display2_EN,HIGH);

				_delay_ms(32);

					M_Dio_void_PinWrite(Ssd_Dispaly1_EN,LOW);
					M_Dio_void_PinWrite(Ssd_Display2_EN,LOW);
			}
}
