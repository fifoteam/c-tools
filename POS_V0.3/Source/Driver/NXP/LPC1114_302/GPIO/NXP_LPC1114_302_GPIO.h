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

#ifndef	NXP_LPC1114_302_GPIO_H
#define	NXP_LPC1114_302_GPIO_H

#include	"Base.h"

/* ��������	*/

/* GPIO�˿�0�����ݼĴ����ڲ� */
typedef	struct	Tag_GPIO_0_Data_Register_Internal
{
	Integer_Unsigned_32_Bit	Pin_0  : 1;
	Integer_Unsigned_32_Bit	Pin_1  : 1;
	Integer_Unsigned_32_Bit	Pin_2  : 1;
	Integer_Unsigned_32_Bit	Pin_3  : 1;
	Integer_Unsigned_32_Bit	Pin_4  : 1;
	Integer_Unsigned_32_Bit	Pin_5  : 1;
	Integer_Unsigned_32_Bit	Pin_6  : 1;
	Integer_Unsigned_32_Bit	Pin_7  : 1;
	Integer_Unsigned_32_Bit	Pin_8  : 1;
	Integer_Unsigned_32_Bit	Pin_9  : 1;
	Integer_Unsigned_32_Bit	Pin_10 : 1;
	Integer_Unsigned_32_Bit	Pin_11 : 1;
}
	Strucrure_GPIO_0_Data_Register_Internal;

/* GPIO�˿�0�����ݼĴ��� */
typedef	union	Tag_GPIO_0_Data_Register
{
	Integer_Unsigned_32_Bit					Value;
	Strucrure_GPIO_0_Data_Register_Internal	Internal;
}
	Union_GPIO_0_Data_Register;

/* GPIO�˿�0�����ݷ���Ĵ����ڲ� */
typedef	struct	Tag_GPIO_0_Data_Direction_Register_Internal
{
	Integer_Unsigned_32_Bit	Pin_0  : 1;
	Integer_Unsigned_32_Bit	Pin_1  : 1;
	Integer_Unsigned_32_Bit	Pin_2  : 1;
	Integer_Unsigned_32_Bit	Pin_3  : 1;
	Integer_Unsigned_32_Bit	Pin_4  : 1;
	Integer_Unsigned_32_Bit	Pin_5  : 1;
	Integer_Unsigned_32_Bit	Pin_6  : 1;
	Integer_Unsigned_32_Bit	Pin_7  : 1;
	Integer_Unsigned_32_Bit	Pin_8  : 1;
	Integer_Unsigned_32_Bit	Pin_9  : 1;
	Integer_Unsigned_32_Bit	Pin_10 : 1;
	Integer_Unsigned_32_Bit	Pin_11 : 1;
}
	Structure_GPIO_0_Data_Direction_Register_Internal;

/* GPIO�˿�0�����ݷ���Ĵ��� */
typedef	union	Tag_GPIO_0_Data_Direction_Register
{
	Integer_Unsigned_32_Bit								Value;
	Structure_GPIO_0_Data_Direction_Register_Internal	Internal;
}
	Union_GPIO_0_Data_Direction_Register;

/* GPIO�˿�0���жϼ��Ĵ����ڲ� */
typedef	struct	Tag_GPIO_0_Interrupt_Sense_Register_Internal
{
	Integer_Unsigned_32_Bit	Pin_0  : 1;
	Integer_Unsigned_32_Bit	Pin_1  : 1;
	Integer_Unsigned_32_Bit	Pin_2  : 1;
	Integer_Unsigned_32_Bit	Pin_3  : 1;
	Integer_Unsigned_32_Bit	Pin_4  : 1;
	Integer_Unsigned_32_Bit	Pin_5  : 1;
	Integer_Unsigned_32_Bit	Pin_6  : 1;
	Integer_Unsigned_32_Bit	Pin_7  : 1;
	Integer_Unsigned_32_Bit	Pin_8  : 1;
	Integer_Unsigned_32_Bit	Pin_9  : 1;
	Integer_Unsigned_32_Bit	Pin_10 : 1;
	Integer_Unsigned_32_Bit	Pin_11 : 1;
}
	Structure_GPIO_0_Interrupt_Sense_Register_Internal;

/* GPIO�˿�0���жϼ��Ĵ��� */
typedef	union	Tag_GPIO_0_Interrupt_Sense_Register
{
	Integer_Unsigned_32_Bit								Value;
	Structure_GPIO_0_Interrupt_Sense_Register_Internal	Internal;
}
	Union_GPIO_0_Interrupt_Sense_Register;

/* GPIO�˿�0���ж�˫�ؼ��Ĵ����ڲ� */
typedef	struct	Tag_GPIO_0_Interrupt_Both_Edge_Sense_Register_Internal
{
	Integer_Unsigned_32_Bit	Pin_0  : 1;
	Integer_Unsigned_32_Bit	Pin_1  : 1;
	Integer_Unsigned_32_Bit	Pin_2  : 1;
	Integer_Unsigned_32_Bit	Pin_3  : 1;
	Integer_Unsigned_32_Bit	Pin_4  : 1;
	Integer_Unsigned_32_Bit	Pin_5  : 1;
	Integer_Unsigned_32_Bit	Pin_6  : 1;
	Integer_Unsigned_32_Bit	Pin_7  : 1;
	Integer_Unsigned_32_Bit	Pin_8  : 1;
	Integer_Unsigned_32_Bit	Pin_9  : 1;
	Integer_Unsigned_32_Bit	Pin_10 : 1;
	Integer_Unsigned_32_Bit	Pin_11 : 1;
}
	Structure_GPIO_0_Interrupt_Both_Edge_Sense_Register_Internal;

/* GPIO�˿�0���ж�˫�ؼ��Ĵ��� */
typedef	union	Tag_GPIO_0_Interrupt_Both_Edge_Sense_Register
{
	Integer_Unsigned_32_Bit											Value;
	Structure_GPIO_0_Interrupt_Both_Edge_Sense_Register_Internal	Internal;
}
	Union_GPIO_0_Interrupt_Both_Edge_Sense_Register;

/* GPIO�˿�0���ж��¼��Ĵ����ڲ� */
typedef	struct	Tag_GPIO_0_Interrupt_Event_Register_Internal
{
	Integer_Unsigned_32_Bit	Pin_0  : 1;
	Integer_Unsigned_32_Bit	Pin_1  : 1;
	Integer_Unsigned_32_Bit	Pin_2  : 1;
	Integer_Unsigned_32_Bit	Pin_3  : 1;
	Integer_Unsigned_32_Bit	Pin_4  : 1;
	Integer_Unsigned_32_Bit	Pin_5  : 1;
	Integer_Unsigned_32_Bit	Pin_6  : 1;
	Integer_Unsigned_32_Bit	Pin_7  : 1;
	Integer_Unsigned_32_Bit	Pin_8  : 1;
	Integer_Unsigned_32_Bit	Pin_9  : 1;
	Integer_Unsigned_32_Bit	Pin_10 : 1;
	Integer_Unsigned_32_Bit	Pin_11 : 1;
}
	Structure_GPIO_0_Interrupt_Event_Register_Internal;

