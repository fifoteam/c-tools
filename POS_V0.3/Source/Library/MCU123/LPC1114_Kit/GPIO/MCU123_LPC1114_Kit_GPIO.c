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

#include	"MCU123_LPC1114_Kit_GPIO.h"

/* �������� */

/*
	���ܣ���ʼ��
	��������
	���أ���
*/
void	GPIO_Library_Initialize(void)
{
	Union_GPIO_0_Data_Direction_Register	GPIO_0_Data_Direction_Register;
	Union_GPIO_0_Data_Register				GPIO_0_Data_Register;
	Union_GPIO_1_Data_Direction_Register	GPIO_1_Data_Direction_Register;
	Union_GPIO_1_Data_Register				GPIO_1_Data_Register;
	Union_GPIO_2_Data_Direction_Register	GPIO_2_Data_Direction_Register;
	Union_GPIO_2_Data_Register				GPIO_2_Data_Register;
	Union_GPIO_3_Data_Direction_Register	GPIO_3_Data_Direction_Register;
	Union_GPIO_3_Data_Register				GPIO_3_Data_Register;
	
	/* �ر��ж� */
	Core_Library_Disable_Interrupt();
	
	/* ����GPIO�˿�0���ݷ��� */
	GPIO_0_Data_Direction_Register.Value = Read_GPIO_0_Data_Direction_Register();
	GPIO_0_Data_Direction_Register.Internal.Pin_2 = 1;
	GPIO_0_Data_Direction_Register.Internal.Pin_8 = 1;
	Write_GPIO_0_Data_Direction_Register(GPIO_0_Data_Direction_Register.Value);
	
	/* ����GPIO�˿�0���� */
	GPIO_0_Data_Register.Value = Read_GPIO_0_Data_Register();
	GPIO_0_Data_Register.Internal.Pin_2 = 0;
	GPIO_0_Data_Register.Internal.Pin_8 = 0;
	Write_GPIO_0_Data_Register(GPIO_0_Data_Register.Value);
	
	/* ����GPIO�˿�1���ݷ��� */
	GPIO_1_Data_Direction_Register.Value = Read_GPIO_1_Data_Direction_Register();
	GPIO_1_Data_Direction_Register.Internal.Pin_8 = 1;
	GPIO_1_Data_Direction_Register.Internal.Pin_9 = 1;
	Write_GPIO_1_Data_Direction_Register(GPIO_1_Data_Direction_Register.Value);
	
	/* ����GPIO�˿�1���� */
	GPIO_1_Data_Register.Value = Read_GPIO_1_Data_Register();
	GPIO_1_Data_Register.Internal.Pin_8 = 0;
	GPIO_1_Data_Register.Internal.Pin_9 = 0;
	Write_GPIO_1_Data_Register(GPIO_1_Data_Register.Value);
	
	/* ����GPIO�˿�2���ݷ��� */
	GPIO_2_Data_Direction_Register.Value = Read_GPIO_2_Data_Direction_Register();
	GPIO_2_Data_Direction_Register.Internal.Pin_1 = 1;
	GPIO_2_Data_Direction_Register.Internal.Pin_7 = 1;
	GPIO_2_Data_Direction_Register.Internal.Pin_8 = 1;
	Write_GPIO_2_Data_Direction_Register(GPIO_2_Data_Direction_Register.Value);
	
	/* ����GPIO�˿�2���� */
	GPIO_2_Data_Register.Value = Read_GPIO_2_Data_Register();
	GPIO_2_Data_Register.Internal.Pin_1 = 0;
	GPIO_2_Data_Register.Internal.Pin_7 = 0;
	GPIO_2_Data_Register.Internal.Pin_8 = 0;
	Write_GPIO_2_Data_Register(GPIO_2_Data_Register.Value);
	
	/* ����GPIO�˿�3���ݷ��� */
	GPIO_3_Data_Direction_Register.Value = Read_GPIO_3_Data_Direction_Register();
	GPIO_3_Data_Direction_Register.Internal.Pin_4 = 1;
	GPIO_3_Data_Direction_Register.Internal.Pin_5 = 1;
	Write_GPIO_3_Data_Direction_Register(GPIO_3_Data_Direction_Register.Value);
	
	/* ����GPIO�˿�3���� */
	GPIO_3_Data_Register.Value = Read_GPIO_3_Data_Register();
	GPIO_3_Data_Register.Internal.Pin_4 = 0;
	GPIO_3_Data_Register.Internal.Pin_5 = 0;
	Write_GPIO_3_Data_Register(GPIO_3_Data_Register.Value);
	
	/* ���ж� */
	Core_Library_Enable_Interrupt();
}

