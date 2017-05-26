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

#include	"NXP_LPC1114_302_System_Configuration.h"

/* ���ݶ��� */

/* ϵͳ���õļĴ�����ַ */
const Integer_Unsigned_32_Bit	System_Configuration_System_Memory_Remap_Register_Address				 = 0x40048000;
const Integer_Unsigned_32_Bit	System_Configuration_Peripheral_Reset_Control_Register_Address			 = 0x40048004;
const Integer_Unsigned_32_Bit	System_Configuration_System_PLL_Control_Register_Address				 = 0x40048008;
const Integer_Unsigned_32_Bit	System_Configuration_System_PLL_Status_Register_Address					 = 0x4004800C;
const Integer_Unsigned_32_Bit	System_Configuration_System_Oscillator_Control_Register_Address			 = 0x40048020;
const Integer_Unsigned_32_Bit	System_Configuration_Watchdog_Oscillator_Control_Register_Address		 = 0x40048024;
const Integer_Unsigned_32_Bit	System_Configuration_IRC_Oscillator_Control_Register_Address			 = 0x40048028;
const Integer_Unsigned_32_Bit	System_Configuration_System_Reset_Status_Register_Address				 = 0x40048030;
const Integer_Unsigned_32_Bit	System_Configuration_System_PLL_Clock_Source_Select_Register_Address	 = 0x40048040;
const Integer_Unsigned_32_Bit	System_Configuration_System_PLL_Clock_Source_Update_Register_Address	 = 0x40048044;
const Integer_Unsigned_32_Bit	System_Configuration_Main_Clock_Source_Select_Register_Address			 = 0x40048070;
const Integer_Unsigned_32_Bit	System_Configuration_Main_Clock_Source_Update_Register_Address			 = 0x40048074;
const Integer_Unsigned_32_Bit	System_Configuration_System_AHB_Clock_Divider_Register_Address			 = 0x40048078;
const Integer_Unsigned_32_Bit	System_Configuration_System_AHB_Clock_Control_Register_Address			 = 0x40048080;
const Integer_Unsigned_32_Bit	System_Configuration_SSP_0_Clock_Divider_Register_Address				 = 0x40048094;
const Integer_Unsigned_32_Bit	System_Configuration_UART_Clock_Divider_Register_Address				 = 0x40048098;
const Integer_Unsigned_32_Bit	System_Configuration_SSP_1_Clock_Divider_Register_Address				 = 0x4004809C;
const Integer_Unsigned_32_Bit	System_Configuration_Watchdog_Timer_Clock_Source_Select_Register_Address = 0x400480D0;
const Integer_Unsigned_32_Bit	System_Configuration_Watchdog_Timer_Clock_Source_Update_Register_Address = 0x400480D4;
const Integer_Unsigned_32_Bit	System_Configuration_Watchdog_Timer_Clock_Divider_Register_Address		 = 0x400480D8;
const Integer_Unsigned_32_Bit	System_Configuration_Clock_Out_Clock_Source_Select_Register_Address		 = 0x400480E0;
const Integer_Unsigned_32_Bit	System_Configuration_Clock_Out_Clock_Source_Update_Register_Address		 = 0x400480E4;
const Integer_Unsigned_32_Bit	System_Configuration_Clock_Out_Clock_Divider_Register_Address			 = 0x400480E8;
const Integer_Unsigned_32_Bit	System_Configuration_GPIO_Reset_Status_Register_0_Address				 = 0x40048100;
const Integer_Unsigned_32_Bit	System_Configuration_GPIO_Reset_Status_Register_1_Address				 = 0x40048104;
const Integer_Unsigned_32_Bit	System_Configuration_Brown_Out_Detect_Control_Register_Address			 = 0x40048150;
const Integer_Unsigned_32_Bit	System_Configuration_System_Timer_Calibration_Register_Address			 = 0x40048154;
const Integer_Unsigned_32_Bit	System_Configuration_Interrupt_Latency_Register_Address					 = 0x40048170;
const Integer_Unsigned_32_Bit	System_Configuration_Start_Logic_Edge_Control_Register_Address			 = 0x40048200;
const Integer_Unsigned_32_Bit	System_Configuration_Start_Logic_Signal_Control_Register_Address		 = 0x40048204;
const Integer_Unsigned_32_Bit	System_Configuration_Start_Logic_Reset_Register_Address					 = 0x40048208;
const Integer_Unsigned_32_Bit	System_Configuration_Start_Logic_Status_Register_Address				 = 0x4004820C;
const Integer_Unsigned_32_Bit	System_Configuration_Deep_Sleep_Configuration_Register_Address			 = 0x40048230;
const Integer_Unsigned_32_Bit	System_Configuration_Wake_Up_Configuration_Register_Address				 = 0x40048234;
const Integer_Unsigned_32_Bit	System_Configuration_Run_Configuration_Register_Address					 = 0x40048238;
const Integer_Unsigned_32_Bit	System_Configuration_Device_ID_Register_Address							 = 0x400483F4;