/* GPIO�˿�0���ж��¼��Ĵ��� */
typedef	union	Tag_GPIO_0_Interrupt_Event_Register
{
	Integer_Unsigned_32_Bit								Value;
	Structure_GPIO_0_Interrupt_Event_Register_Internal	Internal;
}
	Union_GPIO_0_Interrupt_Event_Register;

/* GPIO�˿�0���ж����μĴ����ڲ� */
typedef	struct	Tag_GPIO_0_Interrupt_Mask_Register_Internal
{
	Integer_Unsigned_32_Bit	Pin_0  : 1;
	Integer_Unsigned_32_Bit	Pin_1  : 1;
	Integer_Unsigned_32_Bit	Pin_2  : 1;
	Integer_Unsigned_32_Bit	Pin_3  : 1;
	Integer_Unsigned_32_Bit	Pin_4  : 1;
	Integer_Unsigned_32_Bit	Pin_5  : 1;
	Integer_Unsigned_32_Bit	Pin_6  : 1;
	Integer_Unsigned_32_Bit	Pin_7  : 1;
	Integer_Unsigned_32_Bit	Pin_8  : 1;
	Integer_Unsigned_32_Bit	Pin_9  : 1;
	Integer_Unsigned_32_Bit	Pin_10 : 1;
	Integer_Unsigned_32_Bit	Pin_11 : 1;
}
	Structure_GPIO_0_Interrupt_Mask_Register_Internal;

/* GPIO�˿�0���ж����μĴ��� */
typedef	union	Tag_GPIO_0_Interrupt_Mask_Register
{
	Integer_Unsigned_32_Bit								Value;
	Structure_GPIO_0_Interrupt_Mask_Register_Internal	Internal;
}
	Union_GPIO_0_Interrupt_Mask_Register;

/* GPIO�˿�0��ԭʼ�ж�״̬�Ĵ����ڲ� */
typedef	struct	Tag_GPIO_0_Raw_Interrupt_Status_Register_Internal
{
	Integer_Unsigned_32_Bit	Pin_0  : 1;
	Integer_Unsigned_32_Bit	Pin_1  : 1;
	Integer_Unsigned_32_Bit	Pin_2  : 1;
	Integer_Unsigned_32_Bit	Pin_3  : 1;
	Integer_Unsigned_32_Bit	Pin_4  : 1;
	Integer_Unsigned_32_Bit	Pin_5  : 1;
	Integer_Unsigned_32_Bit	Pin_6  : 1;
	Integer_Unsigned_32_Bit	Pin_7  : 1;
	Integer_Unsigned_32_Bit	Pin_8  : 1;
	Integer_Unsigned_32_Bit	Pin_9  : 1;
	Integer_Unsigned_32_Bit	Pin_10 : 1;
	Integer_Unsigned_32_Bit	Pin_11 : 1;
}
	Structure_GPIO_0_Raw_Interrupt_Status_Register_Internal;

/* GPIO�˿�0��ԭʼ�ж�״̬�Ĵ��� */
typedef	union	Tag_GPIO_0_Raw_Interrupt_Status_Register
{
	Integer_Unsigned_32_Bit									Value;
	Structure_GPIO_0_Raw_Interrupt_Status_Register_Internal	Internal;
}
	Union_GPIO_0_Raw_Interrupt_Status_Register;

/* GPIO�˿�0�������ж�״̬�Ĵ����ڲ� */
typedef	struct	Tag_GPIO_0_Masked_Interrupt_Status_Register_Internal
{
	Integer_Unsigned_32_Bit	Pin_0  : 1;
	Integer_Unsigned_32_Bit	Pin_1  : 1;
	Integer_Unsigned_32_Bit	Pin_2  : 1;
	Integer_Unsigned_32_Bit	Pin_3  : 1;
	Integer_Unsigned_32_Bit	Pin_4  : 1;
	Integer_Unsigned_32_Bit	Pin_5  : 1;
	Integer_Unsigned_32_Bit	Pin_6  : 1;
	Integer_Unsigned_32_Bit	Pin_7  : 1;
	Integer_Unsigned_32_Bit	Pin_8  : 1;
	Integer_Unsigned_32_Bit	Pin_9  : 1;
	Integer_Unsigned_32_Bit	Pin_10 : 1;
	Integer_Unsigned_32_Bit	Pin_11 : 1;
}
	Structure_GPIO_0_Masked_Interrupt_Status_Register_Internal;

/* GPIO�˿�0�������ж�״̬�Ĵ��� */
typedef	union	Tag_GPIO_0_Masked_Interrupt_Status_Register
{
	Integer_Unsigned_32_Bit										Value;
	Structure_GPIO_0_Masked_Interrupt_Status_Register_Internal	Internal;
}
	Union_GPIO_0_Masked_Interrupt_Status_Register;

/* GPIO�˿�0���ж�����Ĵ����ڲ� */
typedef	struct	Tag_GPIO_0_Interrupt_Clear_Register_Internal
{
	Integer_Unsigned_32_Bit	Pin_0  : 1;
	Integer_Unsigned_32_Bit	Pin_1  : 1;
	Integer_Unsigned_32_Bit	Pin_2  : 1;
	Integer_Unsigned_32_Bit	Pin_3  : 1;
	Integer_Unsigned_32_Bit	Pin_4  : 1;
	Integer_Unsigned_32_Bit	Pin_5  : 1;
	Integer_Unsigned_32_Bit	Pin_6  : 1;
	Integer_Unsigned_32_Bit	Pin_7  : 1;
	Integer_Unsigned_32_Bit	Pin_8  : 1;
	Integer_Unsigned_32_Bit	Pin_9  : 1;
	Integer_Unsigned_32_Bit	Pin_10 : 1;
	Integer_Unsigned_32_Bit	Pin_11 : 1;
}
	Structure_GPIO_0_Interrupt_Clear_Register_Internal;

/* GPIO�˿�0���ж�����Ĵ��� */
typedef	union	Tag_GPIO_0_Interrupt_Clear_Register
{
	Integer_Unsigned_32_Bit								Value;
	Structure_GPIO_0_Interrupt_Clear_Register_Internal	Internal;
}
	Union_GPIO_0_Interrupt_Clear_Register;

/* GPIO�˿�1�����ݼĴ����ڲ� */
typedef	struct	Tag_GPIO_1_Data_Register_Internal
{
	Integer_Unsigned_32_Bit	Pin_0  : 1;
	Integer_Unsigned_32_Bit	Pin_1  : 1;
	Integer_Unsigned_32_Bit	Pin_2  : 1;
	Integer_Unsigned_32_Bit	Pin_3  : 1;
	Integer_Unsigned_32_Bit	Pin_4  : 1;
	Integer_Unsigned_32_Bit	Pin_5  : 1;
	Integer_Unsigned_32_Bit	Pin_6  : 1;
	Integer_Unsigned_32_Bit	Pin_7  : 1;
	Integer_Unsigned_32_Bit	Pin_8  : 1;
	Integer_Unsigned_32_Bit	Pin_9  : 1;
	Integer_Unsigned_32_Bit	Pin_10 : 1;
	Integer_Unsigned_32_Bit	Pin_11 : 1;
}
	Strucrure_GPIO_1_Data_Register_Internal;

