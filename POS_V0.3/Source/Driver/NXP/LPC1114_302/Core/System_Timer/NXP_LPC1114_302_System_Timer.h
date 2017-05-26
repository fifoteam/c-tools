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

#ifndef	NXP_LPC1114_302_SYSTEM_TIMER_H
#define	NXP_LPC1114_302_SYSTEM_TIMER_H

#include	"Base.h"

/* 数据类型 */

/* 系统定时器的控制和状态寄存器内部 */
typedef	struct	Tag_System_Timer_Control_Status_Register_Internal
{
	Integer_Unsigned_32_Bit	Tick_Counter_Enable	  : 1;
	Integer_Unsigned_32_Bit	Tick_Interrupt_Enable : 1;
	Integer_Unsigned_32_Bit	Tick_Clock_Source	  : 1;
	Integer_Unsigned_32_Bit						  : 13;
	Integer_Unsigned_32_Bit	Tick_Counter_Flag	  : 1;
}
	Structure_System_Timer_Control_Status_Register_Internal;

/* 系统定时器的控制和状态寄存器 */
typedef	union	Tag_System_Timer_Control_Status_Register
{
	Integer_Unsigned_32_Bit									Value;
	Structure_System_Timer_Control_Status_Register_Internal	Internal;
}
	Union_System_Timer_Control_Status_Register;

/* 系统定时器的重装值寄存器内部 */
typedef	struct	Tag_System_Timer_Reload_Value_Register_Internal
{
	Integer_Unsigned_32_Bit	Reload_Value : 24;
}
	Structure_System_Timer_Reload_Value_Register_Internal;

/* 系统定时器的重装值寄存器 */
typedef	union	Tag_System_Timer_Reload_Value_Register
{
	Integer_Unsigned_32_Bit									Value;
	Structure_System_Timer_Reload_Value_Register_Internal	Internal;
}
	Union_System_Timer_Reload_Value_Register;

/* 系统定时器的当前值寄存器内部 */
typedef	struct	Tag_System_Timer_Current_Value_Register_Internal
{
	Integer_Unsigned_32_Bit	Current_Value : 24;
}
	Structure_System_Timer_Current_Value_Register_Internal;

/* 系统定时器的当前值寄存器 */
typedef	union	Tag_System_Timer_Current_Value_Register
{
	Integer_Unsigned_32_Bit									Value;
	Structure_System_Timer_Current_Value_Register_Internal	Internal;
}
	Union_System_Timer_Current_Value_Register;

/* 系统定时器的校准值寄存器内部 */
typedef	struct	Tag_System_Timer_Calibration_Value_Register_Internal
{
	Integer_Unsigned_32_Bit	Calibration_Value  : 24;
	Integer_Unsigned_32_Bit					   : 6;
	Integer_Unsigned_32_Bit	Calibration_Skew   : 1;
	Integer_Unsigned_32_Bit	No_Reference_Clock : 1;
}
	Structure_System_Timer_Calibration_Value_Register_Internal;

/* 系统定时器的校准值寄存器 */
typedef	union	Tag_System_Timer_Calibration_Value_Register
{
	Integer_Unsigned_32_Bit										Value;
	Structure_System_Timer_Calibration_Value_Register_Internal	Internal;
}
	Union_System_Timer_Calibration_Value_Register;

/* 函数声明 */

/*
	功能：读系统定时器的控制和状态寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_System_Timer_Control_Status_Register(void);

/*
	功能：写系统定时器的控制和状态寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_System_Timer_Control_Status_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读系统定时器的重装值寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_System_Timer_Reload_Value_Register(void);

/*
	功能：写系统定时器的重装值寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_System_Timer_Reload_Value_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读系统定时器的当前值寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_System_Timer_Current_Value_Register(void);

/*
	功能：写系统定时器的当前值寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_System_Timer_Current_Value_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读系统定时器的校准值寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_System_Timer_Calibration_Value_Register(void);

/*
	功能：写系统定时器的校准值寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_System_Timer_Calibration_Value_Register(Integer_Unsigned_32_Bit Register_Value);

#endif
