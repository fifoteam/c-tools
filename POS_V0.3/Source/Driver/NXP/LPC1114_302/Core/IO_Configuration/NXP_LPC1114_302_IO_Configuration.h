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

#ifndef	NXP_LPC1114_302_IO_CONFIGURATION_H
#define	NXP_LPC1114_302_IO_CONFIGURATION_H

#include	"Base.h"

/* 数据类型 */

/* IO配置的GPIO端口2引脚6配置寄存器内部 */
typedef	struct	Tag_IO_Configuration_GPIO_2_Pin_6_Configuration_Register_Internal
{
	Integer_Unsigned_32_Bit	Pin_Function	: 3;
	Integer_Unsigned_32_Bit	Resistor_Mode	: 2;
	Integer_Unsigned_32_Bit	Hysteresis_Mode	: 1;
	Integer_Unsigned_32_Bit					: 4;
	Integer_Unsigned_32_Bit	Open_Drain_Mode : 1;
}
	Structure_IO_Configuration_GPIO_2_Pin_6_Configuration_Register_Internal;

/* IO配置的GPIO端口2引脚6配置寄存器 */
typedef	union	Tag_IO_Configuration_GPIO_2_Pin_6_Configuration_Register
{
	Integer_Unsigned_32_Bit													Value;
	Structure_IO_Configuration_GPIO_2_Pin_6_Configuration_Register_Internal	Internal;
}
	Union_IO_Configuration_GPIO_2_Pin_6_Configuration_Register;

/* IO配置的GPIO端口2引脚0配置寄存器内部 */
typedef	struct	Tag_IO_Configuration_GPIO_2_Pin_0_Configuration_Register_Internal
{
	Integer_Unsigned_32_Bit	Pin_Function	: 3;
	Integer_Unsigned_32_Bit	Resistor_Mode	: 2;
	Integer_Unsigned_32_Bit	Hysteresis_Mode	: 1;
	Integer_Unsigned_32_Bit					: 4;
	Integer_Unsigned_32_Bit	Open_Drain_Mode : 1;
}
	Structure_IO_Configuration_GPIO_2_Pin_0_Configuration_Register_Internal;

/* IO配置的GPIO端口2引脚0配置寄存器 */
typedef	union	Tag_IO_Configuration_GPIO_2_Pin_0_Configuration_Register
{
	Integer_Unsigned_32_Bit													Value;
	Structure_IO_Configuration_GPIO_2_Pin_0_Configuration_Register_Internal	Internal;
}
	Union_IO_Configuration_GPIO_2_Pin_0_Configuration_Register;

/* IO配置的GPIO端口0引脚0配置寄存器内部 */
typedef	struct	Tag_IO_Configuration_GPIO_0_Pin_0_Configuration_Register_Internal
{
	Integer_Unsigned_32_Bit	Pin_Function	: 3;
	Integer_Unsigned_32_Bit	Resistor_Mode	: 2;
	Integer_Unsigned_32_Bit	Hysteresis_Mode	: 1;
	Integer_Unsigned_32_Bit					: 4;
	Integer_Unsigned_32_Bit	Open_Drain_Mode : 1;
}
	Structure_IO_Configuration_GPIO_0_Pin_0_Configuration_Register_Internal;

/* IO配置的GPIO端口0引脚0配置寄存器 */
typedef	union	Tag_IO_Configuration_GPIO_0_Pin_0_Configuration_Register
{
	Integer_Unsigned_32_Bit													Value;
	Structure_IO_Configuration_GPIO_0_Pin_0_Configuration_Register_Internal	Internal;
}
	Union_IO_Configuration_GPIO_0_Pin_0_Configuration_Register;

/* IO配置的GPIO端口0引脚1配置寄存器内部 */
typedef	struct	Tag_IO_Configuration_GPIO_0_Pin_1_Configuration_Register_Internal
{
	Integer_Unsigned_32_Bit	Pin_Function	: 3;
	Integer_Unsigned_32_Bit	Resistor_Mode	: 2;
	Integer_Unsigned_32_Bit	Hysteresis_Mode	: 1;
	Integer_Unsigned_32_Bit					: 4;
	Integer_Unsigned_32_Bit	Open_Drain_Mode : 1;
}
	Structure_IO_Configuration_GPIO_0_Pin_1_Configuration_Register_Internal;

/* IO配置的GPIO端口0引脚1配置寄存器 */
typedef	union	Tag_IO_Configuration_GPIO_0_Pin_1_Configuration_Register
{
	Integer_Unsigned_32_Bit													Value;
	Structure_IO_Configuration_GPIO_0_Pin_1_Configuration_Register_Internal	Internal;
}
	Union_IO_Configuration_GPIO_0_Pin_1_Configuration_Register;

/* IO配置的GPIO端口1引脚8配置寄存器内部 */
typedef	struct	Tag_IO_Configuration_GPIO_1_Pin_8_Configuration_Register_Internal
{
	Integer_Unsigned_32_Bit	Pin_Function	: 3;
	Integer_Unsigned_32_Bit	Resistor_Mode	: 2;
	Integer_Unsigned_32_Bit	Hysteresis_Mode	: 1;
	Integer_Unsigned_32_Bit					: 4;
	Integer_Unsigned_32_Bit	Open_Drain_Mode : 1;
}
	Structure_IO_Configuration_GPIO_1_Pin_8_Configuration_Register_Internal;

/* IO配置的GPIO端口1引脚8配置寄存器 */
typedef	union	Tag_IO_Configuration_GPIO_1_Pin_8_Configuration_Register
{
	Integer_Unsigned_32_Bit													Value;
	Structure_IO_Configuration_GPIO_1_Pin_8_Configuration_Register_Internal	Internal;
}
	Union_IO_Configuration_GPIO_1_Pin_8_Configuration_Register;

/* IO配置的GPIO端口0引脚2配置寄存器内部 */
typedef	struct	Tag_IO_Configuration_GPIO_0_Pin_2_Configuration_Register_Internal
{
	Integer_Unsigned_32_Bit	Pin_Function	: 3;
	Integer_Unsigned_32_Bit	Resistor_Mode	: 2;
	Integer_Unsigned_32_Bit	Hysteresis_Mode	: 1;
	Integer_Unsigned_32_Bit					: 4;
	Integer_Unsigned_32_Bit	Open_Drain_Mode : 1;
}
	Structure_IO_Configuration_GPIO_0_Pin_2_Configuration_Register_Internal;

/* IO配置的GPIO端口0引脚2配置寄存器 */
typedef	union	Tag_IO_Configuration_GPIO_0_Pin_2_Configuration_Register
{
	Integer_Unsigned_32_Bit													Value;
	Structure_IO_Configuration_GPIO_0_Pin_2_Configuration_Register_Internal	Internal;
}
	Union_IO_Configuration_GPIO_0_Pin_2_Configuration_Register;

/* IO配置的GPIO端口2引脚7配置寄存器内部 */
typedef	struct	Tag_IO_Configuration_GPIO_2_Pin_7_Configuration_Register_Internal
{
	Integer_Unsigned_32_Bit	Pin_Function	: 3;
	Integer_Unsigned_32_Bit	Resistor_Mode	: 2;
	Integer_Unsigned_32_Bit	Hysteresis_Mode	: 1;
	Integer_Unsigned_32_Bit					: 4;
	Integer_Unsigned_32_Bit	Open_Drain_Mode : 1;
}
	Structure_IO_Configuration_GPIO_2_Pin_7_Configuration_Register_Internal;

