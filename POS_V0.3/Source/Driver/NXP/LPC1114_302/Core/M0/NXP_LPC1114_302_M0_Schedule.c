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

#include	"NXP_LPC1114_302_M0_Schedule.h"

/* ���ݶ��� */

/* ����� */
Array_Task_Table	Task_Table;

/* ���������������С����������������к͹��������������� */
Structure_Index_Queue	Available_Task_Index_Queue, Ready_Task_Index_Queue, Suspended_Task_Index_Queue;

/* ������������ */
Integer_Unsigned_8_Bit	Running_Task_Index;

/* �������� */

/*
	���ܣ���ʼ������
	������Structure_Process_Context *Process_Context_Pointer�����̻���ָ��
		  Structure_Main_Context *Main_Context_Pointer��������ָ��
	���أ���
*/
void	Initialize_Schedule(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer)
{
	Integer_Unsigned_8_Bit	Task_Index;
	
	/* ��������� */
	for (Task_Index = 0; Task_Index < Task_Count_Limitation; Task_Index += 1)
	{
		Task_Table[Task_Index].Task_Valid = 0;
		Task_Table[Task_Index].Process_Context.PSR = Process_Context_Pointer->PSR;
	}
	
	/* ���ÿ��������������� */
	Available_Task_Index_Queue.Element_Count = 0;
	Available_Task_Index_Queue.Element_Head = 0;
	Available_Task_Index_Queue.Element_Tail = 0;
	for (Task_Index = 0; Task_Index < Task_Count_Limitation; Task_Index += 1)
	{
		Push_Index(&Available_Task_Index_Queue, Task_Index);
	}
	
	/* ���þ��������������� */
	Ready_Task_Index_Queue.Element_Count = 0;
	Ready_Task_Index_Queue.Element_Head = 0;
	Ready_Task_Index_Queue.Element_Tail = 0;
	
	/* ���ù��������������� */
	Suspended_Task_Index_Queue.Element_Count = 0;
	Suspended_Task_Index_Queue.Element_Head = 0;
	Suspended_Task_Index_Queue.Element_Tail = 0;
	
	/* ������������������������Ϣ */
	Pop_Index(&Available_Task_Index_Queue, &Running_Task_Index);
	Task_Table[Running_Task_Index].Task_Valid = 1;
	Task_Table[Running_Task_Index].Task_State = Task_Running;
	Task_Table[Running_Task_Index].Time_Limitation = 0;
}

/*
	���ܣ������Ϣ
	������Structure_Message_Queue *Message_Queue_Pointer����Ϣ����ָ��
		  Structure_Message *Message_Pointer����Ϣָ��
	���أ�Integer_Unsigned_8_Bit����ӵ���Ϣ����
*/
Integer_Unsigned_8_Bit	Push_Message(Structure_Message_Queue *Message_Queue_Pointer, Structure_Message *Message_Pointer)
{
	Integer_Unsigned_8_Bit	Pushed_Message_Count;
	
	/* �����Ϣ���� */
	if (Message_Queue_Pointer->Element_Count < Message_Count_Limitation)
	{
		/* �����Ϣ */
		Message_Queue_Pointer->Element_Table[Message_Queue_Pointer->Element_Tail] = *Message_Pointer;
		Message_Queue_Pointer->Element_Count += 1;
		Message_Queue_Pointer->Element_Tail += 1;
		if (Message_Queue_Pointer->Element_Tail < Message_Count_Limitation)
		{
			/* ���� */
		}
		else
		{
			Message_Queue_Pointer->Element_Tail = 0;
		}
		
		Pushed_Message_Count = 1;
	}
	else
	{
		Pushed_Message_Count = 0;
	}
	
	return Pushed_Message_Count;
}

