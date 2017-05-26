/*
	��Ȩ��2012 - 2014  ���wubin_pos@163.com��
	
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

/* �������� */

/*
	���ܣ���ʼ��
	��������
	���أ���
*/
void	UART_Library_Initialize(void)
{
	Union_UART_Line_Control_Register		UART_Line_Control_Register;
	Union_UART_Divisor_Latch_Low_Register	UART_Divisor_Latch_Low_Register;
	Union_UART_Divisor_Latch_High_Register	UART_Divisor_Latch_High_Register;
	Union_UART_Fractional_Divider_Register	UART_Fractional_Divider_Register;
	Union_UART_Interrupt_Enable_Register	UART_Interrupt_Enable_Register;
	Union_UART_FIFO_Control_Register		UART_FIFO_Control_Register;
	
	/* ���ó���������� */
	UART_Line_Control_Register.Value = Read_UART_Line_Control_Register();
	UART_Line_Control_Register.Internal.Divisor_Latch_Access_Enable = 1;
	Write_UART_Line_Control_Register(UART_Line_Control_Register.Value);
	
	/* ���ó��������ֵ */
	UART_Divisor_Latch_Low_Register.Value = Read_UART_Divisor_Latch_Low_Register();
	UART_Divisor_Latch_Low_Register.Internal.Divisor_Low = 4;
	Write_UART_Divisor_Latch_Low_Register(UART_Divisor_Latch_Low_Register.Value);
	
	/* ���ó��������ֵ */
	UART_Divisor_Latch_High_Register.Value = Read_UART_Divisor_Latch_High_Register();
	UART_Divisor_Latch_High_Register.Internal.Divisor_High = 0;
	Write_UART_Divisor_Latch_High_Register(UART_Divisor_Latch_High_Register.Value);
	
	/* ���ó���������� */
	UART_Line_Control_Register.Value = Read_UART_Line_Control_Register();
	UART_Line_Control_Register.Internal.Divisor_Latch_Access_Enable = 0;
	Write_UART_Line_Control_Register(UART_Line_Control_Register.Value);
	
	/* ����С����Ƶ */
	UART_Fractional_Divider_Register.Value = Read_UART_Fractional_Divider_Register();
	UART_Fractional_Divider_Register.Internal.Divisor_Value = 5;
	UART_Fractional_Divider_Register.Internal.Multiplier_Value = 8;
	Write_UART_Fractional_Divider_Register(UART_Fractional_Divider_Register.Value);
	
	/* �������ݸ�ʽ */
	UART_Line_Control_Register.Value = Read_UART_Line_Control_Register();
	UART_Line_Control_Register.Internal.Word_Length_Select = 3;
	Write_UART_Line_Control_Register(UART_Line_Control_Register.Value);
	
	/* �����ж�ʹ�� */
	UART_Interrupt_Enable_Register.Value = Read_UART_Interrupt_Enable_Register();
	UART_Interrupt_Enable_Register.Internal.Receiver_Buffer_Register_Full_Interrupt = 1;
	UART_Interrupt_Enable_Register.Internal.Transmitter_Holding_Register_Empty_Interrupt = 1;
	UART_Interrupt_Enable_Register.Internal.Receiver_Line_Interrupt = 1;
	Write_UART_Interrupt_Enable_Register(UART_Interrupt_Enable_Register.Value);
	
	/* ����FIFO���� */
	UART_FIFO_Control_Register.Value = 0;
	UART_FIFO_Control_Register.Internal.FIFO_Enable = 1;
	UART_FIFO_Control_Register.Internal.Receiver_Trigger_Level = 2;
	Write_UART_FIFO_Control_Register(UART_FIFO_Control_Register.Value);
}

/*
	���ܣ���������
	������Integer_Unsigned_8_Bit Data_Value������ֵ
	���أ���
*/
void	UART_Library_Transmit_Data(Integer_Unsigned_8_Bit Data_Value)
{
	Union_UART_Line_Status_Register			UART_Line_Status_Register;
	Union_UART_Transmitter_Holding_Register	UART_Transmitter_Holding_Register;
	
	/* �ж���·״̬ */
	do
	{
		UART_Line_Status_Register.Value = Read_UART_Line_Status_Register();
	}
	while (UART_Line_Status_Register.Internal.Transmitter_Holding_Register_Empty == 0);
	
	/* �������� */
	UART_Transmitter_Holding_Register.Value = 0;
	UART_Transmitter_Holding_Register.Internal.Holding_Data = Data_Value;
	Write_UART_Transmitter_Holding_Register(UART_Transmitter_Holding_Register.Value);
}

/*
	���ܣ���������
	������
	���أ�Integer_Unsigned_8_Bit�����յ�����
*/
Integer_Unsigned_8_Bit	UART_Library_Receive_Data(void)
{
	Union_UART_Line_Status_Register		UART_Line_Status_Register;
	Union_UART_Receiver_Buffer_Register	UART_Receiver_Buffer_Register;
	
	/* �ж���·״̬ */
	do
	{
		UART_Line_Status_Register.Value = Read_UART_Line_Status_Register();
	}
	while (UART_Line_Status_Register.Internal.Receiver_Data_Ready == 0);
	
	/* �������� */
	UART_Receiver_Buffer_Register.Value = Read_UART_Receiver_Buffer_Register();
	
	return UART_Receiver_Buffer_Register.Internal.Received_Data;
}
