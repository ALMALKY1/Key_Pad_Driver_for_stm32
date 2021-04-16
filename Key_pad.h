/*
 * KeyPad.h

 *
 *  Created on: Apr 14, 2021
 *      Author: Mohamed Almalky
 */

#ifndef HAL_KEYPAD_INC_KEYPAD_H_
#define HAL_KEYPAD_INC_KEYPAD_H_

#include "Key_Pad_Cfg.h"

#include "STD_TYPES.h"



typedef struct
{
	uint8 PORT_Key_Pad ;
	uint8 arr_KeyPadInputPins[ROWS];	 // for Rows only
	uint8 arr_KeyPadOutputPins[COLUMS];  // for coloums only
}KeyPad_PinCnfg_t;




// to init the key pad pass the pin Config and the funcation to receive the key pressed
void kpad_init(const KeyPad_PinCnfg_t * ptr,void (*ptr_Fu)(uint8));
// this funcation called at the inifity loop to check any pressed
void keyPad_dispatcher(KeyPad_PinCnfg_t * ptr);
//this funcatio use to change the call back
void Change_CallBackfunction(void (*ptr_Fu)(uint8));



#endif /* HAL_KEYPAD_INC_KEYPAD_H_ */
