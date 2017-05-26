/*
	版权：2012 - 2014  吴彬（wubin_pos@163.com）
	
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

/* 数据类型	*/

/* GPIO端口0的数据寄存器内部 */
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

/* GPIO端口0的数据寄存器 */
typedef	union	Tag_GPIO_0_Data_Register
{
	Integer_Unsigned_32_Bit					Value;
	Strucrure_GPIO_0_Data_Register_Internal	Internal;
}
	Union_GPIO_0_Data_Register;

/* GPIO端口0的数据方向寄存器内部 */
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

/* GPIO端口0的数据方向寄存器 */
typedef	union	Tag_GPIO_0_Data_Direction_Register
{
	Integer_Unsigned_32_Bit								Value;
	Structure_GPIO_0_Data_Direction_Register_Internal	Internal;
}
	Union_GPIO_0_Data_Direction_Register;

/* GPIO端口0的中断检测寄存器内部 */
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

/* GPIO端口0的中断检测寄存器 */
typedef	union	Tag_GPIO_0_Interrupt_Sense_Register
{
	Integer_Unsigned_32_Bit								Value;
	Structure_GPIO_0_Interrupt_Sense_Register_Internal	Internal;
}
	Union_GPIO_0_Interrupt_Sense_Register;

/* GPIO端口0的中断双沿检测寄存器内部 */
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

/* GPIO端口0的中断双沿检测寄存器 */
typedef	union	Tag_GPIO_0_Interrupt_Both_Edge_Sense_Register
{
	Integer_Unsigned_32_Bit											Value;
	Structure_GPIO_0_Interrupt_Both_Edge_Sense_Register_Internal	Internal;
}
	Union_GPIO_0_Interrupt_Both_Edge_Sense_Register;

/* GPIO端口0的中断事件寄存器内部 */
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

/* GPIO端口0的中断事件寄存器 */
typedef	union	Tag_GPIO_0_Interrupt_Event_Register
{
	Integer_Unsigned_32_Bit								Value;
	Structure_GPIO_0_Interrupt_Event_Register_Internal	Internal;
}
	Union_GPIO_0_Interrupt_Event_Register;

/* GPIO端口0的中断屏蔽寄存器内部 */
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

/* GPIO端口0的中断屏蔽寄存器 */
typedef	union	Tag_GPIO_0_Interrupt_Mask_Register
{
	Integer_Unsigned_32_Bit								Value;
	Structure_GPIO_0_Interrupt_Mask_Register_Internal	Internal;
}
	Union_GPIO_0_Interrupt_Mask_Register;

/* GPIO端口0的原始中断状态寄存器内部 */
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

/* GPIO端口0的原始中断状态寄存器 */
typedef	union	Tag_GPIO_0_Raw_Interrupt_Status_Register
{
	Integer_Unsigned_32_Bit									Value;
	Structure_GPIO_0_Raw_Interrupt_Status_Register_Internal	Internal;
}
	Union_GPIO_0_Raw_Interrupt_Status_Register;

/* GPIO端口0的屏蔽中断状态寄存器内部 */
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

/* GPIO端口0的屏蔽中断状态寄存器 */
typedef	union	Tag_GPIO_0_Masked_Interrupt_Status_Register
{
	Integer_Unsigned_32_Bit										Value;
	Structure_GPIO_0_Masked_Interrupt_Status_Register_Internal	Internal;
}
	Union_GPIO_0_Masked_Interrupt_Status_Register;

/* GPIO端口0的中断清除寄存器内部 */
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

/* GPIO端口0的中断清除寄存器 */
typedef	union	Tag_GPIO_0_Interrupt_Clear_Register
{
	Integer_Unsigned_32_Bit								Value;
	Structure_GPIO_0_Interrupt_Clear_Register_Internal	Internal;
}
	Union_GPIO_0_Interrupt_Clear_Register;

/* GPIO端口1的数据寄存器内部 */
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

/* GPIO端口1的数据寄存器 */
typedef	union	Tag_GPIO_1_Data_Register
{
	Integer_Unsigned_32_Bit					Value;
	Strucrure_GPIO_1_Data_Register_Internal	Internal;
}
	Union_GPIO_1_Data_Register;

/* GPIO端口1的数据方向寄存器内部 */
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

