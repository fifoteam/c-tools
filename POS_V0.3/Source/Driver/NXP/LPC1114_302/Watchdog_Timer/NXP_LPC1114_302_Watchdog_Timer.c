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

#include	"NXP_LPC1114_302_Watchdog_Timer.h"

/* 数据定义 */

/* 监察定时器寄存器地址 */
const Integer_Unsigned_32_Bit	Watchdog_Timer_Mode_Register_Address	 = 0x40004000;
const Integer_Unsigned_32_Bit	Watchdog_Timer_Constant_Register_Address = 0x40004004;
const Integer_Unsigned_32_Bit	Watchdog_Timer_Feed_Register_Address	 = 0x40004008;
const Integer_Unsigned_32_Bit	Watchdog_Timer_Value_Register_Address	 = 0x4000400C;

/* 函数定义 */

/*
	功能：读监察定时器模式寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_Watchdog_Timer_Mode_Register(void)
{
	return Read_Register_32_Bit(Watchdog_Timer_Mode_Register_Address);
}

/*
	功能：写监察定时器模式寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_Watchdog_Timer_Mode_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(Watchdog_Timer_Mode_Register_Address, Register_Value);
}

/*
	功能：读监察定时器常数寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_Watchdog_Timer_Constant_Register(void)
{
	return Read_Register_32_Bit(Watchdog_Timer_Constant_Register_Address);
}

/*
	功能：写监察定时器常数寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_Watchdog_Timer_Constant_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(Watchdog_Timer_Constant_Register_Address, Register_Value);
}

/*
	功能：写监察定时器注入寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_Watchdog_Timer_Feed_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(Watchdog_Timer_Feed_Register_Address, Register_Value);
}

/*
	功能：读监察定时器值寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_Watchdog_Timer_Value_Register(void)
{
	return Read_Register_32_Bit(Watchdog_Timer_Value_Register_Address);
}
