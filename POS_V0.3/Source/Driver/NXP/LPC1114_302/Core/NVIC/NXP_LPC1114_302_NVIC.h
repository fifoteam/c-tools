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

#ifndef	NXP_LPC1114_302_NVIC_H
#define	NXP_LPC1114_302_NVIC_H

#include	"Base.h"

/* �������� */

/* NVIC���ж�����ʹ�ܼĴ����ڲ� */
typedef	struct	Tag_NVIC_Interrupt_Set_Enable_Register_Internal
{
	Integer_Unsigned_32_Bit	GPIO_0_0_Interrupt_Set_Enable				: 1;
	Integer_Unsigned_32_Bit	GPIO_0_1_Interrupt_Set_Enable				: 1;
	Integer_Unsigned_32_Bit	GPIO_0_2_Interrupt_Set_Enable				: 1;
	Integer_Unsigned_32_Bit	GPIO_0_3_Interrupt_Set_Enable				: 1;
	Integer_Unsigned_32_Bit	GPIO_0_4_Interrupt_Set_Enable				: 1;
	Integer_Unsigned_32_Bit	GPIO_0_5_Interrupt_Set_Enable				: 1;
	Integer_Unsigned_32_Bit	GPIO_0_6_Interrupt_Set_Enable				: 1;
	Integer_Unsigned_32_Bit	GPIO_0_7_Interrupt_Set_Enable				: 1;
	Integer_Unsigned_32_Bit	GPIO_0_8_Interrupt_Set_Enable				: 1;
	Integer_Unsigned_32_Bit	GPIO_0_9_Interrupt_Set_Enable				: 1;
	Integer_Unsigned_32_Bit	GPIO_0_10_Interrupt_Set_Enable				: 1;
	Integer_Unsigned_32_Bit	GPIO_0_11_Interrupt_Set_Enable				: 1;
	Integer_Unsigned_32_Bit	GPIO_1_0_Interrupt_Set_Enable				: 1;
	Integer_Unsigned_32_Bit												: 1;
	Integer_Unsigned_32_Bit	SSP_1_Interrupt_Set_Enable					: 1;
	Integer_Unsigned_32_Bit	IIC_Interrupt_Set_Enable					: 1;
	Integer_Unsigned_32_Bit	Counter_Timer_16_Bit_0_Interrupt_Set_Enable	: 1;
	Integer_Unsigned_32_Bit	Counter_Timer_16_Bit_1_Interrupt_Set_Enable	: 1;
	Integer_Unsigned_32_Bit	Counter_Timer_32_Bit_0_Interrupt_Set_Enable	: 1;
	Integer_Unsigned_32_Bit	Counter_Timer_32_Bit_1_Interrupt_Set_Enable	: 1;
	Integer_Unsigned_32_Bit	SSP_0_Interrupt_Set_Enable					: 1;
	Integer_Unsigned_32_Bit	UART_Interrupt_Set_Enable					: 1;
	Integer_Unsigned_32_Bit												: 2;
	Integer_Unsigned_32_Bit	ADC_Conversion_Interrupt_Set_Enable			: 1;
	Integer_Unsigned_32_Bit	Watchdog_Timer_Interrupt_Set_Enable			: 1;
	Integer_Unsigned_32_Bit	Brown_Out_Detect_Interrupt_Set_Enable		: 1;
	Integer_Unsigned_32_Bit												: 1;
	Integer_Unsigned_32_Bit	GPIO_3_Interrupt_Set_Enable					: 1;
	Integer_Unsigned_32_Bit	GPIO_2_Interrupt_Set_Enable					: 1;
	Integer_Unsigned_32_Bit	GPIO_1_Interrupt_Set_Enable					: 1;
	Integer_Unsigned_32_Bit	GPIO_0_Interrupt_Set_Enable					: 1;
}
	Structure_NVIC_Interrupt_Set_Enable_Register_Internal;

