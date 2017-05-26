/*
	版权：2012 - 2014  吴彬（wubin_pos@163.com）
	
	Copyright (C) 2012 - 2014  Wu Bin(wubin_pos@163.com)
	
	This file is part of POS(Personal Operating System).
	
    POS is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.
	
    POS is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
    GNU General Public License for more details.
	
    You should have received a copy of the GNU General Public License
    along with POS. If not, see <http://www.gnu.org/licenses/>.
*/

#include	"MCU123_LPC1114_Kit_ADC.h"

/* 数据定义 */

/* 转换值 */
Integer_Unsigned_16_Bit	ADC_Library_Conversion_Value;

/* 函数定义 */

/*
	功能：初始化
	参数：无
	返回：无
*/
void	ADC_Library_Initialize(void)
{
	Union_ADC_Control_Register			ADC_Control_Register;
	Union_ADC_Interrupt_Enable_Register	ADC_Interrupt_Enable_Register;
	
	/* 设置通道和时钟分频因子 */
	ADC_Control_Register.Value = Read_ADC_Control_Register();
	ADC_Control_Register.Internal.Select_Channel_5 = 1;
	ADC_Control_Register.Internal.Clock_Divisor = 11;
	Write_ADC_Control_Register(ADC_Control_Register.Value);
	
	/* 设置中断使能 */
	ADC_Interrupt_Enable_Register.Value = Read_ADC_Interrupt_Enable_Register();
	ADC_Interrupt_Enable_Register.Internal.Channel_5_Interrupt_Enable = 1;
	ADC_Interrupt_Enable_Register.Internal.Global_Interrupt_Enable = 0;
	Write_ADC_Interrupt_Enable_Register(ADC_Interrupt_Enable_Register.Value);
}

/*
	功能：启动转换
	参数：无
	返回：无
*/
void	ADC_Library_Start_Conversion(void)
{
	Union_ADC_Control_Register	ADC_Control_Register;
	
	/* 设置转换值和启动模式 */
	ADC_Library_Conversion_Value = 0;
	ADC_Control_Register.Value = Read_ADC_Control_Register();
	ADC_Control_Register.Internal.Start_Mode = 1;
	Write_ADC_Control_Register(ADC_Control_Register.Value);
}

/*
	功能：取得转换值
	参数：无
	返回：Integer_Unsigned_16Bit，转换值
*/
Integer_Unsigned_16_Bit	ADC_Library_Get_Conversion_Value(void)
{
	return ADC_Library_Conversion_Value;
}

/*
	功能：清除中断
	参数：无
	返回：无
*/
void	ADC_Library_Clear_Interrupt(void)
{
	Union_ADC_Data_Register_5	ADC_Data_Register_5;
	
	/* 清除完成标志 */
	ADC_Data_Register_5.Value = Read_ADC_Data_Register_5();
	Read_ADC_Global_Data_Register();
	
	/* 设置转换值 */
	ADC_Library_Conversion_Value = ADC_Data_Register_5.Internal.Conversion_Value;
}