/* GPIO�˿�1�����ݼĴ��� */
typedef	union	Tag_GPIO_1_Data_Register
{
	Integer_Unsigned_32_Bit					Value;
	Strucrure_GPIO_1_Data_Register_Internal	Internal;
}
	Union_GPIO_1_Data_Register;

/* GPIO�˿�1�����ݷ���Ĵ����ڲ� */
typedef	struct	Tag_GPIO_1_Data_Direction_Register_Internal
{
	Integer_Unsigned_32_Bit	Pin_0  : 1;
	Integer_Unsigned_32_Bit	Pin_1  : 1;
	Integer_Unsigned_32_Bit	Pin_2  : 1;
	Integer_Unsigned_32_Bit	Pin_3  : 1;
	Integer_Unsigned_32_Bit	Pin_4  : 1;
	Integer_Unsigned_32_Bit	Pin_5  : 1;
	Integer_Unsigned_32_Bit	Pin_6  : 1;
	Integer_Unsigned_32_Bit	Pin_7  : 1;
	Integer_Unsigned_32_Bit	Pin_8  : 1;
	Integer_Unsigned_32_Bit	Pin_9  : 1;
	Integer_Unsigned_32_Bit	Pin_10 : 1;
	Integer_Unsigned_32_Bit	Pin_11 : 1;
}
	Structure_GPIO_1_Data_Direction_Register_Internal;

/* GPIO�˿�1�����ݷ���Ĵ��� */
typedef	union	Tag_GPIO_1_Data_Direction_Register
{
	Integer_Unsigned_32_Bit								Value;
	Structure_GPIO_1_Data_Direction_Register_Internal	Internal;
}
	Union_GPIO_1_Data_Direction_Register;

/* GPIO�˿�1���жϼ��Ĵ����ڲ� */
typedef	struct	Tag_GPIO_1_Interrupt_Sense_Register_Internal
{
	Integer_Unsigned_32_Bit	Pin_0  : 1;
	Integer_Unsigned_32_Bit	Pin_1  : 1;
	Integer_Unsigned_32_Bit	Pin_2  : 1;
	Integer_Unsigned_32_Bit	Pin_3  : 1;
	Integer_Unsigned_32_Bit	Pin_4  : 1;
	Integer_Unsigned_32_Bit	Pin_5  : 1;
	Integer_Unsigned_32_Bit	Pin_6  : 1;
	Integer_Unsigned_32_Bit	Pin_7  : 1;
	Integer_Unsigned_32_Bit	Pin_8  : 1;
	Integer_Unsigned_32_Bit	Pin_9  : 1;
	Integer_Unsigned_32_Bit	Pin_10 : 1;
	Integer_Unsigned_32_Bit	Pin_11 : 1;
}
	Structure_GPIO_1_Interrupt_Sense_Register_Internal;

/* GPIO�˿�1���жϼ��Ĵ��� */
typedef	union	Tag_GPIO_1_Interrupt_Sense_Register
{
	Integer_Unsigned_32_Bit								Value;
	Structure_GPIO_1_Interrupt_Sense_Register_Internal	Internal;
}
	Union_GPIO_1_Interrupt_Sense_Register;

/* GPIO�˿�1���ж�˫�ؼ��Ĵ����ڲ� */
typedef	struct	Tag_GPIO_1_Interrupt_Both_Edge_Sense_Register_Internal
{
	Integer_Unsigned_32_Bit	Pin_0  : 1;
	Integer_Unsigned_32_Bit	Pin_1  : 1;
	Integer_Unsigned_32_Bit	Pin_2  : 1;
	Integer_Unsigned_32_Bit	Pin_3  : 1;
	Integer_Unsigned_32_Bit	Pin_4  : 1;
	Integer_Unsigned_32_Bit	Pin_5  : 1;
	Integer_Unsigned_32_Bit	Pin_6  : 1;
	Integer_Unsigned_32_Bit	Pin_7  : 1;
	Integer_Unsigned_32_Bit	Pin_8  : 1;
	Integer_Unsigned_32_Bit	Pin_9  : 1;
	Integer_Unsigned_32_Bit	Pin_10 : 1;
	Integer_Unsigned_32_Bit	Pin_11 : 1;
}
	Structure_GPIO_1_Interrupt_Both_Edge_Sense_Register_Internal;

/* GPIO�˿�1���ж�˫�ؼ��Ĵ��� */
typedef	union	Tag_GPIO_1_Interrupt_Both_Edge_Sense_Register
{
	Integer_Unsigned_32_Bit											Value;
	Structure_GPIO_1_Interrupt_Both_Edge_Sense_Register_Internal	Internal;
}
	Union_GPIO_1_Interrupt_Both_Edge_Sense_Register;

/* GPIO�˿�1���ж��¼��Ĵ����ڲ� */
typedef	struct	Tag_GPIO_1_Interrupt_Event_Register_Internal
{
	Integer_Unsigned_32_Bit	Pin_0  : 1;
	Integer_Unsigned_32_Bit	Pin_1  : 1;
	Integer_Unsigned_32_Bit	Pin_2  : 1;
	Integer_Unsigned_32_Bit	Pin_3  : 1;
	Integer_Unsigned_32_Bit	Pin_4  : 1;
	Integer_Unsigned_32_Bit	Pin_5  : 1;
	Integer_Unsigned_32_Bit	Pin_6  : 1;
	Integer_Unsigned_32_Bit	Pin_7  : 1;
	Integer_Unsigned_32_Bit	Pin_8  : 1;
	Integer_Unsigned_32_Bit	Pin_9  : 1;
	Integer_Unsigned_32_Bit	Pin_10 : 1;
	Integer_Unsigned_32_Bit	Pin_11 : 1;
}
	Structure_GPIO_1_Interrupt_Event_Register_Internal;

/* GPIO�˿�1���ж��¼��Ĵ��� */
typedef	union	Tag_GPIO_1_Interrupt_Event_Register
{
	Integer_Unsigned_32_Bit								Value;
	Structure_GPIO_1_Interrupt_Event_Register_Internal	Internal;
}
	Union_GPIO_1_Interrupt_Event_Register;

