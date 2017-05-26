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

#ifndef	MCU123_LPC1114_KIT_GPIO_H
#define	MCU123_LPC1114_KIT_GPIO_H

#include	"NXP_LPC1114_302_GPIO.h"
#include	"MCU123_LPC1114_Kit_Core.h"

/* �������� */

/*
	���ܣ���ʼ��
	��������
	���أ���
*/
void	GPIO_Library_Initialize(void);

/*
	���ܣ��رշ��������1
	��������
	���أ���
*/
void	GPIO_Library_Disable_LED_1(void);

/*
	���ܣ��򿪷��������1
	��������
	���أ���
*/
void	GPIO_Library_Enable_LED_1(void);

/*
	���ܣ��رշ��������2
	��������
	���أ���
*/
void	GPIO_Library_Disable_LED_2(void);

/*
	���ܣ��򿪷��������2
	��������
	���أ���
*/
void	GPIO_Library_Enable_LED_2(void);

/*
	���ܣ��رշ��������3
	��������
	���أ���
*/
void	GPIO_Library_Disable_LED_3(void);

/*
	���ܣ��򿪷��������3
	��������
	���أ���
*/
void	GPIO_Library_Enable_LED_3(void);

/*
	���ܣ��رշ��������4
	��������
	���أ���
*/
void	GPIO_Library_Disable_LED_4(void);

/*
	���ܣ��򿪷��������4
	��������
	���أ���
*/
void	GPIO_Library_Enable_LED_4(void);

/*
	���ܣ��رշ��������5
	��������
	���أ���
*/
void	GPIO_Library_Disable_LED_5(void);

/*
	���ܣ��򿪷��������5
	��������
	���أ���
*/
void	GPIO_Library_Enable_LED_5(void);

/*
	���ܣ��رշ��������6
	��������
	���أ���
*/
void	GPIO_Library_Disable_LED_6(void);

/*
	���ܣ��򿪷��������6
	��������
	���أ���
*/
void	GPIO_Library_Enable_LED_6(void);

/*
	���ܣ��رշ��������7
	��������
	���أ���
*/
void	GPIO_Library_Disable_LED_7(void);

/*
	���ܣ��򿪷��������7
	��������
	���أ���
*/
void	GPIO_Library_Enable_LED_7(void);

/*
	���ܣ��رշ��������8
	��������
	���أ���
*/
void	GPIO_Library_Disable_LED_8(void);

/*
	���ܣ��򿪷��������8
	��������
	���أ���
*/
void	GPIO_Library_Enable_LED_8(void);

/*
	���ܣ��رշ�����
	��������
	���أ���
*/
void	GPIO_Library_Disable_Buzzer(void);

/*
	���ܣ��򿪷�����
	��������
	���أ���
*/
void	GPIO_Library_Enable_Buzzer(void);

#endif
