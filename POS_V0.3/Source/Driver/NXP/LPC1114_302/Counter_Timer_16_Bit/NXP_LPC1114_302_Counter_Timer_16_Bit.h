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

#ifndef	NXP_LPC1114_302_COUNTER_TIMER_16_BIT_H
#define	NXP_LPC1114_302_COUNTER_TIMER_16_BIT_H

#include	"Base.h"

/* �������� */

/* 16λ��������ʱ��0���жϼĴ����ڲ� */
typedef	struct	Tag_Counter_Timer_16_Bit_0_Interrupt_Register_Internal
{
	Integer_Unsigned_32_Bit	Match_0_Interrupt_Flag : 1;
	Integer_Unsigned_32_Bit	Match_1_Interrupt_Flag : 1;
	Integer_Unsigned_32_Bit	Match_2_Interrupt_Flag : 1;
	Integer_Unsigned_32_Bit	Match_3_Interrupt_Flag : 1;
	Integer_Unsigned_32_Bit	Capture_Interrupt_Flag : 1;
}
	Structure_Counter_Timer_16_Bit_0_Interrupt_Register_Internal;

/* 16λ��������ʱ��0���жϼĴ��� */
typedef	union	Tag_Counter_Timer_16_Bit_0_Interrupt_Register
{
	Integer_Unsigned_32_Bit											Value;
	Structure_Counter_Timer_16_Bit_0_Interrupt_Register_Internal	Internal;
}
	Union_Counter_Timer_16_Bit_0_Interrupt_Register;

/* 16λ��������ʱ��0�Ķ�ʱ�����ƼĴ����ڲ� */
typedef	struct	Tag_Counter_Timer_16_Bit_0_Timer_Control_Register_Internal
{
	Integer_Unsigned_32_Bit	Counter_Enable : 1;
	Integer_Unsigned_32_Bit	Counter_Reset  : 1;
}
	Structure_Counter_Timer_16_Bit_0_Timer_Control_Register_Internal;

/* 16λ��������ʱ��0�Ķ�ʱ�����ƼĴ��� */
typedef	union	Tag_Counter_Timer_16_Bit_0_Timer_Control_Register
{
	Integer_Unsigned_32_Bit												Value;
	Structure_Counter_Timer_16_Bit_0_Timer_Control_Register_Internal	Internal;
}
	Union_Counter_Timer_16_Bit_0_Timer_Control_Register;

/* 16λ��������ʱ��0�Ķ�ʱ���������Ĵ����ڲ� */
typedef	struct	Tag_Counter_Timer_16_Bit_0_Timer_Counter_Register_Internal
{
	Integer_Unsigned_32_Bit	Counter_Value : 16;
}
	Structure_Counter_Timer_16_Bit_0_Timer_Counter_Register_Internal;

/* 16λ��������ʱ��0�Ķ�ʱ���������Ĵ��� */
typedef	union	Tag_Counter_Timer_16_Bit_0_Timer_Counter_Register
{
	Integer_Unsigned_32_Bit												Value;
	Structure_Counter_Timer_16_Bit_0_Timer_Counter_Register_Internal	Internal;
}
	Union_Counter_Timer_16_Bit_0_Timer_Counter_Register;

/* 16λ��������ʱ��0��Ԥ��Ƶ�Ĵ����ڲ� */
typedef	struct	Tag_Counter_Timer_16_Bit_0_Prescale_Register_Internal
{
	Integer_Unsigned_32_Bit	Prescale_Value : 16;
}
	Structure_Counter_Timer_16_Bit_0_Prescale_Register_Internal;

/* 16λ��������ʱ��0��Ԥ��Ƶ�Ĵ��� */
typedef	union	Tag_Counter_Timer_16_Bit_0_Prescale_Register
{
	Integer_Unsigned_32_Bit										Value;
	Structure_Counter_Timer_16_Bit_0_Prescale_Register_Internal	Internal;
}
	Union_Counter_Timer_16_Bit_0_Prescale_Register;

/* 16λ��������ʱ��0��Ԥ��Ƶ�������Ĵ����ڲ� */
typedef	struct	Tag_Counter_Timer_16_Bit_0_Prescale_Counter_Register_Internal
{
	Integer_Unsigned_32_Bit	Counter_Value : 16;
}
	Structure_Counter_Timer_16_Bit_0_Prescale_Counter_Register_Internal;

/* 16λ��������ʱ��0��Ԥ��Ƶ�������Ĵ��� */
typedef	union	Tag_Counter_Timer_16_Bit_0_Prescale_Counter_Register
{
	Integer_Unsigned_32_Bit												Value;
	Structure_Counter_Timer_16_Bit_0_Prescale_Counter_Register_Internal	Internal;
}
	Union_Counter_Timer_16_Bit_0_Prescale_Counter_Register;