/* GPIO�˿�1���ж����μĴ����ڲ� */
typedef	struct	Tag_GPIO_1_Interrupt_Mask_Register_Internal
{
	Integer_Unsigned_32_Bit	Pin_0  : 1;
	Integer_Unsigned_32_Bit	Pin_1  : 1;
	Integer_Unsigned_32_Bit	Pin_2  : 1;
	Integer_Unsigned_32_Bit	Pin_3  : 1;
	Integer_Unsigned_32_Bit	Pin_4  : 1;
	Integer_Unsigned_32_Bit	Pin_5  : 1;
	Integer_Unsigned_32_Bit	Pin_6  : 1;
	Integer_Unsigned_32_Bit	Pin_7  : 1;
	Integer_Unsigned_32_Bit	Pin_8  : 1;
	Integer_Unsigned_32_Bit	Pin_9  : 1;
	Integer_Unsigned_32_Bit	Pin_10 : 1;
	Integer_Unsigned_32_Bit	Pin_11 : 1;
}
	Structure_GPIO_1_Interrupt_Mask_Register_Internal;

/* GPIO�˿�1���ж����μĴ��� */
typedef	union	Tag_GPIO_1_Interrupt_Mask_Register
{
	Integer_Unsigned_32_Bit								Value;
	Structure_GPIO_1_Interrupt_Mask_Register_Internal	Internal;
}
	Union_GPIO_1_Interrupt_Mask_Register;

/* GPIO�˿�1��ԭʼ�ж�״̬�Ĵ����ڲ� */
typedef	struct	Tag_GPIO_1_Raw_Interrupt_Status_Register_Internal
{
	Integer_Unsigned_32_Bit	Pin_0  : 1;
	Integer_Unsigned_32_Bit	Pin_1  : 1;
	Integer_Unsigned_32_Bit	Pin_2  : 1;
	Integer_Unsigned_32_Bit	Pin_3  : 1;
	Integer_Unsigned_32_Bit	Pin_4  : 1;
	Integer_Unsigned_32_Bit	Pin_5  : 1;
	Integer_Unsigned_32_Bit	Pin_6  : 1;
	Integer_Unsigned_32_Bit	Pin_7  : 1;
	Integer_Unsigned_32_Bit	Pin_8  : 1;
	Integer_Unsigned_32_Bit	Pin_9  : 1;
	Integer_Unsigned_32_Bit	Pin_10 : 1;
	Integer_Unsigned_32_Bit	Pin_11 : 1;
}
	Structure_GPIO_1_Raw_Interrupt_Status_Register_Internal;

/* GPIO�˿�1��ԭʼ�ж�״̬�Ĵ��� */
typedef	union	Tag_GPIO_1_Raw_Interrupt_Status_Register
{
	Integer_Unsigned_32_Bit									Value;
	Structure_GPIO_1_Raw_Interrupt_Status_Register_Internal	Internal;
}
	Union_GPIO_1_Raw_Interrupt_Status_Register;

/* GPIO�˿�1�������ж�״̬�Ĵ����ڲ� */
typedef	struct	Tag_GPIO_1_Masked_Interrupt_Status_Register_Internal
{
	Integer_Unsigned_32_Bit	Pin_0  : 1;
	Integer_Unsigned_32_Bit	Pin_1  : 1;
	Integer_Unsigned_32_Bit	Pin_2  : 1;
	Integer_Unsigned_32_Bit	Pin_3  : 1;
	Integer_Unsigned_32_Bit	Pin_4  : 1;
	Integer_Unsigned_32_Bit	Pin_5  : 1;
	Integer_Unsigned_32_Bit	Pin_6  : 1;
	Integer_Unsigned_32_Bit	Pin_7  : 1;
	Integer_Unsigned_32_Bit	Pin_8  : 1;
	Integer_Unsigned_32_Bit	Pin_9  : 1;
	Integer_Unsigned_32_Bit	Pin_10 : 1;
	Integer_Unsigned_32_Bit	Pin_11 : 1;
}
	Structure_GPIO_1_Masked_Interrupt_Status_Register_Internal;

/* GPIO�˿�1�������ж�״̬�Ĵ��� */
typedef	union	Tag_GPIO_1_Masked_Interrupt_Status_Register
{
	Integer_Unsigned_32_Bit										Value;
	Structure_GPIO_1_Masked_Interrupt_Status_Register_Internal	Internal;
}
	Union_GPIO_1_Masked_Interrupt_Status_Register;

/* GPIO�˿�1���ж�����Ĵ����ڲ� */
typedef	struct	Tag_GPIO_1_Interrupt_Clear_Register_Internal
{
	Integer_Unsigned_32_Bit	Pin_0  : 1;
	Integer_Unsigned_32_Bit	Pin_1  : 1;
	Integer_Unsigned_32_Bit	Pin_2  : 1;
	Integer_Unsigned_32_Bit	Pin_3  : 1;
	Integer_Unsigned_32_Bit	Pin_4  : 1;
	Integer_Unsigned_32_Bit	Pin_5  : 1;
	Integer_Unsigned_32_Bit	Pin_6  : 1;
	Integer_Unsigned_32_Bit	Pin_7  : 1;
	Integer_Unsigned_32_Bit	Pin_8  : 1;
	Integer_Unsigned_32_Bit	Pin_9  : 1;
	Integer_Unsigned_32_Bit	Pin_10 : 1;
	Integer_Unsigned_32_Bit	Pin_11 : 1;
}
	Structure_GPIO_1_Interrupt_Clear_Register_Internal;

/* GPIO�˿�1���ж�����Ĵ��� */
typedef	union	Tag_GPIO_1_Interrupt_Clear_Register
{
	Integer_Unsigned_32_Bit								Value;
	Structure_GPIO_1_Interrupt_Clear_Register_Internal	Internal;
}
	Union_GPIO_1_Interrupt_Clear_Register;

/* GPIO�˿�2�����ݼĴ����ڲ� */
typedef	struct	Tag_GPIO_2_Data_Register_Internal
{
	Integer_Unsigned_32_Bit	Pin_0  : 1;
	Integer_Unsigned_32_Bit	Pin_1  : 1;
	Integer_Unsigned_32_Bit	Pin_2  : 1;
	Integer_Unsigned_32_Bit	Pin_3  : 1;
	Integer_Unsigned_32_Bit	Pin_4  : 1;
	Integer_Unsigned_32_Bit	Pin_5  : 1;
	Integer_Unsigned_32_Bit	Pin_6  : 1;
	Integer_Unsigned_32_Bit	Pin_7  : 1;
	Integer_Unsigned_32_Bit	Pin_8  : 1;
	Integer_Unsigned_32_Bit	Pin_9  : 1;
	Integer_Unsigned_32_Bit	Pin_10 : 1;
	Integer_Unsigned_32_Bit	Pin_11 : 1;
}
	Strucrure_GPIO_2_Data_Register_Internal;

/* GPIO�˿�2�����ݼĴ��� */
typedef	union	Tag_GPIO_2_Data_Register
{
	Integer_Unsigned_32_Bit					Value;
	Strucrure_GPIO_2_Data_Register_Internal	Internal;
}
	Union_GPIO_2_Data_Register;