/* GPIO端口1的数据方向寄存器 */
typedef	union	Tag_GPIO_1_Data_Direction_Register
{
	Integer_Unsigned_32_Bit								Value;
	Structure_GPIO_1_Data_Direction_Register_Internal	Internal;
}
	Union_GPIO_1_Data_Direction_Register;

/* GPIO端口1的中断检测寄存器内部 */
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

/* GPIO端口1的中断检测寄存器 */
typedef	union	Tag_GPIO_1_Interrupt_Sense_Register
{
	Integer_Unsigned_32_Bit								Value;
	Structure_GPIO_1_Interrupt_Sense_Register_Internal	Internal;
}
	Union_GPIO_1_Interrupt_Sense_Register;

/* GPIO端口1的中断双沿检测寄存器内部 */
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

/* GPIO端口1的中断双沿检测寄存器 */
typedef	union	Tag_GPIO_1_Interrupt_Both_Edge_Sense_Register
{
	Integer_Unsigned_32_Bit											Value;
	Structure_GPIO_1_Interrupt_Both_Edge_Sense_Register_Internal	Internal;
}
	Union_GPIO_1_Interrupt_Both_Edge_Sense_Register;

/* GPIO端口1的中断事件寄存器内部 */
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

/* GPIO端口1的中断事件寄存器 */
typedef	union	Tag_GPIO_1_Interrupt_Event_Register
{
	Integer_Unsigned_32_Bit								Value;
	Structure_GPIO_1_Interrupt_Event_Register_Internal	Internal;
}
	Union_GPIO_1_Interrupt_Event_Register;

/* GPIO端口1的中断屏蔽寄存器内部 */
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

/* GPIO端口1的中断屏蔽寄存器 */
typedef	union	Tag_GPIO_1_Interrupt_Mask_Register
{
	Integer_Unsigned_32_Bit								Value;
	Structure_GPIO_1_Interrupt_Mask_Register_Internal	Internal;
}
	Union_GPIO_1_Interrupt_Mask_Register;

/* GPIO端口1的原始中断状态寄存器内部 */
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

/* GPIO端口1的原始中断状态寄存器 */
typedef	union	Tag_GPIO_1_Raw_Interrupt_Status_Register
{
	Integer_Unsigned_32_Bit									Value;
	Structure_GPIO_1_Raw_Interrupt_Status_Register_Internal	Internal;
}
	Union_GPIO_1_Raw_Interrupt_Status_Register;

/* GPIO端口1的屏蔽中断状态寄存器内部 */
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

/* GPIO端口1的屏蔽中断状态寄存器 */
typedef	union	Tag_GPIO_1_Masked_Interrupt_Status_Register
{
	Integer_Unsigned_32_Bit										Value;
	Structure_GPIO_1_Masked_Interrupt_Status_Register_Internal	Internal;
}
	Union_GPIO_1_Masked_Interrupt_Status_Register;

/* GPIO端口1的中断清除寄存器内部 */
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

/* GPIO端口1的中断清除寄存器 */
typedef	union	Tag_GPIO_1_Interrupt_Clear_Register
{
	Integer_Unsigned_32_Bit								Value;
	Structure_GPIO_1_Interrupt_Clear_Register_Internal	Internal;
}
	Union_GPIO_1_Interrupt_Clear_Register;

/* GPIO端口2的数据寄存器内部 */
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

/* GPIO端口2的数据寄存器 */
typedef	union	Tag_GPIO_2_Data_Register
{
	Integer_Unsigned_32_Bit					Value;
	Strucrure_GPIO_2_Data_Register_Internal	Internal;
}
	Union_GPIO_2_Data_Register;

/* GPIO端口2的数据方向寄存器内部 */
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

/* GPIO端口2的数据方向寄存器 */
typedef	union	Tag_GPIO_2_Data_Direction_Register
{
	Integer_Unsigned_32_Bit								Value;
	Structure_GPIO_2_Data_Direction_Register_Internal	Internal;
}
	Union_GPIO_2_Data_Direction_Register;

/* GPIO端口2的中断检测寄存器内部 */
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

/* GPIO端口2的中断检测寄存器 */
typedef	union	Tag_GPIO_2_Interrupt_Sense_Register
{
	Integer_Unsigned_32_Bit								Value;
	Structure_GPIO_2_Interrupt_Sense_Register_Internal	Internal;
}
	Union_GPIO_2_Interrupt_Sense_Register;