/* 16λ��������ʱ��0��ƥ����ƼĴ����ڲ� */
typedef	struct	Tag_Counter_Timer_16_Bit_0_Match_Control_Register_Internal
{
	Integer_Unsigned_32_Bit	Match_0_Interrupt : 1;
	Integer_Unsigned_32_Bit	Match_0_Reset	  : 1;
	Integer_Unsigned_32_Bit	Match_0_Stop	  : 1;
	Integer_Unsigned_32_Bit	Match_1_Interrupt : 1;
	Integer_Unsigned_32_Bit	Match_1_Reset	  : 1;
	Integer_Unsigned_32_Bit	Match_1_Stop	  : 1;
	Integer_Unsigned_32_Bit	Match_2_Interrupt : 1;
	Integer_Unsigned_32_Bit	Match_2_Reset	  : 1;
	Integer_Unsigned_32_Bit	Match_2_Stop	  : 1;
	Integer_Unsigned_32_Bit	Match_3_Interrupt : 1;
	Integer_Unsigned_32_Bit	Match_3_Reset	  : 1;
	Integer_Unsigned_32_Bit	Match_3_Stop	  : 1;
}
	Structure_Counter_Timer_16_Bit_0_Match_Control_Register_Internal;

/* 16λ��������ʱ��0��ƥ����ƼĴ��� */
typedef	union	Tag_Counter_Timer_16_Bit_0_Match_Control_Register
{
	Integer_Unsigned_32_Bit												Value;
	Structure_Counter_Timer_16_Bit_0_Match_Control_Register_Internal	Internal;
}
	Union_Counter_Timer_16_Bit_0_Match_Control_Register;

/* 16λ��������ʱ��0��ƥ��Ĵ���0�ڲ� */
typedef	struct	Tag_Counter_Timer_16_Bit_0_Match_Register_0_Internal
{
	Integer_Unsigned_32_Bit	Match_Value : 16;
}
	Structure_Counter_Timer_16_Bit_0_Match_Register_0_Internal;

/* 16λ��������ʱ��0��ƥ��Ĵ���0 */
typedef	union	Tag_Counter_Timer_16_Bit_0_Match_Register_0
{
	Integer_Unsigned_32_Bit										Value;
	Structure_Counter_Timer_16_Bit_0_Match_Register_0_Internal	Internal;
}
	Union_Counter_Timer_16_Bit_0_Match_Register_0;

/* 16λ��������ʱ��0��ƥ��Ĵ���1�ڲ� */
typedef	struct	Tag_Counter_Timer_16_Bit_0_Match_Register_1_Internal
{
	Integer_Unsigned_32_Bit	Match_Value : 16;
}
	Structure_Counter_Timer_16_Bit_0_Match_Register_1_Internal;

/* 16λ��������ʱ��0��ƥ��Ĵ���1 */
typedef	union	Tag_Counter_Timer_16_Bit_0_Match_Register_1
{
	Integer_Unsigned_32_Bit										Value;
	Structure_Counter_Timer_16_Bit_0_Match_Register_1_Internal	Internal;
}
	Union_Counter_Timer_16_Bit_0_Match_Register_1;

/* 16λ��������ʱ��0��ƥ��Ĵ���2�ڲ� */
typedef	struct	Tag_Counter_Timer_16_Bit_0_Match_Register_2_Internal
{
	Integer_Unsigned_32_Bit	Match_Value : 16;
}
	Structure_Counter_Timer_16_Bit_0_Match_Register_2_Internal;

/* 16λ��������ʱ��0��ƥ��Ĵ���2 */
typedef	union	Tag_Counter_Timer_16_Bit_0_Match_Register_2
{
	Integer_Unsigned_32_Bit										Value;
	Structure_Counter_Timer_16_Bit_0_Match_Register_2_Internal	Internal;
}
	Union_Counter_Timer_16_Bit_0_Match_Register_2;

/* 16λ��������ʱ��0��ƥ��Ĵ���3�ڲ� */
typedef	struct	Tag_Counter_Timer_16_Bit_0_Match_Register_3_Internal
{
	Integer_Unsigned_32_Bit	Match_Value : 16;
}
	Structure_Counter_Timer_16_Bit_0_Match_Register_3_Internal;

