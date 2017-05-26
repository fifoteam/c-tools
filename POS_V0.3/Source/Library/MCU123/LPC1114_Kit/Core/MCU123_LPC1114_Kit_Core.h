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

#ifndef	MCU123_LPC1114_KIT_CORE_H
#define	MCU123_LPC1114_KIT_CORE_H

#include	"NXP_LPC1114_302_M0_Context.h"
#include	"NXP_LPC1114_302_M0_Exception.h"
#include	"NXP_LPC1114_302_System_Control_Block.h"
#include	"NXP_LPC1114_302_System_Timer.h"
#include	"NXP_LPC1114_302_NVIC.h"
#include	"NXP_LPC1114_302_System_Configuration.h"
#include	"NXP_LPC1114_302_IO_Configuration.h"

/* �������� */

/*
	���ܣ���ʼ��M0
	��������
	���أ���
*/
void	Core_Library_Initialize_M0(void);

/*
	���ܣ���ʼ��ϵͳ���ƿ�
	��������
	���أ���
*/
void	Core_Library_Initialize_System_Control_Block(void);

/*
	���ܣ���ʼ��ϵͳ��ʱ��
	��������
	���أ���
*/
void	Core_Library_Initialize_System_Timer(void);

/*
	���ܣ���ʼ��NVIC
	��������
	���أ���
*/
void	Core_Library_Initialize_NVIC(void);

/*
	���ܣ���ʼ��ϵͳ����
	��������
	���أ���
*/
void	Core_Library_Initialize_System_Configuration(void);

/*
	���ܣ���ʼ��IO����
	��������
	���أ���
*/
void	Core_Library_Initialize_IO_Configuration(void);

/*
	���ܣ���ʼ��
	��������
	���أ���
*/
void	Core_Library_Initialize(void);
/*
	���ܣ��ر��ж�
	��������
	���أ���
*/
void	Core_Library_Disable_Interrupt(void);

/*
	���ܣ����ж�
	��������
	���أ���
*/
void	Core_Library_Enable_Interrupt(void);

/*
	���ܣ��ȴ��ж�
	��������
	���أ���
*/
void	Core_Library_Wait_Interrupt(void);

/*
	���ܣ���������
	������Void_Function *Function_Pointer������ָ��
		  Integer_Unsigned_32_Bit *Stack_Pointer��ջָ��
	���أ�Integer_Unsigned_8_Bit������������С�������������Ʊ�ʾ��Ч�������ʾ��Ч
*/
Integer_Unsigned_8_Bit	Core_Library_Create_Task(Void_Function *Function_Pointer, Integer_Unsigned_32_Bit *Stack_Pointer);

/*
	���ܣ��л�����
	��������
	���أ���
*/
void	Core_Library_Yield_Task(void);

/*
	���ܣ���������
	������Integer_Unsigned_32_Bit Time_Limitation��ʱ�����ƣ���λ������
	���أ���
*/
void	Core_Library_Suspend_Task(Integer_Unsigned_32_Bit Time_Limitation);

/*
	���ܣ���������
	������Integer_Unsigned_8_Bit Task_Index����������
	���أ���
*/
void	Core_Library_Wake_Task(Integer_Unsigned_8_Bit Task_Index);

/*
	���ܣ�ɾ������
	��������
	���أ���
*/
void	Core_Library_Delete_Task(void);

/*
	���ܣ�������Ϣ
	������Structure_Message *Message_Pointer����Ϣָ��
	���أ���
*/
void	Core_Library_Receive_Message(Structure_Message *Message_Pointer);

/*
	���ܣ�������Ϣ
	������Structure_Message *Message_Pointer����Ϣָ��
	���أ���
*/
void	Core_Library_Transmit_Message(Structure_Message *Message_Pointer);

/*
	���ܣ����ź���
	������Integer_Signed_32_Bit *Semaphore_Pointer���ź���ָ��
	���أ���
*/
void	Core_Library_Down_Semaphore(Integer_Signed_32_Bit *Semaphore_Pointer);

/*
	���ܣ����ź���
	������Integer_Signed_32_Bit *Semaphore_Pointer���ź���ָ��
		  Integer_Unsigned_8_Bit Task_Index����������
	���أ���
*/
void	Core_Library_Up_Semaphore(Integer_Signed_32_Bit *Semaphore_Pointer, Integer_Unsigned_8_Bit Task_Index);

/*
	���ܣ�����������
	������Integer_Unsigned_8_Bit *Mutex_Pointer��������ָ��
	���أ���
*/
void	Core_Library_Lock_Mutex(Integer_Unsigned_8_Bit *Mutex_Pointer);

/*
	���ܣ�����������
	������Integer_Unsigned_8_Bit *Mutex_Pointer��������ָ��
	���أ���
*/
void	Core_Library_Unlock_Mutex(Integer_Unsigned_8_Bit *Mutex_Pointer);

#endif
