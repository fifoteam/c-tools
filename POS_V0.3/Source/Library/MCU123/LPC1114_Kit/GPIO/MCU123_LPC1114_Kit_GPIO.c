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

#include	"MCU123_LPC1114_Kit_GPIO.h"

/* 函数定义 */

/*
	功能：初始化
	参数：无
	返回：无
*/
void	GPIO_Library_Initialize(void)
{
	Union_GPIO_0_Data_Direction_Register	GPIO_0_Data_Direction_Register;
	Union_GPIO_0_Data_Register				GPIO_0_Data_Register;
	Union_GPIO_1_Data_Direction_Register	GPIO_1_Data_Direction_Register;
	Union_GPIO_1_Data_Register				GPIO_1_Data_Register;
	Union_GPIO_2_Data_Direction_Register	GPIO_2_Data_Direction_Register;
	Union_GPIO_2_Data_Register				GPIO_2_Data_Register;
	Union_GPIO_3_Data_Direction_Register	GPIO_3_Data_Direction_Register;
	Union_GPIO_3_Data_Register				GPIO_3_Data_Register;
	
	/* 关闭中断 */
	Core_Library_Disable_Interrupt();
	
	/* 设置GPIO端口0数据方向 */
	GPIO_0_Data_Direction_Register.Value = Read_GPIO_0_Data_Direction_Register();
	GPIO_0_Data_Direction_Register.Internal.Pin_2 = 1;
	GPIO_0_Data_Direction_Register.Internal.Pin_8 = 1;
	Write_GPIO_0_Data_Direction_Register(GPIO_0_Data_Direction_Register.Value);
	
	/* 设置GPIO端口0数据 */
	GPIO_0_Data_Register.Value = Read_GPIO_0_Data_Register();
	GPIO_0_Data_Register.Internal.Pin_2 = 0;
	GPIO_0_Data_Register.Internal.Pin_8 = 0;
	Write_GPIO_0_Data_Register(GPIO_0_Data_Register.Value);
	
	/* 设置GPIO端口1数据方向 */
	GPIO_1_Data_Direction_Register.Value = Read_GPIO_1_Data_Direction_Register();
	GPIO_1_Data_Direction_Register.Internal.Pin_8 = 1;
	GPIO_1_Data_Direction_Register.Internal.Pin_9 = 1;
	Write_GPIO_1_Data_Direction_Register(GPIO_1_Data_Direction_Register.Value);
	
	/* 设置GPIO端口1数据 */
	GPIO_1_Data_Register.Value = Read_GPIO_1_Data_Register();
	GPIO_1_Data_Register.Internal.Pin_8 = 0;
	GPIO_1_Data_Register.Internal.Pin_9 = 0;
	Write_GPIO_1_Data_Register(GPIO_1_Data_Register.Value);
	
	/* 设置GPIO端口2数据方向 */
	GPIO_2_Data_Direction_Register.Value = Read_GPIO_2_Data_Direction_Register();
	GPIO_2_Data_Direction_Register.Internal.Pin_1 = 1;
	GPIO_2_Data_Direction_Register.Internal.Pin_7 = 1;
	GPIO_2_Data_Direction_Register.Internal.Pin_8 = 1;
	Write_GPIO_2_Data_Direction_Register(GPIO_2_Data_Direction_Register.Value);
	
	/* 设置GPIO端口2数据 */
	GPIO_2_Data_Register.Value = Read_GPIO_2_Data_Register();
	GPIO_2_Data_Register.Internal.Pin_1 = 0;
	GPIO_2_Data_Register.Internal.Pin_7 = 0;
	GPIO_2_Data_Register.Internal.Pin_8 = 0;
	Write_GPIO_2_Data_Register(GPIO_2_Data_Register.Value);
	
	/* 设置GPIO端口3数据方向 */
	GPIO_3_Data_Direction_Register.Value = Read_GPIO_3_Data_Direction_Register();
	GPIO_3_Data_Direction_Register.Internal.Pin_4 = 1;
	GPIO_3_Data_Direction_Register.Internal.Pin_5 = 1;
	Write_GPIO_3_Data_Direction_Register(GPIO_3_Data_Direction_Register.Value);
	
	/* 设置GPIO端口3数据 */
	GPIO_3_Data_Register.Value = Read_GPIO_3_Data_Register();
	GPIO_3_Data_Register.Internal.Pin_4 = 0;
	GPIO_3_Data_Register.Internal.Pin_5 = 0;
	Write_GPIO_3_Data_Register(GPIO_3_Data_Register.Value);
	
	/* 打开中断 */
	Core_Library_Enable_Interrupt();
}