/* 16λ��������ʱ��0��ƥ��Ĵ���3 */
typedef	union	Tag_Counter_Timer_16_Bit_0_Match_Register_3
{
	Integer_Unsigned_32_Bit										Value;
	Structure_Counter_Timer_16_Bit_0_Match_Register_3_Internal	Internal;
}
	Union_Counter_Timer_16_Bit_0_Match_Register_3;

/* 16λ��������ʱ��0�Ĳ�����ƼĴ����ڲ� */
typedef	struct	Tag_Counter_Timer_16_Bit_0_Capture_Control_Register_Internal
{
	Integer_Unsigned_32_Bit	Capture_Rising_Edge		 : 1;
	Integer_Unsigned_32_Bit	Capture_Falling_Edge	 : 1;
	Integer_Unsigned_32_Bit	Capture_Interrupt_Enable : 1;
}
	Structure_Counter_Timer_16_Bit_0_Capture_Control_Register_Internal;

/* 16λ��������ʱ��0�Ĳ�����ƼĴ��� */
typedef	union	Tag_Counter_Timer_16_Bit_0_Capture_Control_Register
{
	Integer_Unsigned_32_Bit												Value;
	Structure_Counter_Timer_16_Bit_0_Capture_Control_Register_Internal	Internal;
}
	Union_Counter_Timer_16_Bit_0_Capture_Control_Register;

/* 16λ��������ʱ��0�Ĳ���Ĵ����ڲ� */
typedef	struct	Tag_Counter_Timer_16_Bit_0_Capture_Register_Internal
{
	Integer_Unsigned_32_Bit	Capture_Value : 16;
}
	Structure_Counter_Timer_16_Bit_0_Capture_Register_Internal;

/* 16λ��������ʱ��0�Ĳ���Ĵ��� */
typedef	union	Tag_Counter_Timer_16_Bit_0_Capture_Register
{
	Integer_Unsigned_32_Bit										Value;
	Structure_Counter_Timer_16_Bit_0_Capture_Register_Internal	Internal;
}
	Union_Counter_Timer_16_Bit_0_Capture_Register;

/* 16λ��������ʱ��0���ⲿƥ��Ĵ����ڲ� */
typedef	struct	Tag_Counter_Timer_16_Bit_0_External_Match_Register_Internal
{
	Integer_Unsigned_32_Bit	External_Match_0		 : 1;
	Integer_Unsigned_32_Bit	External_Match_1		 : 1;
	Integer_Unsigned_32_Bit	External_Match_2		 : 1;
	Integer_Unsigned_32_Bit	External_Match_3		 : 1;
	Integer_Unsigned_32_Bit	External_Match_Control_0 : 2;
	Integer_Unsigned_32_Bit	External_Match_Control_1 : 2;
	Integer_Unsigned_32_Bit	External_Match_Control_2 : 2;
	Integer_Unsigned_32_Bit	External_Match_Control_3 : 2;
}
	Structure_Counter_Timer_16_Bit_0_External_Match_Register_Internal;

/* 16λ��������ʱ��0���ⲿƥ��Ĵ��� */
typedef	union	Tag_Counter_Timer_16_Bit_0_External_Match_Register
{
	Integer_Unsigned_32_Bit												Value;
	Structure_Counter_Timer_16_Bit_0_External_Match_Register_Internal	Internal;
}
	Union_Counter_Timer_16_Bit_0_External_Match_Register;

/* 16λ��������ʱ��0�ļ������ƼĴ����ڲ� */
typedef	struct	Tag_Counter_Timer_16_Bit_0_Count_Control_Register_Internal
{
	Integer_Unsigned_32_Bit	Counter_Timer_Mode : 2;
	Integer_Unsigned_32_Bit	Count_Input_Select : 2;
}
	Structure_Counter_Timer_16_Bit_0_Count_Control_Register_Internal;

/* 16λ��������ʱ��0�ļ������ƼĴ��� */
typedef	union	Tag_Counter_Timer_16_Bit_0_Count_Control_Register
{
	Integer_Unsigned_32_Bit												Value;
	Structure_Counter_Timer_16_Bit_0_Count_Control_Register_Internal	Internal;
}
	Union_Counter_Timer_16_Bit_0_Count_Control_Register;

/* 16λ��������ʱ��0�������ȵ��ƿ��ƼĴ����ڲ� */
typedef	struct	Tag_Counter_Timer_16_Bit_0_PWM_Control_Register_Internal
{
	Integer_Unsigned_32_Bit	PWM_0_Enable : 1;
	Integer_Unsigned_32_Bit	PWM_1_Enable : 1;
	Integer_Unsigned_32_Bit	PWM_2_Enable : 1;
	Integer_Unsigned_32_Bit	PWM_3_Enable : 1;
}
	Structure_Counter_Timer_16_Bit_0_PWM_Control_Register_Internal;