/* GPIO�˿�2�����ݷ���Ĵ����ڲ� */
typedef	struct	Tag_GPIO_2_Data_Direction_Register_Internal
{
	Integer_Unsigned_32_Bit	Pin_0  : 1;
	Integer_Unsigned_32_Bit	Pin_1  : 1;
	Integer_Unsigned_32_Bit	Pin_2  : 1;
	Integer_Unsigned_32_Bit	Pin_3  : 1;
	Integer_Unsigned_32_Bit	Pin_4  : 1;
	Integer_Unsigned_32_Bit	Pin_5  : 1;
	Integer_Unsigned_32_Bit	Pin_6  : 1;
	Integer_Unsigned_32_Bit	Pin_7  : 1;
	Integer_Unsigned_32_Bit	Pin_8  : 1;
	Integer_Unsigned_32_Bit	Pin_9  : 1;
	Integer_Unsigned_32_Bit	Pin_10 : 1;
	Integer_Unsigned_32_Bit	Pin_11 : 1;
}
	Structure_GPIO_2_Data_Direction_Register_Internal;

/* GPIO�˿�2�����ݷ���Ĵ��� */
typedef	union	Tag_GPIO_2_Data_Direction_Register
{
	Integer_Unsigned_32_Bit								Value;
	Structure_GPIO_2_Data_Direction_Register_Internal	Internal;
}
	Union_GPIO_2_Data_Direction_Register;

/* GPIO�˿�2���жϼ��Ĵ����ڲ� */
typedef	struct	Tag_GPIO_2_Interrupt_Sense_Register_Internal
{
	Integer_Unsigned_32_Bit	Pin_0  : 1;
	Integer_Unsigned_32_Bit	Pin_1  : 1;
	Integer_Unsigned_32_Bit	Pin_2  : 1;
	Integer_Unsigned_32_Bit	Pin_3  : 1;
	Integer_Unsigned_32_Bit	Pin_4  : 1;
	Integer_Unsigned_32_Bit	Pin_5  : 1;
	Integer_Unsigned_32_Bit	Pin_6  : 1;
	Integer_Unsigned_32_Bit	Pin_7  : 1;
	Integer_Unsigned_32_Bit	Pin_8  : 1;
	Integer_Unsigned_32_Bit	Pin_9  : 1;
	Integer_Unsigned_32_Bit	Pin_10 : 1;
	Integer_Unsigned_32_Bit	Pin_11 : 1;
}
	Structure_GPIO_2_Interrupt_Sense_Register_Internal;

/* GPIO�˿�2���жϼ��Ĵ��� */
typedef	union	Tag_GPIO_2_Interrupt_Sense_Register
{
	Integer_Unsigned_32_Bit								Value;
	Structure_GPIO_2_Interrupt_Sense_Register_Internal	Internal;
}
	Union_GPIO_2_Interrupt_Sense_Register;

/* GPIO�˿�2���ж�˫�ؼ��Ĵ����ڲ� */
typedef	struct	Tag_GPIO_2_Interrupt_Both_Edge_Sense_Register_Internal
{
	Integer_Unsigned_32_Bit	Pin_0  : 1;
	Integer_Unsigned_32_Bit	Pin_1  : 1;
	Integer_Unsigned_32_Bit	Pin_2  : 1;
	Integer_Unsigned_32_Bit	Pin_3  : 1;
	Integer_Unsigned_32_Bit	Pin_4  : 1;
	Integer_Unsigned_32_Bit	Pin_5  : 1;
	Integer_Unsigned_32_Bit	Pin_6  : 1;
	Integer_Unsigned_32_Bit	Pin_7  : 1;
	Integer_Unsigned_32_Bit	Pin_8  : 1;
	Integer_Unsigned_32_Bit	Pin_9  : 1;
	Integer_Unsigned_32_Bit	Pin_10 : 1;
	Integer_Unsigned_32_Bit	Pin_11 : 1;
}
	Structure_GPIO_2_Interrupt_Both_Edge_Sense_Register_Internal;

/* GPIO�˿�2���ж�˫�ؼ��Ĵ��� */
typedef	union	Tag_GPIO_2_Interrupt_Both_Edge_Sense_Register
{
	Integer_Unsigned_32_Bit											Value;
	Structure_GPIO_2_Interrupt_Both_Edge_Sense_Register_Internal	Internal;
}
	Union_GPIO_2_Interrupt_Both_Edge_Sense_Register;

/* GPIO�˿�2���ж��¼��Ĵ����ڲ� */
typedef	struct	Tag_GPIO_2_Interrupt_Event_Register_Internal
{
	Integer_Unsigned_32_Bit	Pin_0  : 1;
	Integer_Unsigned_32_Bit	Pin_1  : 1;
	Integer_Unsigned_32_Bit	Pin_2  : 1;
	Integer_Unsigned_32_Bit	Pin_3  : 1;
	Integer_Unsigned_32_Bit	Pin_4  : 1;
	Integer_Unsigned_32_Bit	Pin_5  : 1;
	Integer_Unsigned_32_Bit	Pin_6  : 1;
	Integer_Unsigned_32_Bit	Pin_7  : 1;
	Integer_Unsigned_32_Bit	Pin_8  : 1;
	Integer_Unsigned_32_Bit	Pin_9  : 1;
	Integer_Unsigned_32_Bit	Pin_10 : 1;
	Integer_Unsigned_32_Bit	Pin_11 : 1;
}
	Structure_GPIO_2_Interrupt_Event_Register_Internal;

/* GPIO�˿�2���ж��¼��Ĵ��� */
typedef	union	Tag_GPIO_2_Interrupt_Event_Register
{
	Integer_Unsigned_32_Bit								Value;
	Structure_GPIO_2_Interrupt_Event_Register_Internal	Internal;
}
	Union_GPIO_2_Interrupt_Event_Register;

/* GPIO�˿�2���ж����μĴ����ڲ� */
typedef	struct	Tag_GPIO_2_Interrupt_Mask_Register_Internal
{
	Integer_Unsigned_32_Bit	Pin_0  : 1;
	Integer_Unsigned_32_Bit	Pin_1  : 1;
	Integer_Unsigned_32_Bit	Pin_2  : 1;
	Integer_Unsigned_32_Bit	Pin_3  : 1;
	Integer_Unsigned_32_Bit	Pin_4  : 1;
	Integer_Unsigned_32_Bit	Pin_5  : 1;
	Integer_Unsigned_32_Bit	Pin_6  : 1;
	Integer_Unsigned_32_Bit	Pin_7  : 1;
	Integer_Unsigned_32_Bit	Pin_8  : 1;
	Integer_Unsigned_32_Bit	Pin_9  : 1;
	Integer_Unsigned_32_Bit	Pin_10 : 1;
	Integer_Unsigned_32_Bit	Pin_11 : 1;
}
	Structure_GPIO_2_Interrupt_Mask_Register_Internal;

