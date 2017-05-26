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

#ifndef	MCU123_LPC1114_KIT_MAIN_H
#define	MCU123_LPC1114_KIT_MAIN_H

/* 库 */
#include	"MCU123_LPC1114_Kit_Core.h"
#include	"MCU123_LPC1114_Kit_GPIO.h"
#include	"MCU123_LPC1114_Kit_Counter_Timer_16_Bit.h"
#include	"MCU123_LPC1114_Kit_UART.h"
#include	"MCU123_LPC1114_Kit_IIC.h"
#include	"MCU123_LPC1114_Kit_ADC.h"

/* 任务 */
#include	"MCU123_LPC1114_Kit_Idle.h"
#include	"MCU123_LPC1114_Kit_LED.h"
#include	"MCU123_LPC1114_Kit_Buzzer.h"
#include	"MCU123_LPC1114_Kit_Serial.h"
#include	"MCU123_LPC1114_Kit_Temperature_EEPROM.h"
#include	"MCU123_LPC1114_Kit_Resistor.h"

/* 函数声明 */

/*
	功能：建立运行环境
	参数：无
	返回：Integer_Signed_32_Bit，操作结果，0表示正确，其它数值表示错误
*/
Integer_Signed_32_Bit	main(void);

#endif
