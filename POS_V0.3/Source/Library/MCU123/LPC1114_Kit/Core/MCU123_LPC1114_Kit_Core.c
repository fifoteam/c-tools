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

#include	"MCU123_LPC1114_Kit_Core.h"

/*
	���ܣ���ʼ��M0
	��������
	���أ���
*/
void	Core_Library_Initialize_M0(void)
{
	Enumeration_API_Name	API_Name;
	Union_API_Parameter		API_Parameter;
	
	/* ��ʼ���ж��������� */
	Wake_0_Interrupt_Task_Index = Task_Count_Limitation;
	Wake_1_Interrupt_Task_Index = Task_Count_Limitation;
	Wake_2_Interrupt_Task_Index = Task_Count_Limitation;
	Wake_3_Interrupt_Task_Index = Task_Count_Limitation;
	Wake_4_Interrupt_Task_Index = Task_Count_Limitation;
	Wake_5_Interrupt_Task_Index = Task_Count_Limitation;
	Wake_6_Interrupt_Task_Index = Task_Count_Limitation;
	Wake_7_Interrupt_Task_Index = Task_Count_Limitation;
	Wake_8_Interrupt_Task_Index = Task_Count_Limitation;
	Wake_9_Interrupt_Task_Index = Task_Count_Limitation;
	Wake_10_Interrupt_Task_Index = Task_Count_Limitation;
	Wake_11_Interrupt_Task_Index = Task_Count_Limitation;
	Wake_12_Interrupt_Task_Index = Task_Count_Limitation;
	SPI_0_Interrupt_Task_Index = Task_Count_Limitation;
	IIC_Interrupt_Task_Index = Task_Count_Limitation;
	Counter_Timer_16_Bit_0_Interrupt_Task_Index = Task_Count_Limitation;
	Counter_Timer_16_Bit_1_Interrupt_Task_Index = Task_Count_Limitation;
	Counter_Timer_32_Bit_0_Interrupt_Task_Index = Task_Count_Limitation;
	Counter_Timer_32_Bit_1_Interrupt_Task_Index = Task_Count_Limitation;
	SPI_1_Interrupt_Task_Index = Task_Count_Limitation;
	UART_Interrupt_Task_Index = Task_Count_Limitation;
	ADC_Interrupt_Task_Index = Task_Count_Limitation;
	Watchdog_Timer_Interrupt_Task_Index = Task_Count_Limitation;
	Brown_Out_Detect_Interrupt_Task_Index = Task_Count_Limitation;
	GPIO_3_Interrupt_Task_Index = Task_Count_Limitation;
	GPIO_2_Interrupt_Task_Index = Task_Count_Limitation;
	GPIO_1_Interrupt_Task_Index = Task_Count_Limitation;
	GPIO_0_Interrupt_Task_Index = Task_Count_Limitation;
	
	/* ��ʼ������жϺ���ָ�� */
	Wake_0_Clear_Interrupt_Function_Pointer = 0;
	Wake_1_Clear_Interrupt_Function_Pointer = 0;
	Wake_2_Clear_Interrupt_Function_Pointer = 0;
	Wake_3_Clear_Interrupt_Function_Pointer = 0;
	Wake_4_Clear_Interrupt_Function_Pointer = 0;
	Wake_5_Clear_Interrupt_Function_Pointer = 0;
	Wake_6_Clear_Interrupt_Function_Pointer = 0;
	Wake_7_Clear_Interrupt_Function_Pointer = 0;
	Wake_8_Clear_Interrupt_Function_Pointer = 0;
	Wake_9_Clear_Interrupt_Function_Pointer = 0;
	Wake_10_Clear_Interrupt_Function_Pointer = 0;
	Wake_11_Clear_Interrupt_Function_Pointer = 0;
	Wake_12_Clear_Interrupt_Function_Pointer = 0;
	SPI_0_Clear_Interrupt_Function_Pointer = 0;
	IIC_Clear_Interrupt_Function_Pointer = 0;
	Counter_Timer_16_Bit_0_Clear_Interrupt_Function_Pointer = 0;
	Counter_Timer_16_Bit_1_Clear_Interrupt_Function_Pointer = 0;
	Counter_Timer_32_Bit_0_Clear_Interrupt_Function_Pointer = 0;
	Counter_Timer_32_Bit_1_Clear_Interrupt_Function_Pointer = 0;
	SPI_1_Clear_Interrupt_Function_Pointer = 0;
	UART_Clear_Interrupt_Function_Pointer = 0;
	ADC_Clear_Interrupt_Function_Pointer = 0;
	Watchdog_Timer_Clear_Interrupt_Function_Pointer = 0;
	Brown_Out_Detect_Clear_Interrupt_Function_Pointer = 0;
	GPIO_3_Clear_Interrupt_Function_Pointer = 0;
	GPIO_2_Clear_Interrupt_Function_Pointer = 0;
	GPIO_1_Clear_Interrupt_Function_Pointer = 0;
	GPIO_0_Clear_Interrupt_Function_Pointer = 0;
	
	/* ��ʼ��ϵͳ��ʱ���ļ�ʱ�жϴ��� */
	System_Timer_Tick_Interrupt_Count = 0;
	
	/* ��ʼ������ */
	API_Name = API_Initialize_Schedule;
	Call_API(&API_Name, &API_Parameter);
}

