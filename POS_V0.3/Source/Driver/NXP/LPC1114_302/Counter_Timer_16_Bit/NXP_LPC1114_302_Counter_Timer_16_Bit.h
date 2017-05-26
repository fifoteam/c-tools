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

#ifndef	NXP_LPC1114_302_COUNTER_TIMER_16_BIT_H
#define	NXP_LPC1114_302_COUNTER_TIMER_16_BIT_H

#include	"Base.h"

/* 数据类型 */

/* 16位计数器定时器0的中断寄存器内部 */
typedef	struct	Tag_Counter_Timer_16_Bit_0_Interrupt_Register_Internal
{
	Integer_Unsigned_32_Bit	Match_0_Interrupt_Flag : 1;
	Integer_Unsigned_32_Bit	Match_1_Interrupt_Flag : 1;
	Integer_Unsigned_32_Bit	Match_2_Interrupt_Flag : 1;
	Integer_Unsigned_32_Bit	Match_3_Interrupt_Flag : 1;
	Integer_Unsigned_32_Bit	Capture_Interrupt_Flag : 1;
}
	Structure_Counter_Timer_16_Bit_0_Interrupt_Register_Internal;

/* 16位计数器定时器0的中断寄存器 */
typedef	union	Tag_Counter_Timer_16_Bit_0_Interrupt_Register
{
	Integer_Unsigned_32_Bit											Value;
	Structure_Counter_Timer_16_Bit_0_Interrupt_Register_Internal	Internal;
}
	Union_Counter_Timer_16_Bit_0_Interrupt_Register;

/* 16位计数器定时器0的定时器控制寄存器内部 */
typedef	struct	Tag_Counter_Timer_16_Bit_0_Timer_Control_Register_Internal
{
	Integer_Unsigned_32_Bit	Counter_Enable : 1;
	Integer_Unsigned_32_Bit	Counter_Reset  : 1;
}
	Structure_Counter_Timer_16_Bit_0_Timer_Control_Register_Internal;

/* 16位计数器定时器0的定时器控制寄存器 */
typedef	union	Tag_Counter_Timer_16_Bit_0_Timer_Control_Register
{
	Integer_Unsigned_32_Bit												Value;
	Structure_Counter_Timer_16_Bit_0_Timer_Control_Register_Internal	Internal;
}
	Union_Counter_Timer_16_Bit_0_Timer_Control_Register;

/* 16位计数器定时器0的定时器计数器寄存器内部 */
typedef	struct	Tag_Counter_Timer_16_Bit_0_Timer_Counter_Register_Internal
{
	Integer_Unsigned_32_Bit	Counter_Value : 16;
}
	Structure_Counter_Timer_16_Bit_0_Timer_Counter_Register_Internal;

/* 16位计数器定时器0的定时器计数器寄存器 */
typedef	union	Tag_Counter_Timer_16_Bit_0_Timer_Counter_Register
{
	Integer_Unsigned_32_Bit												Value;
	Structure_Counter_Timer_16_Bit_0_Timer_Counter_Register_Internal	Internal;
}
	Union_Counter_Timer_16_Bit_0_Timer_Counter_Register;

/* 16位计数器定时器0的预分频寄存器内部 */
typedef	struct	Tag_Counter_Timer_16_Bit_0_Prescale_Register_Internal
{
	Integer_Unsigned_32_Bit	Prescale_Value : 16;
}
	Structure_Counter_Timer_16_Bit_0_Prescale_Register_Internal;

/* 16位计数器定时器0的预分频寄存器 */
typedef	union	Tag_Counter_Timer_16_Bit_0_Prescale_Register
{
	Integer_Unsigned_32_Bit										Value;
	Structure_Counter_Timer_16_Bit_0_Prescale_Register_Internal	Internal;
}
	Union_Counter_Timer_16_Bit_0_Prescale_Register;

/* 16位计数器定时器0的预分频计数器寄存器内部 */
typedef	struct	Tag_Counter_Timer_16_Bit_0_Prescale_Counter_Register_Internal
{
	Integer_Unsigned_32_Bit	Counter_Value : 16;
}
	Structure_Counter_Timer_16_Bit_0_Prescale_Counter_Register_Internal;