/* NVIC���ж�����ʹ�ܼĴ��� */
typedef	union	Tag_NVIC_Interrupt_Set_Enable_Register
{
	Integer_Unsigned_32_Bit									Value;
	Structure_NVIC_Interrupt_Set_Enable_Register_Internal	Internal;
}
	Union_NVIC_Interrupt_Set_Enable_Register;

/* NVIC���ж����ʹ�ܼĴ����ڲ� */
typedef	struct	Tag_NVIC_Interrupt_Clear_Enable_Register_Internal
{
	Integer_Unsigned_32_Bit	GPIO_0_0_Interrupt_Clear_Enable				  : 1;
	Integer_Unsigned_32_Bit	GPIO_0_1_Interrupt_Clear_Enable				  : 1;
	Integer_Unsigned_32_Bit	GPIO_0_2_Interrupt_Clear_Enable				  : 1;
	Integer_Unsigned_32_Bit	GPIO_0_3_Interrupt_Clear_Enable				  : 1;
	Integer_Unsigned_32_Bit	GPIO_0_4_Interrupt_Clear_Enable				  : 1;
	Integer_Unsigned_32_Bit	GPIO_0_5_Interrupt_Clear_Enable				  : 1;
	Integer_Unsigned_32_Bit	GPIO_0_6_Interrupt_Clear_Enable				  : 1;
	Integer_Unsigned_32_Bit	GPIO_0_7_Interrupt_Clear_Enable				  : 1;
	Integer_Unsigned_32_Bit	GPIO_0_8_Interrupt_Clear_Enable				  : 1;
	Integer_Unsigned_32_Bit	GPIO_0_9_Interrupt_Clear_Enable				  : 1;
	Integer_Unsigned_32_Bit	GPIO_0_10_Interrupt_Clear_Enable			  : 1;
	Integer_Unsigned_32_Bit	GPIO_0_11_Interrupt_Clear_Enable			  : 1;
	Integer_Unsigned_32_Bit	GPIO_1_0_Interrupt_Clear_Enable				  : 1;
	Integer_Unsigned_32_Bit												  : 1;
	Integer_Unsigned_32_Bit	SSP_1_Interrupt_Clear_Enable				  : 1;
	Integer_Unsigned_32_Bit	IIC_Interrupt_Clear_Enable					  : 1;
	Integer_Unsigned_32_Bit	Counter_Timer_16_Bit_0_Interrupt_Clear_Enable : 1;
	Integer_Unsigned_32_Bit	Counter_Timer_16_Bit_1_Interrupt_Clear_Enable : 1;
	Integer_Unsigned_32_Bit	Counter_Timer_32_Bit_0_Interrupt_Clear_Enable : 1;
	Integer_Unsigned_32_Bit	Counter_Timer_32_Bit_1_Interrupt_Clear_Enable : 1;
	Integer_Unsigned_32_Bit	SSP_0_Interrupt_Clear_Enable				  : 1;
	Integer_Unsigned_32_Bit	UART_Interrupt_Clear_Enable					  : 1;
	Integer_Unsigned_32_Bit												  : 2;
	Integer_Unsigned_32_Bit	ADC_Conversion_Interrupt_Clear_Enable		  : 1;
	Integer_Unsigned_32_Bit	Watchdog_Timer_Interrupt_Clear_Enable		  : 1;
	Integer_Unsigned_32_Bit	Brown_Out_Detect_Interrupt_Clear_Enable		  : 1;
	Integer_Unsigned_32_Bit												  : 1;
	Integer_Unsigned_32_Bit	GPIO_3_Interrupt_Clear_Enable				  : 1;
	Integer_Unsigned_32_Bit	GPIO_2_Interrupt_Clear_Enable				  : 1;
	Integer_Unsigned_32_Bit	GPIO_1_Interrupt_Clear_Enable				  : 1;
	Integer_Unsigned_32_Bit	GPIO_0_Interrupt_Clear_Enable				  : 1;
}
	Structure_NVIC_Interrupt_Clear_Enable_Register_Internal;

