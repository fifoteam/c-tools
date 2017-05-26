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

#ifndef	NXP_LPC1114_302_M0_EXCEPTION_H
#define	NXP_LPC1114_302_M0_EXCEPTION_H

#include	"NXP_LPC1114_302_M0_Schedule.h"

/* 数据声明 */

/* 中断任务索引 */
extern Integer_Unsigned_8_Bit	Wake_0_Interrupt_Task_Index;
extern Integer_Unsigned_8_Bit	Wake_1_Interrupt_Task_Index;
extern Integer_Unsigned_8_Bit	Wake_2_Interrupt_Task_Index;
extern Integer_Unsigned_8_Bit	Wake_3_Interrupt_Task_Index;
extern Integer_Unsigned_8_Bit	Wake_4_Interrupt_Task_Index;
extern Integer_Unsigned_8_Bit	Wake_5_Interrupt_Task_Index;
extern Integer_Unsigned_8_Bit	Wake_6_Interrupt_Task_Index;
extern Integer_Unsigned_8_Bit	Wake_7_Interrupt_Task_Index;
extern Integer_Unsigned_8_Bit	Wake_8_Interrupt_Task_Index;
extern Integer_Unsigned_8_Bit	Wake_9_Interrupt_Task_Index;
extern Integer_Unsigned_8_Bit	Wake_10_Interrupt_Task_Index;
extern Integer_Unsigned_8_Bit	Wake_11_Interrupt_Task_Index;
extern Integer_Unsigned_8_Bit	Wake_12_Interrupt_Task_Index;
extern Integer_Unsigned_8_Bit	SPI_0_Interrupt_Task_Index;
extern Integer_Unsigned_8_Bit	IIC_Interrupt_Task_Index;
extern Integer_Unsigned_8_Bit	Counter_Timer_16_Bit_0_Interrupt_Task_Index;
extern Integer_Unsigned_8_Bit	Counter_Timer_16_Bit_1_Interrupt_Task_Index;
extern Integer_Unsigned_8_Bit	Counter_Timer_32_Bit_0_Interrupt_Task_Index;
extern Integer_Unsigned_8_Bit	Counter_Timer_32_Bit_1_Interrupt_Task_Index;
extern Integer_Unsigned_8_Bit	SPI_1_Interrupt_Task_Index;
extern Integer_Unsigned_8_Bit	UART_Interrupt_Task_Index;
extern Integer_Unsigned_8_Bit	ADC_Interrupt_Task_Index;
extern Integer_Unsigned_8_Bit	Watchdog_Timer_Interrupt_Task_Index;
extern Integer_Unsigned_8_Bit	Brown_Out_Detect_Interrupt_Task_Index;
extern Integer_Unsigned_8_Bit	GPIO_3_Interrupt_Task_Index;
extern Integer_Unsigned_8_Bit	GPIO_2_Interrupt_Task_Index;
extern Integer_Unsigned_8_Bit	GPIO_1_Interrupt_Task_Index;
extern Integer_Unsigned_8_Bit	GPIO_0_Interrupt_Task_Index;

/* 清除中断函数指针 */
extern Void_Function	*Wake_0_Clear_Interrupt_Function_Pointer;
extern Void_Function	*Wake_1_Clear_Interrupt_Function_Pointer;
extern Void_Function	*Wake_2_Clear_Interrupt_Function_Pointer;
extern Void_Function	*Wake_3_Clear_Interrupt_Function_Pointer;
extern Void_Function	*Wake_4_Clear_Interrupt_Function_Pointer;
extern Void_Function	*Wake_5_Clear_Interrupt_Function_Pointer;
extern Void_Function	*Wake_6_Clear_Interrupt_Function_Pointer;
extern Void_Function	*Wake_7_Clear_Interrupt_Function_Pointer;
extern Void_Function	*Wake_8_Clear_Interrupt_Function_Pointer;
extern Void_Function	*Wake_9_Clear_Interrupt_Function_Pointer;
extern Void_Function	*Wake_10_Clear_Interrupt_Function_Pointer;
extern Void_Function	*Wake_11_Clear_Interrupt_Function_Pointer;
extern Void_Function	*Wake_12_Clear_Interrupt_Function_Pointer;
extern Void_Function	*SPI_0_Clear_Interrupt_Function_Pointer;
extern Void_Function	*IIC_Clear_Interrupt_Function_Pointer;
extern Void_Function	*Counter_Timer_16_Bit_0_Clear_Interrupt_Function_Pointer;
extern Void_Function	*Counter_Timer_16_Bit_1_Clear_Interrupt_Function_Pointer;
extern Void_Function	*Counter_Timer_32_Bit_0_Clear_Interrupt_Function_Pointer;
extern Void_Function	*Counter_Timer_32_Bit_1_Clear_Interrupt_Function_Pointer;
extern Void_Function	*SPI_1_Clear_Interrupt_Function_Pointer;
extern Void_Function	*UART_Clear_Interrupt_Function_Pointer;
extern Void_Function	*ADC_Clear_Interrupt_Function_Pointer;
extern Void_Function	*Watchdog_Timer_Clear_Interrupt_Function_Pointer;
extern Void_Function	*Brown_Out_Detect_Clear_Interrupt_Function_Pointer;
extern Void_Function	*GPIO_3_Clear_Interrupt_Function_Pointer;
extern Void_Function	*GPIO_2_Clear_Interrupt_Function_Pointer;
extern Void_Function	*GPIO_1_Clear_Interrupt_Function_Pointer;
extern Void_Function	*GPIO_0_Clear_Interrupt_Function_Pointer;