/*
	���ܣ���ʼ��ϵͳ���ƿ�
	��������
	���أ���
*/
void	Core_Library_Initialize_System_Control_Block(void)
{
	/* ���� */
}

/*
	���ܣ���ʼ��ϵͳ��ʱ��
	��������
	���أ���
*/
void	Core_Library_Initialize_System_Timer(void)
{
	Union_System_Timer_Current_Value_Register	System_Timer_Current_Value_Register;
	Union_System_Timer_Reload_Value_Register	System_Timer_Reload_Value_Register;
	Union_System_Timer_Control_Status_Register	System_Timer_Control_Status_Register;
	
	/* ���õ�ǰֵ */
	System_Timer_Current_Value_Register.Value = Read_System_Timer_Current_Value_Register();
	System_Timer_Current_Value_Register.Internal.Current_Value = 0;
	Write_System_Timer_Current_Value_Register(System_Timer_Current_Value_Register.Value);
	
	/* ������װֵ */
	System_Timer_Reload_Value_Register.Value = Read_System_Timer_Reload_Value_Register();
	System_Timer_Reload_Value_Register.Internal.Reload_Value = 48 * 1000 - 1;
	Write_System_Timer_Reload_Value_Register(System_Timer_Reload_Value_Register.Value);
	
	/* ��ϵͳ��ʱ�� */
	System_Timer_Control_Status_Register.Value = Read_System_Timer_Control_Status_Register();
	System_Timer_Control_Status_Register.Internal.Tick_Counter_Enable = 1;
	System_Timer_Control_Status_Register.Internal.Tick_Interrupt_Enable = 1;
	System_Timer_Control_Status_Register.Internal.Tick_Clock_Source = 1;
	Write_System_Timer_Control_Status_Register(System_Timer_Control_Status_Register.Value);
}

/*
	���ܣ���ʼ��NVIC
	��������
	���أ���
*/
void	Core_Library_Initialize_NVIC(void)
{
	Union_NVIC_Interrupt_Set_Enable_Register	NVIC_Interrupt_Set_Enable_Register;
	
	/* ���ж� */
	NVIC_Interrupt_Set_Enable_Register.Value = Read_NVIC_Interrupt_Set_Enable_Register();
	NVIC_Interrupt_Set_Enable_Register.Internal.IIC_Interrupt_Set_Enable = 1;
	NVIC_Interrupt_Set_Enable_Register.Internal.Counter_Timer_16_Bit_0_Interrupt_Set_Enable = 1;
	NVIC_Interrupt_Set_Enable_Register.Internal.ADC_Conversion_Interrupt_Set_Enable = 1;
	Write_NVIC_Interrupt_Set_Enable_Register(NVIC_Interrupt_Set_Enable_Register.Value);
}

