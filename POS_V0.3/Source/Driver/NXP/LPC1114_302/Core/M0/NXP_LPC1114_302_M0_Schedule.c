/*
	版权：2012 - 2014  吴彬（wubin_pos@163.com）
	
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

/* 数据定义 */

/* 任务表 */
Array_Task_Table	Task_Table;

/* 可用任务索引队列、就绪任务索引队列和挂起任务索引队列 */
Structure_Index_Queue	Available_Task_Index_Queue, Ready_Task_Index_Queue, Suspended_Task_Index_Queue;

/* 运行任务索引 */
Integer_Unsigned_8_Bit	Running_Task_Index;

/* 函数定义 */

/*
	功能：初始化调度
	参数：Structure_Process_Context *Process_Context_Pointer，进程环境指针
		  Structure_Main_Context *Main_Context_Pointer，主环境指针
	返回：无
*/
void	Initialize_Schedule(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer)
{
	Integer_Unsigned_8_Bit	Task_Index;
	
	/* 设置任务表 */
	for (Task_Index = 0; Task_Index < Task_Count_Limitation; Task_Index += 1)
	{
		Task_Table[Task_Index].Task_Valid = 0;
		Task_Table[Task_Index].Process_Context.PSR = Process_Context_Pointer->PSR;
	}
	
	/* 设置可用任务索引队列 */
	Available_Task_Index_Queue.Element_Count = 0;
	Available_Task_Index_Queue.Element_Head = 0;
	Available_Task_Index_Queue.Element_Tail = 0;
	for (Task_Index = 0; Task_Index < Task_Count_Limitation; Task_Index += 1)
	{
		Push_Index(&Available_Task_Index_Queue, Task_Index);
	}
	
	/* 设置就绪任务索引队列 */
	Ready_Task_Index_Queue.Element_Count = 0;
	Ready_Task_Index_Queue.Element_Head = 0;
	Ready_Task_Index_Queue.Element_Tail = 0;
	
	/* 设置挂起任务索引队列 */
	Suspended_Task_Index_Queue.Element_Count = 0;
	Suspended_Task_Index_Queue.Element_Head = 0;
	Suspended_Task_Index_Queue.Element_Tail = 0;
	
	/* 设置运行任务索引和任务信息 */
	Pop_Index(&Available_Task_Index_Queue, &Running_Task_Index);
	Task_Table[Running_Task_Index].Task_Valid = 1;
	Task_Table[Running_Task_Index].Task_State = Task_Running;
	Task_Table[Running_Task_Index].Time_Limitation = 0;
}

