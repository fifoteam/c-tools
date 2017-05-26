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

#include	"MCU123_LPC1114_Kit_Counter_Timer_16_Bit.h"

/* �������� */

/*
	���ܣ���ʼ��
	��������
	���أ���
*/
void	Counter_Timer_16_Bit_Library_Initialize(void)
{
	Union_Counter_Timer_16_Bit_0_Prescale_Register		Counter_Timer_16_Bit_0_Prescale_Register;
	Union_Counter_Timer_16_Bit_0_Match_Register_0		Counter_Timer_16_Bit_0_Match_Register_0;
	Union_Counter_Timer_16_Bit_0_Match_Control_Register	Counter_Timer_16_Bit_0_Match_Control_Register;
	Union_Counter_Timer_16_Bit_0_Timer_Control_Register	Counter_Timer_16_Bit_0_Timer_Control_Register;
	
	/* ����Ԥ��Ƶֵ */
	Counter_Timer_16_Bit_0_Prescale_Register.Value = Read_Counter_Timer_16_Bit_0_Prescale_Register();
	Counter_Timer_16_Bit_0_Prescale_Register.Internal.Prescale_Value = 8 * 1000 - 1;
	Write_Counter_Timer_16_Bit_0_Prescale_Register(Counter_Timer_16_Bit_0_Prescale_Register.Value);
	
	/* ����ƥ��ֵ */
	Counter_Timer_16_Bit_0_Match_Register_0.Value = Read_Counter_Timer_16_Bit_0_Match_Register_0();
	Counter_Timer_16_Bit_0_Match_Register_0.Internal.Match_Value = 6 * 1000;
	Write_Counter_Timer_16_Bit_0_Match_Register_0(Counter_Timer_16_Bit_0_Match_Register_0.Value);
	
	/* ����ƥ����� */
	Counter_Timer_16_Bit_0_Match_Control_Register.Value = Read_Counter_Timer_16_Bit_0_Match_Control_Register();
	Counter_Timer_16_Bit_0_Match_Control_Register.Internal.Match_0_Interrupt = 1;
	Counter_Timer_16_Bit_0_Match_Control_Register.Internal.Match_0_Reset = 1;
	Write_Counter_Timer_16_Bit_0_Match_Control_Register(Counter_Timer_16_Bit_0_Match_Control_Register.Value);
	
	/* �򿪶�ʱ�� */
	Counter_Timer_16_Bit_0_Timer_Control_Register.Value = Read_Counter_Timer_16_Bit_0_Timer_Control_Register();
	Counter_Timer_16_Bit_0_Timer_Control_Register.Internal.Counter_Enable = 1;
	Write_Counter_Timer_16_Bit_0_Timer_Control_Register(Counter_Timer_16_Bit_0_Timer_Control_Register.Value);
}

/*
	���ܣ��򿪼�������ʱ��0
	��������
	���أ���
*/
void	Counter_Timer_16_Bit_Library_Enable_Counter_Timer_0(void)
{
	Union_Counter_Timer_16_Bit_0_Timer_Control_Register	Counter_Timer_16_Bit_0_Timer_Control_Register;
	
	/* �򿪶�ʱ�� */
	Counter_Timer_16_Bit_0_Timer_Control_Register.Value = Read_Counter_Timer_16_Bit_0_Timer_Control_Register();
	Counter_Timer_16_Bit_0_Timer_Control_Register.Internal.Counter_Enable = 1;
	Write_Counter_Timer_16_Bit_0_Timer_Control_Register(Counter_Timer_16_Bit_0_Timer_Control_Register.Value);
}

/*
	���ܣ��رռ�������ʱ��0
	��������
	���أ���
*/
void	Counter_Timer_16_Bit_Library_Disable_Counter_Timer_0(void)
{
	Union_Counter_Timer_16_Bit_0_Timer_Control_Register	Counter_Timer_16_Bit_0_Timer_Control_Register;
	
	/* �رն�ʱ�� */
	Counter_Timer_16_Bit_0_Timer_Control_Register.Value = Read_Counter_Timer_16_Bit_0_Timer_Control_Register();
	Counter_Timer_16_Bit_0_Timer_Control_Register.Internal.Counter_Enable = 0;
	Counter_Timer_16_Bit_0_Timer_Control_Register.Internal.Counter_Reset = 1;
	Write_Counter_Timer_16_Bit_0_Timer_Control_Register(Counter_Timer_16_Bit_0_Timer_Control_Register.Value);
	
	/* ��λ��ʱ����������Ԥ��Ƶ������ */
	Counter_Timer_16_Bit_0_Timer_Control_Register.Value = Read_Counter_Timer_16_Bit_0_Timer_Control_Register();
	Counter_Timer_16_Bit_0_Timer_Control_Register.Internal.Counter_Reset = 0;
	Write_Counter_Timer_16_Bit_0_Timer_Control_Register(Counter_Timer_16_Bit_0_Timer_Control_Register.Value);
}

/*
	���ܣ������������ʱ��0��ƥ��ͨ��0�ж�
	��������
	���أ���
*/
void	Counter_Timer_16_Bit_Library_Clear_Counter_Timer_0_Match_0_Interrupt(void)
{
	Union_Counter_Timer_16_Bit_0_Interrupt_Register	Counter_Timer_16_Bit_0_Interrupt_Register;
	
	/* ����жϱ�־ */
	Counter_Timer_16_Bit_0_Interrupt_Register.Value = Read_Counter_Timer_16_Bit_0_Interrupt_Register();
	Counter_Timer_16_Bit_0_Interrupt_Register.Internal.Match_0_Interrupt_Flag = 1;
	Write_Counter_Timer_16_Bit_0_Interrupt_Register(Counter_Timer_16_Bit_0_Interrupt_Register.Value);
}