/*
	���ܣ���ʼ��ϵͳ����
	��������
	���أ���
*/
void	Core_Library_Initialize_System_Configuration(void)
{
	Union_System_Configuration_System_PLL_Control_Register			System_Configuration_System_PLL_Control_Register;
	Union_System_Configuration_Run_Configuration_Register			System_Configuration_Run_Configuration_Register;
	Union_System_Configuration_System_PLL_Status_Register			System_Configuration_System_PLL_Status_Register;
	Union_System_Configuration_Main_Clock_Source_Select_Register	System_Configuration_Main_Clock_Source_Select_Register;
	Union_System_Configuration_Main_Clock_Source_Update_Register	System_Configuration_Main_Clock_Source_Update_Register;
	
	/* ����ϵͳPLL��Ƶ���� */
	System_Configuration_System_PLL_Control_Register.Value = Read_System_Configuration_System_PLL_Control_Register();
	System_Configuration_System_PLL_Control_Register.Internal.Main_Divider_Value = 3;
	System_Configuration_System_PLL_Control_Register.Internal.Post_Divider_Value = 1;
	Write_System_Configuration_System_PLL_Control_Register(System_Configuration_System_PLL_Control_Register.Value);
	
	/* ��ADC��ϵͳPLL��Դ */
	System_Configuration_Run_Configuration_Register.Value = Read_System_Configuration_Run_Configuration_Register();
	System_Configuration_Run_Configuration_Register.Internal.ADC_Mode = 0;
	System_Configuration_Run_Configuration_Register.Internal.System_PLL_Mode = 0;
	System_Configuration_Run_Configuration_Register.Internal.Bit_8_Always_1 = 1;
	System_Configuration_Run_Configuration_Register.Internal.Bit_9_Always_0 = 0;
	System_Configuration_Run_Configuration_Register.Internal.Bit_10_Always_1 = 1;
	System_Configuration_Run_Configuration_Register.Internal.Bit_11_Always_1 = 1;
	System_Configuration_Run_Configuration_Register.Internal.Bit_12_Always_0 = 0;
	System_Configuration_Run_Configuration_Register.Internal.Bit_15_13_Always_111 = 7;
	Write_System_Configuration_Run_Configuration_Register(System_Configuration_Run_Configuration_Register.Value);
	
	/* �ȴ�ϵͳPLL���� */
	do
	{
		System_Configuration_System_PLL_Status_Register.Value = Read_System_Configuration_System_PLL_Status_Register();
	}
	while (System_Configuration_System_PLL_Status_Register.Internal.Lock_Status == 0);
	
	/* ������ʱ��Դ */
	System_Configuration_Main_Clock_Source_Select_Register.Value = Read_System_Configuration_Main_Clock_Source_Select_Register();
	System_Configuration_Main_Clock_Source_Select_Register.Internal.Clock_Source_Select = 3;
	Write_System_Configuration_Main_Clock_Source_Select_Register(System_Configuration_Main_Clock_Source_Select_Register.Value);
	
	/* ������ʱ��Դ */
	System_Configuration_Main_Clock_Source_Update_Register.Value = Read_System_Configuration_Main_Clock_Source_Update_Register();
	System_Configuration_Main_Clock_Source_Update_Register.Internal.Clock_Source_Update = 0;
	Write_System_Configuration_Main_Clock_Source_Update_Register(System_Configuration_Main_Clock_Source_Update_Register.Value);
	System_Configuration_Main_Clock_Source_Update_Register.Internal.Clock_Source_Update = 1;
	Write_System_Configuration_Main_Clock_Source_Update_Register(System_Configuration_Main_Clock_Source_Update_Register.Value);
}