/* NVIC���ж����ʹ�ܼĴ��� */
typedef	union	Tag_NVIC_Interrupt_Clear_Enable_Register
{
	Integer_Unsigned_32_Bit									Value;
	Structure_NVIC_Interrupt_Clear_Enable_Register_Internal	Internal;
}
	Union_NVIC_Interrupt_Clear_Enable_Register;

/* NVIC���ж����õȴ��Ĵ����ڲ� */
typedef	struct	Tag_NVIC_Interrupt_Set_Pending_Register_Internal
{
	Integer_Unsigned_32_Bit	GPIO_0_0_Interrupt_Set_Pending				 : 1;
	Integer_Unsigned_32_Bit	GPIO_0_1_Interrupt_Set_Pending				 : 1;
	Integer_Unsigned_32_Bit	GPIO_0_2_Interrupt_Set_Pending				 : 1;
	Integer_Unsigned_32_Bit	GPIO_0_3_Interrupt_Set_Pending				 : 1;
	Integer_Unsigned_32_Bit	GPIO_0_4_Interrupt_Set_Pending				 : 1;
	Integer_Unsigned_32_Bit	GPIO_0_5_Interrupt_Set_Pending				 : 1;
	Integer_Unsigned_32_Bit	GPIO_0_6_Interrupt_Set_Pending				 : 1;
	Integer_Unsigned_32_Bit	GPIO_0_7_Interrupt_Set_Pending				 : 1;
	Integer_Unsigned_32_Bit	GPIO_0_8_Interrupt_Set_Pending				 : 1;
	Integer_Unsigned_32_Bit	GPIO_0_9_Interrupt_Set_Pending				 : 1;
	Integer_Unsigned_32_Bit	GPIO_0_10_Interrupt_Set_Pending				 : 1;
	Integer_Unsigned_32_Bit	GPIO_0_11_Interrupt_Set_Pending				 : 1;
	Integer_Unsigned_32_Bit	GPIO_1_0_Interrupt_Set_Pending				 : 1;
	Integer_Unsigned_32_Bit												 : 1;
	Integer_Unsigned_32_Bit	SSP_1_Interrupt_Set_Pending					 : 1;
	Integer_Unsigned_32_Bit	IIC_Interrupt_Set_Pending					 : 1;
	Integer_Unsigned_32_Bit	Counter_Timer_16_Bit_0_Interrupt_Set_Pending : 1;
	Integer_Unsigned_32_Bit	Counter_Timer_16_Bit_1_Interrupt_Set_Pending : 1;
	Integer_Unsigned_32_Bit	Counter_Timer_32_Bit_0_Interrupt_Set_Pending : 1;
	Integer_Unsigned_32_Bit	Counter_Timer_32_Bit_1_Interrupt_Set_Pending : 1;
	Integer_Unsigned_32_Bit	SSP_0_Interrupt_Set_Pending					 : 1;
	Integer_Unsigned_32_Bit	UART_Interrupt_Set_Pending					 : 1;
	Integer_Unsigned_32_Bit												 : 2;
	Integer_Unsigned_32_Bit	ADC_Conversion_Interrupt_Set_Pending		 : 1;
	Integer_Unsigned_32_Bit	Watchdog_Timer_Interrupt_Set_Pending		 : 1;
	Integer_Unsigned_32_Bit	Brown_Out_Detect_Interrupt_Set_Pending		 : 1;
	Integer_Unsigned_32_Bit												 : 1;
	Integer_Unsigned_32_Bit	GPIO_3_Interrupt_Set_Pending				 : 1;
	Integer_Unsigned_32_Bit	GPIO_2_Interrupt_Set_Pending				 : 1;
	Integer_Unsigned_32_Bit	GPIO_1_Interrupt_Set_Pending				 : 1;
	Integer_Unsigned_32_Bit	GPIO_0_Interrupt_Set_Pending				 : 1;
}
	Structure_NVIC_Interrupt_Set_Pending_Register_Internal;

