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

#include	"MCU123_LPC1114_Kit_Idle.h"

/* 数据定义 */

/* 空闲任务索引 */
Integer_Unsigned_8_Bit	Idle_Task_Index;

/* 空闲任务栈 */
Integer_Unsigned_32_Bit	Idle_Task_Stack[Idle_Task_Stack_Capacity];

/* 函数定义 */

/*
	功能：空闲任务
	参数：无
	返回：无
*/
void	Idle_Task(void)
{
	/* 循环处理 */
	while (1)
	{
		/* 等待中断 */
		Core_Library_Wait_Interrupt();
	}
}
