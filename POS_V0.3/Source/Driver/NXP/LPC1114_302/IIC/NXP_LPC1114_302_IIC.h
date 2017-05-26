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

#ifndef	NXP_LPC1114_302_IIC_H
#define	NXP_LPC1114_302_IIC_H

#include	"Base.h"

/* �������� */

/* IIC�Ŀ������üĴ����ڲ� */
typedef	struct	Tag_IIC_Control_Set_Register_Internal
{
	Integer_Unsigned_32_Bit						   : 2;
	Integer_Unsigned_32_Bit	Assert_Acknowledge_Set : 1;
	Integer_Unsigned_32_Bit	Serial_Interrupt_Set   : 1;
	Integer_Unsigned_32_Bit	Stop_Condition_Set	   : 1;
	Integer_Unsigned_32_Bit	Start_Condition_Set	   : 1;
	Integer_Unsigned_32_Bit	Interface_Enable_Set   : 1;
}
	Structure_IIC_Control_Set_Register_Internal;

/* IIC�Ŀ������üĴ��� */
typedef	union	Tag_IIC_Control_Set_Register
{
	Integer_Unsigned_32_Bit						Value;
	Structure_IIC_Control_Set_Register_Internal	Internal;
}
	Union_IIC_Control_Set_Register;

/* IIC��״̬�Ĵ����ڲ� */
typedef	struct	Tag_IIC_Status_Register_Internal
{
	Integer_Unsigned_32_Bit	Status_Code	: 8;
}
	Structure_IIC_Status_Register_Internal;

/* IIC��״̬�Ĵ��� */
typedef	union	Tag_IIC_Status_Register
{
	Integer_Unsigned_32_Bit					Value;
	Structure_IIC_Status_Register_Internal	Internal;
}
	Union_IIC_Status_Register;

/* IIC�����ݼĴ����ڲ� */
typedef	struct	Tag_IIC_Data_Register_Internal
{
	Integer_Unsigned_32_Bit	Data_Code : 8;
}
	Structure_IIC_Data_Register_Internal;

/* IIC�����ݼĴ��� */
typedef	union	Tag_IIC_Data_Register
{
	Integer_Unsigned_32_Bit					Value;
	Structure_IIC_Data_Register_Internal	Internal;
}
	Union_IIC_Data_Register;

/* IIC�Ĵӵ�ַ�Ĵ���0�ڲ� */
typedef	struct	Tag_IIC_Slave_Address_Register_0_Internal
{
	Integer_Unsigned_32_Bit	General_Call_Enable	: 1;
	Integer_Unsigned_32_Bit	Device_Address		: 7;
}
	Structure_IIC_Slave_Address_Register_0_Internal;

/* IIC�Ĵӵ�ַ�Ĵ���0 */
typedef	union	Tag_IIC_Slave_Address_Register_0
{
	Integer_Unsigned_32_Bit							Value;
	Structure_IIC_Slave_Address_Register_0_Internal	Internal;
}
	Union_IIC_Slave_Address_Register_0;

/* IIC�Ĵ���ʱ�Ӹ�ռ�ձȼĴ����ڲ� */
typedef	struct	Tag_IIC_Serial_Clock_High_Duty_Cycle_Register_Internal
{
	Integer_Unsigned_32_Bit	Counte_Value : 16;
}
	Structure_IIC_Serial_Clock_High_Duty_Cycle_Register_Internal;

/* IIC�Ĵ���ʱ�Ӹ�ռ�ձȼĴ��� */
typedef	union	Tag_IIC_Serial_Clock_High_Duty_Cycle_Register
{
	Integer_Unsigned_32_Bit											Value;
	Structure_IIC_Serial_Clock_High_Duty_Cycle_Register_Internal	Internal;
}
	Union_IIC_Serial_Clock_High_Duty_Cycle_Register;

/* IIC�Ĵ���ʱ�ӵ�ռ�ձȼĴ����ڲ� */
typedef	struct	Tag_IIC_Serial_Clock_Low_Duty_Cycle_Register_Internal
{
	Integer_Unsigned_32_Bit	Counte_Value : 16;
}
	Structure_IIC_Serial_Clock_Low_Duty_Cycle_Register_Internal;

/* IIC�Ĵ���ʱ�ӵ�ռ�ձȼĴ��� */
typedef	union	Tag_IIC_Serial_Clock_Low_Duty_Cycle_Register
{
	Integer_Unsigned_32_Bit											Value;
	Structure_IIC_Serial_Clock_Low_Duty_Cycle_Register_Internal	Internal;
}
	Union_IIC_Serial_Clock_Low_Duty_Cycle_Register;