/* GPIO�˿�2���ж����μĴ��� */
typedef	union	Tag_GPIO_2_Interrupt_Mask_Register
{
	Integer_Unsigned_32_Bit								Value;
	Structure_GPIO_2_Interrupt_Mask_Register_Internal	Internal;
}
	Union_GPIO_2_Interrupt_Mask_Register;

/* GPIO�˿�2��ԭʼ�ж�״̬�Ĵ����ڲ� */
typedef	struct	Tag_GPIO_2_Raw_Interrupt_Status_Register_Internal
{
	Integer_Unsigned_32_Bit	Pin_0  : 1;
	Integer_Unsigned_32_Bit	Pin_1  : 1;
	Integer_Unsigned_32_Bit	Pin_2  : 1;
	Integer_Unsigned_32_Bit	Pin_3  : 1;
	Integer_Unsigned_32_Bit	Pin_4  : 1;
	Integer_Unsigned_32_Bit	Pin_5  : 1;
	Integer_Unsigned_32_Bit	Pin_6  : 1;
	Integer_Unsigned_32_Bit	Pin_7  : 1;
	Integer_Unsigned_32_Bit	Pin_8  : 1;
	Integer_Unsigned_32_Bit	Pin_9  : 1;
	Integer_Unsigned_32_Bit	Pin_10 : 1;
	Integer_Unsigned_32_Bit	Pin_11 : 1;
}
	Structure_GPIO_2_Raw_Interrupt_Status_Register_Internal;

/* GPIO�˿�2��ԭʼ�ж�״̬�Ĵ��� */
typedef	union	Tag_GPIO_2_Raw_Interrupt_Status_Register
{
	Integer_Unsigned_32_Bit									Value;
	Structure_GPIO_2_Raw_Interrupt_Status_Register_Internal	Internal;
}
	Union_GPIO_2_Raw_Interrupt_Status_Register;

/* GPIO�˿�2�������ж�״̬�Ĵ����ڲ� */
typedef	struct	Tag_GPIO_2_Masked_Interrupt_Status_Register_Internal
{
	Integer_Unsigned_32_Bit	Pin_0  : 1;
	Integer_Unsigned_32_Bit	Pin_1  : 1;
	Integer_Unsigned_32_Bit	Pin_2  : 1;
	Integer_Unsigned_32_Bit	Pin_3  : 1;
	Integer_Unsigned_32_Bit	Pin_4  : 1;
	Integer_Unsigned_32_Bit	Pin_5  : 1;
	Integer_Unsigned_32_Bit	Pin_6  : 1;
	Integer_Unsigned_32_Bit	Pin_7  : 1;
	Integer_Unsigned_32_Bit	Pin_8  : 1;
	Integer_Unsigned_32_Bit	Pin_9  : 1;
	Integer_Unsigned_32_Bit	Pin_10 : 1;
	Integer_Unsigned_32_Bit	Pin_11 : 1;
}
	Structure_GPIO_2_Masked_Interrupt_Status_Register_Internal;

/* GPIO�˿�2�������ж�״̬�Ĵ��� */
typedef	union	Tag_GPIO_2_Masked_Interrupt_Status_Register
{
	Integer_Unsigned_32_Bit										Value;
	Structure_GPIO_2_Masked_Interrupt_Status_Register_Internal	Internal;
}
	Union_GPIO_2_Masked_Interrupt_Status_Register;

/* GPIO�˿�2���ж�����Ĵ����ڲ� */
typedef	struct	Tag_GPIO_2_Interrupt_Clear_Register_Internal
{
	Integer_Unsigned_32_Bit	Pin_0  : 1;
	Integer_Unsigned_32_Bit	Pin_1  : 1;
	Integer_Unsigned_32_Bit	Pin_2  : 1;
	Integer_Unsigned_32_Bit	Pin_3  : 1;
	Integer_Unsigned_32_Bit	Pin_4  : 1;
	Integer_Unsigned_32_Bit	Pin_5  : 1;
	Integer_Unsigned_32_Bit	Pin_6  : 1;
	Integer_Unsigned_32_Bit	Pin_7  : 1;
	Integer_Unsigned_32_Bit	Pin_8  : 1;
	Integer_Unsigned_32_Bit	Pin_9  : 1;
	Integer_Unsigned_32_Bit	Pin_10 : 1;
	Integer_Unsigned_32_Bit	Pin_11 : 1;
}
	Structure_GPIO_2_Interrupt_Clear_Register_Internal;

/* GPIO�˿�2���ж�����Ĵ��� */
typedef	union	Tag_GPIO_2_Interrupt_Clear_Register
{
	Integer_Unsigned_32_Bit								Value;
	Structure_GPIO_2_Interrupt_Clear_Register_Internal	Internal;
}
	Union_GPIO_2_Interrupt_Clear_Register;

/* GPIO�˿�3�����ݼĴ����ڲ� */
typedef	struct	Tag_GPIO_3_Data_Register_Internal
{
	Integer_Unsigned_32_Bit	Pin_0 : 1;
	Integer_Unsigned_32_Bit	Pin_1 : 1;
	Integer_Unsigned_32_Bit	Pin_2 : 1;
	Integer_Unsigned_32_Bit	Pin_3 : 1;
	Integer_Unsigned_32_Bit	Pin_4 : 1;
	Integer_Unsigned_32_Bit	Pin_5 : 1;
}
	Strucrure_GPIO_3_Data_Register_Internal;

/* GPIO�˿�3�����ݼĴ��� */
typedef	union	Tag_GPIO_3_Data_Register
{
	Integer_Unsigned_32_Bit					Value;
	Strucrure_GPIO_3_Data_Register_Internal	Internal;
}
	Union_GPIO_3_Data_Register;

/* GPIO�˿�3�����ݷ���Ĵ����ڲ� */
typedef	struct	Tag_GPIO_3_Data_Direction_Register_Internal
{
	Integer_Unsigned_32_Bit	Pin_0 : 1;
	Integer_Unsigned_32_Bit	Pin_1 : 1;
	Integer_Unsigned_32_Bit	Pin_2 : 1;
	Integer_Unsigned_32_Bit	Pin_3 : 1;
	Integer_Unsigned_32_Bit	Pin_4 : 1;
	Integer_Unsigned_32_Bit	Pin_5 : 1;
}
	Structure_GPIO_3_Data_Direction_Register_Internal;

/* GPIO�˿�3�����ݷ���Ĵ��� */
typedef	union	Tag_GPIO_3_Data_Direction_Register
{
	Integer_Unsigned_32_Bit								Value;
	Structure_GPIO_3_Data_Direction_Register_Internal	Internal;
}
	Union_GPIO_3_Data_Direction_Register;

/* GPIO�˿�3���жϼ��Ĵ����ڲ� */
typedef	struct	Tag_GPIO_3_Interrupt_Sense_Register_Internal
{
	Integer_Unsigned_32_Bit	Pin_0 : 1;
	Integer_Unsigned_32_Bit	Pin_1 : 1;
	Integer_Unsigned_32_Bit	Pin_2 : 1;
	Integer_Unsigned_32_Bit	Pin_3 : 1;
	Integer_Unsigned_32_Bit	Pin_4 : 1;
	Integer_Unsigned_32_Bit	Pin_5 : 1;
}
	Structure_GPIO_3_Interrupt_Sense_Register_Internal;

