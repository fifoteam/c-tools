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

#include	"NXP_LPC1114_302_GPIO.h"

/* ���ݶ��� */

/* GPIO�˿�0�ļĴ�����ַ */
const Integer_Unsigned_32_Bit	GPIO_0_Data_Register_Address					  = 0x50003FFC;
const Integer_Unsigned_32_Bit	GPIO_0_Data_Direction_Register_Address			  = 0x50008000;
const Integer_Unsigned_32_Bit	GPIO_0_Interrupt_Sense_Register_Address			  = 0x50008004;
const Integer_Unsigned_32_Bit	GPIO_0_Interrupt_Both_Edge_Sense_Register_Address = 0x50008008;
const Integer_Unsigned_32_Bit	GPIO_0_Interrupt_Event_Register_Address			  = 0x5000800C;
const Integer_Unsigned_32_Bit	GPIO_0_Interrupt_Mask_Register_Address			  = 0x50008010;
const Integer_Unsigned_32_Bit	GPIO_0_Raw_Interrupt_Status_Register_Address	  = 0x50008014;
const Integer_Unsigned_32_Bit	GPIO_0_Masked_Interrupt_Status_Register_Address	  = 0x50008018;
const Integer_Unsigned_32_Bit	GPIO_0_Interrupt_Clear_Register_Address			  = 0x5000801C;

/* GPIO�˿�1�ļĴ�����ַ */
const Integer_Unsigned_32_Bit	GPIO_1_Data_Register_Address					  = 0x50013FFC;
const Integer_Unsigned_32_Bit	GPIO_1_Data_Direction_Register_Address			  = 0x50018000;
const Integer_Unsigned_32_Bit	GPIO_1_Interrupt_Sense_Register_Address			  = 0x50018004;
const Integer_Unsigned_32_Bit	GPIO_1_Interrupt_Both_Edge_Sense_Register_Address = 0x50018008;
const Integer_Unsigned_32_Bit	GPIO_1_Interrupt_Event_Register_Address			  = 0x5001800C;
const Integer_Unsigned_32_Bit	GPIO_1_Interrupt_Mask_Register_Address			  = 0x50018010;
const Integer_Unsigned_32_Bit	GPIO_1_Raw_Interrupt_Status_Register_Address	  = 0x50018014;
const Integer_Unsigned_32_Bit	GPIO_1_Masked_Interrupt_Status_Register_Address	  = 0x50018018;
const Integer_Unsigned_32_Bit	GPIO_1_Interrupt_Clear_Register_Address			  = 0x5001801C;

/* GPIO�˿�2�ļĴ�����ַ */
const Integer_Unsigned_32_Bit	GPIO_2_Data_Register_Address					  = 0x50023FFC;
const Integer_Unsigned_32_Bit	GPIO_2_Data_Direction_Register_Address			  = 0x50028000;
const Integer_Unsigned_32_Bit	GPIO_2_Interrupt_Sense_Register_Address			  = 0x50028004;
const Integer_Unsigned_32_Bit	GPIO_2_Interrupt_Both_Edge_Sense_Register_Address = 0x50028008;
const Integer_Unsigned_32_Bit	GPIO_2_Interrupt_Event_Register_Address			  = 0x5002800C;
const Integer_Unsigned_32_Bit	GPIO_2_Interrupt_Mask_Register_Address			  = 0x50028010;
const Integer_Unsigned_32_Bit	GPIO_2_Raw_Interrupt_Status_Register_Address	  = 0x50028014;
const Integer_Unsigned_32_Bit	GPIO_2_Masked_Interrupt_Status_Register_Address	  = 0x50028018;
const Integer_Unsigned_32_Bit	GPIO_2_Interrupt_Clear_Register_Address			  = 0x5002801C;

/* GPIO�˿�3�ļĴ�����ַ */
const Integer_Unsigned_32_Bit	GPIO_3_Data_Register_Address					  = 0x50033FFC;
const Integer_Unsigned_32_Bit	GPIO_3_Data_Direction_Register_Address			  = 0x50038000;
const Integer_Unsigned_32_Bit	GPIO_3_Interrupt_Sense_Register_Address			  = 0x50038004;
const Integer_Unsigned_32_Bit	GPIO_3_Interrupt_Both_Edge_Sense_Register_Address = 0x50038008;
const Integer_Unsigned_32_Bit	GPIO_3_Interrupt_Event_Register_Address			  = 0x5003800C;
const Integer_Unsigned_32_Bit	GPIO_3_Interrupt_Mask_Register_Address			  = 0x50038010;
const Integer_Unsigned_32_Bit	GPIO_3_Raw_Interrupt_Status_Register_Address	  = 0x50038014;
const Integer_Unsigned_32_Bit	GPIO_3_Masked_Interrupt_Status_Register_Address	  = 0x50038018;
const Integer_Unsigned_32_Bit	GPIO_3_Interrupt_Clear_Register_Address			  = 0x5003801C;

