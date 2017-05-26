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

#ifndef	NXP_LPC1114_302_SYSTEM_CONFIGURATION_H
#define	NXP_LPC1114_302_SYSTEM_CONFIGURATION_H

#include	"Base.h"

/* ��������	*/

/* ϵͳ���õ�ϵͳ�洢����ӳ��Ĵ����ڲ� */
typedef	struct	Tag_System_Configuration_System_Memory_Remap_Register_Internal
{
	Integer_Unsigned_32_Bit	Map_Mode : 2;
}
	Structure_System_Configuration_System_Memory_Remap_Register_Internal;

/* ϵͳ���õ�ϵͳ�洢����ӳ��Ĵ��� */
typedef	union	Tag_System_Configuration_System_Memory_Remap_Register
{
	Integer_Unsigned_32_Bit													Value;
	Structure_System_Configuration_System_Memory_Remap_Register_Internal	Internal;
}
	Union_System_Configuration_System_Memory_Remap_Register;

/* ϵͳ���õ����踴λ���ƼĴ����ڲ� */
typedef	struct	Tag_System_Configuration_Peripheral_Reset_Control_Register_Internal
{
	Integer_Unsigned_32_Bit	SSP_0_Negative_Reset : 1;
	Integer_Unsigned_32_Bit	IIC_Negative_Reset	 : 1;
	Integer_Unsigned_32_Bit	SSP_1_Negative_Reset : 1;
}
	Structure_System_Configuration_Peripheral_Reset_Control_Register_Internal;

/* ϵͳ���õ����踴λ���ƼĴ��� */
typedef	union	Tag_System_Configuration_Peripheral_Reset_Control_Register
{
	Integer_Unsigned_32_Bit														Value;
	Structure_System_Configuration_Peripheral_Reset_Control_Register_Internal	Internal;
}
	Union_System_Configuration_Peripheral_Reset_Control_Register;

/* ϵͳ���õ�ϵͳ���໷���ƼĴ����ڲ� */
typedef	struct	Tag_System_Configuration_System_PLL_Control_Register_Internal
{
	Integer_Unsigned_32_Bit	Main_Divider_Value : 5;
	Integer_Unsigned_32_Bit	Post_Divider_Value : 2;
}
	Structure_System_Configuration_System_PLL_Control_Register_Internal;

/* ϵͳ���õ�ϵͳ���໷���ƼĴ��� */
typedef	union	Tag_System_Configuration_System_PLL_Control_Register
{
	Integer_Unsigned_32_Bit												Value;
	Structure_System_Configuration_System_PLL_Control_Register_Internal	Internal;
}
	Union_System_Configuration_System_PLL_Control_Register;

/* ϵͳ���õ�ϵͳ���໷״̬�Ĵ����ڲ� */
typedef	struct	Tag_System_Configuration_System_PLL_Status_Register_Internal
{
	Integer_Unsigned_32_Bit	Lock_Status : 1;
}
	Structure_System_Configuration_System_PLL_Status_Register_Internal;

/* ϵͳ���õ�ϵͳ���໷״̬�Ĵ��� */
typedef	union	Tag_System_Configuration_System_PLL_Status_Register
{
	Integer_Unsigned_32_Bit												Value;
	Structure_System_Configuration_System_PLL_Status_Register_Internal	Internal;
}
	Union_System_Configuration_System_PLL_Status_Register;

/* ϵͳ���õ�ϵͳ�������ƼĴ����ڲ� */
typedef	struct	Tag_System_Configuration_System_Oscillator_Control_Register_Internal
{
	Integer_Unsigned_32_Bit	Bypass			: 1;
	Integer_Unsigned_32_Bit	Frequency_Range	: 1;
}
	Structure_System_Configuration_System_Oscillator_Control_Register_Internal;

/* ϵͳ���õ�ϵͳ�������ƼĴ��� */
typedef	union	Tag_System_Configuration_System_Oscillator_Control_Register
{
	Integer_Unsigned_32_Bit														Value;
	Structure_System_Configuration_System_Oscillator_Control_Register_Internal	Internal;
}
	Union_System_Configuration_System_Oscillator_Control_Register;

/* ϵͳ���õļ���������ƼĴ����ڲ� */
typedef	struct	Tag_System_Configuration_Watchdog_Oscillator_Control_Register_Internal
{
	Integer_Unsigned_32_Bit	Divider_Value	: 5;
	Integer_Unsigned_32_Bit	Frequency_Value	: 4;
}
	Structure_System_Configuration_Watchdog_Oscillator_Control_Register_Internal;

/* ϵͳ���õļ���������ƼĴ��� */
typedef	union	Tag_System_Configuration_Watchdog_Oscillator_Control_Register
{
	Integer_Unsigned_32_Bit															Value;
	Structure_System_Configuration_Watchdog_Oscillator_Control_Register_Internal	Internal;
}
	Union_System_Configuration_Watchdog_Oscillator_Control_Register;

/* ϵͳ���õ��ڲ�г�����������ƼĴ����ڲ� */
typedef	struct	Tag_System_Configuration_IRC_Oscillator_Control_Register_Internal
{
	Integer_Unsigned_32_Bit	Trim_Value : 8;
}
	Structure_System_Configuration_IRC_Oscillator_Control_Register_Internal;

/* ϵͳ���õ��ڲ�г�����������ƼĴ��� */
typedef	union	Tag_System_Configuration_IRC_Oscillator_Control_Register
{
	Integer_Unsigned_32_Bit													Value;
	Structure_System_Configuration_IRC_Oscillator_Control_Register_Internal	Internal;
}
	Union_System_Configuration_IRC_Oscillator_Control_Register;

/* ϵͳ���õ�ϵͳ��λ״̬�Ĵ����ڲ� */
typedef	struct	Tag_System_Configuration_System_Reset_Status_Register_Internal
{
	Integer_Unsigned_32_Bit	Power_On_Reset		   : 1;
	Integer_Unsigned_32_Bit	External_Pin_Reset	   : 1;
	Integer_Unsigned_32_Bit	Watchdog_Reset		   : 1;
	Integer_Unsigned_32_Bit	Brown_Out_Detect_Reset : 1;
	Integer_Unsigned_32_Bit	System_Reset		   : 1;
}
	Structure_System_Configuration_System_Reset_Status_Register_Internal;

