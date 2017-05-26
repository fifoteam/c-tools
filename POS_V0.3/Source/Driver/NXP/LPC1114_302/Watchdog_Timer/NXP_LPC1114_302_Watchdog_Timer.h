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

#ifndef	NXP_LPC1114_302_WATCHDOG_TIMER_H
#define	NXP_LPC1114_302_WATCHDOG_TIMER_H

#include	"Base.h"

/* 数据类型 */

/* 监察定时器模式寄存器内部 */
typedef	struct	Tag_Watchdog_Timer_Mode_Register_Internal
{
	Integer_Unsigned_32_Bit	Enable_Control : 1;
	Integer_Unsigned_32_Bit	Reset_Control  : 1;
	Integer_Unsigned_32_Bit	Time_Out_Flag  : 1;
	Integer_Unsigned_32_Bit	Interrupt_Flag : 1;
}
	Structure_Watchdog_Timer_Mode_Register_Internal;

/* 监察定时器模式寄存器 */
typedef	union	Tag_Watchdog_Timer_Mode_Register
{
	Integer_Unsigned_32_Bit							Value;
	Structure_Watchdog_Timer_Mode_Register_Internal	Internal;
}
	Union_Watchdog_Timer_Mode_Register;

/* 监察定时器常数寄存器内部 */
typedef	struct	Tag_Watchdog_Timer_Constant_Register_Internal
{
	Integer_Unsigned_32_Bit	Interval_Value : 24;
}
	Structure_Watchdog_Timer_Constant_Register_Internal;

/* 监察定时器常数寄存器 */
typedef	union	Tag_Watchdog_Timer_Constant_Register
{
	Integer_Unsigned_32_Bit								Value;
	Structure_Watchdog_Timer_Constant_Register_Internal	Internal;
}
	Union_Watchdog_Timer_Constant_Register;

/* 监察定时器注入寄存器内部 */
typedef	struct	Tag_Watchdog_Timer_Feed_Register_Internal
{
	Integer_Unsigned_32_Bit	Feed_Value : 8;
}
	Structure_Watchdog_Timer_Feed_Register_Internal;

/* 监察定时器注入寄存器 */
typedef	union	Tag_Watchdog_Timer_Feed_Register
{
	Integer_Unsigned_32_Bit							Value;
	Structure_Watchdog_Timer_Feed_Register_Internal	Internal;
}
	Union_Watchdog_Timer_Feed_Register;

/* 监察定时器值寄存器内部 */
typedef	struct	Tag_Watchdog_Timer_Value_Register_Internal
{
	Integer_Unsigned_32_Bit	Counter_Value : 24;
}
	Structure_Watchdog_Timer_Value_Register_Internal;

/* 监察定时器值寄存器 */
typedef	union	Tag_Watchdog_Timer_Value_Register
{
	Integer_Unsigned_32_Bit								Value;
	Structure_Watchdog_Timer_Value_Register_Internal	Internal;
}
	Union_Watchdog_Timer_Value_Register;

/* 函数声明 */

/*
	功能：读监察定时器模式寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_Watchdog_Timer_Mode_Register(void);

/*
	功能：写监察定时器模式寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_Watchdog_Timer_Mode_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读监察定时器常数寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_Watchdog_Timer_Constant_Register(void);

/*
	功能：写监察定时器常数寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_Watchdog_Timer_Constant_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：写监察定时器注入寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_Watchdog_Timer_Feed_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读监察定时器值寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_Watchdog_Timer_Value_Register(void);

#endif
