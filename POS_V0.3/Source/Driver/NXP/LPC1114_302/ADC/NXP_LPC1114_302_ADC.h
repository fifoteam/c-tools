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

#ifndef	NXP_LPC1114_302_ADC_H
#define	NXP_LPC1114_302_ADC_H

#include	"Base.h"

/* �������� */

/* ADC�Ŀ��ƼĴ����ڲ� */
typedef	struct	Tag_ADC_Control_Register_Internal
{
	Integer_Unsigned_32_Bit	Select_Channel_0 : 1;
	Integer_Unsigned_32_Bit	Select_Channel_1 : 1;
	Integer_Unsigned_32_Bit	Select_Channel_2 : 1;
	Integer_Unsigned_32_Bit	Select_Channel_3 : 1;
	Integer_Unsigned_32_Bit	Select_Channel_4 : 1;
	Integer_Unsigned_32_Bit	Select_Channel_5 : 1;
	Integer_Unsigned_32_Bit	Select_Channel_6 : 1;
	Integer_Unsigned_32_Bit	Select_Channel_7 : 1;
	Integer_Unsigned_32_Bit	Clock_Divisor	 : 8;
	Integer_Unsigned_32_Bit	Burst_Mode		 : 1;
	Integer_Unsigned_32_Bit	Clock_Accuracy	 : 3;
	Integer_Unsigned_32_Bit					 : 4;
	Integer_Unsigned_32_Bit	Start_Mode		 : 3;
	Integer_Unsigned_32_Bit	Edge_Transition	 : 1;
}
	Structure_ADC_Control_Register_Internal;

/* ADC�Ŀ��ƼĴ��� */
typedef	union	Tag_ADC_Control_Register
{
	Integer_Unsigned_32_Bit					Value;
	Structure_ADC_Control_Register_Internal	Internal;
}
	Union_ADC_Control_Register;

/* ADC��ȫ�����ݼĴ����ڲ� */
typedef	struct	Tag_ADC_Global_Data_Register_Internal
{
	Integer_Unsigned_32_Bit					 : 6;
	Integer_Unsigned_32_Bit	Conversion_Value : 10;
	Integer_Unsigned_32_Bit					 : 8;
	Integer_Unsigned_32_Bit	Channel_Index	 : 3;
	Integer_Unsigned_32_Bit					 : 3;
	Integer_Unsigned_32_Bit	Overrun_Flag	 : 1;
	Integer_Unsigned_32_Bit	Done_Flag		 : 1;
}
	Structure_ADC_Global_Data_Register_Internal;

/* ADC��ȫ�����ݼĴ��� */
typedef	union	Tag_ADC_Global_Data_Register
{
	Integer_Unsigned_32_Bit						Value;
	Structure_ADC_Global_Data_Register_Internal	Internal;
}
	Union_ADC_Global_Data_Register;

/* ADC���ж�ʹ�ܼĴ����ڲ� */
typedef	struct	Tag_ADC_Interrupt_Enable_Register_Internal
{
	Integer_Unsigned_32_Bit	Channel_0_Interrupt_Enable : 1;
	Integer_Unsigned_32_Bit	Channel_1_Interrupt_Enable : 1;
	Integer_Unsigned_32_Bit	Channel_2_Interrupt_Enable : 1;
	Integer_Unsigned_32_Bit	Channel_3_Interrupt_Enable : 1;
	Integer_Unsigned_32_Bit	Channel_4_Interrupt_Enable : 1;
	Integer_Unsigned_32_Bit	Channel_5_Interrupt_Enable : 1;
	Integer_Unsigned_32_Bit	Channel_6_Interrupt_Enable : 1;
	Integer_Unsigned_32_Bit	Channel_7_Interrupt_Enable : 1;
	Integer_Unsigned_32_Bit	Global_Interrupt_Enable	   : 1;
}
	Structure_ADC_Interrupt_Enable_Register_Internal;

/* ADC���ж�ʹ�ܼĴ��� */
typedef	union	Tag_ADC_Interrupt_Enable_Register
{
	Integer_Unsigned_32_Bit								Value;
	Structure_ADC_Interrupt_Enable_Register_Internal	Internal;
}
	Union_ADC_Interrupt_Enable_Register;

/* ADC�����ݼĴ���0�ڲ� */
typedef	struct	Tag_ADC_Data_Register_0_Internal
{
	Integer_Unsigned_32_Bit					 : 6;
	Integer_Unsigned_32_Bit	Conversion_Value : 10;
	Integer_Unsigned_32_Bit					 : 14;
	Integer_Unsigned_32_Bit	Overrun_Flag	 : 1;
	Integer_Unsigned_32_Bit	Done_Flag		 : 1;
}
	Structure_ADC_Data_Register_0_Internal;

/* ADC�����ݼĴ���0 */
typedef	union	Tag_ADC_Data_Register_0
{
	Integer_Unsigned_32_Bit					Value;
	Structure_ADC_Data_Register_0_Internal	Internal;
}
	Union_ADC_Data_Register_0;