/* 16位计数器定时器0的预分频计数器寄存器 */
typedef	union	Tag_Counter_Timer_16_Bit_0_Prescale_Counter_Register
{
	Integer_Unsigned_32_Bit												Value;
	Structure_Counter_Timer_16_Bit_0_Prescale_Counter_Register_Internal	Internal;
}
	Union_Counter_Timer_16_Bit_0_Prescale_Counter_Register;

/* 16位计数器定时器0的匹配控制寄存器内部 */
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

/* 16位计数器定时器0的匹配控制寄存器 */
typedef	union	Tag_Counter_Timer_16_Bit_0_Match_Control_Register
{
	Integer_Unsigned_32_Bit												Value;
	Structure_Counter_Timer_16_Bit_0_Match_Control_Register_Internal	Internal;
}
	Union_Counter_Timer_16_Bit_0_Match_Control_Register;

/* 16位计数器定时器0的匹配寄存器0内部 */
typedef	struct	Tag_Counter_Timer_16_Bit_0_Match_Register_0_Internal
{
	Integer_Unsigned_32_Bit	Match_Value : 16;
}
	Structure_Counter_Timer_16_Bit_0_Match_Register_0_Internal;

/* 16位计数器定时器0的匹配寄存器0 */
typedef	union	Tag_Counter_Timer_16_Bit_0_Match_Register_0
{
	Integer_Unsigned_32_Bit										Value;
	Structure_Counter_Timer_16_Bit_0_Match_Register_0_Internal	Internal;
}
	Union_Counter_Timer_16_Bit_0_Match_Register_0;

/* 16位计数器定时器0的匹配寄存器1内部 */
typedef	struct	Tag_Counter_Timer_16_Bit_0_Match_Register_1_Internal
{
	Integer_Unsigned_32_Bit	Match_Value : 16;
}
	Structure_Counter_Timer_16_Bit_0_Match_Register_1_Internal;

/* 16位计数器定时器0的匹配寄存器1 */
typedef	union	Tag_Counter_Timer_16_Bit_0_Match_Register_1
{
	Integer_Unsigned_32_Bit										Value;
	Structure_Counter_Timer_16_Bit_0_Match_Register_1_Internal	Internal;
}
	Union_Counter_Timer_16_Bit_0_Match_Register_1;

/* 16位计数器定时器0的匹配寄存器2内部 */
typedef	struct	Tag_Counter_Timer_16_Bit_0_Match_Register_2_Internal
{
	Integer_Unsigned_32_Bit	Match_Value : 16;
}
	Structure_Counter_Timer_16_Bit_0_Match_Register_2_Internal;

/* 16位计数器定时器0的匹配寄存器2 */
typedef	union	Tag_Counter_Timer_16_Bit_0_Match_Register_2
{
	Integer_Unsigned_32_Bit										Value;
	Structure_Counter_Timer_16_Bit_0_Match_Register_2_Internal	Internal;
}
	Union_Counter_Timer_16_Bit_0_Match_Register_2;

/* 16位计数器定时器0的匹配寄存器3内部 */
typedef	struct	Tag_Counter_Timer_16_Bit_0_Match_Register_3_Internal
{
	Integer_Unsigned_32_Bit	Match_Value : 16;
}
	Structure_Counter_Timer_16_Bit_0_Match_Register_3_Internal;

/* 16位计数器定时器0的匹配寄存器3 */
typedef	union	Tag_Counter_Timer_16_Bit_0_Match_Register_3
{
	Integer_Unsigned_32_Bit										Value;
	Structure_Counter_Timer_16_Bit_0_Match_Register_3_Internal	Internal;
}
	Union_Counter_Timer_16_Bit_0_Match_Register_3;

/* 16位计数器定时器0的捕获控制寄存器内部 */
typedef	struct	Tag_Counter_Timer_16_Bit_0_Capture_Control_Register_Internal
{
	Integer_Unsigned_32_Bit	Capture_Rising_Edge		 : 1;
	Integer_Unsigned_32_Bit	Capture_Falling_Edge	 : 1;
	Integer_Unsigned_32_Bit	Capture_Interrupt_Enable : 1;
}
	Structure_Counter_Timer_16_Bit_0_Capture_Control_Register_Internal;

/* 16位计数器定时器0的捕获控制寄存器 */
typedef	union	Tag_Counter_Timer_16_Bit_0_Capture_Control_Register
{
	Integer_Unsigned_32_Bit												Value;
	Structure_Counter_Timer_16_Bit_0_Capture_Control_Register_Internal	Internal;
}
	Union_Counter_Timer_16_Bit_0_Capture_Control_Register;

