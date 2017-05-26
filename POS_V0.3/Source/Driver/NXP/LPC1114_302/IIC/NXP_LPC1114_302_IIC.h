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

#ifndef	NXP_LPC1114_302_IIC_H
#define	NXP_LPC1114_302_IIC_H

#include	"Base.h"

/* 数据类型 */

/* IIC的控制设置寄存器内部 */
typedef	struct	Tag_IIC_Control_Set_Register_Internal
{
	Integer_Unsigned_32_Bit						   : 2;
	Integer_Unsigned_32_Bit	Assert_Acknowledge_Set : 1;
	Integer_Unsigned_32_Bit	Serial_Interrupt_Set   : 1;
	Integer_Unsigned_32_Bit	Stop_Condition_Set	   : 1;
	Integer_Unsigned_32_Bit	Start_Condition_Set	   : 1;
	Integer_Unsigned_32_Bit	Interface_Enable_Set   : 1;
}
	Structure_IIC_Control_Set_Register_Internal;

/* IIC的控制设置寄存器 */
typedef	union	Tag_IIC_Control_Set_Register
{
	Integer_Unsigned_32_Bit						Value;
	Structure_IIC_Control_Set_Register_Internal	Internal;
}
	Union_IIC_Control_Set_Register;

/* IIC的状态寄存器内部 */
typedef	struct	Tag_IIC_Status_Register_Internal
{
	Integer_Unsigned_32_Bit	Status_Code	: 8;
}
	Structure_IIC_Status_Register_Internal;

/* IIC的状态寄存器 */
typedef	union	Tag_IIC_Status_Register
{
	Integer_Unsigned_32_Bit					Value;
	Structure_IIC_Status_Register_Internal	Internal;
}
	Union_IIC_Status_Register;

/* IIC的数据寄存器内部 */
typedef	struct	Tag_IIC_Data_Register_Internal
{
	Integer_Unsigned_32_Bit	Data_Code : 8;
}
	Structure_IIC_Data_Register_Internal;

/* IIC的数据寄存器 */
typedef	union	Tag_IIC_Data_Register
{
	Integer_Unsigned_32_Bit					Value;
	Structure_IIC_Data_Register_Internal	Internal;
}
	Union_IIC_Data_Register;

/* IIC的从地址寄存器0内部 */
typedef	struct	Tag_IIC_Slave_Address_Register_0_Internal
{
	Integer_Unsigned_32_Bit	General_Call_Enable	: 1;
	Integer_Unsigned_32_Bit	Device_Address		: 7;
}
	Structure_IIC_Slave_Address_Register_0_Internal;

/* IIC的从地址寄存器0 */
typedef	union	Tag_IIC_Slave_Address_Register_0
{
	Integer_Unsigned_32_Bit							Value;
	Structure_IIC_Slave_Address_Register_0_Internal	Internal;
}
	Union_IIC_Slave_Address_Register_0;

/* IIC的串行时钟高占空比寄存器内部 */
typedef	struct	Tag_IIC_Serial_Clock_High_Duty_Cycle_Register_Internal
{
	Integer_Unsigned_32_Bit	Counte_Value : 16;
}
	Structure_IIC_Serial_Clock_High_Duty_Cycle_Register_Internal;

/* IIC的串行时钟高占空比寄存器 */
typedef	union	Tag_IIC_Serial_Clock_High_Duty_Cycle_Register
{
	Integer_Unsigned_32_Bit											Value;
	Structure_IIC_Serial_Clock_High_Duty_Cycle_Register_Internal	Internal;
}
	Union_IIC_Serial_Clock_High_Duty_Cycle_Register;

/* IIC的串行时钟低占空比寄存器内部 */
typedef	struct	Tag_IIC_Serial_Clock_Low_Duty_Cycle_Register_Internal
{
	Integer_Unsigned_32_Bit	Counte_Value : 16;
}
	Structure_IIC_Serial_Clock_Low_Duty_Cycle_Register_Internal;

/* IIC的串行时钟低占空比寄存器 */
typedef	union	Tag_IIC_Serial_Clock_Low_Duty_Cycle_Register
{
	Integer_Unsigned_32_Bit											Value;
	Structure_IIC_Serial_Clock_Low_Duty_Cycle_Register_Internal	Internal;
}
	Union_IIC_Serial_Clock_Low_Duty_Cycle_Register;

