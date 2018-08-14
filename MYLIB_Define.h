/*-------------------------------------------------------------------------------
需求：
思路：
-------------------------------- 2018.4.25 ------------------------------------*/
/* Includes ------------------------------------------------------------------*/
#ifndef _MYLIB_Define_H
#define _MYLIB_Define_H
#include "All_Define.h"
//#include "MYLIB_Define.h"



/*------------------------------------------------------------------------------
功能：仿二进制写法，通常用于寄存器配置
------------------------------------------------------------------------------*/
#define LongBin(n)           \
	(                        \
		((n >> 21) & 0x80) | \
		((n >> 18) & 0x40) | \
		((n >> 15) & 0x20) | \
		((n >> 12) & 0x10) | \
		((n >> 9) & 0x08) |  \
		((n >> 6) & 0x04) |  \
		((n >> 3) & 0x02) |  \
		((n)&0x01))
#define DEC2BIN(n) LongBin(0x##n##l)




//------------------------------------------------------------------------------Application

//------------------------------------------------------------------------------Bottom
extern void ClearReeceiveBuf(unsigned char *p,unsigned char BUF_Size);
extern unsigned char Calculation_CheckSum(unsigned char *p,unsigned char BUF_Size);
extern void IEEE754_Buf_To_Float(unsigned char *p);


#endif

//------------------------------------------------------------------------------
/*------------------------------------------------------------------------------
------------------------------------------------------------------------------*/
/******************* (C)  2018.4.25  *****END OF FILE****/