/* GPIO端口2的中断双沿检测寄存器内部 */
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

/* GPIO端口2的中断双沿检测寄存器 */
typedef	union	Tag_GPIO_2_Interrupt_Both_Edge_Sense_Register
{
	Integer_Unsigned_32_Bit											Value;
	Structure_GPIO_2_Interrupt_Both_Edge_Sense_Register_Internal	Internal;
}
	Union_GPIO_2_Interrupt_Both_Edge_Sense_Register;

/* GPIO端口2的中断事件寄存器内部 */
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

/* GPIO端口2的中断事件寄存器 */
typedef	union	Tag_GPIO_2_Interrupt_Event_Register
{
	Integer_Unsigned_32_Bit								Value;
	Structure_GPIO_2_Interrupt_Event_Register_Internal	Internal;
}
	Union_GPIO_2_Interrupt_Event_Register;

/* GPIO端口2的中断屏蔽寄存器内部 */
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

/* GPIO端口2的中断屏蔽寄存器 */
typedef	union	Tag_GPIO_2_Interrupt_Mask_Register
{
	Integer_Unsigned_32_Bit								Value;
	Structure_GPIO_2_Interrupt_Mask_Register_Internal	Internal;
}
	Union_GPIO_2_Interrupt_Mask_Register;

/* GPIO端口2的原始中断状态寄存器内部 */
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

/* GPIO端口2的原始中断状态寄存器 */
typedef	union	Tag_GPIO_2_Raw_Interrupt_Status_Register
{
	Integer_Unsigned_32_Bit									Value;
	Structure_GPIO_2_Raw_Interrupt_Status_Register_Internal	Internal;
}
	Union_GPIO_2_Raw_Interrupt_Status_Register;

/* GPIO端口2的屏蔽中断状态寄存器内部 */
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

/* GPIO端口2的屏蔽中断状态寄存器 */
typedef	union	Tag_GPIO_2_Masked_Interrupt_Status_Register
{
	Integer_Unsigned_32_Bit										Value;
	Structure_GPIO_2_Masked_Interrupt_Status_Register_Internal	Internal;
}
	Union_GPIO_2_Masked_Interrupt_Status_Register;

/* GPIO端口2的中断清除寄存器内部 */
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

/* GPIO端口2的中断清除寄存器 */
typedef	union	Tag_GPIO_2_Interrupt_Clear_Register
{
	Integer_Unsigned_32_Bit								Value;
	Structure_GPIO_2_Interrupt_Clear_Register_Internal	Internal;
}
	Union_GPIO_2_Interrupt_Clear_Register;

/* GPIO端口3的数据寄存器内部 */
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

/* GPIO端口3的数据寄存器 */
typedef	union	Tag_GPIO_3_Data_Register
{
	Integer_Unsigned_32_Bit					Value;
	Strucrure_GPIO_3_Data_Register_Internal	Internal;
}
	Union_GPIO_3_Data_Register;

/* GPIO端口3的数据方向寄存器内部 */
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

/* GPIO端口3的数据方向寄存器 */
typedef	union	Tag_GPIO_3_Data_Direction_Register
{
	Integer_Unsigned_32_Bit								Value;
	Structure_GPIO_3_Data_Direction_Register_Internal	Internal;
}
	Union_GPIO_3_Data_Direction_Register;

/* GPIO端口3的中断检测寄存器内部 */
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

/* GPIO端口3的中断检测寄存器 */
typedef	union	Tag_GPIO_3_Interrupt_Sense_Register
{
	Integer_Unsigned_32_Bit								Value;
	Structure_GPIO_3_Interrupt_Sense_Register_Internal	Internal;
}
	Union_GPIO_3_Interrupt_Sense_Register;

/* GPIO端口3的中断双沿检测寄存器内部 */
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

/* GPIO端口3的中断双沿检测寄存器 */
typedef	union	Tag_GPIO_3_Interrupt_Both_Edge_Sense_Register
{
	Integer_Unsigned_32_Bit											Value;
	Structure_GPIO_3_Interrupt_Both_Edge_Sense_Register_Internal	Internal;
}
	Union_GPIO_3_Interrupt_Both_Edge_Sense_Register;