/* IO配置的GPIO端口2引脚7配置寄存器 */
typedef	union	Tag_IO_Configuration_GPIO_2_Pin_7_Configuration_Register
{
	Integer_Unsigned_32_Bit													Value;
	Structure_IO_Configuration_GPIO_2_Pin_7_Configuration_Register_Internal	Internal;
}
	Union_IO_Configuration_GPIO_2_Pin_7_Configuration_Register;

/* IO配置的GPIO端口2引脚8配置寄存器内部 */
typedef	struct	Tag_IO_Configuration_GPIO_2_Pin_8_Configuration_Register_Internal
{
	Integer_Unsigned_32_Bit	Pin_Function	: 3;
	Integer_Unsigned_32_Bit	Resistor_Mode	: 2;
	Integer_Unsigned_32_Bit	Hysteresis_Mode	: 1;
	Integer_Unsigned_32_Bit					: 4;
	Integer_Unsigned_32_Bit	Open_Drain_Mode : 1;
}
	Structure_IO_Configuration_GPIO_2_Pin_8_Configuration_Register_Internal;

/* IO配置的GPIO端口2引脚8配置寄存器 */
typedef	union	Tag_IO_Configuration_GPIO_2_Pin_8_Configuration_Register
{
	Integer_Unsigned_32_Bit													Value;
	Structure_IO_Configuration_GPIO_2_Pin_8_Configuration_Register_Internal	Internal;
}
	Union_IO_Configuration_GPIO_2_Pin_8_Configuration_Register;

/* IO配置的GPIO端口2引脚1配置寄存器内部 */
typedef	struct	Tag_IO_Configuration_GPIO_2_Pin_1_Configuration_Register_Internal
{
	Integer_Unsigned_32_Bit	Pin_Function	: 3;
	Integer_Unsigned_32_Bit	Resistor_Mode	: 2;
	Integer_Unsigned_32_Bit	Hysteresis_Mode	: 1;
	Integer_Unsigned_32_Bit					: 4;
	Integer_Unsigned_32_Bit	Open_Drain_Mode : 1;
}
	Structure_IO_Configuration_GPIO_2_Pin_1_Configuration_Register_Internal;

/* IO配置的GPIO端口2引脚1配置寄存器 */
typedef	union	Tag_IO_Configuration_GPIO_2_Pin_1_Configuration_Register
{
	Integer_Unsigned_32_Bit													Value;
	Structure_IO_Configuration_GPIO_2_Pin_1_Configuration_Register_Internal	Internal;
}
	Union_IO_Configuration_GPIO_2_Pin_1_Configuration_Register;

/* IO配置的GPIO端口0引脚3配置寄存器内部 */
typedef	struct	Tag_IO_Configuration_GPIO_0_Pin_3_Configuration_Register_Internal
{
	Integer_Unsigned_32_Bit	Pin_Function	: 3;
	Integer_Unsigned_32_Bit	Resistor_Mode	: 2;
	Integer_Unsigned_32_Bit	Hysteresis_Mode	: 1;
	Integer_Unsigned_32_Bit					: 4;
	Integer_Unsigned_32_Bit	Open_Drain_Mode : 1;
}
	Structure_IO_Configuration_GPIO_0_Pin_3_Configuration_Register_Internal;

/* IO配置的GPIO端口0引脚3配置寄存器 */
typedef	union	Tag_IO_Configuration_GPIO_0_Pin_3_Configuration_Register
{
	Integer_Unsigned_32_Bit													Value;
	Structure_IO_Configuration_GPIO_0_Pin_3_Configuration_Register_Internal	Internal;
}
	Union_IO_Configuration_GPIO_0_Pin_3_Configuration_Register;

/* IO配置的GPIO端口0引脚4配置寄存器内部 */
typedef	struct	Tag_IO_Configuration_GPIO_0_Pin_4_Configuration_Register_Internal
{
	Integer_Unsigned_32_Bit	Pin_Function : 3;
	Integer_Unsigned_32_Bit				 : 5;
	Integer_Unsigned_32_Bit	IIC_Mode	 : 2;
}
	Structure_IO_Configuration_GPIO_0_Pin_4_Configuration_Register_Internal;

/* IO配置的GPIO端口0引脚4配置寄存器 */
typedef	union	Tag_IO_Configuration_GPIO_0_Pin_4_Configuration_Register
{
	Integer_Unsigned_32_Bit													Value;
	Structure_IO_Configuration_GPIO_0_Pin_4_Configuration_Register_Internal	Internal;
}
	Union_IO_Configuration_GPIO_0_Pin_4_Configuration_Register;

/* IO配置的GPIO端口0引脚5配置寄存器内部 */
typedef	struct	Tag_IO_Configuration_GPIO_0_Pin_5_Configuration_Register_Internal
{
	Integer_Unsigned_32_Bit	Pin_Function : 3;
	Integer_Unsigned_32_Bit				 : 5;
	Integer_Unsigned_32_Bit	IIC_Mode	 : 2;
}
	Structure_IO_Configuration_GPIO_0_Pin_5_Configuration_Register_Internal;

/* IO配置的GPIO端口0引脚5配置寄存器 */
typedef	union	Tag_IO_Configuration_GPIO_0_Pin_5_Configuration_Register
{
	Integer_Unsigned_32_Bit													Value;
	Structure_IO_Configuration_GPIO_0_Pin_5_Configuration_Register_Internal	Internal;
}
	Union_IO_Configuration_GPIO_0_Pin_5_Configuration_Register;

/* IO配置的GPIO端口1引脚9配置寄存器内部 */
typedef	struct	Tag_IO_Configuration_GPIO_1_Pin_9_Configuration_Register_Internal
{
	Integer_Unsigned_32_Bit	Pin_Function	: 3;
	Integer_Unsigned_32_Bit	Resistor_Mode	: 2;
	Integer_Unsigned_32_Bit	Hysteresis_Mode	: 1;
	Integer_Unsigned_32_Bit					: 4;
	Integer_Unsigned_32_Bit	Open_Drain_Mode : 1;
}
	Structure_IO_Configuration_GPIO_1_Pin_9_Configuration_Register_Internal;

/* IO配置的GPIO端口1引脚9配置寄存器 */
typedef	union	Tag_IO_Configuration_GPIO_1_Pin_9_Configuration_Register
{
	Integer_Unsigned_32_Bit													Value;
	Structure_IO_Configuration_GPIO_1_Pin_9_Configuration_Register_Internal	Internal;
}
	Union_IO_Configuration_GPIO_1_Pin_9_Configuration_Register;

/* IO配置的GPIO端口3引脚4配置寄存器内部 */
typedef	struct	Tag_IO_Configuration_GPIO_3_Pin_4_Configuration_Register_Internal
{
	Integer_Unsigned_32_Bit	Pin_Function	: 3;
	Integer_Unsigned_32_Bit	Resistor_Mode	: 2;
	Integer_Unsigned_32_Bit	Hysteresis_Mode	: 1;
	Integer_Unsigned_32_Bit					: 4;
	Integer_Unsigned_32_Bit	Open_Drain_Mode : 1;
}
	Structure_IO_Configuration_GPIO_3_Pin_4_Configuration_Register_Internal;

