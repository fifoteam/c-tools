;
;	版权：2012 - 2014  吴彬（wubin_pos@163.com）
;
;	Copyright (C) 2012 - 2014  Wu Bin(wubin_pos@163.com)
;
;	This file is part of POS(Personal Operating System).
;
;	POS is free software: you can redistribute it and/or modify
;	it under the terms of the GNU General Public License as published by
;	the Free Software Foundation, either version 3 of the License, or
;	(at your option) any later version.
;
;	POS is distributed in the hope that it will be useful,
;	but WITHOUT ANY WARRANTY; without even the implied warranty of
;	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
;	GNU General Public License for more details.
;
;	You should have received a copy of the GNU General Public License
;	along with POS. If not, see <http://www.gnu.org/licenses/>.
;

	;M0使用满递减栈，栈地址按照8个字节对齐，使用Thumb指令集
	PRESERVE8	{TRUE}
	THUMB

;SRAM的起始地址、大小和结束地址
SRAM_Start_Address			EQU	0x10000000
SRAM_Size					EQU	(1024 * 6)
SRAM_End_Address			EQU	(SRAM_Start_Address	+ SRAM_Size)

;运行时堆的起始地址、大小和结束地址
Runtime_Heap_Start_Address	EQU	SRAM_End_Address
Runtime_Heap_Size			EQU	1024
Runtime_Heap_End_Address	EQU	(Runtime_Heap_Start_Address + Runtime_Heap_Size)

;运行时栈的起始地址、大小和结束地址
Runtime_Stack_Start_Address	EQU	Runtime_Heap_End_Address
Runtime_Stack_Size			EQU	512
Runtime_Stack_End_Address	EQU	(Runtime_Stack_Start_Address + Runtime_Stack_Size)

;主栈的起始地址、大小和结束地址
Main_Stack_Start_Address	EQU	Runtime_Stack_End_Address
Main_Stack_Size				EQU	512
Main_Stack_End_Address		EQU	(Main_Stack_Start_Address + Main_Stack_Size)

;栈模式
Main_Stack_Mode				EQU	0
Process_Stack_Mode			EQU	2

;应用程序接口功能
API_Initialize_Task			EQU	0
API_Create_Task				EQU	1
API_Yield_Task				EQU	2
API_Suspend_Task			EQU	3
API_Wake_Task				EQU	4
API_Delete_Task				EQU	5
API_Receive_Message			EQU	6
API_Transmit_Message		EQU	7
API_Down_Semaphore			EQU	8
API_Up_Semaphore			EQU	9

	;起点
	AREA	Origin, CODE, READONLY

;主栈指针和异常向量
	DCD		Main_Stack_End_Address
	DCD		Reset_Exception_Handle
	DCD		0
	DCD		Hard_Fault_Exception_Handle
	DCD		0
	DCD		0
	DCD		0
	DCD		0
	DCD		0
	DCD		0
	DCD		0
	DCD		Supervisor_Call_Exception_Handle
	DCD		0
	DCD		0
	DCD		Pend_Supervisor_Exception_Handle
	DCD		System_Timer_Interrupt_Handle
	DCD		Wake_0_Interrupt_Handle
	DCD		Wake_1_Interrupt_Handle
	DCD		Wake_2_Interrupt_Handle
	DCD		Wake_3_Interrupt_Handle
	DCD		Wake_4_Interrupt_Handle
	DCD		Wake_5_Interrupt_Handle
	DCD		Wake_6_Interrupt_Handle
	DCD		Wake_7_Interrupt_Handle
	DCD		Wake_8_Interrupt_Handle
	DCD		Wake_9_Interrupt_Handle
	DCD		Wake_10_Interrupt_Handle
	DCD		Wake_11_Interrupt_Handle
	DCD		Wake_12_Interrupt_Handle
	DCD		0
	DCD		SPI_0_Interrupt_Handle
	DCD		IIC_Interrupt_Handle
	DCD		Counter_Timer_16_Bit_0_Interrupt_Handle
	DCD		Counter_Timer_16_Bit_1_Interrupt_Handle
	DCD		Counter_Timer_32_Bit_0_Interrupt_Handle
	DCD		Counter_Timer_32_Bit_1_Interrupt_Handle
	DCD		SPI_1_Interrupt_Handle
	DCD		UART_Interrupt_Handle
	DCD		0
	DCD		0
	DCD		ADC_Interrupt_Handle
	DCD		Watchdog_Timer_Interrupt_Handle
	DCD		Brown_Out_Detect_Interrupt_Handle
	DCD		0
	DCD		GPIO_3_Interrupt_Handle
	DCD		GPIO_2_Interrupt_Handle
	DCD		GPIO_1_Interrupt_Handle
	DCD		GPIO_0_Interrupt_Handle