/*
	���ܣ���ʼ��IO����
	��������
	���أ���
*/
void	Core_Library_Initialize_IO_Configuration(void)
{
	Union_System_Configuration_System_AHB_Clock_Control_Register	System_Configuration_System_AHB_Clock_Control_Register;
	Union_IO_Configuration_GPIO_1_Pin_6_Configuration_Register		IO_Configuration_GPIO_1_Pin_6_Configuration_Register;
	Union_IO_Configuration_GPIO_1_Pin_7_Configuration_Register		IO_Configuration_GPIO_1_Pin_7_Configuration_Register;
	Union_IO_Configuration_GPIO_1_Pin_8_Configuration_Register		IO_Configuration_GPIO_1_Pin_8_Configuration_Register;
	Union_IO_Configuration_GPIO_0_Pin_2_Configuration_Register		IO_Configuration_GPIO_0_Pin_2_Configuration_Register;
	Union_IO_Configuration_GPIO_2_Pin_7_Configuration_Register		IO_Configuration_GPIO_2_Pin_7_Configuration_Register;
	Union_IO_Configuration_GPIO_2_Pin_8_Configuration_Register		IO_Configuration_GPIO_2_Pin_8_Configuration_Register;
	Union_IO_Configuration_GPIO_2_Pin_1_Configuration_Register		IO_Configuration_GPIO_2_Pin_1_Configuration_Register;
	Union_IO_Configuration_GPIO_1_Pin_9_Configuration_Register		IO_Configuration_GPIO_1_Pin_9_Configuration_Register;
	Union_IO_Configuration_GPIO_3_Pin_4_Configuration_Register		IO_Configuration_GPIO_3_Pin_4_Configuration_Register;
	Union_IO_Configuration_GPIO_3_Pin_5_Configuration_Register		IO_Configuration_GPIO_3_Pin_5_Configuration_Register;
	Union_System_Configuration_UART_Clock_Divider_Register			System_Configuration_UART_Clock_Divider_Register;
	Union_IO_Configuration_GPIO_0_Pin_4_Configuration_Register		IO_Configuration_GPIO_0_Pin_4_Configuration_Register;
	Union_IO_Configuration_GPIO_0_Pin_5_Configuration_Register		IO_Configuration_GPIO_0_Pin_5_Configuration_Register;
	Union_System_Configuration_Peripheral_Reset_Control_Register	System_Configuration_Peripheral_Reset_Control_Register;
	Union_IO_Configuration_GPIO_1_Pin_4_Configuration_Register		IO_Configuration_GPIO_1_Pin_4_Configuration_Register;
	
	/* ����ʱ�� */
	System_Configuration_System_AHB_Clock_Control_Register.Value = Read_System_Configuration_System_AHB_Clock_Control_Register();
	System_Configuration_System_AHB_Clock_Control_Register.Internal.IO_Configuration_Clock_Enable = 1;
	Write_System_Configuration_System_AHB_Clock_Control_Register(System_Configuration_System_AHB_Clock_Control_Register.Value);
	
	/* ����GPIO�˿�1����6�Ĺ��� */
	IO_Configuration_GPIO_1_Pin_6_Configuration_Register.Value = Read_IO_Configuration_GPIO_1_Pin_6_Configuration_Register();
	IO_Configuration_GPIO_1_Pin_6_Configuration_Register.Internal.Pin_Function = 1;
	IO_Configuration_GPIO_1_Pin_6_Configuration_Register.Internal.Resistor_Mode = 0;
	Write_IO_Configuration_GPIO_1_Pin_6_Configuration_Register(IO_Configuration_GPIO_1_Pin_6_Configuration_Register.Value);
	
	/* ����GPIO�˿�1����7�Ĺ��� */
	IO_Configuration_GPIO_1_Pin_7_Configuration_Register.Value = Read_IO_Configuration_GPIO_1_Pin_7_Configuration_Register();
	IO_Configuration_GPIO_1_Pin_7_Configuration_Register.Internal.Pin_Function = 1;
	IO_Configuration_GPIO_1_Pin_7_Configuration_Register.Internal.Resistor_Mode = 0;
	Write_IO_Configuration_GPIO_1_Pin_7_Configuration_Register(IO_Configuration_GPIO_1_Pin_7_Configuration_Register.Value);
	
	/* ����GPIO�˿�1����8�Ĺ��� */
	IO_Configuration_GPIO_1_Pin_8_Configuration_Register.Value = Read_IO_Configuration_GPIO_1_Pin_8_Configuration_Register();
	IO_Configuration_GPIO_1_Pin_8_Configuration_Register.Internal.Resistor_Mode = 0;
	Write_IO_Configuration_GPIO_1_Pin_8_Configuration_Register(IO_Configuration_GPIO_1_Pin_8_Configuration_Register.Value);
	
	/* ����GPIO�˿�0����2�Ĺ��� */
	IO_Configuration_GPIO_0_Pin_2_Configuration_Register.Value = Read_IO_Configuration_GPIO_0_Pin_2_Configuration_Register();
	IO_Configuration_GPIO_0_Pin_2_Configuration_Register.Internal.Resistor_Mode = 0;
	Write_IO_Configuration_GPIO_0_Pin_2_Configuration_Register(IO_Configuration_GPIO_0_Pin_2_Configuration_Register.Value);
	
	/* ����GPIO�˿�2����7�Ĺ��� */
	IO_Configuration_GPIO_2_Pin_7_Configuration_Register.Value = Read_IO_Configuration_GPIO_2_Pin_7_Configuration_Register();
	IO_Configuration_GPIO_2_Pin_7_Configuration_Register.Internal.Resistor_Mode = 0;
	Write_IO_Configuration_GPIO_2_Pin_7_Configuration_Register(IO_Configuration_GPIO_2_Pin_7_Configuration_Register.Value);
	
	/* ����GPIO�˿�2����8�Ĺ��� */
	IO_Configuration_GPIO_2_Pin_8_Configuration_Register.Value = Read_IO_Configuration_GPIO_2_Pin_8_Configuration_Register();
	IO_Configuration_GPIO_2_Pin_8_Configuration_Register.Internal.Resistor_Mode = 0;
	Write_IO_Configuration_GPIO_2_Pin_8_Configuration_Register(IO_Configuration_GPIO_2_Pin_8_Configuration_Register.Value);
	
	/* ����GPIO�˿�2����1�Ĺ��� */
	IO_Configuration_GPIO_2_Pin_1_Configuration_Register.Value = Read_IO_Configuration_GPIO_2_Pin_1_Configuration_Register();
	IO_Configuration_GPIO_2_Pin_1_Configuration_Register.Internal.Resistor_Mode = 0;
	Write_IO_Configuration_GPIO_2_Pin_1_Configuration_Register(IO_Configuration_GPIO_2_Pin_1_Configuration_Register.Value);
	
	/* ����GPIO�˿�1����9�Ĺ��� */
	IO_Configuration_GPIO_1_Pin_9_Configuration_Register.Value = Read_IO_Configuration_GPIO_1_Pin_9_Configuration_Register();
	IO_Configuration_GPIO_1_Pin_9_Configuration_Register.Internal.Resistor_Mode = 0;
	Write_IO_Configuration_GPIO_1_Pin_9_Configuration_Register(IO_Configuration_GPIO_1_Pin_9_Configuration_Register.Value);
	
	/* ����GPIO�˿�3����4�Ĺ��� */
	IO_Configuration_GPIO_3_Pin_4_Configuration_Register.Value = Read_IO_Configuration_GPIO_3_Pin_4_Configuration_Register();
	IO_Configuration_GPIO_3_Pin_4_Configuration_Register.Internal.Resistor_Mode = 0;
	Write_IO_Configuration_GPIO_3_Pin_4_Configuration_Register(IO_Configuration_GPIO_3_Pin_4_Configuration_Register.Value);
	
	/* ����GPIO�˿�3����5�Ĺ��� */
	IO_Configuration_GPIO_3_Pin_5_Configuration_Register.Value = Read_IO_Configuration_GPIO_3_Pin_5_Configuration_Register();
	IO_Configuration_GPIO_3_Pin_5_Configuration_Register.Internal.Resistor_Mode = 0;
	Write_IO_Configuration_GPIO_3_Pin_5_Configuration_Register(IO_Configuration_GPIO_3_Pin_5_Configuration_Register.Value);
	
	/* ����UARTʱ�ӷ�Ƶ�Ĵ��� */
	System_Configuration_UART_Clock_Divider_Register.Value = Read_System_Configuration_UART_Clock_Divider_Register();
	System_Configuration_UART_Clock_Divider_Register.Internal.Divider_Value = 4;
	Write_System_Configuration_UART_Clock_Divider_Register(System_Configuration_UART_Clock_Divider_Register.Value);
	
	/* ����GPIO�˿�0����4�Ĺ��� */
	IO_Configuration_GPIO_0_Pin_4_Configuration_Register.Value = Read_IO_Configuration_GPIO_0_Pin_4_Configuration_Register();
	IO_Configuration_GPIO_0_Pin_4_Configuration_Register.Internal.Pin_Function = 1;
	Write_IO_Configuration_GPIO_0_Pin_4_Configuration_Register(IO_Configuration_GPIO_0_Pin_4_Configuration_Register.Value);
	
	/* ����GPIO�˿�0����5�Ĺ��� */
	IO_Configuration_GPIO_0_Pin_5_Configuration_Register.Value = Read_IO_Configuration_GPIO_0_Pin_5_Configuration_Register();
	IO_Configuration_GPIO_0_Pin_5_Configuration_Register.Internal.Pin_Function = 1;
	Write_IO_Configuration_GPIO_0_Pin_5_Configuration_Register(IO_Configuration_GPIO_0_Pin_5_Configuration_Register.Value);
	
	/* ����GPIO�˿�1����4�Ĺ��� */
	IO_Configuration_GPIO_1_Pin_4_Configuration_Register.Value = Read_IO_Configuration_GPIO_1_Pin_4_Configuration_Register();
	IO_Configuration_GPIO_1_Pin_4_Configuration_Register.Internal.Pin_Function = 1;
	IO_Configuration_GPIO_1_Pin_4_Configuration_Register.Internal.Resistor_Mode = 0;
	IO_Configuration_GPIO_1_Pin_4_Configuration_Register.Internal.AD_Mode = 0;
	Write_IO_Configuration_GPIO_1_Pin_4_Configuration_Register(IO_Configuration_GPIO_1_Pin_4_Configuration_Register.Value);
	
	/* ������λ�ź� */
	System_Configuration_Peripheral_Reset_Control_Register.Value = Read_System_Configuration_Peripheral_Reset_Control_Register();
	System_Configuration_Peripheral_Reset_Control_Register.Internal.IIC_Negative_Reset = 1;
	Write_System_Configuration_Peripheral_Reset_Control_Register(System_Configuration_Peripheral_Reset_Control_Register.Value);
	
	/* ����ʱ�� */
	System_Configuration_System_AHB_Clock_Control_Register.Value = Read_System_Configuration_System_AHB_Clock_Control_Register();
	System_Configuration_System_AHB_Clock_Control_Register.Internal.IIC_Clock_Enable = 1;
	System_Configuration_System_AHB_Clock_Control_Register.Internal.Counter_Timer_16_Bit_0_Clock_Enable = 1;
	System_Configuration_System_AHB_Clock_Control_Register.Internal.UART_Clock_Enable = 1;
	System_Configuration_System_AHB_Clock_Control_Register.Internal.ADC_Clock_Enable = 1;
	System_Configuration_System_AHB_Clock_Control_Register.Internal.IO_Configuration_Clock_Enable = 0;
	Write_System_Configuration_System_AHB_Clock_Control_Register(System_Configuration_System_AHB_Clock_Control_Register.Value);
}