/* IIC的控制清除寄存器内部 */
typedef	struct	Tag_IIC_Control_Clear_Register_Internal
{
	Integer_Unsigned_32_Bit							 : 2;
	Integer_Unsigned_32_Bit	Assert_Acknowledge_Clear : 1;
	Integer_Unsigned_32_Bit	Serial_Interrupt_Clear	 : 1;
	Integer_Unsigned_32_Bit							 : 1;
	Integer_Unsigned_32_Bit	Start_Condition_Clear	 : 1;
	Integer_Unsigned_32_Bit	Interface_Enable_Clear	 : 1;
}
	Structure_IIC_Control_Clear_Register_Internal;

/* IIC的控制清除寄存器 */
typedef	union	Tag_IIC_Control_Clear_Register
{
	Integer_Unsigned_32_Bit							Value;
	Structure_IIC_Control_Clear_Register_Internal	Internal;
}
	Union_IIC_Control_Clear_Register;

/* IIC的监控模式控制寄存器内部 */
typedef	struct	Tag_IIC_Monitor_Mode_Control_Register_Internal
{
	Integer_Unsigned_32_Bit	Monitor_Mode_Enable		   : 1;
	Integer_Unsigned_32_Bit	Serial_Clock_Output_Enable : 1;
	Integer_Unsigned_32_Bit	Match_All_Address		   : 1;
}
	Structure_IIC_Monitor_Mode_Control_Register_Internal;

/* IIC的监控模式控制寄存器 */
typedef	union	Tag_IIC_Monitor_Mode_Control_Register
{
	Integer_Unsigned_32_Bit									Value;
	Structure_IIC_Monitor_Mode_Control_Register_Internal	Internal;
}
	Union_IIC_Monitor_Mode_Control_Register;

/* IIC的从地址寄存器1内部 */
typedef	struct	Tag_IIC_Slave_Address_Register_1_Internal
{
	Integer_Unsigned_32_Bit	General_Call_Enable	: 1;
	Integer_Unsigned_32_Bit	Device_Address		: 7;
}
	Structure_IIC_Slave_Address_Register_1_Internal;

/* IIC的从地址寄存器1 */
typedef	union	Tag_IIC_Slave_Address_Register_1
{
	Integer_Unsigned_32_Bit							Value;
	Structure_IIC_Slave_Address_Register_1_Internal	Internal;
}
	Union_IIC_Slave_Address_Register_1;

/* IIC的从地址寄存器2内部 */
typedef	struct	Tag_IIC_Slave_Address_Register_2_Internal
{
	Integer_Unsigned_32_Bit	General_Call_Enable	: 1;
	Integer_Unsigned_32_Bit	Device_Address		: 7;
}
	Structure_IIC_Slave_Address_Register_2_Internal;

/* IIC的从地址寄存器2 */
typedef	union	Tag_IIC_Slave_Address_Register_2
{
	Integer_Unsigned_32_Bit							Value;
	Structure_IIC_Slave_Address_Register_2_Internal	Internal;
}
	Union_IIC_Slave_Address_Register_2;

/* IIC的从地址寄存器3内部 */
typedef	struct	Tag_IIC_Slave_Address_Register_3_Internal
{
	Integer_Unsigned_32_Bit	General_Call_Enable	: 1;
	Integer_Unsigned_32_Bit	Device_Address		: 7;
}
	Structure_IIC_Slave_Address_Register_3_Internal;

/* IIC的从地址寄存器3 */
typedef	union	Tag_IIC_Slave_Address_Register_3
{
	Integer_Unsigned_32_Bit							Value;
	Structure_IIC_Slave_Address_Register_3_Internal	Internal;
}
	Union_IIC_Slave_Address_Register_3;

/* IIC的数据缓冲寄存器内部 */
typedef	struct	Tag_IIC_Data_Buffer_Register_Internal
{
	Integer_Unsigned_32_Bit	Data_Code : 8;
}
	Structure_IIC_Data_Buffer_Register_Internal;

/* IIC的数据缓冲寄存器 */
typedef	union	Tag_IIC_Data_Buffer_Register
{
	Integer_Unsigned_32_Bit						Value;
	Structure_IIC_Data_Buffer_Register_Internal	Internal;
}
	Union_IIC_Data_Buffer_Register;

/* IIC的屏蔽寄存器0内部 */
typedef	struct	Tag_IIC_Mask_Register_0_Internal
{
	Integer_Unsigned_32_Bit			  : 1;
	Integer_Unsigned_32_Bit	Mask_Code : 7;
}
	Structure_IIC_Mask_Register_0_Internal;

/* IIC的屏蔽寄存器0 */
typedef	union	Tag_IIC_Mask_Register_0
{
	Integer_Unsigned_32_Bit					Value;
	Structure_IIC_Mask_Register_0_Internal	Internal;
}
	Union_IIC_Mask_Register_0;

