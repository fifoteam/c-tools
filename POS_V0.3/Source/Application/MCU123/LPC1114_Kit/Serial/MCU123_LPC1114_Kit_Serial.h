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

#ifndef	MCU123_LPC1114_KIT_SERIAL_H
#define	MCU123_LPC1114_KIT_SERIAL_H

#include	"MCU123_LPC1114_Kit_UART.h"
#include	"MCU123_LPC1114_Kit_Core.h"

/* 数据类型 */

/* 串口任务栈容量 */
typedef	enum	Tag_Serial_Task_Stack_Capacity
{
	Serial_Task_Stack_Capacity = 32
}
	Enumeration_Serial_Task_Stack_Capacity;

/* 数据声明 */

/* 串口任务索引 */
extern Integer_Unsigned_8_Bit	Serial_Task_Index;

/* 串口任务栈 */
extern Integer_Unsigned_32_Bit	Serial_Task_Stack[];

/* 函数声明 */

/*
	功能：串口任务
	参数：无
	返回：无
*/
void	Serial_Task(void);

#endif
