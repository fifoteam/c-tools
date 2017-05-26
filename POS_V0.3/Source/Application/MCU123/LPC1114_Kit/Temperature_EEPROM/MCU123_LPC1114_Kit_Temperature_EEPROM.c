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

#include	"MCU123_LPC1114_Kit_Temperature_EEPROM.h"

/* ���ݶ��� */

/* �¶Ⱥ�EEPROM�������� */
Integer_Unsigned_8_Bit	Temperature_EEPROM_Task_Index;

/* �¶Ⱥ�EEPROM����ջ */
Integer_Unsigned_32_Bit	Temperature_EEPROM_Task_Stack[Temperature_EEPROM_Task_Stack_Capacity];

/* �¶Ⱥ�EEPROM�豸��ַ */
const Integer_Unsigned_8_Bit	Temperature_Device_Address = 0x48;
const Integer_Unsigned_8_Bit	EEPROM_Device_Address	   = 0x50;

/* EEPROM���߿���ʱ���EEPROMд�ӳ�ʱ�䣬��λ������ */
const Integer_Unsigned_32_Bit	EEPROM_Bus_Free_Time	= 1;
const Integer_Unsigned_32_Bit	EEPROM_Write_Delay_Time	= 10;

/* �¶Ⱥ�EEPROM������ʱ�䣬��λ������ */
const Integer_Unsigned_32_Bit	Temperature_EEPROM_Task_Interval_Time = 3000;

/* �¶Ⱥ�EEPROMֵ */
Integer_Signed_8_Bit	Temperature_Value, Temperature_Value_Integer_Part, Temperature_Value_Fractional_Part;
Integer_Unsigned_8_Bit	EEPROM_Transmitter_Buffer[1 + 16], EEPROM_Receiver_Buffer[16];

/* �������� */

/*
	���ܣ��¶Ⱥ�EEPROM����
	��������
	���أ���
*/
void	Temperature_EEPROM_Task(void)
{
	Integer_Unsigned_8_Bit	Page_Index, Byte_Index;
	Integer_Unsigned_8_Bit	Device_Address;
	
	/* �򿪽ӿ� */
	IIC_Library_Enable_Interface();
	
	/* дEEPROM */
	for (Page_Index = 0; Page_Index < 16; Page_Index += 1)
	{
		Device_Address = EEPROM_Device_Address | (Page_Index >> 4);
		EEPROM_Transmitter_Buffer[0] = Page_Index << 4;
		for (Byte_Index = 1; Byte_Index < sizeof(EEPROM_Transmitter_Buffer); Byte_Index += 1)
		{
			EEPROM_Transmitter_Buffer[Byte_Index] = Page_Index;
		}
		Core_Library_Suspend_Task(EEPROM_Bus_Free_Time);
		IIC_Library_Enter_Master_Transmitter_Mode(Device_Address, EEPROM_Transmitter_Buffer, sizeof(EEPROM_Transmitter_Buffer));
		Core_Library_Suspend_Task(EEPROM_Write_Delay_Time);
		IIC_Library_Leave_Master_Mode();
	}
	
	/* ������������ģʽ������EEPROM���ݵ�ַ */
	Page_Index = 0;
	Device_Address = EEPROM_Device_Address | (Page_Index >> 4);
	EEPROM_Transmitter_Buffer[0] = Page_Index << 4;
	Core_Library_Suspend_Task(EEPROM_Bus_Free_Time);
	IIC_Library_Enter_Master_Transmitter_Mode(Device_Address, EEPROM_Transmitter_Buffer, 1);
	Core_Library_Suspend_Task(EEPROM_Write_Delay_Time);
	IIC_Library_Leave_Master_Mode();
	
	/* ѭ������ */
	while (1)
	{
		/* ������������ģʽ�����¶�ֵ */
		IIC_Library_Enter_Master_Receiver_Mode(Temperature_Device_Address, (Integer_Unsigned_8_Bit *) &Temperature_Value, 1);
		IIC_Library_Leave_Master_Mode();
		Temperature_Value_Integer_Part = Temperature_Value / 2;
		Temperature_Value_Fractional_Part = (Temperature_Value % 2) * 5;
		
		/* ������ݻ����� */
		for (Byte_Index = 0; Byte_Index < sizeof(EEPROM_Receiver_Buffer); Byte_Index += 1)
		{
			EEPROM_Receiver_Buffer[Byte_Index] = 0;
		}
		
		/* ������������ģʽ����EEPROM */
		Core_Library_Suspend_Task(EEPROM_Bus_Free_Time);
		IIC_Library_Enter_Master_Receiver_Mode(EEPROM_Device_Address, EEPROM_Receiver_Buffer, sizeof(EEPROM_Receiver_Buffer));
		IIC_Library_Leave_Master_Mode();
		
		/* �������� */
		Core_Library_Suspend_Task(Temperature_EEPROM_Task_Interval_Time);
	}
}