/* IO配置的GPIO端口3引脚4配置寄存器 */
typedef	union	Tag_IO_Configuration_GPIO_3_Pin_4_Configuration_Register
{
	Integer_Unsigned_32_Bit													Value;
	Structure_IO_Configuration_GPIO_3_Pin_4_Configuration_Register_Internal	Internal;
}
	Union_IO_Configuration_GPIO_3_Pin_4_Configuration_Register;

/* IO配置的GPIO端口2引脚4配置寄存器内部 */
typedef	struct	Tag_IO_Configuration_GPIO_2_Pin_4_Configuration_Register_Internal
{
	Integer_Unsigned_32_Bit	Pin_Function	: 3;
	Integer_Unsigned_32_Bit	Resistor_Mode	: 2;
	Integer_Unsigned_32_Bit	Hysteresis_Mode	: 1;
	Integer_Unsigned_32_Bit					: 4;
	Integer_Unsigned_32_Bit	Open_Drain_Mode : 1;
}
	Structure_IO_Configuration_GPIO_2_Pin_4_Configuration_Register_Internal;

/* IO配置的GPIO端口2引脚4配置寄存器 */
typedef	union	Tag_IO_Configuration_GPIO_2_Pin_4_Configuration_Register
{
	Integer_Unsigned_32_Bit													Value;
	Structure_IO_Configuration_GPIO_2_Pin_4_Configuration_Register_Internal	Internal;
}
	Union_IO_Configuration_GPIO_2_Pin_4_Configuration_Register;

/* IO配置的GPIO端口2引脚5配置寄存器内部 */
typedef	struct	Tag_IO_Configuration_GPIO_2_Pin_5_Configuration_Register_Internal
{
	Integer_Unsigned_32_Bit	Pin_Function	: 3;
	Integer_Unsigned_32_Bit	Resistor_Mode	: 2;
	Integer_Unsigned_32_Bit	Hysteresis_Mode	: 1;
	Integer_Unsigned_32_Bit					: 4;
	Integer_Unsigned_32_Bit	Open_Drain_Mode : 1;
}
	Structure_IO_Configuration_GPIO_2_Pin_5_Configuration_Register_Internal;

/* IO配置的GPIO端口2引脚5配置寄存器 */
typedef	union	Tag_IO_Configuration_GPIO_2_Pin_5_Configuration_Register
{
	Integer_Unsigned_32_Bit													Value;
	Structure_IO_Configuration_GPIO_2_Pin_5_Configuration_Register_Internal	Internal;
}
	Union_IO_Configuration_GPIO_2_Pin_5_Configuration_Register;

/* IO配置的GPIO端口3引脚5配置寄存器内部 */
typedef	struct	Tag_IO_Configuration_GPIO_3_Pin_5_Configuration_Register_Internal
{
	Integer_Unsigned_32_Bit	Pin_Function	: 3;
	Integer_Unsigned_32_Bit	Resistor_Mode	: 2;
	Integer_Unsigned_32_Bit	Hysteresis_Mode	: 1;
	Integer_Unsigned_32_Bit					: 4;
	Integer_Unsigned_32_Bit	Open_Drain_Mode : 1;
}
	Structure_IO_Configuration_GPIO_3_Pin_5_Configuration_Register_Internal;

/* IO配置的GPIO端口3引脚5配置寄存器 */
typedef	union	Tag_IO_Configuration_GPIO_3_Pin_5_Configuration_Register
{
	Integer_Unsigned_32_Bit													Value;
	Structure_IO_Configuration_GPIO_3_Pin_5_Configuration_Register_Internal	Internal;
}
	Union_IO_Configuration_GPIO_3_Pin_5_Configuration_Register;

/* IO配置的GPIO端口0引脚6配置寄存器内部 */
typedef	struct	Tag_IO_Configuration_GPIO_0_Pin_6_Configuration_Register_Internal
{
	Integer_Unsigned_32_Bit	Pin_Function	: 3;
	Integer_Unsigned_32_Bit	Resistor_Mode	: 2;
	Integer_Unsigned_32_Bit	Hysteresis_Mode	: 1;
	Integer_Unsigned_32_Bit					: 4;
	Integer_Unsigned_32_Bit	Open_Drain_Mode : 1;
}
	Structure_IO_Configuration_GPIO_0_Pin_6_Configuration_Register_Internal;

/* IO配置的GPIO端口0引脚6配置寄存器 */
typedef	union	Tag_IO_Configuration_GPIO_0_Pin_6_Configuration_Register
{
	Integer_Unsigned_32_Bit													Value;
	Structure_IO_Configuration_GPIO_0_Pin_6_Configuration_Register_Internal	Internal;
}
	Union_IO_Configuration_GPIO_0_Pin_6_Configuration_Register;

/* IO配置的GPIO端口0引脚7配置寄存器内部 */
typedef	struct	Tag_IO_Configuration_GPIO_0_Pin_7_Configuration_Register_Internal
{
	Integer_Unsigned_32_Bit	Pin_Function	: 3;
	Integer_Unsigned_32_Bit	Resistor_Mode	: 2;
	Integer_Unsigned_32_Bit	Hysteresis_Mode	: 1;
	Integer_Unsigned_32_Bit					: 4;
	Integer_Unsigned_32_Bit	Open_Drain_Mode : 1;
}
	Structure_IO_Configuration_GPIO_0_Pin_7_Configuration_Register_Internal;

/* IO配置的GPIO端口0引脚7配置寄存器 */
typedef	union	Tag_IO_Configuration_GPIO_0_Pin_7_Configuration_Register
{
	Integer_Unsigned_32_Bit													Value;
	Structure_IO_Configuration_GPIO_0_Pin_7_Configuration_Register_Internal	Internal;
}
	Union_IO_Configuration_GPIO_0_Pin_7_Configuration_Register;

/* IO配置的GPIO端口2引脚9配置寄存器内部 */
typedef	struct	Tag_IO_Configuration_GPIO_2_Pin_9_Configuration_Register_Internal
{
	Integer_Unsigned_32_Bit	Pin_Function	: 3;
	Integer_Unsigned_32_Bit	Resistor_Mode	: 2;
	Integer_Unsigned_32_Bit	Hysteresis_Mode	: 1;
	Integer_Unsigned_32_Bit					: 4;
	Integer_Unsigned_32_Bit	Open_Drain_Mode : 1;
}
	Structure_IO_Configuration_GPIO_2_Pin_9_Configuration_Register_Internal;

/* IO配置的GPIO端口2引脚9配置寄存器 */
typedef	union	Tag_IO_Configuration_GPIO_2_Pin_9_Configuration_Register
{
	Integer_Unsigned_32_Bit													Value;
	Structure_IO_Configuration_GPIO_2_Pin_9_Configuration_Register_Internal	Internal;
}
	Union_IO_Configuration_GPIO_2_Pin_9_Configuration_Register;

/* IO配置的GPIO端口2引脚10配置寄存器内部 */
typedef	struct	Tag_IO_Configuration_GPIO_2_Pin_10_Configuration_Register_Internal
{
	Integer_Unsigned_32_Bit	Pin_Function	: 3;
	Integer_Unsigned_32_Bit	Resistor_Mode	: 2;
	Integer_Unsigned_32_Bit	Hysteresis_Mode	: 1;
	Integer_Unsigned_32_Bit					: 4;
	Integer_Unsigned_32_Bit	Open_Drain_Mode : 1;
}
	Structure_IO_Configuration_GPIO_2_Pin_10_Configuration_Register_Internal;