/* GPIO端口3的中断事件寄存器内部 */
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

/* GPIO端口3的中断事件寄存器 */
typedef	union	Tag_GPIO_3_Interrupt_Event_Register
{
	Integer_Unsigned_32_Bit								Value;
	Structure_GPIO_3_Interrupt_Event_Register_Internal	Internal;
}
	Union_GPIO_3_Interrupt_Event_Register;

/* GPIO端口3的中断屏蔽寄存器内部 */
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

/* GPIO端口3的中断屏蔽寄存器 */
typedef	union	Tag_GPIO_3_Interrupt_Mask_Register
{
	Integer_Unsigned_32_Bit								Value;
	Structure_GPIO_3_Interrupt_Mask_Register_Internal	Internal;
}
	Union_GPIO_3_Interrupt_Mask_Register;

/* GPIO端口3的原始中断状态寄存器内部 */
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

/* GPIO端口3的原始中断状态寄存器 */
typedef	union	Tag_GPIO_3_Raw_Interrupt_Status_Register
{
	Integer_Unsigned_32_Bit									Value;
	Structure_GPIO_3_Raw_Interrupt_Status_Register_Internal	Internal;
}
	Union_GPIO_3_Raw_Interrupt_Status_Register;

/* GPIO端口3的屏蔽中断状态寄存器内部 */
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

/* GPIO端口3的屏蔽中断状态寄存器 */
typedef	union	Tag_GPIO_3_Masked_Interrupt_Status_Register
{
	Integer_Unsigned_32_Bit										Value;
	Structure_GPIO_3_Masked_Interrupt_Status_Register_Internal	Internal;
}
	Union_GPIO_3_Masked_Interrupt_Status_Register;

/* GPIO端口3的中断清除寄存器内部 */
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

/* GPIO端口3的中断清除寄存器 */
typedef	union	Tag_GPIO_3_Interrupt_Clear_Register
{
	Integer_Unsigned_32_Bit								Value;
	Structure_GPIO_3_Interrupt_Clear_Register_Internal	Internal;
}
	Union_GPIO_3_Interrupt_Clear_Register;

/* 函数声明	*/