/* ϵͳ���õ�ϵͳ��λ״̬�Ĵ��� */
typedef	union	Tag_System_Configuration_System_Reset_Status_Register
{
	Integer_Unsigned_32_Bit													Value;
	Structure_System_Configuration_System_Reset_Status_Register_Internal	Internal;
}
	Union_System_Configuration_System_Reset_Status_Register;

/* ϵͳ���õ�ϵͳ���໷ʱ��Դѡ��Ĵ����ڲ� */
typedef	struct	Tag_System_Configuration_System_PLL_Clock_Source_Select_Register_Internal
{
	Integer_Unsigned_32_Bit	Clock_Source_Select : 2;
}
	Structure_System_Configuration_System_PLL_Clock_Source_Select_Register_Internal;

/* ϵͳ���õ�ϵͳ���໷ʱ��Դѡ��Ĵ��� */
typedef	union	Tag_System_Configuration_System_PLL_Clock_Source_Select_Register
{
	Integer_Unsigned_32_Bit															Value;
	Structure_System_Configuration_System_PLL_Clock_Source_Select_Register_Internal	Internal;
}
	Union_System_Configuration_System_PLL_Clock_Source_Select_Register;

/* ϵͳ���õ�ϵͳ���໷ʱ��Դ���¼Ĵ����ڲ� */
typedef	struct	Tag_System_Configuration_System_PLL_Clock_Source_Update_Register_Internal
{
	Integer_Unsigned_32_Bit	Clock_Source_Update : 1;
}
	Structure_System_Configuration_System_PLL_Clock_Source_Update_Register_Internal;

/* ϵͳ���õ�ϵͳ���໷ʱ��Դ���¼Ĵ��� */
typedef	union	Tag_System_Configuration_System_PLL_Clock_Source_Update_Register
{
	Integer_Unsigned_32_Bit															Value;
	Structure_System_Configuration_System_PLL_Clock_Source_Update_Register_Internal	Internal;
}
	Union_System_Configuration_System_PLL_Clock_Source_Update_Register;

/* ϵͳ���õ���ʱ��Դѡ��Ĵ����ڲ� */
typedef	struct	Tag_System_Configuration_Main_Clock_Source_Select_Register_Internal
{
	Integer_Unsigned_32_Bit	Clock_Source_Select : 2;
}
	Structure_System_Configuration_Main_Clock_Source_Select_Register_Internal;

/* ϵͳ���õ���ʱ��Դѡ��Ĵ��� */
typedef	union	Tag_System_Configuration_Main_Clock_Source_Select_Register
{
	Integer_Unsigned_32_Bit														Value;
	Structure_System_Configuration_Main_Clock_Source_Select_Register_Internal	Internal;
}
	Union_System_Configuration_Main_Clock_Source_Select_Register;

/* ϵͳ���õ���ʱ��Դ���¼Ĵ����ڲ� */
typedef	struct	Tag_System_Configuration_Main_Clock_Source_Update_Register_Internal
{
	Integer_Unsigned_32_Bit	Clock_Source_Update : 1;
}
	Structure_System_Configuration_Main_Clock_Source_Update_Register_Internal;

/* ϵͳ���õ���ʱ��Դ���¼Ĵ��� */
typedef	union	Tag_System_Configuration_Main_Clock_Source_Update_Register
{
	Integer_Unsigned_32_Bit														Value;
	Structure_System_Configuration_Main_Clock_Source_Update_Register_Internal	Internal;
}
	Union_System_Configuration_Main_Clock_Source_Update_Register;

/* ϵͳ���õ�ϵͳAHBʱ�ӷ�Ƶ���Ĵ����ڲ� */
typedef	struct	Tag_System_Configuration_System_AHB_Clock_Divider_Register_Internal
{
	Integer_Unsigned_32_Bit	Divider_Value : 8;
}
	Structure_System_Configuration_System_AHB_Clock_Divider_Register_Internal;

/* ϵͳ���õ�ϵͳAHBʱ�ӷ�Ƶ���Ĵ��� */
typedef	union	Tag_System_Configuration_System_AHB_Clock_Divider_Register
{
	Integer_Unsigned_32_Bit														Value;
	Structure_System_Configuration_System_AHB_Clock_Divider_Register_Internal	Internal;
}
	Union_System_Configuration_System_AHB_Clock_Divider_Register;

/* ϵͳ���õ�ϵͳAHBʱ�ӿ��ƼĴ����ڲ� */
typedef	struct	Tag_System_Configuration_System_AHB_Clock_Control_Register_Internal
{
	Integer_Unsigned_32_Bit	System_Clock_Enable					: 1;
	Integer_Unsigned_32_Bit	ROM_Clock_Enable					: 1;
	Integer_Unsigned_32_Bit	RAM_Clock_Enable					: 1;
	Integer_Unsigned_32_Bit	Flash_Interface_Clock_Enable		: 1;
	Integer_Unsigned_32_Bit	Flash_Array_Clock_Enable			: 1;
	Integer_Unsigned_32_Bit	IIC_Clock_Enable					: 1;
	Integer_Unsigned_32_Bit	GPIO_Clock_Enable					: 1;
	Integer_Unsigned_32_Bit	Counter_Timer_16_Bit_0_Clock_Enable : 1;
	Integer_Unsigned_32_Bit	Counter_Timer_16_Bit_1_Clock_Enable : 1;
	Integer_Unsigned_32_Bit	Counter_Timer_32_Bit_0_Clock_Enable : 1;
	Integer_Unsigned_32_Bit	Counter_Timer_32_Bit_1_Clock_Enable : 1;
	Integer_Unsigned_32_Bit	SSP_0_Clock_Enable					: 1;
	Integer_Unsigned_32_Bit	UART_Clock_Enable					: 1;
	Integer_Unsigned_32_Bit	ADC_Clock_Enable					: 1;
	Integer_Unsigned_32_Bit										: 1;
	Integer_Unsigned_32_Bit	Watchdog_Timer_Clock_Enable			: 1;
	Integer_Unsigned_32_Bit	IO_Configuration_Clock_Enable		: 1;
	Integer_Unsigned_32_Bit										: 1;
	Integer_Unsigned_32_Bit	SSP_1_Clock_Enable					: 1;
}
	Structure_System_Configuration_System_AHB_Clock_Control_Register_Internal;