/* IO配置的GPIO端口2引脚10配置寄存器 */
typedef	union	Tag_IO_Configuration_GPIO_2_Pin_10_Configuration_Register
{
	Integer_Unsigned_32_Bit														Value;
	Structure_IO_Configuration_GPIO_2_Pin_10_Configuration_Register_Internal	Internal;
}
	Union_IO_Configuration_GPIO_2_Pin_10_Configuration_Register;

/* IO配置的GPIO端口2引脚2配置寄存器内部 */
typedef	struct	Tag_IO_Configuration_GPIO_2_Pin_2_Configuration_Register_Internal
{
	Integer_Unsigned_32_Bit	Pin_Function	: 3;
	Integer_Unsigned_32_Bit	Resistor_Mode	: 2;
	Integer_Unsigned_32_Bit	Hysteresis_Mode	: 1;
	Integer_Unsigned_32_Bit					: 4;
	Integer_Unsigned_32_Bit	Open_Drain_Mode : 1;
}
	Structure_IO_Configuration_GPIO_2_Pin_2_Configuration_Register_Internal;

/* IO配置的GPIO端口2引脚2配置寄存器 */
typedef	union	Tag_IO_Configuration_GPIO_2_Pin_2_Configuration_Register
{
	Integer_Unsigned_32_Bit													Value;
	Structure_IO_Configuration_GPIO_2_Pin_2_Configuration_Register_Internal	Internal;
}
	Union_IO_Configuration_GPIO_2_Pin_2_Configuration_Register;

/* IO配置的GPIO端口0引脚8配置寄存器内部 */
typedef	struct	Tag_IO_Configuration_GPIO_0_Pin_8_Configuration_Register_Internal
{
	Integer_Unsigned_32_Bit	Pin_Function	: 3;
	Integer_Unsigned_32_Bit	Resistor_Mode	: 2;
	Integer_Unsigned_32_Bit	Hysteresis_Mode	: 1;
	Integer_Unsigned_32_Bit					: 4;
	Integer_Unsigned_32_Bit	Open_Drain_Mode : 1;
}
	Structure_IO_Configuration_GPIO_0_Pin_8_Configuration_Register_Internal;

/* IO配置的GPIO端口0引脚8配置寄存器 */
typedef	union	Tag_IO_Configuration_GPIO_0_Pin_8_Configuration_Register
{
	Integer_Unsigned_32_Bit													Value;
	Structure_IO_Configuration_GPIO_0_Pin_8_Configuration_Register_Internal	Internal;
}
	Union_IO_Configuration_GPIO_0_Pin_8_Configuration_Register;

/* IO配置的GPIO端口0引脚9配置寄存器内部 */
typedef	struct	Tag_IO_Configuration_GPIO_0_Pin_9_Configuration_Register_Internal
{
	Integer_Unsigned_32_Bit	Pin_Function	: 3;
	Integer_Unsigned_32_Bit	Resistor_Mode	: 2;
	Integer_Unsigned_32_Bit	Hysteresis_Mode	: 1;
	Integer_Unsigned_32_Bit					: 4;
	Integer_Unsigned_32_Bit	Open_Drain_Mode : 1;
}
	Structure_IO_Configuration_GPIO_0_Pin_9_Configuration_Register_Internal;

/* IO配置的GPIO端口0引脚9配置寄存器 */
typedef	union	Tag_IO_Configuration_GPIO_0_Pin_9_Configuration_Register
{
	Integer_Unsigned_32_Bit													Value;
	Structure_IO_Configuration_GPIO_0_Pin_9_Configuration_Register_Internal	Internal;
}
	Union_IO_Configuration_GPIO_0_Pin_9_Configuration_Register;

/* IO配置的GPIO端口0引脚10配置寄存器内部 */
typedef	struct	Tag_IO_Configuration_GPIO_0_Pin_10_Configuration_Register_Internal
{
	Integer_Unsigned_32_Bit	Pin_Function	: 3;
	Integer_Unsigned_32_Bit	Resistor_Mode	: 2;
	Integer_Unsigned_32_Bit	Hysteresis_Mode	: 1;
	Integer_Unsigned_32_Bit					: 4;
	Integer_Unsigned_32_Bit	Open_Drain_Mode : 1;
}
	Structure_IO_Configuration_GPIO_0_Pin_10_Configuration_Register_Internal;

/* IO配置的GPIO端口0引脚10配置寄存器 */
typedef	union	Tag_IO_Configuration_GPIO_0_Pin_10_Configuration_Register
{
	Integer_Unsigned_32_Bit														Value;
	Structure_IO_Configuration_GPIO_0_Pin_10_Configuration_Register_Internal	Internal;
}
	Union_IO_Configuration_GPIO_0_Pin_10_Configuration_Register;

/* IO配置的GPIO端口1引脚10配置寄存器内部 */
typedef	struct	Tag_IO_Configuration_GPIO_1_Pin_10_Configuration_Register_Internal
{
	Integer_Unsigned_32_Bit	Pin_Function	: 3;
	Integer_Unsigned_32_Bit	Resistor_Mode	: 2;
	Integer_Unsigned_32_Bit	Hysteresis_Mode	: 1;
	Integer_Unsigned_32_Bit					: 1;
	Integer_Unsigned_32_Bit	AD_Mode 		: 1;
	Integer_Unsigned_32_Bit					: 2;
	Integer_Unsigned_32_Bit	Open_Drain_Mode : 1;
}
	Structure_IO_Configuration_GPIO_1_Pin_10_Configuration_Register_Internal;

/* IO配置的GPIO端口1引脚10配置寄存器 */
typedef	union	Tag_IO_Configuration_GPIO_1_Pin_10_Configuration_Register
{
	Integer_Unsigned_32_Bit														Value;
	Structure_IO_Configuration_GPIO_1_Pin_10_Configuration_Register_Internal	Internal;
}
	Union_IO_Configuration_GPIO_1_Pin_10_Configuration_Register;

/* IO配置的GPIO端口2引脚11配置寄存器内部 */
typedef	struct	Tag_IO_Configuration_GPIO_2_Pin_11_Configuration_Register_Internal
{
	Integer_Unsigned_32_Bit	Pin_Function	: 3;
	Integer_Unsigned_32_Bit	Resistor_Mode	: 2;
	Integer_Unsigned_32_Bit	Hysteresis_Mode	: 1;
	Integer_Unsigned_32_Bit					: 4;
	Integer_Unsigned_32_Bit	Open_Drain_Mode : 1;
}
	Structure_IO_Configuration_GPIO_2_Pin_11_Configuration_Register_Internal;

/* IO配置的GPIO端口2引脚11配置寄存器 */
typedef	union	Tag_IO_Configuration_GPIO_2_Pin_11_Configuration_Register
{
	Integer_Unsigned_32_Bit														Value;
	Structure_IO_Configuration_GPIO_2_Pin_11_Configuration_Register_Internal	Internal;
}
	Union_IO_Configuration_GPIO_2_Pin_11_Configuration_Register;

