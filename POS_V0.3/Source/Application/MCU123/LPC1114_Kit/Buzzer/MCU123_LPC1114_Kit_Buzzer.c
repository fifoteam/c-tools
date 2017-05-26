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

#include	"MCU123_LPC1114_Kit_Buzzer.h"

/* 数据定义 */

/* 蜂鸣器任务索引 */
Integer_Unsigned_8_Bit	Buzzer_Task_Index;

/* 蜂鸣器任务栈 */
Integer_Unsigned_32_Bit	Buzzer_Task_Stack[Buzzer_Task_Stack_Capacity];

/* 蜂鸣器任务消息 */
Structure_Message	Buzzer_Task_Message;

/* 蜂鸣器声音标志 */
Integer_Unsigned_8_Bit	Buzzer_Sound_Flag;

/* 函数定义 */

/*
	功能：蜂鸣器任务
	参数：无
	返回：无
*/
void	Buzzer_Task(void)
{
	/* 循环处理 */
	Buzzer_Sound_Flag = 0;
	while (1)
	{
		/* 接收和判断消息 */
		Core_Library_Receive_Message(&Buzzer_Task_Message);
		if (Buzzer_Task_Message.Command_Index == 0)
		{
			/* 修改蜂鸣器声音标志，控制蜂鸣器 */
			if (Buzzer_Sound_Flag == 0)
			{
				Buzzer_Sound_Flag = 1;
				GPIO_Library_Enable_Buzzer();
			}
			else
			{
				Buzzer_Sound_Flag = 0;
				GPIO_Library_Disable_Buzzer();
			}
		}
		else
		{
			/* 忽略 */
		}
	}
}