/* ϵͳ���õ�ϵͳAHBʱ�ӿ��ƼĴ��� */
typedef	union	Tag_System_Configuration_System_AHB_Clock_Control_Register
{
	Integer_Unsigned_32_Bit														Value;
	Structure_System_Configuration_System_AHB_Clock_Control_Register_Internal	Internal;
}
	Union_System_Configuration_System_AHB_Clock_Control_Register;

/* ϵͳ���õ�SSP0ʱ�ӷ�Ƶ���Ĵ����ڲ� */
typedef	struct	Tag_System_Configuration_SSP_0_Clock_Divider_Register_Internal
{
	Integer_Unsigned_32_Bit	Divider_Value : 8;
}
	Structure_System_Configuration_SSP_0_Clock_Divider_Register_Internal;

/* ϵͳ���õ�SSP0ʱ�ӷ�Ƶ���Ĵ��� */
typedef	union	Tag_System_Configuration_SSP_0_Clock_Divider_Register
{
	Integer_Unsigned_32_Bit													Value;
	Structure_System_Configuration_SSP_0_Clock_Divider_Register_Internal	Internal;
}
	Union_System_Configuration_SSP_0_Clock_Divider_Register;

/* ϵͳ���õ�UARTʱ�ӷ�Ƶ���Ĵ����ڲ� */
typedef	struct	Tag_System_Configuration_UART_Clock_Divider_Register_Internal
{
	Integer_Unsigned_32_Bit	Divider_Value : 8;
}
	Structure_System_Configuration_UART_Clock_Divider_Register_Internal;

/* ϵͳ���õ�UARTʱ�ӷ�Ƶ���Ĵ��� */
typedef	union	Tag_System_Configuration_UART_Clock_Divider_Register
{
	Integer_Unsigned_32_Bit												Value;
	Structure_System_Configuration_UART_Clock_Divider_Register_Internal	Internal;
}
	Union_System_Configuration_UART_Clock_Divider_Register;

/* ϵͳ���õ�SSP1ʱ�ӷ�Ƶ���Ĵ����ڲ� */
typedef	struct	Tag_System_Configuration_SSP_1_Clock_Divider_Register_Internal
{
	Integer_Unsigned_32_Bit	Divider_Value : 8;
}
	Structure_System_Configuration_SSP_1_Clock_Divider_Register_Internal;

/* ϵͳ���õ�SSP1ʱ�ӷ�Ƶ���Ĵ��� */
typedef	union	Tag_System_Configuration_SSP_1_Clock_Divider_Register
{
	Integer_Unsigned_32_Bit													Value;
	Structure_System_Configuration_SSP_1_Clock_Divider_Register_Internal	Internal;
}
	Union_System_Configuration_SSP_1_Clock_Divider_Register;

/* ϵͳ���õļ�춨ʱ��ʱ��Դѡ��Ĵ����ڲ� */
typedef	struct	Tag_System_Configuration_Watchdog_Timer_Clock_Source_Select_Register_Internal
{
	Integer_Unsigned_32_Bit	Clock_Source_Select : 2;
}
	Structure_System_Configuration_Watchdog_Timer_Clock_Source_Select_Register_Internal;

/* ϵͳ���õļ�춨ʱ��ʱ��Դѡ��Ĵ��� */
typedef	union	Tag_System_Configuration_Watchdog_Timer_Clock_Source_Select_Register
{
	Integer_Unsigned_32_Bit																Value;
	Structure_System_Configuration_Watchdog_Timer_Clock_Source_Select_Register_Internal	Internal;
}
	Union_System_Configuration_Watchdog_Timer_Clock_Source_Select_Register;

/* ϵͳ���õļ�춨ʱ��ʱ��Դ���¼Ĵ����ڲ� */
typedef	struct	Tag_System_Configuration_Watchdog_Timer_Clock_Source_Update_Register_Internal
{
	Integer_Unsigned_32_Bit	Clock_Source_Update : 1;
}
	Structure_System_Configuration_Watchdog_Timer_Clock_Source_Update_Register_Internal;

/* ϵͳ���õļ�춨ʱ��ʱ��Դ���¼Ĵ��� */
typedef	union	Tag_System_Configuration_Watchdog_Timer_Clock_Source_Update_Register
{
	Integer_Unsigned_32_Bit																Value;
	Structure_System_Configuration_Watchdog_Timer_Clock_Source_Update_Register_Internal	Internal;
}
	Union_System_Configuration_Watchdog_Timer_Clock_Source_Update_Register;

/* ϵͳ���õļ�춨ʱ��ʱ�ӷ�Ƶ���Ĵ����ڲ� */
typedef	struct	Tag_System_Configuration_Watchdog_Timer_Clock_Divider_Register_Internal
{
	Integer_Unsigned_32_Bit	Divider_Value : 8;
}
	Structure_System_Configuration_Watchdog_Timer_Clock_Divider_Register_Internal;

/* ϵͳ���õļ�춨ʱ��ʱ�ӷ�Ƶ���Ĵ��� */
typedef	union	Tag_System_Configuration_Watchdog_Timer_Clock_Divider_Register
{
	Integer_Unsigned_32_Bit															Value;
	Structure_System_Configuration_Watchdog_Timer_Clock_Divider_Register_Internal	Internal;
}
	Union_System_Configuration_Watchdog_Timer_Clock_Divider_Register;

/* ϵͳ���õ�ʱ�����ʱ��Դѡ��Ĵ����ڲ� */
typedef	struct	Tag_System_Configuration_Clock_Out_Clock_Source_Select_Register_Internal
{
	Integer_Unsigned_32_Bit	Clock_Source_Select : 2;
}
	Structure_System_Configuration_Clock_Out_Clock_Source_Select_Register_Internal;

/* ϵͳ���õ�ʱ�����ʱ��Դѡ��Ĵ��� */
typedef	union	Tag_System_Configuration_Clock_Out_Clock_Source_Select_Register
{
	Integer_Unsigned_32_Bit															Value;
	Structure_System_Configuration_Clock_Out_Clock_Source_Select_Register_Internal	Internal;
}
	Union_System_Configuration_Clock_Out_Clock_Source_Select_Register;

/* ϵͳ���õ�ʱ�����ʱ��Դ���¼Ĵ����ڲ� */
typedef	struct	Tag_System_Configuration_Clock_Out_Clock_Source_Update_Register_Internal
{
	Integer_Unsigned_32_Bit	Clock_Source_Select : 1;
}
	Structure_System_Configuration_Clock_Out_Clock_Source_Update_Register_Internal;