/* IO配置的GPIO端口0引脚11配置寄存器内部 */
typedef	struct	Tag_IO_Configuration_GPIO_0_Pin_11_Configuration_Register_Internal
{
	Integer_Unsigned_32_Bit	Pin_Function	: 3;
	Integer_Unsigned_32_Bit	Resistor_Mode	: 2;
	Integer_Unsigned_32_Bit	Hysteresis_Mode	: 1;
	Integer_Unsigned_32_Bit					: 1;
	Integer_Unsigned_32_Bit	AD_Mode 		: 1;
	Integer_Unsigned_32_Bit					: 2;
	Integer_Unsigned_32_Bit	Open_Drain_Mode : 1;
}
	Structure_IO_Configuration_GPIO_0_Pin_11_Configuration_Register_Internal;

/* IO配置的GPIO端口0引脚11配置寄存器 */
typedef	union	Tag_IO_Configuration_GPIO_0_Pin_11_Configuration_Register
{
	Integer_Unsigned_32_Bit														Value;
	Structure_IO_Configuration_GPIO_0_Pin_11_Configuration_Register_Internal	Internal;
}
	Union_IO_Configuration_GPIO_0_Pin_11_Configuration_Register;

/* IO配置的GPIO端口1引脚0配置寄存器内部 */
typedef	struct	Tag_IO_Configuration_GPIO_1_Pin_0_Configuration_Register_Internal
{
	Integer_Unsigned_32_Bit	Pin_Function	: 3;
	Integer_Unsigned_32_Bit	Resistor_Mode	: 2;
	Integer_Unsigned_32_Bit	Hysteresis_Mode	: 1;
	Integer_Unsigned_32_Bit					: 1;
	Integer_Unsigned_32_Bit	AD_Mode 		: 1;
	Integer_Unsigned_32_Bit					: 2;
	Integer_Unsigned_32_Bit	Open_Drain_Mode : 1;
}
	Structure_IO_Configuration_GPIO_1_Pin_0_Configuration_Register_Internal;

/* IO配置的GPIO端口1引脚0配置寄存器 */
typedef	union	Tag_IO_Configuration_GPIO_1_Pin_0_Configuration_Register
{
	Integer_Unsigned_32_Bit													Value;
	Structure_IO_Configuration_GPIO_1_Pin_0_Configuration_Register_Internal	Internal;
}
	Union_IO_Configuration_GPIO_1_Pin_0_Configuration_Register;

/* IO配置的GPIO端口1引脚1配置寄存器内部 */
typedef	struct	Tag_IO_Configuration_GPIO_1_Pin_1_Configuration_Register_Internal
{
	Integer_Unsigned_32_Bit	Pin_Function	: 3;
	Integer_Unsigned_32_Bit	Resistor_Mode	: 2;
	Integer_Unsigned_32_Bit	Hysteresis_Mode	: 1;
	Integer_Unsigned_32_Bit					: 1;
	Integer_Unsigned_32_Bit	AD_Mode 		: 1;
	Integer_Unsigned_32_Bit					: 2;
	Integer_Unsigned_32_Bit	Open_Drain_Mode : 1;
}
	Structure_IO_Configuration_GPIO_1_Pin_1_Configuration_Register_Internal;

/* IO配置的GPIO端口1引脚1配置寄存器 */
typedef	union	Tag_IO_Configuration_GPIO_1_Pin_1_Configuration_Register
{
	Integer_Unsigned_32_Bit													Value;
	Structure_IO_Configuration_GPIO_1_Pin_1_Configuration_Register_Internal	Internal;
}
	Union_IO_Configuration_GPIO_1_Pin_1_Configuration_Register;

/* IO配置的GPIO端口1引脚2配置寄存器内部 */
typedef	struct	Tag_IO_Configuration_GPIO_1_Pin_2_Configuration_Register_Internal
{
	Integer_Unsigned_32_Bit	Pin_Function	: 3;
	Integer_Unsigned_32_Bit	Resistor_Mode	: 2;
	Integer_Unsigned_32_Bit	Hysteresis_Mode	: 1;
	Integer_Unsigned_32_Bit					: 1;
	Integer_Unsigned_32_Bit	AD_Mode 		: 1;
	Integer_Unsigned_32_Bit					: 2;
	Integer_Unsigned_32_Bit	Open_Drain_Mode : 1;
}
	Structure_IO_Configuration_GPIO_1_Pin_2_Configuration_Register_Internal;

/* IO配置的GPIO端口1引脚2配置寄存器 */
typedef	union	Tag_IO_Configuration_GPIO_1_Pin_2_Configuration_Register
{
	Integer_Unsigned_32_Bit													Value;
	Structure_IO_Configuration_GPIO_1_Pin_2_Configuration_Register_Internal	Internal;
}
	Union_IO_Configuration_GPIO_1_Pin_2_Configuration_Register;

/* IO配置的GPIO端口3引脚0配置寄存器内部 */
typedef	struct	Tag_IO_Configuration_GPIO_3_Pin_0_Configuration_Register_Internal
{
	Integer_Unsigned_32_Bit	Pin_Function	: 3;
	Integer_Unsigned_32_Bit	Resistor_Mode	: 2;
	Integer_Unsigned_32_Bit	Hysteresis_Mode	: 1;
	Integer_Unsigned_32_Bit					: 4;
	Integer_Unsigned_32_Bit	Open_Drain_Mode : 1;
}
	Structure_IO_Configuration_GPIO_3_Pin_0_Configuration_Register_Internal;

/* IO配置的GPIO端口3引脚0配置寄存器 */
typedef	union	Tag_IO_Configuration_GPIO_3_Pin_0_Configuration_Register
{
	Integer_Unsigned_32_Bit													Value;
	Structure_IO_Configuration_GPIO_3_Pin_0_Configuration_Register_Internal	Internal;
}
	Union_IO_Configuration_GPIO_3_Pin_0_Configuration_Register;

/* IO配置的GPIO端口3引脚1配置寄存器内部 */
typedef	struct	Tag_IO_Configuration_GPIO_3_Pin_1_Configuration_Register_Internal
{
	Integer_Unsigned_32_Bit	Pin_Function	: 3;
	Integer_Unsigned_32_Bit	Resistor_Mode	: 2;
	Integer_Unsigned_32_Bit	Hysteresis_Mode	: 1;
	Integer_Unsigned_32_Bit					: 4;
	Integer_Unsigned_32_Bit	Open_Drain_Mode : 1;
}
	Structure_IO_Configuration_GPIO_3_Pin_1_Configuration_Register_Internal;

/* IO配置的GPIO端口3引脚1配置寄存器 */
typedef	union	Tag_IO_Configuration_GPIO_3_Pin_1_Configuration_Register
{
	Integer_Unsigned_32_Bit													Value;
	Structure_IO_Configuration_GPIO_3_Pin_1_Configuration_Register_Internal	Internal;
}
	Union_IO_Configuration_GPIO_3_Pin_1_Configuration_Register;

/* IO配置的GPIO端口2引脚3配置寄存器内部 */
typedef	struct	Tag_IO_Configuration_GPIO_2_Pin_3_Configuration_Register_Internal
{
	Integer_Unsigned_32_Bit	Pin_Function	: 3;
	Integer_Unsigned_32_Bit	Resistor_Mode	: 2;
	Integer_Unsigned_32_Bit	Hysteresis_Mode	: 1;
	Integer_Unsigned_32_Bit					: 4;
	Integer_Unsigned_32_Bit	Open_Drain_Mode : 1;
}
	Structure_IO_Configuration_GPIO_2_Pin_3_Configuration_Register_Internal;

