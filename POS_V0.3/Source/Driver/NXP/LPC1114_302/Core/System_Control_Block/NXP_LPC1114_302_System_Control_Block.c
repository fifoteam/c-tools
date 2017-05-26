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

#include	"NXP_LPC1114_302_System_Control_Block.h"

/* ���ݶ��� */

/* ϵͳ���ƿ�ļĴ�����ַ */
const Integer_Unsigned_32_Bit	System_Control_Block_CPU_ID_Register_Address							  = 0xE000ED00;
const Integer_Unsigned_32_Bit	System_Control_Block_Interrupt_Control_State_Register_Address			  = 0xE000ED04;
const Integer_Unsigned_32_Bit	System_Control_Block_Application_Interrupt_Reset_Control_Register_Address = 0xE000ED0C;
const Integer_Unsigned_32_Bit	System_Control_Block_System_Control_Register_Address					  = 0xE000ED10;
const Integer_Unsigned_32_Bit	System_Control_Block_Configuration_Control_Register_Address				  = 0xE000ED14;
const Integer_Unsigned_32_Bit	System_Control_Block_System_Handler_Priority_Register_2_Address			  = 0xE000ED1C;
const Integer_Unsigned_32_Bit	System_Control_Block_System_Handler_Priority_Register_3_Address			  = 0xE000ED20;

/* �������� */

/*
	���ܣ���ϵͳ���ƿ�����봦������־�Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_System_Control_Block_CPU_ID_Register(void)
{
	return Read_Register_32_Bit(System_Control_Block_CPU_ID_Register_Address);
}

/*
	���ܣ���ϵͳ���ƿ���жϿ��ƺ�״̬�Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_System_Control_Block_Interrupt_Control_State_Register(void)
{
	return Read_Register_32_Bit(System_Control_Block_Interrupt_Control_State_Register_Address);
}

/*
	���ܣ�дϵͳ���ƿ���жϿ��ƺ�״̬�Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_System_Control_Block_Interrupt_Control_State_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(System_Control_Block_Interrupt_Control_State_Register_Address, Register_Value);
}

/*
	���ܣ���ϵͳ���ƿ��Ӧ���жϺ͸�λ���ƼĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_System_Control_Block_Application_Interrupt_Reset_Control_Register(void)
{
	return Read_Register_32_Bit(System_Control_Block_Application_Interrupt_Reset_Control_Register_Address);
}

/*
	���ܣ�дϵͳ���ƿ��Ӧ���жϺ͸�λ���ƼĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_System_Control_Block_Application_Interrupt_Reset_Control_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(System_Control_Block_Application_Interrupt_Reset_Control_Register_Address, Register_Value);
}

/*
	���ܣ���ϵͳ���ƿ��ϵͳ���ƼĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_System_Control_Block_System_Control_Register(void)
{
	return Read_Register_32_Bit(System_Control_Block_System_Control_Register_Address);
}

/*
	���ܣ�дϵͳ���ƿ��ϵͳ���ƼĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_System_Control_Block_System_Control_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(System_Control_Block_System_Control_Register_Address, Register_Value);
}

/*
	���ܣ���ϵͳ���ƿ�����úͿ��ƼĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_System_Control_Block_Configuration_Control_Register(void)
{
	return Read_Register_32_Bit(System_Control_Block_Configuration_Control_Register_Address);
}

/*
	���ܣ���ϵͳ���ƿ��ϵͳ�������ȼ��Ĵ���2
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_System_Control_Block_System_Handler_Priority_Register_2(void)
{
	return Read_Register_32_Bit(System_Control_Block_System_Handler_Priority_Register_2_Address);
}

/*
	���ܣ�дϵͳ���ƿ��ϵͳ�������ȼ��Ĵ���2
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_System_Control_Block_System_Handler_Priority_Register_2(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(System_Control_Block_System_Handler_Priority_Register_2_Address, Register_Value);
}

/*
	���ܣ���ϵͳ���ƿ��ϵͳ�������ȼ��Ĵ���3
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_System_Control_Block_System_Handler_Priority_Register_3(void)
{
	return Read_Register_32_Bit(System_Control_Block_System_Handler_Priority_Register_3_Address);
}

/*
	���ܣ�дϵͳ���ƿ��ϵͳ�������ȼ��Ĵ���3
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_System_Control_Block_System_Handler_Priority_Register_3(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(System_Control_Block_System_Handler_Priority_Register_3_Address, Register_Value);
}