/* ϵͳ���õ�ʱ�����ʱ��Դ���¼Ĵ��� */
typedef	union	Tag_System_Configuration_Clock_Out_Clock_Source_Update_Register
{
	Integer_Unsigned_32_Bit															Value;
	Structure_System_Configuration_Clock_Out_Clock_Source_Update_Register_Internal	Internal;
}
	Union_System_Configuration_Clock_Out_Clock_Source_Update_Register;

/* ϵͳ���õ�ʱ�����ʱ�ӷ�Ƶ���Ĵ����ڲ� */
typedef	struct	Tag_System_Configuration_Clock_Out_Clock_Divider_Register_Internal
{
	Integer_Unsigned_32_Bit	Divider_Value : 8;
}
	Structure_System_Configuration_Clock_Out_Clock_Divider_Register_Internal;

/* ϵͳ���õ�ʱ�����ʱ�ӷ�Ƶ���Ĵ��� */
typedef	union	Tag_System_Configuration_Clock_Out_Clock_Divider_Register
{
	Integer_Unsigned_32_Bit														Value;
	Structure_System_Configuration_Clock_Out_Clock_Divider_Register_Internal	Internal;
}
	Union_System_Configuration_Clock_Out_Clock_Divider_Register;

/* ϵͳ���õ�GPIO��λ״̬�Ĵ���0�ڲ� */
typedef	struct	Tag_System_Configuration_GPIO_Reset_Status_Register_0_Internal
{
	Integer_Unsigned_32_Bit	GPIO_0_Pin_0_Reset_Status  : 1;
	Integer_Unsigned_32_Bit	GPIO_0_Pin_1_Reset_Status  : 1;
	Integer_Unsigned_32_Bit	GPIO_0_Pin_2_Reset_Status  : 1;
	Integer_Unsigned_32_Bit	GPIO_0_Pin_3_Reset_Status  : 1;
	Integer_Unsigned_32_Bit	GPIO_0_Pin_4_Reset_Status  : 1;
	Integer_Unsigned_32_Bit	GPIO_0_Pin_5_Reset_Status  : 1;
	Integer_Unsigned_32_Bit	GPIO_0_Pin_6_Reset_Status  : 1;
	Integer_Unsigned_32_Bit	GPIO_0_Pin_7_Reset_Status  : 1;
	Integer_Unsigned_32_Bit	GPIO_0_Pin_8_Reset_Status  : 1;
	Integer_Unsigned_32_Bit	GPIO_0_Pin_9_Reset_Status  : 1;
	Integer_Unsigned_32_Bit	GPIO_0_Pin_10_Reset_Status : 1;
	Integer_Unsigned_32_Bit	GPIO_0_Pin_11_Reset_Status : 1;
	Integer_Unsigned_32_Bit	GPIO_1_Pin_0_Reset_Status  : 1;
	Integer_Unsigned_32_Bit	GPIO_1_Pin_1_Reset_Status  : 1;
	Integer_Unsigned_32_Bit	GPIO_1_Pin_2_Reset_Status  : 1;
	Integer_Unsigned_32_Bit	GPIO_1_Pin_3_Reset_Status  : 1;
	Integer_Unsigned_32_Bit	GPIO_1_Pin_4_Reset_Status  : 1;
	Integer_Unsigned_32_Bit	GPIO_1_Pin_5_Reset_Status  : 1;
	Integer_Unsigned_32_Bit	GPIO_1_Pin_6_Reset_Status  : 1;
	Integer_Unsigned_32_Bit	GPIO_1_Pin_7_Reset_Status  : 1;
	Integer_Unsigned_32_Bit	GPIO_1_Pin_8_Reset_Status  : 1;
	Integer_Unsigned_32_Bit	GPIO_1_Pin_9_Reset_Status  : 1;
	Integer_Unsigned_32_Bit	GPIO_1_Pin_10_Reset_Status : 1;
	Integer_Unsigned_32_Bit	GPIO_1_Pin_11_Reset_Status : 1;
	Integer_Unsigned_32_Bit	GPIO_2_Pin_0_Reset_Status  : 1;
	Integer_Unsigned_32_Bit	GPIO_2_Pin_1_Reset_Status  : 1;
	Integer_Unsigned_32_Bit	GPIO_2_Pin_2_Reset_Status  : 1;
	Integer_Unsigned_32_Bit	GPIO_2_Pin_3_Reset_Status  : 1;
	Integer_Unsigned_32_Bit	GPIO_2_Pin_4_Reset_Status  : 1;
	Integer_Unsigned_32_Bit	GPIO_2_Pin_5_Reset_Status  : 1;
	Integer_Unsigned_32_Bit	GPIO_2_Pin_6_Reset_Status  : 1;
	Integer_Unsigned_32_Bit	GPIO_2_Pin_7_Reset_Status  : 1;
}
	Structure_System_Configuration_GPIO_Reset_Status_Register_0_Internal;

/* ϵͳ���õ�GPIO��λ״̬�Ĵ���0 */
typedef	union	Tag_System_Configuration_GPIO_Reset_Status_Register_0
{
	Integer_Unsigned_32_Bit													Value;
	Structure_System_Configuration_GPIO_Reset_Status_Register_0_Internal	Internal;
}
	Union_System_Configuration_GPIO_Reset_Status_Register_0;

/* ϵͳ���õ�GPIO��λ״̬�Ĵ���1�ڲ� */
typedef	struct	Tag_System_Configuration_GPIO_Reset_Status_Register_1_Internal
{
	Integer_Unsigned_32_Bit	GPIO_2_Pin_8_Reset_Status  : 1;
	Integer_Unsigned_32_Bit	GPIO_2_Pin_9_Reset_Status  : 1;
	Integer_Unsigned_32_Bit	GPIO_2_Pin_10_Reset_Status : 1;
	Integer_Unsigned_32_Bit	GPIO_2_Pin_11_Reset_Status : 1;
	Integer_Unsigned_32_Bit	GPIO_3_Pin_0_Reset_Status  : 1;
	Integer_Unsigned_32_Bit	GPIO_3_Pin_1_Reset_Status  : 1;
	Integer_Unsigned_32_Bit	GPIO_3_Pin_2_Reset_Status  : 1;
	Integer_Unsigned_32_Bit	GPIO_3_Pin_3_Reset_Status  : 1;
	Integer_Unsigned_32_Bit	GPIO_3_Pin_4_Reset_Status  : 1;
	Integer_Unsigned_32_Bit	GPIO_3_Pin_5_Reset_Status  : 1;
}
	Structure_System_Configuration_GPIO_Reset_Status_Register_1_Internal;

