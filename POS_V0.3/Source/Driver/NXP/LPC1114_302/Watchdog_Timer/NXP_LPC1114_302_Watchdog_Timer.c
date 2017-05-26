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

#include	"NXP_LPC1114_302_Watchdog_Timer.h"

/* ���ݶ��� */

/* ��춨ʱ���Ĵ�����ַ */
const Integer_Unsigned_32_Bit	Watchdog_Timer_Mode_Register_Address	 = 0x40004000;
const Integer_Unsigned_32_Bit	Watchdog_Timer_Constant_Register_Address = 0x40004004;
const Integer_Unsigned_32_Bit	Watchdog_Timer_Feed_Register_Address	 = 0x40004008;
const Integer_Unsigned_32_Bit	Watchdog_Timer_Value_Register_Address	 = 0x4000400C;

/* �������� */

/*
	���ܣ�����춨ʱ��ģʽ�Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_Watchdog_Timer_Mode_Register(void)
{
	return Read_Register_32_Bit(Watchdog_Timer_Mode_Register_Address);
}

/*
	���ܣ�д��춨ʱ��ģʽ�Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_Watchdog_Timer_Mode_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(Watchdog_Timer_Mode_Register_Address, Register_Value);
}

/*
	���ܣ�����춨ʱ�������Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_Watchdog_Timer_Constant_Register(void)
{
	return Read_Register_32_Bit(Watchdog_Timer_Constant_Register_Address);
}

/*
	���ܣ�д��춨ʱ�������Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_Watchdog_Timer_Constant_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(Watchdog_Timer_Constant_Register_Address, Register_Value);
}

/*
	���ܣ�д��춨ʱ��ע��Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_Watchdog_Timer_Feed_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(Watchdog_Timer_Feed_Register_Address, Register_Value);
}

/*
	���ܣ�����춨ʱ��ֵ�Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_Watchdog_Timer_Value_Register(void)
{
	return Read_Register_32_Bit(Watchdog_Timer_Value_Register_Address);
}