/*
	功能：添加消息
	参数：Structure_Message_Queue *Message_Queue_Pointer，消息队列指针
		  Structure_Message *Message_Pointer，消息指针
	返回：Integer_Unsigned_8_Bit，添加的消息数量
*/
Integer_Unsigned_8_Bit	Push_Message(Structure_Message_Queue *Message_Queue_Pointer, Structure_Message *Message_Pointer)
{
	Integer_Unsigned_8_Bit	Pushed_Message_Count;
	
	/* 检查消息数量 */
	if (Message_Queue_Pointer->Element_Count < Message_Count_Limitation)
	{
		/* 添加消息 */
		Message_Queue_Pointer->Element_Table[Message_Queue_Pointer->Element_Tail] = *Message_Pointer;
		Message_Queue_Pointer->Element_Count += 1;
		Message_Queue_Pointer->Element_Tail += 1;
		if (Message_Queue_Pointer->Element_Tail < Message_Count_Limitation)
		{
			/* 忽略 */
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
	功能：删除消息
	参数：Structure_Message_Queue *Message_Queue_Pointer，消息队列指针
		  Structure_Message *Message_Pointer，消息指针
	返回：Integer_Unsigned_8_Bit，删除的消息数量
*/
Integer_Unsigned_8_Bit	Pop_Message(Structure_Message_Queue *Message_Queue_Pointer, Structure_Message *Message_Pointer)
{
	Integer_Unsigned_8_Bit	Poped_Message_Count;
	
	/* 检查消息数量 */
	if (Message_Queue_Pointer->Element_Count > 0)
	{
		/* 删除消息 */
		*Message_Pointer = Message_Queue_Pointer->Element_Table[Message_Queue_Pointer->Element_Head];
		Message_Queue_Pointer->Element_Count -= 1;
		Message_Queue_Pointer->Element_Head += 1;
		if (Message_Queue_Pointer->Element_Head < Message_Count_Limitation)
		{
			/* 忽略 */
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
	功能：添加索引
	参数：Structure_Index_Queue *Index_Queue_Pointer，索引队列指针
		  Integer_Unsigned_8_Bit Index，索引
	返回：Integer_Unsigned_8_Bit，添加的索引数量
*/
Integer_Unsigned_8_Bit	Push_Index(Structure_Index_Queue *Index_Queue_Pointer, Integer_Unsigned_8_Bit Index)
{
	Integer_Unsigned_8_Bit	Pushed_Index_Count;
	
	/* 检查索引数量 */
	if (Index_Queue_Pointer->Element_Count < Task_Count_Limitation)
	{
		/* 添加索引 */
		Index_Queue_Pointer->Element_Table[Index_Queue_Pointer->Element_Tail] = Index;
		Index_Queue_Pointer->Element_Count += 1;
		Index_Queue_Pointer->Element_Tail += 1;
		if (Index_Queue_Pointer->Element_Tail < Task_Count_Limitation)
		{
			/* 忽略 */
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
	功能：删除索引
	参数：Structure_Index_Queue *Index_Queue_Pointer，索引队列指针
		  Integer_Unsigned_8_Bit *Index_Pointer，索引指针
	返回：Integer_Unsigned_8_Bit，删除的索引数量
*/
Integer_Unsigned_8_Bit	Pop_Index(Structure_Index_Queue *Index_Queue_Pointer, Integer_Unsigned_8_Bit *Index_Pointer)
{
	Integer_Unsigned_8_Bit	Poped_Index_Count;
	
	/* 检查索引数量 */
	if (Index_Queue_Pointer->Element_Count > 0)
	{
		/* 删除索引 */
		*Index_Pointer = Index_Queue_Pointer->Element_Table[Index_Queue_Pointer->Element_Head];
		Index_Queue_Pointer->Element_Count -= 1;
		Index_Queue_Pointer->Element_Head += 1;
		if (Index_Queue_Pointer->Element_Head < Task_Count_Limitation)
		{
			/* 忽略 */
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
	功能：建立任务
	参数：Integer_Unsigned_32_Bit Function_Address，函数地址
		  Integer_Unsigned_32_Bit Stack_Address，栈地址
	返回：Integer_Unsigned_8_Bit，任务索引，小于任务数量限制表示有效，否则表示无效
*/
Integer_Unsigned_8_Bit	Create_Task(Integer_Unsigned_32_Bit Function_Address, Integer_Unsigned_32_Bit Stack_Address)
{
	Integer_Unsigned_8_Bit	Index_Count, Task_Index;
	
	/* 从可用任务索引队列删除索引 */
	Index_Count = Pop_Index(&Available_Task_Index_Queue, &Task_Index);
	if (Index_Count == 1)
	{
		/* 设置任务信息 */
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
		
		/* 向就绪任务队列添加索引 */
		Index_Count = Push_Index(&Ready_Task_Index_Queue, Task_Index);
	}
	else
	{
		Task_Index = Task_Count_Limitation;
	}
	
	return Task_Index;
}

/*
	功能：切换任务
	参数：Structure_Process_Context *Process_Context_Pointer，进程环境指针
		  Structure_Main_Context *Main_Context_Pointer，主环境指针
	返回：无
*/
void	Yield_Task(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer)
{
	/* 向就绪任务索引队列添加索引，设置任务信息 */
	Push_Index(&Ready_Task_Index_Queue, Running_Task_Index);
	Task_Table[Running_Task_Index].Task_State = Task_Ready;
	Task_Table[Running_Task_Index].Process_Context = *Process_Context_Pointer;
	Task_Table[Running_Task_Index].Main_Context = *Main_Context_Pointer;
	
	/* 从就绪任务索引队列删除索引，设置任务信息 */
	Pop_Index(&Ready_Task_Index_Queue, &Running_Task_Index);
	Task_Table[Running_Task_Index].Task_State = Task_Running;
	Process_Context_Pointer = (Structure_Process_Context *) Task_Table[Running_Task_Index].Main_Context.PSP;
	*Process_Context_Pointer = Task_Table[Running_Task_Index].Process_Context;
	*Main_Context_Pointer = Task_Table[Running_Task_Index].Main_Context;
}

/*
	功能：挂起任务
	参数：Structure_Process_Context *Process_Context_Pointer，进程环境指针
		  Structure_Main_Context *Main_Context_Pointer，主环境指针
		  Integer_Unsigned_32_Bit Time_Limitation，时间限制，0表示无限，单位：毫秒
	返回：无
*/
void	Suspend_Task(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer, Integer_Unsigned_32_Bit Time_Limitation)
{
	/* 向挂起任务索引队列添加索引，设置任务信息 */
	Push_Index(&Suspended_Task_Index_Queue, Running_Task_Index);
	Task_Table[Running_Task_Index].Task_State = Task_Suspended;
	Task_Table[Running_Task_Index].Process_Context = *Process_Context_Pointer;
	Task_Table[Running_Task_Index].Main_Context = *Main_Context_Pointer;
	Task_Table[Running_Task_Index].Time_Limitation = Time_Limitation;
	
	/* 从就绪任务索引队列删除索引，设置任务信息 */
	Pop_Index(&Ready_Task_Index_Queue, &Running_Task_Index);
	Task_Table[Running_Task_Index].Task_State = Task_Running;
	Process_Context_Pointer = (Structure_Process_Context *) Task_Table[Running_Task_Index].Main_Context.PSP;
	*Process_Context_Pointer = Task_Table[Running_Task_Index].Process_Context;
	*Main_Context_Pointer = Task_Table[Running_Task_Index].Main_Context;
}

/*
	功能：唤醒任务
	参数：Integer_Unsigned_8_Bit Task_Index，任务索引
	返回：无
*/
void	Wake_Task(Integer_Unsigned_8_Bit Task_Index)
{
	Integer_Unsigned_8_Bit	Element_Index, Current_Index;
	
	/* 判断任务索引、任务标志和任务状态 */
	if ( (Task_Index < Task_Count_Limitation) && (Task_Table[Task_Index].Task_Valid == 1) && (Task_Table[Task_Index].Task_State == Task_Suspended) )
	{
		/* 查找任务索引 */
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
		/* 忽略 */
	}
}

/*
	功能：扫描任务
	参数：无
	返回：无
*/
void	Scan_Task(void)
{
	Integer_Unsigned_8_Bit	Element_Index, Task_Index;
	
	/* 查找任务索引 */
	for (Element_Index = 0; Element_Index < Suspended_Task_Index_Queue.Element_Count; Element_Index += 1)
	{
		/* 判断时间限制 */
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
	功能：运行任务
	参数：Structure_Process_Context *Process_Context_Pointer，进程环境指针
		  Structure_Main_Context *Main_Context_Pointer，主环境指针
		  Integer_Unsigned_8_Bit Task_Index，任务索引
	返回：无
*/
void	Run_Task(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer, Integer_Unsigned_8_Bit Task_Index)
{
	Structure_Index_Queue	*Index_Queue_Pointer;
	Integer_Unsigned_8_Bit	Element_Index, Current_Index;
	Structure_Message		Message;
	
	/* 判断任务索引、任务标志和任务状态 */
	if ( (Task_Index < Task_Count_Limitation) && (Task_Table[Task_Index].Task_Valid == 1) && (Task_Table[Task_Index].Task_State != Task_Running) )
	{
		/* 向就绪任务索引队列添加索引，设置任务信息 */
		Push_Index(&Ready_Task_Index_Queue, Running_Task_Index);
		Task_Table[Running_Task_Index].Task_State = Task_Ready;
		Task_Table[Running_Task_Index].Process_Context = *Process_Context_Pointer;
		Task_Table[Running_Task_Index].Main_Context = *Main_Context_Pointer;
		
		/* 设置索引队列指针 */
		if (Task_Table[Task_Index].Task_State == Task_Ready)
		{
			Index_Queue_Pointer = &Ready_Task_Index_Queue;
		}
		else
		{
			Index_Queue_Pointer = &Suspended_Task_Index_Queue;
		}
		
		/* 查找任务索引 */
		for (Element_Index = 0; Element_Index < Index_Queue_Pointer->Element_Count; Element_Index += 1)
		{
			Pop_Index(Index_Queue_Pointer, &Current_Index);
			if (Current_Index == Task_Index)
			{
				/* 设置任务信息 */
				Running_Task_Index = Current_Index;
				Task_Table[Running_Task_Index].Task_State = Task_Running;
				Process_Context_Pointer = (Structure_Process_Context *) Task_Table[Running_Task_Index].Main_Context.PSP;
				*Process_Context_Pointer = Task_Table[Running_Task_Index].Process_Context;
				*Main_Context_Pointer = Task_Table[Running_Task_Index].Main_Context;
				
				/* 发送消息 */
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
		/* 忽略 */
	}
}

/*
	功能：删除任务
	参数：Structure_Process_Context *Process_Context_Pointer，进程环境指针
		  Structure_Main_Context *Main_Context_Pointer，主环境指针
	返回：无
*/
void	Delete_Task(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer)
{
	/* 向可用任务索引队列添加索引，设置任务信息 */
	Push_Index(&Available_Task_Index_Queue, Running_Task_Index);
	Task_Table[Running_Task_Index].Task_Valid = 0;
	
	/* 从就绪任务索引队列删除索引，设置任务信息 */
	Pop_Index(&Ready_Task_Index_Queue, &Running_Task_Index);
	Process_Context_Pointer = (Structure_Process_Context *) Task_Table[Running_Task_Index].Main_Context.PSP;
	*Process_Context_Pointer = Task_Table[Running_Task_Index].Process_Context;
	*Main_Context_Pointer = Task_Table[Running_Task_Index].Main_Context;
}

/*
	功能：接收消息
	参数：Structure_Message *Message_Pointer，消息指针
	返回：接收的消息数量
*/
Integer_Unsigned_8_Bit	Receive_Message(Structure_Message *Message_Pointer)
{
	Integer_Unsigned_8_Bit	Message_Count;
	
	/* 删除消息 */
	Message_Count = Pop_Message(&Task_Table[Running_Task_Index].Message_Queue, Message_Pointer);
	
	return Message_Count;
}

/*
	功能：发送消息
	参数：Structure_Message *Message_Pointer，消息指针
	返回：发送的消息数量
*/
Integer_Unsigned_8_Bit	Transmit_Message(Structure_Message *Message_Pointer)
{
	Integer_Unsigned_8_Bit	Message_Count;
	
	/* 判断任务标志 */
	if (Task_Table[Message_Pointer->Destination_Task_Index].Task_Valid)
	{
		/* 添加消息 */
		Message_Count = Push_Message(&Task_Table[Message_Pointer->Destination_Task_Index].Message_Queue, Message_Pointer);
	}
	else
	{
		Message_Count = 0;
	}
	
	return Message_Count;
}

/*
	功能：减信号量
	参数：Structure_Process_Context *Process_Context_Pointer，进程环境指针
		  Structure_Main_Context *Main_Context_Pointer，主环境指针
		  Integer_Signed_32_Bit *Semaphore_Pointer，信号量指针
	返回：无
*/
void	Down_Semaphore(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer, Integer_Signed_32_Bit *Semaphore_Pointer)
{
	/* 判断和处理信号量 */
	if (*Semaphore_Pointer > 0)
	{
		/* 忽略 */
	}
	else
	{
		Suspend_Task(Process_Context_Pointer, Main_Context_Pointer, 0);
	}
	*Semaphore_Pointer -= 1;
}

/*
	功能：加信号量
	参数：Integer_Signed_32_Bit *Semaphore_Pointer，信号量指针
		  Integer_Unsigned_8_Bit Task_Index，任务索引
	返回：无
*/
void	Up_Semaphore(Integer_Signed_32_Bit *Semaphore_Pointer, Integer_Unsigned_8_Bit Task_Index)
{
	/* 处理信号量，唤醒任务 */
	*Semaphore_Pointer += 1;
	Wake_Task(Task_Index);
}