/* NVIC���ж����õȴ��Ĵ��� */
typedef	union	Tag_NVIC_Interrupt_Set_Pending_Register
{
	Integer_Unsigned_32_Bit									Value;
	Structure_NVIC_Interrupt_Set_Pending_Register_Internal	Internal;
}
	Union_NVIC_Interrupt_Set_Pending_Register;

/* NVIC���ж�����ȴ��Ĵ����ڲ� */
typedef	struct	Tag_NVIC_Interrupt_Clear_Pending_Register_Internal
{
	Integer_Unsigned_32_Bit	GPIO_0_0_Interrupt_Clear_Pending			   : 1;
	Integer_Unsigned_32_Bit	GPIO_0_1_Interrupt_Clear_Pending			   : 1;
	Integer_Unsigned_32_Bit	GPIO_0_2_Interrupt_Clear_Pending			   : 1;
	Integer_Unsigned_32_Bit	GPIO_0_3_Interrupt_Clear_Pending			   : 1;
	Integer_Unsigned_32_Bit	GPIO_0_4_Interrupt_Clear_Pending			   : 1;
	Integer_Unsigned_32_Bit	GPIO_0_5_Interrupt_Clear_Pending			   : 1;
	Integer_Unsigned_32_Bit	GPIO_0_6_Interrupt_Clear_Pending			   : 1;
	Integer_Unsigned_32_Bit	GPIO_0_7_Interrupt_Clear_Pending			   : 1;
	Integer_Unsigned_32_Bit	GPIO_0_8_Interrupt_Clear_Pending			   : 1;
	Integer_Unsigned_32_Bit	GPIO_0_9_Interrupt_Clear_Pending			   : 1;
	Integer_Unsigned_32_Bit	GPIO_0_10_Interrupt_Clear_Pending			   : 1;
	Integer_Unsigned_32_Bit	GPIO_0_11_Interrupt_Clear_Pending			   : 1;
	Integer_Unsigned_32_Bit	GPIO_1_0_Interrupt_Clear_Pending			   : 1;
	Integer_Unsigned_32_Bit												   : 1;
	Integer_Unsigned_32_Bit	SSP_1_Interrupt_Clear_Pending				   : 1;
	Integer_Unsigned_32_Bit	IIC_Interrupt_Clear_Pending					   : 1;
	Integer_Unsigned_32_Bit	Counter_Timer_16_Bit_0_Interrupt_Clear_Pending : 1;
	Integer_Unsigned_32_Bit	Counter_Timer_16_Bit_1_Interrupt_Clear_Pending : 1;
	Integer_Unsigned_32_Bit	Counter_Timer_32_Bit_0_Interrupt_Clear_Pending : 1;
	Integer_Unsigned_32_Bit	Counter_Timer_32_Bit_1_Interrupt_Clear_Pending : 1;
	Integer_Unsigned_32_Bit	SSP_0_Interrupt_Clear_Pending				   : 1;
	Integer_Unsigned_32_Bit	UART_Interrupt_Clear_Pending				   : 1;
	Integer_Unsigned_32_Bit												   : 2;
	Integer_Unsigned_32_Bit	ADC_Conversion_Interrupt_Clear_Pending		   : 1;
	Integer_Unsigned_32_Bit	Watchdog_Timer_Interrupt_Clear_Pending		   : 1;
	Integer_Unsigned_32_Bit	Brown_Out_Detect_Interrupt_Clear_Pending	   : 1;
	Integer_Unsigned_32_Bit												   : 1;
	Integer_Unsigned_32_Bit	GPIO_3_Interrupt_Clear_Pending				   : 1;
	Integer_Unsigned_32_Bit	GPIO_2_Interrupt_Clear_Pending				   : 1;
	Integer_Unsigned_32_Bit	GPIO_1_Interrupt_Clear_Pending				   : 1;
	Integer_Unsigned_32_Bit	GPIO_0_Interrupt_Clear_Pending				   : 1;
}
	Structure_NVIC_Interrupt_Clear_Pending_Register_Internal;