/* 16位计数器定时器0的捕获寄存器内部 */
typedef	struct	Tag_Counter_Timer_16_Bit_0_Capture_Register_Internal
{
	Integer_Unsigned_32_Bit	Capture_Value : 16;
}
	Structure_Counter_Timer_16_Bit_0_Capture_Register_Internal;

/* 16位计数器定时器0的捕获寄存器 */
typedef	union	Tag_Counter_Timer_16_Bit_0_Capture_Register
{
	Integer_Unsigned_32_Bit										Value;
	Structure_Counter_Timer_16_Bit_0_Capture_Register_Internal	Internal;
}
	Union_Counter_Timer_16_Bit_0_Capture_Register;

/* 16位计数器定时器0的外部匹配寄存器内部 */
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

/* 16位计数器定时器0的外部匹配寄存器 */
typedef	union	Tag_Counter_Timer_16_Bit_0_External_Match_Register
{
	Integer_Unsigned_32_Bit												Value;
	Structure_Counter_Timer_16_Bit_0_External_Match_Register_Internal	Internal;
}
	Union_Counter_Timer_16_Bit_0_External_Match_Register;

/* 16位计数器定时器0的计数控制寄存器内部 */
typedef	struct	Tag_Counter_Timer_16_Bit_0_Count_Control_Register_Internal
{
	Integer_Unsigned_32_Bit	Counter_Timer_Mode : 2;
	Integer_Unsigned_32_Bit	Count_Input_Select : 2;
}
	Structure_Counter_Timer_16_Bit_0_Count_Control_Register_Internal;

/* 16位计数器定时器0的计数控制寄存器 */
typedef	union	Tag_Counter_Timer_16_Bit_0_Count_Control_Register
{
	Integer_Unsigned_32_Bit												Value;
	Structure_Counter_Timer_16_Bit_0_Count_Control_Register_Internal	Internal;
}
	Union_Counter_Timer_16_Bit_0_Count_Control_Register;

/* 16位计数器定时器0的脉冲宽度调制控制寄存器内部 */
typedef	struct	Tag_Counter_Timer_16_Bit_0_PWM_Control_Register_Internal
{
	Integer_Unsigned_32_Bit	PWM_0_Enable : 1;
	Integer_Unsigned_32_Bit	PWM_1_Enable : 1;
	Integer_Unsigned_32_Bit	PWM_2_Enable : 1;
	Integer_Unsigned_32_Bit	PWM_3_Enable : 1;
}
	Structure_Counter_Timer_16_Bit_0_PWM_Control_Register_Internal;

/* 16位计数器定时器0的脉冲宽度调制控制寄存器 */
typedef	union	Tag_Counter_Timer_16_Bit_0_PWM_Control_Register
{
	Integer_Unsigned_32_Bit											Value;
	Structure_Counter_Timer_16_Bit_0_PWM_Control_Register_Internal	Internal;
}
	Union_Counter_Timer_16_Bit_0_PWM_Control_Register;

/* 16位计数器定时器1的中断寄存器内部 */
typedef	struct	Tag_Counter_Timer_16_Bit_1_Interrupt_Register_Internal
{
	Integer_Unsigned_32_Bit	Match_0_Interrupt_Flag : 1;
	Integer_Unsigned_32_Bit	Match_1_Interrupt_Flag : 1;
	Integer_Unsigned_32_Bit	Match_2_Interrupt_Flag : 1;
	Integer_Unsigned_32_Bit	Match_3_Interrupt_Flag : 1;
	Integer_Unsigned_32_Bit	Capture_Interrupt_Flag : 1;
}
	Structure_Counter_Timer_16_Bit_1_Interrupt_Register_Internal;

/* 16位计数器定时器1的中断寄存器 */
typedef	union	Tag_Counter_Timer_16_Bit_1_Interrupt_Register
{
	Integer_Unsigned_32_Bit											Value;
	Structure_Counter_Timer_16_Bit_1_Interrupt_Register_Internal	Internal;
}
	Union_Counter_Timer_16_Bit_1_Interrupt_Register;