/* 16λ��������ʱ��0�������ȵ��ƿ��ƼĴ��� */
typedef	union	Tag_Counter_Timer_16_Bit_0_PWM_Control_Register
{
	Integer_Unsigned_32_Bit											Value;
	Structure_Counter_Timer_16_Bit_0_PWM_Control_Register_Internal	Internal;
}
	Union_Counter_Timer_16_Bit_0_PWM_Control_Register;

/* 16λ��������ʱ��1���жϼĴ����ڲ� */
typedef	struct	Tag_Counter_Timer_16_Bit_1_Interrupt_Register_Internal
{
	Integer_Unsigned_32_Bit	Match_0_Interrupt_Flag : 1;
	Integer_Unsigned_32_Bit	Match_1_Interrupt_Flag : 1;
	Integer_Unsigned_32_Bit	Match_2_Interrupt_Flag : 1;
	Integer_Unsigned_32_Bit	Match_3_Interrupt_Flag : 1;
	Integer_Unsigned_32_Bit	Capture_Interrupt_Flag : 1;
}
	Structure_Counter_Timer_16_Bit_1_Interrupt_Register_Internal;

/* 16λ��������ʱ��1���жϼĴ��� */
typedef	union	Tag_Counter_Timer_16_Bit_1_Interrupt_Register
{
	Integer_Unsigned_32_Bit											Value;
	Structure_Counter_Timer_16_Bit_1_Interrupt_Register_Internal	Internal;
}
	Union_Counter_Timer_16_Bit_1_Interrupt_Register;

/* 16λ��������ʱ��1�Ķ�ʱ�����ƼĴ����ڲ� */
typedef	struct	Tag_Counter_Timer_16_Bit_1_Timer_Control_Register_Internal
{
	Integer_Unsigned_32_Bit	Counter_Enable : 1;
	Integer_Unsigned_32_Bit	Counter_Reset  : 1;
}
	Structure_Counter_Timer_16_Bit_1_Timer_Control_Register_Internal;

/* 16λ��������ʱ��1�Ķ�ʱ�����ƼĴ��� */
typedef	union	Tag_Counter_Timer_16_Bit_1_Timer_Control_Register
{
	Integer_Unsigned_32_Bit												Value;
	Structure_Counter_Timer_16_Bit_1_Timer_Control_Register_Internal	Internal;
}
	Union_Counter_Timer_16_Bit_1_Timer_Control_Register;

/* 16λ��������ʱ��1�Ķ�ʱ���������Ĵ����ڲ� */
typedef	struct	Tag_Counter_Timer_16_Bit_1_Timer_Counter_Register_Internal
{
	Integer_Unsigned_32_Bit	Counter_Value : 16;
}
	Structure_Counter_Timer_16_Bit_1_Timer_Counter_Register_Internal;

/* 16λ��������ʱ��1�Ķ�ʱ���������Ĵ��� */
typedef	union	Tag_Counter_Timer_16_Bit_1_Timer_Counter_Register
{
	Integer_Unsigned_32_Bit												Value;
	Structure_Counter_Timer_16_Bit_1_Timer_Counter_Register_Internal	Internal;
}
	Union_Counter_Timer_16_Bit_1_Timer_Counter_Register;

/* 16λ��������ʱ��1��Ԥ��Ƶ�Ĵ����ڲ� */
typedef	struct	Tag_Counter_Timer_16_Bit_1_Prescale_Register_Internal
{
	Integer_Unsigned_32_Bit	Prescale_Value : 16;
}
	Structure_Counter_Timer_16_Bit_1_Prescale_Register_Internal;

/* 16λ��������ʱ��1��Ԥ��Ƶ�Ĵ��� */
typedef	union	Tag_Counter_Timer_16_Bit_1_Prescale_Register
{
	Integer_Unsigned_32_Bit										Value;
	Structure_Counter_Timer_16_Bit_1_Prescale_Register_Internal	Internal;
}
	Union_Counter_Timer_16_Bit_1_Prescale_Register;

/* 16λ��������ʱ��1��Ԥ��Ƶ�������Ĵ����ڲ� */
typedef	struct	Tag_Counter_Timer_16_Bit_1_Prescale_Counter_Register_Internal
{
	Integer_Unsigned_32_Bit	Counter_Value : 16;
}
	Structure_Counter_Timer_16_Bit_1_Prescale_Counter_Register_Internal;