/*
	���ܣ�ɾ����Ϣ
	������Structure_Message_Queue *Message_Queue_Pointer����Ϣ����ָ��
		  Structure_Message *Message_Pointer����Ϣָ��
	���أ�Integer_Unsigned_8_Bit��ɾ������Ϣ����
*/
Integer_Unsigned_8_Bit	Pop_Message(Structure_Message_Queue *Message_Queue_Pointer, Structure_Message *Message_Pointer)
{
	Integer_Unsigned_8_Bit	Poped_Message_Count;
	
	/* �����Ϣ���� */
	if (Message_Queue_Pointer->Element_Count > 0)
	{
		/* ɾ����Ϣ */
		*Message_Pointer = Message_Queue_Pointer->Element_Table[Message_Queue_Pointer->Element_Head];
		Message_Queue_Pointer->Element_Count -= 1;
		Message_Queue_Pointer->Element_Head += 1;
		if (Message_Queue_Pointer->Element_Head < Message_Count_Limitation)
		{
			/* ���� */
		}
		else
		{
			Message_Queue_Pointer->Element_Head = 0;
		}
		
		Poped_Message_Count = 1;
	}
	else
	{
		Poped_Message_Count = 0;
	}
	
	return Poped_Message_Count;
}

/*
	���ܣ��������
	������Structure_Index_Queue *Index_Queue_Pointer����������ָ��
		  Integer_Unsigned_8_Bit Index������
	���أ�Integer_Unsigned_8_Bit����ӵ���������
*/
Integer_Unsigned_8_Bit	Push_Index(Structure_Index_Queue *Index_Queue_Pointer, Integer_Unsigned_8_Bit Index)
{
	Integer_Unsigned_8_Bit	Pushed_Index_Count;
	
	/* ����������� */
	if (Index_Queue_Pointer->Element_Count < Task_Count_Limitation)
	{
		/* ������� */
		Index_Queue_Pointer->Element_Table[Index_Queue_Pointer->Element_Tail] = Index;
		Index_Queue_Pointer->Element_Count += 1;
		Index_Queue_Pointer->Element_Tail += 1;
		if (Index_Queue_Pointer->Element_Tail < Task_Count_Limitation)
		{
			/* ���� */
		}
		else
		{
			Index_Queue_Pointer->Element_Tail = 0;
		}
		
		Pushed_Index_Count = 1;
	}
	else
	{
		Pushed_Index_Count = 0;
	}
	
	return Pushed_Index_Count;
}

/*
	���ܣ�ɾ������
	������Structure_Index_Queue *Index_Queue_Pointer����������ָ��
		  Integer_Unsigned_8_Bit *Index_Pointer������ָ��
	���أ�Integer_Unsigned_8_Bit��ɾ������������
*/
Integer_Unsigned_8_Bit	Pop_Index(Structure_Index_Queue *Index_Queue_Pointer, Integer_Unsigned_8_Bit *Index_Pointer)
{
	Integer_Unsigned_8_Bit	Poped_Index_Count;
	
	/* ����������� */
	if (Index_Queue_Pointer->Element_Count > 0)
	{
		/* ɾ������ */
		*Index_Pointer = Index_Queue_Pointer->Element_Table[Index_Queue_Pointer->Element_Head];
		Index_Queue_Pointer->Element_Count -= 1;
		Index_Queue_Pointer->Element_Head += 1;
		if (Index_Queue_Pointer->Element_Head < Task_Count_Limitation)
		{
			/* ���� */
		}
		else
		{
			Index_Queue_Pointer->Element_Head = 0;
		}
		
		Poped_Index_Count = 1;
	}
	else
	{
		Poped_Index_Count = 0;
	}
	
	return Poped_Index_Count;
}