/*
	功能：关闭发光二极管1
	参数：无
	返回：无
*/
void	GPIO_Library_Disable_LED_1(void)
{
	Union_GPIO_1_Data_Register	GPIO_1_Data_Register;
	
	/* 关闭中断 */
	Core_Library_Disable_Interrupt();
	
	/* 设置GPIO端口1数据 */
	GPIO_1_Data_Register.Value = Read_GPIO_1_Data_Register();
	GPIO_1_Data_Register.Internal.Pin_8 = 1;
	Write_GPIO_1_Data_Register(GPIO_1_Data_Register.Value);
	
	/* 打开中断 */
	Core_Library_Enable_Interrupt();
}

/*
	功能：打开发光二极管1
	参数：无
	返回：无
*/
void	GPIO_Library_Enable_LED_1(void)
{
	Union_GPIO_1_Data_Register	GPIO_1_Data_Register;
	
	/* 关闭中断 */
	Core_Library_Disable_Interrupt();
	
	/* 设置GPIO端口1数据 */
	GPIO_1_Data_Register.Value = Read_GPIO_1_Data_Register();
	GPIO_1_Data_Register.Internal.Pin_8 = 0;
	Write_GPIO_1_Data_Register(GPIO_1_Data_Register.Value);
	
	/* 打开中断 */
	Core_Library_Enable_Interrupt();
}

/*
	功能：关闭发光二极管2
	参数：无
	返回：无
*/
void	GPIO_Library_Disable_LED_2(void)
{
	Union_GPIO_0_Data_Register	GPIO_0_Data_Register;
	
	/* 关闭中断 */
	Core_Library_Disable_Interrupt();
	
	/* 设置GPIO端口0数据 */
	GPIO_0_Data_Register.Value = Read_GPIO_0_Data_Register();
	GPIO_0_Data_Register.Internal.Pin_2 = 1;
	Write_GPIO_0_Data_Register(GPIO_0_Data_Register.Value);
	
	/* 打开中断 */
	Core_Library_Enable_Interrupt();
}

/*
	功能：打开发光二极管2
	参数：无
	返回：无
*/
void	GPIO_Library_Enable_LED_2(void)
{
	Union_GPIO_0_Data_Register	GPIO_0_Data_Register;
	
	/* 关闭中断 */
	Core_Library_Disable_Interrupt();
	
	/* 设置GPIO端口0数据 */
	GPIO_0_Data_Register.Value = Read_GPIO_0_Data_Register();
	GPIO_0_Data_Register.Internal.Pin_2 = 0;
	Write_GPIO_0_Data_Register(GPIO_0_Data_Register.Value);
	
	/* 打开中断 */
	Core_Library_Enable_Interrupt();
}

/*
	功能：关闭发光二极管3
	参数：无
	返回：无
*/
void	GPIO_Library_Disable_LED_3(void)
{
	Union_GPIO_2_Data_Register	GPIO_2_Data_Register;
	
	/* 关闭中断 */
	Core_Library_Disable_Interrupt();
	
	/* 设置GPIO端口2数据 */
	GPIO_2_Data_Register.Value = Read_GPIO_2_Data_Register();
	GPIO_2_Data_Register.Internal.Pin_7 = 1;
	Write_GPIO_2_Data_Register(GPIO_2_Data_Register.Value);
	
	/* 打开中断 */
	Core_Library_Enable_Interrupt();
}

/*
	功能：打开发光二极管3
	参数：无
	返回：无
*/
void	GPIO_Library_Enable_LED_3(void)
{
	Union_GPIO_2_Data_Register	GPIO_2_Data_Register;
	
	/* 关闭中断 */
	Core_Library_Disable_Interrupt();
	
	/* 设置GPIO端口2数据 */
	GPIO_2_Data_Register.Value = Read_GPIO_2_Data_Register();
	GPIO_2_Data_Register.Internal.Pin_7 = 0;
	Write_GPIO_2_Data_Register(GPIO_2_Data_Register.Value);
	
	/* 打开中断 */
	Core_Library_Enable_Interrupt();
}

