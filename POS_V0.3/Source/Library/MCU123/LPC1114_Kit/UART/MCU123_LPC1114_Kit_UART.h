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

#ifndef	MCU123_LPC1114_KIT_UART_H
#define	MCU123_LPC1114_KIT_UART_H

#include	"NXP_LPC1114_302_UART.h"

/* �������� */

/*
	���ܣ���ʼ��
	��������
	���أ���
*/
void	UART_Library_Initialize(void);

/*
	���ܣ���������
	������Integer_Unsigned_8_Bit Data_Value������ֵ
	���أ���
*/
void	UART_Library_Transmit_Data(Integer_Unsigned_8_Bit Data_Value);

/*
	���ܣ���������
	������
	���أ�Integer_Unsigned_8_Bit�����յ�����
*/
Integer_Unsigned_8_Bit	UART_Library_Receive_Data(void);

#endif
