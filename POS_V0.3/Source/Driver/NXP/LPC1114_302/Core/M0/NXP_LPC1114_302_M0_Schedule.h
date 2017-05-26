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

#ifndef	NXP_LPC1114_302_M0_SCHEDULE_H
#define	NXP_LPC1114_302_M0_SCHEDULE_H

#include	"NXP_LPC1114_302_M0_Context.h"

/* 数据类型 */

/* 数量限制 */
typedef	enum	Tag_Count_Limitation
{
	Message_Count_Limitation = 8, Task_Count_Limitation = 8, System_Timer_Tick_Interrupt_Count_Limitation = 100
}
	Enumeration_Count_Limitation;

/* 任务状态 */
typedef	enum	Tag_Task_State
{
	Task_Ready, Task_Running, Task_Suspended
}
	Enumeration_Task_State;

/* 消息队列 */
typedef	struct	Tag_Message_Queue
{
	Integer_Unsigned_8_Bit	Element_Count, Element_Head, Element_Tail;
	Structure_Message		Element_Table[Message_Count_Limitation];
}
	Structure_Message_Queue;

/* 任务信息 */
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

/* 任务表 */
typedef	Structure_Task_Information	Array_Task_Table[Task_Count_Limitation];

/* 索引队列 */
typedef	struct	Tag_Index_Queue
{
	Integer_Unsigned_8_Bit	Element_Count, Element_Head, Element_Tail;
	Integer_Unsigned_8_Bit	Element_Table[Task_Count_Limitation];
}
	Structure_Index_Queue;

/* 函数声明 */

/*
	功能：初始化调度
	参数：Structure_Process_Context *Process_Context_Pointer，进程环境指针
		  Structure_Main_Context *Main_Context_Pointer，主环境指针
	返回：无
*/
void	Initialize_Schedule(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer);

/*
	功能：添加消息
	参数：Structure_Message_Queue *Message_Queue_Pointer，消息队列指针
		  Structure_Message *Message_Pointer，消息指针
	返回：Integer_Unsigned_8_Bit，添加的消息数量
*/
Integer_Unsigned_8_Bit	Push_Message(Structure_Message_Queue *Message_Queue_Pointer, Structure_Message *Message_Pointer);

/*
	功能：删除消息
	参数：Structure_Message_Queue *Message_Queue_Pointer，消息队列指针
		  Structure_Message *Message_Pointer，消息指针
	返回：Integer_Unsigned_8_Bit，删除的消息数量
*/
Integer_Unsigned_8_Bit	Pop_Message(Structure_Message_Queue *Message_Queue_Pointer, Structure_Message *Message_Pointer);

/*
	功能：添加索引
	参数：Structure_Index_Queue *Index_Queue_Pointer，索引队列指针
		  Integer_Unsigned_8_Bit Index，索引
	返回：Integer_Unsigned_8_Bit，添加的索引数量
*/
Integer_Unsigned_8_Bit	Push_Index(Structure_Index_Queue *Index_Queue_Pointer, Integer_Unsigned_8_Bit Index);

/*
	功能：删除索引
	参数：Structure_Index_Queue *Index_Queue_Pointer，索引队列指针
		  Integer_Unsigned_8_Bit *Index_Pointer，索引指针
	返回：Integer_Unsigned_8_Bit，删除的索引数量
*/
Integer_Unsigned_8_Bit	Pop_Index(Structure_Index_Queue *Index_Queue_Pointer, Integer_Unsigned_8_Bit *Index_Pointer);

/*
	功能：建立任务
	参数：Integer_Unsigned_32_Bit Function_Address，函数地址
		  Integer_Unsigned_32_Bit Stack_Address，栈地址
	返回：Integer_Unsigned_8_Bit，任务索引，小于任务数量限制表示有效，否则表示无效
*/
Integer_Unsigned_8_Bit	Create_Task(Integer_Unsigned_32_Bit Function_Address, Integer_Unsigned_32_Bit Stack_Address);

/*
	功能：切换任务
	参数：Structure_Process_Context *Process_Context_Pointer，进程环境指针
		  Structure_Main_Context *Main_Context_Pointer，主环境指针
	返回：无
*/
void	Yield_Task(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer);

/*
	功能：挂起任务
	参数：Structure_Process_Context *Process_Context_Pointer，进程环境指针
		  Structure_Main_Context *Main_Context_Pointer，主环境指针
		  Integer_Unsigned_32_Bit Time_Limitation，时间限制，0表示无限，单位：毫秒
	返回：无
*/
void	Suspend_Task(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer, Integer_Unsigned_32_Bit Time_Limitation);

/*
	功能：唤醒任务
	参数：Integer_Unsigned_8_Bit Task_Index，任务索引
	返回：无
*/
void	Wake_Task(Integer_Unsigned_8_Bit Task_Index);

/*
	功能：扫描任务
	参数：无
	返回：无
*/
void	Scan_Task(void);

/*
	功能：运行任务
	参数：Structure_Process_Context *Process_Context_Pointer，进程环境指针
		  Structure_Main_Context *Main_Context_Pointer，主环境指针
		  Integer_Unsigned_8_Bit Task_Index，任务索引
	返回：无
*/
void	Run_Task(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer, Integer_Unsigned_8_Bit Task_Index);

/*
	功能：删除任务
	参数：Structure_Process_Context *Process_Context_Pointer，进程环境指针
		  Structure_Main_Context *Main_Context_Pointer，主环境指针
	返回：无
*/
void	Delete_Task(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer);

/*
	功能：接收消息
	参数：Structure_Message *Message_Pointer，消息指针
	返回：接收的消息数量
*/
Integer_Unsigned_8_Bit	Receive_Message(Structure_Message *Message_Pointer);

/*
	功能：发送消息
	参数：Structure_Message *Message_Pointer，消息指针
	返回：发送的消息数量
*/
Integer_Unsigned_8_Bit	Transmit_Message(Structure_Message *Message_Pointer);

/*
	功能：减信号量
	参数：Structure_Process_Context *Process_Context_Pointer，进程环境指针
		  Structure_Main_Context *Main_Context_Pointer，主环境指针
		  Integer_Signed_32_Bit *Semaphore_Pointer，信号量指针
	返回：无
*/
void	Down_Semaphore(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer, Integer_Signed_32_Bit *Semaphore_Pointer);

/*
	功能：加信号量
	参数：Integer_Signed_32_Bit *Semaphore_Pointer，信号量指针
		  Integer_Unsigned_8_Bit Task_Index，任务索引
	返回：无
*/
void	Up_Semaphore(Integer_Signed_32_Bit *Semaphore_Pointer, Integer_Unsigned_8_Bit Task_Index);

#endif
