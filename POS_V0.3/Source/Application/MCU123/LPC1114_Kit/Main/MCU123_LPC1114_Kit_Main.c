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

#include	"MCU123_LPC1114_Kit_Main.h"

/* 函数定义 */

/*
	功能：建立运行环境
	参数：无
	返回：Integer_Signed_32_Bit，操作结果，0表示正确，其它数值表示错误
*/
Integer_Signed_32_Bit	main(void)
{
	/* 初始化 */
	Core_Library_Initialize();
	GPIO_Library_Initialize();
	Counter_Timer_16_Bit_Library_Initialize();
	UART_Library_Initialize();
	IIC_Library_Initialize();
	ADC_Library_Initialize();
	
	/* 建立任务 */
	Idle_Task_Index = Core_Library_Create_Task(Idle_Task, Idle_Task_Stack + Idle_Task_Stack_Capacity);
	LED_Task_Index = Core_Library_Create_Task(LED_Task, LED_Task_Stack + LED_Task_Stack_Capacity);
	Buzzer_Task_Index = Core_Library_Create_Task(Buzzer_Task, Buzzer_Task_Stack + Buzzer_Task_Stack_Capacity);
	Serial_Task_Index = Core_Library_Create_Task(Serial_Task, Serial_Task_Stack + Serial_Task_Stack_Capacity);
	Temperature_EEPROM_Task_Index = Core_Library_Create_Task(Temperature_EEPROM_Task, Temperature_EEPROM_Task_Stack + Temperature_EEPROM_Task_Stack_Capacity);
	Resistor_Task_Index = Core_Library_Create_Task(Resistor_Task, Resistor_Task_Stack + Resistor_Task_Stack_Capacity);
	
	/* 设置中断任务索引 */
	IIC_Interrupt_Task_Index = Temperature_EEPROM_Task_Index;
	Counter_Timer_16_Bit_0_Interrupt_Task_Index = Buzzer_Task_Index;
	ADC_Interrupt_Task_Index = Resistor_Task_Index;
	
	/* 设置清除中断函数指针 */
	IIC_Clear_Interrupt_Function_Pointer = IIC_Library_Clear_Interrupt;
	Counter_Timer_16_Bit_0_Clear_Interrupt_Function_Pointer = Counter_Timer_16_Bit_Library_Clear_Counter_Timer_0_Match_0_Interrupt;
	ADC_Clear_Interrupt_Function_Pointer = ADC_Library_Clear_Interrupt;
	
	/* 删除任务 */
	Core_Library_Delete_Task();
	
	return 0;
}