/* 16位计数器定时器1的定时器控制寄存器内部 */
typedef	struct	Tag_Counter_Timer_16_Bit_1_Timer_Control_Register_Internal
{
	Integer_Unsigned_32_Bit	Counter_Enable : 1;
	Integer_Unsigned_32_Bit	Counter_Reset  : 1;
}
	Structure_Counter_Timer_16_Bit_1_Timer_Control_Register_Internal;

/* 16位计数器定时器1的定时器控制寄存器 */
typedef	union	Tag_Counter_Timer_16_Bit_1_Timer_Control_Register
{
	Integer_Unsigned_32_Bit												Value;
	Structure_Counter_Timer_16_Bit_1_Timer_Control_Register_Internal	Internal;
}
	Union_Counter_Timer_16_Bit_1_Timer_Control_Register;

/* 16位计数器定时器1的定时器计数器寄存器内部 */
typedef	struct	Tag_Counter_Timer_16_Bit_1_Timer_Counter_Register_Internal
{
	Integer_Unsigned_32_Bit	Counter_Value : 16;
}
	Structure_Counter_Timer_16_Bit_1_Timer_Counter_Register_Internal;

/* 16位计数器定时器1的定时器计数器寄存器 */
typedef	union	Tag_Counter_Timer_16_Bit_1_Timer_Counter_Register
{
	Integer_Unsigned_32_Bit												Value;
	Structure_Counter_Timer_16_Bit_1_Timer_Counter_Register_Internal	Internal;
}
	Union_Counter_Timer_16_Bit_1_Timer_Counter_Register;

/* 16位计数器定时器1的预分频寄存器内部 */
typedef	struct	Tag_Counter_Timer_16_Bit_1_Prescale_Register_Internal
{
	Integer_Unsigned_32_Bit	Prescale_Value : 16;
}
	Structure_Counter_Timer_16_Bit_1_Prescale_Register_Internal;

/* 16位计数器定时器1的预分频寄存器 */
typedef	union	Tag_Counter_Timer_16_Bit_1_Prescale_Register
{
	Integer_Unsigned_32_Bit										Value;
	Structure_Counter_Timer_16_Bit_1_Prescale_Register_Internal	Internal;
}
	Union_Counter_Timer_16_Bit_1_Prescale_Register;

/* 16位计数器定时器1的预分频计数器寄存器内部 */
typedef	struct	Tag_Counter_Timer_16_Bit_1_Prescale_Counter_Register_Internal
{
	Integer_Unsigned_32_Bit	Counter_Value : 16;
}
	Structure_Counter_Timer_16_Bit_1_Prescale_Counter_Register_Internal;

/* 16位计数器定时器1的预分频计数器寄存器 */
typedef	union	Tag_Counter_Timer_16_Bit_1_Prescale_Counter_Register
{
	Integer_Unsigned_32_Bit												Value;
	Structure_Counter_Timer_16_Bit_1_Prescale_Counter_Register_Internal	Internal;
}
	Union_Counter_Timer_16_Bit_1_Prescale_Counter_Register;

/* 16位计数器定时器1的匹配控制寄存器内部 */
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

/* 16位计数器定时器1的匹配控制寄存器 */
typedef	union	Tag_Counter_Timer_16_Bit_1_Match_Control_Register
{
	Integer_Unsigned_32_Bit												Value;
	Structure_Counter_Timer_16_Bit_1_Match_Control_Register_Internal	Internal;
}
	Union_Counter_Timer_16_Bit_1_Match_Control_Register;

/* 16位计数器定时器1的匹配寄存器0内部 */
typedef	struct	Tag_Counter_Timer_16_Bit_1_Match_Register_0_Internal
{
	Integer_Unsigned_32_Bit	Match_Value : 16;
}
	Structure_Counter_Timer_16_Bit_1_Match_Register_0_Internal;

/* 16位计数器定时器1的匹配寄存器0 */
typedef	union	Tag_Counter_Timer_16_Bit_1_Match_Register_0
{
	Integer_Unsigned_32_Bit										Value;
	Structure_Counter_Timer_16_Bit_1_Match_Register_0_Internal	Internal;
}
	Union_Counter_Timer_16_Bit_1_Match_Register_0;

/* 16位计数器定时器1的匹配寄存器1内部 */
typedef	struct	Tag_Counter_Timer_16_Bit_1_Match_Register_1_Internal
{
	Integer_Unsigned_32_Bit	Match_Value : 16;
}
	Structure_Counter_Timer_16_Bit_1_Match_Register_1_Internal;

