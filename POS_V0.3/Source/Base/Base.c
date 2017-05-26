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

#include	"Base.h"

/* �������� */

/*
	���ܣ��Ӵ洢������8λֵ
	������Integer_Unsigned_32_Bit Memory_Address���洢���ĵ�ַ
	���أ�Integer_Unsigned_8_Bit���洢����ֵ
*/
Integer_Unsigned_8_Bit	Read_Memory_8_Bit(Integer_Unsigned_32_Bit Memory_Address)
{
	return *((Integer_Unsigned_8_Bit *) Memory_Address);
}

/*
	���ܣ���洢��д��8λֵ
	������Integer_Unsigned_32_Bit Memory_Address���洢���ĵ�ַ
		  Integer_Unsigned_8_Bit Memory_Value���洢����ֵ
	���أ���
*/
void	Write_Memory_8_Bit(Integer_Unsigned_32_Bit Memory_Address, Integer_Unsigned_8_Bit Memory_Value)
{
	*((Integer_Unsigned_8_Bit *) Memory_Address) = Memory_Value;
}

/*
	���ܣ��Ӵ洢������16λֵ
	������Integer_Unsigned_32_Bit Memory_Address���洢���ĵ�ַ
	���أ�Integer_Unsigned_16_Bit���洢����ֵ
*/
Integer_Unsigned_16_Bit	Read_Memory_16_Bit(Integer_Unsigned_32_Bit Memory_Address)
{
	return *((Integer_Unsigned_16_Bit *) Memory_Address);
}

/*
	���ܣ���洢��д��16λֵ
	������Integer_Unsigned_32_Bit Memory_Address���洢���ĵ�ַ
		  Integer_Unsigned_16_Bit Memory_Value���洢����ֵ
	���أ���
*/
void	Write_Memory_16_Bit(Integer_Unsigned_32_Bit Memory_Address, Integer_Unsigned_16_Bit Memory_Value)
{
	*((Integer_Unsigned_16_Bit *) Memory_Address) = Memory_Value;
}

/*
	���ܣ��Ӵ洢������32λֵ
	������Integer_Unsigned_32_Bit Memory_Address���洢���ĵ�ַ
	���أ�Integer_Unsigned_32_Bit���洢����ֵ
*/
Integer_Unsigned_32_Bit	Read_Memory_32_Bit(Integer_Unsigned_32_Bit Memory_Address)
{
	return *((Integer_Unsigned_32_Bit *) Memory_Address);
}

/*
	���ܣ���洢��д��32λֵ
	������Integer_Unsigned_32_Bit Memory_Address���洢���ĵ�ַ
		  Integer_Unsigned_32_Bit Memory_Value���洢����ֵ
	���أ���
*/
void	Write_Memory_32_Bit(Integer_Unsigned_32_Bit Memory_Address, Integer_Unsigned_32_Bit Memory_Value)
{
	*((Integer_Unsigned_32_Bit *) Memory_Address) = Memory_Value;
}

/*
	���ܣ��ӼĴ�������8λֵ
	������Integer_Unsigned_32_Bit Register_Address���Ĵ����ĵ�ַ
	���أ�Integer_Unsigned_8_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_8_Bit	Read_Register_8_Bit(Integer_Unsigned_32_Bit Register_Address)
{
	return *((volatile Integer_Unsigned_8_Bit *) Register_Address);
}

/*
	���ܣ���Ĵ���д��8λֵ
	������Integer_Unsigned_32_Bit Register_Address���Ĵ����ĵ�ַ
		  Integer_Unsigned_8_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_Register_8_Bit(Integer_Unsigned_32_Bit Register_Address, Integer_Unsigned_8_Bit Register_Value)
{
	*((volatile Integer_Unsigned_8_Bit *) Register_Address) = Register_Value;
}

/*
	���ܣ��ӼĴ�������16λֵ
	������Integer_Unsigned_32_Bit Register_Address���Ĵ����ĵ�ַ
	���أ�Integer_Unsigned_16_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_16_Bit	Read_Register_16_Bit(Integer_Unsigned_32_Bit Register_Address)
{
	return *((volatile Integer_Unsigned_16_Bit *) Register_Address);
}

/*
	���ܣ���Ĵ���д��16λֵ
	������Integer_Unsigned_32_Bit Register_Address���Ĵ����ĵ�ַ
		  Integer_Unsigned_16_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_Register_16_Bit(Integer_Unsigned_32_Bit Register_Address, Integer_Unsigned_16_Bit Register_Value)
{
	*((volatile Integer_Unsigned_16_Bit *) Register_Address) = Register_Value;
}

/*
	���ܣ��ӼĴ�������32λֵ
	������Integer_Unsigned_32_Bit Register_Address���Ĵ����ĵ�ַ
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_Register_32_Bit(Integer_Unsigned_32_Bit Register_Address)
{
	return *((volatile Integer_Unsigned_32_Bit *) Register_Address);
}

/*
	���ܣ���Ĵ���д��32λֵ
	������Integer_Unsigned_32_Bit Register_Address���Ĵ����ĵ�ַ
		  Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_Register_32_Bit(Integer_Unsigned_32_Bit Register_Address, Integer_Unsigned_32_Bit Register_Value)
{
	*((volatile Integer_Unsigned_32_Bit *) Register_Address) = Register_Value;
}
