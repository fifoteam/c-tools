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

#ifndef	MCU123_LPC1114_KIT_CORE_H
#define	MCU123_LPC1114_KIT_CORE_H

#include	"NXP_LPC1114_302_M0_Context.h"
#include	"NXP_LPC1114_302_M0_Exception.h"
#include	"NXP_LPC1114_302_System_Control_Block.h"
#include	"NXP_LPC1114_302_System_Timer.h"
#include	"NXP_LPC1114_302_NVIC.h"
#include	"NXP_LPC1114_302_System_Configuration.h"
#include	"NXP_LPC1114_302_IO_Configuration.h"

/* 函数声明 */

/*
	功能：初始化M0
	参数：无
	返回：无
*/
void	Core_Library_Initialize_M0(void);

/*
	功能：初始化系统控制块
	参数：无
	返回：无
*/
void	Core_Library_Initialize_System_Control_Block(void);

/*
	功能：初始化系统定时器
	参数：无
	返回：无
*/
void	Core_Library_Initialize_System_Timer(void);

/*
	功能：初始化NVIC
	参数：无
	返回：无
*/
void	Core_Library_Initialize_NVIC(void);

/*
	功能：初始化系统配置
	参数：无
	返回：无
*/
void	Core_Library_Initialize_System_Configuration(void);

/*
	功能：初始化IO配置
	参数：无
	返回：无
*/
void	Core_Library_Initialize_IO_Configuration(void);

/*
	功能：初始化
	参数：无
	返回：无
*/
void	Core_Library_Initialize(void);
/*
	功能：关闭中断
	参数：无
	返回：无
*/
void	Core_Library_Disable_Interrupt(void);

/*
	功能：打开中断
	参数：无
	返回：无
*/
void	Core_Library_Enable_Interrupt(void);

/*
	功能：等待中断
	参数：无
	返回：无
*/
void	Core_Library_Wait_Interrupt(void);

/*
	功能：建立任务
	参数：Void_Function *Function_Pointer，函数指针
		  Integer_Unsigned_32_Bit *Stack_Pointer，栈指针
	返回：Integer_Unsigned_8_Bit，任务索引，小于任务数量限制表示有效，否则表示无效
*/
Integer_Unsigned_8_Bit	Core_Library_Create_Task(Void_Function *Function_Pointer, Integer_Unsigned_32_Bit *Stack_Pointer);

/*
	功能：切换任务
	参数：无
	返回：无
*/
void	Core_Library_Yield_Task(void);

/*
	功能：挂起任务
	参数：Integer_Unsigned_32_Bit Time_Limitation，时间限制，单位：毫秒
	返回：无
*/
void	Core_Library_Suspend_Task(Integer_Unsigned_32_Bit Time_Limitation);

/*
	功能：唤醒任务
	参数：Integer_Unsigned_8_Bit Task_Index，任务索引
	返回：无
*/
void	Core_Library_Wake_Task(Integer_Unsigned_8_Bit Task_Index);

/*
	功能：删除任务
	参数：无
	返回：无
*/
void	Core_Library_Delete_Task(void);

/*
	功能：接收消息
	参数：Structure_Message *Message_Pointer，消息指针
	返回：无
*/
void	Core_Library_Receive_Message(Structure_Message *Message_Pointer);

/*
	功能：发送消息
	参数：Structure_Message *Message_Pointer，消息指针
	返回：无
*/
void	Core_Library_Transmit_Message(Structure_Message *Message_Pointer);

/*
	功能：减信号量
	参数：Integer_Signed_32_Bit *Semaphore_Pointer，信号量指针
	返回：无
*/
void	Core_Library_Down_Semaphore(Integer_Signed_32_Bit *Semaphore_Pointer);

/*
	功能：加信号量
	参数：Integer_Signed_32_Bit *Semaphore_Pointer，信号量指针
		  Integer_Unsigned_8_Bit Task_Index，任务索引
	返回：无
*/
void	Core_Library_Up_Semaphore(Integer_Signed_32_Bit *Semaphore_Pointer, Integer_Unsigned_8_Bit Task_Index);

/*
	功能：加锁互斥量
	参数：Integer_Unsigned_8_Bit *Mutex_Pointer，互斥量指针
	返回：无
*/
void	Core_Library_Lock_Mutex(Integer_Unsigned_8_Bit *Mutex_Pointer);

/*
	功能：解锁互斥量
	参数：Integer_Unsigned_8_Bit *Mutex_Pointer，互斥量指针
	返回：无
*/
void	Core_Library_Unlock_Mutex(Integer_Unsigned_8_Bit *Mutex_Pointer);

#endif