/* NVIC���ж�����ȴ��Ĵ��� */
typedef	union	Tag_NVIC_Interrupt_Clear_Pending_Register
{
	Integer_Unsigned_32_Bit										Value;
	Structure_NVIC_Interrupt_Clear_Pending_Register_Internal	Internal;
}
	Union_NVIC_Interrupt_Clear_Pending_Register;

/* NVIC���ж����ȼ��Ĵ���0�ڲ� */
typedef	struct	Tag_NVIC_Interrupt_Priority_Register_0_Internal
{
	Integer_Unsigned_32_Bit	Interrupt_0_Priority_Value : 8;
	Integer_Unsigned_32_Bit	Interrupt_1_Priority_Value : 8;
	Integer_Unsigned_32_Bit	Interrupt_2_Priority_Value : 8;
	Integer_Unsigned_32_Bit	Interrupt_3_Priority_Value : 8;
}
	Structure_NVIC_Interrupt_Priority_Register_0_Internal;

/* NVIC���ж����ȼ��Ĵ���0 */
typedef	union	Tag_NVIC_Interrupt_Priority_Register_0
{
	Integer_Unsigned_32_Bit									Value;
	Structure_NVIC_Interrupt_Priority_Register_0_Internal	Internal;
}
	Union_NVIC_Interrupt_Priority_Register_0;

/* NVIC���ж����ȼ��Ĵ���1�ڲ� */
typedef	struct	Tag_NVIC_Interrupt_Priority_Register_1_Internal
{
	Integer_Unsigned_32_Bit	Interrupt_4_Priority_Value : 8;
	Integer_Unsigned_32_Bit	Interrupt_5_Priority_Value : 8;
	Integer_Unsigned_32_Bit	Interrupt_6_Priority_Value : 8;
	Integer_Unsigned_32_Bit	Interrupt_7_Priority_Value : 8;
}
	Structure_NVIC_Interrupt_Priority_Register_1_Internal;

/* NVIC���ж����ȼ��Ĵ���1 */
typedef	union	Tag_NVIC_Interrupt_Priority_Register_1
{
	Integer_Unsigned_32_Bit									Value;
	Structure_NVIC_Interrupt_Priority_Register_1_Internal	Internal;
}
	Union_NVIC_Interrupt_Priority_Register_1;

/* NVIC���ж����ȼ��Ĵ���2�ڲ� */
typedef	struct	Tag_NVIC_Interrupt_Priority_Register_2_Internal
{
	Integer_Unsigned_32_Bit	Interrupt_8_Priority_Value	: 8;
	Integer_Unsigned_32_Bit	Interrupt_9_Priority_Value	: 8;
	Integer_Unsigned_32_Bit	Interrupt_10_Priority_Value	: 8;
	Integer_Unsigned_32_Bit	Interrupt_11_Priority_Value	: 8;
}
	Structure_NVIC_Interrupt_Priority_Register_2_Internal;

/* NVIC���ж����ȼ��Ĵ���2 */
typedef	union	Tag_NVIC_Interrupt_Priority_Register_2
{
	Integer_Unsigned_32_Bit									Value;
	Structure_NVIC_Interrupt_Priority_Register_2_Internal	Internal;
}
	Union_NVIC_Interrupt_Priority_Register_2;