/*
	���ܣ���������
	������Integer_Unsigned_32_Bit Function_Address��������ַ
		  Integer_Unsigned_32_Bit Stack_Address��ջ��ַ
	���أ�Integer_Unsigned_8_Bit������������С�������������Ʊ�ʾ��Ч�������ʾ��Ч
*/
Integer_Unsigned_8_Bit	Create_Task(Integer_Unsigned_32_Bit Function_Address, Integer_Unsigned_32_Bit Stack_Address)
{
	Integer_Unsigned_8_Bit	Index_Count, Task_Index;
	
	/* �ӿ���������������ɾ������ */
	Index_Count = Pop_Index(&Available_Task_Index_Queue, &Task_Index);
	if (Index_Count == 1)
	{
		/* ����������Ϣ */
		Task_Table[Task_Index].Task_Valid = 1;
		Task_Table[Task_Index].Task_State = Task_Ready;
		Task_Table[Task_Index].Time_Limitation = 0;
		Task_Table[Task_Index].Process_Context.PSR.Internal.Exception_Number = 0;
		Task_Table[Task_Index].Process_Context.PSR.Internal.Thumb_State = 1;
		Task_Table[Task_Index].Process_Context.PSR.Internal.Overflow_Flag = 0;
		Task_Table[Task_Index].Process_Context.PSR.Internal.Carry_Borrow_Flag = 0;
		Task_Table[Task_Index].Process_Context.PSR.Internal.Zero_Flag = 0;
		Task_Table[Task_Index].Process_Context.PSR.Internal.Negative_Flag = 0;
		Task_Table[Task_Index].Process_Context.R15 = (Integer_Unsigned_32_Bit) Wrap_Task;
		Task_Table[Task_Index].Process_Context.R14 = 0;
		Task_Table[Task_Index].Process_Context.R12 = 0;
		Task_Table[Task_Index].Process_Context.R3 = 0;
		Task_Table[Task_Index].Process_Context.R2 = 0;
		Task_Table[Task_Index].Process_Context.R1 = 0;
		Task_Table[Task_Index].Process_Context.R0 = Function_Address;
		Task_Table[Task_Index].Main_Context.R11 = 0;
		Task_Table[Task_Index].Main_Context.R10 = 0;
		Task_Table[Task_Index].Main_Context.R9 = 0;
		Task_Table[Task_Index].Main_Context.R8 = 0;
		Task_Table[Task_Index].Main_Context.R7 = 0;
		Task_Table[Task_Index].Main_Context.R6 = 0;
		Task_Table[Task_Index].Main_Context.R5 = 0;
		Task_Table[Task_Index].Main_Context.R4 = 0;
		Task_Table[Task_Index].Main_Context.PSP = Stack_Address - sizeof(Structure_Process_Context);
		Task_Table[Task_Index].Message_Queue.Element_Count = 0;
		Task_Table[Task_Index].Message_Queue.Element_Head = 0;
		Task_Table[Task_Index].Message_Queue.Element_Tail = 0;
		
		/* ������������������� */
		Index_Count = Push_Index(&Ready_Task_Index_Queue, Task_Index);
	}
	else
	{
		Task_Index = Task_Count_Limitation;
	}
	
	return Task_Index;
}

/*
	���ܣ��л�����
	������Structure_Process_Context *Process_Context_Pointer�����̻���ָ��
		  Structure_Main_Context *Main_Context_Pointer��������ָ��
	���أ���
*/
void	Yield_Task(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer)
{
	/* ������������������������������������Ϣ */
	Push_Index(&Ready_Task_Index_Queue, Running_Task_Index);
	Task_Table[Running_Task_Index].Task_State = Task_Ready;
	Task_Table[Running_Task_Index].Process_Context = *Process_Context_Pointer;
	Task_Table[Running_Task_Index].Main_Context = *Main_Context_Pointer;
	
	/* �Ӿ���������������ɾ������������������Ϣ */
	Pop_Index(&Ready_Task_Index_Queue, &Running_Task_Index);
	Task_Table[Running_Task_Index].Task_State = Task_Running;
	Process_Context_Pointer = (Structure_Process_Context *) Task_Table[Running_Task_Index].Main_Context.PSP;
	*Process_Context_Pointer = Task_Table[Running_Task_Index].Process_Context;
	*Main_Context_Pointer = Task_Table[Running_Task_Index].Main_Context;
}

/*
	���ܣ���������
	������Structure_Process_Context *Process_Context_Pointer�����̻���ָ��
		  Structure_Main_Context *Main_Context_Pointer��������ָ��
		  Integer_Unsigned_32_Bit Time_Limitation��ʱ�����ƣ�0��ʾ���ޣ���λ������
	���أ���
*/
void	Suspend_Task(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer, Integer_Unsigned_32_Bit Time_Limitation)
{
	/* ������������������������������������Ϣ */
	Push_Index(&Suspended_Task_Index_Queue, Running_Task_Index);
	Task_Table[Running_Task_Index].Task_State = Task_Suspended;
	Task_Table[Running_Task_Index].Process_Context = *Process_Context_Pointer;
	Task_Table[Running_Task_Index].Main_Context = *Main_Context_Pointer;
	Task_Table[Running_Task_Index].Time_Limitation = Time_Limitation;
	
	/* �Ӿ���������������ɾ������������������Ϣ */
	Pop_Index(&Ready_Task_Index_Queue, &Running_Task_Index);
	Task_Table[Running_Task_Index].Task_State = Task_Running;
	Process_Context_Pointer = (Structure_Process_Context *) Task_Table[Running_Task_Index].Main_Context.PSP;
	*Process_Context_Pointer = Task_Table[Running_Task_Index].Process_Context;
	*Main_Context_Pointer = Task_Table[Running_Task_Index].Main_Context;
}