/* IO配置的GPIO端口2引脚3配置寄存器 */
typedef	union	Tag_IO_Configuration_GPIO_2_Pin_3_Configuration_Register
{
	Integer_Unsigned_32_Bit													Value;
	Structure_IO_Configuration_GPIO_2_Pin_3_Configuration_Register_Internal	Internal;
}
	Union_IO_Configuration_GPIO_2_Pin_3_Configuration_Register;

/* IO配置的GPIO端口1引脚3配置寄存器内部 */
typedef	struct	Tag_IO_Configuration_GPIO_1_Pin_3_Configuration_Register_Internal
{
	Integer_Unsigned_32_Bit	Pin_Function	: 3;
	Integer_Unsigned_32_Bit	Resistor_Mode	: 2;
	Integer_Unsigned_32_Bit	Hysteresis_Mode	: 1;
	Integer_Unsigned_32_Bit					: 1;
	Integer_Unsigned_32_Bit	AD_Mode 		: 1;
	Integer_Unsigned_32_Bit					: 2;
	Integer_Unsigned_32_Bit	Open_Drain_Mode : 1;
}
	Structure_IO_Configuration_GPIO_1_Pin_3_Configuration_Register_Internal;

/* IO配置的GPIO端口1引脚3配置寄存器 */
typedef	union	Tag_IO_Configuration_GPIO_1_Pin_3_Configuration_Register
{
	Integer_Unsigned_32_Bit													Value;
	Structure_IO_Configuration_GPIO_1_Pin_3_Configuration_Register_Internal	Internal;
}
	Union_IO_Configuration_GPIO_1_Pin_3_Configuration_Register;

/* IO配置的GPIO端口1引脚4配置寄存器内部 */
typedef	struct	Tag_IO_Configuration_GPIO_1_Pin_4_Configuration_Register_Internal
{
	Integer_Unsigned_32_Bit	Pin_Function	: 3;
	Integer_Unsigned_32_Bit	Resistor_Mode	: 2;
	Integer_Unsigned_32_Bit	Hysteresis_Mode	: 1;
	Integer_Unsigned_32_Bit					: 1;
	Integer_Unsigned_32_Bit	AD_Mode 		: 1;
	Integer_Unsigned_32_Bit					: 2;
	Integer_Unsigned_32_Bit	Open_Drain_Mode : 1;
}
	Structure_IO_Configuration_GPIO_1_Pin_4_Configuration_Register_Internal;

/* IO配置的GPIO端口1引脚4配置寄存器 */
typedef	union	Tag_IO_Configuration_GPIO_1_Pin_4_Configuration_Register
{
	Integer_Unsigned_32_Bit													Value;
	Structure_IO_Configuration_GPIO_1_Pin_4_Configuration_Register_Internal	Internal;
}
	Union_IO_Configuration_GPIO_1_Pin_4_Configuration_Register;

/* IO配置的GPIO端口1引脚11配置寄存器内部 */
typedef	struct	Tag_IO_Configuration_GPIO_1_Pin_11_Configuration_Register_Internal
{
	Integer_Unsigned_32_Bit	Pin_Function	: 3;
	Integer_Unsigned_32_Bit	Resistor_Mode	: 2;
	Integer_Unsigned_32_Bit	Hysteresis_Mode	: 1;
	Integer_Unsigned_32_Bit					: 1;
	Integer_Unsigned_32_Bit	AD_Mode 		: 1;
	Integer_Unsigned_32_Bit					: 2;
	Integer_Unsigned_32_Bit	Open_Drain_Mode : 1;
}
	Structure_IO_Configuration_GPIO_1_Pin_11_Configuration_Register_Internal;

/* IO配置的GPIO端口1引脚11配置寄存器 */
typedef	union	Tag_IO_Configuration_GPIO_1_Pin_11_Configuration_Register
{
	Integer_Unsigned_32_Bit														Value;
	Structure_IO_Configuration_GPIO_1_Pin_11_Configuration_Register_Internal	Internal;
}
	Union_IO_Configuration_GPIO_1_Pin_11_Configuration_Register;

/* IO配置的GPIO端口3引脚2配置寄存器内部 */
typedef	struct	Tag_IO_Configuration_GPIO_3_Pin_2_Configuration_Register_Internal
{
	Integer_Unsigned_32_Bit	Pin_Function	: 3;
	Integer_Unsigned_32_Bit	Resistor_Mode	: 2;
	Integer_Unsigned_32_Bit	Hysteresis_Mode	: 1;
	Integer_Unsigned_32_Bit					: 4;
	Integer_Unsigned_32_Bit	Open_Drain_Mode : 1;
}
	Structure_IO_Configuration_GPIO_3_Pin_2_Configuration_Register_Internal;

/* IO配置的GPIO端口3引脚2配置寄存器 */
typedef	union	Tag_IO_Configuration_GPIO_3_Pin_2_Configuration_Register
{
	Integer_Unsigned_32_Bit													Value;
	Structure_IO_Configuration_GPIO_3_Pin_2_Configuration_Register_Internal	Internal;
}
	Union_IO_Configuration_GPIO_3_Pin_2_Configuration_Register;

/* IO配置的GPIO端口1引脚5配置寄存器内部 */
typedef	struct	Tag_IO_Configuration_GPIO_1_Pin_5_Configuration_Register_Internal
{
	Integer_Unsigned_32_Bit	Pin_Function	: 3;
	Integer_Unsigned_32_Bit	Resistor_Mode	: 2;
	Integer_Unsigned_32_Bit	Hysteresis_Mode	: 1;
	Integer_Unsigned_32_Bit					: 4;
	Integer_Unsigned_32_Bit	Open_Drain_Mode : 1;
}
	Structure_IO_Configuration_GPIO_1_Pin_5_Configuration_Register_Internal;

/* IO配置的GPIO端口1引脚5配置寄存器 */
typedef	union	Tag_IO_Configuration_GPIO_1_Pin_5_Configuration_Register
{
	Integer_Unsigned_32_Bit													Value;
	Structure_IO_Configuration_GPIO_1_Pin_5_Configuration_Register_Internal	Internal;
}
	Union_IO_Configuration_GPIO_1_Pin_5_Configuration_Register;

/* IO配置的GPIO端口1引脚6配置寄存器内部 */
typedef	struct	Tag_IO_Configuration_GPIO_1_Pin_6_Configuration_Register_Internal
{
	Integer_Unsigned_32_Bit	Pin_Function	: 3;
	Integer_Unsigned_32_Bit	Resistor_Mode	: 2;
	Integer_Unsigned_32_Bit	Hysteresis_Mode	: 1;
	Integer_Unsigned_32_Bit					: 4;
	Integer_Unsigned_32_Bit	Open_Drain_Mode : 1;
}
	Structure_IO_Configuration_GPIO_1_Pin_6_Configuration_Register_Internal;

/* IO配置的GPIO端口1引脚6配置寄存器 */
typedef	union	Tag_IO_Configuration_GPIO_1_Pin_6_Configuration_Register
{
	Integer_Unsigned_32_Bit													Value;
	Structure_IO_Configuration_GPIO_1_Pin_6_Configuration_Register_Internal	Internal;
}
	Union_IO_Configuration_GPIO_1_Pin_6_Configuration_Register;

