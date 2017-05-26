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

#include	"NXP_LPC1114_302_Counter_Timer_16_Bit.h"

/* 数据定义 */

/* 16位计数器定时器0的寄存器地址 */
const Integer_Unsigned_32_Bit	Counter_Timer_16_Bit_0_Interrupt_Register_Address		 = 0x4000C000;
const Integer_Unsigned_32_Bit	Counter_Timer_16_Bit_0_Timer_Control_Register_Address	 = 0x4000C004;
const Integer_Unsigned_32_Bit	Counter_Timer_16_Bit_0_Timer_Counter_Register_Address	 = 0x4000C008;
const Integer_Unsigned_32_Bit	Counter_Timer_16_Bit_0_Prescale_Register_Address		 = 0x4000C00C;
const Integer_Unsigned_32_Bit	Counter_Timer_16_Bit_0_Prescale_Counter_Register_Address = 0x4000C010;
const Integer_Unsigned_32_Bit	Counter_Timer_16_Bit_0_Match_Control_Register_Address	 = 0x4000C014;
const Integer_Unsigned_32_Bit	Counter_Timer_16_Bit_0_Match_Register_0_Address			 = 0x4000C018;
const Integer_Unsigned_32_Bit	Counter_Timer_16_Bit_0_Match_Register_1_Address			 = 0x4000C01C;
const Integer_Unsigned_32_Bit	Counter_Timer_16_Bit_0_Match_Register_2_Address			 = 0x4000C020;
const Integer_Unsigned_32_Bit	Counter_Timer_16_Bit_0_Match_Register_3_Address			 = 0x4000C024;
const Integer_Unsigned_32_Bit	Counter_Timer_16_Bit_0_Capture_Control_Register_Address	 = 0x4000C028;
const Integer_Unsigned_32_Bit	Counter_Timer_16_Bit_0_Capture_Register_Address			 = 0x4000C02C;
const Integer_Unsigned_32_Bit	Counter_Timer_16_Bit_0_External_Match_Register_Address	 = 0x4000C03C;
const Integer_Unsigned_32_Bit	Counter_Timer_16_Bit_0_Count_Control_Register_Address	 = 0x4000C070;
const Integer_Unsigned_32_Bit	Counter_Timer_16_Bit_0_PWM_Control_Register_Address		 = 0x4000C074;

/* 16位计数器定时器1的寄存器地址 */
const Integer_Unsigned_32_Bit	Counter_Timer_16_Bit_1_Interrupt_Register_Address		 = 0x40010000;
const Integer_Unsigned_32_Bit	Counter_Timer_16_Bit_1_Timer_Control_Register_Address	 = 0x40010004;
const Integer_Unsigned_32_Bit	Counter_Timer_16_Bit_1_Timer_Counter_Register_Address	 = 0x40010008;
const Integer_Unsigned_32_Bit	Counter_Timer_16_Bit_1_Prescale_Register_Address		 = 0x4001000C;
const Integer_Unsigned_32_Bit	Counter_Timer_16_Bit_1_Prescale_Counter_Register_Address = 0x40010010;
const Integer_Unsigned_32_Bit	Counter_Timer_16_Bit_1_Match_Control_Register_Address	 = 0x40010014;
const Integer_Unsigned_32_Bit	Counter_Timer_16_Bit_1_Match_Register_0_Address			 = 0x40010018;
const Integer_Unsigned_32_Bit	Counter_Timer_16_Bit_1_Match_Register_1_Address			 = 0x4001001C;
const Integer_Unsigned_32_Bit	Counter_Timer_16_Bit_1_Match_Register_2_Address			 = 0x40010020;
const Integer_Unsigned_32_Bit	Counter_Timer_16_Bit_1_Match_Register_3_Address			 = 0x40010024;
const Integer_Unsigned_32_Bit	Counter_Timer_16_Bit_1_Capture_Control_Register_Address	 = 0x40010028;
const Integer_Unsigned_32_Bit	Counter_Timer_16_Bit_1_Capture_Register_Address			 = 0x4001002C;
const Integer_Unsigned_32_Bit	Counter_Timer_16_Bit_1_External_Match_Register_Address	 = 0x4001003C;
const Integer_Unsigned_32_Bit	Counter_Timer_16_Bit_1_Count_Control_Register_Address	 = 0x40010070;
const Integer_Unsigned_32_Bit	Counter_Timer_16_Bit_1_PWM_Control_Register_Address		 = 0x40010074;

/* 函数定义 */