/* ADC�����ݼĴ���1�ڲ� */
typedef	struct	Tag_ADC_Data_Register_1_Internal
{
	Integer_Unsigned_32_Bit					 : 6;
	Integer_Unsigned_32_Bit	Conversion_Value : 10;
	Integer_Unsigned_32_Bit					 : 14;
	Integer_Unsigned_32_Bit	Overrun_Flag	 : 1;
	Integer_Unsigned_32_Bit	Done_Flag		 : 1;
}
	Structure_ADC_Data_Register_1_Internal;

/* ADC�����ݼĴ���1 */
typedef	union	Tag_ADC_Data_Register_1
{
	Integer_Unsigned_32_Bit					Value;
	Structure_ADC_Data_Register_1_Internal	Internal;
}
	Union_ADC_Data_Register_1;

/* ADC�����ݼĴ���2�ڲ� */
typedef	struct	Tag_ADC_Data_Register_2_Internal
{
	Integer_Unsigned_32_Bit					 : 6;
	Integer_Unsigned_32_Bit	Conversion_Value : 10;
	Integer_Unsigned_32_Bit					 : 14;
	Integer_Unsigned_32_Bit	Overrun_Flag	 : 1;
	Integer_Unsigned_32_Bit	Done_Flag		 : 1;
}
	Structure_ADC_Data_Register_2_Internal;

/* ADC�����ݼĴ���2 */
typedef	union	Tag_ADC_Data_Register_2
{
	Integer_Unsigned_32_Bit					Value;
	Structure_ADC_Data_Register_2_Internal	Internal;
}
	Union_ADC_Data_Register_2;

/* ADC�����ݼĴ���3�ڲ� */
typedef	struct	Tag_ADC_Data_Register_3_Internal
{
	Integer_Unsigned_32_Bit					 : 6;
	Integer_Unsigned_32_Bit	Conversion_Value : 10;
	Integer_Unsigned_32_Bit					 : 14;
	Integer_Unsigned_32_Bit	Overrun_Flag	 : 1;
	Integer_Unsigned_32_Bit	Done_Flag		 : 1;
}
	Structure_ADC_Data_Register_3_Internal;

/* ADC�����ݼĴ���3 */
typedef	union	Tag_ADC_Data_Register_3
{
	Integer_Unsigned_32_Bit					Value;
	Structure_ADC_Data_Register_3_Internal	Internal;
}
	Union_ADC_Data_Register_3;

/* ADC�����ݼĴ���4�ڲ� */
typedef	struct	Tag_ADC_Data_Register_4_Internal
{
	Integer_Unsigned_32_Bit					 : 6;
	Integer_Unsigned_32_Bit	Conversion_Value : 10;
	Integer_Unsigned_32_Bit					 : 14;
	Integer_Unsigned_32_Bit	Overrun_Flag	 : 1;
	Integer_Unsigned_32_Bit	Done_Flag		 : 1;
}
	Structure_ADC_Data_Register_4_Internal;

/* ADC�����ݼĴ���4 */
typedef	union	Tag_ADC_Data_Register_4
{
	Integer_Unsigned_32_Bit					Value;
	Structure_ADC_Data_Register_4_Internal	Internal;
}
	Union_ADC_Data_Register_4;

/* ADC�����ݼĴ���5�ڲ� */
typedef	struct	Tag_ADC_Data_Register_5_Internal
{
	Integer_Unsigned_32_Bit					 : 6;
	Integer_Unsigned_32_Bit	Conversion_Value : 10;
	Integer_Unsigned_32_Bit					 : 14;
	Integer_Unsigned_32_Bit	Overrun_Flag	 : 1;
	Integer_Unsigned_32_Bit	Done_Flag		 : 1;
}
	Structure_ADC_Data_Register_5_Internal;

/* ADC�����ݼĴ���5 */
typedef	union	Tag_ADC_Data_Register_5
{
	Integer_Unsigned_32_Bit					Value;
	Structure_ADC_Data_Register_5_Internal	Internal;
}
	Union_ADC_Data_Register_5;

/* ADC�����ݼĴ���6�ڲ� */
typedef	struct	Tag_ADC_Data_Register_6_Internal
{
	Integer_Unsigned_32_Bit					 : 6;
	Integer_Unsigned_32_Bit	Conversion_Value : 10;
	Integer_Unsigned_32_Bit					 : 14;
	Integer_Unsigned_32_Bit	Overrun_Flag	 : 1;
	Integer_Unsigned_32_Bit	Done_Flag		 : 1;
}
	Structure_ADC_Data_Register_6_Internal;

/* ADC�����ݼĴ���6 */
typedef	union	Tag_ADC_Data_Register_6
{
	Integer_Unsigned_32_Bit					Value;
	Structure_ADC_Data_Register_6_Internal	Internal;
}
	Union_ADC_Data_Register_6;

