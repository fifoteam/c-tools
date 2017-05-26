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

#ifndef	NXP_LPC1114_302_UART_H
#define	NXP_LPC1114_302_UART_H

#include	"Base.h"

/* 数据类型 */

/* UART的接收器缓冲寄存器内部 */
typedef	struct	Tag_UART_Receiver_Buffer_Register_Internal
{
	Integer_Unsigned_32_Bit	Received_Data : 8;
}
	Structure_UART_Receiver_Buffer_Register_Internal;

/* UART的接收器缓冲寄存器 */
typedef	union	Tag_UART_Receiver_Buffer_Register
{
	Integer_Unsigned_32_Bit								Value;
	Structure_UART_Receiver_Buffer_Register_Internal	Internal;
}
	Union_UART_Receiver_Buffer_Register;

/* UART的发送器保持寄存器内部 */
typedef	struct	Tag_UART_Transmitter_Holding_Register_Internal
{
	Integer_Unsigned_32_Bit	Holding_Data : 8;
}
	Structure_UART_Transmitter_Holding_Register_Internal;

/* UART的发送器保持寄存器 */
typedef	union	Tag_UART_Transmitter_Holding_Register
{
	Integer_Unsigned_32_Bit									Value;
	Structure_UART_Transmitter_Holding_Register_Internal	Internal;
}
	Union_UART_Transmitter_Holding_Register;

/* UART的除数锁存低寄存器内部 */
typedef	struct	Tag_UART_Divisor_Latch_Low_Register_Internal
{
	Integer_Unsigned_32_Bit	Divisor_Low : 8;
}
	Structure_UART_Divisor_Latch_Low_Register_Internal;

/* UART的除数锁存低寄存器 */
typedef	union	Tag_UART_Divisor_Latch_Low_Register
{
	Integer_Unsigned_32_Bit								Value;
	Structure_UART_Divisor_Latch_Low_Register_Internal	Internal;
}
	Union_UART_Divisor_Latch_Low_Register;

/* UART的除数锁存高寄存器内部 */
typedef	struct	Tag_UART_Divisor_Latch_High_Register_Internal
{
	Integer_Unsigned_32_Bit	Divisor_High : 8;
}
	Structure_UART_Divisor_Latch_High_Register_Internal;

/* UART的除数锁存高寄存器 */
typedef	union	Tag_UART_Divisor_Latch_High_Register
{
	Integer_Unsigned_32_Bit								Value;
	Structure_UART_Divisor_Latch_High_Register_Internal	Internal;
}
	Union_UART_Divisor_Latch_High_Register;

/* UART的中断使能寄存器内部 */
typedef	struct	Tag_UART_Interrupt_Enable_Register_Internal
{
	Integer_Unsigned_32_Bit	Receiver_Buffer_Register_Full_Interrupt		 : 1;
	Integer_Unsigned_32_Bit	Transmitter_Holding_Register_Empty_Interrupt : 1;
	Integer_Unsigned_32_Bit	Receiver_Line_Interrupt						 : 1;
	Integer_Unsigned_32_Bit												 : 5;
	Integer_Unsigned_32_Bit	Auto_Baud_End_Interrupt						 : 1;
	Integer_Unsigned_32_Bit	Auto_Baud_Time_Out_Interrupt				 : 1;
}
	Structure_UART_Interrupt_Enable_Register_Internal;

/* UART的中断使能寄存器 */
typedef	union	Tag_UART_Interrupt_Enable_Register
{
	Integer_Unsigned_32_Bit								Value;
	Structure_UART_Interrupt_Enable_Register_Internal	Internal;
}
	Union_UART_Interrupt_Enable_Register;

/* UART的中断标识寄存器内部 */
typedef	struct	Tag_UART_Interrupt_Identification_Register_Internal
{
	Integer_Unsigned_32_Bit	Interrupt_Status			 : 1;
	Integer_Unsigned_32_Bit	Interrupt_Identification	 : 3;
	Integer_Unsigned_32_Bit								 : 2;
	Integer_Unsigned_32_Bit	FIFO_Enable					 : 2;
	Integer_Unsigned_32_Bit	Auto_Baud_End_Interrupt		 : 1;
	Integer_Unsigned_32_Bit	Auto_Baud_Time_Out_Interrupt : 1;
}
	Structure_UART_Interrupt_Identification_Register_Internal;

