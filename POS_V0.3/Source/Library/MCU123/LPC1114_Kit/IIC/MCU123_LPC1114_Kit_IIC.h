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

#ifndef	MCU123_LPC1114_KIT_IIC_H
#define	MCU123_LPC1114_KIT_IIC_H

#include	"NXP_LPC1114_302_IIC.h"

/* �������� */

/*
	���ܣ���ʼ��
	��������
	���أ���
*/
void	IIC_Library_Initialize(void);

/*
	���ܣ��򿪽ӿ�
	��������
	���أ���
*/
void	IIC_Library_Enable_Interface(void);

/*
	���ܣ��رսӿ�
	��������
	���أ���
*/
void	IIC_Library_Disable_Interface(void);

/*
	���ܣ�������������ģʽ
	������Integer_Unsigned_8_Bit Device_Address���豸��ַ
		  Integer_Unsigned_8_Bit *Data_Pointer������ָ��
		  Integer_Unsigned_32_Bit Data_Count����������
	���أ���
*/
void	IIC_Library_Enter_Master_Receiver_Mode(Integer_Unsigned_8_Bit Device_Address, Integer_Unsigned_8_Bit *Data_Pointer, Integer_Unsigned_32_Bit Data_Count);

/*
	���ܣ�������������ģʽ
	������Integer_Unsigned_8_Bit Device_Address���豸��ַ
		  Integer_Unsigned_8_Bit *Data_Pointer������ָ��
		  Integer_Unsigned_32_Bit Data_Count����������
	���أ���
*/
void	IIC_Library_Enter_Master_Transmitter_Mode(Integer_Unsigned_8_Bit Device_Address, Integer_Unsigned_8_Bit *Data_Pointer, Integer_Unsigned_32_Bit Data_Count);

/*
	���ܣ��뿪��ģʽ
	��������
	���أ���
*/
void	IIC_Library_Leave_Master_Mode(void);

/*
	���ܣ�����ж�
	��������
	���أ���
*/
void	IIC_Library_Clear_Interrupt(void);

#endif
