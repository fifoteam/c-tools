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

#ifndef	MCU123_LPC1114_KIT_IIC_H
#define	MCU123_LPC1114_KIT_IIC_H

#include	"NXP_LPC1114_302_IIC.h"

/* 函数声明 */

/*
	功能：初始化
	参数：无
	返回：无
*/
void	IIC_Library_Initialize(void);

/*
	功能：打开接口
	参数：无
	返回：无
*/
void	IIC_Library_Enable_Interface(void);

/*
	功能：关闭接口
	参数：无
	返回：无
*/
void	IIC_Library_Disable_Interface(void);

/*
	功能：进入主接收器模式
	参数：Integer_Unsigned_8_Bit Device_Address，设备地址
		  Integer_Unsigned_8_Bit *Data_Pointer，数据指针
		  Integer_Unsigned_32_Bit Data_Count，数据数量
	返回：无
*/
void	IIC_Library_Enter_Master_Receiver_Mode(Integer_Unsigned_8_Bit Device_Address, Integer_Unsigned_8_Bit *Data_Pointer, Integer_Unsigned_32_Bit Data_Count);

/*
	功能：进入主发送器模式
	参数：Integer_Unsigned_8_Bit Device_Address，设备地址
		  Integer_Unsigned_8_Bit *Data_Pointer，数据指针
		  Integer_Unsigned_32_Bit Data_Count，数据数量
	返回：无
*/
void	IIC_Library_Enter_Master_Transmitter_Mode(Integer_Unsigned_8_Bit Device_Address, Integer_Unsigned_8_Bit *Data_Pointer, Integer_Unsigned_32_Bit Data_Count);

/*
	功能：离开主模式
	参数：无
	返回：无
*/
void	IIC_Library_Leave_Master_Mode(void);

/*
	功能：清除中断
	参数：无
	返回：无
*/
void	IIC_Library_Clear_Interrupt(void);

#endif