/* IO配置的GPIO端口1引脚7配置寄存器内部 */
typedef	struct	Tag_IO_Configuration_GPIO_1_Pin_7_Configuration_Register_Internal
{
	Integer_Unsigned_32_Bit	Pin_Function	: 3;
	Integer_Unsigned_32_Bit	Resistor_Mode	: 2;
	Integer_Unsigned_32_Bit	Hysteresis_Mode	: 1;
	Integer_Unsigned_32_Bit					: 4;
	Integer_Unsigned_32_Bit	Open_Drain_Mode : 1;
}
	Structure_IO_Configuration_GPIO_1_Pin_7_Configuration_Register_Internal;

/* IO配置的GPIO端口1引脚7配置寄存器 */
typedef	union	Tag_IO_Configuration_GPIO_1_Pin_7_Configuration_Register
{
	Integer_Unsigned_32_Bit													Value;
	Structure_IO_Configuration_GPIO_1_Pin_7_Configuration_Register_Internal	Internal;
}
	Union_IO_Configuration_GPIO_1_Pin_7_Configuration_Register;

/* IO配置的GPIO端口3引脚3配置寄存器内部 */
typedef	struct	Tag_IO_Configuration_GPIO_3_Pin_3_Configuration_Register_Internal
{
	Integer_Unsigned_32_Bit	Pin_Function	: 3;
	Integer_Unsigned_32_Bit	Resistor_Mode	: 2;
	Integer_Unsigned_32_Bit	Hysteresis_Mode	: 1;
	Integer_Unsigned_32_Bit					: 4;
	Integer_Unsigned_32_Bit	Open_Drain_Mode : 1;
}
	Structure_IO_Configuration_GPIO_3_Pin_3_Configuration_Register_Internal;

/* IO配置的GPIO端口3引脚3配置寄存器 */
typedef	union	Tag_IO_Configuration_GPIO_3_Pin_3_Configuration_Register
{
	Integer_Unsigned_32_Bit													Value;
	Structure_IO_Configuration_GPIO_3_Pin_3_Configuration_Register_Internal	Internal;
}
	Union_IO_Configuration_GPIO_3_Pin_3_Configuration_Register;

/* IO配置的引脚SCK位置寄存器内部 */
typedef	struct	Tag_IO_Configuration_Pin_SCK_Location_Register_Internal
{
	Integer_Unsigned_32_Bit	Pin_Location : 2;
}
	Structure_IO_Configuration_Pin_SCK_Location_Register_Internal;

/* IO配置的引脚SCK位置寄存器 */
typedef	union	Tag_IO_Configuration_Pin_SCK_Location_Register
{
	Integer_Unsigned_32_Bit											Value;
	Structure_IO_Configuration_Pin_SCK_Location_Register_Internal	Internal;
}
	Union_IO_Configuration_Pin_SCK_Location_Register;

/* IO配置的引脚DSR位置寄存器内部 */
typedef	struct	Tag_IO_Configuration_Pin_DSR_Location_Register_Internal
{
	Integer_Unsigned_32_Bit	Pin_Location : 2;
}
	Structure_IO_Configuration_Pin_DSR_Location_Register_Internal;

/* IO配置的引脚DSR位置寄存器 */
typedef	union	Tag_IO_Configuration_Pin_DSR_Location_Register
{
	Integer_Unsigned_32_Bit											Value;
	Structure_IO_Configuration_Pin_DSR_Location_Register_Internal	Internal;
}
	Union_IO_Configuration_Pin_DSR_Location_Register;

/* IO配置的引脚DCD位置寄存器内部 */
typedef	struct	Tag_IO_Configuration_Pin_DCD_Location_Register_Internal
{
	Integer_Unsigned_32_Bit	Pin_Location : 2;
}
	Structure_IO_Configuration_Pin_DCD_Location_Register_Internal;

/* IO配置的引脚DCD位置寄存器 */
typedef	union	Tag_IO_Configuration_Pin_DCD_Location_Register
{
	Integer_Unsigned_32_Bit											Value;
	Structure_IO_Configuration_Pin_DCD_Location_Register_Internal	Internal;
}
	Union_IO_Configuration_Pin_DCD_Location_Register;

/* IO配置的引脚RI位置寄存器内部 */
typedef	struct	Tag_IO_Configuration_Pin_RI_Location_Register_Internal
{
	Integer_Unsigned_32_Bit	Pin_Location : 2;
}
	Structure_IO_Configuration_Pin_RI_Location_Register_Internal;

/* IO配置的引脚RI位置寄存器 */
typedef	union	Tag_IO_Configuration_Pin_RI_Location_Register
{
	Integer_Unsigned_32_Bit											Value;
	Structure_IO_Configuration_Pin_RI_Location_Register_Internal	Internal;
}
	Union_IO_Configuration_Pin_RI_Location_Register;

/* 函数声明 */