/* 系统定时器计时中断次数 */
extern Integer_Unsigned_32_Bit	System_Timer_Tick_Interrupt_Count;

/* 函数声明 */

/*
	功能：硬故障异常处理的中期操作
	参数：Structure_Process_Context *Process_Context_Pointer，进程环境指针
		  Structure_Main_Context *Main_Context_Pointer，主环境指针
	返回：无
*/
void	Hard_Fault_Exception_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer);

/*
	功能：管理调用异常处理的中期操作
	参数：Structure_Process_Context *Process_Context_Pointer，进程环境指针
		  Structure_Main_Context *Main_Context_Pointer，主环境指针
	返回：无
*/
void	Supervisor_Call_Exception_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer);

/*
	功能：等待管理异常处理的中期操作
	参数：Structure_Process_Context *Process_Context_Pointer，进程环境指针
		  Structure_Main_Context *Main_Context_Pointer，主环境指针
	返回：无
*/
void	Pend_Supervisor_Exception_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer);

/*
	功能：系统定时器中断处理的中期操作
	参数：Structure_Process_Context *Process_Context_Pointer，进程环境指针
		  Structure_Main_Context *Main_Context_Pointer，主环境指针
	返回：无
*/
void	System_Timer_Interrupt_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer);

/*
	功能：唤醒0中断处理的中期操作
	参数：Structure_Process_Context *Process_Context_Pointer，进程环境指针
		  Structure_Main_Context *Main_Context_Pointer，主环境指针
	返回：无
*/
void	Wake_0_Interrupt_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer);

/*
	功能：唤醒1中断处理的中期操作
	参数：Structure_Process_Context *Process_Context_Pointer，进程环境指针
		  Structure_Main_Context *Main_Context_Pointer，主环境指针
	返回：无
*/
void	Wake_1_Interrupt_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer);

/*
	功能：唤醒2中断处理的中期操作
	参数：Structure_Process_Context *Process_Context_Pointer，进程环境指针
		  Structure_Main_Context *Main_Context_Pointer，主环境指针
	返回：无
*/
void	Wake_2_Interrupt_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer);

/*
	功能：唤醒3中断处理的中期操作
	参数：Structure_Process_Context *Process_Context_Pointer，进程环境指针
		  Structure_Main_Context *Main_Context_Pointer，主环境指针
	返回：无
*/
void	Wake_3_Interrupt_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer);

/*
	功能：唤醒4中断处理的中期操作
	参数：Structure_Process_Context *Process_Context_Pointer，进程环境指针
		  Structure_Main_Context *Main_Context_Pointer，主环境指针
	返回：无
*/
void	Wake_4_Interrupt_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer);

/*
	功能：唤醒5中断处理的中期操作
	参数：Structure_Process_Context *Process_Context_Pointer，进程环境指针
		  Structure_Main_Context *Main_Context_Pointer，主环境指针
	返回：无
*/
void	Wake_5_Interrupt_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer);

/*
	功能：唤醒6中断处理的中期操作
	参数：Structure_Process_Context *Process_Context_Pointer，进程环境指针
		  Structure_Main_Context *Main_Context_Pointer，主环境指针
	返回：无
*/
void	Wake_6_Interrupt_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer);

/*
	功能：唤醒7中断处理的中期操作
	参数：Structure_Process_Context *Process_Context_Pointer，进程环境指针
		  Structure_Main_Context *Main_Context_Pointer，主环境指针
	返回：无
*/
void	Wake_7_Interrupt_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer);

/*
	功能：唤醒8中断处理的中期操作
	参数：Structure_Process_Context *Process_Context_Pointer，进程环境指针
		  Structure_Main_Context *Main_Context_Pointer，主环境指针
	返回：无
*/
void	Wake_8_Interrupt_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer);

/*
	功能：唤醒9中断处理的中期操作
	参数：Structure_Process_Context *Process_Context_Pointer，进程环境指针
		  Structure_Main_Context *Main_Context_Pointer，主环境指针
	返回：无
*/
void	Wake_9_Interrupt_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer);

/*
	功能：唤醒10中断处理的中期操作
	参数：Structure_Process_Context *Process_Context_Pointer，进程环境指针
		  Structure_Main_Context *Main_Context_Pointer，主环境指针
	返回：无
*/
void	Wake_10_Interrupt_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer);

