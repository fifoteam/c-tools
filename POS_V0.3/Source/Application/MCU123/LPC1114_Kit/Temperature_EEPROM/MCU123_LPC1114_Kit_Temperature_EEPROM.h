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

#ifndef	MCU123_LPC1114_KIT_TEMPERATURE_EEPROM_H
#define	MCU123_LPC1114_KIT_TEMPERATURE_EEPROM_H

#include	"MCU123_LPC1114_Kit_IIC.h"
#include	"MCU123_LPC1114_Kit_Core.h"

/* �������� */

/* �¶Ⱥ�EEPROM����ջ���� */
typedef	enum	Tag_Temperature_EEPROM_Task_Stack_Capacity
{
	Temperature_EEPROM_Task_Stack_Capacity = 32
}
	Enumeration_Temperature_EEPROM_Task_Stack_Capacity;

/* �������� */

/* �¶Ⱥ�EEPROM�������� */
extern Integer_Unsigned_8_Bit	Temperature_EEPROM_Task_Index;

/* �¶Ⱥ�EEPROM����ջ */
extern Integer_Unsigned_32_Bit	Temperature_EEPROM_Task_Stack[];

/* �������� */

/*
	���ܣ��¶Ⱥ�EEPROM����
	��������
	���أ���
*/
void	Temperature_EEPROM_Task(void);

#endif
