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

#include	"NXP_LPC1114_302_IIC.h"

/* 数据定义 */

/* IIC的寄存器地址 */
const Integer_Unsigned_32_Bit	IIC_Control_Set_Register_Address				  = 0x40000000;
const Integer_Unsigned_32_Bit	IIC_Status_Register_Address						  = 0x40000004;
const Integer_Unsigned_32_Bit	IIC_Data_Register_Address						  = 0x40000008;
const Integer_Unsigned_32_Bit	IIC_Slave_Address_Register_0_Address			  = 0x4000000C;
const Integer_Unsigned_32_Bit	IIC_Serial_Clock_High_Duty_Cycle_Register_Address = 0x40000010;
const Integer_Unsigned_32_Bit	IIC_Serial_Clock_Low_Duty_Cycle_Register_Address  = 0x40000014;
const Integer_Unsigned_32_Bit	IIC_Control_Clear_Register_Address				  = 0x40000018;
const Integer_Unsigned_32_Bit	IIC_Monitor_Mode_Control_Register_Address		  = 0x4000001C;
const Integer_Unsigned_32_Bit	IIC_Slave_Address_Register_1_Address			  = 0x40000020;
const Integer_Unsigned_32_Bit	IIC_Slave_Address_Register_2_Address			  = 0x40000024;
const Integer_Unsigned_32_Bit	IIC_Slave_Address_Register_3_Address			  = 0x40000028;
const Integer_Unsigned_32_Bit	IIC_Data_Buffer_Register_Address				  = 0x4000002C;
const Integer_Unsigned_32_Bit	IIC_Mask_Register_0_Address						  = 0x40000030;
const Integer_Unsigned_32_Bit	IIC_Mask_Register_1_Address						  = 0x40000034;
const Integer_Unsigned_32_Bit	IIC_Mask_Register_2_Address						  = 0x40000038;
const Integer_Unsigned_32_Bit	IIC_Mask_Register_3_Address						  = 0x4000003C;

/* 函数定义 */

/*
	功能：读IIC的控制设置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IIC_Control_Set_Register(void)
{
	return Read_Register_32_Bit(IIC_Control_Set_Register_Address);
}

/*
	功能：写IIC的控制设置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IIC_Control_Set_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IIC_Control_Set_Register_Address, Register_Value);
}

/*
	功能：读IIC的状态寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IIC_Status_Register(void)
{
	return Read_Register_32_Bit(IIC_Status_Register_Address);
}

/*
	功能：读IIC的数据寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IIC_Data_Register(void)
{
	return Read_Register_32_Bit(IIC_Data_Register_Address);
}

/*
	功能：写IIC的数据寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IIC_Data_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IIC_Data_Register_Address, Register_Value);
}

/*
	功能：读IIC的从地址寄存器0
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IIC_Slave_Address_Register_0(void)
{
	return Read_Register_32_Bit(IIC_Slave_Address_Register_0_Address);
}

/*
	功能：写IIC的从地址寄存器0
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IIC_Slave_Address_Register_0(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IIC_Slave_Address_Register_0_Address, Register_Value);
}

/*
	功能：读IIC的串行时钟高占空比寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IIC_Serial_Clock_High_Duty_Cycle_Register(void)
{
	return Read_Register_32_Bit(IIC_Serial_Clock_High_Duty_Cycle_Register_Address);
}

/*
	功能：写IIC的串行时钟高占空比寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IIC_Serial_Clock_High_Duty_Cycle_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IIC_Serial_Clock_High_Duty_Cycle_Register_Address, Register_Value);
}

/*
	功能：读IIC的串行时钟低占空比寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IIC_Serial_Clock_Low_Duty_Cycle_Register(void)
{
	return Read_Register_32_Bit(IIC_Serial_Clock_Low_Duty_Cycle_Register_Address);
}

/*
	功能：写IIC的串行时钟低占空比寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IIC_Serial_Clock_Low_Duty_Cycle_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IIC_Serial_Clock_Low_Duty_Cycle_Register_Address, Register_Value);
}

/*
	功能：写IIC的控制清除寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IIC_Control_Clear_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IIC_Control_Clear_Register_Address, Register_Value);
}

/*
	功能：读IIC的监控模式控制寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IIC_Monitor_Mode_Control_Register(void)
{
	return Read_Register_32_Bit(IIC_Monitor_Mode_Control_Register_Address);
}

/*
	功能：写IIC的监控模式控制寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IIC_Monitor_Mode_Control_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IIC_Monitor_Mode_Control_Register_Address, Register_Value);
}

/*
	功能：读IIC的从地址寄存器1
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IIC_Slave_Address_Register_1(void)
{
	return Read_Register_32_Bit(IIC_Slave_Address_Register_1_Address);
}

/*
	功能：写IIC的从地址寄存器1
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IIC_Slave_Address_Register_1(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IIC_Slave_Address_Register_1_Address, Register_Value);
}

/*
	功能：读IIC的从地址寄存器2
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IIC_Slave_Address_Register_2(void)
{
	return Read_Register_32_Bit(IIC_Slave_Address_Register_2_Address);
}

/*
	功能：写IIC的从地址寄存器2
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IIC_Slave_Address_Register_2(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IIC_Slave_Address_Register_2_Address, Register_Value);
}

/*
	功能：读IIC的从地址寄存器3
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IIC_Slave_Address_Register_3(void)
{
	return Read_Register_32_Bit(IIC_Slave_Address_Register_3_Address);
}

/*
	功能：写IIC的从地址寄存器3
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IIC_Slave_Address_Register_3(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IIC_Slave_Address_Register_3_Address, Register_Value);
}

/*
	功能：读IIC的数据缓冲寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IIC_Data_Buffer_Register(void)
{
	return Read_Register_32_Bit(IIC_Data_Buffer_Register_Address);
}

/*
	功能：读IIC的屏蔽寄存器0
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IIC_Mask_Register_0(void)
{
	return Read_Register_32_Bit(IIC_Mask_Register_0_Address);
}

/*
	功能：写IIC的屏蔽寄存器0
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IIC_Mask_Register_0(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IIC_Mask_Register_0_Address, Register_Value);
}

/*
	功能：读IIC的屏蔽寄存器1
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IIC_Mask_Register_1(void)
{
	return Read_Register_32_Bit(IIC_Mask_Register_1_Address);
}

/*
	功能：写IIC的屏蔽寄存器1
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IIC_Mask_Register_1(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IIC_Mask_Register_1_Address, Register_Value);
}

/*
	功能：读IIC的屏蔽寄存器2
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IIC_Mask_Register_2(void)
{
	return Read_Register_32_Bit(IIC_Mask_Register_2_Address);
}

/*
	功能：写IIC的屏蔽寄存器2
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IIC_Mask_Register_2(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IIC_Mask_Register_2_Address, Register_Value);
}

/*
	功能：读IIC的屏蔽寄存器3
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IIC_Mask_Register_3(void)
{
	return Read_Register_32_Bit(IIC_Mask_Register_3_Address);
}

/*
	功能：写IIC的屏蔽寄存器3
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IIC_Mask_Register_3(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IIC_Mask_Register_3_Address, Register_Value);
}