/* ϵͳ���õ�GPIO��λ״̬�Ĵ���1 */
typedef	union	Tag_System_Configuration_GPIO_Reset_Status_Register_1
{
	Integer_Unsigned_32_Bit													Value;
	Structure_System_Configuration_GPIO_Reset_Status_Register_1_Internal	Internal;
}
	Union_System_Configuration_GPIO_Reset_Status_Register_1;

/* ϵͳ���õĵ�������ƼĴ����ڲ� */
typedef	struct	Tag_System_Configuration_Brown_Out_Detect_Control_Register_Internal
{
	Integer_Unsigned_32_Bit	Reset_Level 	: 2;
	Integer_Unsigned_32_Bit	Interrupt_Level	: 2;
	Integer_Unsigned_32_Bit	Reset_Enable	: 1;
}
	Structure_System_Configuration_Brown_Out_Detect_Control_Register_Internal;

/* ϵͳ���õĵ�������ƼĴ��� */
typedef	union	Tag_System_Configuration_Brown_Out_Detect_Control_Register
{
	Integer_Unsigned_32_Bit														Value;
	Structure_System_Configuration_Brown_Out_Detect_Control_Register_Internal	Internal;
}
	Union_System_Configuration_Brown_Out_Detect_Control_Register;

/* ϵͳ���õ�ϵͳ��ʱ��У׼�Ĵ����ڲ� */
typedef	struct	Tag_System_Configuration_System_Timer_Calibration_Register_Internal
{
	Integer_Unsigned_32_Bit	Calibration_Value : 26;
}
	Structure_System_Configuration_System_Timer_Calibration_Register_Internal;

/* ϵͳ���õ�ϵͳ��ʱ��У׼�Ĵ��� */
typedef	union	Tag_System_Configuration_System_Timer_Calibration_Register
{
	Integer_Unsigned_32_Bit														Value;
	Structure_System_Configuration_System_Timer_Calibration_Register_Internal	Internal;
}
	Union_System_Configuration_System_Timer_Calibration_Register;

/* ϵͳ���õ��ж��ӳټĴ����ڲ� */
typedef	struct	Tag_System_Configuration_Interrupt_Latency_Register_Internal
{
	Integer_Unsigned_32_Bit	Latency_Value : 8;
}
	Structure_System_Configuration_Interrupt_Latency_Register_Internal;

/* ϵͳ���õ��ж��ӳټĴ��� */
typedef	union	Tag_System_Configuration_Interrupt_Latency_Register
{
	Integer_Unsigned_32_Bit												Value;
	Structure_System_Configuration_Interrupt_Latency_Register_Internal	Internal;
}
	Union_System_Configuration_Interrupt_Latency_Register;

/* ϵͳ���õ������߼����ؿ��ƼĴ����ڲ� */
typedef	struct	Tag_System_Configuration_Start_Logic_Edge_Control_Register_Internal
{
	Integer_Unsigned_32_Bit	GPIO_0_Pin_0_Edge_Select  : 1;
	Integer_Unsigned_32_Bit	GPIO_0_Pin_1_Edge_Select  : 1;
	Integer_Unsigned_32_Bit	GPIO_0_Pin_2_Edge_Select  : 1;
	Integer_Unsigned_32_Bit	GPIO_0_Pin_3_Edge_Select  : 1;
	Integer_Unsigned_32_Bit	GPIO_0_Pin_4_Edge_Select  : 1;
	Integer_Unsigned_32_Bit	GPIO_0_Pin_5_Edge_Select  : 1;
	Integer_Unsigned_32_Bit	GPIO_0_Pin_6_Edge_Select  : 1;
	Integer_Unsigned_32_Bit	GPIO_0_Pin_7_Edge_Select  : 1;
	Integer_Unsigned_32_Bit	GPIO_0_Pin_8_Edge_Select  : 1;
	Integer_Unsigned_32_Bit	GPIO_0_Pin_9_Edge_Select  : 1;
	Integer_Unsigned_32_Bit	GPIO_0_Pin_10_Edge_Select : 1;
	Integer_Unsigned_32_Bit	GPIO_0_Pin_11_Edge_Select : 1;
	Integer_Unsigned_32_Bit	GPIO_1_Pin_0_Edge_Select  : 1;
}
	Structure_System_Configuration_Start_Logic_Edge_Control_Register_Internal;

/* ϵͳ���õ������߼����ؿ��ƼĴ��� */
typedef	union	Tag_System_Configuration_Start_Logic_Edge_Control_Register
{
	Integer_Unsigned_32_Bit														Value;
	Structure_System_Configuration_Start_Logic_Edge_Control_Register_Internal	Internal;
}
	Union_System_Configuration_Start_Logic_Edge_Control_Register;

/* ϵͳ���õ������߼��źſ��ƼĴ����ڲ� */
typedef	struct	Tag_System_Configuration_Start_Logic_Signal_Control_Register_Internal
{
	Integer_Unsigned_32_Bit	GPIO_0_Pin_0_Signal_Control	 : 1;
	Integer_Unsigned_32_Bit	GPIO_0_Pin_1_Signal_Control	 : 1;
	Integer_Unsigned_32_Bit	GPIO_0_Pin_2_Signal_Control	 : 1;
	Integer_Unsigned_32_Bit	GPIO_0_Pin_3_Signal_Control	 : 1;
	Integer_Unsigned_32_Bit	GPIO_0_Pin_4_Signal_Control	 : 1;
	Integer_Unsigned_32_Bit	GPIO_0_Pin_5_Signal_Control	 : 1;
	Integer_Unsigned_32_Bit	GPIO_0_Pin_6_Signal_Control	 : 1;
	Integer_Unsigned_32_Bit	GPIO_0_Pin_7_Signal_Control	 : 1;
	Integer_Unsigned_32_Bit	GPIO_0_Pin_8_Signal_Control	 : 1;
	Integer_Unsigned_32_Bit	GPIO_0_Pin_9_Signal_Control	 : 1;
	Integer_Unsigned_32_Bit	GPIO_0_Pin_10_Signal_Control : 1;
	Integer_Unsigned_32_Bit	GPIO_0_Pin_11_Signal_Control : 1;
	Integer_Unsigned_32_Bit	GPIO_1_Pin_0_Signal_Control	 : 1;
}
	Structure_System_Configuration_Start_Logic_Signal_Control_Register_Internal;