/* UART的中断标识寄存器 */
typedef	union	Tag_UART_Interrupt_Identification_Register
{
	Integer_Unsigned_32_Bit										Value;
	Structure_UART_Interrupt_Identification_Register_Internal	Internal;
}
	Union_UART_Interrupt_Identification_Register;

/* UART的FIFO控制寄存器内部 */
typedef	struct	Tag_UART_FIFO_Control_Register_Internal
{
	Integer_Unsigned_32_Bit	FIFO_Enable			   : 1;
	Integer_Unsigned_32_Bit	Receiver_FIFO_Reset	   : 1;
	Integer_Unsigned_32_Bit	Transmitter_FIFO_Reset : 1;
	Integer_Unsigned_32_Bit						   : 3;
	Integer_Unsigned_32_Bit	Receiver_Trigger_Level : 2;
}
	Structure_UART_FIFO_Control_Register_Internal;

/* UART的FIFO控制寄存器 */
typedef	union	Tag_UART_FIFO_Control_Register
{
	Integer_Unsigned_32_Bit							Value;
	Structure_UART_FIFO_Control_Register_Internal	Internal;
}
	Union_UART_FIFO_Control_Register;

/* UART的线路控制寄存器内部 */
typedef	struct	Tag_UART_Line_Control_Register_Internal
{
	Integer_Unsigned_32_Bit	Word_Length_Select			: 2;
	Integer_Unsigned_32_Bit	Stop_Bit_Select				: 1;
	Integer_Unsigned_32_Bit	Parity_Enable				: 1;
	Integer_Unsigned_32_Bit	Parity_Select				: 2;
	Integer_Unsigned_32_Bit	Break_Control				: 1;
	Integer_Unsigned_32_Bit	Divisor_Latch_Access_Enable	: 1;
}
	Structure_UART_Line_Control_Register_Internal;

/* UART的线路控制寄存器 */
typedef	union	Tag_UART_Line_Control_Register
{
	Integer_Unsigned_32_Bit							Value;
	Structure_UART_Line_Control_Register_Internal	Internal;
}
	Union_UART_Line_Control_Register;

/* UART的调制解调器控制寄存器内部 */
typedef	struct	Tag_UART_Modem_Control_Register_Internal
{
	Integer_Unsigned_32_Bit	DTR_Control			 : 1;
	Integer_Unsigned_32_Bit	RTS_Control			 : 1;
	Integer_Unsigned_32_Bit						 : 2;
	Integer_Unsigned_32_Bit	Loopback_Mode_Select : 1;
	Integer_Unsigned_32_Bit						 : 1;
	Integer_Unsigned_32_Bit	RTS_Flow_Control	 : 1;
	Integer_Unsigned_32_Bit	CTS_Flow_Control	 : 1;
}
	Structure_UART_Modem_Control_Register_Internal;

/* UART的调制解调器控制寄存器 */
typedef	union	Tag_UART_Modem_Control_Register
{
	Integer_Unsigned_32_Bit							Value;
	Structure_UART_Modem_Control_Register_Internal	Internal;
}
	Union_UART_Modem_Control_Register;

/* UART的线路状态寄存器内部 */
typedef	struct	Tag_UART_Line_Status_Register_Internal
{
	Integer_Unsigned_32_Bit	Receiver_Data_Ready				   : 1;
	Integer_Unsigned_32_Bit	Overrun_Error					   : 1;
	Integer_Unsigned_32_Bit	Parity_Error					   : 1;
	Integer_Unsigned_32_Bit	Framing_Error					   : 1;
	Integer_Unsigned_32_Bit	Break_Interrupt					   : 1;
	Integer_Unsigned_32_Bit	Transmitter_Holding_Register_Empty : 1;
	Integer_Unsigned_32_Bit	Transmitter_Empty				   : 1;
	Integer_Unsigned_32_Bit	Receiver_FIFO_Error				   : 1;
}
	Structure_UART_Line_Status_Register_Internal;

/* UART的线路状态寄存器 */
typedef	union	Tag_UART_Line_Status_Register
{
	Integer_Unsigned_32_Bit							Value;
	Structure_UART_Line_Status_Register_Internal	Internal;
}
	Union_UART_Line_Status_Register;