/*
	功能：读GPIO端口0的数据寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_GPIO_0_Data_Register(void);

/*
	功能：写GPIO端口0的数据寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_GPIO_0_Data_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读GPIO端口0的数据方向寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_GPIO_0_Data_Direction_Register(void);

/*
	功能：写GPIO端口0的数据方向寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_GPIO_0_Data_Direction_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读GPIO端口0的中断检测寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_GPIO_0_Interrupt_Sense_Register(void);

/*
	功能：写GPIO端口0的中断检测寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_GPIO_0_Interrupt_Sense_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读GPIO端口0的中断双沿检测寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_GPIO_0_Interrupt_Both_Edge_Sense_Register(void);

/*
	功能：写GPIO端口0的中断双沿检测寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_GPIO_0_Interrupt_Both_Edge_Sense_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读GPIO端口0的中断事件寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_GPIO_0_Interrupt_Event_Register(void);

/*
	功能：写GPIO端口0的中断事件寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_GPIO_0_Interrupt_Event_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读GPIO端口0的中断屏蔽寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_GPIO_0_Interrupt_Mask_Register(void);

/*
	功能：写GPIO端口0的中断屏蔽寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_GPIO_0_Interrupt_Mask_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读GPIO端口0的原始中断状态寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_GPIO_0_Raw_Interrupt_Status_Register(void);

/*
	功能：读GPIO端口0的屏蔽中断状态寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_GPIO_0_Masked_Interrupt_Status_Register(void);

/*
	功能：写GPIO端口0的中断清除寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_GPIO_0_Interrupt_Clear_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读GPIO端口1的数据寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_GPIO_1_Data_Register(void);

/*
	功能：写GPIO端口1的数据寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_GPIO_1_Data_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读GPIO端口1的数据方向寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_GPIO_1_Data_Direction_Register(void);

/*
	功能：写GPIO端口1的数据方向寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_GPIO_1_Data_Direction_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读GPIO端口1的中断检测寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_GPIO_1_Interrupt_Sense_Register(void);

/*
	功能：写GPIO端口1的中断检测寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_GPIO_1_Interrupt_Sense_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读GPIO端口1的中断双沿检测寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_GPIO_1_Interrupt_Both_Edge_Sense_Register(void);

/*
	功能：写GPIO端口1的中断双沿检测寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_GPIO_1_Interrupt_Both_Edge_Sense_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读GPIO端口1的中断事件寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_GPIO_1_Interrupt_Event_Register(void);

/*
	功能：写GPIO端口1的中断事件寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_GPIO_1_Interrupt_Event_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读GPIO端口1的中断屏蔽寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_GPIO_1_Interrupt_Mask_Register(void);

/*
	功能：写GPIO端口1的中断屏蔽寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_GPIO_1_Interrupt_Mask_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读GPIO端口1的原始中断状态寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_GPIO_1_Raw_Interrupt_Status_Register(void);

/*
	功能：读GPIO端口1的屏蔽中断状态寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_GPIO_1_Masked_Interrupt_Status_Register(void);

/*
	功能：写GPIO端口1的中断清除寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_GPIO_1_Interrupt_Clear_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读GPIO端口2的数据寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_GPIO_2_Data_Register(void);

/*
	功能：写GPIO端口2的数据寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_GPIO_2_Data_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读GPIO端口2的数据方向寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_GPIO_2_Data_Direction_Register(void);

/*
	功能：写GPIO端口2的数据方向寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_GPIO_2_Data_Direction_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读GPIO端口2的中断检测寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_GPIO_2_Interrupt_Sense_Register(void);

/*
	功能：写GPIO端口2的中断检测寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_GPIO_2_Interrupt_Sense_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读GPIO端口2的中断双沿检测寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_GPIO_2_Interrupt_Both_Edge_Sense_Register(void);

/*
	功能：写GPIO端口2的中断双沿检测寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_GPIO_2_Interrupt_Both_Edge_Sense_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读GPIO端口2的中断事件寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_GPIO_2_Interrupt_Event_Register(void);

/*
	功能：写GPIO端口2的中断事件寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_GPIO_2_Interrupt_Event_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读GPIO端口2的中断屏蔽寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_GPIO_2_Interrupt_Mask_Register(void);

/*
	功能：写GPIO端口2的中断屏蔽寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_GPIO_2_Interrupt_Mask_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读GPIO端口2的原始中断状态寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_GPIO_2_Raw_Interrupt_Status_Register(void);

/*
	功能：读GPIO端口2的屏蔽中断状态寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_GPIO_2_Masked_Interrupt_Status_Register(void);

/*
	功能：写GPIO端口2的中断清除寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_GPIO_2_Interrupt_Clear_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读GPIO端口3的数据寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_GPIO_3_Data_Register(void);

/*
	功能：写GPIO端口3的数据寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_GPIO_3_Data_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读GPIO端口3的数据方向寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_GPIO_3_Data_Direction_Register(void);

/*
	功能：写GPIO端口3的数据方向寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_GPIO_3_Data_Direction_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读GPIO端口3的中断检测寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_GPIO_3_Interrupt_Sense_Register(void);

/*
	功能：写GPIO端口3的中断检测寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_GPIO_3_Interrupt_Sense_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读GPIO端口3的中断双沿检测寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_GPIO_3_Interrupt_Both_Edge_Sense_Register(void);

/*
	功能：写GPIO端口3的中断双沿检测寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_GPIO_3_Interrupt_Both_Edge_Sense_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读GPIO端口3的中断事件寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_GPIO_3_Interrupt_Event_Register(void);

/*
	功能：写GPIO端口3的中断事件寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_GPIO_3_Interrupt_Event_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读GPIO端口3的中断屏蔽寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_GPIO_3_Interrupt_Mask_Register(void);

/*
	功能：写GPIO端口3的中断屏蔽寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_GPIO_3_Interrupt_Mask_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读GPIO端口3的原始中断状态寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_GPIO_3_Raw_Interrupt_Status_Register(void);

/*
	功能：读GPIO端口3的屏蔽中断状态寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_GPIO_3_Masked_Interrupt_Status_Register(void);

/*
	功能：写GPIO端口3的中断清除寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_GPIO_3_Interrupt_Clear_Register(Integer_Unsigned_32_Bit Register_Value);

#endif