/* �������� */

/*
	���ܣ���ϵͳ���õ�ϵͳ�洢����ӳ��Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_System_Memory_Remap_Register(void)
{
	return Read_Register_32_Bit(System_Configuration_System_Memory_Remap_Register_Address);
}

/*
	���ܣ�дϵͳ���õ�ϵͳ�洢����ӳ��Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_System_Configuration_System_Memory_Remap_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(System_Configuration_System_Memory_Remap_Register_Address, Register_Value);
}

/*
	���ܣ���ϵͳ���õ����踴λ���ƼĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_Peripheral_Reset_Control_Register(void)
{
	return Read_Register_32_Bit(System_Configuration_Peripheral_Reset_Control_Register_Address);
}

/*
	���ܣ�дϵͳ���õ����踴λ���ƼĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_System_Configuration_Peripheral_Reset_Control_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(System_Configuration_Peripheral_Reset_Control_Register_Address, Register_Value);
}

/*
	���ܣ���ϵͳ���õ�ϵͳ���໷���ƼĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_System_PLL_Control_Register(void)
{
	return Read_Register_32_Bit(System_Configuration_System_PLL_Control_Register_Address);
}

/*
	���ܣ�дϵͳ���õ�ϵͳ���໷���ƼĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_System_Configuration_System_PLL_Control_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(System_Configuration_System_PLL_Control_Register_Address, Register_Value);
}

/*
	���ܣ���ϵͳ���õ�ϵͳ���໷״̬�Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_System_PLL_Status_Register(void)
{
	return Read_Register_32_Bit(System_Configuration_System_PLL_Status_Register_Address);
}

/*
	���ܣ���ϵͳ���õ�ϵͳ�������ƼĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_System_Oscillator_Control_Register(void)
{
	return Read_Register_32_Bit(System_Configuration_System_Oscillator_Control_Register_Address);
}

/*
	���ܣ�дϵͳ���õ�ϵͳ�������ƼĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_System_Configuration_System_Oscillator_Control_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(System_Configuration_System_Oscillator_Control_Register_Address, Register_Value);
}

/*
	���ܣ���ϵͳ���õļ���������ƼĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_Watchdog_Oscillator_Control_Register(void)
{
	return Read_Register_32_Bit(System_Configuration_Watchdog_Oscillator_Control_Register_Address);
}

/*
	���ܣ�дϵͳ���õļ���������ƼĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_System_Configuration_Watchdog_Oscillator_Control_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(System_Configuration_Watchdog_Oscillator_Control_Register_Address, Register_Value);
}

/*
	���ܣ���ϵͳ���õ��ڲ�г�����������ƼĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_IRC_Oscillator_Control_Register(void)
{
	return Read_Register_32_Bit(System_Configuration_IRC_Oscillator_Control_Register_Address);
}

/*
	���ܣ�дϵͳ���õ��ڲ�г�����������ƼĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_System_Configuration_IRC_Oscillator_Control_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(System_Configuration_IRC_Oscillator_Control_Register_Address, Register_Value);
}

/*
	���ܣ���ϵͳ���õ�ϵͳ��λ״̬�Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_System_Reset_Status_Register(void)
{
	return Read_Register_32_Bit(System_Configuration_System_Reset_Status_Register_Address);
}

/*
	���ܣ���ϵͳ���õ�ϵͳ���໷ʱ��Դѡ��Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_System_PLL_Clock_Source_Select_Register(void)
{
	return Read_Register_32_Bit(System_Configuration_System_PLL_Clock_Source_Select_Register_Address);
}

/*
	���ܣ�дϵͳ���õ�ϵͳ���໷ʱ��Դѡ��Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_System_Configuration_System_PLL_Clock_Source_Select_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(System_Configuration_System_PLL_Clock_Source_Select_Register_Address, Register_Value);
}

/*
	���ܣ���ϵͳ���õ�ϵͳ���໷ʱ��Դ���¼Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_System_PLL_Clock_Source_Update_Register(void)
{
	return Read_Register_32_Bit(System_Configuration_System_PLL_Clock_Source_Update_Register_Address);
}

/*
	���ܣ�дϵͳ���õ�ϵͳ���໷ʱ��Դ���¼Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_System_Configuration_System_PLL_Clock_Source_Update_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(System_Configuration_System_PLL_Clock_Source_Update_Register_Address, Register_Value);
}

/*
	���ܣ���ϵͳ���õ���ʱ��Դѡ��Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_Main_Clock_Source_Select_Register(void)
{
	return Read_Register_32_Bit(System_Configuration_Main_Clock_Source_Select_Register_Address);
}

/*
	���ܣ�дϵͳ���õ���ʱ��Դѡ��Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_System_Configuration_Main_Clock_Source_Select_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(System_Configuration_Main_Clock_Source_Select_Register_Address, Register_Value);
}

/*
	���ܣ���ϵͳ���õ���ʱ��Դ���¼Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_Main_Clock_Source_Update_Register(void)
{
	return Read_Register_32_Bit(System_Configuration_Main_Clock_Source_Update_Register_Address);
}

/*
	���ܣ�дϵͳ���õ���ʱ��Դ���¼Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_System_Configuration_Main_Clock_Source_Update_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(System_Configuration_Main_Clock_Source_Update_Register_Address, Register_Value);
}

/*
	���ܣ���ϵͳ���õ�ϵͳAHBʱ�ӷ�Ƶ���Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_System_AHB_Clock_Divider_Register(void)
{
	return Read_Register_32_Bit(System_Configuration_System_AHB_Clock_Divider_Register_Address);
}

/*
	���ܣ�дϵͳ���õ�ϵͳAHBʱ�ӷ�Ƶ���Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_System_Configuration_System_AHB_Clock_Divider_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(System_Configuration_System_AHB_Clock_Divider_Register_Address, Register_Value);
}

/*
	���ܣ���ϵͳ���õ�ϵͳAHBʱ�ӿ��ƼĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_System_AHB_Clock_Control_Register(void)
{
	return Read_Register_32_Bit(System_Configuration_System_AHB_Clock_Control_Register_Address);
}

/*
	���ܣ�дϵͳ���õ�ϵͳAHBʱ�ӿ��ƼĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_System_Configuration_System_AHB_Clock_Control_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(System_Configuration_System_AHB_Clock_Control_Register_Address, Register_Value);
}

/*
	���ܣ���ϵͳ���õ�SSP0ʱ�ӷ�Ƶ���Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_SSP_0_Clock_Divider_Register(void)
{
	return Read_Register_32_Bit(System_Configuration_SSP_0_Clock_Divider_Register_Address);
}

/*
	���ܣ�дϵͳ���õ�SSP0ʱ�ӷ�Ƶ���Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_System_Configuration_SSP_0_Clock_Divider_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(System_Configuration_SSP_0_Clock_Divider_Register_Address, Register_Value);
}

/*
	���ܣ���ϵͳ���õ�UARTʱ�ӷ�Ƶ���Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_UART_Clock_Divider_Register(void)
{
	return Read_Register_32_Bit(System_Configuration_UART_Clock_Divider_Register_Address);
}

/*
	���ܣ�дϵͳ���õ�UARTʱ�ӷ�Ƶ���Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_System_Configuration_UART_Clock_Divider_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(System_Configuration_UART_Clock_Divider_Register_Address, Register_Value);
}

/*
	���ܣ���ϵͳ���õ�SSP1ʱ�ӷ�Ƶ���Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_SSP_1_Clock_Divider_Register(void)
{
	return Read_Register_32_Bit(System_Configuration_SSP_1_Clock_Divider_Register_Address);
}

/*
	���ܣ�дϵͳ���õ�SSP1ʱ�ӷ�Ƶ���Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_System_Configuration_SSP_1_Clock_Divider_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(System_Configuration_SSP_1_Clock_Divider_Register_Address, Register_Value);
}

/*
	���ܣ���ϵͳ���õļ�춨ʱ��ʱ��Դѡ��Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_Watchdog_Timer_Clock_Source_Select_Register(void)
{
	return Read_Register_32_Bit(System_Configuration_Watchdog_Timer_Clock_Source_Select_Register_Address);
}

/*
	���ܣ�дϵͳ���õļ�춨ʱ��ʱ��Դѡ��Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_System_Configuration_Watchdog_Timer_Clock_Source_Select_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(System_Configuration_Watchdog_Timer_Clock_Source_Select_Register_Address, Register_Value);
}

/*
	���ܣ���ϵͳ���õļ�춨ʱ��ʱ��Դ���¼Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_Watchdog_Timer_Clock_Source_Update_Register(void)
{
	return Read_Register_32_Bit(System_Configuration_Watchdog_Timer_Clock_Source_Update_Register_Address);
}

/*
	���ܣ�дϵͳ���õļ�춨ʱ��ʱ��Դ���¼Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_System_Configuration_Watchdog_Timer_Clock_Source_Update_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(System_Configuration_Watchdog_Timer_Clock_Source_Update_Register_Address, Register_Value);
}

/*
	���ܣ���ϵͳ���õļ�춨ʱ��ʱ�ӷ�Ƶ���Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_Watchdog_Timer_Clock_Divider_Register(void)
{
	return Read_Register_32_Bit(System_Configuration_Watchdog_Timer_Clock_Divider_Register_Address);
}

/*
	���ܣ�дϵͳ���õļ�춨ʱ��ʱ�ӷ�Ƶ���Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_System_Configuration_Watchdog_Timer_Clock_Divider_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(System_Configuration_Watchdog_Timer_Clock_Divider_Register_Address, Register_Value);
}

/*
	���ܣ���ϵͳ���õ�ʱ�����ʱ��Դѡ��Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_Clock_Out_Clock_Source_Select_Register(void)
{
	return Read_Register_32_Bit(System_Configuration_Clock_Out_Clock_Source_Select_Register_Address);
}

/*
	���ܣ�дϵͳ���õ�ʱ�����ʱ��Դѡ��Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_System_Configuration_Clock_Out_Clock_Source_Select_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(System_Configuration_Clock_Out_Clock_Source_Select_Register_Address, Register_Value);
}

/*
	���ܣ���ϵͳ���õ�ʱ�����ʱ��Դ���¼Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_Clock_Out_Clock_Source_Update_Register(void)
{
	return Read_Register_32_Bit(System_Configuration_Clock_Out_Clock_Source_Update_Register_Address);
}

/*
	���ܣ�дϵͳ���õ�ʱ�����ʱ��Դ���¼Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_System_Configuration_Clock_Out_Clock_Source_Update_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(System_Configuration_Clock_Out_Clock_Source_Update_Register_Address, Register_Value);
}

/*
	���ܣ���ϵͳ���õ�ʱ�����ʱ�ӷ�Ƶ���Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_Clock_Out_Clock_Divider_Register(void)
{
	return Read_Register_32_Bit(System_Configuration_Clock_Out_Clock_Divider_Register_Address);
}

/*
	���ܣ�дϵͳ���õ�ʱ�����ʱ�ӷ�Ƶ���Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_System_Configuration_Clock_Out_Clock_Divider_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(System_Configuration_Clock_Out_Clock_Divider_Register_Address, Register_Value);
}

/*
	���ܣ���ϵͳ���õ�GPIO��λ״̬�Ĵ���0
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_GPIO_Reset_Status_Register_0(void)
{
	return Read_Register_32_Bit(System_Configuration_GPIO_Reset_Status_Register_0_Address);
}

/*
	���ܣ���ϵͳ���õ�GPIO��λ״̬�Ĵ���1
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_GPIO_Reset_Status_Register_1(void)
{
	return Read_Register_32_Bit(System_Configuration_GPIO_Reset_Status_Register_1_Address);
}

/*
	���ܣ���ϵͳ���õĵ�������ƼĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_Brown_Out_Detect_Control_Register(void)
{
	return Read_Register_32_Bit(System_Configuration_Brown_Out_Detect_Control_Register_Address);
}

/*
	���ܣ�дϵͳ���õĵ�������ƼĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_System_Configuration_Brown_Out_Detect_Control_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(System_Configuration_Brown_Out_Detect_Control_Register_Address, Register_Value);
}

/*
	���ܣ���ϵͳ���õ�ϵͳ��ʱ��У׼�Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_System_Timer_Calibration_Register(void)
{
	return Read_Register_32_Bit(System_Configuration_System_Timer_Calibration_Register_Address);
}

/*
	���ܣ�дϵͳ���õ�ϵͳ��ʱ��У׼�Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_System_Configuration_System_Timer_Calibration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(System_Configuration_System_Timer_Calibration_Register_Address, Register_Value);
}

/*
	���ܣ���ϵͳ���õ��ж��ӳټĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_Interrupt_Latency_Register(void)
{
	return Read_Register_32_Bit(System_Configuration_Interrupt_Latency_Register_Address);
}

/*
	���ܣ�дϵͳ���õ��ж��ӳټĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_System_Configuration_Interrupt_Latency_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(System_Configuration_Interrupt_Latency_Register_Address, Register_Value);
}

/*
	���ܣ���ϵͳ���õĶ��߼����ؿ��ƼĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_Start_Logic_Edge_Control_Register(void)
{
	return Read_Register_32_Bit(System_Configuration_Start_Logic_Edge_Control_Register_Address);
}

/*
	���ܣ�дϵͳ���õĶ��߼����ؿ��ƼĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_System_Configuration_Start_Logic_Edge_Control_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(System_Configuration_Start_Logic_Edge_Control_Register_Address, Register_Value);
}

/*
	���ܣ���ϵͳ���õ������߼��źſ��ƼĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_Start_Logic_Signal_Control_Register(void)
{
	return Read_Register_32_Bit(System_Configuration_Start_Logic_Signal_Control_Register_Address);
}

/*
	���ܣ�дϵͳ���õ������߼��źſ��ƼĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_System_Configuration_Start_Logic_Signal_Control_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(System_Configuration_Start_Logic_Signal_Control_Register_Address, Register_Value);
}

/*
	���ܣ�дϵͳ���õ������߼���λ�Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_System_Configuration_Start_Logic_Reset_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(System_Configuration_Start_Logic_Reset_Register_Address, Register_Value);
}

/*
	���ܣ���ϵͳ���õ������߼�״̬�Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_Start_Logic_Status_Register(void)
{
	return Read_Register_32_Bit(System_Configuration_Start_Logic_Status_Register_Address);
}

/*
	���ܣ���ϵͳ���õ����˯�����üĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_Deep_Sleep_Configuration_Register(void)
{
	return Read_Register_32_Bit(System_Configuration_Deep_Sleep_Configuration_Register_Address);
}

/*
	���ܣ�дϵͳ���õ����˯�����üĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_System_Configuration_Deep_Sleep_Configuration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(System_Configuration_Deep_Sleep_Configuration_Register_Address, Register_Value);
}

/*
	���ܣ���ϵͳ���õĻ������üĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_Wake_Up_Configuration_Register(void)
{
	return Read_Register_32_Bit(System_Configuration_Wake_Up_Configuration_Register_Address);
}

/*
	���ܣ�дϵͳ���õĻ������üĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_System_Configuration_Wake_Up_Configuration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(System_Configuration_Wake_Up_Configuration_Register_Address, Register_Value);
}

/*
	���ܣ���ϵͳ���õ��������üĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_Run_Configuration_Register(void)
{
	return Read_Register_32_Bit(System_Configuration_Run_Configuration_Register_Address);
}

/*
	���ܣ�дϵͳ���õ��������üĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_System_Configuration_Run_Configuration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(System_Configuration_Run_Configuration_Register_Address, Register_Value);
}

/*
	���ܣ���ϵͳ���õ��豸��ʶ�Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_Device_ID_Register(void)
{
	return Read_Register_32_Bit(System_Configuration_Device_ID_Register_Address);
}