/*
	���ܣ��رշ��������1
	��������
	���أ���
*/
void	GPIO_Library_Disable_LED_1(void)
{
	Union_GPIO_1_Data_Register	GPIO_1_Data_Register;
	
	/* �ر��ж� */
	Core_Library_Disable_Interrupt();
	
	/* ����GPIO�˿�1���� */
	GPIO_1_Data_Register.Value = Read_GPIO_1_Data_Register();
	GPIO_1_Data_Register.Internal.Pin_8 = 1;
	Write_GPIO_1_Data_Register(GPIO_1_Data_Register.Value);
	
	/* ���ж� */
	Core_Library_Enable_Interrupt();
}

/*
	���ܣ��򿪷��������1
	��������
	���أ���
*/
void	GPIO_Library_Enable_LED_1(void)
{
	Union_GPIO_1_Data_Register	GPIO_1_Data_Register;
	
	/* �ر��ж� */
	Core_Library_Disable_Interrupt();
	
	/* ����GPIO�˿�1���� */
	GPIO_1_Data_Register.Value = Read_GPIO_1_Data_Register();
	GPIO_1_Data_Register.Internal.Pin_8 = 0;
	Write_GPIO_1_Data_Register(GPIO_1_Data_Register.Value);
	
	/* ���ж� */
	Core_Library_Enable_Interrupt();
}

/*
	���ܣ��رշ��������2
	��������
	���أ���
*/
void	GPIO_Library_Disable_LED_2(void)
{
	Union_GPIO_0_Data_Register	GPIO_0_Data_Register;
	
	/* �ر��ж� */
	Core_Library_Disable_Interrupt();
	
	/* ����GPIO�˿�0���� */
	GPIO_0_Data_Register.Value = Read_GPIO_0_Data_Register();
	GPIO_0_Data_Register.Internal.Pin_2 = 1;
	Write_GPIO_0_Data_Register(GPIO_0_Data_Register.Value);
	
	/* ���ж� */
	Core_Library_Enable_Interrupt();
}

/*
	���ܣ��򿪷��������2
	��������
	���أ���
*/
void	GPIO_Library_Enable_LED_2(void)
{
	Union_GPIO_0_Data_Register	GPIO_0_Data_Register;
	
	/* �ر��ж� */
	Core_Library_Disable_Interrupt();
	
	/* ����GPIO�˿�0���� */
	GPIO_0_Data_Register.Value = Read_GPIO_0_Data_Register();
	GPIO_0_Data_Register.Internal.Pin_2 = 0;
	Write_GPIO_0_Data_Register(GPIO_0_Data_Register.Value);
	
	/* ���ж� */
	Core_Library_Enable_Interrupt();
}

/*
	���ܣ��رշ��������3
	��������
	���أ���
*/
void	GPIO_Library_Disable_LED_3(void)
{
	Union_GPIO_2_Data_Register	GPIO_2_Data_Register;
	
	/* �ر��ж� */
	Core_Library_Disable_Interrupt();
	
	/* ����GPIO�˿�2���� */
	GPIO_2_Data_Register.Value = Read_GPIO_2_Data_Register();
	GPIO_2_Data_Register.Internal.Pin_7 = 1;
	Write_GPIO_2_Data_Register(GPIO_2_Data_Register.Value);
	
	/* ���ж� */
	Core_Library_Enable_Interrupt();
}

/*
	���ܣ��򿪷��������3
	��������
	���أ���
*/
void	GPIO_Library_Enable_LED_3(void)
{
	Union_GPIO_2_Data_Register	GPIO_2_Data_Register;
	
	/* �ر��ж� */
	Core_Library_Disable_Interrupt();
	
	/* ����GPIO�˿�2���� */
	GPIO_2_Data_Register.Value = Read_GPIO_2_Data_Register();
	GPIO_2_Data_Register.Internal.Pin_7 = 0;
	Write_GPIO_2_Data_Register(GPIO_2_Data_Register.Value);
	
	/* ���ж� */
	Core_Library_Enable_Interrupt();
}