/* NVIC���ж����ȼ��Ĵ���3�ڲ� */
typedef	struct	Tag_NVIC_Interrupt_Priority_Register_3_Internal
{
	Integer_Unsigned_32_Bit	Interrupt_12_Priority_Value	: 8;
	Integer_Unsigned_32_Bit	Interrupt_13_Priority_Value	: 8;
	Integer_Unsigned_32_Bit	Interrupt_14_Priority_Value	: 8;
	Integer_Unsigned_32_Bit	Interrupt_15_Priority_Value	: 8;
}
	Structure_NVIC_Interrupt_Priority_Register_3_Internal;

/* NVIC���ж����ȼ��Ĵ���3 */
typedef	union	Tag_NVIC_Interrupt_Priority_Register_3
{
	Integer_Unsigned_32_Bit									Value;
	Structure_NVIC_Interrupt_Priority_Register_3_Internal	Internal;
}
	Union_NVIC_Interrupt_Priority_Register_3;

/* NVIC���ж����ȼ��Ĵ���4�ڲ� */
typedef	struct	Tag_NVIC_Interrupt_Priority_Register_4_Internal
{
	Integer_Unsigned_32_Bit	Interrupt_16_Priority_Value	: 8;
	Integer_Unsigned_32_Bit	Interrupt_17_Priority_Value	: 8;
	Integer_Unsigned_32_Bit	Interrupt_18_Priority_Value	: 8;
	Integer_Unsigned_32_Bit	Interrupt_19_Priority_Value	: 8;
}
	Structure_NVIC_Interrupt_Priority_Register_4_Internal;

/* NVIC���ж����ȼ��Ĵ���4 */
typedef	union	Tag_NVIC_Interrupt_Priority_Register_4
{
	Integer_Unsigned_32_Bit									Value;
	Structure_NVIC_Interrupt_Priority_Register_4_Internal	Internal;
}
	Union_NVIC_Interrupt_Priority_Register_4;

/* NVIC���ж����ȼ��Ĵ���5�ڲ� */
typedef	struct	Tag_NVIC_Interrupt_Priority_Register_5_Internal
{
	Integer_Unsigned_32_Bit	Interrupt_20_Priority_Value	: 8;
	Integer_Unsigned_32_Bit	Interrupt_21_Priority_Value	: 8;
	Integer_Unsigned_32_Bit	Interrupt_22_Priority_Value	: 8;
	Integer_Unsigned_32_Bit	Interrupt_23_Priority_Value	: 8;
}
	Structure_NVIC_Interrupt_Priority_Register_5_Internal;

/* NVIC���ж����ȼ��Ĵ���5 */
typedef	union	Tag_NVIC_Interrupt_Priority_Register_5
{
	Integer_Unsigned_32_Bit									Value;
	Structure_NVIC_Interrupt_Priority_Register_5_Internal	Internal;
}
	Union_NVIC_Interrupt_Priority_Register_5;

/* NVIC���ж����ȼ��Ĵ���6�ڲ� */
typedef	struct	Tag_NVIC_Interrupt_Priority_Register_6_Internal
{
	Integer_Unsigned_32_Bit	Interrupt_24_Priority_Value	: 8;
	Integer_Unsigned_32_Bit	Interrupt_25_Priority_Value	: 8;
	Integer_Unsigned_32_Bit	Interrupt_26_Priority_Value	: 8;
	Integer_Unsigned_32_Bit	Interrupt_27_Priority_Value	: 8;
}
	Structure_NVIC_Interrupt_Priority_Register_6_Internal;

/* NVIC���ж����ȼ��Ĵ���6 */
typedef	union	Tag_NVIC_Interrupt_Priority_Register_6
{
	Integer_Unsigned_32_Bit									Value;
	Structure_NVIC_Interrupt_Priority_Register_6_Internal	Internal;
}
	Union_NVIC_Interrupt_Priority_Register_6;