/* 16位计数器定时器1的匹配寄存器1 */
typedef	union	Tag_Counter_Timer_16_Bit_1_Match_Register_1
{
	Integer_Unsigned_32_Bit										Value;
	Structure_Counter_Timer_16_Bit_1_Match_Register_1_Internal	Internal;
}
	Union_Counter_Timer_16_Bit_1_Match_Register_1;

/* 16位计数器定时器1的匹配寄存器2内部 */
typedef	struct	Tag_Counter_Timer_16_Bit_1_Match_Register_2_Internal
{
	Integer_Unsigned_32_Bit	Match_Value : 16;
}
	Structure_Counter_Timer_16_Bit_1_Match_Register_2_Internal;

/* 16位计数器定时器1的匹配寄存器2 */
typedef	union	Tag_Counter_Timer_16_Bit_1_Match_Register_2
{
	Integer_Unsigned_32_Bit										Value;
	Structure_Counter_Timer_16_Bit_1_Match_Register_2_Internal	Internal;
}
	Union_Counter_Timer_16_Bit_1_Match_Register_2;

/* 16位计数器定时器1的匹配寄存器3内部 */
typedef	struct	Tag_Counter_Timer_16_Bit_1_Match_Register_3_Internal
{
	Integer_Unsigned_32_Bit	Match_Value : 16;
}
	Structure_Counter_Timer_16_Bit_1_Match_Register_3_Internal;

/* 16位计数器定时器1的匹配寄存器3 */
typedef	union	Tag_Counter_Timer_16_Bit_1_Match_Register_3
{
	Integer_Unsigned_32_Bit										Value;
	Structure_Counter_Timer_16_Bit_1_Match_Register_3_Internal	Internal;
}
	Union_Counter_Timer_16_Bit_1_Match_Register_3;

/* 16位计数器定时器1的捕获控制寄存器内部 */
typedef	struct	Tag_Counter_Timer_16_Bit_1_Capture_Control_Register_Internal
{
	Integer_Unsigned_32_Bit	Capture_Rising_Edge		 : 1;
	Integer_Unsigned_32_Bit	Capture_Falling_Edge	 : 1;
	Integer_Unsigned_32_Bit	Capture_Interrupt_Enable : 1;
}
	Structure_Counter_Timer_16_Bit_1_Capture_Control_Register_Internal;

/* 16位计数器定时器1的捕获控制寄存器 */
typedef	union	Tag_Counter_Timer_16_Bit_1_Capture_Control_Register
{
	Integer_Unsigned_32_Bit												Value;
	Structure_Counter_Timer_16_Bit_1_Capture_Control_Register_Internal	Internal;
}
	Union_Counter_Timer_16_Bit_1_Capture_Control_Register;

/* 16位计数器定时器1的捕获寄存器内部 */
typedef	struct	Tag_Counter_Timer_16_Bit_1_Capture_Register_Internal
{
	Integer_Unsigned_32_Bit	Capture_Value : 16;
}
	Structure_Counter_Timer_16_Bit_1_Capture_Register_Internal;

/* 16位计数器定时器1的捕获寄存器 */
typedef	union	Tag_Counter_Timer_16_Bit_1_Capture_Register
{
	Integer_Unsigned_32_Bit										Value;
	Structure_Counter_Timer_16_Bit_1_Capture_Register_Internal	Internal;
}
	Union_Counter_Timer_16_Bit_1_Capture_Register;

/* 16位计数器定时器1的外部匹配寄存器内部 */
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

/* 16位计数器定时器1的外部匹配寄存器 */
typedef	union	Tag_Counter_Timer_16_Bit_1_External_Match_Register
{
	Integer_Unsigned_32_Bit												Value;
	Structure_Counter_Timer_16_Bit_1_External_Match_Register_Internal	Internal;
}
	Union_Counter_Timer_16_Bit_1_External_Match_Register;

/* 16位计数器定时器1的计数控制寄存器内部 */
typedef	struct	Tag_Counter_Timer_16_Bit_1_Count_Control_Register_Internal
{
	Integer_Unsigned_32_Bit	Counter_Timer_Mode : 2;
	Integer_Unsigned_32_Bit	Count_Input_Select : 2;
}
	Structure_Counter_Timer_16_Bit_1_Count_Control_Register_Internal;

