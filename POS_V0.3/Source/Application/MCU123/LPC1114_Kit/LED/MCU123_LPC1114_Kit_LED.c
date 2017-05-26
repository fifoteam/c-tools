/*
	��Ȩ��2012 - 2014  ���wubin_pos@163.com��
	
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

/* ���ݶ��� */

/* LED�������� */
Integer_Unsigned_8_Bit	LED_Task_Index;

/* LED����ջ */
Integer_Unsigned_32_Bit	LED_Task_Stack[LED_Task_Stack_Capacity];

/* LED������ʱ�䣬��λ������ */
const Integer_Unsigned_32_Bit	LED_Task_Interval_Time = 100;

/* �������� */

/*
	���ܣ�LED����
	��������
	���أ���
*/
void	LED_Task(void)
{
	/* �رշ�������� */
	GPIO_Library_Disable_LED_1();
	GPIO_Library_Disable_LED_2();
	GPIO_Library_Disable_LED_3();
	GPIO_Library_Disable_LED_4();
	GPIO_Library_Disable_LED_5();
	GPIO_Library_Disable_LED_6();
	GPIO_Library_Disable_LED_7();
	GPIO_Library_Disable_LED_8();
	
	/* ѭ������ */
	while (1)
	{
		/* �򿪷��������1���ӳ٣��رշ��������1 */
		GPIO_Library_Enable_LED_1();
		Core_Library_Suspend_Task(LED_Task_Interval_Time);
		GPIO_Library_Disable_LED_1();
		
		/* �򿪷��������2���ӳ٣��رշ��������2 */
		GPIO_Library_Enable_LED_2();
		Core_Library_Suspend_Task(LED_Task_Interval_Time);
		GPIO_Library_Disable_LED_2();
		
		/* �򿪷��������3���ӳ٣��رշ��������3 */
		GPIO_Library_Enable_LED_3();
		Core_Library_Suspend_Task(LED_Task_Interval_Time);
		GPIO_Library_Disable_LED_3();
		
		/* �򿪷��������4���ӳ٣��رշ��������4 */
		GPIO_Library_Enable_LED_4();
		Core_Library_Suspend_Task(LED_Task_Interval_Time);
		GPIO_Library_Disable_LED_4();
		
		/* �򿪷��������5���ӳ٣��رշ��������5 */
		GPIO_Library_Enable_LED_5();
		Core_Library_Suspend_Task(LED_Task_Interval_Time);
		GPIO_Library_Disable_LED_5();
		
		/* �򿪷��������6���ӳ٣��رշ��������6 */
		GPIO_Library_Enable_LED_6();
		Core_Library_Suspend_Task(LED_Task_Interval_Time);
		GPIO_Library_Disable_LED_6();
		
		/* �򿪷��������7���ӳ٣��رշ��������7 */
		GPIO_Library_Enable_LED_7();
		Core_Library_Suspend_Task(LED_Task_Interval_Time);
		GPIO_Library_Disable_LED_7();
		
		/* �򿪷��������8���ӳ٣��رշ��������8 */
		GPIO_Library_Enable_LED_8();
		Core_Library_Suspend_Task(LED_Task_Interval_Time);
		GPIO_Library_Disable_LED_8();
	}
}
