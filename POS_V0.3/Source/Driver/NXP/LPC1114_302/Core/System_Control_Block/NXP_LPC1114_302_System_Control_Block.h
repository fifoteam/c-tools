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

#ifndef	NXP_LPC1114_302_SYSTEM_CONTROL_BLOCK_H
#define	NXP_LPC1114_302_SYSTEM_CONTROL_BLOCK_H

#include	"Base.h"

/* 数据类型 */

/* 系统控制块的中央处理单元标志寄存器内部 */
typedef	struct	Tag_System_Control_Block_CPU_ID_Register_Internal
{
	Integer_Unsigned_32_Bit	Revision_Number	  : 4;
	Integer_Unsigned_32_Bit	Part_Number		  : 12;
	Integer_Unsigned_32_Bit	Architecture_Code : 4;
	Integer_Unsigned_32_Bit	Variant_Number	  : 4;
	Integer_Unsigned_32_Bit	Implementer_Code  : 8;
}
	Structure_System_Control_Block_CPU_ID_Register_Internal;

/* 系统控制块的中央处理单元标志寄存器 */
typedef	union	Tag_System_Control_Block_CPU_ID_Register
{
	Integer_Unsigned_32_Bit									Value;
	Structure_System_Control_Block_CPU_ID_Register_Internal	Internal;
}
	Union_System_Control_Block_CPU_ID_Register;

/* 系统控制块的中断控制和状态寄存器内部 */
typedef	struct	Tag_System_Control_Block_Interrupt_Control_State_Register_Internal
{
	Integer_Unsigned_32_Bit	Active_Exception_Number		  : 6;
	Integer_Unsigned_32_Bit								  : 6;
	Integer_Unsigned_32_Bit	Pending_Exception_Number	  : 6;
	Integer_Unsigned_32_Bit								  : 4;
	Integer_Unsigned_32_Bit	Interrupt_Pending_Flag		  : 1;
	Integer_Unsigned_32_Bit								  : 2;
	Integer_Unsigned_32_Bit	System_Timer_Clear_Pending	  : 1;
	Integer_Unsigned_32_Bit	System_Timer_Set_Pending	  : 1;
	Integer_Unsigned_32_Bit	Pend_Supervisor_Clear_Pending : 1;
	Integer_Unsigned_32_Bit	Pend_Supervisor_Set_Pending	  : 1;
	Integer_Unsigned_32_Bit								  : 2;
	Integer_Unsigned_32_Bit	NMI_Set_Pending				  : 1;
}
	Structure_System_Control_Block_Interrupt_Control_State_Register_Internal;

/* 系统控制块的中断控制和状态寄存器 */
typedef	union	Tag_System_Control_Block_Interrupt_Control_State_Register
{
	Integer_Unsigned_32_Bit														Value;
	Structure_System_Control_Block_Interrupt_Control_State_Register_Internal	Internal;
}
	Union_System_Control_Block_Interrupt_Control_State_Register;

/* 系统控制块的应用中断和复位控制寄存器内部 */
typedef	struct	Tag_System_Control_Block_Application_Interrupt_Reset_Control_Register_Internal
{
	Integer_Unsigned_32_Bit						 : 1;
	Integer_Unsigned_32_Bit	Vector_Clear_Active	 : 1;
	Integer_Unsigned_32_Bit	System_Reset_Request : 1;
	Integer_Unsigned_32_Bit						 : 12;
	Integer_Unsigned_32_Bit	Data_Endianness		 : 1;
	Integer_Unsigned_32_Bit	Vector_Key			 : 16;
}
	Structure_System_Control_Block_Application_Interrupt_Reset_Control_Register_Internal;

/* 系统控制块的应用中断和复位控制寄存器 */
typedef	union	Tag_System_Control_Block_Application_Interrupt_Reset_Control_Register
{
	Integer_Unsigned_32_Bit																	Value;
	Structure_System_Control_Block_Application_Interrupt_Reset_Control_Register_Internal	Internal;
}
	Union_System_Control_Block_Application_Interrupt_Reset_Control_Register;

/* 系统控制块的系统控制寄存器内部 */
typedef	struct	Tag_System_Control_Block_System_Control_Register_Internal
{
	Integer_Unsigned_32_Bit						  : 1;
	Integer_Unsigned_32_Bit	Sleep_On_Exit		  : 1;
	Integer_Unsigned_32_Bit	Deep_Sleep			  : 1;
	Integer_Unsigned_32_Bit						  : 1;
	Integer_Unsigned_32_Bit	Send_Event_On_Pending : 1;
}
	Structure_System_Control_Block_System_Control_Register_Internal;

