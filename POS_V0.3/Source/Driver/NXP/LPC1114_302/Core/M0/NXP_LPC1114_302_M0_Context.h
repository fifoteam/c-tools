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

#ifndef	NXP_LPC1114_302_M0_CONTEXT_H
#define	NXP_LPC1114_302_M0_CONTEXT_H

#include	"Base.h"

/* �������� */

/* ����״̬�Ĵ����ڲ� */
typedef	struct	Tag_PSR_Internal
{
	Integer_Unsigned_32_Bit	Exception_Number  : 6;
	Integer_Unsigned_32_Bit					  : 18;
	Integer_Unsigned_32_Bit	Thumb_State		  : 1;
	Integer_Unsigned_32_Bit					  : 3;
	Integer_Unsigned_32_Bit	Overflow_Flag	  : 1;
	Integer_Unsigned_32_Bit	Carry_Borrow_Flag : 1;
	Integer_Unsigned_32_Bit	Zero_Flag		  : 1;
	Integer_Unsigned_32_Bit	Negative_Flag	  : 1;
}
	Structure_PSR_Internal;

/* ����״̬�Ĵ��� */
typedef	union	Tag_PSR
{
	Integer_Unsigned_32_Bit	Value;
	Structure_PSR_Internal	Internal;
}
	Union_PSR;

/* ���̻��� */
typedef	struct	Tag_Process_Context
{
	Integer_Unsigned_32_Bit	R0;
	Integer_Unsigned_32_Bit	R1;
	Integer_Unsigned_32_Bit	R2;
	Integer_Unsigned_32_Bit	R3;
	Integer_Unsigned_32_Bit	R12;
	Integer_Unsigned_32_Bit	R14;
	Integer_Unsigned_32_Bit	R15;
	Union_PSR				PSR;
}
	Structure_Process_Context;

/* ������ */
typedef	struct	Tag_Main_Context
{
	Integer_Unsigned_32_Bit	PSP;
	Integer_Unsigned_32_Bit	R4;
	Integer_Unsigned_32_Bit	R5;
	Integer_Unsigned_32_Bit	R6;
	Integer_Unsigned_32_Bit	R7;
	Integer_Unsigned_32_Bit	R8;
	Integer_Unsigned_32_Bit	R9;
	Integer_Unsigned_32_Bit	R10;
	Integer_Unsigned_32_Bit	R11;
}
	Structure_Main_Context;

/* ��Ϣ */
typedef	struct	Tag_Message
{
	Integer_Unsigned_8_Bit	Source_Task_Index;
	Integer_Unsigned_8_Bit	Destination_Task_Index;
	Integer_Unsigned_32_Bit	Command_Index;
	Integer_Unsigned_32_Bit	Master_Parameter;
	Integer_Unsigned_32_Bit	Slave_Parameter;
}
	Structure_Message;

/* API���� */
typedef	enum	Tag_API_Name
{
	API_Initialize_Schedule,
	API_Create_Task,
	API_Yield_Task,
	API_Suspend_Task,
	API_Wake_Task,
	API_Delete_Task,
	API_Receive_Message,
	API_Transmit_Message,
	API_Down_Semaphore,
	API_Up_Semaphore
}
	Enumeration_API_Name;

/* ����������� */
typedef	struct	Tag_Create_Task_Parameter
{
	Integer_Unsigned_32_Bit	Function_Address;
	Integer_Unsigned_32_Bit	Stack_Address;
	Integer_Unsigned_8_Bit	Task_Index;
}
	Structure_Create_Task_Parameter;

/* ����������� */
typedef	struct	Tag_Suspend_Task_Parameter
{
	Integer_Unsigned_32_Bit	Time_Limitation;
}
	Structure_Suspend_Task_Parameter;

/* ����������� */
typedef	struct	Tag_Wake_Task_Parameter
{
	Integer_Unsigned_8_Bit	Task_Index;
}
	Structure_Wake_Task_Parameter;

/* ������Ϣ���� */
typedef	struct	Tag_Receive_Message_Parameter
{
	Structure_Message		*Message_Pointer;
	Integer_Unsigned_8_Bit	Message_Count;
}
	Structure_Receive_Message_Parameter;

/* ������Ϣ���� */
typedef	struct	Tag_Transmit_Message_Parameter
{
	Structure_Message		*Message_Pointer;
	Integer_Unsigned_8_Bit	Message_Count;
}
	Structure_Transmit_Message_Parameter;

/* ���ź������� */
typedef	struct	Tag_Down_Semaphore_Parameter
{
	Integer_Signed_32_Bit	*Semaphore_Pointer;
}
	Structure_Down_Semaphore_Parameter;

/* ���ź������� */
typedef	struct	Tag_Up_Semaphore_Parameter
{
	Integer_Signed_32_Bit	*Semaphore_Pointer;
	Integer_Unsigned_8_Bit	Task_Index;
}
	Structure_Up_Semaphore_Parameter;

