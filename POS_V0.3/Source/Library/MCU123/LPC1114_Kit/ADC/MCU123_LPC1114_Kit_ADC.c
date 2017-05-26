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

#include	"MCU123_LPC1114_Kit_ADC.h"

/* ���ݶ��� */

/* ת��ֵ */
Integer_Unsigned_16_Bit	ADC_Library_Conversion_Value;

/* �������� */

/*
	���ܣ���ʼ��
	��������
	���أ���
*/
void	ADC_Library_Initialize(void)
{
	Union_ADC_Control_Register			ADC_Control_Register;
	Union_ADC_Interrupt_Enable_Register	ADC_Interrupt_Enable_Register;
	
	/* ����ͨ����ʱ�ӷ�Ƶ���� */
	ADC_Control_Register.Value = Read_ADC_Control_Register();
	ADC_Control_Register.Internal.Select_Channel_5 = 1;
	ADC_Control_Register.Internal.Clock_Divisor = 11;
	Write_ADC_Control_Register(ADC_Control_Register.Value);
	
	/* �����ж�ʹ�� */
	ADC_Interrupt_Enable_Register.Value = Read_ADC_Interrupt_Enable_Register();
	ADC_Interrupt_Enable_Register.Internal.Channel_5_Interrupt_Enable = 1;
	ADC_Interrupt_Enable_Register.Internal.Global_Interrupt_Enable = 0;
	Write_ADC_Interrupt_Enable_Register(ADC_Interrupt_Enable_Register.Value);
}

/*
	���ܣ�����ת��
	��������
	���أ���
*/
void	ADC_Library_Start_Conversion(void)
{
	Union_ADC_Control_Register	ADC_Control_Register;
	
	/* ����ת��ֵ������ģʽ */
	ADC_Library_Conversion_Value = 0;
	ADC_Control_Register.Value = Read_ADC_Control_Register();
	ADC_Control_Register.Internal.Start_Mode = 1;
	Write_ADC_Control_Register(ADC_Control_Register.Value);
}

/*
	���ܣ�ȡ��ת��ֵ
	��������
	���أ�Integer_Unsigned_16Bit��ת��ֵ
*/
Integer_Unsigned_16_Bit	ADC_Library_Get_Conversion_Value(void)
{
	return ADC_Library_Conversion_Value;
}

/*
	���ܣ�����ж�
	��������
	���أ���
*/
void	ADC_Library_Clear_Interrupt(void)
{
	Union_ADC_Data_Register_5	ADC_Data_Register_5;
	
	/* �����ɱ�־ */
	ADC_Data_Register_5.Value = Read_ADC_Data_Register_5();
	Read_ADC_Global_Data_Register();
	
	/* ����ת��ֵ */
	ADC_Library_Conversion_Value = ADC_Data_Register_5.Internal.Conversion_Value;
}