/* UART的调制解调器状态寄存器内部 */
typedef	struct	Tag_UART_Modem_Status_Register_Internal
{
	Integer_Unsigned_32_Bit	Delta_CTS		 : 1;
	Integer_Unsigned_32_Bit	Delta_DSR		 : 1;
	Integer_Unsigned_32_Bit	Trailing_Edge_RI : 1;
	Integer_Unsigned_32_Bit	Delta_DCD		 : 1;
	Integer_Unsigned_32_Bit	CTS_State		 : 1;
	Integer_Unsigned_32_Bit	DSR_State		 : 1;
	Integer_Unsigned_32_Bit	RI_State		 : 1;
	Integer_Unsigned_32_Bit	DCD_State		 : 1;
}
	Structure_UART_Modem_Status_Register_Internal;

/* UART的调制解调器状态寄存器 */
typedef	union	Tag_UART_Modem_Status_Register
{
	Integer_Unsigned_32_Bit							Value;
	Structure_UART_Modem_Status_Register_Internal	Internal;
}
	Union_UART_Modem_Status_Register;

/* UART的便笺寄存器内部 */
typedef	struct	Tag_UART_Scratch_Pad_Register_Internal
{
	Integer_Unsigned_32_Bit	Pad_Data : 8;
}
	Structure_UART_Scratch_Pad_Register_Internal;

/* UART的便笺寄存器 */
typedef	union	Tag_UART_Scratch_Pad_Register
{
	Integer_Unsigned_32_Bit							Value;
	Structure_UART_Scratch_Pad_Register_Internal	Internal;
}
	Union_UART_Scratch_Pad_Register;

/* UART的自动波特控制寄存器内部 */
typedef	struct	Tag_UART_Auto_Baud_Control_Register_Internal
{
	Integer_Unsigned_32_Bit	Start_Enable					   : 1;
	Integer_Unsigned_32_Bit	Mode_Select						   : 1;
	Integer_Unsigned_32_Bit	Restart_Enable					   : 1;
	Integer_Unsigned_32_Bit									   : 5;
	Integer_Unsigned_32_Bit	Auto_Baud_End_Interrupt_Clear	   : 1;
	Integer_Unsigned_32_Bit	Auto_Baud_Time_Out_Interrupt_Clear : 1;
}
	Structure_UART_Auto_Baud_Control_Register_Internal;

/* UART的自动波特控制寄存器 */
typedef	union	Tag_UART_Auto_Baud_Control_Register
{
	Integer_Unsigned_32_Bit								Value;
	Structure_UART_Auto_Baud_Control_Register_Internal	Internal;
}
	Union_UART_Auto_Baud_Control_Register;

/* UART的小数分频寄存器内部 */
typedef	struct	Tag_UART_Fractional_Divider_Register_Internal
{
	Integer_Unsigned_32_Bit	Divisor_Value	 : 4;
	Integer_Unsigned_32_Bit	Multiplier_Value : 4;
}
	Structure_UART_Fractional_Divider_Register_Internal;

/* UART的小数分频寄存器 */
typedef	union	Tag_UART_Fractional_Divider_Register
{
	Integer_Unsigned_32_Bit								Value;
	Structure_UART_Fractional_Divider_Register_Internal	Internal;
}
	Union_UART_Fractional_Divider_Register;

/* UART的发送使能寄存器内部 */
typedef	struct	Tag_UART_Transmit_Enable_Register_Internal
{
	Integer_Unsigned_32_Bit					: 7;
	Integer_Unsigned_32_Bit	Transmit_Enable	: 1;
}
	Structure_UART_Transmit_Enable_Register_Internal;

/* UART的发送使能寄存器 */
typedef	union	Tag_UART_Transmit_Enable_Register
{
	Integer_Unsigned_32_Bit								Value;
	Structure_UART_Transmit_Enable_Register_Internal	Internal;
}
	Union_UART_Transmit_Enable_Register;

/* UART的RS485控制寄存器内部 */
typedef	struct	Tag_UART_RS485_Control_Register_Internal
{
	Integer_Unsigned_32_Bit	Normal_Multidrop_Mode_Enable  : 1;
	Integer_Unsigned_32_Bit	Receiver_Enable				  : 1;
	Integer_Unsigned_32_Bit	Auto_Address_Detect_Enable	  : 1;
	Integer_Unsigned_32_Bit	Select_Direction_Control_Pin  : 1;
	Integer_Unsigned_32_Bit	Auto_Direction_Control_Enable : 1;
	Integer_Unsigned_32_Bit	Polarity_Control			  : 1;
}
	Structure_UART_RS485_Control_Register_Internal;