/*
	功能：读IO配置的GPIO端口2引脚6配置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_2_Pin_6_Configuration_Register(void);

/*
	功能：写IO配置的GPIO端口2引脚6配置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_GPIO_2_Pin_6_Configuration_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读IO配置的GPIO端口2引脚0配置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_2_Pin_0_Configuration_Register(void);

/*
	功能：写IO配置的GPIO端口2引脚0配置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_GPIO_2_Pin_0_Configuration_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读IO配置的GPIO端口0引脚0配置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_0_Pin_0_Configuration_Register(void);

/*
	功能：写IO配置的GPIO端口0引脚0配置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_GPIO_0_Pin_0_Configuration_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读IO配置的GPIO端口0引脚1配置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_0_Pin_1_Configuration_Register(void);

/*
	功能：写IO配置的GPIO端口0引脚1配置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_GPIO_0_Pin_1_Configuration_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读IO配置的GPIO端口1引脚8配置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_1_Pin_8_Configuration_Register(void);

/*
	功能：写IO配置的GPIO端口1引脚8配置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_GPIO_1_Pin_8_Configuration_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读IO配置的GPIO端口0引脚2配置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_0_Pin_2_Configuration_Register(void);

/*
	功能：写IO配置的GPIO端口0引脚2配置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_GPIO_0_Pin_2_Configuration_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读IO配置的GPIO端口2引脚7配置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_2_Pin_7_Configuration_Register(void);

/*
	功能：写IO配置的GPIO端口2引脚7配置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_GPIO_2_Pin_7_Configuration_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读IO配置的GPIO端口2引脚8配置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_2_Pin_8_Configuration_Register(void);

/*
	功能：写IO配置的GPIO端口2引脚8配置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_GPIO_2_Pin_8_Configuration_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读IO配置的GPIO端口2引脚1配置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_2_Pin_1_Configuration_Register(void);

/*
	功能：写IO配置的GPIO端口2引脚1配置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_GPIO_2_Pin_1_Configuration_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读IO配置的GPIO端口0引脚3配置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_0_Pin_3_Configuration_Register(void);

/*
	功能：写IO配置的GPIO端口0引脚3配置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_GPIO_0_Pin_3_Configuration_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读IO配置的GPIO端口0引脚4配置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_0_Pin_4_Configuration_Register(void);

/*
	功能：写IO配置的GPIO端口0引脚4配置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_GPIO_0_Pin_4_Configuration_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读IO配置的GPIO端口0引脚5配置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_0_Pin_5_Configuration_Register(void);

/*
	功能：写IO配置的GPIO端口0引脚5配置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_GPIO_0_Pin_5_Configuration_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读IO配置的GPIO端口1引脚9配置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_1_Pin_9_Configuration_Register(void);

/*
	功能：写IO配置的GPIO端口1引脚9配置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_GPIO_1_Pin_9_Configuration_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读IO配置的GPIO端口3引脚4配置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_3_Pin_4_Configuration_Register(void);

/*
	功能：写IO配置的GPIO端口3引脚4配置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_GPIO_3_Pin_4_Configuration_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读IO配置的GPIO端口2引脚4配置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_2_Pin_4_Configuration_Register(void);

/*
	功能：写IO配置的GPIO端口2引脚4配置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_GPIO_2_Pin_4_Configuration_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读IO配置的GPIO端口2引脚5配置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_2_Pin_5_Configuration_Register(void);

/*
	功能：写IO配置的GPIO端口2引脚5配置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_GPIO_2_Pin_5_Configuration_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读IO配置的GPIO端口3引脚5配置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_3_Pin_5_Configuration_Register(void);

/*
	功能：写IO配置的GPIO端口3引脚5配置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_GPIO_3_Pin_5_Configuration_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读IO配置的GPIO端口0引脚6配置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_0_Pin_6_Configuration_Register(void);

/*
	功能：写IO配置的GPIO端口0引脚6配置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_GPIO_0_Pin_6_Configuration_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读IO配置的GPIO端口0引脚7配置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_0_Pin_7_Configuration_Register(void);

/*
	功能：写IO配置的GPIO端口0引脚7配置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_GPIO_0_Pin_7_Configuration_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读IO配置的GPIO端口2引脚9配置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_2_Pin_9_Configuration_Register(void);

/*
	功能：写IO配置的GPIO端口2引脚9配置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_GPIO_2_Pin_9_Configuration_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读IO配置的GPIO端口2引脚10配置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_2_Pin_10_Configuration_Register(void);

/*
	功能：写IO配置的GPIO端口2引脚10配置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_GPIO_2_Pin_10_Configuration_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读IO配置的GPIO端口2引脚2配置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_2_Pin_2_Configuration_Register(void);

/*
	功能：写IO配置的GPIO端口2引脚2配置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_GPIO_2_Pin_2_Configuration_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读IO配置的GPIO端口0引脚8配置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_0_Pin_8_Configuration_Register(void);

/*
	功能：写IO配置的GPIO端口0引脚8配置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_GPIO_0_Pin_8_Configuration_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读IO配置的GPIO端口0引脚9配置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_0_Pin_9_Configuration_Register(void);

/*
	功能：写IO配置的GPIO端口0引脚9配置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_GPIO_0_Pin_9_Configuration_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读IO配置的GPIO端口0引脚10配置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_0_Pin_10_Configuration_Register(void);

/*
	功能：写IO配置的GPIO端口0引脚10配置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_GPIO_0_Pin_10_Configuration_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读IO配置的GPIO端口1引脚10配置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_1_Pin_10_Configuration_Register(void);

/*
	功能：写IO配置的GPIO端口1引脚10配置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_GPIO_1_Pin_10_Configuration_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读IO配置的GPIO端口2引脚11配置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_2_Pin_11_Configuration_Register(void);

/*
	功能：写IO配置的GPIO端口2引脚11配置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_GPIO_2_Pin_11_Configuration_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读IO配置的GPIO端口0引脚11配置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_0_Pin_11_Configuration_Register(void);

/*
	功能：写IO配置的GPIO端口0引脚11配置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_GPIO_0_Pin_11_Configuration_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读IO配置的GPIO端口1引脚0配置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_1_Pin_0_Configuration_Register(void);

/*
	功能：写IO配置的GPIO端口1引脚0配置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_GPIO_1_Pin_0_Configuration_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读IO配置的GPIO端口1引脚1配置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_1_Pin_1_Configuration_Register(void);

/*
	功能：写IO配置的GPIO端口1引脚1配置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_GPIO_1_Pin_1_Configuration_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读IO配置的GPIO端口1引脚2配置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_1_Pin_2_Configuration_Register(void);

/*
	功能：写IO配置的GPIO端口1引脚2配置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_GPIO_1_Pin_2_Configuration_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读IO配置的GPIO端口3引脚0配置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_3_Pin_0_Configuration_Register(void);

/*
	功能：写IO配置的GPIO端口3引脚0配置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_GPIO_3_Pin_0_Configuration_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读IO配置的GPIO端口3引脚1配置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_3_Pin_1_Configuration_Register(void);

/*
	功能：写IO配置的GPIO端口3引脚1配置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_GPIO_3_Pin_1_Configuration_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读IO配置的GPIO端口2引脚3配置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_2_Pin_3_Configuration_Register(void);

/*
	功能：写IO配置的GPIO端口2引脚3配置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_GPIO_2_Pin_3_Configuration_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读IO配置的GPIO端口1引脚3配置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_1_Pin_3_Configuration_Register(void);

/*
	功能：写IO配置的GPIO端口1引脚3配置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_GPIO_1_Pin_3_Configuration_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读IO配置的GPIO端口1引脚4配置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_1_Pin_4_Configuration_Register(void);

/*
	功能：写IO配置的GPIO端口1引脚4配置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_GPIO_1_Pin_4_Configuration_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读IO配置的GPIO端口1引脚11配置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_1_Pin_11_Configuration_Register(void);

/*
	功能：写IO配置的GPIO端口1引脚11配置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_GPIO_1_Pin_11_Configuration_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读IO配置的GPIO端口3引脚2配置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_3_Pin_2_Configuration_Register(void);

/*
	功能：写IO配置的GPIO端口3引脚2配置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_GPIO_3_Pin_2_Configuration_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读IO配置的GPIO端口1引脚5配置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_1_Pin_5_Configuration_Register(void);

/*
	功能：写IO配置的GPIO端口1引脚5配置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_GPIO_1_Pin_5_Configuration_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读IO配置的GPIO端口1引脚6配置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_1_Pin_6_Configuration_Register(void);

/*
	功能：写IO配置的GPIO端口1引脚6配置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_GPIO_1_Pin_6_Configuration_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读IO配置的GPIO端口1引脚7配置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_1_Pin_7_Configuration_Register(void);

/*
	功能：写IO配置的GPIO端口1引脚7配置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_GPIO_1_Pin_7_Configuration_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读IO配置的GPIO端口3引脚3配置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_3_Pin_3_Configuration_Register(void);

/*
	功能：写IO配置的GPIO端口3引脚3配置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_GPIO_3_Pin_3_Configuration_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读IO配置的引脚SCK位置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_Pin_SCK_Location_Register_Register(void);

/*
	功能：写IO配置的引脚SCK位置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_Pin_SCK_Location_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读IO配置的引脚DSR位置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_Pin_DSR_Location_Register_Register(void);

/*
	功能：写IO配置的引脚DSR位置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_Pin_DSR_Location_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读IO配置的引脚DCD位置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_Pin_DCD_Location_Register_Register(void);

/*
	功能：写IO配置的引脚DCD位置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_Pin_DCD_Location_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	功能：读IO配置的引脚RI位置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_Pin_RI_Location_Register_Register(void);

/*
	功能：写IO配置的引脚RI位置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_Pin_RI_Location_Register(Integer_Unsigned_32_Bit Register_Value);

#endif