/* 16λ��������ʱ��1��Ԥ��Ƶ�������Ĵ��� */
typedef	union	Tag_Counter_Timer_16_Bit_1_Prescale_Counter_Register
{
	Integer_Unsigned_32_Bit												Value;
	Structure_Counter_Timer_16_Bit_1_Prescale_Counter_Register_Internal	Internal;
}
	Union_Counter_Timer_16_Bit_1_Prescale_Counter_Register;

/* 16λ��������ʱ��1��ƥ����ƼĴ����ڲ� */
typedef	struct	Tag_Counter_Timer_16_Bit_1_Match_Control_Register_Internal
{
	Integer_Unsigned_32_Bit	Match_0_Interrupt : 1;
	Integer_Unsigned_32_Bit	Match_0_Reset	  : 1;
	Integer_Unsigned_32_Bit	Match_0_Stop	  : 1;
	Integer_Unsigned_32_Bit	Match_1_Interrupt : 1;
	Integer_Unsigned_32_Bit	Match_1_Reset	  : 1;
	Integer_Unsigned_32_Bit	Match_1_Stop	  : 1;
	Integer_Unsigned_32_Bit	Match_2_Interrupt : 1;
	Integer_Unsigned_32_Bit	Match_2_Reset	  : 1;
	Integer_Unsigned_32_Bit	Match_2_Stop	  : 1;
	Integer_Unsigned_32_Bit	Match_3_Interrupt : 1;
	Integer_Unsigned_32_Bit	Match_3_Reset	  : 1;
	Integer_Unsigned_32_Bit	Match_3_Stop	  : 1;
}
	Structure_Counter_Timer_16_Bit_1_Match_Control_Register_Internal;

/* 16λ��������ʱ��1��ƥ����ƼĴ��� */
typedef	union	Tag_Counter_Timer_16_Bit_1_Match_Control_Register
{
	Integer_Unsigned_32_Bit												Value;
	Structure_Counter_Timer_16_Bit_1_Match_Control_Register_Internal	Internal;
}
	Union_Counter_Timer_16_Bit_1_Match_Control_Register;

/* 16λ��������ʱ��1��ƥ��Ĵ���0�ڲ� */
typedef	struct	Tag_Counter_Timer_16_Bit_1_Match_Register_0_Internal
{
	Integer_Unsigned_32_Bit	Match_Value : 16;
}
	Structure_Counter_Timer_16_Bit_1_Match_Register_0_Internal;

/* 16λ��������ʱ��1��ƥ��Ĵ���0 */
typedef	union	Tag_Counter_Timer_16_Bit_1_Match_Register_0
{
	Integer_Unsigned_32_Bit										Value;
	Structure_Counter_Timer_16_Bit_1_Match_Register_0_Internal	Internal;
}
	Union_Counter_Timer_16_Bit_1_Match_Register_0;

/* 16λ��������ʱ��1��ƥ��Ĵ���1�ڲ� */
typedef	struct	Tag_Counter_Timer_16_Bit_1_Match_Register_1_Internal
{
	Integer_Unsigned_32_Bit	Match_Value : 16;
}
	Structure_Counter_Timer_16_Bit_1_Match_Register_1_Internal;

/* 16λ��������ʱ��1��ƥ��Ĵ���1 */
typedef	union	Tag_Counter_Timer_16_Bit_1_Match_Register_1
{
	Integer_Unsigned_32_Bit										Value;
	Structure_Counter_Timer_16_Bit_1_Match_Register_1_Internal	Internal;
}
	Union_Counter_Timer_16_Bit_1_Match_Register_1;

/* 16λ��������ʱ��1��ƥ��Ĵ���2�ڲ� */
typedef	struct	Tag_Counter_Timer_16_Bit_1_Match_Register_2_Internal
{
	Integer_Unsigned_32_Bit	Match_Value : 16;
}
	Structure_Counter_Timer_16_Bit_1_Match_Register_2_Internal;

/* 16λ��������ʱ��1��ƥ��Ĵ���2 */
typedef	union	Tag_Counter_Timer_16_Bit_1_Match_Register_2
{
	Integer_Unsigned_32_Bit										Value;
	Structure_Counter_Timer_16_Bit_1_Match_Register_2_Internal	Internal;
}
	Union_Counter_Timer_16_Bit_1_Match_Register_2;

/* 16λ��������ʱ��1��ƥ��Ĵ���3�ڲ� */
typedef	struct	Tag_Counter_Timer_16_Bit_1_Match_Register_3_Internal
{
	Integer_Unsigned_32_Bit	Match_Value : 16;
}
	Structure_Counter_Timer_16_Bit_1_Match_Register_3_Internal;

