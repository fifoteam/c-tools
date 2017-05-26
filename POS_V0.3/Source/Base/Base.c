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

#include	"Base.h"

/* 函数定义 */

/*
	功能：从存储器读出8位值
	参数：Integer_Unsigned_32_Bit Memory_Address，存储器的地址
	返回：Integer_Unsigned_8_Bit，存储器的值
*/
Integer_Unsigned_8_Bit	Read_Memory_8_Bit(Integer_Unsigned_32_Bit Memory_Address)
{
	return *((Integer_Unsigned_8_Bit *) Memory_Address);
}

/*
	功能：向存储器写入8位值
	参数：Integer_Unsigned_32_Bit Memory_Address，存储器的地址
		  Integer_Unsigned_8_Bit Memory_Value，存储器的值
	返回：无
*/
void	Write_Memory_8_Bit(Integer_Unsigned_32_Bit Memory_Address, Integer_Unsigned_8_Bit Memory_Value)
{
	*((Integer_Unsigned_8_Bit *) Memory_Address) = Memory_Value;
}

/*
	功能：从存储器读出16位值
	参数：Integer_Unsigned_32_Bit Memory_Address，存储器的地址
	返回：Integer_Unsigned_16_Bit，存储器的值
*/
Integer_Unsigned_16_Bit	Read_Memory_16_Bit(Integer_Unsigned_32_Bit Memory_Address)
{
	return *((Integer_Unsigned_16_Bit *) Memory_Address);
}

/*
	功能：向存储器写入16位值
	参数：Integer_Unsigned_32_Bit Memory_Address，存储器的地址
		  Integer_Unsigned_16_Bit Memory_Value，存储器的值
	返回：无
*/
void	Write_Memory_16_Bit(Integer_Unsigned_32_Bit Memory_Address, Integer_Unsigned_16_Bit Memory_Value)
{
	*((Integer_Unsigned_16_Bit *) Memory_Address) = Memory_Value;
}

/*
	功能：从存储器读出32位值
	参数：Integer_Unsigned_32_Bit Memory_Address，存储器的地址
	返回：Integer_Unsigned_32_Bit，存储器的值
*/
Integer_Unsigned_32_Bit	Read_Memory_32_Bit(Integer_Unsigned_32_Bit Memory_Address)
{
	return *((Integer_Unsigned_32_Bit *) Memory_Address);
}

/*
	功能：向存储器写入32位值
	参数：Integer_Unsigned_32_Bit Memory_Address，存储器的地址
		  Integer_Unsigned_32_Bit Memory_Value，存储器的值
	返回：无
*/
void	Write_Memory_32_Bit(Integer_Unsigned_32_Bit Memory_Address, Integer_Unsigned_32_Bit Memory_Value)
{
	*((Integer_Unsigned_32_Bit *) Memory_Address) = Memory_Value;
}

/*
	功能：从寄存器读出8位值
	参数：Integer_Unsigned_32_Bit Register_Address，寄存器的地址
	返回：Integer_Unsigned_8_Bit，寄存器的值
*/
Integer_Unsigned_8_Bit	Read_Register_8_Bit(Integer_Unsigned_32_Bit Register_Address)
{
	return *((volatile Integer_Unsigned_8_Bit *) Register_Address);
}

/*
	功能：向寄存器写入8位值
	参数：Integer_Unsigned_32_Bit Register_Address，寄存器的地址
		  Integer_Unsigned_8_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_Register_8_Bit(Integer_Unsigned_32_Bit Register_Address, Integer_Unsigned_8_Bit Register_Value)
{
	*((volatile Integer_Unsigned_8_Bit *) Register_Address) = Register_Value;
}

/*
	功能：从寄存器读出16位值
	参数：Integer_Unsigned_32_Bit Register_Address，寄存器的地址
	返回：Integer_Unsigned_16_Bit，寄存器的值
*/
Integer_Unsigned_16_Bit	Read_Register_16_Bit(Integer_Unsigned_32_Bit Register_Address)
{
	return *((volatile Integer_Unsigned_16_Bit *) Register_Address);
}

/*
	功能：向寄存器写入16位值
	参数：Integer_Unsigned_32_Bit Register_Address，寄存器的地址
		  Integer_Unsigned_16_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_Register_16_Bit(Integer_Unsigned_32_Bit Register_Address, Integer_Unsigned_16_Bit Register_Value)
{
	*((volatile Integer_Unsigned_16_Bit *) Register_Address) = Register_Value;
}

/*
	功能：从寄存器读出32位值
	参数：Integer_Unsigned_32_Bit Register_Address，寄存器的地址
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_Register_32_Bit(Integer_Unsigned_32_Bit Register_Address)
{
	return *((volatile Integer_Unsigned_32_Bit *) Register_Address);
}

/*
	功能：向寄存器写入32位值
	参数：Integer_Unsigned_32_Bit Register_Address，寄存器的地址
		  Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_Register_32_Bit(Integer_Unsigned_32_Bit Register_Address, Integer_Unsigned_32_Bit Register_Value)
{
	*((volatile Integer_Unsigned_32_Bit *) Register_Address) = Register_Value;
}
