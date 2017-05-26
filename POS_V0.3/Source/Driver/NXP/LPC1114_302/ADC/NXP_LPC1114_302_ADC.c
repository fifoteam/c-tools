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

#include	"NXP_LPC1114_302_ADC.h"

/* ���ݶ��� */

/* ADC�ļĴ�����ַ */
const Integer_Unsigned_32_Bit	ADC_Control_Register_Address		  = 0x4001C000;
const Integer_Unsigned_32_Bit	ADC_Global_Data_Register_Address	  = 0x4001C004;
const Integer_Unsigned_32_Bit	ADC_Interrupt_Enable_Register_Address = 0x4001C00C;
const Integer_Unsigned_32_Bit	ADC_Data_Register_0_Address			  = 0x4001C010;
const Integer_Unsigned_32_Bit	ADC_Data_Register_1_Address			  = 0x4001C014;
const Integer_Unsigned_32_Bit	ADC_Data_Register_2_Address			  = 0x4001C018;
const Integer_Unsigned_32_Bit	ADC_Data_Register_3_Address			  = 0x4001C01C;
const Integer_Unsigned_32_Bit	ADC_Data_Register_4_Address			  = 0x4001C020;
const Integer_Unsigned_32_Bit	ADC_Data_Register_5_Address			  = 0x4001C024;
const Integer_Unsigned_32_Bit	ADC_Data_Register_6_Address			  = 0x4001C028;
const Integer_Unsigned_32_Bit	ADC_Data_Register_7_Address			  = 0x4001C02C;
const Integer_Unsigned_32_Bit	ADC_Status_Register_Address			  = 0x4001C030;

/* �������� */

/*
	���ܣ���ADC�Ŀ��ƼĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_ADC_Control_Register(void)
{
	return Read_Register_32_Bit(ADC_Control_Register_Address);
}

/*
	���ܣ�дADC�Ŀ��ƼĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_ADC_Control_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(ADC_Control_Register_Address, Register_Value);
}

/*
	���ܣ���ADC��ȫ�����ݼĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_ADC_Global_Data_Register(void)
{
	return Read_Register_32_Bit(ADC_Global_Data_Register_Address);
}

/*
	���ܣ�дADC��ȫ�����ݼĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_ADC_Global_Data_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(ADC_Global_Data_Register_Address, Register_Value);
}

/*
	���ܣ���ADC���ж�ʹ�ܼĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_ADC_Interrupt_Enable_Register(void)
{
	return Read_Register_32_Bit(ADC_Interrupt_Enable_Register_Address);
}

/*
	���ܣ�дADC���ж�ʹ�ܼĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_ADC_Interrupt_Enable_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(ADC_Interrupt_Enable_Register_Address, Register_Value);
}

/*
	���ܣ���ADC�����ݼĴ���0
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_ADC_Data_Register_0(void)
{
	return Read_Register_32_Bit(ADC_Data_Register_0_Address);
}

/*
	���ܣ�дADC�����ݼĴ���0
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_ADC_Data_Register_0(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(ADC_Data_Register_0_Address, Register_Value);
}

/*
	���ܣ���ADC�����ݼĴ���1
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_ADC_Data_Register_1(void)
{
	return Read_Register_32_Bit(ADC_Data_Register_1_Address);
}

/*
	���ܣ�дADC�����ݼĴ���1
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_ADC_Data_Register_1(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(ADC_Data_Register_1_Address, Register_Value);
}

/*
	���ܣ���ADC�����ݼĴ���2
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_ADC_Data_Register_2(void)
{
	return Read_Register_32_Bit(ADC_Data_Register_2_Address);
}

/*
	���ܣ�дADC�����ݼĴ���2
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_ADC_Data_Register_2(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(ADC_Data_Register_2_Address, Register_Value);
}

/*
	���ܣ���ADC�����ݼĴ���3
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_ADC_Data_Register_3(void)
{
	return Read_Register_32_Bit(ADC_Data_Register_3_Address);
}

/*
	���ܣ�дADC�����ݼĴ���3
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_ADC_Data_Register_3(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(ADC_Data_Register_3_Address, Register_Value);
}

/*
	���ܣ���ADC�����ݼĴ���4
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_ADC_Data_Register_4(void)
{
	return Read_Register_32_Bit(ADC_Data_Register_4_Address);
}

/*
	���ܣ�дADC�����ݼĴ���4
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_ADC_Data_Register_4(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(ADC_Data_Register_4_Address, Register_Value);
}

/*
	���ܣ���ADC�����ݼĴ���5
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_ADC_Data_Register_5(void)
{
	return Read_Register_32_Bit(ADC_Data_Register_5_Address);
}

/*
	���ܣ�дADC�����ݼĴ���5
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_ADC_Data_Register_5(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(ADC_Data_Register_5_Address, Register_Value);
}

/*
	���ܣ���ADC�����ݼĴ���6
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_ADC_Data_Register_6(void)
{
	return Read_Register_32_Bit(ADC_Data_Register_6_Address);
}

/*
	���ܣ�дADC�����ݼĴ���6
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_ADC_Data_Register_6(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(ADC_Data_Register_6_Address, Register_Value);
}

/*
	���ܣ���ADC�����ݼĴ���7
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_ADC_Data_Register_7(void)
{
	return Read_Register_32_Bit(ADC_Data_Register_7_Address);
}

/*
	���ܣ�дADC�����ݼĴ���7
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_ADC_Data_Register_7(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(ADC_Data_Register_7_Address, Register_Value);
}

/*
	���ܣ���ADC��״̬�Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_ADC_Status_Register(void)
{
	return Read_Register_32_Bit(ADC_Status_Register_Address);
}