/*
	���ܣ���������
	������Integer_Unsigned_8_Bit Task_Index����������
	���أ���
*/
void	Wake_Task(Integer_Unsigned_8_Bit Task_Index)
{
	Integer_Unsigned_8_Bit	Element_Index, Current_Index;
	
	/* �ж����������������־������״̬ */
	if ( (Task_Index < Task_Count_Limitation) && (Task_Table[Task_Index].Task_Valid == 1) && (Task_Table[Task_Index].Task_State == Task_Suspended) )
	{
		/* ������������ */
		for (Element_Index = 0; Element_Index < Suspended_Task_Index_Queue.Element_Count; Element_Index += 1)
		{
			Pop_Index(&Suspended_Task_Index_Queue, &Current_Index);
			if (Current_Index == Task_Index)
			{
				Push_Index(&Ready_Task_Index_Queue, Current_Index);
				Task_Table[Current_Index].Task_State = Task_Ready;
				
				break;
			}
			else
			{
				Push_Index(&Suspended_Task_Index_Queue, Current_Index);
			}
		}
	}
	else
	{
		/* ���� */
	}
}

/*
	���ܣ�ɨ������
	��������
	���أ���
*/
void	Scan_Task(void)
{
	Integer_Unsigned_8_Bit	Element_Index, Task_Index;
	
	/* ������������ */
	for (Element_Index = 0; Element_Index < Suspended_Task_Index_Queue.Element_Count; Element_Index += 1)
	{
		/* �ж�ʱ������ */
		Pop_Index(&Suspended_Task_Index_Queue, &Task_Index);
		if (Task_Table[Task_Index].Time_Limitation > 0)
		{
			Task_Table[Task_Index].Time_Limitation -= 1;
			if (Task_Table[Task_Index].Time_Limitation == 0)
			{
				Push_Index(&Ready_Task_Index_Queue, Task_Index);
				Task_Table[Task_Index].Task_State = Task_Ready;
			}
			else
			{
				Push_Index(&Suspended_Task_Index_Queue, Task_Index);
			}
		}
		else
		{
			Push_Index(&Suspended_Task_Index_Queue, Task_Index);
		}
	}
}

/*
	���ܣ���������
	������Structure_Process_Context *Process_Context_Pointer�����̻���ָ��
		  Structure_Main_Context *Main_Context_Pointer��������ָ��
		  Integer_Unsigned_8_Bit Task_Index����������
	���أ���
*/
void	Run_Task(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer, Integer_Unsigned_8_Bit Task_Index)
{
	Structure_Index_Queue	*Index_Queue_Pointer;
	Integer_Unsigned_8_Bit	Element_Index, Current_Index;
	Structure_Message		Message;
	
	/* �ж����������������־������״̬ */
	if ( (Task_Index < Task_Count_Limitation) && (Task_Table[Task_Index].Task_Valid == 1) && (Task_Table[Task_Index].Task_State != Task_Running) )
	{
		/* ������������������������������������Ϣ */
		Push_Index(&Ready_Task_Index_Queue, Running_Task_Index);
		Task_Table[Running_Task_Index].Task_State = Task_Ready;
		Task_Table[Running_Task_Index].Process_Context = *Process_Context_Pointer;
		Task_Table[Running_Task_Index].Main_Context = *Main_Context_Pointer;
		
		/* ������������ָ�� */
		if (Task_Table[Task_Index].Task_State == Task_Ready)
		{
			Index_Queue_Pointer = &Ready_Task_Index_Queue;
		}
		else
		{
			Index_Queue_Pointer = &Suspended_Task_Index_Queue;
		}
		
		/* ������������ */
		for (Element_Index = 0; Element_Index < Index_Queue_Pointer->Element_Count; Element_Index += 1)
		{
			Pop_Index(Index_Queue_Pointer, &Current_Index);
			if (Current_Index == Task_Index)
			{
				/* ����������Ϣ */
				Running_Task_Index = Current_Index;
				Task_Table[Running_Task_Index].Task_State = Task_Running;
				Process_Context_Pointer = (Structure_Process_Context *) Task_Table[Running_Task_Index].Main_Context.PSP;
				*Process_Context_Pointer = Task_Table[Running_Task_Index].Process_Context;
				*Main_Context_Pointer = Task_Table[Running_Task_Index].Main_Context;
				
				/* ������Ϣ */
				Message.Source_Task_Index = Task_Count_Limitation;
				Message.Destination_Task_Index = Running_Task_Index;
				Message.Command_Index = 0;
				Message.Master_Parameter = 0;
				Message.Slave_Parameter = 0;
				Transmit_Message(&Message);
				
				break;
			}
			else
			{
				Push_Index(Index_Queue_Pointer, Current_Index);
			}
		}
	}
	else
	{
		/* ���� */
	}
}