/*
	���ܣ��رշ��������4
	��������
	���أ���
*/
void	GPIO_Library_Disable_LED_4(void)
{
	Union_GPIO_2_Data_Register	GPIO_2_Data_Register;
	
	/* �ر��ж� */
	Core_Library_Disable_Interrupt();
	
	/* ����GPIO�˿�2���� */
	GPIO_2_Data_Register.Value = Read_GPIO_2_Data_Register();
	GPIO_2_Data_Register.Internal.Pin_8 = 1;
	Write_GPIO_2_Data_Register(GPIO_2_Data_Register.Value);
	
	/* ���ж� */
	Core_Library_Enable_Interrupt();
}

/*
	���ܣ��򿪷��������4
	��������
	���أ���
*/
void	GPIO_Library_Enable_LED_4(void)
{
	Union_GPIO_2_Data_Register	GPIO_2_Data_Register;
	
	/* �ر��ж� */
	Core_Library_Disable_Interrupt();
	
	/* ����GPIO�˿�2���� */
	GPIO_2_Data_Register.Value = Read_GPIO_2_Data_Register();
	GPIO_2_Data_Register.Internal.Pin_8 = 0;
	Write_GPIO_2_Data_Register(GPIO_2_Data_Register.Value);
	
	/* ���ж� */
	Core_Library_Enable_Interrupt();
}

/*
	���ܣ��رշ��������5
	��������
	���أ���
*/
void	GPIO_Library_Disable_LED_5(void)
{
	Union_GPIO_2_Data_Register	GPIO_2_Data_Register;
	
	/* �ر��ж� */
	Core_Library_Disable_Interrupt();
	
	/* ����GPIO�˿�2���� */
	GPIO_2_Data_Register.Value = Read_GPIO_2_Data_Register();
	GPIO_2_Data_Register.Internal.Pin_1 = 1;
	Write_GPIO_2_Data_Register(GPIO_2_Data_Register.Value);
	
	/* ���ж� */
	Core_Library_Enable_Interrupt();
}

/*
	���ܣ��򿪷��������5
	��������
	���أ���
*/
void	GPIO_Library_Enable_LED_5(void)
{
	Union_GPIO_2_Data_Register	GPIO_2_Data_Register;
	
	/* �ر��ж� */
	Core_Library_Disable_Interrupt();
	
	/* ����GPIO�˿�2���� */
	GPIO_2_Data_Register.Value = Read_GPIO_2_Data_Register();
	GPIO_2_Data_Register.Internal.Pin_1 = 0;
	Write_GPIO_2_Data_Register(GPIO_2_Data_Register.Value);
	
	/* ���ж� */
	Core_Library_Enable_Interrupt();
}

/*
	���ܣ��رշ��������6
	��������
	���أ���
*/
void	GPIO_Library_Disable_LED_6(void)
{
	Union_GPIO_1_Data_Register	GPIO_1_Data_Register;
	
	/* �ر��ж� */
	Core_Library_Disable_Interrupt();
	
	/* ����GPIO�˿�1���� */
	GPIO_1_Data_Register.Value = Read_GPIO_1_Data_Register();
	GPIO_1_Data_Register.Internal.Pin_9 = 1;
	Write_GPIO_1_Data_Register(GPIO_1_Data_Register.Value);
	
	/* ���ж� */
	Core_Library_Enable_Interrupt();
}

/*
	���ܣ��򿪷��������6
	��������
	���أ���
*/
void	GPIO_Library_Enable_LED_6(void)
{
	Union_GPIO_1_Data_Register	GPIO_1_Data_Register;
	
	/* �ر��ж� */
	Core_Library_Disable_Interrupt();
	
	/* ����GPIO�˿�1���� */
	GPIO_1_Data_Register.Value = Read_GPIO_1_Data_Register();
	GPIO_1_Data_Register.Internal.Pin_9 = 0;
	Write_GPIO_1_Data_Register(GPIO_1_Data_Register.Value);
	
	/* ���ж� */
	Core_Library_Enable_Interrupt();
}