/* 16λ��������ʱ��1��ƥ��Ĵ���3 */
typedef	union	Tag_Counter_Timer_16_Bit_1_Match_Register_3
{
	Integer_Unsigned_32_Bit										Value;
	Structure_Counter_Timer_16_Bit_1_Match_Register_3_Internal	Internal;
}
	Union_Counter_Timer_16_Bit_1_Match_Register_3;

/* 16λ��������ʱ��1�Ĳ�����ƼĴ����ڲ� */
typedef	struct	Tag_Counter_Timer_16_Bit_1_Capture_Control_Register_Internal
{
	Integer_Unsigned_32_Bit	Capture_Rising_Edge		 : 1;
	Integer_Unsigned_32_Bit	Capture_Falling_Edge	 : 1;
	Integer_Unsigned_32_Bit	Capture_Interrupt_Enable : 1;
}
	Structure_Counter_Timer_16_Bit_1_Capture_Control_Register_Internal;

/* 16λ��������ʱ��1�Ĳ�����ƼĴ��� */
typedef	union	Tag_Counter_Timer_16_Bit_1_Capture_Control_Register
{
	Integer_Unsigned_32_Bit												Value;
	Structure_Counter_Timer_16_Bit_1_Capture_Control_Register_Internal	Internal;
}
	Union_Counter_Timer_16_Bit_1_Capture_Control_Register;

/* 16λ��������ʱ��1�Ĳ���Ĵ����ڲ� */
typedef	struct	Tag_Counter_Timer_16_Bit_1_Capture_Register_Internal
{
	Integer_Unsigned_32_Bit	Capture_Value : 16;
}
	Structure_Counter_Timer_16_Bit_1_Capture_Register_Internal;

/* 16λ��������ʱ��1�Ĳ���Ĵ��� */
typedef	union	Tag_Counter_Timer_16_Bit_1_Capture_Register
{
	Integer_Unsigned_32_Bit										Value;
	Structure_Counter_Timer_16_Bit_1_Capture_Register_Internal	Internal;
}
	Union_Counter_Timer_16_Bit_1_Capture_Register;

/* 16λ��������ʱ��1���ⲿƥ��Ĵ����ڲ� */
typedef	struct	Tag_Counter_Timer_16_Bit_1_External_Match_Register_Internal
{
	Integer_Unsigned_32_Bit	External_Match_0		 : 1;
	Integer_Unsigned_32_Bit	External_Match_1		 : 1;
	Integer_Unsigned_32_Bit	External_Match_2		 : 1;
	Integer_Unsigned_32_Bit	External_Match_3		 : 1;
	Integer_Unsigned_32_Bit	External_Match_Control_0 : 2;
	Integer_Unsigned_32_Bit	External_Match_Control_1 : 2;
	Integer_Unsigned_32_Bit	External_Match_Control_2 : 2;
	Integer_Unsigned_32_Bit	External_Match_Control_3 : 2;
}
	Structure_Counter_Timer_16_Bit_1_External_Match_Register_Internal;

/* 16λ��������ʱ��1���ⲿƥ��Ĵ��� */
typedef	union	Tag_Counter_Timer_16_Bit_1_External_Match_Register
{
	Integer_Unsigned_32_Bit												Value;
	Structure_Counter_Timer_16_Bit_1_External_Match_Register_Internal	Internal;
}
	Union_Counter_Timer_16_Bit_1_External_Match_Register;

/* 16λ��������ʱ��1�ļ������ƼĴ����ڲ� */
typedef	struct	Tag_Counter_Timer_16_Bit_1_Count_Control_Register_Internal
{
	Integer_Unsigned_32_Bit	Counter_Timer_Mode : 2;
	Integer_Unsigned_32_Bit	Count_Input_Select : 2;
}
	Structure_Counter_Timer_16_Bit_1_Count_Control_Register_Internal;

/* 16λ��������ʱ��1�ļ������ƼĴ��� */
typedef	union	Tag_Counter_Timer_16_Bit_1_Count_Control_Register
{
	Integer_Unsigned_32_Bit												Value;
	Structure_Counter_Timer_16_Bit_1_Count_Control_Register_Internal	Internal;
}
	Union_Counter_Timer_16_Bit_1_Count_Control_Register;

/* 16λ��������ʱ��1�������ȵ��ƿ��ƼĴ����ڲ� */
typedef	struct	Tag_Counter_Timer_16_Bit_1_PWM_Control_Register_Internal
{
	Integer_Unsigned_32_Bit	PWM_0_Enable : 1;
	Integer_Unsigned_32_Bit	PWM_1_Enable : 1;
	Integer_Unsigned_32_Bit	PWM_2_Enable : 1;
	Integer_Unsigned_32_Bit	PWM_3_Enable : 1;
}
	Structure_Counter_Timer_16_Bit_1_PWM_Control_Register_Internal;