/*
	功能：唤醒11中断处理的中期操作
	参数：Structure_Process_Context *Process_Context_Pointer，进程环境指针
		  Structure_Main_Context *Main_Context_Pointer，主环境指针
	返回：无
*/
void	Wake_11_Interrupt_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer);

/*
	功能：唤醒12中断处理的中期操作
	参数：Structure_Process_Context *Process_Context_Pointer，进程环境指针
		  Structure_Main_Context *Main_Context_Pointer，主环境指针
	返回：无
*/
void	Wake_12_Interrupt_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer);

/*
	功能：SPI0中断处理的中期操作
	参数：Structure_Process_Context *Process_Context_Pointer，进程环境指针
		  Structure_Main_Context *Main_Context_Pointer，主环境指针
	返回：无
*/
void	SPI_0_Interrupt_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer);

/*
	功能：IIC中断处理的中期操作
	参数：Structure_Process_Context *Process_Context_Pointer，进程环境指针
		  Structure_Main_Context *Main_Context_Pointer，主环境指针
	返回：无
*/
void	IIC_Interrupt_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer);

/*
	功能：16位计数器定时器0中断处理的中期操作
	参数：Structure_Process_Context *Process_Context_Pointer，进程环境指针
		  Structure_Main_Context *Main_Context_Pointer，主环境指针
	返回：无
*/
void	Counter_Timer_16_Bit_0_Interrupt_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer);

/*
	功能：16位计数器定时器1中断处理的中期操作
	参数：Structure_Process_Context *Process_Context_Pointer，进程环境指针
		  Structure_Main_Context *Main_Context_Pointer，主环境指针
	返回：无
*/
void	Counter_Timer_16_Bit_1_Interrupt_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer);

/*
	功能：32位计数器定时器0中断处理的中期操作
	参数：Structure_Process_Context *Process_Context_Pointer，进程环境指针
		  Structure_Main_Context *Main_Context_Pointer，主环境指针
	返回：无
*/
void	Counter_Timer_32_Bit_0_Interrupt_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer);

/*
	功能：32位计数器定时器1中断处理的中期操作
	参数：Structure_Process_Context *Process_Context_Pointer，进程环境指针
		  Structure_Main_Context *Main_Context_Pointer，主环境指针
	返回：无
*/
void	Counter_Timer_32_Bit_1_Interrupt_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer);

/*
	功能：SPI1中断处理的中期操作
	参数：Structure_Process_Context *Process_Context_Pointer，进程环境指针
		  Structure_Main_Context *Main_Context_Pointer，主环境指针
	返回：无
*/
void	SPI_1_Interrupt_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer);

/*
	功能：UART中断处理的中期操作
	参数：Structure_Process_Context *Process_Context_Pointer，进程环境指针
		  Structure_Main_Context *Main_Context_Pointer，主环境指针
	返回：无
*/
void	UART_Interrupt_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer);

/*
	功能：ADC中断处理的中期操作
	参数：Structure_Process_Context *Process_Context_Pointer，进程环境指针
		  Structure_Main_Context *Main_Context_Pointer，主环境指针
	返回：无
*/
void	ADC_Interrupt_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer);

/*
	功能：监察定时器中断处理的中期操作
	参数：Structure_Process_Context *Process_Context_Pointer，进程环境指针
		  Structure_Main_Context *Main_Context_Pointer，主环境指针
	返回：无
*/
void	Watchdog_Timer_Interrupt_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer);

/*
	功能：欠压检测中断处理的中期操作
	参数：Structure_Process_Context *Process_Context_Pointer，进程环境指针
		  Structure_Main_Context *Main_Context_Pointer，主环境指针
	返回：无
*/
void	Brown_Out_Detect_Interrupt_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer);

/*
	功能：GPIO3中断处理的中期操作
	参数：Structure_Process_Context *Process_Context_Pointer，进程环境指针
		  Structure_Main_Context *Main_Context_Pointer，主环境指针
	返回：无
*/
void	GPIO_3_Interrupt_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer);

/*
	功能：GPIO2中断处理的中期操作
	参数：Structure_Process_Context *Process_Context_Pointer，进程环境指针
		  Structure_Main_Context *Main_Context_Pointer，主环境指针
	返回：无
*/
void	GPIO_2_Interrupt_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer);

/*
	功能：GPIO1中断处理的中期操作
	参数：Structure_Process_Context *Process_Context_Pointer，进程环境指针
		  Structure_Main_Context *Main_Context_Pointer，主环境指针
	返回：无
*/
void	GPIO_1_Interrupt_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer);

/*
	功能：GPIO0中断处理的中期操作
	参数：Structure_Process_Context *Process_Context_Pointer，进程环境指针
		  Structure_Main_Context *Main_Context_Pointer，主环境指针
	返回：无
*/
void	GPIO_0_Interrupt_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer);

#endif
