/*-------------------------------------------------------------------------------
需求：
思路：
-------------------------------- 2018.4.25 ------------------------------------*/
#include "MYLIB_Define.h"
//------------------------------------------------------------------------输入变量

//------------------------------------------------------------------------输出变量

//------------------------------------------------------------------------私有变量
/*------------------------------------------------------------------------------
函数名： DOME
功  能： xx
参  数： xx
返回值： 无
创建者:	 林广云
建时间： 20180516
------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------

PWM：
	寄存器


0x0001F000 + 0*4 + (0/128)*512 = 0x0001F000
0x0001F000 + 1*4 + (0/128)*512 = 0x0001F000 + 4 +0 = 0x0001F004

NUC029xAN中数据FLASH的大小为4KB
30 03 04 04


NUC029FAE中数据FLASH的空间是与APROM共享的，其大小和起始地址在 CONFIG1 中配

------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------
函数名： unsigned short int Average64_Value_Calculation(unsigned short int *Pointer)
功  能： xx
参  数： xx
返回值： 无
创建者:	 林广云
建时间： 20180516
------------------------------------------------------------------------------*/
unsigned short int Average64_Value_Calculation(unsigned short int *Pointer)
{
	unsigned char Temp_i;
	unsigned short int Return_Data = 0;
	for (Temp_i = 0; Temp_i < 64; Temp_i++)
	{
		Return_Data += Pointer[Temp_i];
	}
	return Return_Data >> 6;
}

/*------------------------------------------------------------------------------
使用方法：
1.在时钟函数里初始硬件除法器时钟。
	CLK->AHBCLK |= CLK_AHBCLK_HDIV_EN_Msk;	
------------------------------------------------------------------------------*/
signed int DIVIDEND_APP(signed int DiviDend, signed int DiviSor)
{
	return HDIV_Div(DiviDend, DiviSor);
}
unsigned char _BB_xx_Rd_ButData[4];
unsigned char _BB_xx_WT_ButData[8];

unsigned char *TEST_BB_xx_Mian_Command_intMain(unsigned char *Pointer)
{

	memcpy(_BB_xx_Rd_ButData, Pointer, 4);

	switch (_BB_xx_Rd_ButData[0])
	{
	case 0x00:
	{
		_BB_xx_WT_ButData[0] = 0xAA;
		_BB_xx_WT_ButData[1] = 0x00;
		_BB_xx_WT_ButData[2] = 0x00;

		_BB_xx_WT_ButData[3] = 0xAA;
		_BB_xx_WT_ButData[4] = 0xAA;

		_BB_xx_WT_ButData[5] = 0xAA;
		_BB_xx_WT_ButData[6] = 0xAA;

		_BB_xx_WT_ButData[7] = 0xAA;
		return (_BB_xx_WT_ButData);
	}

	case 0x01:
	{
		BB_01_Mian_Bottom_Command();
		return 0;
	}

	default:
	{
		return 0;
	}
	}
}
/*------------------------------------------------------------------------------
------------------------------------------------------------------------------*/
/******************* (C)  2018.4.25  *****END OF FILE****/