/*
	功能：读16位计数器定时器0的中断寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_Counter_Timer_16_Bit_0_Interrupt_Register(void)
{
	return Read_Register_32_Bit(Counter_Timer_16_Bit_0_Interrupt_Register_Address);
}

/*
	功能：写16位计数器定时器0的中断寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_Counter_Timer_16_Bit_0_Interrupt_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(Counter_Timer_16_Bit_0_Interrupt_Register_Address, Register_Value);
}

/*
	功能：读16位计数器定时器0的定时器控制寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_Counter_Timer_16_Bit_0_Timer_Control_Register(void)
{
	return Read_Register_32_Bit(Counter_Timer_16_Bit_0_Timer_Control_Register_Address);
}

/*
	功能：写16位计数器定时器0的定时器控制寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_Counter_Timer_16_Bit_0_Timer_Control_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(Counter_Timer_16_Bit_0_Timer_Control_Register_Address, Register_Value);
}

/*
	功能：读16位计数器定时器0的定时器计数器寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_Counter_Timer_16_Bit_0_Timer_Counter_Register(void)
{
	return Read_Register_32_Bit(Counter_Timer_16_Bit_0_Timer_Counter_Register_Address);
}

/*
	功能：写16位计数器定时器0的定时器计数器寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_Counter_Timer_16_Bit_0_Timer_Counter_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(Counter_Timer_16_Bit_0_Timer_Counter_Register_Address, Register_Value);
}

/*
	功能：读16位计数器定时器0的预分频寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_Counter_Timer_16_Bit_0_Prescale_Register(void)
{
	return Read_Register_32_Bit(Counter_Timer_16_Bit_0_Prescale_Register_Address);
}

/*
	功能：写16位计数器定时器0的预分频寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_Counter_Timer_16_Bit_0_Prescale_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(Counter_Timer_16_Bit_0_Prescale_Register_Address, Register_Value);
}

/*
	功能：读16位计数器定时器0的预分频计数器寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_Counter_Timer_16_Bit_0_Prescale_Counter_Register(void)
{
	return Read_Register_32_Bit(Counter_Timer_16_Bit_0_Prescale_Counter_Register_Address);
}

/*
	功能：写16位计数器定时器0的预分频计数器寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_Counter_Timer_16_Bit_0_Prescale_Counter_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(Counter_Timer_16_Bit_0_Prescale_Counter_Register_Address, Register_Value);
}

/*
	功能：读16位计数器定时器0的匹配控制寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_Counter_Timer_16_Bit_0_Match_Control_Register(void)
{
	return Read_Register_32_Bit(Counter_Timer_16_Bit_0_Match_Control_Register_Address);
}

/*
	功能：写16位计数器定时器0的匹配控制寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_Counter_Timer_16_Bit_0_Match_Control_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(Counter_Timer_16_Bit_0_Match_Control_Register_Address, Register_Value);
}

/*
	功能：读16位计数器定时器0的匹配寄存器0
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_Counter_Timer_16_Bit_0_Match_Register_0(void)
{
	return Read_Register_32_Bit(Counter_Timer_16_Bit_0_Match_Register_0_Address);
}

/*
	功能：写16位计数器定时器0的匹配寄存器0
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_Counter_Timer_16_Bit_0_Match_Register_0(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(Counter_Timer_16_Bit_0_Match_Register_0_Address, Register_Value);
}

/*
	功能：读16位计数器定时器0的匹配寄存器1
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_Counter_Timer_16_Bit_0_Match_Register_1(void)
{
	return Read_Register_32_Bit(Counter_Timer_16_Bit_0_Match_Register_1_Address);
}

/*
	功能：写16位计数器定时器0的匹配寄存器1
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_Counter_Timer_16_Bit_0_Match_Register_1(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(Counter_Timer_16_Bit_0_Match_Register_1_Address, Register_Value);
}

/*
	功能：读16位计数器定时器0的匹配寄存器2
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_Counter_Timer_16_Bit_0_Match_Register_2(void)
{
	return Read_Register_32_Bit(Counter_Timer_16_Bit_0_Match_Register_2_Address);
}

/*
	功能：写16位计数器定时器0的匹配寄存器2
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_Counter_Timer_16_Bit_0_Match_Register_2(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(Counter_Timer_16_Bit_0_Match_Register_2_Address, Register_Value);
}

/*
	功能：读16位计数器定时器0的匹配寄存器3
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_Counter_Timer_16_Bit_0_Match_Register_3(void)
{
	return Read_Register_32_Bit(Counter_Timer_16_Bit_0_Match_Register_3_Address);
}

/*
	功能：写16位计数器定时器0的匹配寄存器3
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_Counter_Timer_16_Bit_0_Match_Register_3(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(Counter_Timer_16_Bit_0_Match_Register_3_Address, Register_Value);
}

/*
	功能：读16位计数器定时器0的捕获控制寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_Counter_Timer_16_Bit_0_Capture_Control_Register(void)
{
	return Read_Register_32_Bit(Counter_Timer_16_Bit_0_Capture_Control_Register_Address);
}

/*
	功能：写16位计数器定时器0的捕获控制寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_Counter_Timer_16_Bit_0_Capture_Control_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(Counter_Timer_16_Bit_0_Capture_Control_Register_Address, Register_Value);
}

/*
	功能：读16位计数器定时器0的捕获寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_Counter_Timer_16_Bit_0_Capture_Register(void)
{
	return Read_Register_32_Bit(Counter_Timer_16_Bit_0_Capture_Register_Address);
}

/*
	功能：写16位计数器定时器0的捕获寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_Counter_Timer_16_Bit_0_Capture_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(Counter_Timer_16_Bit_0_Capture_Register_Address, Register_Value);
}

/*
	功能：读16位计数器定时器0的外部匹配寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_Counter_Timer_16_Bit_0_External_Match_Register(void)
{
	return Read_Register_32_Bit(Counter_Timer_16_Bit_0_External_Match_Register_Address);
}

/*
	功能：写16位计数器定时器0的外部匹配寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_Counter_Timer_16_Bit_0_External_Match_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(Counter_Timer_16_Bit_0_External_Match_Register_Address, Register_Value);
}

/*
	功能：读16位计数器定时器0的计数控制寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_Counter_Timer_16_Bit_0_Count_Control_Register(void)
{
	return Read_Register_32_Bit(Counter_Timer_16_Bit_0_Count_Control_Register_Address);
}

/*
	功能：写16位计数器定时器0的计数控制寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_Counter_Timer_16_Bit_0_Count_Control_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(Counter_Timer_16_Bit_0_Count_Control_Register_Address, Register_Value);
}

/*
	功能：读16位计数器定时器0的脉冲宽度调制控制寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_Counter_Timer_16_Bit_0_PWM_Control_Register(void)
{
	return Read_Register_32_Bit(Counter_Timer_16_Bit_0_PWM_Control_Register_Address);
}

/*
	功能：写16位计数器定时器0的脉冲宽度调制控制寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_Counter_Timer_16_Bit_0_PWM_Control_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(Counter_Timer_16_Bit_0_PWM_Control_Register_Address, Register_Value);
}

/*
	功能：读16位计数器定时器1的中断寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_Counter_Timer_16_Bit_1_Interrupt_Register(void)
{
	return Read_Register_32_Bit(Counter_Timer_16_Bit_1_Interrupt_Register_Address);
}

/*
	功能：写16位计数器定时器1的中断寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_Counter_Timer_16_Bit_1_Interrupt_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(Counter_Timer_16_Bit_1_Interrupt_Register_Address, Register_Value);
}

/*
	功能：读16位计数器定时器1的定时器控制寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_Counter_Timer_16_Bit_1_Timer_Control_Register(void)
{
	return Read_Register_32_Bit(Counter_Timer_16_Bit_1_Timer_Control_Register_Address);
}

/*
	功能：写16位计数器定时器1的定时器控制寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_Counter_Timer_16_Bit_1_Timer_Control_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(Counter_Timer_16_Bit_1_Timer_Control_Register_Address, Register_Value);
}

/*
	功能：读16位计数器定时器1的定时器计数器寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_Counter_Timer_16_Bit_1_Timer_Counter_Register(void)
{
	return Read_Register_32_Bit(Counter_Timer_16_Bit_1_Timer_Counter_Register_Address);
}

/*
	功能：写16位计数器定时器1的定时器计数器寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_Counter_Timer_16_Bit_1_Timer_Counter_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(Counter_Timer_16_Bit_1_Timer_Counter_Register_Address, Register_Value);
}

/*
	功能：读16位计数器定时器1的预分频寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_Counter_Timer_16_Bit_1_Prescale_Register(void)
{
	return Read_Register_32_Bit(Counter_Timer_16_Bit_1_Prescale_Register_Address);
}

/*
	功能：写16位计数器定时器1的预分频寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_Counter_Timer_16_Bit_1_Prescale_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(Counter_Timer_16_Bit_1_Prescale_Register_Address, Register_Value);
}

/*
	功能：读16位计数器定时器1的预分频计数器寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_Counter_Timer_16_Bit_1_Prescale_Counter_Register(void)
{
	return Read_Register_32_Bit(Counter_Timer_16_Bit_1_Prescale_Counter_Register_Address);
}

/*
	功能：写16位计数器定时器1的预分频计数器寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_Counter_Timer_16_Bit_1_Prescale_Counter_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(Counter_Timer_16_Bit_1_Prescale_Counter_Register_Address, Register_Value);
}

/*
	功能：读16位计数器定时器1的匹配控制寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_Counter_Timer_16_Bit_1_Match_Control_Register(void)
{
	return Read_Register_32_Bit(Counter_Timer_16_Bit_1_Match_Control_Register_Address);
}

/*
	功能：写16位计数器定时器1的匹配控制寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_Counter_Timer_16_Bit_1_Match_Control_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(Counter_Timer_16_Bit_1_Match_Control_Register_Address, Register_Value);
}

/*
	功能：读16位计数器定时器1的匹配寄存器0
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_Counter_Timer_16_Bit_1_Match_Register_0(void)
{
	return Read_Register_32_Bit(Counter_Timer_16_Bit_1_Match_Register_0_Address);
}

/*
	功能：写16位计数器定时器1的匹配寄存器0
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_Counter_Timer_16_Bit_1_Match_Register_0(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(Counter_Timer_16_Bit_1_Match_Register_0_Address, Register_Value);
}

/*
	功能：读16位计数器定时器1的匹配寄存器1
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_Counter_Timer_16_Bit_1_Match_Register_1(void)
{
	return Read_Register_32_Bit(Counter_Timer_16_Bit_1_Match_Register_1_Address);
}

/*
	功能：写16位计数器定时器1的匹配寄存器1
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_Counter_Timer_16_Bit_1_Match_Register_1(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(Counter_Timer_16_Bit_1_Match_Register_1_Address, Register_Value);
}

/*
	功能：读16位计数器定时器1的匹配寄存器2
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_Counter_Timer_16_Bit_1_Match_Register_2(void)
{
	return Read_Register_32_Bit(Counter_Timer_16_Bit_1_Match_Register_2_Address);
}

/*
	功能：写16位计数器定时器1的匹配寄存器2
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_Counter_Timer_16_Bit_1_Match_Register_2(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(Counter_Timer_16_Bit_1_Match_Register_2_Address, Register_Value);
}

/*
	功能：读16位计数器定时器1的匹配寄存器3
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_Counter_Timer_16_Bit_1_Match_Register_3(void)
{
	return Read_Register_32_Bit(Counter_Timer_16_Bit_1_Match_Register_3_Address);
}

/*
	功能：写16位计数器定时器1的匹配寄存器3
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_Counter_Timer_16_Bit_1_Match_Register_3(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(Counter_Timer_16_Bit_1_Match_Register_3_Address, Register_Value);
}

/*
	功能：读16位计数器定时器1的捕获控制寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_Counter_Timer_16_Bit_1_Capture_Control_Register(void)
{
	return Read_Register_32_Bit(Counter_Timer_16_Bit_1_Capture_Control_Register_Address);
}

/*
	功能：写16位计数器定时器1的捕获控制寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_Counter_Timer_16_Bit_1_Capture_Control_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(Counter_Timer_16_Bit_1_Capture_Control_Register_Address, Register_Value);
}

/*
	功能：读16位计数器定时器1的捕获寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_Counter_Timer_16_Bit_1_Capture_Register(void)
{
	return Read_Register_32_Bit(Counter_Timer_16_Bit_1_Capture_Register_Address);
}

/*
	功能：写16位计数器定时器1的捕获寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_Counter_Timer_16_Bit_1_Capture_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(Counter_Timer_16_Bit_1_Capture_Register_Address, Register_Value);
}

/*
	功能：读16位计数器定时器1的外部匹配寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_Counter_Timer_16_Bit_1_External_Match_Register(void)
{
	return Read_Register_32_Bit(Counter_Timer_16_Bit_1_External_Match_Register_Address);
}

/*
	功能：写16位计数器定时器1的外部匹配寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_Counter_Timer_16_Bit_1_External_Match_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(Counter_Timer_16_Bit_1_External_Match_Register_Address, Register_Value);
}

/*
	功能：读16位计数器定时器1的计数控制寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_Counter_Timer_16_Bit_1_Count_Control_Register(void)
{
	return Read_Register_32_Bit(Counter_Timer_16_Bit_1_Count_Control_Register_Address);
}

/*
	功能：写16位计数器定时器1的计数控制寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_Counter_Timer_16_Bit_1_Count_Control_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(Counter_Timer_16_Bit_1_Count_Control_Register_Address, Register_Value);
}

/*
	功能：读16位计数器定时器1的脉冲宽度调制控制寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_Counter_Timer_16_Bit_1_PWM_Control_Register(void)
{
	return Read_Register_32_Bit(Counter_Timer_16_Bit_1_PWM_Control_Register_Address);
}

/*
	功能：写16位计数器定时器1的脉冲宽度调制控制寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_Counter_Timer_16_Bit_1_PWM_Control_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(Counter_Timer_16_Bit_1_PWM_Control_Register_Address, Register_Value);
}