;应用程序接口名称指针
API_Name_Pointer
	DCD		API_Delete_Task

;应用程序接口参数指针
API_Parameter_Pointer
	DCD		0
	DCD		0
	DCD		0

;复位异常处理
	EXPORT	Reset_Exception_Handle
Reset_Exception_Handle
	;此时已经自动进入线程模式并且使用主栈，设置进程栈的栈顶地址并且使用进程栈
	LDR		R0, =Runtime_Stack_End_Address
	MSR		PSP, R0
	ISB
	MRS		R0, Control
	LDR		R1, =Process_Stack_Mode
	ORRS	R0, R0, R1
	MSR		Control, R0
	ISB

	;初始化运行时库，调用主函数
	IMPORT	__main
	BL		__main

;硬故障异常处理
Hard_Fault_Exception_Handle
	MOV		R0, R14
	PUSH	{R0}
	BL		Exception_Handle_Early_Operation
	IMPORT	Hard_Fault_Exception_Handle_Middle_Operation
	BL		Hard_Fault_Exception_Handle_Middle_Operation
	BL		Exception_Handle_Late_Operation
	POP		{R0}
	MOV		R14, R0
	BX		R14

;管理调用异常处理
Supervisor_Call_Exception_Handle
	MOV		R0, R14
	PUSH	{R0}
	BL		Exception_Handle_Early_Operation
	IMPORT	Supervisor_Call_Exception_Handle_Middle_Operation
	BL		Supervisor_Call_Exception_Handle_Middle_Operation
	BL		Exception_Handle_Late_Operation
	POP		{R0}
	MOV		R14, R0
	BX		R14

;等待管理异常处理
Pend_Supervisor_Exception_Handle
	MOV		R0, R14
	PUSH	{R0}
	BL		Exception_Handle_Early_Operation
	IMPORT	Pend_Supervisor_Exception_Handle_Middle_Operation
	BL		Pend_Supervisor_Exception_Handle_Middle_Operation
	BL		Exception_Handle_Late_Operation
	POP		{R0}
	MOV		R14, R0
	BX		R14

;系统定时器中断处理
System_Timer_Interrupt_Handle
	MOV		R0, R14
	PUSH	{R0}
	BL		Exception_Handle_Early_Operation
	IMPORT	System_Timer_Interrupt_Handle_Middle_Operation
	BL		System_Timer_Interrupt_Handle_Middle_Operation
	BL		Exception_Handle_Late_Operation
	POP		{R0}
	MOV		R14, R0
	BX		R14

;唤醒0中断处理
Wake_0_Interrupt_Handle
	MOV		R0, R14
	PUSH	{R0}
	BL		Exception_Handle_Early_Operation
	IMPORT	Wake_0_Interrupt_Handle_Middle_Operation
	BL		Wake_0_Interrupt_Handle_Middle_Operation
	BL		Exception_Handle_Late_Operation
	POP		{R0}
	MOV		R14, R0
	BX		R14

;唤醒1中断处理
Wake_1_Interrupt_Handle
	MOV		R0, R14
	PUSH	{R0}
	BL		Exception_Handle_Early_Operation
	IMPORT	Wake_1_Interrupt_Handle_Middle_Operation
	BL		Wake_1_Interrupt_Handle_Middle_Operation
	BL		Exception_Handle_Late_Operation
	POP		{R0}
	MOV		R14, R0
	BX		R14

;唤醒2中断处理
Wake_2_Interrupt_Handle
	MOV		R0, R14
	PUSH	{R0}
	BL		Exception_Handle_Early_Operation
	IMPORT	Wake_2_Interrupt_Handle_Middle_Operation
	BL		Wake_2_Interrupt_Handle_Middle_Operation
	BL		Exception_Handle_Late_Operation
	POP		{R0}
	MOV		R14, R0
	BX		R14

