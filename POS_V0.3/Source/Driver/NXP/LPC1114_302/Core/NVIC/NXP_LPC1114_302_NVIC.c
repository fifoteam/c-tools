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

#include	"NXP_LPC1114_302_NVIC.h"

/* ���ݶ��� */

/* NVIC�ļĴ�����ַ */
const Integer_Unsigned_32_Bit	NVIC_Interrupt_Set_Enable_Register_Address	  = 0xE000E100;
const Integer_Unsigned_32_Bit	NVIC_Interrupt_Clear_Enable_Register_Address  = 0xE000E180;
const Integer_Unsigned_32_Bit	NVIC_Interrupt_Set_Pending_Register_Address	  = 0xE000E200;
const Integer_Unsigned_32_Bit	NVIC_Interrupt_Clear_Pending_Register_Address = 0xE000E280;
const Integer_Unsigned_32_Bit	NVIC_Interrupt_Priority_Register_0_Address	  = 0xE000E400;
const Integer_Unsigned_32_Bit	NVIC_Interrupt_Priority_Register_1_Address	  = 0xE000E404;
const Integer_Unsigned_32_Bit	NVIC_Interrupt_Priority_Register_2_Address	  = 0xE000E408;
const Integer_Unsigned_32_Bit	NVIC_Interrupt_Priority_Register_3_Address	  = 0xE000E40C;
const Integer_Unsigned_32_Bit	NVIC_Interrupt_Priority_Register_4_Address	  = 0xE000E410;
const Integer_Unsigned_32_Bit	NVIC_Interrupt_Priority_Register_5_Address	  = 0xE000E414;
const Integer_Unsigned_32_Bit	NVIC_Interrupt_Priority_Register_6_Address	  = 0xE000E418;
const Integer_Unsigned_32_Bit	NVIC_Interrupt_Priority_Register_7_Address	  = 0xE000E41C;

/* �������� */

/*
	���ܣ���NVIC���ж�����ʹ�ܼĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_NVIC_Interrupt_Set_Enable_Register(void)
{
	return Read_Register_32_Bit(NVIC_Interrupt_Set_Enable_Register_Address);
}

/*
	���ܣ�дNVIC���ж�����ʹ�ܼĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_NVIC_Interrupt_Set_Enable_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(NVIC_Interrupt_Set_Enable_Register_Address, Register_Value);
}

/*
	���ܣ���NVIC���ж����ʹ�ܼĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_NVIC_Interrupt_Clear_Enable_Register(void)
{
	return Read_Register_32_Bit(NVIC_Interrupt_Clear_Enable_Register_Address);
}

/*
	���ܣ�дNVIC���ж����ʹ�ܼĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_NVIC_Interrupt_Clear_Enable_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(NVIC_Interrupt_Clear_Enable_Register_Address, Register_Value);
}

/*
	���ܣ���NVIC���ж����õȴ��Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_NVIC_Interrupt_Set_Pending_Register(void)
{
	return Read_Register_32_Bit(NVIC_Interrupt_Set_Pending_Register_Address);
}

/*
	���ܣ�дNVIC���ж����õȴ��Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_NVIC_Interrupt_Set_Pending_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(NVIC_Interrupt_Set_Pending_Register_Address, Register_Value);
}

/*
	���ܣ���NVIC���ж�����ȴ��Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_NVIC_Interrupt_Clear_Pending_Register(void)
{
	return Read_Register_32_Bit(NVIC_Interrupt_Clear_Pending_Register_Address);
}

/*
	���ܣ�дNVIC���ж�����ȴ��Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_NVIC_Interrupt_Clear_Pending_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(NVIC_Interrupt_Clear_Pending_Register_Address, Register_Value);
}

/*
	���ܣ���NVIC���ж����ȼ��Ĵ���0
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_NVIC_Interrupt_Priority_Register_0(void)
{
	return Read_Register_32_Bit(NVIC_Interrupt_Priority_Register_0_Address);
}

/*
	���ܣ�дNVIC���ж����ȼ��Ĵ���0
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_NVIC_Interrupt_Priority_Register_0(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(NVIC_Interrupt_Priority_Register_0_Address, Register_Value);
}

/*
	���ܣ���NVIC���ж����ȼ��Ĵ���1
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_NVIC_Interrupt_Priority_Register_1(void)
{
	return Read_Register_32_Bit(NVIC_Interrupt_Priority_Register_1_Address);
}

/*
	���ܣ�дNVIC���ж����ȼ��Ĵ���1
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_NVIC_Interrupt_Priority_Register_1(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(NVIC_Interrupt_Priority_Register_1_Address, Register_Value);
}

/*
	���ܣ���NVIC���ж����ȼ��Ĵ���2
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_NVIC_Interrupt_Priority_Register_2(void)
{
	return Read_Register_32_Bit(NVIC_Interrupt_Priority_Register_2_Address);
}

/*
	���ܣ�дNVIC���ж����ȼ��Ĵ���2
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_NVIC_Interrupt_Priority_Register_2(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(NVIC_Interrupt_Priority_Register_2_Address, Register_Value);
}

/*
	���ܣ���NVIC���ж����ȼ��Ĵ���3
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_NVIC_Interrupt_Priority_Register_3(void)
{
	return Read_Register_32_Bit(NVIC_Interrupt_Priority_Register_3_Address);
}

/*
	���ܣ�дNVIC���ж����ȼ��Ĵ���3
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_NVIC_Interrupt_Priority_Register_3(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(NVIC_Interrupt_Priority_Register_3_Address, Register_Value);
}

/*
	���ܣ���NVIC���ж����ȼ��Ĵ���4
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_NVIC_Interrupt_Priority_Register_4(void)
{
	return Read_Register_32_Bit(NVIC_Interrupt_Priority_Register_4_Address);
}

/*
	���ܣ�дNVIC���ж����ȼ��Ĵ���4
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_NVIC_Interrupt_Priority_Register_4(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(NVIC_Interrupt_Priority_Register_4_Address, Register_Value);
}

/*
	���ܣ���NVIC���ж����ȼ��Ĵ���5
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_NVIC_Interrupt_Priority_Register_5(void)
{
	return Read_Register_32_Bit(NVIC_Interrupt_Priority_Register_5_Address);
}

/*
	���ܣ�дNVIC���ж����ȼ��Ĵ���5
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_NVIC_Interrupt_Priority_Register_5(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(NVIC_Interrupt_Priority_Register_5_Address, Register_Value);
}

/*
	���ܣ���NVIC���ж����ȼ��Ĵ���6
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_NVIC_Interrupt_Priority_Register_6(void)
{
	return Read_Register_32_Bit(NVIC_Interrupt_Priority_Register_6_Address);
}

/*
	���ܣ�дNVIC���ж����ȼ��Ĵ���6
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_NVIC_Interrupt_Priority_Register_6(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(NVIC_Interrupt_Priority_Register_6_Address, Register_Value);
}

/*
	���ܣ���NVIC���ж����ȼ��Ĵ���7
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_NVIC_Interrupt_Priority_Register_7(void)
{
	return Read_Register_32_Bit(NVIC_Interrupt_Priority_Register_7_Address);
}

/*
	���ܣ�дNVIC���ж����ȼ��Ĵ���7
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_NVIC_Interrupt_Priority_Register_7(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(NVIC_Interrupt_Priority_Register_7_Address, Register_Value);
}
