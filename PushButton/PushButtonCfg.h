/*
 * PushButtonCfg.h
 *
 *  Created on: Jun 18, 2022
 *      Author: lenovo
 */

#ifndef HAL_PUSHBUTTON_PUSHBUTTONCFG_H_
#define HAL_PUSHBUTTON_PUSHBUTTONCFG_H_

/******************************************SELECT_PushButton_PIN****************************/

#define PushButton1_Pin			PD2_PIN	//the user will not write PD2 as actual parameter when he invokes PBInit()Fn in main
#define PushButton2_Pin			PD3_PIN //,he will write which push button he wants to press to function sth,also bcuz later
#define PushButton3_Pin			PD4_PIN // on he can put this pushbutton on another pin as PA5, so u change it here in cfg.h
#define PushButton4_Pin			PD5_PIN

//#define PRESSED	(replaced		0 //Both not needed honestly, but he thinks what if the kit changes, and we started working
//#define RELEASED		them)		1 // active high instead of active low, then they are a must as u can c in PushButton.c

/*OPTION[1]-->[ActiveLow]*/
/*OPTION[2]-->[ActiveHigh]*/
#define PushButtonSystem		ActiveLow

#endif /* HAL_PUSHBUTTON_PUSHBUTTONCFG_H_ */