/*
	���ܣ���ʼ��
	��������
	���أ���
*/
void	Core_Library_Initialize(void)
{
	Core_Library_Initialize_IO_Configuration();
	Core_Library_Initialize_System_Configuration();
	Core_Library_Initialize_M0();
	Core_Library_Initialize_System_Control_Block();
	Core_Library_Initialize_System_Timer();
	Core_Library_Initialize_NVIC();
}

/*
	���ܣ��ر��ж�
	��������
	���أ���
*/
void	Core_Library_Disable_Interrupt(void)
{
	/* �ر��ж� */
	Disable_Interrupt();
}

/*
	���ܣ����ж�
	��������
	���أ���
*/
void	Core_Library_Enable_Interrupt(void)
{
	/* ���ж� */
	Enable_Interrupt();
}

/*
	���ܣ��ȴ��ж�
	��������
	���أ���
*/
void	Core_Library_Wait_Interrupt(void)
{
	/* �ȴ��ж� */
	Wait_Interrupt();
}

/*
	���ܣ���������
	������Void_Function *Function_Pointer������ָ��
		  Integer_Unsigned_32_Bit *Stack_Pointer��ջָ��
	���أ�Integer_Unsigned_8_Bit������������С�������������Ʊ�ʾ��Ч�������ʾ��Ч
*/
Integer_Unsigned_8_Bit	Core_Library_Create_Task(Void_Function *Function_Pointer, Integer_Unsigned_32_Bit *Stack_Pointer)
{
	Enumeration_API_Name	API_Name;
	Union_API_Parameter		API_Parameter;
	
	/* ����API */
	API_Name = API_Create_Task;
	API_Parameter.Create_Task_Parameter.Function_Address = (Integer_Unsigned_32_Bit) Function_Pointer;
	API_Parameter.Create_Task_Parameter.Stack_Address = (Integer_Unsigned_32_Bit) Stack_Pointer;
	Call_API(&API_Name, &API_Parameter);
	
	return API_Parameter.Create_Task_Parameter.Task_Index;
}