/* ϵͳ���õ������߼��źſ��ƼĴ��� */
typedef	union	Tag_System_Configuration_Start_Logic_Signal_Control_Register
{
	Integer_Unsigned_32_Bit														Value;
	Structure_System_Configuration_Start_Logic_Signal_Control_Register_Internal	Internal;
}
	Union_System_Configuration_Start_Logic_Signal_Control_Register;

/* ϵͳ���õ������߼���λ�Ĵ����ڲ� */
typedef	struct	Tag_System_Configuration_Start_Logic_Reset_Register_Internal
{
	Integer_Unsigned_32_Bit	GPIO_0_Pin_0_Reset	: 1;
	Integer_Unsigned_32_Bit	GPIO_0_Pin_1_Reset	: 1;
	Integer_Unsigned_32_Bit	GPIO_0_Pin_2_Reset	: 1;
	Integer_Unsigned_32_Bit	GPIO_0_Pin_3_Reset	: 1;
	Integer_Unsigned_32_Bit	GPIO_0_Pin_4_Reset	: 1;
	Integer_Unsigned_32_Bit	GPIO_0_Pin_5_Reset	: 1;
	Integer_Unsigned_32_Bit	GPIO_0_Pin_6_Reset	: 1;
	Integer_Unsigned_32_Bit	GPIO_0_Pin_7_Reset	: 1;
	Integer_Unsigned_32_Bit	GPIO_0_Pin_8_Reset	: 1;
	Integer_Unsigned_32_Bit	GPIO_0_Pin_9_Reset	: 1;
	Integer_Unsigned_32_Bit	GPIO_0_Pin_10_Reset	: 1;
	Integer_Unsigned_32_Bit	GPIO_0_Pin_11_Reset	: 1;
	Integer_Unsigned_32_Bit	GPIO_1_Pin_0_Reset	: 1;
}
	Structure_System_Configuration_Start_Logic_Reset_Register_Internal;

/* ϵͳ���õ������߼���λ�Ĵ��� */
typedef	union	Tag_System_Configuration_Start_Logic_Reset_Register
{
	Integer_Unsigned_32_Bit												Value;
	Structure_System_Configuration_Start_Logic_Reset_Register_Internal	Internal;
}
	Union_System_Configuration_Start_Logic_Reset_Register;

/* ϵͳ���õ������߼�״̬�Ĵ����ڲ� */
typedef	struct	Tag_System_Configuration_Start_Logic_Status_Register_Internal
{
	Integer_Unsigned_32_Bit	GPIO_0_Pin_0_Status	 : 1;
	Integer_Unsigned_32_Bit	GPIO_0_Pin_1_Status	 : 1;
	Integer_Unsigned_32_Bit	GPIO_0_Pin_2_Status	 : 1;
	Integer_Unsigned_32_Bit	GPIO_0_Pin_3_Status	 : 1;
	Integer_Unsigned_32_Bit	GPIO_0_Pin_4_Status	 : 1;
	Integer_Unsigned_32_Bit	GPIO_0_Pin_5_Status	 : 1;
	Integer_Unsigned_32_Bit	GPIO_0_Pin_6_Status	 : 1;
	Integer_Unsigned_32_Bit	GPIO_0_Pin_7_Status	 : 1;
	Integer_Unsigned_32_Bit	GPIO_0_Pin_8_Status	 : 1;
	Integer_Unsigned_32_Bit	GPIO_0_Pin_9_Status	 : 1;
	Integer_Unsigned_32_Bit	GPIO_0_Pin_10_Status : 1;
	Integer_Unsigned_32_Bit	GPIO_0_Pin_11_Status : 1;
	Integer_Unsigned_32_Bit	GPIO_1_Pin_0_Status	 : 1;
}
	Structure_System_Configuration_Start_Logic_Status_Register_Internal;

/* ϵͳ���õ������߼�״̬�Ĵ��� */
typedef	union	Tag_System_Configuration_Start_Logic_Status_Register
{
	Integer_Unsigned_32_Bit												Value;
	Structure_System_Configuration_Start_Logic_Status_Register_Internal	Internal;
}
	Union_System_Configuration_Start_Logic_Status_Register;

/* ϵͳ���õ����˯�����üĴ����ڲ� */
typedef	struct	Tag_System_Configuration_Deep_Sleep_Configuration_Register_Internal
{
	Integer_Unsigned_32_Bit	Bit_2_0_Always_111		 : 3;
	Integer_Unsigned_32_Bit	Brown_Out_Detect_Mode	 : 1;
	Integer_Unsigned_32_Bit	Bit_5_4_Always_11		 : 2;
	Integer_Unsigned_32_Bit	Watchdog_Oscillator_Mode : 1;
	Integer_Unsigned_32_Bit	Bit_7_Always_1			 : 1;
	Integer_Unsigned_32_Bit	Bit_10_8_Always_000		 : 3;
	Integer_Unsigned_32_Bit	Bit_12_11_Always_11		 : 2;
}
	Structure_System_Configuration_Deep_Sleep_Configuration_Register_Internal;

/* ϵͳ���õ����˯�����üĴ��� */
typedef	union	Tag_System_Configuration_Deep_Sleep_Configuration_Register
{
	Integer_Unsigned_32_Bit														Value;
	Structure_System_Configuration_Deep_Sleep_Configuration_Register_Internal	Internal;
}
	Union_System_Configuration_Deep_Sleep_Configuration_Register;