/* �������� */

/*
	���ܣ���GPIO�˿�0�����ݼĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_GPIO_0_Data_Register(void)
{
	return Read_Register_32_Bit(GPIO_0_Data_Register_Address);
}

/*
	���ܣ�дGPIO�˿�0�����ݼĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_GPIO_0_Data_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(GPIO_0_Data_Register_Address, Register_Value);
}

/*
	���ܣ���GPIO�˿�0�����ݷ���Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_GPIO_0_Data_Direction_Register(void)
{
	return Read_Register_32_Bit(GPIO_0_Data_Direction_Register_Address);
}

/*
	���ܣ�дGPIO�˿�0�����ݷ���Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_GPIO_0_Data_Direction_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(GPIO_0_Data_Direction_Register_Address, Register_Value);
}

/*
	���ܣ���GPIO�˿�0���жϼ��Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_GPIO_0_Interrupt_Sense_Register(void)
{
	return Read_Register_32_Bit(GPIO_0_Interrupt_Sense_Register_Address);
}

/*
	���ܣ�дGPIO�˿�0���жϼ��Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_GPIO_0_Interrupt_Sense_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(GPIO_0_Interrupt_Sense_Register_Address, Register_Value);
}

/*
	���ܣ���GPIO�˿�0���ж�˫�ؼ��Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_GPIO_0_Interrupt_Both_Edge_Sense_Register(void)
{
	return Read_Register_32_Bit(GPIO_0_Interrupt_Both_Edge_Sense_Register_Address);
}

/*
	���ܣ�дGPIO�˿�0���ж�˫�ؼ��Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_GPIO_0_Interrupt_Both_Edge_Sense_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(GPIO_0_Interrupt_Both_Edge_Sense_Register_Address, Register_Value);
}

/*
	���ܣ���GPIO�˿�0���ж��¼��Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_GPIO_0_Interrupt_Event_Register(void)
{
	return Read_Register_32_Bit(GPIO_0_Interrupt_Event_Register_Address);
}

/*
	���ܣ�дGPIO�˿�0���ж��¼��Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_GPIO_0_Interrupt_Event_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(GPIO_0_Interrupt_Event_Register_Address, Register_Value);
}

/*
	���ܣ���GPIO�˿�0���ж����μĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_GPIO_0_Interrupt_Mask_Register(void)
{
	return Read_Register_32_Bit(GPIO_0_Interrupt_Mask_Register_Address);
}

/*
	���ܣ�дGPIO�˿�0���ж����μĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_GPIO_0_Interrupt_Mask_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(GPIO_0_Interrupt_Mask_Register_Address, Register_Value);
}

/*
	���ܣ���GPIO�˿�0��ԭʼ�ж�״̬�Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_GPIO_0_Raw_Interrupt_Status_Register(void)
{
	return Read_Register_32_Bit(GPIO_0_Raw_Interrupt_Status_Register_Address);
}

/*
	���ܣ���GPIO�˿�0�������ж�״̬�Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_GPIO_0_Masked_Interrupt_Status_Register(void)
{
	return Read_Register_32_Bit(GPIO_0_Masked_Interrupt_Status_Register_Address);
}

/*
	���ܣ�дGPIO�˿�0���ж�����Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_GPIO_0_Interrupt_Clear_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(GPIO_0_Interrupt_Clear_Register_Address, Register_Value);
}

/*
	���ܣ���GPIO�˿�1�����ݼĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_GPIO_1_Data_Register(void)
{
	return Read_Register_32_Bit(GPIO_1_Data_Register_Address);
}

/*
	���ܣ�дGPIO�˿�1�����ݼĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_GPIO_1_Data_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(GPIO_1_Data_Register_Address, Register_Value);
}

/*
	���ܣ���GPIO�˿�1�����ݷ���Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_GPIO_1_Data_Direction_Register(void)
{
	return Read_Register_32_Bit(GPIO_1_Data_Direction_Register_Address);
}

/*
	���ܣ�дGPIO�˿�1�����ݷ���Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_GPIO_1_Data_Direction_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(GPIO_1_Data_Direction_Register_Address, Register_Value);
}

/*
	���ܣ���GPIO�˿�1���жϼ��Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_GPIO_1_Interrupt_Sense_Register(void)
{
	return Read_Register_32_Bit(GPIO_1_Interrupt_Sense_Register_Address);
}

/*
	���ܣ�дGPIO�˿�1���жϼ��Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_GPIO_1_Interrupt_Sense_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(GPIO_1_Interrupt_Sense_Register_Address, Register_Value);
}

/*
	���ܣ���GPIO�˿�1���ж�˫�ؼ��Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_GPIO_1_Interrupt_Both_Edge_Sense_Register(void)
{
	return Read_Register_32_Bit(GPIO_1_Interrupt_Both_Edge_Sense_Register_Address);
}

/*
	���ܣ�дGPIO�˿�1���ж�˫�ؼ��Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_GPIO_1_Interrupt_Both_Edge_Sense_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(GPIO_1_Interrupt_Both_Edge_Sense_Register_Address, Register_Value);
}

/*
	���ܣ���GPIO�˿�1���ж��¼��Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_GPIO_1_Interrupt_Event_Register(void)
{
	return Read_Register_32_Bit(GPIO_1_Interrupt_Event_Register_Address);
}

/*
	���ܣ�дGPIO�˿�1���ж��¼��Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_GPIO_1_Interrupt_Event_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(GPIO_1_Interrupt_Event_Register_Address, Register_Value);
}

/*
	���ܣ���GPIO�˿�1���ж����μĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_GPIO_1_Interrupt_Mask_Register(void)
{
	return Read_Register_32_Bit(GPIO_1_Interrupt_Mask_Register_Address);
}

/*
	���ܣ�дGPIO�˿�1���ж����μĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_GPIO_1_Interrupt_Mask_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(GPIO_1_Interrupt_Mask_Register_Address, Register_Value);
}

/*
	���ܣ���GPIO�˿�1��ԭʼ�ж�״̬�Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_GPIO_1_Raw_Interrupt_Status_Register(void)
{
	return Read_Register_32_Bit(GPIO_1_Raw_Interrupt_Status_Register_Address);
}

/*
	���ܣ���GPIO�˿�1�������ж�״̬�Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_GPIO_1_Masked_Interrupt_Status_Register(void)
{
	return Read_Register_32_Bit(GPIO_1_Masked_Interrupt_Status_Register_Address);
}

/*
	���ܣ�дGPIO�˿�1���ж�����Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_GPIO_1_Interrupt_Clear_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(GPIO_1_Interrupt_Clear_Register_Address, Register_Value);
}

/*
	���ܣ���GPIO�˿�2�����ݼĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_GPIO_2_Data_Register(void)
{
	return Read_Register_32_Bit(GPIO_2_Data_Register_Address);
}

/*
	���ܣ�дGPIO�˿�2�����ݼĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_GPIO_2_Data_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(GPIO_2_Data_Register_Address, Register_Value);
}

/*
	���ܣ���GPIO�˿�2�����ݷ���Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_GPIO_2_Data_Direction_Register(void)
{
	return Read_Register_32_Bit(GPIO_2_Data_Direction_Register_Address);
}

/*
	���ܣ�дGPIO�˿�2�����ݷ���Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_GPIO_2_Data_Direction_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(GPIO_2_Data_Direction_Register_Address, Register_Value);
}

/*
	���ܣ���GPIO�˿�2���жϼ��Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_GPIO_2_Interrupt_Sense_Register(void)
{
	return Read_Register_32_Bit(GPIO_2_Interrupt_Sense_Register_Address);
}

/*
	���ܣ�дGPIO�˿�2���жϼ��Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_GPIO_2_Interrupt_Sense_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(GPIO_2_Interrupt_Sense_Register_Address, Register_Value);
}

/*
	���ܣ���GPIO�˿�2���ж�˫�ؼ��Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_GPIO_2_Interrupt_Both_Edge_Sense_Register(void)
{
	return Read_Register_32_Bit(GPIO_2_Interrupt_Both_Edge_Sense_Register_Address);
}

/*
	���ܣ�дGPIO�˿�2���ж�˫�ؼ��Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_GPIO_2_Interrupt_Both_Edge_Sense_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(GPIO_2_Interrupt_Both_Edge_Sense_Register_Address, Register_Value);
}

/*
	���ܣ���GPIO�˿�2���ж��¼��Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_GPIO_2_Interrupt_Event_Register(void)
{
	return Read_Register_32_Bit(GPIO_2_Interrupt_Event_Register_Address);
}

/*
	���ܣ�дGPIO�˿�2���ж��¼��Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_GPIO_2_Interrupt_Event_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(GPIO_2_Interrupt_Event_Register_Address, Register_Value);
}

/*
	���ܣ���GPIO�˿�2���ж����μĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_GPIO_2_Interrupt_Mask_Register(void)
{
	return Read_Register_32_Bit(GPIO_2_Interrupt_Mask_Register_Address);
}

/*
	���ܣ�дGPIO�˿�2���ж����μĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_GPIO_2_Interrupt_Mask_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(GPIO_2_Interrupt_Mask_Register_Address, Register_Value);
}

/*
	���ܣ���GPIO�˿�2��ԭʼ�ж�״̬�Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_GPIO_2_Raw_Interrupt_Status_Register(void)
{
	return Read_Register_32_Bit(GPIO_2_Raw_Interrupt_Status_Register_Address);
}

/*
	���ܣ���GPIO�˿�2�������ж�״̬�Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_GPIO_2_Masked_Interrupt_Status_Register(void)
{
	return Read_Register_32_Bit(GPIO_2_Masked_Interrupt_Status_Register_Address);
}

/*
	���ܣ�дGPIO�˿�2���ж�����Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_GPIO_2_Interrupt_Clear_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(GPIO_2_Interrupt_Clear_Register_Address, Register_Value);
}

/*
	���ܣ���GPIO�˿�3�����ݼĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_GPIO_3_Data_Register(void)
{
	return Read_Register_32_Bit(GPIO_3_Data_Register_Address);
}

/*
	���ܣ�дGPIO�˿�3�����ݼĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_GPIO_3_Data_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(GPIO_3_Data_Register_Address, Register_Value);
}

/*
	���ܣ���GPIO�˿�3�����ݷ���Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_GPIO_3_Data_Direction_Register(void)
{
	return Read_Register_32_Bit(GPIO_3_Data_Direction_Register_Address);
}

/*
	���ܣ�дGPIO�˿�3�����ݷ���Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_GPIO_3_Data_Direction_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(GPIO_3_Data_Direction_Register_Address, Register_Value);
}

/*
	���ܣ���GPIO�˿�3���жϼ��Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_GPIO_3_Interrupt_Sense_Register(void)
{
	return Read_Register_32_Bit(GPIO_3_Interrupt_Sense_Register_Address);
}

/*
	���ܣ�дGPIO�˿�3���жϼ��Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_GPIO_3_Interrupt_Sense_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(GPIO_3_Interrupt_Sense_Register_Address, Register_Value);
}

/*
	���ܣ���GPIO�˿�3���ж�˫�ؼ��Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_GPIO_3_Interrupt_Both_Edge_Sense_Register(void)
{
	return Read_Register_32_Bit(GPIO_3_Interrupt_Both_Edge_Sense_Register_Address);
}

/*
	���ܣ�дGPIO�˿�3���ж�˫�ؼ��Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_GPIO_3_Interrupt_Both_Edge_Sense_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(GPIO_3_Interrupt_Both_Edge_Sense_Register_Address, Register_Value);
}

/*
	���ܣ���GPIO�˿�3���ж��¼��Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_GPIO_3_Interrupt_Event_Register(void)
{
	return Read_Register_32_Bit(GPIO_3_Interrupt_Event_Register_Address);
}

/*
	���ܣ�дGPIO�˿�3���ж��¼��Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_GPIO_3_Interrupt_Event_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(GPIO_3_Interrupt_Event_Register_Address, Register_Value);
}

/*
	���ܣ���GPIO�˿�3���ж����μĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_GPIO_3_Interrupt_Mask_Register(void)
{
	return Read_Register_32_Bit(GPIO_3_Interrupt_Mask_Register_Address);
}

/*
	���ܣ�дGPIO�˿�3���ж����μĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_GPIO_3_Interrupt_Mask_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(GPIO_3_Interrupt_Mask_Register_Address, Register_Value);
}

/*
	���ܣ���GPIO�˿�3��ԭʼ�ж�״̬�Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_GPIO_3_Raw_Interrupt_Status_Register(void)
{
	return Read_Register_32_Bit(GPIO_3_Raw_Interrupt_Status_Register_Address);
}

/*
	���ܣ���GPIO�˿�3�������ж�״̬�Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_GPIO_3_Masked_Interrupt_Status_Register(void)
{
	return Read_Register_32_Bit(GPIO_3_Masked_Interrupt_Status_Register_Address);
}

/*
	���ܣ�дGPIO�˿�3���ж�����Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_GPIO_3_Interrupt_Clear_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(GPIO_3_Interrupt_Clear_Register_Address, Register_Value);
}
