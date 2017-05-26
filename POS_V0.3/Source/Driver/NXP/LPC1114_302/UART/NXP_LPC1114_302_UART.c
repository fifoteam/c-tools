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

#include	"NXP_LPC1114_302_UART.h"

/* ���ݶ��� */

/* UART�ļĴ�����ַ */
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

/* �������� */

/*
	���ܣ���UART�Ľ���������Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_UART_Receiver_Buffer_Register(void)
{
	return Read_Register_32_Bit(UART_Receiver_Buffer_Register_Address);
}

/*
	���ܣ�дUART�ķ��������ּĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_UART_Transmitter_Holding_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(UART_Transmitter_Holding_Register_Address, Register_Value);
}

/*
	���ܣ���UART�ĳ�������ͼĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_UART_Divisor_Latch_Low_Register(void)
{
	return Read_Register_32_Bit(UART_Divisor_Latch_Low_Register_Address);
}

/*
	���ܣ�дUART�ĳ�������ͼĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_UART_Divisor_Latch_Low_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(UART_Divisor_Latch_Low_Register_Address, Register_Value);
}

/*
	���ܣ���UART�ĳ�������߼Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_UART_Divisor_Latch_High_Register(void)
{
	return Read_Register_32_Bit(UART_Divisor_Latch_High_Register_Address);
}

/*
	���ܣ�дUART�ĳ�������߼Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_UART_Divisor_Latch_High_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(UART_Divisor_Latch_High_Register_Address, Register_Value);
}

/*
	���ܣ���UART���ж�ʹ�ܼĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_UART_Interrupt_Enable_Register(void)
{
	return Read_Register_32_Bit(UART_Interrupt_Enable_Register_Address);
}

/*
	���ܣ�дUART���ж�ʹ�ܼĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_UART_Interrupt_Enable_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(UART_Interrupt_Enable_Register_Address, Register_Value);
}

/*
	���ܣ���UART���жϱ�ʶ�Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_UART_Interrupt_Identification_Register(void)
{
	return Read_Register_32_Bit(UART_Interrupt_Identification_Register_Address);
}

/*
	���ܣ�дUART��FIFO���ƼĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_UART_FIFO_Control_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(UART_FIFO_Control_Register_Address, Register_Value);
}

/*
	���ܣ���UART����·���ƼĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_UART_Line_Control_Register(void)
{
	return Read_Register_32_Bit(UART_Line_Control_Register_Address);
}

/*
	���ܣ�дUART����·���ƼĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_UART_Line_Control_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(UART_Line_Control_Register_Address, Register_Value);
}

/*
	���ܣ���UART�ĵ��ƽ�������ƼĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_UART_Modem_Control_Register(void)
{
	return Read_Register_32_Bit(UART_Modem_Control_Register_Address);
}

/*
	���ܣ�дUART�ĵ��ƽ�������ƼĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_UART_Modem_Control_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(UART_Modem_Control_Register_Address, Register_Value);
}

/*
	���ܣ���UART����·״̬�Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_UART_Line_Status_Register(void)
{
	return Read_Register_32_Bit(UART_Line_Status_Register_Address);
}

/*
	���ܣ���UART�ĵ��ƽ����״̬�Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_UART_Modem_Status_Register(void)
{
	return Read_Register_32_Bit(UART_Modem_Status_Register_Address);
}

/*
	���ܣ���UART�ı��Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_UART_Scratch_Pad_Register(void)
{
	return Read_Register_32_Bit(UART_Scratch_Pad_Register_Address);
}

/*
	���ܣ�дUART�ı��Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_UART_Scratch_Pad_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(UART_Scratch_Pad_Register_Address, Register_Value);
}

/*
	���ܣ���UART���Զ����ؿ��ƼĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_UART_Auto_Baud_Control_Register(void)
{
	return Read_Register_32_Bit(UART_Auto_Baud_Control_Register_Address);
}

/*
	���ܣ�дUART���Զ����ؿ��ƼĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_UART_Auto_Baud_Control_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(UART_Auto_Baud_Control_Register_Address, Register_Value);
}

/*
	���ܣ���UART��С����Ƶ�Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_UART_Fractional_Divider_Register(void)
{
	return Read_Register_32_Bit(UART_Fractional_Divider_Register_Address);
}

/*
	���ܣ�дUART��С����Ƶ�Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_UART_Fractional_Divider_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(UART_Fractional_Divider_Register_Address, Register_Value);
}

/*
	���ܣ���UART�ķ���ʹ�ܼĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_UART_Transmit_Enable_Register(void)
{
	return Read_Register_32_Bit(UART_Transmit_Enable_Register_Address);
}

/*
	���ܣ�дUART�ķ���ʹ�ܼĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_UART_Transmit_Enable_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(UART_Transmit_Enable_Register_Address, Register_Value);
}

/*
	���ܣ���UART��RS485���ƼĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_UART_RS485_Control_Register(void)
{
	return Read_Register_32_Bit(UART_RS485_Control_Register_Address);
}

/*
	���ܣ�дUART��RS485���ƼĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_UART_RS485_Control_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(UART_RS485_Control_Register_Address, Register_Value);
}

/*
	���ܣ���UART��RS485��ַƥ��Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_UART_RS485_Address_Match_Register(void)
{
	return Read_Register_32_Bit(UART_RS485_Address_Match_Register_Address);
}

/*
	���ܣ�дUART��RS485��ַƥ��Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_UART_RS485_Address_Match_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(UART_RS485_Address_Match_Register_Address, Register_Value);
}

/*
	���ܣ���UART��RS485��������ӳټĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_UART_RS485_Direction_Control_Delay_Register(void)
{
	return Read_Register_32_Bit(UART_RS485_Direction_Control_Delay_Register_Address);
}

/*
	���ܣ�дUART��RS485��������ӳټĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_UART_RS485_Direction_Control_Delay_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(UART_RS485_Direction_Control_Delay_Register_Address, Register_Value);
}