/* ϵͳ���õĻ������üĴ����ڲ� */
typedef	struct	Tag_System_Configuration_Wake_Up_Configuration_Register_Internal
{
	Integer_Unsigned_32_Bit	IRC_Oscillator_Output_Mode : 1;
	Integer_Unsigned_32_Bit	IRC_Oscillator_Mode		   : 1;
	Integer_Unsigned_32_Bit	Flash_Mode				   : 1;
	Integer_Unsigned_32_Bit	Brown_Out_Detect_Mode	   : 1;
	Integer_Unsigned_32_Bit	ADC_Mode				   : 1;
	Integer_Unsigned_32_Bit	System_Oscillator_Mode	   : 1;
	Integer_Unsigned_32_Bit	Watchdog_Oscillator_Mode   : 1;
	Integer_Unsigned_32_Bit	System_PLL_Mode			   : 1;
	Integer_Unsigned_32_Bit	Bit_8_Always_1			   : 1;
	Integer_Unsigned_32_Bit	Bit_9_Always_0			   : 1;
	Integer_Unsigned_32_Bit	Bit_10_Always_1			   : 1;
	Integer_Unsigned_32_Bit	Bit_11_Always_1			   : 1;
	Integer_Unsigned_32_Bit	Bit_12_Always_0			   : 1;
	Integer_Unsigned_32_Bit	Bit_15_13_Always_111	   : 3;
}
	Structure_System_Configuration_Wake_Up_Configuration_Register_Internal;

/* ϵͳ���õĻ������üĴ��� */
typedef	union	Tag_System_Configuration_Wake_Up_Configuration_Register
{
	Integer_Unsigned_32_Bit													Value;
	Structure_System_Configuration_Wake_Up_Configuration_Register_Internal	Internal;
}
	Union_System_Configuration_Wake_Up_Configuration_Register;

/* ϵͳ���õ��������üĴ����ڲ� */
typedef	struct	Tag_System_Configuration_Run_Configuration_Register_Internal
{
	Integer_Unsigned_32_Bit	IRC_Oscillator_Output_Mode : 1;
	Integer_Unsigned_32_Bit	IRC_Oscillator_Mode		   : 1;
	Integer_Unsigned_32_Bit	Flash_Mode				   : 1;
	Integer_Unsigned_32_Bit	Brown_Out_Detect_Mode	   : 1;
	Integer_Unsigned_32_Bit	ADC_Mode				   : 1;
	Integer_Unsigned_32_Bit	System_Oscillator_Mode	   : 1;
	Integer_Unsigned_32_Bit	Watchdog_Oscillator_Mode   : 1;
	Integer_Unsigned_32_Bit	System_PLL_Mode			   : 1;
	Integer_Unsigned_32_Bit	Bit_8_Always_1			   : 1;
	Integer_Unsigned_32_Bit	Bit_9_Always_0			   : 1;
	Integer_Unsigned_32_Bit	Bit_10_Always_1			   : 1;
	Integer_Unsigned_32_Bit	Bit_11_Always_1			   : 1;
	Integer_Unsigned_32_Bit	Bit_12_Always_0			   : 1;
	Integer_Unsigned_32_Bit	Bit_15_13_Always_111	   : 3;
}
	Structure_System_Configuration_Run_Configuration_Register_Internal;

/* ϵͳ���õ��������üĴ��� */
typedef	union	Tag_System_Configuration_Run_Configuration_Register
{
	Integer_Unsigned_32_Bit												Value;
	Structure_System_Configuration_Run_Configuration_Register_Internal	Internal;
}
	Union_System_Configuration_Run_Configuration_Register;

/* ϵͳ���õ��豸��ʶ�Ĵ����ڲ� */
typedef	struct	Tag_System_Configuration_Device_ID_Register_Internal
{
	Integer_Unsigned_32_Bit	Device_ID : 32;
}
	Structure_System_Configuration_Device_ID_Register_Internal;

/* ϵͳ���õ��豸��ʶ�Ĵ��� */
typedef	union	Tag_System_Configuration_Device_ID_Register
{
	Integer_Unsigned_32_Bit										Value;
	Structure_System_Configuration_Device_ID_Register_Internal	Internal;
}
	Union_System_Configuration_Device_ID_Register;

/* �������� */