;唤醒3中断处理
Wake_3_Interrupt_Handle
	MOV		R0, R14
	PUSH	{R0}
	BL		Exception_Handle_Early_Operation
	IMPORT	Wake_3_Interrupt_Handle_Middle_Operation
	BL		Wake_3_Interrupt_Handle_Middle_Operation
	BL		Exception_Handle_Late_Operation
	POP		{R0}
	MOV		R14, R0
	BX		R14

;唤醒4中断处理
Wake_4_Interrupt_Handle
	MOV		R0, R14
	PUSH	{R0}
	BL		Exception_Handle_Early_Operation
	IMPORT	Wake_4_Interrupt_Handle_Middle_Operation
	BL		Wake_4_Interrupt_Handle_Middle_Operation
	BL		Exception_Handle_Late_Operation
	POP		{R0}
	MOV		R14, R0
	BX		R14

;唤醒5中断处理
Wake_5_Interrupt_Handle
	MOV		R0, R14
	PUSH	{R0}
	BL		Exception_Handle_Early_Operation
	IMPORT	Wake_5_Interrupt_Handle_Middle_Operation
	BL		Wake_5_Interrupt_Handle_Middle_Operation
	BL		Exception_Handle_Late_Operation
	POP		{R0}
	MOV		R14, R0
	BX		R14

;唤醒6中断处理
Wake_6_Interrupt_Handle
	MOV		R0, R14
	PUSH	{R0}
	BL		Exception_Handle_Early_Operation
	IMPORT	Wake_6_Interrupt_Handle_Middle_Operation
	BL		Wake_6_Interrupt_Handle_Middle_Operation
	BL		Exception_Handle_Late_Operation
	POP		{R0}
	MOV		R14, R0
	BX		R14

;唤醒7中断处理
Wake_7_Interrupt_Handle
	MOV		R0, R14
	PUSH	{R0}
	BL		Exception_Handle_Early_Operation
	IMPORT	Wake_7_Interrupt_Handle_Middle_Operation
	BL		Wake_7_Interrupt_Handle_Middle_Operation
	BL		Exception_Handle_Late_Operation
	POP		{R0}
	MOV		R14, R0
	BX		R14

;唤醒8中断处理
Wake_8_Interrupt_Handle
	MOV		R0, R14
	PUSH	{R0}
	BL		Exception_Handle_Early_Operation
	IMPORT	Wake_8_Interrupt_Handle_Middle_Operation
	BL		Wake_8_Interrupt_Handle_Middle_Operation
	BL		Exception_Handle_Late_Operation
	POP		{R0}
	MOV		R14, R0
	BX		R14

;唤醒9中断处理
Wake_9_Interrupt_Handle
	MOV		R0, R14
	PUSH	{R0}
	BL		Exception_Handle_Early_Operation
	IMPORT	Wake_9_Interrupt_Handle_Middle_Operation
	BL		Wake_9_Interrupt_Handle_Middle_Operation
	BL		Exception_Handle_Late_Operation
	POP		{R0}
	MOV		R14, R0
	BX		R14

;唤醒10中断处理
Wake_10_Interrupt_Handle
	MOV		R0, R14
	PUSH	{R0}
	BL		Exception_Handle_Early_Operation
	IMPORT	Wake_10_Interrupt_Handle_Middle_Operation
	BL		Wake_10_Interrupt_Handle_Middle_Operation
	BL		Exception_Handle_Late_Operation
	POP		{R0}
	MOV		R14, R0
	BX		R14

;唤醒11中断处理
Wake_11_Interrupt_Handle
	MOV		R0, R14
	PUSH	{R0}
	BL		Exception_Handle_Early_Operation
	IMPORT	Wake_11_Interrupt_Handle_Middle_Operation
	BL		Wake_11_Interrupt_Handle_Middle_Operation
	BL		Exception_Handle_Late_Operation
	POP		{R0}
	MOV		R14, R0
	BX		R14

;唤醒12中断处理
Wake_12_Interrupt_Handle
	MOV		R0, R14
	PUSH	{R0}
	BL		Exception_Handle_Early_Operation
	IMPORT	Wake_12_Interrupt_Handle_Middle_Operation
	BL		Wake_12_Interrupt_Handle_Middle_Operation
	BL		Exception_Handle_Late_Operation
	POP		{R0}
	MOV		R14, R0
	BX		R14