/* UART的RS485控制寄存器 */
typedef	union	Tag_UART_RS485_Control_Register
{
	Integer_Unsigned_32_Bit							Value;
	Structure_UART_RS485_Control_Register_Internal	Internal;
}
	Union_UART_RS485_Control_Register;

/* UART的RS485地址匹配寄存器内部 */
typedef	struct	Tag_UART_RS485_Address_Match_Register_Internal
{
	Integer_Unsigned_32_Bit	Address_Match_Value : 8;
}
	Structure_UART_RS485_Address_Match_Register_Internal;

/* UART的RS485地址匹配寄存器 */
typedef	union	Tag_UART_RS485_Address_Match_Register
{
	Integer_Unsigned_32_Bit									Value;
	Structure_UART_RS485_Address_Match_Register_Internal	Internal;
}
	Union_UART_RS485_Address_Match_Register;

/* UART的RS485方向控制延迟寄存器内部 */
typedef	struct	Tag_UART_RS485_Direction_Control_Delay_Register_Internal
{
	Integer_Unsigned_32_Bit	Delay_Value : 8;
}
	Structure_UART_RS485_Direction_Control_Delay_Register_Internal;

/* UART的RS485方向控制延迟寄存器 */
typedef	union	Tag_UART_RS485_Direction_Control_Delay_Register
{
	Integer_Unsigned_32_Bit											Value;
	Structure_UART_RS485_Direction_Control_Delay_Register_Internal	Internal;
}
	Union_UART_RS485_Direction_Control_Delay_Register;

/* 函数声明 */

/*
	功能：读UART的接收器缓冲寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_UART_Receiver_Buffer_Register(void);

/*
	功能：写UART的发送器保持寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_UART_Transmitter_Holding_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读UART的除数锁存低寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_UART_Divisor_Latch_Low_Register(void);

/*
	功能：写UART的除数锁存低寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_UART_Divisor_Latch_Low_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读UART的除数锁存高寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_UART_Divisor_Latch_High_Register(void);

/*
	功能：写UART的除数锁存高寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_UART_Divisor_Latch_High_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读UART的中断使能寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_UART_Interrupt_Enable_Register(void);

/*
	功能：写UART的中断使能寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_UART_Interrupt_Enable_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读UART的中断标识寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_UART_Interrupt_Identification_Register(void);

/*
	功能：写UART的FIFO控制寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_UART_FIFO_Control_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读UART的线路控制寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_UART_Line_Control_Register(void);

/*
	功能：写UART的线路控制寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_UART_Line_Control_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读UART的调制解调器控制寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_UART_Modem_Control_Register(void);

/*
	功能：写UART的调制解调器控制寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_UART_Modem_Control_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读UART的线路状态寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_UART_Line_Status_Register(void);

/*
	功能：读UART的调制解调器状态寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_UART_Modem_Status_Register(void);

/*
	功能：读UART的便笺寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_UART_Scratch_Pad_Register(void);

/*
	功能：写UART的便笺寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_UART_Scratch_Pad_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读UART的自动波特控制寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_UART_Auto_Baud_Control_Register(void);

/*
	功能：写UART的自动波特控制寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_UART_Auto_Baud_Control_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读UART的小数分频寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_UART_Fractional_Divider_Register(void);

/*
	功能：写UART的小数分频寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_UART_Fractional_Divider_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读UART的发送使能寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_UART_Transmit_Enable_Register(void);

/*
	功能：写UART的发送使能寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_UART_Transmit_Enable_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读UART的RS485控制寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_UART_RS485_Control_Register(void);

/*
	功能：写UART的RS485控制寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_UART_RS485_Control_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读UART的RS485地址匹配寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_UART_RS485_Address_Match_Register(void);

/*
	功能：写UART的RS485地址匹配寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_UART_RS485_Address_Match_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读UART的RS485方向控制延迟寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_UART_RS485_Direction_Control_Delay_Register(void);

/*
	功能：写UART的RS485方向控制延迟寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_UART_RS485_Direction_Control_Delay_Register(Integer_Unsigned_32_Bit Register_Value);

#endif
