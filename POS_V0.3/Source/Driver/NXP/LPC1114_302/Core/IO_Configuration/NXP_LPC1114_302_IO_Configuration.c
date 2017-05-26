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

#include	"NXP_LPC1114_302_IO_Configuration.h"

/* 数据定义 */

/* IO配置的寄存器地址 */
const Integer_Unsigned_32_Bit	IO_Configuration_GPIO_2_Pin_6_Configuration_Register_Address  = 0x40044000;
const Integer_Unsigned_32_Bit	IO_Configuration_GPIO_2_Pin_0_Configuration_Register_Address  = 0x40044008;
const Integer_Unsigned_32_Bit	IO_Configuration_GPIO_0_Pin_0_Configuration_Register_Address  = 0x4004400C;
const Integer_Unsigned_32_Bit	IO_Configuration_GPIO_0_Pin_1_Configuration_Register_Address  = 0x40044010;
const Integer_Unsigned_32_Bit	IO_Configuration_GPIO_1_Pin_8_Configuration_Register_Address  = 0x40044014;
const Integer_Unsigned_32_Bit	IO_Configuration_GPIO_0_Pin_2_Configuration_Register_Address  = 0x4004401C;
const Integer_Unsigned_32_Bit	IO_Configuration_GPIO_2_Pin_7_Configuration_Register_Address  = 0x40044020;
const Integer_Unsigned_32_Bit	IO_Configuration_GPIO_2_Pin_8_Configuration_Register_Address  = 0x40044024;
const Integer_Unsigned_32_Bit	IO_Configuration_GPIO_2_Pin_1_Configuration_Register_Address  = 0x40044028;
const Integer_Unsigned_32_Bit	IO_Configuration_GPIO_0_Pin_3_Configuration_Register_Address  = 0x4004402C;
const Integer_Unsigned_32_Bit	IO_Configuration_GPIO_0_Pin_4_Configuration_Register_Address  = 0x40044030;
const Integer_Unsigned_32_Bit	IO_Configuration_GPIO_0_Pin_5_Configuration_Register_Address  = 0x40044034;
const Integer_Unsigned_32_Bit	IO_Configuration_GPIO_1_Pin_9_Configuration_Register_Address  = 0x40044038;
const Integer_Unsigned_32_Bit	IO_Configuration_GPIO_3_Pin_4_Configuration_Register_Address  = 0x4004403C;
const Integer_Unsigned_32_Bit	IO_Configuration_GPIO_2_Pin_4_Configuration_Register_Address  = 0x40044040;
const Integer_Unsigned_32_Bit	IO_Configuration_GPIO_2_Pin_5_Configuration_Register_Address  = 0x40044044;
const Integer_Unsigned_32_Bit	IO_Configuration_GPIO_3_Pin_5_Configuration_Register_Address  = 0x40044048;
const Integer_Unsigned_32_Bit	IO_Configuration_GPIO_0_Pin_6_Configuration_Register_Address  = 0x4004404C;
const Integer_Unsigned_32_Bit	IO_Configuration_GPIO_0_Pin_7_Configuration_Register_Address  = 0x40044050;
const Integer_Unsigned_32_Bit	IO_Configuration_GPIO_2_Pin_9_Configuration_Register_Address  = 0x40044054;
const Integer_Unsigned_32_Bit	IO_Configuration_GPIO_2_Pin_10_Configuration_Register_Address = 0x40044058;
const Integer_Unsigned_32_Bit	IO_Configuration_GPIO_2_Pin_2_Configuration_Register_Address  = 0x4004405C;
const Integer_Unsigned_32_Bit	IO_Configuration_GPIO_0_Pin_8_Configuration_Register_Address  = 0x40044060;
const Integer_Unsigned_32_Bit	IO_Configuration_GPIO_0_Pin_9_Configuration_Register_Address  = 0x40044064;
const Integer_Unsigned_32_Bit	IO_Configuration_GPIO_0_Pin_10_Configuration_Register_Address = 0x40044068;
const Integer_Unsigned_32_Bit	IO_Configuration_GPIO_1_Pin_10_Configuration_Register_Address = 0x4004406C;
const Integer_Unsigned_32_Bit	IO_Configuration_GPIO_2_Pin_11_Configuration_Register_Address = 0x40044070;
const Integer_Unsigned_32_Bit	IO_Configuration_GPIO_0_Pin_11_Configuration_Register_Address = 0x40044074;
const Integer_Unsigned_32_Bit	IO_Configuration_GPIO_1_Pin_0_Configuration_Register_Address  = 0x40044078;
const Integer_Unsigned_32_Bit	IO_Configuration_GPIO_1_Pin_1_Configuration_Register_Address  = 0x4004407C;
const Integer_Unsigned_32_Bit	IO_Configuration_GPIO_1_Pin_2_Configuration_Register_Address  = 0x40044080;
const Integer_Unsigned_32_Bit	IO_Configuration_GPIO_3_Pin_0_Configuration_Register_Address  = 0x40044084;
const Integer_Unsigned_32_Bit	IO_Configuration_GPIO_3_Pin_1_Configuration_Register_Address  = 0x40044088;
const Integer_Unsigned_32_Bit	IO_Configuration_GPIO_2_Pin_3_Configuration_Register_Address  = 0x4004408C;
const Integer_Unsigned_32_Bit	IO_Configuration_GPIO_1_Pin_3_Configuration_Register_Address  = 0x40044090;
const Integer_Unsigned_32_Bit	IO_Configuration_GPIO_1_Pin_4_Configuration_Register_Address  = 0x40044094;
const Integer_Unsigned_32_Bit	IO_Configuration_GPIO_1_Pin_11_Configuration_Register_Address = 0x40044098;
const Integer_Unsigned_32_Bit	IO_Configuration_GPIO_3_Pin_2_Configuration_Register_Address  = 0x4004409C;
const Integer_Unsigned_32_Bit	IO_Configuration_GPIO_1_Pin_5_Configuration_Register_Address  = 0x400440A0;
const Integer_Unsigned_32_Bit	IO_Configuration_GPIO_1_Pin_6_Configuration_Register_Address  = 0x400440A4;
const Integer_Unsigned_32_Bit	IO_Configuration_GPIO_1_Pin_7_Configuration_Register_Address  = 0x400440A8;
const Integer_Unsigned_32_Bit	IO_Configuration_GPIO_3_Pin_3_Configuration_Register_Address  = 0x400440AC;
const Integer_Unsigned_32_Bit	IO_Configuration_Pin_SCK_Location_Register_Address			  = 0x400440B0;
const Integer_Unsigned_32_Bit	IO_Configuration_Pin_DSR_Location_Register_Address			  = 0x400440B4;
const Integer_Unsigned_32_Bit	IO_Configuration_Pin_DCD_Location_Register_Address			  = 0x400440B8;
const Integer_Unsigned_32_Bit	IO_Configuration_Pin_RI_Location_Register_Address			  = 0x400440BC;