/* 系统控制块的系统控制寄存器 */
typedef	union	Tag_System_Control_Block_System_Control_Register
{
	Integer_Unsigned_32_Bit											Value;
	Structure_System_Control_Block_System_Control_Register_Internal	Internal;
}
	Union_System_Control_Block_System_Control_Register;

/* 系统控制块的配置和控制寄存器内部 */
typedef	struct	Tag_System_Control_Block_Configuration_Control_Register_Internal
{
	Integer_Unsigned_32_Bit				 : 3;
	Integer_Unsigned_32_Bit	Unalign_Trap : 1;
	Integer_Unsigned_32_Bit				 : 5;
	Integer_Unsigned_32_Bit	Stack_Align	 : 1;
}
	Structure_System_Control_Block_Configuration_Control_Register_Internal;

/* 系统控制块的配置和控制寄存器 */
typedef	union	Tag_System_Control_Block_Configuration_Control_Register
{
	Integer_Unsigned_32_Bit													Value;
	Structure_System_Control_Block_Configuration_Control_Register_Internal	Internal;
}
	Union_System_Control_Block_Configuration_Control_Register;

/* 系统控制块的系统处理优先级寄存器2内部 */
typedef	struct	Tag_System_Control_Block_System_Handler_Priority_Register_2_Internal
{
	Integer_Unsigned_32_Bit									 : 24;
	Integer_Unsigned_32_Bit	Supervisor_Call_Handler_Priority : 8;
}
	Structure_System_Control_Block_System_Handler_Priority_Register_2_Internal;

/* 系统控制块的系统处理优先级寄存器2 */
typedef	union	Tag_System_Control_Block_System_Handler_Priority_Register_2
{
	Integer_Unsigned_32_Bit														Value;
	Structure_System_Control_Block_System_Handler_Priority_Register_2_Internal	Internal;
}
	Union_System_Control_Block_System_Handler_Priority_Register_2;

/* 系统控制块的系统处理优先级寄存器3内部 */
typedef	struct	Tag_System_Control_Block_System_Handler_Priority_Register_3_Internal
{
	Integer_Unsigned_32_Bit									 : 16;
	Integer_Unsigned_32_Bit	Pend_Supervisor_Handler_Priority : 8;
	Integer_Unsigned_32_Bit	System_Timer_Handler_priority	 : 8;
}
	Structure_System_Control_Block_System_Handler_Priority_Register_3_Internal;

/* 系统控制块的系统处理优先级寄存器3 */
typedef	union	Tag_System_Control_Block_System_Handler_Priority_Register_3
{
	Integer_Unsigned_32_Bit														Value;
	Structure_System_Control_Block_System_Handler_Priority_Register_3_Internal	Internal;
}
	Union_System_Control_Block_System_Handler_Priority_Register_3;

/* 函数声明 */

/*
	功能：读系统控制块的中央处理器标志寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_System_Control_Block_CPU_ID_Register(void);

/*
	功能：读系统控制块的中断控制和状态寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_System_Control_Block_Interrupt_Control_State_Register(void);

/*
	功能：写系统控制块的中断控制和状态寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_System_Control_Block_Interrupt_Control_State_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读系统控制块的应用中断和复位控制寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_System_Control_Block_Application_Interrupt_Reset_Control_Register(void);

/*
	功能：写系统控制块的应用中断和复位控制寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_System_Control_Block_Application_Interrupt_Reset_Control_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读系统控制块的系统控制寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_System_Control_Block_System_Control_Register(void);

/*
	功能：写系统控制块的系统控制寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_System_Control_Block_System_Control_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读系统控制块的配置和控制寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_System_Control_Block_Configuration_Control_Register(void);

/*
	功能：读系统控制块的系统处理优先级寄存器2
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_System_Control_Block_System_Handler_Priority_Register_2(void);

/*
	功能：写系统控制块的系统处理优先级寄存器2
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_System_Control_Block_System_Handler_Priority_Register_2(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读系统控制块的系统处理优先级寄存器3
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_System_Control_Block_System_Handler_Priority_Register_3(void);

/*
	功能：写系统控制块的系统处理优先级寄存器3
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_System_Control_Block_System_Handler_Priority_Register_3(Integer_Unsigned_32_Bit Register_Value);

#endif