/* NVIC���ж����ȼ��Ĵ���7�ڲ� */
typedef	struct	Tag_NVIC_Interrupt_Priority_Register_7_Internal
{
	Integer_Unsigned_32_Bit	Interrupt_28_Priority_Value	: 8;
	Integer_Unsigned_32_Bit	Interrupt_29_Priority_Value	: 8;
	Integer_Unsigned_32_Bit	Interrupt_30_Priority_Value	: 8;
	Integer_Unsigned_32_Bit	Interrupt_31_Priority_Value	: 8;
}
	Structure_NVIC_Interrupt_Priority_Register_7_Internal;

/* NVIC���ж����ȼ��Ĵ���7 */
typedef	union	Tag_NVIC_Interrupt_Priority_Register_7
{
	Integer_Unsigned_32_Bit									Value;
	Structure_NVIC_Interrupt_Priority_Register_7_Internal	Internal;
}
	Union_NVIC_Interrupt_Priority_Register_7;

/* �������� */

/*
	���ܣ���NVIC���ж�����ʹ�ܼĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_NVIC_Interrupt_Set_Enable_Register(void);

/*
	���ܣ�дNVIC���ж�����ʹ�ܼĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_NVIC_Interrupt_Set_Enable_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���NVIC���ж����ʹ�ܼĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_NVIC_Interrupt_Clear_Enable_Register(void);

/*
	���ܣ�дNVIC���ж����ʹ�ܼĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_NVIC_Interrupt_Clear_Enable_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���NVIC���ж����õȴ��Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_NVIC_Interrupt_Set_Pending_Register(void);

/*
	���ܣ�дNVIC���ж����õȴ��Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_NVIC_Interrupt_Set_Pending_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���NVIC���ж�����ȴ��Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_NVIC_Interrupt_Clear_Pending_Register(void);

/*
	���ܣ�дNVIC���ж�����ȴ��Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_NVIC_Interrupt_Clear_Pending_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���NVIC���ж����ȼ��Ĵ���0
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_NVIC_Interrupt_Priority_Register_0(void);

/*
	���ܣ�дNVIC���ж����ȼ��Ĵ���0
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_NVIC_Interrupt_Priority_Register_0(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���NVIC���ж����ȼ��Ĵ���1
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_NVIC_Interrupt_Priority_Register_1(void);

/*
	���ܣ�дNVIC���ж����ȼ��Ĵ���1
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_NVIC_Interrupt_Priority_Register_1(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���NVIC���ж����ȼ��Ĵ���2
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_NVIC_Interrupt_Priority_Register_2(void);

/*
	���ܣ�дNVIC���ж����ȼ��Ĵ���2
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_NVIC_Interrupt_Priority_Register_2(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���NVIC���ж����ȼ��Ĵ���3
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_NVIC_Interrupt_Priority_Register_3(void);

/*
	���ܣ�дNVIC���ж����ȼ��Ĵ���3
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_NVIC_Interrupt_Priority_Register_3(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���NVIC���ж����ȼ��Ĵ���4
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_NVIC_Interrupt_Priority_Register_4(void);

/*
	���ܣ�дNVIC���ж����ȼ��Ĵ���4
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_NVIC_Interrupt_Priority_Register_4(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���NVIC���ж����ȼ��Ĵ���5
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_NVIC_Interrupt_Priority_Register_5(void);

/*
	���ܣ�дNVIC���ж����ȼ��Ĵ���5
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_NVIC_Interrupt_Priority_Register_5(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���NVIC���ж����ȼ��Ĵ���6
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_NVIC_Interrupt_Priority_Register_6(void);

/*
	���ܣ�дNVIC���ж����ȼ��Ĵ���6
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_NVIC_Interrupt_Priority_Register_6(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���NVIC���ж����ȼ��Ĵ���7
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_NVIC_Interrupt_Priority_Register_7(void);

/*
	���ܣ�дNVIC���ж����ȼ��Ĵ���7
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_NVIC_Interrupt_Priority_Register_7(Integer_Unsigned_32_Bit Register_Value);

#endif