/* 16位计数器定时器1的计数控制寄存器 */
typedef	union	Tag_Counter_Timer_16_Bit_1_Count_Control_Register
{
	Integer_Unsigned_32_Bit												Value;
	Structure_Counter_Timer_16_Bit_1_Count_Control_Register_Internal	Internal;
}
	Union_Counter_Timer_16_Bit_1_Count_Control_Register;

/* 16位计数器定时器1的脉冲宽度调制控制寄存器内部 */
typedef	struct	Tag_Counter_Timer_16_Bit_1_PWM_Control_Register_Internal
{
	Integer_Unsigned_32_Bit	PWM_0_Enable : 1;
	Integer_Unsigned_32_Bit	PWM_1_Enable : 1;
	Integer_Unsigned_32_Bit	PWM_2_Enable : 1;
	Integer_Unsigned_32_Bit	PWM_3_Enable : 1;
}
	Structure_Counter_Timer_16_Bit_1_PWM_Control_Register_Internal;

/* 16位计数器定时器1的脉冲宽度调制控制寄存器 */
typedef	union	Tag_Counter_Timer_16_Bit_1_PWM_Control_Register
{
	Integer_Unsigned_32_Bit											Value;
	Structure_Counter_Timer_16_Bit_1_PWM_Control_Register_Internal	Internal;
}
	Union_Counter_Timer_16_Bit_1_PWM_Control_Register;

/* 函数声明 */