/* GPIO�˿�3���жϼ��Ĵ��� */
typedef	union	Tag_GPIO_3_Interrupt_Sense_Register
{
	Integer_Unsigned_32_Bit								Value;
	Structure_GPIO_3_Interrupt_Sense_Register_Internal	Internal;
}
	Union_GPIO_3_Interrupt_Sense_Register;

/* GPIO�˿�3���ж�˫�ؼ��Ĵ����ڲ� */
typedef	struct	Tag_GPIO_3_Interrupt_Both_Edge_Sense_Register_Internal
{
	Integer_Unsigned_32_Bit	Pin_0 : 1;
	Integer_Unsigned_32_Bit	Pin_1 : 1;
	Integer_Unsigned_32_Bit	Pin_2 : 1;
	Integer_Unsigned_32_Bit	Pin_3 : 1;
	Integer_Unsigned_32_Bit	Pin_4 : 1;
	Integer_Unsigned_32_Bit	Pin_5 : 1;
}
	Structure_GPIO_3_Interrupt_Both_Edge_Sense_Register_Internal;

/* GPIO�˿�3���ж�˫�ؼ��Ĵ��� */
typedef	union	Tag_GPIO_3_Interrupt_Both_Edge_Sense_Register
{
	Integer_Unsigned_32_Bit											Value;
	Structure_GPIO_3_Interrupt_Both_Edge_Sense_Register_Internal	Internal;
}
	Union_GPIO_3_Interrupt_Both_Edge_Sense_Register;

/* GPIO�˿�3���ж��¼��Ĵ����ڲ� */
typedef	struct	Tag_GPIO_3_Interrupt_Event_Register_Internal
{
	Integer_Unsigned_32_Bit	Pin_0 : 1;
	Integer_Unsigned_32_Bit	Pin_1 : 1;
	Integer_Unsigned_32_Bit	Pin_2 : 1;
	Integer_Unsigned_32_Bit	Pin_3 : 1;
	Integer_Unsigned_32_Bit	Pin_4 : 1;
	Integer_Unsigned_32_Bit	Pin_5 : 1;
}
	Structure_GPIO_3_Interrupt_Event_Register_Internal;

/* GPIO�˿�3���ж��¼��Ĵ��� */
typedef	union	Tag_GPIO_3_Interrupt_Event_Register
{
	Integer_Unsigned_32_Bit								Value;
	Structure_GPIO_3_Interrupt_Event_Register_Internal	Internal;
}
	Union_GPIO_3_Interrupt_Event_Register;

/* GPIO�˿�3���ж����μĴ����ڲ� */
typedef	struct	Tag_GPIO_3_Interrupt_Mask_Register_Internal
{
	Integer_Unsigned_32_Bit	Pin_0 : 1;
	Integer_Unsigned_32_Bit	Pin_1 : 1;
	Integer_Unsigned_32_Bit	Pin_2 : 1;
	Integer_Unsigned_32_Bit	Pin_3 : 1;
	Integer_Unsigned_32_Bit	Pin_4 : 1;
	Integer_Unsigned_32_Bit	Pin_5 : 1;
}
	Structure_GPIO_3_Interrupt_Mask_Register_Internal;

/* GPIO�˿�3���ж����μĴ��� */
typedef	union	Tag_GPIO_3_Interrupt_Mask_Register
{
	Integer_Unsigned_32_Bit								Value;
	Structure_GPIO_3_Interrupt_Mask_Register_Internal	Internal;
}
	Union_GPIO_3_Interrupt_Mask_Register;

/* GPIO�˿�3��ԭʼ�ж�״̬�Ĵ����ڲ� */
typedef	struct	Tag_GPIO_3_Raw_Interrupt_Status_Register_Internal
{
	Integer_Unsigned_32_Bit	Pin_0 : 1;
	Integer_Unsigned_32_Bit	Pin_1 : 1;
	Integer_Unsigned_32_Bit	Pin_2 : 1;
	Integer_Unsigned_32_Bit	Pin_3 : 1;
	Integer_Unsigned_32_Bit	Pin_4 : 1;
	Integer_Unsigned_32_Bit	Pin_5 : 1;
}
	Structure_GPIO_3_Raw_Interrupt_Status_Register_Internal;

/* GPIO�˿�3��ԭʼ�ж�״̬�Ĵ��� */
typedef	union	Tag_GPIO_3_Raw_Interrupt_Status_Register
{
	Integer_Unsigned_32_Bit									Value;
	Structure_GPIO_3_Raw_Interrupt_Status_Register_Internal	Internal;
}
	Union_GPIO_3_Raw_Interrupt_Status_Register;

/* GPIO�˿�3�������ж�״̬�Ĵ����ڲ� */
typedef	struct	Tag_GPIO_3_Masked_Interrupt_Status_Register_Internal
{
	Integer_Unsigned_32_Bit	Pin_0 : 1;
	Integer_Unsigned_32_Bit	Pin_1 : 1;
	Integer_Unsigned_32_Bit	Pin_2 : 1;
	Integer_Unsigned_32_Bit	Pin_3 : 1;
	Integer_Unsigned_32_Bit	Pin_4 : 1;
	Integer_Unsigned_32_Bit	Pin_5 : 1;
}
	Structure_GPIO_3_Masked_Interrupt_Status_Register_Internal;

/* GPIO�˿�3�������ж�״̬�Ĵ��� */
typedef	union	Tag_GPIO_3_Masked_Interrupt_Status_Register
{
	Integer_Unsigned_32_Bit										Value;
	Structure_GPIO_3_Masked_Interrupt_Status_Register_Internal	Internal;
}
	Union_GPIO_3_Masked_Interrupt_Status_Register;

/* GPIO�˿�3���ж�����Ĵ����ڲ� */
typedef	struct	Tag_GPIO_3_Interrupt_Clear_Register_Internal
{
	Integer_Unsigned_32_Bit	Pin_0 : 1;
	Integer_Unsigned_32_Bit	Pin_1 : 1;
	Integer_Unsigned_32_Bit	Pin_2 : 1;
	Integer_Unsigned_32_Bit	Pin_3 : 1;
	Integer_Unsigned_32_Bit	Pin_4 : 1;
	Integer_Unsigned_32_Bit	Pin_5 : 1;
}
	Structure_GPIO_3_Interrupt_Clear_Register_Internal;

/* GPIO�˿�3���ж�����Ĵ��� */
typedef	union	Tag_GPIO_3_Interrupt_Clear_Register
{
	Integer_Unsigned_32_Bit								Value;
	Structure_GPIO_3_Interrupt_Clear_Register_Internal	Internal;
}
	Union_GPIO_3_Interrupt_Clear_Register;

/* ��������	*/