;SPI0中断处理
SPI_0_Interrupt_Handle
	MOV		R0, R14
	PUSH	{R0}
	BL		Exception_Handle_Early_Operation
	IMPORT	SPI_0_Interrupt_Handle_Middle_Operation
	BL		SPI_0_Interrupt_Handle_Middle_Operation
	BL		Exception_Handle_Late_Operation
	POP		{R0}
	MOV		R14, R0
	BX		R14

;IIC中断处理
IIC_Interrupt_Handle
	MOV		R0, R14
	PUSH	{R0}
	BL		Exception_Handle_Early_Operation
	IMPORT	IIC_Interrupt_Handle_Middle_Operation
	BL		IIC_Interrupt_Handle_Middle_Operation
	BL		Exception_Handle_Late_Operation
	POP		{R0}
	MOV		R14, R0
	BX		R14

;16位计数器定时器0中断处理
Counter_Timer_16_Bit_0_Interrupt_Handle
	MOV		R0, R14
	PUSH	{R0}
	BL		Exception_Handle_Early_Operation
	IMPORT	Counter_Timer_16_Bit_0_Interrupt_Handle_Middle_Operation
	BL		Counter_Timer_16_Bit_0_Interrupt_Handle_Middle_Operation
	BL		Exception_Handle_Late_Operation
	POP		{R0}
	MOV		R14, R0
	BX		R14

;16位计数器定时器1中断处理
Counter_Timer_16_Bit_1_Interrupt_Handle
	MOV		R0, R14
	PUSH	{R0}
	BL		Exception_Handle_Early_Operation
	IMPORT	Counter_Timer_16_Bit_1_Interrupt_Handle_Middle_Operation
	BL		Counter_Timer_16_Bit_1_Interrupt_Handle_Middle_Operation
	BL		Exception_Handle_Late_Operation
	POP		{R0}
	MOV		R14, R0
	BX		R14

;32位计数器定时器0中断处理
Counter_Timer_32_Bit_0_Interrupt_Handle
	MOV		R0, R14
	PUSH	{R0}
	BL		Exception_Handle_Early_Operation
	IMPORT	Counter_Timer_32_Bit_0_Interrupt_Handle_Middle_Operation
	BL		Counter_Timer_32_Bit_0_Interrupt_Handle_Middle_Operation
	BL		Exception_Handle_Late_Operation
	POP		{R0}
	MOV		R14, R0
	BX		R14

;32位计数器定时器1中断处理
Counter_Timer_32_Bit_1_Interrupt_Handle
	MOV		R0, R14
	PUSH	{R0}
	BL		Exception_Handle_Early_Operation
	IMPORT	Counter_Timer_32_Bit_1_Interrupt_Handle_Middle_Operation
	BL		Counter_Timer_32_Bit_1_Interrupt_Handle_Middle_Operation
	BL		Exception_Handle_Late_Operation
	POP		{R0}
	MOV		R14, R0
	BX		R14

;SPI1中断处理
SPI_1_Interrupt_Handle
	MOV		R0, R14
	PUSH	{R0}
	BL		Exception_Handle_Early_Operation
	IMPORT	SPI_1_Interrupt_Handle_Middle_Operation
	BL		SPI_1_Interrupt_Handle_Middle_Operation
	BL		Exception_Handle_Late_Operation
	POP		{R0}
	MOV		R14, R0
	BX		R14

;UART中断处理
UART_Interrupt_Handle
	MOV		R0, R14
	PUSH	{R0}
	BL		Exception_Handle_Early_Operation
	IMPORT	UART_Interrupt_Handle_Middle_Operation
	BL		UART_Interrupt_Handle_Middle_Operation
	BL		Exception_Handle_Late_Operation
	POP		{R0}
	MOV		R14, R0
	BX		R14

;ADC中断处理
ADC_Interrupt_Handle
	MOV		R0, R14
	PUSH	{R0}
	BL		Exception_Handle_Early_Operation
	IMPORT	ADC_Interrupt_Handle_Middle_Operation
	BL		ADC_Interrupt_Handle_Middle_Operation
	BL		Exception_Handle_Late_Operation
	POP		{R0}
	MOV		R14, R0
	BX		R14

;监察定时器中断处理
Watchdog_Timer_Interrupt_Handle
	MOV		R0, R14
	PUSH	{R0}
	BL		Exception_Handle_Early_Operation
	IMPORT	Watchdog_Timer_Interrupt_Handle_Middle_Operation
	BL		Watchdog_Timer_Interrupt_Handle_Middle_Operation
	BL		Exception_Handle_Late_Operation
	POP		{R0}
	MOV		R14, R0
	BX		R14