/*
	功能：读16位计数器定时器0的中断寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_Counter_Timer_16_Bit_0_Interrupt_Register(void);

/*
	功能：写16位计数器定时器0的中断寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_Counter_Timer_16_Bit_0_Interrupt_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读16位计数器定时器0的定时器控制寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_Counter_Timer_16_Bit_0_Timer_Control_Register(void);

/*
	功能：写16位计数器定时器0的定时器控制寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_Counter_Timer_16_Bit_0_Timer_Control_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读16位计数器定时器0的定时器计数器寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_Counter_Timer_16_Bit_0_Timer_Counter_Register(void);

/*
	功能：写16位计数器定时器0的定时器计数器寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_Counter_Timer_16_Bit_0_Timer_Counter_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读16位计数器定时器0的预分频寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_Counter_Timer_16_Bit_0_Prescale_Register(void);

/*
	功能：写16位计数器定时器0的预分频寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_Counter_Timer_16_Bit_0_Prescale_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读16位计数器定时器0的预分频计数器寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_Counter_Timer_16_Bit_0_Prescale_Counter_Register(void);

/*
	功能：写16位计数器定时器0的预分频计数器寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_Counter_Timer_16_Bit_0_Prescale_Counter_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读16位计数器定时器0的匹配控制寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_Counter_Timer_16_Bit_0_Match_Control_Register(void);

/*
	功能：写16位计数器定时器0的匹配控制寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_Counter_Timer_16_Bit_0_Match_Control_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读16位计数器定时器0的匹配寄存器0
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_Counter_Timer_16_Bit_0_Match_Register_0(void);

/*
	功能：写16位计数器定时器0的匹配寄存器0
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_Counter_Timer_16_Bit_0_Match_Register_0(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读16位计数器定时器0的匹配寄存器1
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_Counter_Timer_16_Bit_0_Match_Register_1(void);

/*
	功能：写16位计数器定时器0的匹配寄存器1
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_Counter_Timer_16_Bit_0_Match_Register_1(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读16位计数器定时器0的匹配寄存器2
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_Counter_Timer_16_Bit_0_Match_Register_2(void);

/*
	功能：写16位计数器定时器0的匹配寄存器2
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_Counter_Timer_16_Bit_0_Match_Register_2(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读16位计数器定时器0的匹配寄存器3
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_Counter_Timer_16_Bit_0_Match_Register_3(void);

/*
	功能：写16位计数器定时器0的匹配寄存器3
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_Counter_Timer_16_Bit_0_Match_Register_3(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读16位计数器定时器0的捕获控制寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_Counter_Timer_16_Bit_0_Capture_Control_Register(void);

/*
	功能：写16位计数器定时器0的捕获控制寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_Counter_Timer_16_Bit_0_Capture_Control_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读16位计数器定时器0的捕获寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_Counter_Timer_16_Bit_0_Capture_Register(void);

/*
	功能：读16位计数器定时器0的外部匹配寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_Counter_Timer_16_Bit_0_External_Match_Register(void);

/*
	功能：写16位计数器定时器0的外部匹配寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_Counter_Timer_16_Bit_0_External_Match_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读16位计数器定时器0的计数控制寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_Counter_Timer_16_Bit_0_Count_Control_Register(void);

/*
	功能：写16位计数器定时器0的计数控制寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_Counter_Timer_16_Bit_0_Count_Control_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读16位计数器定时器0的脉冲宽度调制控制寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_Counter_Timer_16_Bit_0_PWM_Control_Register(void);

/*
	功能：写16位计数器定时器0的脉冲宽度调制控制寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_Counter_Timer_16_Bit_0_PWM_Control_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读16位计数器定时器1的中断寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_Counter_Timer_16_Bit_1_Interrupt_Register(void);

/*
	功能：写16位计数器定时器1的中断寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_Counter_Timer_16_Bit_1_Interrupt_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读16位计数器定时器1的定时器控制寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_Counter_Timer_16_Bit_1_Timer_Control_Register(void);

/*
	功能：写16位计数器定时器1的定时器控制寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_Counter_Timer_16_Bit_1_Timer_Control_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读16位计数器定时器1的定时器计数器寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_Counter_Timer_16_Bit_1_Timer_Counter_Register(void);

/*
	功能：写16位计数器定时器1的定时器计数器寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_Counter_Timer_16_Bit_1_Timer_Counter_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读16位计数器定时器1的预分频寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_Counter_Timer_16_Bit_1_Prescale_Register(void);

/*
	功能：写16位计数器定时器1的预分频寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_Counter_Timer_16_Bit_1_Prescale_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读16位计数器定时器1的预分频计数器寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_Counter_Timer_16_Bit_1_Prescale_Counter_Register(void);

/*
	功能：写16位计数器定时器1的预分频计数器寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_Counter_Timer_16_Bit_1_Prescale_Counter_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读16位计数器定时器1的匹配控制寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_Counter_Timer_16_Bit_1_Match_Control_Register(void);

/*
	功能：写16位计数器定时器1的匹配控制寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_Counter_Timer_16_Bit_1_Match_Control_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读16位计数器定时器1的匹配寄存器0
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_Counter_Timer_16_Bit_1_Match_Register_0(void);

/*
	功能：写16位计数器定时器1的匹配寄存器0
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_Counter_Timer_16_Bit_1_Match_Register_0(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读16位计数器定时器1的匹配寄存器1
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_Counter_Timer_16_Bit_1_Match_Register_1(void);

/*
	功能：写16位计数器定时器1的匹配寄存器1
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_Counter_Timer_16_Bit_1_Match_Register_1(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读16位计数器定时器1的匹配寄存器2
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_Counter_Timer_16_Bit_1_Match_Register_2(void);

/*
	功能：写16位计数器定时器1的匹配寄存器2
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_Counter_Timer_16_Bit_1_Match_Register_2(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读16位计数器定时器1的匹配寄存器3
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_Counter_Timer_16_Bit_1_Match_Register_3(void);

/*
	功能：写16位计数器定时器1的匹配寄存器3
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_Counter_Timer_16_Bit_1_Match_Register_3(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读16位计数器定时器1的捕获控制寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_Counter_Timer_16_Bit_1_Capture_Control_Register(void);

/*
	功能：写16位计数器定时器1的捕获控制寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_Counter_Timer_16_Bit_1_Capture_Control_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读16位计数器定时器1的捕获寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_Counter_Timer_16_Bit_1_Capture_Register(void);

/*
	功能：读16位计数器定时器1的外部匹配寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_Counter_Timer_16_Bit_1_External_Match_Register(void);

/*
	功能：写16位计数器定时器1的外部匹配寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_Counter_Timer_16_Bit_1_External_Match_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读16位计数器定时器1的计数控制寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_Counter_Timer_16_Bit_1_Count_Control_Register(void);

/*
	功能：写16位计数器定时器1的计数控制寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_Counter_Timer_16_Bit_1_Count_Control_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读16位计数器定时器1的脉冲宽度调制控制寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_Counter_Timer_16_Bit_1_PWM_Control_Register(void);

/*
	功能：写16位计数器定时器1的脉冲宽度调制控制寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_Counter_Timer_16_Bit_1_PWM_Control_Register(Integer_Unsigned_32_Bit Register_Value);

#endif
