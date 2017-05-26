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

#ifndef	NXP_LPC1114_302_M0_SCHEDULE_H
#define	NXP_LPC1114_302_M0_SCHEDULE_H

#include	"NXP_LPC1114_302_M0_Context.h"

/* �������� */

/* �������� */
typedef	enum	Tag_Count_Limitation
{
	Message_Count_Limitation = 8, Task_Count_Limitation = 8, System_Timer_Tick_Interrupt_Count_Limitation = 100
}
	Enumeration_Count_Limitation;

/* ����״̬ */
typedef	enum	Tag_Task_State
{
	Task_Ready, Task_Running, Task_Suspended
}
	Enumeration_Task_State;

/* ��Ϣ���� */
typedef	struct	Tag_Message_Queue
{
	Integer_Unsigned_8_Bit	Element_Count, Element_Head, Element_Tail;
	Structure_Message		Element_Table[Message_Count_Limitation];
}
	Structure_Message_Queue;

/* ������Ϣ */
typedef	struct	Tag_Task_Information
{
	Integer_Unsigned_8_Bit		Task_Valid;
	Enumeration_Task_State		Task_State;
	Integer_Unsigned_32_Bit		Time_Limitation;
	Structure_Process_Context	Process_Context;
	Structure_Main_Context		Main_Context;
	Structure_Message_Queue		Message_Queue;
}
	Structure_Task_Information;

/* ����� */
typedef	Structure_Task_Information	Array_Task_Table[Task_Count_Limitation];

/* �������� */
typedef	struct	Tag_Index_Queue
{
	Integer_Unsigned_8_Bit	Element_Count, Element_Head, Element_Tail;
	Integer_Unsigned_8_Bit	Element_Table[Task_Count_Limitation];
}
	Structure_Index_Queue;

/* �������� */

/*
	���ܣ���ʼ������
	������Structure_Process_Context *Process_Context_Pointer�����̻���ָ��
		  Structure_Main_Context *Main_Context_Pointer��������ָ��
	���أ���
*/
void	Initialize_Schedule(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer);

/*
	���ܣ������Ϣ
	������Structure_Message_Queue *Message_Queue_Pointer����Ϣ����ָ��
		  Structure_Message *Message_Pointer����Ϣָ��
	���أ�Integer_Unsigned_8_Bit����ӵ���Ϣ����
*/
Integer_Unsigned_8_Bit	Push_Message(Structure_Message_Queue *Message_Queue_Pointer, Structure_Message *Message_Pointer);

/*
	���ܣ�ɾ����Ϣ
	������Structure_Message_Queue *Message_Queue_Pointer����Ϣ����ָ��
		  Structure_Message *Message_Pointer����Ϣָ��
	���أ�Integer_Unsigned_8_Bit��ɾ������Ϣ����
*/
Integer_Unsigned_8_Bit	Pop_Message(Structure_Message_Queue *Message_Queue_Pointer, Structure_Message *Message_Pointer);

/*
	���ܣ��������
	������Structure_Index_Queue *Index_Queue_Pointer����������ָ��
		  Integer_Unsigned_8_Bit Index������
	���أ�Integer_Unsigned_8_Bit����ӵ���������
*/
Integer_Unsigned_8_Bit	Push_Index(Structure_Index_Queue *Index_Queue_Pointer, Integer_Unsigned_8_Bit Index);

/*
	���ܣ�ɾ������
	������Structure_Index_Queue *Index_Queue_Pointer����������ָ��
		  Integer_Unsigned_8_Bit *Index_Pointer������ָ��
	���أ�Integer_Unsigned_8_Bit��ɾ������������
*/
Integer_Unsigned_8_Bit	Pop_Index(Structure_Index_Queue *Index_Queue_Pointer, Integer_Unsigned_8_Bit *Index_Pointer);

/*
	���ܣ���������
	������Integer_Unsigned_32_Bit Function_Address��������ַ
		  Integer_Unsigned_32_Bit Stack_Address��ջ��ַ
	���أ�Integer_Unsigned_8_Bit������������С�������������Ʊ�ʾ��Ч�������ʾ��Ч
*/
Integer_Unsigned_8_Bit	Create_Task(Integer_Unsigned_32_Bit Function_Address, Integer_Unsigned_32_Bit Stack_Address);

/*
	���ܣ��л�����
	������Structure_Process_Context *Process_Context_Pointer�����̻���ָ��
		  Structure_Main_Context *Main_Context_Pointer��������ָ��
	���أ���
*/
void	Yield_Task(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer);

/*
	���ܣ���������
	������Structure_Process_Context *Process_Context_Pointer�����̻���ָ��
		  Structure_Main_Context *Main_Context_Pointer��������ָ��
		  Integer_Unsigned_32_Bit Time_Limitation��ʱ�����ƣ�0��ʾ���ޣ���λ������
	���أ���
*/
void	Suspend_Task(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer, Integer_Unsigned_32_Bit Time_Limitation);

/*
	���ܣ���������
	������Integer_Unsigned_8_Bit Task_Index����������
	���أ���
*/
void	Wake_Task(Integer_Unsigned_8_Bit Task_Index);

/*
	���ܣ�ɨ������
	��������
	���أ���
*/
void	Scan_Task(void);

/*
	���ܣ���������
	������Structure_Process_Context *Process_Context_Pointer�����̻���ָ��
		  Structure_Main_Context *Main_Context_Pointer��������ָ��
		  Integer_Unsigned_8_Bit Task_Index����������
	���أ���
*/
void	Run_Task(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer, Integer_Unsigned_8_Bit Task_Index);

/*
	���ܣ�ɾ������
	������Structure_Process_Context *Process_Context_Pointer�����̻���ָ��
		  Structure_Main_Context *Main_Context_Pointer��������ָ��
	���أ���
*/
void	Delete_Task(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer);

/*
	���ܣ�������Ϣ
	������Structure_Message *Message_Pointer����Ϣָ��
	���أ����յ���Ϣ����
*/
Integer_Unsigned_8_Bit	Receive_Message(Structure_Message *Message_Pointer);

/*
	���ܣ�������Ϣ
	������Structure_Message *Message_Pointer����Ϣָ��
	���أ����͵���Ϣ����
*/
Integer_Unsigned_8_Bit	Transmit_Message(Structure_Message *Message_Pointer);

/*
	���ܣ����ź���
	������Structure_Process_Context *Process_Context_Pointer�����̻���ָ��
		  Structure_Main_Context *Main_Context_Pointer��������ָ��
		  Integer_Signed_32_Bit *Semaphore_Pointer���ź���ָ��
	���أ���
*/
void	Down_Semaphore(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer, Integer_Signed_32_Bit *Semaphore_Pointer);

/*
	���ܣ����ź���
	������Integer_Signed_32_Bit *Semaphore_Pointer���ź���ָ��
		  Integer_Unsigned_8_Bit Task_Index����������
	���أ���
*/
void	Up_Semaphore(Integer_Signed_32_Bit *Semaphore_Pointer, Integer_Unsigned_8_Bit Task_Index);

#endif
