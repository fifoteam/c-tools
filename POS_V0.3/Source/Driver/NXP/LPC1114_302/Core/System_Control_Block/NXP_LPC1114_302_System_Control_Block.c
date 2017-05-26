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

#include	"NXP_LPC1114_302_System_Control_Block.h"

/* 数据定义 */

/* 系统控制块的寄存器地址 */
const Integer_Unsigned_32_Bit	System_Control_Block_CPU_ID_Register_Address							  = 0xE000ED00;
const Integer_Unsigned_32_Bit	System_Control_Block_Interrupt_Control_State_Register_Address			  = 0xE000ED04;
const Integer_Unsigned_32_Bit	System_Control_Block_Application_Interrupt_Reset_Control_Register_Address = 0xE000ED0C;
const Integer_Unsigned_32_Bit	System_Control_Block_System_Control_Register_Address					  = 0xE000ED10;
const Integer_Unsigned_32_Bit	System_Control_Block_Configuration_Control_Register_Address				  = 0xE000ED14;
const Integer_Unsigned_32_Bit	System_Control_Block_System_Handler_Priority_Register_2_Address			  = 0xE000ED1C;
const Integer_Unsigned_32_Bit	System_Control_Block_System_Handler_Priority_Register_3_Address			  = 0xE000ED20;

/* 函数定义 */

/*
	功能：读系统控制块的中央处理器标志寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_System_Control_Block_CPU_ID_Register(void)
{
	return Read_Register_32_Bit(System_Control_Block_CPU_ID_Register_Address);
}

/*
	功能：读系统控制块的中断控制和状态寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_System_Control_Block_Interrupt_Control_State_Register(void)
{
	return Read_Register_32_Bit(System_Control_Block_Interrupt_Control_State_Register_Address);
}

/*
	功能：写系统控制块的中断控制和状态寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_System_Control_Block_Interrupt_Control_State_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(System_Control_Block_Interrupt_Control_State_Register_Address, Register_Value);
}

/*
	功能：读系统控制块的应用中断和复位控制寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_System_Control_Block_Application_Interrupt_Reset_Control_Register(void)
{
	return Read_Register_32_Bit(System_Control_Block_Application_Interrupt_Reset_Control_Register_Address);
}

/*
	功能：写系统控制块的应用中断和复位控制寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_System_Control_Block_Application_Interrupt_Reset_Control_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(System_Control_Block_Application_Interrupt_Reset_Control_Register_Address, Register_Value);
}

/*
	功能：读系统控制块的系统控制寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_System_Control_Block_System_Control_Register(void)
{
	return Read_Register_32_Bit(System_Control_Block_System_Control_Register_Address);
}

/*
	功能：写系统控制块的系统控制寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_System_Control_Block_System_Control_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(System_Control_Block_System_Control_Register_Address, Register_Value);
}

/*
	功能：读系统控制块的配置和控制寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_System_Control_Block_Configuration_Control_Register(void)
{
	return Read_Register_32_Bit(System_Control_Block_Configuration_Control_Register_Address);
}

/*
	功能：读系统控制块的系统处理优先级寄存器2
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_System_Control_Block_System_Handler_Priority_Register_2(void)
{
	return Read_Register_32_Bit(System_Control_Block_System_Handler_Priority_Register_2_Address);
}

/*
	功能：写系统控制块的系统处理优先级寄存器2
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_System_Control_Block_System_Handler_Priority_Register_2(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(System_Control_Block_System_Handler_Priority_Register_2_Address, Register_Value);
}

/*
	功能：读系统控制块的系统处理优先级寄存器3
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_System_Control_Block_System_Handler_Priority_Register_3(void)
{
	return Read_Register_32_Bit(System_Control_Block_System_Handler_Priority_Register_3_Address);
}

/*
	功能：写系统控制块的系统处理优先级寄存器3
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_System_Control_Block_System_Handler_Priority_Register_3(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(System_Control_Block_System_Handler_Priority_Register_3_Address, Register_Value);
}
