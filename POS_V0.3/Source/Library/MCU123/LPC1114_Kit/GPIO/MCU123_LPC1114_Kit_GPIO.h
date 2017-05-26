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

#ifndef	MCU123_LPC1114_KIT_GPIO_H
#define	MCU123_LPC1114_KIT_GPIO_H

#include	"NXP_LPC1114_302_GPIO.h"
#include	"MCU123_LPC1114_Kit_Core.h"

/* 函数声明 */

/*
	功能：初始化
	参数：无
	返回：无
*/
void	GPIO_Library_Initialize(void);

/*
	功能：关闭发光二极管1
	参数：无
	返回：无
*/
void	GPIO_Library_Disable_LED_1(void);

/*
	功能：打开发光二极管1
	参数：无
	返回：无
*/
void	GPIO_Library_Enable_LED_1(void);

/*
	功能：关闭发光二极管2
	参数：无
	返回：无
*/
void	GPIO_Library_Disable_LED_2(void);

/*
	功能：打开发光二极管2
	参数：无
	返回：无
*/
void	GPIO_Library_Enable_LED_2(void);

/*
	功能：关闭发光二极管3
	参数：无
	返回：无
*/
void	GPIO_Library_Disable_LED_3(void);

/*
	功能：打开发光二极管3
	参数：无
	返回：无
*/
void	GPIO_Library_Enable_LED_3(void);

/*
	功能：关闭发光二极管4
	参数：无
	返回：无
*/
void	GPIO_Library_Disable_LED_4(void);

/*
	功能：打开发光二极管4
	参数：无
	返回：无
*/
void	GPIO_Library_Enable_LED_4(void);

/*
	功能：关闭发光二极管5
	参数：无
	返回：无
*/
void	GPIO_Library_Disable_LED_5(void);

/*
	功能：打开发光二极管5
	参数：无
	返回：无
*/
void	GPIO_Library_Enable_LED_5(void);

/*
	功能：关闭发光二极管6
	参数：无
	返回：无
*/
void	GPIO_Library_Disable_LED_6(void);

/*
	功能：打开发光二极管6
	参数：无
	返回：无
*/
void	GPIO_Library_Enable_LED_6(void);

/*
	功能：关闭发光二极管7
	参数：无
	返回：无
*/
void	GPIO_Library_Disable_LED_7(void);

/*
	功能：打开发光二极管7
	参数：无
	返回：无
*/
void	GPIO_Library_Enable_LED_7(void);

/*
	功能：关闭发光二极管8
	参数：无
	返回：无
*/
void	GPIO_Library_Disable_LED_8(void);

/*
	功能：打开发光二极管8
	参数：无
	返回：无
*/
void	GPIO_Library_Enable_LED_8(void);

/*
	功能：关闭蜂鸣器
	参数：无
	返回：无
*/
void	GPIO_Library_Disable_Buzzer(void);

/*
	功能：打开蜂鸣器
	参数：无
	返回：无
*/
void	GPIO_Library_Enable_Buzzer(void);

#endif
