/*
 * Key_Pad_Cfg.h
 *
 *  Created on: Apr 14, 2021
 *      Author: Mohamed  Almalky
 */

#ifndef HAL_KEYPAD_INC_KEY_PAD_CFG_H_
#define HAL_KEYPAD_INC_KEY_PAD_CFG_H_


#define ROWS	4
#define COLUMS	4


#if ROWS >= 3
	#define _ROW_3_
#endif

#if ROWS >= 4
	 #define _ROW_4_
#endif

#if COLUMS >= 3
	#define _COLUM_3
#endif

#if COLUMS >= 4
	#define _COLUM_4
#endif





// row 1
#define P_0_0 ('7') //colum 0
#define P_0_1 ('8') //colum 1
#define P_0_2 ('9') //colum 2
#define P_0_3 ('/') //colum 3


// row 2
#define P_1_0 '4' //colum 0
#define P_1_1 '5' //colum 1
#define P_1_2 '6' //colum 2
#define P_1_3 '*' //colum 3

// row 3
#ifdef _ROW_3_
	#define P_2_0 '1' //colum 0
	#define P_2_1 '2' //colum 1
	#define P_2_2 '3' //colum 2
	#define P_2_3 '-' //colum 3
#endif // _ROW_3_

// row 4
#ifdef _ROW_4_
	#define P_3_0 'C' //colum 0
	#define P_3_1 '0' //colum 1
	#define P_3_2 '=' //colum 2
	#define P_3_3 '+' //colum 3
#endif // _ROW_4_





#endif /* HAL_KEYPAD_INC_KEY_PAD_CFG_H_ */
