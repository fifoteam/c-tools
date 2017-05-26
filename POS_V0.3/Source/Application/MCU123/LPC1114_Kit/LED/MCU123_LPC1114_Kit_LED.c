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

#include	"MCU123_LPC1114_Kit_LED.h"

/* 数据定义 */

/* LED任务索引 */
Integer_Unsigned_8_Bit	LED_Task_Index;

/* LED任务栈 */
Integer_Unsigned_32_Bit	LED_Task_Stack[LED_Task_Stack_Capacity];

/* LED任务间隔时间，单位：毫秒 */
const Integer_Unsigned_32_Bit	LED_Task_Interval_Time = 100;

/* 函数定义 */

/*
	功能：LED任务
	参数：无
	返回：无
*/
void	LED_Task(void)
{
	/* 关闭发光二极管 */
	GPIO_Library_Disable_LED_1();
	GPIO_Library_Disable_LED_2();
	GPIO_Library_Disable_LED_3();
	GPIO_Library_Disable_LED_4();
	GPIO_Library_Disable_LED_5();
	GPIO_Library_Disable_LED_6();
	GPIO_Library_Disable_LED_7();
	GPIO_Library_Disable_LED_8();
	
	/* 循环处理 */
	while (1)
	{
		/* 打开发光二极管1，延迟，关闭发光二极管1 */
		GPIO_Library_Enable_LED_1();
		Core_Library_Suspend_Task(LED_Task_Interval_Time);
		GPIO_Library_Disable_LED_1();
		
		/* 打开发光二极管2，延迟，关闭发光二极管2 */
		GPIO_Library_Enable_LED_2();
		Core_Library_Suspend_Task(LED_Task_Interval_Time);
		GPIO_Library_Disable_LED_2();
		
		/* 打开发光二极管3，延迟，关闭发光二极管3 */
		GPIO_Library_Enable_LED_3();
		Core_Library_Suspend_Task(LED_Task_Interval_Time);
		GPIO_Library_Disable_LED_3();
		
		/* 打开发光二极管4，延迟，关闭发光二极管4 */
		GPIO_Library_Enable_LED_4();
		Core_Library_Suspend_Task(LED_Task_Interval_Time);
		GPIO_Library_Disable_LED_4();
		
		/* 打开发光二极管5，延迟，关闭发光二极管5 */
		GPIO_Library_Enable_LED_5();
		Core_Library_Suspend_Task(LED_Task_Interval_Time);
		GPIO_Library_Disable_LED_5();
		
		/* 打开发光二极管6，延迟，关闭发光二极管6 */
		GPIO_Library_Enable_LED_6();
		Core_Library_Suspend_Task(LED_Task_Interval_Time);
		GPIO_Library_Disable_LED_6();
		
		/* 打开发光二极管7，延迟，关闭发光二极管7 */
		GPIO_Library_Enable_LED_7();
		Core_Library_Suspend_Task(LED_Task_Interval_Time);
		GPIO_Library_Disable_LED_7();
		
		/* 打开发光二极管8，延迟，关闭发光二极管8 */
		GPIO_Library_Enable_LED_8();
		Core_Library_Suspend_Task(LED_Task_Interval_Time);
		GPIO_Library_Disable_LED_8();
	}
}