/*
	���ܣ���ϵͳ���õ�ϵͳ�洢����ӳ��Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_System_Memory_Remap_Register(void);

/*
	���ܣ�дϵͳ���õ�ϵͳ�洢����ӳ��Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_System_Configuration_System_Memory_Remap_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���ϵͳ���õ����踴λ���ƼĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_Peripheral_Reset_Control_Register(void);

/*
	���ܣ�дϵͳ���õ����踴λ���ƼĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_System_Configuration_Peripheral_Reset_Control_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���ϵͳ���õ�ϵͳ���໷���ƼĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_System_PLL_Control_Register(void);

/*
	���ܣ�дϵͳ���õ�ϵͳ���໷���ƼĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_System_Configuration_System_PLL_Control_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���ϵͳ���õ�ϵͳ���໷״̬�Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_System_PLL_Status_Register(void);

/*
	���ܣ���ϵͳ���õ�ϵͳ�������ƼĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_System_Oscillator_Control_Register(void);

/*
	���ܣ�дϵͳ���õ�ϵͳ�������ƼĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_System_Configuration_System_Oscillator_Control_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���ϵͳ���õļ���������ƼĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_Watchdog_Oscillator_Control_Register(void);

/*
	���ܣ�дϵͳ���õļ���������ƼĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_System_Configuration_Watchdog_Oscillator_Control_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���ϵͳ���õ��ڲ�г�����������ƼĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_IRC_Oscillator_Control_Register(void);

/*
	���ܣ�дϵͳ���õ��ڲ�г�����������ƼĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_System_Configuration_IRC_Oscillator_Control_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���ϵͳ���õ�ϵͳ��λ״̬�Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_System_Reset_Status_Register(void);

/*
	���ܣ���ϵͳ���õ�ϵͳ���໷ʱ��Դѡ��Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_System_PLL_Clock_Source_Select_Register(void);

/*
	���ܣ�дϵͳ���õ�ϵͳ���໷ʱ��Դѡ��Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_System_Configuration_System_PLL_Clock_Source_Select_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���ϵͳ���õ�ϵͳ���໷ʱ��Դ���¼Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_System_PLL_Clock_Source_Update_Register(void);

/*
	���ܣ�дϵͳ���õ�ϵͳ���໷ʱ��Դ���¼Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_System_Configuration_System_PLL_Clock_Source_Update_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���ϵͳ���õ���ʱ��Դѡ��Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_Main_Clock_Source_Select_Register(void);

/*
	���ܣ�дϵͳ���õ�ʱ��Դѡ��Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_System_Configuration_Main_Clock_Source_Select_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���ϵͳ���õ���ʱ��Դ���¼Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_Main_Clock_Source_Update_Register(void);

/*
	���ܣ�дϵͳ���õ���ʱ��Դ���¼Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_System_Configuration_Main_Clock_Source_Update_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���ϵͳ���õ�ϵͳAHBʱ�ӷ�Ƶ���Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_System_AHB_Clock_Divider_Register(void);

/*
	���ܣ�дϵͳ���õ�ϵͳAHBʱ�ӷ�Ƶ���Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_System_Configuration_System_AHB_Clock_Divider_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���ϵͳ���õ�ϵͳAHBʱ�ӿ��ƼĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_System_AHB_Clock_Control_Register(void);

/*
	���ܣ�дϵͳ���õ�ϵͳAHBʱ�ӿ��ƼĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_System_Configuration_System_AHB_Clock_Control_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���ϵͳ���õ�SSP0ʱ�ӷ�Ƶ���Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_SSP_0_Clock_Divider_Register(void);

/*
	���ܣ�дϵͳ���õ�SSP0ʱ�ӷ�Ƶ���Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_System_Configuration_SSP_0_Clock_Divider_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���ϵͳ���õ�UARTʱ�ӷ�Ƶ���Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_UART_Clock_Divider_Register(void);

/*
	���ܣ�дϵͳ���õ�UARTʱ�ӷ�Ƶ���Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_System_Configuration_UART_Clock_Divider_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���ϵͳ���õ�SSP1ʱ�ӷ�Ƶ���Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_SSP_1_Clock_Divider_Register(void);

/*
	���ܣ�дϵͳ���õ�SSP1ʱ�ӷ�Ƶ���Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_System_Configuration_SSP_1_Clock_Divider_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���ϵͳ���õļ�춨ʱ��ʱ��Դѡ��Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_Watchdog_Timer_Clock_Source_Select_Register(void);

/*
	���ܣ�дϵͳ���õļ�춨ʱ��ʱ��Դѡ��Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_System_Configuration_Watchdog_Timer_Clock_Source_Select_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���ϵͳ���õļ�춨ʱ��ʱ��Դ���¼Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_Watchdog_Timer_Clock_Source_Update_Register(void);

/*
	���ܣ�дϵͳ���õļ�춨ʱ��ʱ��Դ���¼Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_System_Configuration_Watchdog_Timer_Clock_Source_Update_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���ϵͳ���õļ�춨ʱ��ʱ�ӷ�Ƶ���Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_Watchdog_Timer_Clock_Divider_Register(void);

/*
	���ܣ�дϵͳ���õļ�춨ʱ��ʱ�ӷ�Ƶ���Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_System_Configuration_Watchdog_Timer_Clock_Divider_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���ϵͳ���õ�ʱ�����ʱ��Դѡ��Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_Clock_Out_Clock_Source_Select_Register(void);

/*
	���ܣ�дϵͳ���õ�ʱ�����ʱ��Դѡ��Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_System_Configuration_Clock_Out_Clock_Source_Select_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���ϵͳ���õ�ʱ�����ʱ��Դ���¼Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_Clock_Out_Clock_Source_Update_Register(void);

/*
	���ܣ�дϵͳ���õ�ʱ�����ʱ��Դ���¼Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_System_Configuration_Clock_Out_Clock_Source_Update_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���ϵͳ���õ�ʱ�����ʱ�ӷ�Ƶ���Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_Clock_Out_Clock_Divider_Register(void);

/*
	���ܣ�дϵͳ���õ�ʱ�����ʱ�ӷ�Ƶ���Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_System_Configuration_Clock_Out_Clock_Divider_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���ϵͳ���õ�GPIO��λ״̬�Ĵ���0
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_GPIO_Reset_Status_Register_0(void);

/*
	���ܣ���ϵͳ���õ�GPIO��λ״̬�Ĵ���1
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_GPIO_Reset_Status_Register_1(void);

/*
	���ܣ���ϵͳ���õĵ�������ƼĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_Brown_Out_Detect_Control_Register(void);

/*
	���ܣ�дϵͳ���õĵ�������ƼĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_System_Configuration_Brown_Out_Detect_Control_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���ϵͳ���õ�ϵͳ��ʱ��У׼�Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_System_Timer_Calibration_Register(void);

/*
	���ܣ�дϵͳ���õ�ϵͳ��ʱ��У׼�Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_System_Configuration_System_Timer_Calibration_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���ϵͳ���õ��ж��ӳټĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_Interrupt_Latency_Register(void);

/*
	���ܣ�дϵͳ���õ��ж��ӳټĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_System_Configuration_Interrupt_Latency_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���ϵͳ���õĶ��߼����ؿ��ƼĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_Start_Logic_Edge_Control_Register(void);

/*
	���ܣ�дϵͳ���õĶ��߼����ؿ��ƼĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_System_Configuration_Start_Logic_Edge_Control_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���ϵͳ���õ������߼��źſ��ƼĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_Start_Logic_Signal_Control_Register(void);

/*
	���ܣ�дϵͳ���õ������߼��źſ��ƼĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_System_Configuration_Start_Logic_Signal_Control_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ�дϵͳ���õ������߼���λ�Ĵ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_System_Configuration_Start_Logic_Reset_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���ϵͳ���õ������߼�״̬�Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_Start_Logic_Status_Register(void);

/*
	���ܣ���ϵͳ���õ����˯�����üĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_Deep_Sleep_Configuration_Register(void);

/*
	���ܣ�дϵͳ���õ����˯�����üĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_System_Configuration_Deep_Sleep_Configuration_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���ϵͳ���õĻ������üĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_Wake_Up_Configuration_Register(void);

/*
	���ܣ�дϵͳ���õĻ������üĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_System_Configuration_Wake_Up_Configuration_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���ϵͳ���õ��������üĴ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_Run_Configuration_Register(void);

/*
	���ܣ�дϵͳ���õ��������üĴ���
	������Integer_Unsigned_32_Bit Register_Value���Ĵ�����ֵ
	���أ���
*/
void	Write_System_Configuration_Run_Configuration_Register(Integer_Unsigned_32_Bit Register_Value);

/*
	���ܣ���ϵͳ���õ��豸��ʶ�Ĵ���
	��������
	���أ�Integer_Unsigned_32_Bit���Ĵ�����ֵ
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_Device_ID_Register(void);

#endif
