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

#include	"MCU123_LPC1114_Kit_Counter_Timer_16_Bit.h"

/* 函数定义 */

/*
	功能：初始化
	参数：无
	返回：无
*/
void	Counter_Timer_16_Bit_Library_Initialize(void)
{
	Union_Counter_Timer_16_Bit_0_Prescale_Register		Counter_Timer_16_Bit_0_Prescale_Register;
	Union_Counter_Timer_16_Bit_0_Match_Register_0		Counter_Timer_16_Bit_0_Match_Register_0;
	Union_Counter_Timer_16_Bit_0_Match_Control_Register	Counter_Timer_16_Bit_0_Match_Control_Register;
	Union_Counter_Timer_16_Bit_0_Timer_Control_Register	Counter_Timer_16_Bit_0_Timer_Control_Register;
	
	/* 设置预分频值 */
	Counter_Timer_16_Bit_0_Prescale_Register.Value = Read_Counter_Timer_16_Bit_0_Prescale_Register();
	Counter_Timer_16_Bit_0_Prescale_Register.Internal.Prescale_Value = 8 * 1000 - 1;
	Write_Counter_Timer_16_Bit_0_Prescale_Register(Counter_Timer_16_Bit_0_Prescale_Register.Value);
	
	/* 设置匹配值 */
	Counter_Timer_16_Bit_0_Match_Register_0.Value = Read_Counter_Timer_16_Bit_0_Match_Register_0();
	Counter_Timer_16_Bit_0_Match_Register_0.Internal.Match_Value = 6 * 1000;
	Write_Counter_Timer_16_Bit_0_Match_Register_0(Counter_Timer_16_Bit_0_Match_Register_0.Value);
	
	/* 设置匹配控制 */
	Counter_Timer_16_Bit_0_Match_Control_Register.Value = Read_Counter_Timer_16_Bit_0_Match_Control_Register();
	Counter_Timer_16_Bit_0_Match_Control_Register.Internal.Match_0_Interrupt = 1;
	Counter_Timer_16_Bit_0_Match_Control_Register.Internal.Match_0_Reset = 1;
	Write_Counter_Timer_16_Bit_0_Match_Control_Register(Counter_Timer_16_Bit_0_Match_Control_Register.Value);
	
	/* 打开定时器 */
	Counter_Timer_16_Bit_0_Timer_Control_Register.Value = Read_Counter_Timer_16_Bit_0_Timer_Control_Register();
	Counter_Timer_16_Bit_0_Timer_Control_Register.Internal.Counter_Enable = 1;
	Write_Counter_Timer_16_Bit_0_Timer_Control_Register(Counter_Timer_16_Bit_0_Timer_Control_Register.Value);
}

/*
	功能：打开计数器定时器0
	参数：无
	返回：无
*/
void	Counter_Timer_16_Bit_Library_Enable_Counter_Timer_0(void)
{
	Union_Counter_Timer_16_Bit_0_Timer_Control_Register	Counter_Timer_16_Bit_0_Timer_Control_Register;
	
	/* 打开定时器 */
	Counter_Timer_16_Bit_0_Timer_Control_Register.Value = Read_Counter_Timer_16_Bit_0_Timer_Control_Register();
	Counter_Timer_16_Bit_0_Timer_Control_Register.Internal.Counter_Enable = 1;
	Write_Counter_Timer_16_Bit_0_Timer_Control_Register(Counter_Timer_16_Bit_0_Timer_Control_Register.Value);
}

/*
	功能：关闭计数器定时器0
	参数：无
	返回：无
*/
void	Counter_Timer_16_Bit_Library_Disable_Counter_Timer_0(void)
{
	Union_Counter_Timer_16_Bit_0_Timer_Control_Register	Counter_Timer_16_Bit_0_Timer_Control_Register;
	
	/* 关闭定时器 */
	Counter_Timer_16_Bit_0_Timer_Control_Register.Value = Read_Counter_Timer_16_Bit_0_Timer_Control_Register();
	Counter_Timer_16_Bit_0_Timer_Control_Register.Internal.Counter_Enable = 0;
	Counter_Timer_16_Bit_0_Timer_Control_Register.Internal.Counter_Reset = 1;
	Write_Counter_Timer_16_Bit_0_Timer_Control_Register(Counter_Timer_16_Bit_0_Timer_Control_Register.Value);
	
	/* 复位定时器计数器和预分频计数器 */
	Counter_Timer_16_Bit_0_Timer_Control_Register.Value = Read_Counter_Timer_16_Bit_0_Timer_Control_Register();
	Counter_Timer_16_Bit_0_Timer_Control_Register.Internal.Counter_Reset = 0;
	Write_Counter_Timer_16_Bit_0_Timer_Control_Register(Counter_Timer_16_Bit_0_Timer_Control_Register.Value);
}

/*
	功能：清除计数器定时器0的匹配通道0中断
	参数：无
	返回：无
*/
void	Counter_Timer_16_Bit_Library_Clear_Counter_Timer_0_Match_0_Interrupt(void)
{
	Union_Counter_Timer_16_Bit_0_Interrupt_Register	Counter_Timer_16_Bit_0_Interrupt_Register;
	
	/* 清除中断标志 */
	Counter_Timer_16_Bit_0_Interrupt_Register.Value = Read_Counter_Timer_16_Bit_0_Interrupt_Register();
	Counter_Timer_16_Bit_0_Interrupt_Register.Internal.Match_0_Interrupt_Flag = 1;
	Write_Counter_Timer_16_Bit_0_Interrupt_Register(Counter_Timer_16_Bit_0_Interrupt_Register.Value);
}
