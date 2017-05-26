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

#include	"MCU123_LPC1114_Kit_UART.h"

/* 函数定义 */

/*
	功能：初始化
	参数：无
	返回：无
*/
void	UART_Library_Initialize(void)
{
	Union_UART_Line_Control_Register		UART_Line_Control_Register;
	Union_UART_Divisor_Latch_Low_Register	UART_Divisor_Latch_Low_Register;
	Union_UART_Divisor_Latch_High_Register	UART_Divisor_Latch_High_Register;
	Union_UART_Fractional_Divider_Register	UART_Fractional_Divider_Register;
	Union_UART_Interrupt_Enable_Register	UART_Interrupt_Enable_Register;
	Union_UART_FIFO_Control_Register		UART_FIFO_Control_Register;
	
	/* 设置除数锁存访问 */
	UART_Line_Control_Register.Value = Read_UART_Line_Control_Register();
	UART_Line_Control_Register.Internal.Divisor_Latch_Access_Enable = 1;
	Write_UART_Line_Control_Register(UART_Line_Control_Register.Value);
	
	/* 设置除数锁存低值 */
	UART_Divisor_Latch_Low_Register.Value = Read_UART_Divisor_Latch_Low_Register();
	UART_Divisor_Latch_Low_Register.Internal.Divisor_Low = 4;
	Write_UART_Divisor_Latch_Low_Register(UART_Divisor_Latch_Low_Register.Value);
	
	/* 设置除数锁存高值 */
	UART_Divisor_Latch_High_Register.Value = Read_UART_Divisor_Latch_High_Register();
	UART_Divisor_Latch_High_Register.Internal.Divisor_High = 0;
	Write_UART_Divisor_Latch_High_Register(UART_Divisor_Latch_High_Register.Value);
	
	/* 设置除数锁存访问 */
	UART_Line_Control_Register.Value = Read_UART_Line_Control_Register();
	UART_Line_Control_Register.Internal.Divisor_Latch_Access_Enable = 0;
	Write_UART_Line_Control_Register(UART_Line_Control_Register.Value);
	
	/* 设置小数分频 */
	UART_Fractional_Divider_Register.Value = Read_UART_Fractional_Divider_Register();
	UART_Fractional_Divider_Register.Internal.Divisor_Value = 5;
	UART_Fractional_Divider_Register.Internal.Multiplier_Value = 8;
	Write_UART_Fractional_Divider_Register(UART_Fractional_Divider_Register.Value);
	
	/* 设置数据格式 */
	UART_Line_Control_Register.Value = Read_UART_Line_Control_Register();
	UART_Line_Control_Register.Internal.Word_Length_Select = 3;
	Write_UART_Line_Control_Register(UART_Line_Control_Register.Value);
	
	/* 设置中断使能 */
	UART_Interrupt_Enable_Register.Value = Read_UART_Interrupt_Enable_Register();
	UART_Interrupt_Enable_Register.Internal.Receiver_Buffer_Register_Full_Interrupt = 1;
	UART_Interrupt_Enable_Register.Internal.Transmitter_Holding_Register_Empty_Interrupt = 1;
	UART_Interrupt_Enable_Register.Internal.Receiver_Line_Interrupt = 1;
	Write_UART_Interrupt_Enable_Register(UART_Interrupt_Enable_Register.Value);
	
	/* 设置FIFO控制 */
	UART_FIFO_Control_Register.Value = 0;
	UART_FIFO_Control_Register.Internal.FIFO_Enable = 1;
	UART_FIFO_Control_Register.Internal.Receiver_Trigger_Level = 2;
	Write_UART_FIFO_Control_Register(UART_FIFO_Control_Register.Value);
}

/*
	功能：发送数据
	参数：Integer_Unsigned_8_Bit Data_Value，数据值
	返回：无
*/
void	UART_Library_Transmit_Data(Integer_Unsigned_8_Bit Data_Value)
{
	Union_UART_Line_Status_Register			UART_Line_Status_Register;
	Union_UART_Transmitter_Holding_Register	UART_Transmitter_Holding_Register;
	
	/* 判断线路状态 */
	do
	{
		UART_Line_Status_Register.Value = Read_UART_Line_Status_Register();
	}
	while (UART_Line_Status_Register.Internal.Transmitter_Holding_Register_Empty == 0);
	
	/* 发送数据 */
	UART_Transmitter_Holding_Register.Value = 0;
	UART_Transmitter_Holding_Register.Internal.Holding_Data = Data_Value;
	Write_UART_Transmitter_Holding_Register(UART_Transmitter_Holding_Register.Value);
}

/*
	功能：接收数据
	参数：
	返回：Integer_Unsigned_8_Bit，接收的数据
*/
Integer_Unsigned_8_Bit	UART_Library_Receive_Data(void)
{
	Union_UART_Line_Status_Register		UART_Line_Status_Register;
	Union_UART_Receiver_Buffer_Register	UART_Receiver_Buffer_Register;
	
	/* 判断线路状态 */
	do
	{
		UART_Line_Status_Register.Value = Read_UART_Line_Status_Register();
	}
	while (UART_Line_Status_Register.Internal.Receiver_Data_Ready == 0);
	
	/* 接收数据 */
	UART_Receiver_Buffer_Register.Value = Read_UART_Receiver_Buffer_Register();
	
	return UART_Receiver_Buffer_Register.Internal.Received_Data;
}