/*
	���ܣ���GPIO�˿�0�����ݼĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_GPIO_0_Data_Register(void);

/*
	���ܣ�дGPIO�˿�0�����ݼĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_GPIO_0_Data_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���GPIO�˿�0�����ݷ���Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_GPIO_0_Data_Direction_Register(void);

/*
	���ܣ�дGPIO�˿�0�����ݷ���Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_GPIO_0_Data_Direction_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���GPIO�˿�0���жϼ��Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_GPIO_0_Interrupt_Sense_Register(void);

/*
	���ܣ�дGPIO�˿�0���жϼ��Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_GPIO_0_Interrupt_Sense_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���GPIO�˿�0���ж�˫�ؼ��Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_GPIO_0_Interrupt_Both_Edge_Sense_Register(void);

/*
	���ܣ�дGPIO�˿�0���ж�˫�ؼ��Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_GPIO_0_Interrupt_Both_Edge_Sense_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���GPIO�˿�0���ж��¼��Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_GPIO_0_Interrupt_Event_Register(void);

/*
	���ܣ�дGPIO�˿�0���ж��¼��Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_GPIO_0_Interrupt_Event_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���GPIO�˿�0���ж����μĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_GPIO_0_Interrupt_Mask_Register(void);

/*
	���ܣ�дGPIO�˿�0���ж����μĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_GPIO_0_Interrupt_Mask_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���GPIO�˿�0��ԭʼ�ж�״̬�Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_GPIO_0_Raw_Interrupt_Status_Register(void);

/*
	���ܣ���GPIO�˿�0�������ж�״̬�Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_GPIO_0_Masked_Interrupt_Status_Register(void);

/*
	���ܣ�дGPIO�˿�0���ж�����Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_GPIO_0_Interrupt_Clear_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���GPIO�˿�1�����ݼĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_GPIO_1_Data_Register(void);

/*
	���ܣ�дGPIO�˿�1�����ݼĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_GPIO_1_Data_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���GPIO�˿�1�����ݷ���Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_GPIO_1_Data_Direction_Register(void);

/*
	���ܣ�дGPIO�˿�1�����ݷ���Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_GPIO_1_Data_Direction_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���GPIO�˿�1���жϼ��Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_GPIO_1_Interrupt_Sense_Register(void);

/*
	���ܣ�дGPIO�˿�1���жϼ��Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_GPIO_1_Interrupt_Sense_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���GPIO�˿�1���ж�˫�ؼ��Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_GPIO_1_Interrupt_Both_Edge_Sense_Register(void);

/*
	���ܣ�дGPIO�˿�1���ж�˫�ؼ��Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_GPIO_1_Interrupt_Both_Edge_Sense_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���GPIO�˿�1���ж��¼��Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_GPIO_1_Interrupt_Event_Register(void);

/*
	���ܣ�дGPIO�˿�1���ж��¼��Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_GPIO_1_Interrupt_Event_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���GPIO�˿�1���ж����μĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_GPIO_1_Interrupt_Mask_Register(void);

/*
	���ܣ�дGPIO�˿�1���ж����μĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_GPIO_1_Interrupt_Mask_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���GPIO�˿�1��ԭʼ�ж�״̬�Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_GPIO_1_Raw_Interrupt_Status_Register(void);

/*
	���ܣ���GPIO�˿�1�������ж�״̬�Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_GPIO_1_Masked_Interrupt_Status_Register(void);

/*
	���ܣ�дGPIO�˿�1���ж�����Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_GPIO_1_Interrupt_Clear_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���GPIO�˿�2�����ݼĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_GPIO_2_Data_Register(void);

/*
	���ܣ�дGPIO�˿�2�����ݼĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_GPIO_2_Data_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���GPIO�˿�2�����ݷ���Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_GPIO_2_Data_Direction_Register(void);

/*
	���ܣ�дGPIO�˿�2�����ݷ���Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_GPIO_2_Data_Direction_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���GPIO�˿�2���жϼ��Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_GPIO_2_Interrupt_Sense_Register(void);

/*
	���ܣ�дGPIO�˿�2���жϼ��Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_GPIO_2_Interrupt_Sense_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���GPIO�˿�2���ж�˫�ؼ��Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_GPIO_2_Interrupt_Both_Edge_Sense_Register(void);

/*
	���ܣ�дGPIO�˿�2���ж�˫�ؼ��Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_GPIO_2_Interrupt_Both_Edge_Sense_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���GPIO�˿�2���ж��¼��Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_GPIO_2_Interrupt_Event_Register(void);

/*
	���ܣ�дGPIO�˿�2���ж��¼��Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_GPIO_2_Interrupt_Event_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���GPIO�˿�2���ж����μĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_GPIO_2_Interrupt_Mask_Register(void);

/*
	���ܣ�дGPIO�˿�2���ж����μĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_GPIO_2_Interrupt_Mask_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���GPIO�˿�2��ԭʼ�ж�״̬�Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_GPIO_2_Raw_Interrupt_Status_Register(void);

/*
	���ܣ���GPIO�˿�2�������ж�״̬�Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_GPIO_2_Masked_Interrupt_Status_Register(void);

/*
	���ܣ�дGPIO�˿�2���ж�����Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_GPIO_2_Interrupt_Clear_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���GPIO�˿�3�����ݼĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_GPIO_3_Data_Register(void);

/*
	���ܣ�дGPIO�˿�3�����ݼĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_GPIO_3_Data_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���GPIO�˿�3�����ݷ���Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_GPIO_3_Data_Direction_Register(void);

/*
	���ܣ�дGPIO�˿�3�����ݷ���Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_GPIO_3_Data_Direction_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���GPIO�˿�3���жϼ��Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_GPIO_3_Interrupt_Sense_Register(void);

/*
	���ܣ�дGPIO�˿�3���жϼ��Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_GPIO_3_Interrupt_Sense_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���GPIO�˿�3���ж�˫�ؼ��Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_GPIO_3_Interrupt_Both_Edge_Sense_Register(void);

/*
	���ܣ�дGPIO�˿�3���ж�˫�ؼ��Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_GPIO_3_Interrupt_Both_Edge_Sense_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���GPIO�˿�3���ж��¼��Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_GPIO_3_Interrupt_Event_Register(void);

/*
	���ܣ�дGPIO�˿�3���ж��¼��Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_GPIO_3_Interrupt_Event_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���GPIO�˿�3���ж����μĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_GPIO_3_Interrupt_Mask_Register(void);

/*
	���ܣ�дGPIO�˿�3���ж����μĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_GPIO_3_Interrupt_Mask_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���GPIO�˿�3��ԭʼ�ж�״̬�Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_GPIO_3_Raw_Interrupt_Status_Register(void);

/*
	���ܣ���GPIO�˿�3�������ж�״̬�Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_GPIO_3_Masked_Interrupt_Status_Register(void);

/*
	���ܣ�дGPIO�˿�3���ж�����Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_GPIO_3_Interrupt_Clear_Register(Integer_Unsigned_32_Bit Register_Value);

#endif