/* IIC�Ŀ�������Ĵ����ڲ� */
typedef	struct	Tag_IIC_Control_Clear_Register_Internal
{
	Integer_Unsigned_32_Bit							 : 2;
	Integer_Unsigned_32_Bit	Assert_Acknowledge_Clear : 1;
	Integer_Unsigned_32_Bit	Serial_Interrupt_Clear	 : 1;
	Integer_Unsigned_32_Bit							 : 1;
	Integer_Unsigned_32_Bit	Start_Condition_Clear	 : 1;
	Integer_Unsigned_32_Bit	Interface_Enable_Clear	 : 1;
}
	Structure_IIC_Control_Clear_Register_Internal;

/* IIC�Ŀ�������Ĵ��� */
typedef	union	Tag_IIC_Control_Clear_Register
{
	Integer_Unsigned_32_Bit							Value;
	Structure_IIC_Control_Clear_Register_Internal	Internal;
}
	Union_IIC_Control_Clear_Register;

/* IIC�ļ��ģʽ���ƼĴ����ڲ� */
typedef	struct	Tag_IIC_Monitor_Mode_Control_Register_Internal
{
	Integer_Unsigned_32_Bit	Monitor_Mode_Enable		   : 1;
	Integer_Unsigned_32_Bit	Serial_Clock_Output_Enable : 1;
	Integer_Unsigned_32_Bit	Match_All_Address		   : 1;
}
	Structure_IIC_Monitor_Mode_Control_Register_Internal;

/* IIC�ļ��ģʽ���ƼĴ��� */
typedef	union	Tag_IIC_Monitor_Mode_Control_Register
{
	Integer_Unsigned_32_Bit									Value;
	Structure_IIC_Monitor_Mode_Control_Register_Internal	Internal;
}
	Union_IIC_Monitor_Mode_Control_Register;

/* IIC�Ĵӵ�ַ�Ĵ���1�ڲ� */
typedef	struct	Tag_IIC_Slave_Address_Register_1_Internal
{
	Integer_Unsigned_32_Bit	General_Call_Enable	: 1;
	Integer_Unsigned_32_Bit	Device_Address		: 7;
}
	Structure_IIC_Slave_Address_Register_1_Internal;

/* IIC�Ĵӵ�ַ�Ĵ���1 */
typedef	union	Tag_IIC_Slave_Address_Register_1
{
	Integer_Unsigned_32_Bit							Value;
	Structure_IIC_Slave_Address_Register_1_Internal	Internal;
}
	Union_IIC_Slave_Address_Register_1;

/* IIC�Ĵӵ�ַ�Ĵ���2�ڲ� */
typedef	struct	Tag_IIC_Slave_Address_Register_2_Internal
{
	Integer_Unsigned_32_Bit	General_Call_Enable	: 1;
	Integer_Unsigned_32_Bit	Device_Address		: 7;
}
	Structure_IIC_Slave_Address_Register_2_Internal;

/* IIC�Ĵӵ�ַ�Ĵ���2 */
typedef	union	Tag_IIC_Slave_Address_Register_2
{
	Integer_Unsigned_32_Bit							Value;
	Structure_IIC_Slave_Address_Register_2_Internal	Internal;
}
	Union_IIC_Slave_Address_Register_2;

/* IIC�Ĵӵ�ַ�Ĵ���3�ڲ� */
typedef	struct	Tag_IIC_Slave_Address_Register_3_Internal
{
	Integer_Unsigned_32_Bit	General_Call_Enable	: 1;
	Integer_Unsigned_32_Bit	Device_Address		: 7;
}
	Structure_IIC_Slave_Address_Register_3_Internal;

/* IIC�Ĵӵ�ַ�Ĵ���3 */
typedef	union	Tag_IIC_Slave_Address_Register_3
{
	Integer_Unsigned_32_Bit							Value;
	Structure_IIC_Slave_Address_Register_3_Internal	Internal;
}
	Union_IIC_Slave_Address_Register_3;

/* IIC�����ݻ���Ĵ����ڲ� */
typedef	struct	Tag_IIC_Data_Buffer_Register_Internal
{
	Integer_Unsigned_32_Bit	Data_Code : 8;
}
	Structure_IIC_Data_Buffer_Register_Internal;

/* IIC�����ݻ���Ĵ��� */
typedef	union	Tag_IIC_Data_Buffer_Register
{
	Integer_Unsigned_32_Bit						Value;
	Structure_IIC_Data_Buffer_Register_Internal	Internal;
}
	Union_IIC_Data_Buffer_Register;

/* IIC�����μĴ���0�ڲ� */
typedef	struct	Tag_IIC_Mask_Register_0_Internal
{
	Integer_Unsigned_32_Bit			  : 1;
	Integer_Unsigned_32_Bit	Mask_Code : 7;
}
	Structure_IIC_Mask_Register_0_Internal;

/* IIC�����μĴ���0 */
typedef	union	Tag_IIC_Mask_Register_0
{
	Integer_Unsigned_32_Bit					Value;
	Structure_IIC_Mask_Register_0_Internal	Internal;
}
	Union_IIC_Mask_Register_0;