/*
	功能：关闭发光二极管4
	参数：无
	返回：无
*/
void	GPIO_Library_Disable_LED_4(void)
{
	Union_GPIO_2_Data_Register	GPIO_2_Data_Register;
	
	/* 关闭中断 */
	Core_Library_Disable_Interrupt();
	
	/* 设置GPIO端口2数据 */
	GPIO_2_Data_Register.Value = Read_GPIO_2_Data_Register();
	GPIO_2_Data_Register.Internal.Pin_8 = 1;
	Write_GPIO_2_Data_Register(GPIO_2_Data_Register.Value);
	
	/* 打开中断 */
	Core_Library_Enable_Interrupt();
}

/*
	功能：打开发光二极管4
	参数：无
	返回：无
*/
void	GPIO_Library_Enable_LED_4(void)
{
	Union_GPIO_2_Data_Register	GPIO_2_Data_Register;
	
	/* 关闭中断 */
	Core_Library_Disable_Interrupt();
	
	/* 设置GPIO端口2数据 */
	GPIO_2_Data_Register.Value = Read_GPIO_2_Data_Register();
	GPIO_2_Data_Register.Internal.Pin_8 = 0;
	Write_GPIO_2_Data_Register(GPIO_2_Data_Register.Value);
	
	/* 打开中断 */
	Core_Library_Enable_Interrupt();
}

/*
	功能：关闭发光二极管5
	参数：无
	返回：无
*/
void	GPIO_Library_Disable_LED_5(void)
{
	Union_GPIO_2_Data_Register	GPIO_2_Data_Register;
	
	/* 关闭中断 */
	Core_Library_Disable_Interrupt();
	
	/* 设置GPIO端口2数据 */
	GPIO_2_Data_Register.Value = Read_GPIO_2_Data_Register();
	GPIO_2_Data_Register.Internal.Pin_1 = 1;
	Write_GPIO_2_Data_Register(GPIO_2_Data_Register.Value);
	
	/* 打开中断 */
	Core_Library_Enable_Interrupt();
}

/*
	功能：打开发光二极管5
	参数：无
	返回：无
*/
void	GPIO_Library_Enable_LED_5(void)
{
	Union_GPIO_2_Data_Register	GPIO_2_Data_Register;
	
	/* 关闭中断 */
	Core_Library_Disable_Interrupt();
	
	/* 设置GPIO端口2数据 */
	GPIO_2_Data_Register.Value = Read_GPIO_2_Data_Register();
	GPIO_2_Data_Register.Internal.Pin_1 = 0;
	Write_GPIO_2_Data_Register(GPIO_2_Data_Register.Value);
	
	/* 打开中断 */
	Core_Library_Enable_Interrupt();
}

/*
	功能：关闭发光二极管6
	参数：无
	返回：无
*/
void	GPIO_Library_Disable_LED_6(void)
{
	Union_GPIO_1_Data_Register	GPIO_1_Data_Register;
	
	/* 关闭中断 */
	Core_Library_Disable_Interrupt();
	
	/* 设置GPIO端口1数据 */
	GPIO_1_Data_Register.Value = Read_GPIO_1_Data_Register();
	GPIO_1_Data_Register.Internal.Pin_9 = 1;
	Write_GPIO_1_Data_Register(GPIO_1_Data_Register.Value);
	
	/* 打开中断 */
	Core_Library_Enable_Interrupt();
}

/*
	功能：打开发光二极管6
	参数：无
	返回：无
*/
void	GPIO_Library_Enable_LED_6(void)
{
	Union_GPIO_1_Data_Register	GPIO_1_Data_Register;
	
	/* 关闭中断 */
	Core_Library_Disable_Interrupt();
	
	/* 设置GPIO端口1数据 */
	GPIO_1_Data_Register.Value = Read_GPIO_1_Data_Register();
	GPIO_1_Data_Register.Internal.Pin_9 = 0;
	Write_GPIO_1_Data_Register(GPIO_1_Data_Register.Value);
	
	/* 打开中断 */
	Core_Library_Enable_Interrupt();
}

