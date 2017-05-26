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

#include	"MCU123_LPC1114_Kit_Resistor.h"

/* 数据定义 */

/* 电阻器任务索引 */
Integer_Unsigned_8_Bit	Resistor_Task_Index;

/* 电阻器任务栈 */
Integer_Unsigned_32_Bit	Resistor_Task_Stack[Resistor_Task_Stack_Capacity];

/* 电阻器转换延迟时间，单位：毫秒 */
const Integer_Unsigned_32_Bit	Resistor_Conversion_Delay_Time = 1;

/* 电阻器任务间隔时间，单位：毫秒 */
const Integer_Unsigned_32_Bit	Resistor_Task_Interval_Time = 3000;

/* 电阻器转换值 */
Integer_Unsigned_16_Bit	Resistor_Conversion_Value;

/* 函数定义 */

/*
	功能：电阻器任务
	参数：无
	返回：无
*/
void	Resistor_Task(void)
{
	/* 循环处理 */
	while (1)
	{
		/* 模数转换 */
		ADC_Library_Start_Conversion();
		Core_Library_Suspend_Task(Resistor_Conversion_Delay_Time);
		Resistor_Conversion_Value = ADC_Library_Get_Conversion_Value();
		
		/* 挂起任务 */
		Core_Library_Suspend_Task(Resistor_Task_Interval_Time);
	}
}