/* IIC�����μĴ���1�ڲ� */
typedef	struct	Tag_IIC_Mask_Register_1_Internal
{
	Integer_Unsigned_32_Bit			  : 1;
	Integer_Unsigned_32_Bit	Mask_Code : 7;
}
	Structure_IIC_Mask_Register_1_Internal;

/* IIC�����μĴ���1 */
typedef	union	Tag_IIC_Mask_Register_1
{
	Integer_Unsigned_32_Bit					Value;
	Structure_IIC_Mask_Register_1_Internal	Internal;
}
	Union_IIC_Mask_Register_1;

/* IIC�����μĴ���2�ڲ� */
typedef	struct	Tag_IIC_Mask_Register_2_Internal
{
	Integer_Unsigned_32_Bit			  : 1;
	Integer_Unsigned_32_Bit	Mask_Code : 7;
}
	Structure_IIC_Mask_Register_2_Internal;

/* IIC�����μĴ���2 */
typedef	union	Tag_IIC_Mask_Register_2
{
	Integer_Unsigned_32_Bit					Value;
	Structure_IIC_Mask_Register_2_Internal	Internal;
}
	Union_IIC_Mask_Register_2;

/* IIC�����μĴ���3�ڲ� */
typedef	struct	Tag_IIC_Mask_Register_3_Internal
{
	Integer_Unsigned_32_Bit			  : 1;
	Integer_Unsigned_32_Bit	Mask_Code : 7;
}
	Structure_IIC_Mask_Register_3_Internal;

/* IIC�����μĴ���3 */
typedef	union	Tag_IIC_Mask_Register_3
{
	Integer_Unsigned_32_Bit					Value;
	Structure_IIC_Mask_Register_3_Internal	Internal;
}
	Union_IIC_Mask_Register_3;

/* �������� */

/*
	���ܣ���IIC�Ŀ������üĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_IIC_Control_Set_Register(void);

/*
	���ܣ�дIIC�Ŀ������üĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_IIC_Control_Set_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���IIC��״̬�Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_IIC_Status_Register(void);

/*
	���ܣ���IIC�����ݼĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_IIC_Data_Register(void);

/*
	���ܣ�дIIC�����ݼĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_IIC_Data_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���IIC�Ĵӵ�ַ�Ĵ���0
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_IIC_Slave_Address_Register_0(void);

/*
	���ܣ�дIIC�Ĵӵ�ַ�Ĵ���0
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_IIC_Slave_Address_Register_0(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���IIC�Ĵ���ʱ�Ӹ�ռ�ձȼĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_IIC_Serial_Clock_High_Duty_Cycle_Register(void);

/*
	���ܣ�дIIC�Ĵ���ʱ�Ӹ�ռ�ձȼĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_IIC_Serial_Clock_High_Duty_Cycle_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���IIC�Ĵ���ʱ�ӵ�ռ�ձȼĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_IIC_Serial_Clock_Low_Duty_Cycle_Register(void);

/*
	���ܣ�дIIC�Ĵ���ʱ�ӵ�ռ�ձȼĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_IIC_Serial_Clock_Low_Duty_Cycle_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ�дIIC�Ŀ�������Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_IIC_Control_Clear_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���IIC�ļ��ģʽ���ƼĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_IIC_Monitor_Mode_Control_Register(void);

/*
	���ܣ�дIIC�ļ��ģʽ���ƼĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_IIC_Monitor_Mode_Control_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���IIC�Ĵӵ�ַ�Ĵ���1
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_IIC_Slave_Address_Register_1(void);

/*
	���ܣ�дIIC�Ĵӵ�ַ�Ĵ���1
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_IIC_Slave_Address_Register_1(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���IIC�Ĵӵ�ַ�Ĵ���2
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_IIC_Slave_Address_Register_2(void);

/*
	���ܣ�дIIC�Ĵӵ�ַ�Ĵ���2
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_IIC_Slave_Address_Register_2(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���IIC�Ĵӵ�ַ�Ĵ���3
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_IIC_Slave_Address_Register_3(void);

/*
	���ܣ�дIIC�Ĵӵ�ַ�Ĵ���3
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_IIC_Slave_Address_Register_3(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���IIC�����ݻ���Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_IIC_Data_Buffer_Register(void);

/*
	���ܣ���IIC�����μĴ���0
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_IIC_Mask_Register_0(void);

/*
	���ܣ�дIIC�����μĴ���0
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_IIC_Mask_Register_0(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���IIC�����μĴ���1
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_IIC_Mask_Register_1(void);

/*
	���ܣ�дIIC�����μĴ���1
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_IIC_Mask_Register_1(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���IIC�����μĴ���2
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_IIC_Mask_Register_2(void);

/*
	���ܣ�дIIC�����μĴ���2
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_IIC_Mask_Register_2(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���IIC�����μĴ���3
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_IIC_Mask_Register_3(void);

/*
	���ܣ�дIIC�����μĴ���3
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_IIC_Mask_Register_3(Integer_Unsigned_32_Bit Register_Value);

#endif