/* ADC�����ݼĴ���7�ڲ� */
typedef	struct	Tag_ADC_Data_Register_7_Internal
{
	Integer_Unsigned_32_Bit					 : 6;
	Integer_Unsigned_32_Bit	Conversion_Value : 10;
	Integer_Unsigned_32_Bit					 : 14;
	Integer_Unsigned_32_Bit	Overrun_Flag	 : 1;
	Integer_Unsigned_32_Bit	Done_Flag		 : 1;
}
	Structure_ADC_Data_Register_7_Internal;

/* ADC�����ݼĴ���7 */
typedef	union	Tag_ADC_Data_Register_7
{
	Integer_Unsigned_32_Bit					Value;
	Structure_ADC_Data_Register_7_Internal	Internal;
}
	Union_ADC_Data_Register_7;

/* ADC��״̬�Ĵ����ڲ� */
typedef	struct	Tag_ADC_Status_Register_Internal
{
	Integer_Unsigned_32_Bit	Channel_0_Done_Flag	   : 1;
	Integer_Unsigned_32_Bit	Channel_1_Done_Flag	   : 1;
	Integer_Unsigned_32_Bit	Channel_2_Done_Flag	   : 1;
	Integer_Unsigned_32_Bit	Channel_3_Done_Flag	   : 1;
	Integer_Unsigned_32_Bit	Channel_4_Done_Flag	   : 1;
	Integer_Unsigned_32_Bit	Channel_5_Done_Flag	   : 1;
	Integer_Unsigned_32_Bit	Channel_6_Done_Flag	   : 1;
	Integer_Unsigned_32_Bit	Channel_7_Done_Flag	   : 1;
	Integer_Unsigned_32_Bit	Channel_0_Overrun_Flag : 1;
	Integer_Unsigned_32_Bit	Channel_1_Overrun_Flag : 1;
	Integer_Unsigned_32_Bit	Channel_2_Overrun_Flag : 1;
	Integer_Unsigned_32_Bit	Channel_3_Overrun_Flag : 1;
	Integer_Unsigned_32_Bit	Channel_4_Overrun_Flag : 1;
	Integer_Unsigned_32_Bit	Channel_5_Overrun_Flag : 1;
	Integer_Unsigned_32_Bit	Channel_6_Overrun_Flag : 1;
	Integer_Unsigned_32_Bit	Channel_7_Overrun_Flag : 1;
	Integer_Unsigned_32_Bit	Interrupt_Flag		   : 1;
}
	Structure_ADC_Status_Register_Internal;

/* ADC��״̬�Ĵ��� */
typedef	union	Tag_ADC_Status_Register
{
	Integer_Unsigned_32_Bit					Value;
	Structure_ADC_Status_Register_Internal	Internal;
}
	Union_ADC_Status_Register;

/* �������� */

/*
	���ܣ���ADC�Ŀ��ƼĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_ADC_Control_Register(void);

/*
	���ܣ�дADC�Ŀ��ƼĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_ADC_Control_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���ADC��ȫ�����ݼĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_ADC_Global_Data_Register(void);

/*
	���ܣ�дADC��ȫ�����ݼĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_ADC_Global_Data_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���ADC���ж�ʹ�ܼĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_ADC_Interrupt_Enable_Register(void);

/*
	���ܣ�дADC���ж�ʹ�ܼĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_ADC_Interrupt_Enable_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���ADC�����ݼĴ���0
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_ADC_Data_Register_0(void);

/*
	���ܣ�дADC�����ݼĴ���0
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_ADC_Data_Register_0(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���ADC�����ݼĴ���1
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_ADC_Data_Register_1(void);

/*
	���ܣ�дADC�����ݼĴ���1
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_ADC_Data_Register_1(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���ADC�����ݼĴ���2
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_ADC_Data_Register_2(void);

/*
	���ܣ�дADC�����ݼĴ���2
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_ADC_Data_Register_2(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���ADC�����ݼĴ���3
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_ADC_Data_Register_3(void);

/*
	���ܣ�дADC�����ݼĴ���3
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_ADC_Data_Register_3(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���ADC�����ݼĴ���4
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_ADC_Data_Register_4(void);

/*
	���ܣ�дADC�����ݼĴ���4
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_ADC_Data_Register_4(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���ADC�����ݼĴ���5
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_ADC_Data_Register_5(void);

/*
	���ܣ�дADC�����ݼĴ���5
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_ADC_Data_Register_5(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���ADC�����ݼĴ���6
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_ADC_Data_Register_6(void);

/*
	���ܣ�дADC�����ݼĴ���6
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_ADC_Data_Register_6(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���ADC�����ݼĴ���7
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_ADC_Data_Register_7(void);

/*
	���ܣ�дADC�����ݼĴ���7
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_ADC_Data_Register_7(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���ADC��״̬�Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_ADC_Status_Register(void);

#endif
