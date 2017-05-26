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

#include	"NXP_LPC1114_302_System_Timer.h"

/* 数据定义 */

/* 系统定时器的寄存器地址 */
const Integer_Unsigned_32_Bit	System_Timer_Control_Status_Register_Address	= 0xE000E010;
const Integer_Unsigned_32_Bit	System_Timer_Reload_Value_Register_Address		= 0xE000E014;
const Integer_Unsigned_32_Bit	System_Timer_Current_Value_Register_Address		= 0xE000E018;
const Integer_Unsigned_32_Bit	System_Timer_Calibration_Value_Register_Address	= 0xE000E01C;

/* 函数定义 */

/*
	功能：读系统定时器的控制和状态寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_System_Timer_Control_Status_Register(void)
{
	return Read_Register_32_Bit(System_Timer_Control_Status_Register_Address);
}

/*
	功能：写系统定时器的控制和状态寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_System_Timer_Control_Status_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(System_Timer_Control_Status_Register_Address, Register_Value);
}

/*
	功能：读系统定时器的重装值寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_System_Timer_Reload_Value_Register(void)
{
	return Read_Register_32_Bit(System_Timer_Reload_Value_Register_Address);
}

/*
	功能：写系统定时器的重装值寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_System_Timer_Reload_Value_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(System_Timer_Reload_Value_Register_Address, Register_Value);
}

/*
	功能：读系统定时器的当前值寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_System_Timer_Current_Value_Register(void)
{
	return Read_Register_32_Bit(System_Timer_Current_Value_Register_Address);
}

/*
	功能：写系统定时器的当前值寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_System_Timer_Current_Value_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(System_Timer_Current_Value_Register_Address, Register_Value);
}

/*
	功能：读系统定时器的校准值寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_System_Timer_Calibration_Value_Register(void)
{
	return Read_Register_32_Bit(System_Timer_Calibration_Value_Register_Address);
}

/*
	功能：写系统定时器的校准值寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_System_Timer_Calibration_Value_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(System_Timer_Calibration_Value_Register_Address, Register_Value);
}
