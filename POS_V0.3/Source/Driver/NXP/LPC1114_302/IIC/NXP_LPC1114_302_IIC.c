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

#include	"NXP_LPC1114_302_IIC.h"

/* ���ݶ��� */

/* IIC�ļĴ�����ַ */
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

/* �������� */

/*
	���ܣ���IIC�Ŀ������üĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_IIC_Control_Set_Register(void)
{
	return Read_Register_32_Bit(IIC_Control_Set_Register_Address);
}

/*
	���ܣ�дIIC�Ŀ������üĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_IIC_Control_Set_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IIC_Control_Set_Register_Address, Register_Value);
}

/*
	���ܣ���IIC��״̬�Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_IIC_Status_Register(void)
{
	return Read_Register_32_Bit(IIC_Status_Register_Address);
}

/*
	���ܣ���IIC�����ݼĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_IIC_Data_Register(void)
{
	return Read_Register_32_Bit(IIC_Data_Register_Address);
}

/*
	���ܣ�дIIC�����ݼĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_IIC_Data_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IIC_Data_Register_Address, Register_Value);
}

/*
	���ܣ���IIC�Ĵӵ�ַ�Ĵ���0
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_IIC_Slave_Address_Register_0(void)
{
	return Read_Register_32_Bit(IIC_Slave_Address_Register_0_Address);
}

/*
	���ܣ�дIIC�Ĵӵ�ַ�Ĵ���0
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_IIC_Slave_Address_Register_0(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IIC_Slave_Address_Register_0_Address, Register_Value);
}

/*
	���ܣ���IIC�Ĵ���ʱ�Ӹ�ռ�ձȼĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_IIC_Serial_Clock_High_Duty_Cycle_Register(void)
{
	return Read_Register_32_Bit(IIC_Serial_Clock_High_Duty_Cycle_Register_Address);
}

/*
	���ܣ�дIIC�Ĵ���ʱ�Ӹ�ռ�ձȼĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_IIC_Serial_Clock_High_Duty_Cycle_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IIC_Serial_Clock_High_Duty_Cycle_Register_Address, Register_Value);
}

/*
	���ܣ���IIC�Ĵ���ʱ�ӵ�ռ�ձȼĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_IIC_Serial_Clock_Low_Duty_Cycle_Register(void)
{
	return Read_Register_32_Bit(IIC_Serial_Clock_Low_Duty_Cycle_Register_Address);
}

/*
	���ܣ�дIIC�Ĵ���ʱ�ӵ�ռ�ձȼĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_IIC_Serial_Clock_Low_Duty_Cycle_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IIC_Serial_Clock_Low_Duty_Cycle_Register_Address, Register_Value);
}

/*
	���ܣ�дIIC�Ŀ�������Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_IIC_Control_Clear_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IIC_Control_Clear_Register_Address, Register_Value);
}

/*
	���ܣ���IIC�ļ��ģʽ���ƼĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_IIC_Monitor_Mode_Control_Register(void)
{
	return Read_Register_32_Bit(IIC_Monitor_Mode_Control_Register_Address);
}

/*
	���ܣ�дIIC�ļ��ģʽ���ƼĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_IIC_Monitor_Mode_Control_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IIC_Monitor_Mode_Control_Register_Address, Register_Value);
}

/*
	���ܣ���IIC�Ĵӵ�ַ�Ĵ���1
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_IIC_Slave_Address_Register_1(void)
{
	return Read_Register_32_Bit(IIC_Slave_Address_Register_1_Address);
}

/*
	���ܣ�дIIC�Ĵӵ�ַ�Ĵ���1
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_IIC_Slave_Address_Register_1(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IIC_Slave_Address_Register_1_Address, Register_Value);
}

/*
	���ܣ���IIC�Ĵӵ�ַ�Ĵ���2
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_IIC_Slave_Address_Register_2(void)
{
	return Read_Register_32_Bit(IIC_Slave_Address_Register_2_Address);
}

/*
	���ܣ�дIIC�Ĵӵ�ַ�Ĵ���2
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_IIC_Slave_Address_Register_2(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IIC_Slave_Address_Register_2_Address, Register_Value);
}

/*
	���ܣ���IIC�Ĵӵ�ַ�Ĵ���3
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_IIC_Slave_Address_Register_3(void)
{
	return Read_Register_32_Bit(IIC_Slave_Address_Register_3_Address);
}

/*
	���ܣ�дIIC�Ĵӵ�ַ�Ĵ���3
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_IIC_Slave_Address_Register_3(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IIC_Slave_Address_Register_3_Address, Register_Value);
}

/*
	���ܣ���IIC�����ݻ���Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_IIC_Data_Buffer_Register(void)
{
	return Read_Register_32_Bit(IIC_Data_Buffer_Register_Address);
}

/*
	���ܣ���IIC�����μĴ���0
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_IIC_Mask_Register_0(void)
{
	return Read_Register_32_Bit(IIC_Mask_Register_0_Address);
}

/*
	���ܣ�дIIC�����μĴ���0
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_IIC_Mask_Register_0(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IIC_Mask_Register_0_Address, Register_Value);
}

/*
	���ܣ���IIC�����μĴ���1
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_IIC_Mask_Register_1(void)
{
	return Read_Register_32_Bit(IIC_Mask_Register_1_Address);
}

/*
	���ܣ�дIIC�����μĴ���1
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_IIC_Mask_Register_1(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IIC_Mask_Register_1_Address, Register_Value);
}

/*
	���ܣ���IIC�����μĴ���2
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_IIC_Mask_Register_2(void)
{
	return Read_Register_32_Bit(IIC_Mask_Register_2_Address);
}

/*
	���ܣ�дIIC�����μĴ���2
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_IIC_Mask_Register_2(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IIC_Mask_Register_2_Address, Register_Value);
}

/*
	���ܣ���IIC�����μĴ���3
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_IIC_Mask_Register_3(void)
{
	return Read_Register_32_Bit(IIC_Mask_Register_3_Address);
}

/*
	���ܣ�дIIC�����μĴ���3
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_IIC_Mask_Register_3(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IIC_Mask_Register_3_Address, Register_Value);
}