/* IIC的屏蔽寄存器1内部 */
typedef	struct	Tag_IIC_Mask_Register_1_Internal
{
	Integer_Unsigned_32_Bit			  : 1;
	Integer_Unsigned_32_Bit	Mask_Code : 7;
}
	Structure_IIC_Mask_Register_1_Internal;

/* IIC的屏蔽寄存器1 */
typedef	union	Tag_IIC_Mask_Register_1
{
	Integer_Unsigned_32_Bit					Value;
	Structure_IIC_Mask_Register_1_Internal	Internal;
}
	Union_IIC_Mask_Register_1;

/* IIC的屏蔽寄存器2内部 */
typedef	struct	Tag_IIC_Mask_Register_2_Internal
{
	Integer_Unsigned_32_Bit			  : 1;
	Integer_Unsigned_32_Bit	Mask_Code : 7;
}
	Structure_IIC_Mask_Register_2_Internal;

/* IIC的屏蔽寄存器2 */
typedef	union	Tag_IIC_Mask_Register_2
{
	Integer_Unsigned_32_Bit					Value;
	Structure_IIC_Mask_Register_2_Internal	Internal;
}
	Union_IIC_Mask_Register_2;

/* IIC的屏蔽寄存器3内部 */
typedef	struct	Tag_IIC_Mask_Register_3_Internal
{
	Integer_Unsigned_32_Bit			  : 1;
	Integer_Unsigned_32_Bit	Mask_Code : 7;
}
	Structure_IIC_Mask_Register_3_Internal;

/* IIC的屏蔽寄存器3 */
typedef	union	Tag_IIC_Mask_Register_3
{
	Integer_Unsigned_32_Bit					Value;
	Structure_IIC_Mask_Register_3_Internal	Internal;
}
	Union_IIC_Mask_Register_3;

/* 函数声明 */

/*
	功能：读IIC的控制设置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IIC_Control_Set_Register(void);

/*
	功能：写IIC的控制设置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IIC_Control_Set_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读IIC的状态寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IIC_Status_Register(void);

/*
	功能：读IIC的数据寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IIC_Data_Register(void);

/*
	功能：写IIC的数据寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IIC_Data_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读IIC的从地址寄存器0
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IIC_Slave_Address_Register_0(void);

/*
	功能：写IIC的从地址寄存器0
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IIC_Slave_Address_Register_0(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读IIC的串行时钟高占空比寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IIC_Serial_Clock_High_Duty_Cycle_Register(void);

/*
	功能：写IIC的串行时钟高占空比寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IIC_Serial_Clock_High_Duty_Cycle_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读IIC的串行时钟低占空比寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IIC_Serial_Clock_Low_Duty_Cycle_Register(void);

/*
	功能：写IIC的串行时钟低占空比寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IIC_Serial_Clock_Low_Duty_Cycle_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：写IIC的控制清除寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IIC_Control_Clear_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读IIC的监控模式控制寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IIC_Monitor_Mode_Control_Register(void);

/*
	功能：写IIC的监控模式控制寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IIC_Monitor_Mode_Control_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读IIC的从地址寄存器1
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IIC_Slave_Address_Register_1(void);

/*
	功能：写IIC的从地址寄存器1
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IIC_Slave_Address_Register_1(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读IIC的从地址寄存器2
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IIC_Slave_Address_Register_2(void);

/*
	功能：写IIC的从地址寄存器2
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IIC_Slave_Address_Register_2(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读IIC的从地址寄存器3
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IIC_Slave_Address_Register_3(void);

/*
	功能：写IIC的从地址寄存器3
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IIC_Slave_Address_Register_3(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读IIC的数据缓冲寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IIC_Data_Buffer_Register(void);

/*
	功能：读IIC的屏蔽寄存器0
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IIC_Mask_Register_0(void);

/*
	功能：写IIC的屏蔽寄存器0
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IIC_Mask_Register_0(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读IIC的屏蔽寄存器1
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IIC_Mask_Register_1(void);

/*
	功能：写IIC的屏蔽寄存器1
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IIC_Mask_Register_1(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读IIC的屏蔽寄存器2
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IIC_Mask_Register_2(void);

/*
	功能：写IIC的屏蔽寄存器2
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IIC_Mask_Register_2(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读IIC的屏蔽寄存器3
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IIC_Mask_Register_3(void);

/*
	功能：写IIC的屏蔽寄存器3
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IIC_Mask_Register_3(Integer_Unsigned_32_Bit Register_Value);

#endif