/*
	功能：关闭发光二极管7
	参数：无
	返回：无
*/
void	GPIO_Library_Disable_LED_7(void)
{
	Union_GPIO_3_Data_Register	GPIO_3_Data_Register;
	
	/* 关闭中断 */
	Core_Library_Disable_Interrupt();
	
	/* 设置GPIO端口3数据 */
	GPIO_3_Data_Register.Value = Read_GPIO_3_Data_Register();
	GPIO_3_Data_Register.Internal.Pin_4 = 1;
	Write_GPIO_3_Data_Register(GPIO_3_Data_Register.Value);
	
	/* 打开中断 */
	Core_Library_Enable_Interrupt();
}

/*
	功能：打开发光二极管7
	参数：无
	返回：无
*/
void	GPIO_Library_Enable_LED_7(void)
{
	Union_GPIO_3_Data_Register	GPIO_3_Data_Register;
	
	/* 关闭中断 */
	Core_Library_Disable_Interrupt();
	
	/* 设置GPIO端口3数据 */
	GPIO_3_Data_Register.Value = Read_GPIO_3_Data_Register();
	GPIO_3_Data_Register.Internal.Pin_4 = 0;
	Write_GPIO_3_Data_Register(GPIO_3_Data_Register.Value);
	
	/* 打开中断 */
	Core_Library_Enable_Interrupt();
}

/*
	功能：关闭发光二极管8
	参数：无
	返回：无
*/
void	GPIO_Library_Disable_LED_8(void)
{
	Union_GPIO_3_Data_Register	GPIO_3_Data_Register;
	
	/* 关闭中断 */
	Core_Library_Disable_Interrupt();
	
	/* 设置GPIO端口3数据 */
	GPIO_3_Data_Register.Value = Read_GPIO_3_Data_Register();
	GPIO_3_Data_Register.Internal.Pin_5 = 1;
	Write_GPIO_3_Data_Register(GPIO_3_Data_Register.Value);
	
	/* 打开中断 */
	Core_Library_Enable_Interrupt();
}

/*
	功能：打开发光二极管8
	参数：无
	返回：无
*/
void	GPIO_Library_Enable_LED_8(void)
{
	Union_GPIO_3_Data_Register	GPIO_3_Data_Register;
	
	/* 关闭中断 */
	Core_Library_Disable_Interrupt();
	
	/* 设置GPIO端口3数据 */
	GPIO_3_Data_Register.Value = Read_GPIO_3_Data_Register();
	GPIO_3_Data_Register.Internal.Pin_5 = 0;
	Write_GPIO_3_Data_Register(GPIO_3_Data_Register.Value);
	
	/* 打开中断 */
	Core_Library_Enable_Interrupt();
}

/*
	功能：关闭蜂鸣器
	参数：无
	返回：无
*/
void	GPIO_Library_Disable_Buzzer(void)
{
	Union_GPIO_0_Data_Register	GPIO_0_Data_Register;
	
	/* 关闭中断 */
	Core_Library_Disable_Interrupt();
	
	/* 设置GPIO端口0数据 */
	GPIO_0_Data_Register.Value = Read_GPIO_0_Data_Register();
	GPIO_0_Data_Register.Internal.Pin_8 = 0;
	Write_GPIO_0_Data_Register(GPIO_0_Data_Register.Value);
	
	/* 打开中断 */
	Core_Library_Enable_Interrupt();
}

/*
	功能：打开蜂鸣器
	参数：无
	返回：无
*/
void	GPIO_Library_Enable_Buzzer(void)
{
	Union_GPIO_0_Data_Register	GPIO_0_Data_Register;
	
	/* 关闭中断 */
	Core_Library_Disable_Interrupt();
	
	/* 设置GPIO端口0数据 */
	GPIO_0_Data_Register.Value = Read_GPIO_0_Data_Register();
	GPIO_0_Data_Register.Internal.Pin_8 = 1;
	Write_GPIO_0_Data_Register(GPIO_0_Data_Register.Value);
	
	/* 打开中断 */
	Core_Library_Enable_Interrupt();
}