/*
	���ܣ��л�����
	��������
	���أ���
*/
void	Core_Library_Yield_Task(void)
{
	Enumeration_API_Name	API_Name;
	Union_API_Parameter		API_Parameter;
	
	/* ����API */
	API_Name = API_Yield_Task;
	Call_API(&API_Name, &API_Parameter);
}

/*
	���ܣ���������
	������Integer_Unsigned_32_Bit Time_Limitation��ʱ�����ƣ���λ������
	���أ���
*/
void	Core_Library_Suspend_Task(Integer_Unsigned_32_Bit Time_Limitation)
{
	Enumeration_API_Name	API_Name;
	Union_API_Parameter		API_Parameter;
	
	/* ����API */
	API_Name = API_Suspend_Task;
	API_Parameter.Suspend_Task_Parameter.Time_Limitation = Time_Limitation;
	Call_API(&API_Name, &API_Parameter);
}

/*
	���ܣ���������
	������Integer_Unsigned_8_Bit Task_Index����������
	���أ���
*/
void	Core_Library_Wake_Task(Integer_Unsigned_8_Bit Task_Index)
{
	Enumeration_API_Name	API_Name;
	Union_API_Parameter		API_Parameter;
	
	/* ����API */
	API_Name = API_Wake_Task;
	API_Parameter.Wake_Task_Parameter.Task_Index = Task_Index;
	Call_API(&API_Name, &API_Parameter);
}

