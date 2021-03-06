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

#include	"NXP_LPC1114_302_IO_Configuration.h"

/* ���ݶ��� */

/* IO���õļĴ�����ַ */
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

/* �������� */

/*
	���ܣ���IO���õ�GPIO�˿�2����6���üĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_2_Pin_6_Configuration_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_GPIO_2_Pin_6_Configuration_Register_Address);
}

/*
	���ܣ�дIO���õ�GPIO�˿�2����6���üĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_IO_Configuration_GPIO_2_Pin_6_Configuration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_GPIO_2_Pin_6_Configuration_Register_Address, Register_Value);
}

/*
	���ܣ���IO���õ�GPIO�˿�2����0���üĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_2_Pin_0_Configuration_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_GPIO_2_Pin_0_Configuration_Register_Address);
}

/*
	���ܣ�дIO���õ�GPIO�˿�2����0���üĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_IO_Configuration_GPIO_2_Pin_0_Configuration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_GPIO_2_Pin_0_Configuration_Register_Address, Register_Value);
}

/*
	���ܣ���IO���õ�GPIO�˿�0����0���üĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_0_Pin_0_Configuration_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_GPIO_0_Pin_0_Configuration_Register_Address);
}

/*
	���ܣ�дIO���õ�GPIO�˿�0����0���üĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_IO_Configuration_GPIO_0_Pin_0_Configuration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_GPIO_0_Pin_0_Configuration_Register_Address, Register_Value);
}

/*
	���ܣ���IO���õ�GPIO�˿�0����1���üĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_0_Pin_1_Configuration_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_GPIO_0_Pin_1_Configuration_Register_Address);
}

/*
	���ܣ�дIO���õ�GPIO�˿�0����1���üĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_IO_Configuration_GPIO_0_Pin_1_Configuration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_GPIO_0_Pin_1_Configuration_Register_Address, Register_Value);
}

/*
	���ܣ���IO���õ�GPIO�˿�1����8���üĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_1_Pin_8_Configuration_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_GPIO_1_Pin_8_Configuration_Register_Address);
}

/*
	���ܣ�дIO���õ�GPIO�˿�1����8���üĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_IO_Configuration_GPIO_1_Pin_8_Configuration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_GPIO_1_Pin_8_Configuration_Register_Address, Register_Value);
}

/*
	���ܣ���IO���õ�GPIO�˿�0����2���üĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_0_Pin_2_Configuration_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_GPIO_0_Pin_2_Configuration_Register_Address);
}

/*
	���ܣ�дIO���õ�GPIO�˿�0����2���üĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_IO_Configuration_GPIO_0_Pin_2_Configuration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_GPIO_0_Pin_2_Configuration_Register_Address, Register_Value);
}

/*
	���ܣ���IO���õ�GPIO�˿�2����7���üĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_2_Pin_7_Configuration_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_GPIO_2_Pin_7_Configuration_Register_Address);
}

/*
	���ܣ�дIO���õ�GPIO�˿�2����7���üĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_IO_Configuration_GPIO_2_Pin_7_Configuration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_GPIO_2_Pin_7_Configuration_Register_Address, Register_Value);
}

/*
	���ܣ���IO���õ�GPIO�˿�2����8���üĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_2_Pin_8_Configuration_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_GPIO_2_Pin_8_Configuration_Register_Address);
}

/*
	���ܣ�дIO���õ�GPIO�˿�2����8���üĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_IO_Configuration_GPIO_2_Pin_8_Configuration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_GPIO_2_Pin_8_Configuration_Register_Address, Register_Value);
}

/*
	���ܣ���IO���õ�GPIO�˿�2����1���üĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_2_Pin_1_Configuration_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_GPIO_2_Pin_1_Configuration_Register_Address);
}

/*
	���ܣ�дIO���õ�GPIO�˿�2����1���üĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_IO_Configuration_GPIO_2_Pin_1_Configuration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_GPIO_2_Pin_1_Configuration_Register_Address, Register_Value);
}

/*
	���ܣ���IO���õ�GPIO�˿�0����3���üĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_0_Pin_3_Configuration_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_GPIO_0_Pin_3_Configuration_Register_Address);
}

/*
	���ܣ�дIO���õ�GPIO�˿�0����3���üĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_IO_Configuration_GPIO_0_Pin_3_Configuration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_GPIO_0_Pin_3_Configuration_Register_Address, Register_Value);
}

/*
	���ܣ���IO���õ�GPIO�˿�0����4���üĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_0_Pin_4_Configuration_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_GPIO_0_Pin_4_Configuration_Register_Address);
}

/*
	���ܣ�дIO���õ�GPIO�˿�0����4���üĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_IO_Configuration_GPIO_0_Pin_4_Configuration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_GPIO_0_Pin_4_Configuration_Register_Address, Register_Value);
}

/*
	���ܣ���IO���õ�GPIO�˿�0����5���üĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_0_Pin_5_Configuration_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_GPIO_0_Pin_5_Configuration_Register_Address);
}

/*
	���ܣ�дIO���õ�GPIO�˿�0����5���üĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_IO_Configuration_GPIO_0_Pin_5_Configuration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_GPIO_0_Pin_5_Configuration_Register_Address, Register_Value);
}

/*
	���ܣ���IO���õ�GPIO�˿�1����9���üĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_1_Pin_9_Configuration_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_GPIO_1_Pin_9_Configuration_Register_Address);
}

/*
	���ܣ�дIO���õ�GPIO�˿�1����9���üĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_IO_Configuration_GPIO_1_Pin_9_Configuration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_GPIO_1_Pin_9_Configuration_Register_Address, Register_Value);
}

/*
	���ܣ���IO���õ�GPIO�˿�3����4���üĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_3_Pin_4_Configuration_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_GPIO_3_Pin_4_Configuration_Register_Address);
}

/*
	���ܣ�дIO���õ�GPIO�˿�3����4���üĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_IO_Configuration_GPIO_3_Pin_4_Configuration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_GPIO_3_Pin_4_Configuration_Register_Address, Register_Value);
}

/*
	���ܣ���IO���õ�GPIO�˿�2����4���üĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_2_Pin_4_Configuration_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_GPIO_2_Pin_4_Configuration_Register_Address);
}

/*
	���ܣ�дIO���õ�GPIO�˿�2����4���üĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_IO_Configuration_GPIO_2_Pin_4_Configuration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_GPIO_2_Pin_4_Configuration_Register_Address, Register_Value);
}

/*
	���ܣ���IO���õ�GPIO�˿�2����5���üĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_2_Pin_5_Configuration_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_GPIO_2_Pin_5_Configuration_Register_Address);
}

/*
	���ܣ�дIO���õ�GPIO�˿�2����5���üĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_IO_Configuration_GPIO_2_Pin_5_Configuration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_GPIO_2_Pin_5_Configuration_Register_Address, Register_Value);
}

/*
	���ܣ���IO���õ�GPIO�˿�3����5���üĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_3_Pin_5_Configuration_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_GPIO_3_Pin_5_Configuration_Register_Address);
}

/*
	���ܣ�дIO���õ�GPIO�˿�3����5���üĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_IO_Configuration_GPIO_3_Pin_5_Configuration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_GPIO_3_Pin_5_Configuration_Register_Address, Register_Value);
}

/*
	���ܣ���IO���õ�GPIO�˿�0����6���üĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_0_Pin_6_Configuration_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_GPIO_0_Pin_6_Configuration_Register_Address);
}

/*
	���ܣ�дIO���õ�GPIO�˿�0����6���üĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_IO_Configuration_GPIO_0_Pin_6_Configuration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_GPIO_0_Pin_6_Configuration_Register_Address, Register_Value);
}

/*
	���ܣ���IO���õ�GPIO�˿�0����7���üĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_0_Pin_7_Configuration_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_GPIO_0_Pin_7_Configuration_Register_Address);
}

/*
	���ܣ�дIO���õ�GPIO�˿�0����7���üĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_IO_Configuration_GPIO_0_Pin_7_Configuration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_GPIO_0_Pin_7_Configuration_Register_Address, Register_Value);
}

/*
	���ܣ���IO���õ�GPIO�˿�2����9���üĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_2_Pin_9_Configuration_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_GPIO_2_Pin_9_Configuration_Register_Address);
}

/*
	���ܣ�дIO���õ�GPIO�˿�2����9���üĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_IO_Configuration_GPIO_2_Pin_9_Configuration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_GPIO_2_Pin_9_Configuration_Register_Address, Register_Value);
}

/*
	���ܣ���IO���õ�GPIO�˿�2����10���üĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_2_Pin_10_Configuration_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_GPIO_2_Pin_10_Configuration_Register_Address);
}

/*
	���ܣ�дIO���õ�GPIO�˿�2����10���üĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_IO_Configuration_GPIO_2_Pin_10_Configuration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_GPIO_2_Pin_10_Configuration_Register_Address, Register_Value);
}

/*
	���ܣ���IO���õ�GPIO�˿�2����2���üĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_2_Pin_2_Configuration_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_GPIO_2_Pin_2_Configuration_Register_Address);
}

/*
	���ܣ�дIO���õ�GPIO�˿�2����2���üĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_IO_Configuration_GPIO_2_Pin_2_Configuration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_GPIO_2_Pin_2_Configuration_Register_Address, Register_Value);
}

/*
	���ܣ���IO���õ�GPIO�˿�0����8���üĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_0_Pin_8_Configuration_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_GPIO_0_Pin_8_Configuration_Register_Address);
}

/*
	���ܣ�дIO���õ�GPIO�˿�0����8���üĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_IO_Configuration_GPIO_0_Pin_8_Configuration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_GPIO_0_Pin_8_Configuration_Register_Address, Register_Value);
}

/*
	���ܣ���IO���õ�GPIO�˿�0����9���üĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_0_Pin_9_Configuration_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_GPIO_0_Pin_9_Configuration_Register_Address);
}

/*
	���ܣ�дIO���õ�GPIO�˿�0����9���üĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_IO_Configuration_GPIO_0_Pin_9_Configuration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_GPIO_0_Pin_9_Configuration_Register_Address, Register_Value);
}

/*
	���ܣ���IO���õ�GPIO�˿�0����10���üĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_0_Pin_10_Configuration_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_GPIO_0_Pin_10_Configuration_Register_Address);
}

/*
	���ܣ�дIO���õ�GPIO�˿�0����10���üĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_IO_Configuration_GPIO_0_Pin_10_Configuration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_GPIO_0_Pin_10_Configuration_Register_Address, Register_Value);
}

/*
	���ܣ���IO���õ�GPIO�˿�1����10���üĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_1_Pin_10_Configuration_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_GPIO_1_Pin_10_Configuration_Register_Address);
}

/*
	���ܣ�дIO���õ�GPIO�˿�1����10���üĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_IO_Configuration_GPIO_1_Pin_10_Configuration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_GPIO_1_Pin_10_Configuration_Register_Address, Register_Value);
}

/*
	���ܣ���IO���õ�GPIO�˿�2����11���üĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_2_Pin_11_Configuration_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_GPIO_2_Pin_11_Configuration_Register_Address);
}

/*
	���ܣ�дIO���õ�GPIO�˿�2����11���üĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_IO_Configuration_GPIO_2_Pin_11_Configuration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_GPIO_2_Pin_11_Configuration_Register_Address, Register_Value);
}

/*
	���ܣ���IO���õ�GPIO�˿�0����11���üĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_0_Pin_11_Configuration_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_GPIO_0_Pin_11_Configuration_Register_Address);
}

/*
	���ܣ�дIO���õ�GPIO�˿�0����11���üĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_IO_Configuration_GPIO_0_Pin_11_Configuration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_GPIO_0_Pin_11_Configuration_Register_Address, Register_Value);
}

/*
	���ܣ���IO���õ�GPIO�˿�1����0���üĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_1_Pin_0_Configuration_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_GPIO_1_Pin_0_Configuration_Register_Address);
}

/*
	���ܣ�дIO���õ�GPIO�˿�1����0���üĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_IO_Configuration_GPIO_1_Pin_0_Configuration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_GPIO_1_Pin_0_Configuration_Register_Address, Register_Value);
}

/*
	���ܣ���IO���õ�GPIO�˿�1����1���üĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_1_Pin_1_Configuration_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_GPIO_1_Pin_1_Configuration_Register_Address);
}

/*
	���ܣ�дIO���õ�GPIO�˿�1����1���üĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_IO_Configuration_GPIO_1_Pin_1_Configuration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_GPIO_1_Pin_1_Configuration_Register_Address, Register_Value);
}

/*
	���ܣ���IO���õ�GPIO�˿�1����2���üĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_1_Pin_2_Configuration_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_GPIO_1_Pin_2_Configuration_Register_Address);
}

/*
	���ܣ�дIO���õ�GPIO�˿�1����2���üĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_IO_Configuration_GPIO_1_Pin_2_Configuration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_GPIO_1_Pin_2_Configuration_Register_Address, Register_Value);
}

/*
	���ܣ���IO���õ�GPIO�˿�3����0���üĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_3_Pin_0_Configuration_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_GPIO_3_Pin_0_Configuration_Register_Address);
}

/*
	���ܣ�дIO���õ�GPIO�˿�3����0���üĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_IO_Configuration_GPIO_3_Pin_0_Configuration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_GPIO_3_Pin_0_Configuration_Register_Address, Register_Value);
}

/*
	���ܣ���IO���õ�GPIO�˿�3����1���üĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_3_Pin_1_Configuration_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_GPIO_3_Pin_1_Configuration_Register_Address);
}

/*
	���ܣ�дIO���õ�GPIO�˿�3����1���üĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_IO_Configuration_GPIO_3_Pin_1_Configuration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_GPIO_3_Pin_1_Configuration_Register_Address, Register_Value);
}

/*
	���ܣ���IO���õ�GPIO�˿�2����3���üĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_2_Pin_3_Configuration_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_GPIO_2_Pin_3_Configuration_Register_Address);
}

/*
	���ܣ�дIO���õ�GPIO�˿�2����3���üĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_IO_Configuration_GPIO_2_Pin_3_Configuration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_GPIO_2_Pin_3_Configuration_Register_Address, Register_Value);
}

/*
	���ܣ���IO���õ�GPIO�˿�1����3���üĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_1_Pin_3_Configuration_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_GPIO_1_Pin_3_Configuration_Register_Address);
}

/*
	���ܣ�дIO���õ�GPIO�˿�1����3���üĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_IO_Configuration_GPIO_1_Pin_3_Configuration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_GPIO_1_Pin_3_Configuration_Register_Address, Register_Value);
}

/*
	���ܣ���IO���õ�GPIO�˿�1����4���üĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_1_Pin_4_Configuration_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_GPIO_1_Pin_4_Configuration_Register_Address);
}

/*
	���ܣ�дIO���õ�GPIO�˿�1����4���üĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_IO_Configuration_GPIO_1_Pin_4_Configuration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_GPIO_1_Pin_4_Configuration_Register_Address, Register_Value);
}

/*
	���ܣ���IO���õ�GPIO�˿�1����11���üĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_1_Pin_11_Configuration_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_GPIO_1_Pin_11_Configuration_Register_Address);
}

/*
	���ܣ�дIO���õ�GPIO�˿�1����11���üĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_IO_Configuration_GPIO_1_Pin_11_Configuration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_GPIO_1_Pin_11_Configuration_Register_Address, Register_Value);
}

/*
	���ܣ���IO���õ�GPIO�˿�3����2���üĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_3_Pin_2_Configuration_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_GPIO_3_Pin_2_Configuration_Register_Address);
}

/*
	���ܣ�дIO���õ�GPIO�˿�3����2���üĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_IO_Configuration_GPIO_3_Pin_2_Configuration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_GPIO_3_Pin_2_Configuration_Register_Address, Register_Value);
}

/*
	���ܣ���IO���õ�GPIO�˿�1����5���üĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_1_Pin_5_Configuration_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_GPIO_1_Pin_5_Configuration_Register_Address);
}

/*
	���ܣ�дIO���õ�GPIO�˿�1����5���üĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_IO_Configuration_GPIO_1_Pin_5_Configuration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_GPIO_1_Pin_5_Configuration_Register_Address, Register_Value);
}

/*
	���ܣ���IO���õ�GPIO�˿�1����6���üĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_1_Pin_6_Configuration_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_GPIO_1_Pin_6_Configuration_Register_Address);
}

/*
	���ܣ�дIO���õ�GPIO�˿�1����6���üĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_IO_Configuration_GPIO_1_Pin_6_Configuration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_GPIO_1_Pin_6_Configuration_Register_Address, Register_Value);
}

/*
	���ܣ���IO���õ�GPIO�˿�1����7���üĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_1_Pin_7_Configuration_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_GPIO_1_Pin_7_Configuration_Register_Address);
}

/*
	���ܣ�дIO���õ�GPIO�˿�1����7���üĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_IO_Configuration_GPIO_1_Pin_7_Configuration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_GPIO_1_Pin_7_Configuration_Register_Address, Register_Value);
}

/*
	���ܣ���IO���õ�GPIO�˿�3����3���üĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_GPIO_3_Pin_3_Configuration_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_GPIO_3_Pin_3_Configuration_Register_Address);
}

/*
	���ܣ�дIO���õ�GPIO�˿�3����3���üĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_IO_Configuration_GPIO_3_Pin_3_Configuration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_GPIO_3_Pin_3_Configuration_Register_Address, Register_Value);
}

/*
	���ܣ���IO���õ�����SCKλ�üĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_Pin_SCK_Location_Register_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_Pin_SCK_Location_Register_Address);
}

/*
	���ܣ�дIO���õ�����SCKλ�üĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_IO_Configuration_Pin_SCK_Location_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_Pin_SCK_Location_Register_Address, Register_Value);
}

/*
	���ܣ���IO���õ�����DSRλ�üĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_Pin_DSR_Location_Register_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_Pin_DSR_Location_Register_Address);
}

/*
	���ܣ�дIO���õ�����DSRλ�üĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_IO_Configuration_Pin_DSR_Location_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_Pin_DSR_Location_Register_Address, Register_Value);
}

/*
	���ܣ���IO���õ�����DCDλ�üĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_Pin_DCD_Location_Register_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_Pin_DCD_Location_Register_Address);
}

/*
	���ܣ�дIO���õ�����DCDλ�üĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_IO_Configuration_Pin_DCD_Location_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_Pin_DCD_Location_Register_Address, Register_Value);
}

/*
	���ܣ���IO���õ�����RIλ�üĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_IO_Configuration_Pin_RI_Location_Register_Register(void)
{
	return Read_Register_32_Bit(IO_Configuration_Pin_RI_Location_Register_Address);
}

/*
	���ܣ�дIO���õ�����RIλ�üĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_IO_Configuration_Pin_RI_Location_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(IO_Configuration_Pin_RI_Location_Register_Address, Register_Value);
}