/* 16λ��������ʱ��1�������ȵ��ƿ��ƼĴ��� */
typedef	union	Tag_Counter_Timer_16_Bit_1_PWM_Control_Register
{
	Integer_Unsigned_32_Bit											Value;
	Structure_Counter_Timer_16_Bit_1_PWM_Control_Register_Internal	Internal;
}
	Union_Counter_Timer_16_Bit_1_PWM_Control_Register;

/* �������� */

/*
	���ܣ���16λ��������ʱ��0���жϼĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_Counter_Timer_16_Bit_0_Interrupt_Register(void);

/*
	���ܣ�д16λ��������ʱ��0���жϼĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_Counter_Timer_16_Bit_0_Interrupt_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���16λ��������ʱ��0�Ķ�ʱ�����ƼĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_Counter_Timer_16_Bit_0_Timer_Control_Register(void);

/*
	���ܣ�д16λ��������ʱ��0�Ķ�ʱ�����ƼĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_Counter_Timer_16_Bit_0_Timer_Control_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���16λ��������ʱ��0�Ķ�ʱ���������Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_Counter_Timer_16_Bit_0_Timer_Counter_Register(void);

/*
	���ܣ�д16λ��������ʱ��0�Ķ�ʱ���������Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_Counter_Timer_16_Bit_0_Timer_Counter_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���16λ��������ʱ��0��Ԥ��Ƶ�Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_Counter_Timer_16_Bit_0_Prescale_Register(void);

/*
	���ܣ�д16λ��������ʱ��0��Ԥ��Ƶ�Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_Counter_Timer_16_Bit_0_Prescale_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���16λ��������ʱ��0��Ԥ��Ƶ�������Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_Counter_Timer_16_Bit_0_Prescale_Counter_Register(void);

/*
	���ܣ�д16λ��������ʱ��0��Ԥ��Ƶ�������Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_Counter_Timer_16_Bit_0_Prescale_Counter_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���16λ��������ʱ��0��ƥ����ƼĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_Counter_Timer_16_Bit_0_Match_Control_Register(void);

/*
	���ܣ�д16λ��������ʱ��0��ƥ����ƼĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_Counter_Timer_16_Bit_0_Match_Control_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���16λ��������ʱ��0��ƥ��Ĵ���0
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_Counter_Timer_16_Bit_0_Match_Register_0(void);

/*
	���ܣ�д16λ��������ʱ��0��ƥ��Ĵ���0
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_Counter_Timer_16_Bit_0_Match_Register_0(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���16λ��������ʱ��0��ƥ��Ĵ���1
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_Counter_Timer_16_Bit_0_Match_Register_1(void);

/*
	���ܣ�д16λ��������ʱ��0��ƥ��Ĵ���1
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_Counter_Timer_16_Bit_0_Match_Register_1(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���16λ��������ʱ��0��ƥ��Ĵ���2
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_Counter_Timer_16_Bit_0_Match_Register_2(void);

/*
	���ܣ�д16λ��������ʱ��0��ƥ��Ĵ���2
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_Counter_Timer_16_Bit_0_Match_Register_2(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���16λ��������ʱ��0��ƥ��Ĵ���3
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_Counter_Timer_16_Bit_0_Match_Register_3(void);

/*
	���ܣ�д16λ��������ʱ��0��ƥ��Ĵ���3
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_Counter_Timer_16_Bit_0_Match_Register_3(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���16λ��������ʱ��0�Ĳ�����ƼĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_Counter_Timer_16_Bit_0_Capture_Control_Register(void);

/*
	���ܣ�д16λ��������ʱ��0�Ĳ�����ƼĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_Counter_Timer_16_Bit_0_Capture_Control_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���16λ��������ʱ��0�Ĳ���Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_Counter_Timer_16_Bit_0_Capture_Register(void);

/*
	���ܣ���16λ��������ʱ��0���ⲿƥ��Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_Counter_Timer_16_Bit_0_External_Match_Register(void);

/*
	���ܣ�д16λ��������ʱ��0���ⲿƥ��Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_Counter_Timer_16_Bit_0_External_Match_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���16λ��������ʱ��0�ļ������ƼĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_Counter_Timer_16_Bit_0_Count_Control_Register(void);

/*
	���ܣ�д16λ��������ʱ��0�ļ������ƼĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_Counter_Timer_16_Bit_0_Count_Control_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���16λ��������ʱ��0�������ȵ��ƿ��ƼĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_Counter_Timer_16_Bit_0_PWM_Control_Register(void);

/*
	���ܣ�д16λ��������ʱ��0�������ȵ��ƿ��ƼĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_Counter_Timer_16_Bit_0_PWM_Control_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���16λ��������ʱ��1���жϼĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_Counter_Timer_16_Bit_1_Interrupt_Register(void);

/*
	���ܣ�д16λ��������ʱ��1���жϼĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_Counter_Timer_16_Bit_1_Interrupt_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���16λ��������ʱ��1�Ķ�ʱ�����ƼĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_Counter_Timer_16_Bit_1_Timer_Control_Register(void);

/*
	���ܣ�д16λ��������ʱ��1�Ķ�ʱ�����ƼĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_Counter_Timer_16_Bit_1_Timer_Control_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���16λ��������ʱ��1�Ķ�ʱ���������Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_Counter_Timer_16_Bit_1_Timer_Counter_Register(void);

/*
	���ܣ�д16λ��������ʱ��1�Ķ�ʱ���������Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_Counter_Timer_16_Bit_1_Timer_Counter_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���16λ��������ʱ��1��Ԥ��Ƶ�Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_Counter_Timer_16_Bit_1_Prescale_Register(void);

/*
	���ܣ�д16λ��������ʱ��1��Ԥ��Ƶ�Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_Counter_Timer_16_Bit_1_Prescale_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���16λ��������ʱ��1��Ԥ��Ƶ�������Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_Counter_Timer_16_Bit_1_Prescale_Counter_Register(void);

/*
	���ܣ�д16λ��������ʱ��1��Ԥ��Ƶ�������Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_Counter_Timer_16_Bit_1_Prescale_Counter_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���16λ��������ʱ��1��ƥ����ƼĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_Counter_Timer_16_Bit_1_Match_Control_Register(void);

/*
	���ܣ�д16λ��������ʱ��1��ƥ����ƼĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_Counter_Timer_16_Bit_1_Match_Control_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���16λ��������ʱ��1��ƥ��Ĵ���0
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_Counter_Timer_16_Bit_1_Match_Register_0(void);

/*
	���ܣ�д16λ��������ʱ��1��ƥ��Ĵ���0
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_Counter_Timer_16_Bit_1_Match_Register_0(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���16λ��������ʱ��1��ƥ��Ĵ���1
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_Counter_Timer_16_Bit_1_Match_Register_1(void);

/*
	���ܣ�д16λ��������ʱ��1��ƥ��Ĵ���1
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_Counter_Timer_16_Bit_1_Match_Register_1(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���16λ��������ʱ��1��ƥ��Ĵ���2
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_Counter_Timer_16_Bit_1_Match_Register_2(void);

/*
	���ܣ�д16λ��������ʱ��1��ƥ��Ĵ���2
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_Counter_Timer_16_Bit_1_Match_Register_2(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���16λ��������ʱ��1��ƥ��Ĵ���3
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_Counter_Timer_16_Bit_1_Match_Register_3(void);

/*
	���ܣ�д16λ��������ʱ��1��ƥ��Ĵ���3
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_Counter_Timer_16_Bit_1_Match_Register_3(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���16λ��������ʱ��1�Ĳ�����ƼĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_Counter_Timer_16_Bit_1_Capture_Control_Register(void);

/*
	���ܣ�д16λ��������ʱ��1�Ĳ�����ƼĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_Counter_Timer_16_Bit_1_Capture_Control_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���16λ��������ʱ��1�Ĳ���Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_Counter_Timer_16_Bit_1_Capture_Register(void);

/*
	���ܣ���16λ��������ʱ��1���ⲿƥ��Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_Counter_Timer_16_Bit_1_External_Match_Register(void);

/*
	���ܣ�д16λ��������ʱ��1���ⲿƥ��Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_Counter_Timer_16_Bit_1_External_Match_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���16λ��������ʱ��1�ļ������ƼĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_Counter_Timer_16_Bit_1_Count_Control_Register(void);

/*
	���ܣ�д16λ��������ʱ��1�ļ������ƼĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_Counter_Timer_16_Bit_1_Count_Control_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���16λ��������ʱ��1�������ȵ��ƿ��ƼĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_Counter_Timer_16_Bit_1_PWM_Control_Register(void);

/*
	���ܣ�д16λ��������ʱ��1�������ȵ��ƿ��ƼĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_Counter_Timer_16_Bit_1_PWM_Control_Register(Integer_Unsigned_32_Bit Register_Value);

#endif