/*
	���ܣ��رշ��������7
	��������
	���أ���
*/
void	GPIO_Library_Disable_LED_7(void)
{
	Union_GPIO_3_Data_Register	GPIO_3_Data_Register;
	
	/* �ر��ж� */
	Core_Library_Disable_Interrupt();
	
	/* ����GPIO�˿�3���� */
	GPIO_3_Data_Register.Value = Read_GPIO_3_Data_Register();
	GPIO_3_Data_Register.Internal.Pin_4 = 1;
	Write_GPIO_3_Data_Register(GPIO_3_Data_Register.Value);
	
	/* ���ж� */
	Core_Library_Enable_Interrupt();
}

/*
	���ܣ��򿪷��������7
	��������
	���أ���
*/
void	GPIO_Library_Enable_LED_7(void)
{
	Union_GPIO_3_Data_Register	GPIO_3_Data_Register;
	
	/* �ر��ж� */
	Core_Library_Disable_Interrupt();
	
	/* ����GPIO�˿�3���� */
	GPIO_3_Data_Register.Value = Read_GPIO_3_Data_Register();
	GPIO_3_Data_Register.Internal.Pin_4 = 0;
	Write_GPIO_3_Data_Register(GPIO_3_Data_Register.Value);
	
	/* ���ж� */
	Core_Library_Enable_Interrupt();
}

/*
	���ܣ��رշ��������8
	��������
	���أ���
*/
void	GPIO_Library_Disable_LED_8(void)
{
	Union_GPIO_3_Data_Register	GPIO_3_Data_Register;
	
	/* �ر��ж� */
	Core_Library_Disable_Interrupt();
	
	/* ����GPIO�˿�3���� */
	GPIO_3_Data_Register.Value = Read_GPIO_3_Data_Register();
	GPIO_3_Data_Register.Internal.Pin_5 = 1;
	Write_GPIO_3_Data_Register(GPIO_3_Data_Register.Value);
	
	/* ���ж� */
	Core_Library_Enable_Interrupt();
}

/*
	���ܣ��򿪷��������8
	��������
	���أ���
*/
void	GPIO_Library_Enable_LED_8(void)
{
	Union_GPIO_3_Data_Register	GPIO_3_Data_Register;
	
	/* �ر��ж� */
	Core_Library_Disable_Interrupt();
	
	/* ����GPIO�˿�3���� */
	GPIO_3_Data_Register.Value = Read_GPIO_3_Data_Register();
	GPIO_3_Data_Register.Internal.Pin_5 = 0;
	Write_GPIO_3_Data_Register(GPIO_3_Data_Register.Value);
	
	/* ���ж� */
	Core_Library_Enable_Interrupt();
}

/*
	���ܣ��رշ�����
	��������
	���أ���
*/
void	GPIO_Library_Disable_Buzzer(void)
{
	Union_GPIO_0_Data_Register	GPIO_0_Data_Register;
	
	/* �ر��ж� */
	Core_Library_Disable_Interrupt();
	
	/* ����GPIO�˿�0���� */
	GPIO_0_Data_Register.Value = Read_GPIO_0_Data_Register();
	GPIO_0_Data_Register.Internal.Pin_8 = 0;
	Write_GPIO_0_Data_Register(GPIO_0_Data_Register.Value);
	
	/* ���ж� */
	Core_Library_Enable_Interrupt();
}

/*
	���ܣ��򿪷�����
	��������
	���أ���
*/
void	GPIO_Library_Enable_Buzzer(void)
{
	Union_GPIO_0_Data_Register	GPIO_0_Data_Register;
	
	/* �ر��ж� */
	Core_Library_Disable_Interrupt();
	
	/* ����GPIO�˿�0���� */
	GPIO_0_Data_Register.Value = Read_GPIO_0_Data_Register();
	GPIO_0_Data_Register.Internal.Pin_8 = 1;
	Write_GPIO_0_Data_Register(GPIO_0_Data_Register.Value);
	
	/* ���ж� */
	Core_Library_Enable_Interrupt();
}