/*
	���ܣ�ɾ������
	��������
	���أ���
*/
void	Core_Library_Delete_Task(void)
{
	Enumeration_API_Name	API_Name;
	Union_API_Parameter		API_Parameter;
	
	/* ����API */
	API_Name = API_Delete_Task;
	Call_API(&API_Name, &API_Parameter);
}

/*
	���ܣ�������Ϣ
	������Structure_Message *Message_Pointer����Ϣָ��
	���أ���
*/
void	Core_Library_Receive_Message(Structure_Message *Message_Pointer)
{
	Enumeration_API_Name	API_Name;
	Union_API_Parameter		API_Parameter;
	
	/* ѭ������ */
	do
	{
		/* ������Ϣ */
		API_Name = API_Receive_Message;
		API_Parameter.Receive_Message_Parameter.Message_Pointer = Message_Pointer;
		Call_API(&API_Name, &API_Parameter);
		
		/* �ж���Ϣ���� */
		if (API_Parameter.Receive_Message_Parameter.Message_Count == 0)
		{
			/* �������� */
			API_Name = API_Suspend_Task;
			API_Parameter.Suspend_Task_Parameter.Time_Limitation = 0;
			Call_API(&API_Name, &API_Parameter);
		}
		else
		{
			/* ���� */
		}
	}
	while (API_Parameter.Receive_Message_Parameter.Message_Count == 0);
}

