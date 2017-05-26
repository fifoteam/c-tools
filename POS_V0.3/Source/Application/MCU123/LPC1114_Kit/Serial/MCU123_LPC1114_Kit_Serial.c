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

#include	"MCU123_LPC1114_Kit_Serial.h"

/* ���ݶ��� */

/* ������������ */
Integer_Unsigned_8_Bit	Serial_Task_Index;

/* ��������ջ */
Integer_Unsigned_32_Bit	Serial_Task_Stack[Serial_Task_Stack_Capacity];

/* ����������Ϣ */
const Integer_Unsigned_8_Bit	Serial_Task_Information[] = "Personal Operating System(POS), Email: wubin_pos@163.com\n";

/* ����������ʱ�䣬��λ������ */
const Integer_Unsigned_32_Bit	Serial_Task_Interval_Time = 1000;

/* �������� */

/*
	���ܣ���������
	��������
	���أ���
*/
void	Serial_Task(void)
{
	Integer_Unsigned_8_Bit	Data_Index;
	
	/* ѭ������ */
	while (1)
	{
		/* �������� */
		for (Data_Index = 0; Data_Index < sizeof(Serial_Task_Information); Data_Index += 1)
		{
			UART_Library_Transmit_Data(Serial_Task_Information[Data_Index]);
		}
		
		/* �ӳ� */
		Core_Library_Suspend_Task(Serial_Task_Interval_Time);
	}
}
