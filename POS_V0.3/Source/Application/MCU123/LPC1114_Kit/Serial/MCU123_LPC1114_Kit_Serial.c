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

#include	"MCU123_LPC1114_Kit_Serial.h"

/* 数据定义 */

/* 串口任务索引 */
Integer_Unsigned_8_Bit	Serial_Task_Index;

/* 串口任务栈 */
Integer_Unsigned_32_Bit	Serial_Task_Stack[Serial_Task_Stack_Capacity];

/* 串口任务信息 */
const Integer_Unsigned_8_Bit	Serial_Task_Information[] = "Personal Operating System(POS), Email: wubin_pos@163.com\n";

/* 串口任务间隔时间，单位：毫秒 */
const Integer_Unsigned_32_Bit	Serial_Task_Interval_Time = 1000;

/* 函数定义 */

/*
	功能：串口任务
	参数：无
	返回：无
*/
void	Serial_Task(void)
{
	Integer_Unsigned_8_Bit	Data_Index;
	
	/* 循环处理 */
	while (1)
	{
		/* 发送数据 */
		for (Data_Index = 0; Data_Index < sizeof(Serial_Task_Information); Data_Index += 1)
		{
			UART_Library_Transmit_Data(Serial_Task_Information[Data_Index]);
		}
		
		/* 延迟 */
		Core_Library_Suspend_Task(Serial_Task_Interval_Time);
	}
}