/*
	���ܣ�������Ϣ
	������Structure_Message *Message_Pointer����Ϣָ��
	���أ���
*/
void	Core_Library_Transmit_Message(Structure_Message *Message_Pointer)
{
	Enumeration_API_Name	API_Name;
	Union_API_Parameter		API_Parameter;
	
	/* ѭ������ */
	do
	{
		/* ������Ϣ */
		API_Name = API_Transmit_Message;
		API_Parameter.Transmit_Message_Parameter.Message_Pointer = Message_Pointer;
		Call_API(&API_Name, &API_Parameter);
		
		/* �ж���Ϣ���� */
		if (API_Parameter.Transmit_Message_Parameter.Message_Count == 0)
		{
			/* �л����� */
			API_Name = API_Yield_Task;
			Call_API(&API_Name, &API_Parameter);
		}
		else
		{
			/* �������� */
			API_Name = API_Wake_Task;
			API_Parameter.Wake_Task_Parameter.Task_Index = Message_Pointer->Destination_Task_Index;
			Call_API(&API_Name, &API_Parameter);
		}
	}
	while (API_Parameter.Transmit_Message_Parameter.Message_Count == 0);
}

/*
	���ܣ����ź���
	������Integer_Signed_32_Bit *Semaphore_Pointer���ź���ָ��
	���أ���
*/
void	Core_Library_Down_Semaphore(Integer_Signed_32_Bit *Semaphore_Pointer)
{
	Enumeration_API_Name	API_Name;
	Union_API_Parameter		API_Parameter;
	
	/* ���ź��� */
	API_Name = API_Down_Semaphore;
	API_Parameter.Down_Semaphore_Parameter.Semaphore_Pointer = Semaphore_Pointer;
	Call_API(&API_Name, &API_Parameter);
}

/*
	���ܣ����ź���
	������Integer_Signed_32_Bit *Semaphore_Pointer���ź���ָ��
		  Integer_Unsigned_8_Bit Task_Index����������
	���أ���
*/
void	Core_Library_Up_Semaphore(Integer_Signed_32_Bit *Semaphore_Pointer, Integer_Unsigned_8_Bit Task_Index)
{
	Enumeration_API_Name	API_Name;
	Union_API_Parameter		API_Parameter;
	
	/* ���ź��� */
	API_Name = API_Up_Semaphore;
	API_Parameter.Up_Semaphore_Parameter.Semaphore_Pointer = Semaphore_Pointer;
	API_Parameter.Up_Semaphore_Parameter.Task_Index = Task_Index;
	Call_API(&API_Name, &API_Parameter);
}

/*
	���ܣ�����������
	������Integer_Unsigned_8_Bit *Mutex_Pointer��������ָ��
	���أ���
*/
void	Core_Library_Lock_Mutex(Integer_Unsigned_8_Bit *Mutex_Pointer)
{
	Integer_Unsigned_8_Bit	Mutex_Value;
	Enumeration_API_Name	API_Name;
	Union_API_Parameter		API_Parameter;
	
	/* ѭ������ */
	do
	{
		/* �жϻ����� */
		Mutex_Value = Test_Set_Lock(Mutex_Pointer);
		if (Mutex_Value == 1)
		{
			/* �л����� */
			API_Name = API_Yield_Task;
			Call_API(&API_Name, &API_Parameter);
		}
		else
		{
			/* ���� */
		}
	}
	while (Mutex_Value == 1);
}

/*
	���ܣ�����������
	������Integer_Unsigned_8_Bit *Mutex_Pointer��������ָ��
	���أ���
*/
void	Core_Library_Unlock_Mutex(Integer_Unsigned_8_Bit *Mutex_Pointer)
{
	/* �������� */
	*Mutex_Pointer = 0;
}