/* API���� */
typedef	union	Tag_API_Parameter
{
	Structure_Create_Task_Parameter			Create_Task_Parameter;
	Structure_Suspend_Task_Parameter		Suspend_Task_Parameter;
	Structure_Wake_Task_Parameter			Wake_Task_Parameter;
	Structure_Receive_Message_Parameter		Receive_Message_Parameter;
	Structure_Transmit_Message_Parameter	Transmit_Message_Parameter;
	Structure_Down_Semaphore_Parameter		Down_Semaphore_Parameter;
	Structure_Up_Semaphore_Parameter		Up_Semaphore_Parameter;
}
	Union_API_Parameter;

/* �������޲������� */
typedef	void	Void_Function(void);

/* �ж�����������Ϣ */
typedef	struct	Tag_Interrupt_Task_Index_Information
{
	Integer_Unsigned_8_Bit	Wake_0_Interrupt_Task_Index;
	Integer_Unsigned_8_Bit	Wake_1_Interrupt_Task_Index;
	Integer_Unsigned_8_Bit	Wake_2_Interrupt_Task_Index;
	Integer_Unsigned_8_Bit	Wake_3_Interrupt_Task_Index;
	Integer_Unsigned_8_Bit	Wake_4_Interrupt_Task_Index;
	Integer_Unsigned_8_Bit	Wake_5_Interrupt_Task_Index;
	Integer_Unsigned_8_Bit	Wake_6_Interrupt_Task_Index;
	Integer_Unsigned_8_Bit	Wake_7_Interrupt_Task_Index;
	Integer_Unsigned_8_Bit	Wake_8_Interrupt_Task_Index;
	Integer_Unsigned_8_Bit	Wake_9_Interrupt_Task_Index;
	Integer_Unsigned_8_Bit	Wake_10_Interrupt_Task_Index;
	Integer_Unsigned_8_Bit	Wake_11_Interrupt_Task_Index;
	Integer_Unsigned_8_Bit	Wake_12_Interrupt_Task_Index;
	Integer_Unsigned_8_Bit	Reserved_13_Interrupt_Task_Index;
	Integer_Unsigned_8_Bit	SPI_0_Interrupt_Task_Index;
	Integer_Unsigned_8_Bit	IIC_Interrupt_Task_Index;
	Integer_Unsigned_8_Bit	Counter_Timer_16_Bit_0_Interrupt_Task_Index;
	Integer_Unsigned_8_Bit	Counter_Timer_16_Bit_1_Interrupt_Task_Index;
	Integer_Unsigned_8_Bit	Counter_Timer_32_Bit_0_Interrupt_Task_Index;
	Integer_Unsigned_8_Bit	Counter_Timer_32_Bit_1_Interrupt_Task_Index;
	Integer_Unsigned_8_Bit	SPI_1_Interrupt_Task_Index;
	Integer_Unsigned_8_Bit	UART_Interrupt_Task_Index;
	Integer_Unsigned_8_Bit	Reserved_22_Interrupt_Task_Index;
	Integer_Unsigned_8_Bit	Reserved_23_Interrupt_Task_Index;
	Integer_Unsigned_8_Bit	ADC_Interrupt_Task_Index;
	Integer_Unsigned_8_Bit	Watchdog_Timer_Interrupt_Task_Index;
	Integer_Unsigned_8_Bit	Brown_Out_Detect_Interrupt_Task_Index;
	Integer_Unsigned_8_Bit	Reserved_27_Interrupt_Task_Index;
	Integer_Unsigned_8_Bit	GPIO_3_Interrupt_Task_Index;
	Integer_Unsigned_8_Bit	GPIO_2_Interrupt_Task_Index;
	Integer_Unsigned_8_Bit	GPIO_1_Interrupt_Task_Index;
	Integer_Unsigned_8_Bit	GPIO_0_Interrupt_Task_Index;
}
	Structure_Interrupt_Task_Index_Information;

/* �������� */

/*
	���ܣ��ر��ж�
	��������
	���أ���
*/
void	Disable_Interrupt(void);

/*
	���ܣ����ж�
	��������
	���أ���
*/
void	Enable_Interrupt(void);

/*
	���ܣ��ȴ��ж�
	��������
	���أ���
*/
void	Wait_Interrupt(void);

/*
	���ܣ����Ժͼ���
	������Integer_Unsigned_8_Bit *Mutex_Pointer��������ָ��
	���أ�Integer_Unsigned_8_Bit����������ֵ
*/
Integer_Unsigned_8_Bit	Test_Set_Lock(Integer_Unsigned_8_Bit *Mutex_Pointer);

/*
	���ܣ�����Ӧ�ó���ӿ�
	������Enumeration_API_Name *API_Name_Pointer��Ӧ�ó���ӿ�����ָ��
		  Union_API_Parameter *API_Parameter_Pointer��Ӧ�ó���ӿڲ���ָ��
	���أ���
*/
void	Call_API(Enumeration_API_Name *API_Name_Pointer, Union_API_Parameter *API_Parameter_Pointer);

/*
	���ܣ���װ����
	������Void_Function *Function_Pointer������ָ��
	���أ���
*/
void	Wrap_Task(Void_Function *Function_Pointer);

#endif