/* 函数定义 */

/*
	功能：读IO配置的GPIO端口2引脚6配置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_2_Pin_6_Configuration_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_GPIO_2_Pin_6_Configuration_Register_Address);
}

/*
	功能：写IO配置的GPIO端口2引脚6配置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_GPIO_2_Pin_6_Configuration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_GPIO_2_Pin_6_Configuration_Register_Address, Register_Value);
}

/*
	功能：读IO配置的GPIO端口2引脚0配置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_2_Pin_0_Configuration_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_GPIO_2_Pin_0_Configuration_Register_Address);
}

/*
	功能：写IO配置的GPIO端口2引脚0配置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_GPIO_2_Pin_0_Configuration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_GPIO_2_Pin_0_Configuration_Register_Address, Register_Value);
}

/*
	功能：读IO配置的GPIO端口0引脚0配置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_0_Pin_0_Configuration_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_GPIO_0_Pin_0_Configuration_Register_Address);
}

/*
	功能：写IO配置的GPIO端口0引脚0配置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_GPIO_0_Pin_0_Configuration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_GPIO_0_Pin_0_Configuration_Register_Address, Register_Value);
}

/*
	功能：读IO配置的GPIO端口0引脚1配置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_0_Pin_1_Configuration_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_GPIO_0_Pin_1_Configuration_Register_Address);
}

/*
	功能：写IO配置的GPIO端口0引脚1配置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_GPIO_0_Pin_1_Configuration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_GPIO_0_Pin_1_Configuration_Register_Address, Register_Value);
}

/*
	功能：读IO配置的GPIO端口1引脚8配置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_1_Pin_8_Configuration_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_GPIO_1_Pin_8_Configuration_Register_Address);
}

/*
	功能：写IO配置的GPIO端口1引脚8配置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_GPIO_1_Pin_8_Configuration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_GPIO_1_Pin_8_Configuration_Register_Address, Register_Value);
}

/*
	功能：读IO配置的GPIO端口0引脚2配置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_0_Pin_2_Configuration_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_GPIO_0_Pin_2_Configuration_Register_Address);
}

/*
	功能：写IO配置的GPIO端口0引脚2配置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_GPIO_0_Pin_2_Configuration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_GPIO_0_Pin_2_Configuration_Register_Address, Register_Value);
}

/*
	功能：读IO配置的GPIO端口2引脚7配置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_2_Pin_7_Configuration_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_GPIO_2_Pin_7_Configuration_Register_Address);
}

/*
	功能：写IO配置的GPIO端口2引脚7配置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_GPIO_2_Pin_7_Configuration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_GPIO_2_Pin_7_Configuration_Register_Address, Register_Value);
}

/*
	功能：读IO配置的GPIO端口2引脚8配置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_2_Pin_8_Configuration_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_GPIO_2_Pin_8_Configuration_Register_Address);
}

/*
	功能：写IO配置的GPIO端口2引脚8配置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_GPIO_2_Pin_8_Configuration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_GPIO_2_Pin_8_Configuration_Register_Address, Register_Value);
}

/*
	功能：读IO配置的GPIO端口2引脚1配置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_2_Pin_1_Configuration_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_GPIO_2_Pin_1_Configuration_Register_Address);
}

/*
	功能：写IO配置的GPIO端口2引脚1配置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_GPIO_2_Pin_1_Configuration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_GPIO_2_Pin_1_Configuration_Register_Address, Register_Value);
}

/*
	功能：读IO配置的GPIO端口0引脚3配置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_0_Pin_3_Configuration_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_GPIO_0_Pin_3_Configuration_Register_Address);
}

/*
	功能：写IO配置的GPIO端口0引脚3配置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_GPIO_0_Pin_3_Configuration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_GPIO_0_Pin_3_Configuration_Register_Address, Register_Value);
}

/*
	功能：读IO配置的GPIO端口0引脚4配置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_0_Pin_4_Configuration_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_GPIO_0_Pin_4_Configuration_Register_Address);
}

/*
	功能：写IO配置的GPIO端口0引脚4配置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_GPIO_0_Pin_4_Configuration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_GPIO_0_Pin_4_Configuration_Register_Address, Register_Value);
}

/*
	功能：读IO配置的GPIO端口0引脚5配置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_0_Pin_5_Configuration_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_GPIO_0_Pin_5_Configuration_Register_Address);
}

/*
	功能：写IO配置的GPIO端口0引脚5配置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_GPIO_0_Pin_5_Configuration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_GPIO_0_Pin_5_Configuration_Register_Address, Register_Value);
}

/*
	功能：读IO配置的GPIO端口1引脚9配置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_1_Pin_9_Configuration_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_GPIO_1_Pin_9_Configuration_Register_Address);
}

/*
	功能：写IO配置的GPIO端口1引脚9配置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_GPIO_1_Pin_9_Configuration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_GPIO_1_Pin_9_Configuration_Register_Address, Register_Value);
}

/*
	功能：读IO配置的GPIO端口3引脚4配置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_3_Pin_4_Configuration_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_GPIO_3_Pin_4_Configuration_Register_Address);
}

/*
	功能：写IO配置的GPIO端口3引脚4配置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_GPIO_3_Pin_4_Configuration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_GPIO_3_Pin_4_Configuration_Register_Address, Register_Value);
}

/*
	功能：读IO配置的GPIO端口2引脚4配置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_2_Pin_4_Configuration_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_GPIO_2_Pin_4_Configuration_Register_Address);
}

/*
	功能：写IO配置的GPIO端口2引脚4配置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_GPIO_2_Pin_4_Configuration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_GPIO_2_Pin_4_Configuration_Register_Address, Register_Value);
}

/*
	功能：读IO配置的GPIO端口2引脚5配置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_2_Pin_5_Configuration_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_GPIO_2_Pin_5_Configuration_Register_Address);
}

/*
	功能：写IO配置的GPIO端口2引脚5配置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_GPIO_2_Pin_5_Configuration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_GPIO_2_Pin_5_Configuration_Register_Address, Register_Value);
}

/*
	功能：读IO配置的GPIO端口3引脚5配置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_3_Pin_5_Configuration_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_GPIO_3_Pin_5_Configuration_Register_Address);
}

/*
	功能：写IO配置的GPIO端口3引脚5配置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_GPIO_3_Pin_5_Configuration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_GPIO_3_Pin_5_Configuration_Register_Address, Register_Value);
}

/*
	功能：读IO配置的GPIO端口0引脚6配置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_0_Pin_6_Configuration_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_GPIO_0_Pin_6_Configuration_Register_Address);
}

/*
	功能：写IO配置的GPIO端口0引脚6配置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_GPIO_0_Pin_6_Configuration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_GPIO_0_Pin_6_Configuration_Register_Address, Register_Value);
}

/*
	功能：读IO配置的GPIO端口0引脚7配置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_0_Pin_7_Configuration_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_GPIO_0_Pin_7_Configuration_Register_Address);
}

/*
	功能：写IO配置的GPIO端口0引脚7配置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_GPIO_0_Pin_7_Configuration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_GPIO_0_Pin_7_Configuration_Register_Address, Register_Value);
}

/*
	功能：读IO配置的GPIO端口2引脚9配置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_2_Pin_9_Configuration_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_GPIO_2_Pin_9_Configuration_Register_Address);
}

/*
	功能：写IO配置的GPIO端口2引脚9配置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_GPIO_2_Pin_9_Configuration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_GPIO_2_Pin_9_Configuration_Register_Address, Register_Value);
}

/*
	功能：读IO配置的GPIO端口2引脚10配置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_2_Pin_10_Configuration_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_GPIO_2_Pin_10_Configuration_Register_Address);
}

/*
	功能：写IO配置的GPIO端口2引脚10配置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_GPIO_2_Pin_10_Configuration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_GPIO_2_Pin_10_Configuration_Register_Address, Register_Value);
}

/*
	功能：读IO配置的GPIO端口2引脚2配置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_2_Pin_2_Configuration_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_GPIO_2_Pin_2_Configuration_Register_Address);
}

/*
	功能：写IO配置的GPIO端口2引脚2配置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_GPIO_2_Pin_2_Configuration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_GPIO_2_Pin_2_Configuration_Register_Address, Register_Value);
}

/*
	功能：读IO配置的GPIO端口0引脚8配置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_0_Pin_8_Configuration_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_GPIO_0_Pin_8_Configuration_Register_Address);
}

/*
	功能：写IO配置的GPIO端口0引脚8配置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_GPIO_0_Pin_8_Configuration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_GPIO_0_Pin_8_Configuration_Register_Address, Register_Value);
}

/*
	功能：读IO配置的GPIO端口0引脚9配置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_0_Pin_9_Configuration_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_GPIO_0_Pin_9_Configuration_Register_Address);
}

/*
	功能：写IO配置的GPIO端口0引脚9配置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_GPIO_0_Pin_9_Configuration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_GPIO_0_Pin_9_Configuration_Register_Address, Register_Value);
}

/*
	功能：读IO配置的GPIO端口0引脚10配置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_0_Pin_10_Configuration_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_GPIO_0_Pin_10_Configuration_Register_Address);
}

/*
	功能：写IO配置的GPIO端口0引脚10配置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_GPIO_0_Pin_10_Configuration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_GPIO_0_Pin_10_Configuration_Register_Address, Register_Value);
}

/*
	功能：读IO配置的GPIO端口1引脚10配置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_1_Pin_10_Configuration_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_GPIO_1_Pin_10_Configuration_Register_Address);
}

/*
	功能：写IO配置的GPIO端口1引脚10配置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_GPIO_1_Pin_10_Configuration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_GPIO_1_Pin_10_Configuration_Register_Address, Register_Value);
}

/*
	功能：读IO配置的GPIO端口2引脚11配置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_2_Pin_11_Configuration_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_GPIO_2_Pin_11_Configuration_Register_Address);
}

/*
	功能：写IO配置的GPIO端口2引脚11配置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_GPIO_2_Pin_11_Configuration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_GPIO_2_Pin_11_Configuration_Register_Address, Register_Value);
}

/*
	功能：读IO配置的GPIO端口0引脚11配置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_0_Pin_11_Configuration_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_GPIO_0_Pin_11_Configuration_Register_Address);
}

/*
	功能：写IO配置的GPIO端口0引脚11配置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_GPIO_0_Pin_11_Configuration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_GPIO_0_Pin_11_Configuration_Register_Address, Register_Value);
}

/*
	功能：读IO配置的GPIO端口1引脚0配置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_1_Pin_0_Configuration_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_GPIO_1_Pin_0_Configuration_Register_Address);
}

/*
	功能：写IO配置的GPIO端口1引脚0配置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_GPIO_1_Pin_0_Configuration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_GPIO_1_Pin_0_Configuration_Register_Address, Register_Value);
}

/*
	功能：读IO配置的GPIO端口1引脚1配置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_1_Pin_1_Configuration_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_GPIO_1_Pin_1_Configuration_Register_Address);
}

/*
	功能：写IO配置的GPIO端口1引脚1配置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_GPIO_1_Pin_1_Configuration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_GPIO_1_Pin_1_Configuration_Register_Address, Register_Value);
}

/*
	功能：读IO配置的GPIO端口1引脚2配置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_1_Pin_2_Configuration_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_GPIO_1_Pin_2_Configuration_Register_Address);
}

/*
	功能：写IO配置的GPIO端口1引脚2配置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_GPIO_1_Pin_2_Configuration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_GPIO_1_Pin_2_Configuration_Register_Address, Register_Value);
}

/*
	功能：读IO配置的GPIO端口3引脚0配置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_3_Pin_0_Configuration_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_GPIO_3_Pin_0_Configuration_Register_Address);
}

/*
	功能：写IO配置的GPIO端口3引脚0配置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_GPIO_3_Pin_0_Configuration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_GPIO_3_Pin_0_Configuration_Register_Address, Register_Value);
}

/*
	功能：读IO配置的GPIO端口3引脚1配置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_3_Pin_1_Configuration_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_GPIO_3_Pin_1_Configuration_Register_Address);
}

/*
	功能：写IO配置的GPIO端口3引脚1配置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_GPIO_3_Pin_1_Configuration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_GPIO_3_Pin_1_Configuration_Register_Address, Register_Value);
}

/*
	功能：读IO配置的GPIO端口2引脚3配置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_2_Pin_3_Configuration_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_GPIO_2_Pin_3_Configuration_Register_Address);
}

/*
	功能：写IO配置的GPIO端口2引脚3配置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_GPIO_2_Pin_3_Configuration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_GPIO_2_Pin_3_Configuration_Register_Address, Register_Value);
}

/*
	功能：读IO配置的GPIO端口1引脚3配置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_1_Pin_3_Configuration_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_GPIO_1_Pin_3_Configuration_Register_Address);
}

/*
	功能：写IO配置的GPIO端口1引脚3配置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_GPIO_1_Pin_3_Configuration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_GPIO_1_Pin_3_Configuration_Register_Address, Register_Value);
}

/*
	功能：读IO配置的GPIO端口1引脚4配置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_1_Pin_4_Configuration_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_GPIO_1_Pin_4_Configuration_Register_Address);
}

/*
	功能：写IO配置的GPIO端口1引脚4配置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_GPIO_1_Pin_4_Configuration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_GPIO_1_Pin_4_Configuration_Register_Address, Register_Value);
}

/*
	功能：读IO配置的GPIO端口1引脚11配置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_1_Pin_11_Configuration_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_GPIO_1_Pin_11_Configuration_Register_Address);
}

/*
	功能：写IO配置的GPIO端口1引脚11配置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_GPIO_1_Pin_11_Configuration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_GPIO_1_Pin_11_Configuration_Register_Address, Register_Value);
}

/*
	功能：读IO配置的GPIO端口3引脚2配置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_3_Pin_2_Configuration_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_GPIO_3_Pin_2_Configuration_Register_Address);
}

/*
	功能：写IO配置的GPIO端口3引脚2配置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_GPIO_3_Pin_2_Configuration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_GPIO_3_Pin_2_Configuration_Register_Address, Register_Value);
}

/*
	功能：读IO配置的GPIO端口1引脚5配置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_1_Pin_5_Configuration_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_GPIO_1_Pin_5_Configuration_Register_Address);
}

/*
	功能：写IO配置的GPIO端口1引脚5配置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_GPIO_1_Pin_5_Configuration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_GPIO_1_Pin_5_Configuration_Register_Address, Register_Value);
}

/*
	功能：读IO配置的GPIO端口1引脚6配置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_1_Pin_6_Configuration_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_GPIO_1_Pin_6_Configuration_Register_Address);
}

/*
	功能：写IO配置的GPIO端口1引脚6配置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_GPIO_1_Pin_6_Configuration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_GPIO_1_Pin_6_Configuration_Register_Address, Register_Value);
}

/*
	功能：读IO配置的GPIO端口1引脚7配置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_1_Pin_7_Configuration_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_GPIO_1_Pin_7_Configuration_Register_Address);
}

/*
	功能：写IO配置的GPIO端口1引脚7配置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_GPIO_1_Pin_7_Configuration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_GPIO_1_Pin_7_Configuration_Register_Address, Register_Value);
}

/*
	功能：读IO配置的GPIO端口3引脚3配置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_3_Pin_3_Configuration_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_GPIO_3_Pin_3_Configuration_Register_Address);
}

/*
	功能：写IO配置的GPIO端口3引脚3配置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_GPIO_3_Pin_3_Configuration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_GPIO_3_Pin_3_Configuration_Register_Address, Register_Value);
}

/*
	功能：读IO配置的引脚SCK位置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_Pin_SCK_Location_Register_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_Pin_SCK_Location_Register_Address);
}

/*
	功能：写IO配置的引脚SCK位置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_Pin_SCK_Location_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_Pin_SCK_Location_Register_Address, Register_Value);
}

/*
	功能：读IO配置的引脚DSR位置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_Pin_DSR_Location_Register_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_Pin_DSR_Location_Register_Address);
}

/*
	功能：写IO配置的引脚DSR位置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_Pin_DSR_Location_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_Pin_DSR_Location_Register_Address, Register_Value);
}

/*
	功能：读IO配置的引脚DCD位置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_Pin_DCD_Location_Register_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_Pin_DCD_Location_Register_Address);
}

/*
	功能：写IO配置的引脚DCD位置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_Pin_DCD_Location_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_Pin_DCD_Location_Register_Address, Register_Value);
}

/*
	功能：读IO配置的引脚RI位置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_Pin_RI_Location_Register_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_Pin_RI_Location_Register_Address);
}

/*
	功能：写IO配置的引脚RI位置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_IO_Configuration_Pin_RI_Location_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_Pin_RI_Location_Register_Address, Register_Value);
}