;欠压检测中断处理
Brown_Out_Detect_Interrupt_Handle
	MOV		R0, R14
	PUSH	{R0}
	BL		Exception_Handle_Early_Operation
	IMPORT	Brown_Out_Detect_Interrupt_Handle_Middle_Operation
	BL		Brown_Out_Detect_Interrupt_Handle_Middle_Operation
	BL		Exception_Handle_Late_Operation
	POP		{R0}
	MOV		R14, R0
	BX		R14

;GPIO3中断处理
GPIO_3_Interrupt_Handle
	MOV		R0, R14
	PUSH	{R0}
	BL		Exception_Handle_Early_Operation
	IMPORT	GPIO_3_Interrupt_Handle_Middle_Operation
	BL		GPIO_3_Interrupt_Handle_Middle_Operation
	BL		Exception_Handle_Late_Operation
	POP		{R0}
	MOV		R14, R0
	BX		R14

;GPIO2中断处理
GPIO_2_Interrupt_Handle
	MOV		R0, R14
	PUSH	{R0}
	BL		Exception_Handle_Early_Operation
	IMPORT	GPIO_2_Interrupt_Handle_Middle_Operation
	BL		GPIO_2_Interrupt_Handle_Middle_Operation
	BL		Exception_Handle_Late_Operation
	POP		{R0}
	MOV		R14, R0
	BX		R14

;GPIO1中断处理
GPIO_1_Interrupt_Handle
	MOV		R0, R14
	PUSH	{R0}
	BL		Exception_Handle_Early_Operation
	IMPORT	GPIO_1_Interrupt_Handle_Middle_Operation
	BL		GPIO_1_Interrupt_Handle_Middle_Operation
	BL		Exception_Handle_Late_Operation
	POP		{R0}
	MOV		R14, R0
	BX		R14

;GPIO0中断处理
GPIO_0_Interrupt_Handle
	MOV		R0, R14
	PUSH	{R0}
	BL		Exception_Handle_Early_Operation
	IMPORT	GPIO_0_Interrupt_Handle_Middle_Operation
	BL		GPIO_0_Interrupt_Handle_Middle_Operation
	BL		Exception_Handle_Late_Operation
	POP		{R0}
	MOV		R14, R0
	BX		R14

;异常处理的前期操作
Exception_Handle_Early_Operation
	;保存环境，传递参数
	MOV		R3, R11
	MOV		R2, R10
	MOV		R1, R9
	MOV		R0, R8
	PUSH	{R0 - R3}
	MOV		R3, R7
	MOV		R2, R6
	MOV		R1, R5
	MOV		R0, R4
	PUSH	{R0 - R3}
	MRS		R0, PSP
	PUSH	{R0}
	MRS		R1, MSP
	BX		R14

;异常处理的后期操作
Exception_Handle_Late_Operation
	;恢复环境
	POP		{R0}
	MSR		PSP, R0
	ISB
	POP		{R0 - R3}
	MOV		R4, R0
	MOV		R5, R1
	MOV		R6, R2
	MOV		R7, R3
	POP		{R0 - R3}
	MOV		R8, R0
	MOV		R9, R1
	MOV		R10, R2
	MOV		R11, R3
	BX		R14

;关闭中断
	EXPORT	Disable_Interrupt
Disable_Interrupt
	CPSID	I
	BX		R14

;打开中断
	EXPORT	Enable_Interrupt
Enable_Interrupt
	CPSIE	I
	BX		R14

;等待中断
	EXPORT	Wait_Interrupt
Wait_Interrupt
	WFI
	BX		R14

;测试和加锁
	EXPORT	Test_Set_Lock
Test_Set_Lock
	CPSID	I
	LDRB	R1, [R0]
	MOVS	R2, #1
	STRB	R2, [R0]
	MOV		R0, R1
	CPSIE	I
	BX		R14

;调用应用程序接口
	EXPORT	Call_API
Call_API
	SVC		#0
	BX		R14

;包装任务
	EXPORT	Wrap_Task
Wrap_Task
	BLX		R0
	LDR		R0, =API_Name_Pointer
	LDR		R1, =API_Parameter_Pointer
	B		Call_API

	;结束
	END