/*
	���ܣ�ɾ������
	������Structure_Process_Context *Process_Context_Pointer�����̻���ָ��
		  Structure_Main_Context *Main_Context_Pointer��������ָ��
	���أ���
*/
void	Delete_Task(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer)
{
	/* ������������������������������������Ϣ */
	Push_Index(&Available_Task_Index_Queue, Running_Task_Index);
	Task_Table[Running_Task_Index].Task_Valid = 0;
	
	/* �Ӿ���������������ɾ������������������Ϣ */
	Pop_Index(&Ready_Task_Index_Queue, &Running_Task_Index);
	Process_Context_Pointer = (Structure_Process_Context *) Task_Table[Running_Task_Index].Main_Context.PSP;
	*Process_Context_Pointer = Task_Table[Running_Task_Index].Process_Context;
	*Main_Context_Pointer = Task_Table[Running_Task_Index].Main_Context;
}

/*
	���ܣ�������Ϣ
	������Structure_Message *Message_Pointer����Ϣָ��
	���أ����յ���Ϣ����
*/
Integer_Unsigned_8_Bit	Receive_Message(Structure_Message *Message_Pointer)
{
	Integer_Unsigned_8_Bit	Message_Count;
	
	/* ɾ����Ϣ */
	Message_Count = Pop_Message(&Task_Table[Running_Task_Index].Message_Queue, Message_Pointer);
	
	return Message_Count;
}

/*
	���ܣ�������Ϣ
	������Structure_Message *Message_Pointer����Ϣָ��
	���أ����͵���Ϣ����
*/
Integer_Unsigned_8_Bit	Transmit_Message(Structure_Message *Message_Pointer)
{
	Integer_Unsigned_8_Bit	Message_Count;
	
	/* �ж������־ */
	if (Task_Table[Message_Pointer->Destination_Task_Index].Task_Valid)
	{
		/* �����Ϣ */
		Message_Count = Push_Message(&Task_Table[Message_Pointer->Destination_Task_Index].Message_Queue, Message_Pointer);
	}
	else
	{
		Message_Count = 0;
	}
	
	return Message_Count;
}

/*
	���ܣ����ź���
	������Structure_Process_Context *Process_Context_Pointer�����̻���ָ��
		  Structure_Main_Context *Main_Context_Pointer��������ָ��
		  Integer_Signed_32_Bit *Semaphore_Pointer���ź���ָ��
	���أ���
*/
void	Down_Semaphore(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer, Integer_Signed_32_Bit *Semaphore_Pointer)
{
	/* �жϺʹ����ź��� */
	if (*Semaphore_Pointer > 0)
	{
		/* ���� */
	}
	else
	{
		Suspend_Task(Process_Context_Pointer, Main_Context_Pointer, 0);
	}
	*Semaphore_Pointer -= 1;
}

/*
	���ܣ����ź���
	������Integer_Signed_32_Bit *Semaphore_Pointer���ź���ָ��
		  Integer_Unsigned_8_Bit Task_Index����������
	���أ���
*/
void	Up_Semaphore(Integer_Signed_32_Bit *Semaphore_Pointer, Integer_Unsigned_8_Bit Task_Index)
{
	/* �����ź������������� */
	*Semaphore_Pointer += 1;
	Wake_Task(Task_Index);
}
