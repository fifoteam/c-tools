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

#include	"NXP_LPC1114_302_UART.h"

/* 数据定义 */

/* UART的寄存器地址 */
const Integer_Unsigned_32_Bit	UART_Receiver_Buffer_Register_Address				= 0x40008000;
const Integer_Unsigned_32_Bit	UART_Transmitter_Holding_Register_Address			= 0x40008000;
const Integer_Unsigned_32_Bit	UART_Divisor_Latch_Low_Register_Address				= 0x40008000;
const Integer_Unsigned_32_Bit	UART_Divisor_Latch_High_Register_Address			= 0x40008004;
const Integer_Unsigned_32_Bit	UART_Interrupt_Enable_Register_Address				= 0x40008004;
const Integer_Unsigned_32_Bit	UART_Interrupt_Identification_Register_Address		= 0x40008008;
const Integer_Unsigned_32_Bit	UART_FIFO_Control_Register_Address					= 0x40008008;
const Integer_Unsigned_32_Bit	UART_Line_Control_Register_Address					= 0x4000800C;
const Integer_Unsigned_32_Bit	UART_Modem_Control_Register_Address					= 0x40008010;
const Integer_Unsigned_32_Bit	UART_Line_Status_Register_Address					= 0x40008014;
const Integer_Unsigned_32_Bit	UART_Modem_Status_Register_Address					= 0x40008018;
const Integer_Unsigned_32_Bit	UART_Scratch_Pad_Register_Address					= 0x4000801C;
const Integer_Unsigned_32_Bit	UART_Auto_Baud_Control_Register_Address				= 0x40008020;
const Integer_Unsigned_32_Bit	UART_Fractional_Divider_Register_Address			= 0x40008028;
const Integer_Unsigned_32_Bit	UART_Transmit_Enable_Register_Address				= 0x40008030;
const Integer_Unsigned_32_Bit	UART_RS485_Control_Register_Address					= 0x4000804C;
const Integer_Unsigned_32_Bit	UART_RS485_Address_Match_Register_Address			= 0x40008050;
const Integer_Unsigned_32_Bit	UART_RS485_Direction_Control_Delay_Register_Address	= 0x40008054;

/* 函数定义 */

/*
	功能：读UART的接收器缓冲寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_UART_Receiver_Buffer_Register(void)
{
	return Read_Register_32_Bit(UART_Receiver_Buffer_Register_Address);
}

/*
	功能：写UART的发送器保持寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_UART_Transmitter_Holding_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(UART_Transmitter_Holding_Register_Address, Register_Value);
}

/*
	功能：读UART的除数锁存低寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_UART_Divisor_Latch_Low_Register(void)
{
	return Read_Register_32_Bit(UART_Divisor_Latch_Low_Register_Address);
}

/*
	功能：写UART的除数锁存低寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_UART_Divisor_Latch_Low_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(UART_Divisor_Latch_Low_Register_Address, Register_Value);
}

/*
	功能：读UART的除数锁存高寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_UART_Divisor_Latch_High_Register(void)
{
	return Read_Register_32_Bit(UART_Divisor_Latch_High_Register_Address);
}

/*
	功能：写UART的除数锁存高寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_UART_Divisor_Latch_High_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(UART_Divisor_Latch_High_Register_Address, Register_Value);
}

/*
	功能：读UART的中断使能寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_UART_Interrupt_Enable_Register(void)
{
	return Read_Register_32_Bit(UART_Interrupt_Enable_Register_Address);
}

/*
	功能：写UART的中断使能寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_UART_Interrupt_Enable_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(UART_Interrupt_Enable_Register_Address, Register_Value);
}

/*
	功能：读UART的中断标识寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_UART_Interrupt_Identification_Register(void)
{
	return Read_Register_32_Bit(UART_Interrupt_Identification_Register_Address);
}

/*
	功能：写UART的FIFO控制寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_UART_FIFO_Control_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(UART_FIFO_Control_Register_Address, Register_Value);
}

/*
	功能：读UART的线路控制寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_UART_Line_Control_Register(void)
{
	return Read_Register_32_Bit(UART_Line_Control_Register_Address);
}

/*
	功能：写UART的线路控制寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_UART_Line_Control_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(UART_Line_Control_Register_Address, Register_Value);
}

/*
	功能：读UART的调制解调器控制寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_UART_Modem_Control_Register(void)
{
	return Read_Register_32_Bit(UART_Modem_Control_Register_Address);
}

/*
	功能：写UART的调制解调器控制寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_UART_Modem_Control_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(UART_Modem_Control_Register_Address, Register_Value);
}

/*
	功能：读UART的线路状态寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_UART_Line_Status_Register(void)
{
	return Read_Register_32_Bit(UART_Line_Status_Register_Address);
}

/*
	功能：读UART的调制解调器状态寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_UART_Modem_Status_Register(void)
{
	return Read_Register_32_Bit(UART_Modem_Status_Register_Address);
}

/*
	功能：读UART的便笺寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_UART_Scratch_Pad_Register(void)
{
	return Read_Register_32_Bit(UART_Scratch_Pad_Register_Address);
}

/*
	功能：写UART的便笺寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_UART_Scratch_Pad_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(UART_Scratch_Pad_Register_Address, Register_Value);
}

/*
	功能：读UART的自动波特控制寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_UART_Auto_Baud_Control_Register(void)
{
	return Read_Register_32_Bit(UART_Auto_Baud_Control_Register_Address);
}

/*
	功能：写UART的自动波特控制寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_UART_Auto_Baud_Control_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(UART_Auto_Baud_Control_Register_Address, Register_Value);
}

/*
	功能：读UART的小数分频寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_UART_Fractional_Divider_Register(void)
{
	return Read_Register_32_Bit(UART_Fractional_Divider_Register_Address);
}

/*
	功能：写UART的小数分频寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_UART_Fractional_Divider_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(UART_Fractional_Divider_Register_Address, Register_Value);
}

/*
	功能：读UART的发送使能寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_UART_Transmit_Enable_Register(void)
{
	return Read_Register_32_Bit(UART_Transmit_Enable_Register_Address);
}

/*
	功能：写UART的发送使能寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_UART_Transmit_Enable_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(UART_Transmit_Enable_Register_Address, Register_Value);
}

/*
	功能：读UART的RS485控制寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_UART_RS485_Control_Register(void)
{
	return Read_Register_32_Bit(UART_RS485_Control_Register_Address);
}

/*
	功能：写UART的RS485控制寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_UART_RS485_Control_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(UART_RS485_Control_Register_Address, Register_Value);
}

/*
	功能：读UART的RS485地址匹配寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_UART_RS485_Address_Match_Register(void)
{
	return Read_Register_32_Bit(UART_RS485_Address_Match_Register_Address);
}

/*
	功能：写UART的RS485地址匹配寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_UART_RS485_Address_Match_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(UART_RS485_Address_Match_Register_Address, Register_Value);
}

/*
	功能：读UART的RS485方向控制延迟寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_UART_RS485_Direction_Control_Delay_Register(void)
{
	return Read_Register_32_Bit(UART_RS485_Direction_Control_Delay_Register_Address);
}

/*
	功能：写UART的RS485方向控制延迟寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_UART_RS485_Direction_Control_Delay_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(UART_RS485_Direction_Control_Delay_Register_Address, Register_Value);
}
