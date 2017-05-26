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

#include	"NXP_LPC1114_302_System_Configuration.h"

/* 数据定义 */

/* 系统配置的寄存器地址 */
const Integer_Unsigned_32_Bit	System_Configuration_System_Memory_Remap_Register_Address				 = 0x40048000;
const Integer_Unsigned_32_Bit	System_Configuration_Peripheral_Reset_Control_Register_Address			 = 0x40048004;
const Integer_Unsigned_32_Bit	System_Configuration_System_PLL_Control_Register_Address				 = 0x40048008;
const Integer_Unsigned_32_Bit	System_Configuration_System_PLL_Status_Register_Address					 = 0x4004800C;
const Integer_Unsigned_32_Bit	System_Configuration_System_Oscillator_Control_Register_Address			 = 0x40048020;
const Integer_Unsigned_32_Bit	System_Configuration_Watchdog_Oscillator_Control_Register_Address		 = 0x40048024;
const Integer_Unsigned_32_Bit	System_Configuration_IRC_Oscillator_Control_Register_Address			 = 0x40048028;
const Integer_Unsigned_32_Bit	System_Configuration_System_Reset_Status_Register_Address				 = 0x40048030;
const Integer_Unsigned_32_Bit	System_Configuration_System_PLL_Clock_Source_Select_Register_Address	 = 0x40048040;
const Integer_Unsigned_32_Bit	System_Configuration_System_PLL_Clock_Source_Update_Register_Address	 = 0x40048044;
const Integer_Unsigned_32_Bit	System_Configuration_Main_Clock_Source_Select_Register_Address			 = 0x40048070;
const Integer_Unsigned_32_Bit	System_Configuration_Main_Clock_Source_Update_Register_Address			 = 0x40048074;
const Integer_Unsigned_32_Bit	System_Configuration_System_AHB_Clock_Divider_Register_Address			 = 0x40048078;
const Integer_Unsigned_32_Bit	System_Configuration_System_AHB_Clock_Control_Register_Address			 = 0x40048080;
const Integer_Unsigned_32_Bit	System_Configuration_SSP_0_Clock_Divider_Register_Address				 = 0x40048094;
const Integer_Unsigned_32_Bit	System_Configuration_UART_Clock_Divider_Register_Address				 = 0x40048098;
const Integer_Unsigned_32_Bit	System_Configuration_SSP_1_Clock_Divider_Register_Address				 = 0x4004809C;
const Integer_Unsigned_32_Bit	System_Configuration_Watchdog_Timer_Clock_Source_Select_Register_Address = 0x400480D0;
const Integer_Unsigned_32_Bit	System_Configuration_Watchdog_Timer_Clock_Source_Update_Register_Address = 0x400480D4;
const Integer_Unsigned_32_Bit	System_Configuration_Watchdog_Timer_Clock_Divider_Register_Address		 = 0x400480D8;
const Integer_Unsigned_32_Bit	System_Configuration_Clock_Out_Clock_Source_Select_Register_Address		 = 0x400480E0;
const Integer_Unsigned_32_Bit	System_Configuration_Clock_Out_Clock_Source_Update_Register_Address		 = 0x400480E4;
const Integer_Unsigned_32_Bit	System_Configuration_Clock_Out_Clock_Divider_Register_Address			 = 0x400480E8;
const Integer_Unsigned_32_Bit	System_Configuration_GPIO_Reset_Status_Register_0_Address				 = 0x40048100;
const Integer_Unsigned_32_Bit	System_Configuration_GPIO_Reset_Status_Register_1_Address				 = 0x40048104;
const Integer_Unsigned_32_Bit	System_Configuration_Brown_Out_Detect_Control_Register_Address			 = 0x40048150;
const Integer_Unsigned_32_Bit	System_Configuration_System_Timer_Calibration_Register_Address			 = 0x40048154;
const Integer_Unsigned_32_Bit	System_Configuration_Interrupt_Latency_Register_Address					 = 0x40048170;
const Integer_Unsigned_32_Bit	System_Configuration_Start_Logic_Edge_Control_Register_Address			 = 0x40048200;
const Integer_Unsigned_32_Bit	System_Configuration_Start_Logic_Signal_Control_Register_Address		 = 0x40048204;
const Integer_Unsigned_32_Bit	System_Configuration_Start_Logic_Reset_Register_Address					 = 0x40048208;
const Integer_Unsigned_32_Bit	System_Configuration_Start_Logic_Status_Register_Address				 = 0x4004820C;
const Integer_Unsigned_32_Bit	System_Configuration_Deep_Sleep_Configuration_Register_Address			 = 0x40048230;
const Integer_Unsigned_32_Bit	System_Configuration_Wake_Up_Configuration_Register_Address				 = 0x40048234;
const Integer_Unsigned_32_Bit	System_Configuration_Run_Configuration_Register_Address					 = 0x40048238;
const Integer_Unsigned_32_Bit	System_Configuration_Device_ID_Register_Address							 = 0x400483F4;

/* 函数定义 */

/*
	功能：读系统配置的系统存储器重映射寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_System_Memory_Remap_Register(void)
{
	return Read_Register_32_Bit(System_Configuration_System_Memory_Remap_Register_Address);
}

/*
	功能：写系统配置的系统存储器重映射寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_System_Configuration_System_Memory_Remap_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(System_Configuration_System_Memory_Remap_Register_Address, Register_Value);
}

/*
	功能：读系统配置的外设复位控制寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_Peripheral_Reset_Control_Register(void)
{
	return Read_Register_32_Bit(System_Configuration_Peripheral_Reset_Control_Register_Address);
}

/*
	功能：写系统配置的外设复位控制寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_System_Configuration_Peripheral_Reset_Control_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(System_Configuration_Peripheral_Reset_Control_Register_Address, Register_Value);
}

/*
	功能：读系统配置的系统锁相环控制寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_System_PLL_Control_Register(void)
{
	return Read_Register_32_Bit(System_Configuration_System_PLL_Control_Register_Address);
}

/*
	功能：写系统配置的系统锁相环控制寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_System_Configuration_System_PLL_Control_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(System_Configuration_System_PLL_Control_Register_Address, Register_Value);
}

/*
	功能：读系统配置的系统锁相环状态寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_System_PLL_Status_Register(void)
{
	return Read_Register_32_Bit(System_Configuration_System_PLL_Status_Register_Address);
}

/*
	功能：读系统配置的系统振荡器控制寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_System_Oscillator_Control_Register(void)
{
	return Read_Register_32_Bit(System_Configuration_System_Oscillator_Control_Register_Address);
}

/*
	功能：写系统配置的系统振荡器控制寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_System_Configuration_System_Oscillator_Control_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(System_Configuration_System_Oscillator_Control_Register_Address, Register_Value);
}

/*
	功能：读系统配置的监察振荡器控制寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_Watchdog_Oscillator_Control_Register(void)
{
	return Read_Register_32_Bit(System_Configuration_Watchdog_Oscillator_Control_Register_Address);
}

/*
	功能：写系统配置的监察振荡器控制寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_System_Configuration_Watchdog_Oscillator_Control_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(System_Configuration_Watchdog_Oscillator_Control_Register_Address, Register_Value);
}

/*
	功能：读系统配置的内部谐振晶体振荡器控制寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_IRC_Oscillator_Control_Register(void)
{
	return Read_Register_32_Bit(System_Configuration_IRC_Oscillator_Control_Register_Address);
}

/*
	功能：写系统配置的内部谐振晶体振荡器控制寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_System_Configuration_IRC_Oscillator_Control_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(System_Configuration_IRC_Oscillator_Control_Register_Address, Register_Value);
}

/*
	功能：读系统配置的系统复位状态寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_System_Reset_Status_Register(void)
{
	return Read_Register_32_Bit(System_Configuration_System_Reset_Status_Register_Address);
}

/*
	功能：读系统配置的系统锁相环时钟源选择寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_System_PLL_Clock_Source_Select_Register(void)
{
	return Read_Register_32_Bit(System_Configuration_System_PLL_Clock_Source_Select_Register_Address);
}

/*
	功能：写系统配置的系统锁相环时钟源选择寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_System_Configuration_System_PLL_Clock_Source_Select_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(System_Configuration_System_PLL_Clock_Source_Select_Register_Address, Register_Value);
}

/*
	功能：读系统配置的系统锁相环时钟源更新寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_System_PLL_Clock_Source_Update_Register(void)
{
	return Read_Register_32_Bit(System_Configuration_System_PLL_Clock_Source_Update_Register_Address);
}

/*
	功能：写系统配置的系统锁相环时钟源更新寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_System_Configuration_System_PLL_Clock_Source_Update_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(System_Configuration_System_PLL_Clock_Source_Update_Register_Address, Register_Value);
}

/*
	功能：读系统配置的主时钟源选择寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_Main_Clock_Source_Select_Register(void)
{
	return Read_Register_32_Bit(System_Configuration_Main_Clock_Source_Select_Register_Address);
}

/*
	功能：写系统配置的主时钟源选择寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_System_Configuration_Main_Clock_Source_Select_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(System_Configuration_Main_Clock_Source_Select_Register_Address, Register_Value);
}

/*
	功能：读系统配置的主时钟源更新寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_Main_Clock_Source_Update_Register(void)
{
	return Read_Register_32_Bit(System_Configuration_Main_Clock_Source_Update_Register_Address);
}

/*
	功能：写系统配置的主时钟源更新寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_System_Configuration_Main_Clock_Source_Update_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(System_Configuration_Main_Clock_Source_Update_Register_Address, Register_Value);
}

/*
	功能：读系统配置的系统AHB时钟分频器寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_System_AHB_Clock_Divider_Register(void)
{
	return Read_Register_32_Bit(System_Configuration_System_AHB_Clock_Divider_Register_Address);
}

/*
	功能：写系统配置的系统AHB时钟分频器寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_System_Configuration_System_AHB_Clock_Divider_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(System_Configuration_System_AHB_Clock_Divider_Register_Address, Register_Value);
}

/*
	功能：读系统配置的系统AHB时钟控制寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_System_AHB_Clock_Control_Register(void)
{
	return Read_Register_32_Bit(System_Configuration_System_AHB_Clock_Control_Register_Address);
}

/*
	功能：写系统配置的系统AHB时钟控制寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_System_Configuration_System_AHB_Clock_Control_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(System_Configuration_System_AHB_Clock_Control_Register_Address, Register_Value);
}

/*
	功能：读系统配置的SSP0时钟分频器寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_SSP_0_Clock_Divider_Register(void)
{
	return Read_Register_32_Bit(System_Configuration_SSP_0_Clock_Divider_Register_Address);
}

/*
	功能：写系统配置的SSP0时钟分频器寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_System_Configuration_SSP_0_Clock_Divider_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(System_Configuration_SSP_0_Clock_Divider_Register_Address, Register_Value);
}

/*
	功能：读系统配置的UART时钟分频器寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_UART_Clock_Divider_Register(void)
{
	return Read_Register_32_Bit(System_Configuration_UART_Clock_Divider_Register_Address);
}

/*
	功能：写系统配置的UART时钟分频器寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_System_Configuration_UART_Clock_Divider_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(System_Configuration_UART_Clock_Divider_Register_Address, Register_Value);
}

/*
	功能：读系统配置的SSP1时钟分频器寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_SSP_1_Clock_Divider_Register(void)
{
	return Read_Register_32_Bit(System_Configuration_SSP_1_Clock_Divider_Register_Address);
}

/*
	功能：写系统配置的SSP1时钟分频器寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_System_Configuration_SSP_1_Clock_Divider_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(System_Configuration_SSP_1_Clock_Divider_Register_Address, Register_Value);
}

/*
	功能：读系统配置的监察定时器时钟源选择寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_Watchdog_Timer_Clock_Source_Select_Register(void)
{
	return Read_Register_32_Bit(System_Configuration_Watchdog_Timer_Clock_Source_Select_Register_Address);
}

/*
	功能：写系统配置的监察定时器时钟源选择寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_System_Configuration_Watchdog_Timer_Clock_Source_Select_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(System_Configuration_Watchdog_Timer_Clock_Source_Select_Register_Address, Register_Value);
}

/*
	功能：读系统配置的监察定时器时钟源更新寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_Watchdog_Timer_Clock_Source_Update_Register(void)
{
	return Read_Register_32_Bit(System_Configuration_Watchdog_Timer_Clock_Source_Update_Register_Address);
}

/*
	功能：写系统配置的监察定时器时钟源更新寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_System_Configuration_Watchdog_Timer_Clock_Source_Update_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(System_Configuration_Watchdog_Timer_Clock_Source_Update_Register_Address, Register_Value);
}

/*
	功能：读系统配置的监察定时器时钟分频器寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_Watchdog_Timer_Clock_Divider_Register(void)
{
	return Read_Register_32_Bit(System_Configuration_Watchdog_Timer_Clock_Divider_Register_Address);
}

/*
	功能：写系统配置的监察定时器时钟分频器寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_System_Configuration_Watchdog_Timer_Clock_Divider_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(System_Configuration_Watchdog_Timer_Clock_Divider_Register_Address, Register_Value);
}

/*
	功能：读系统配置的时钟输出时钟源选择寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_Clock_Out_Clock_Source_Select_Register(void)
{
	return Read_Register_32_Bit(System_Configuration_Clock_Out_Clock_Source_Select_Register_Address);
}

/*
	功能：写系统配置的时钟输出时钟源选择寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_System_Configuration_Clock_Out_Clock_Source_Select_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(System_Configuration_Clock_Out_Clock_Source_Select_Register_Address, Register_Value);
}

/*
	功能：读系统配置的时钟输出时钟源更新寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_Clock_Out_Clock_Source_Update_Register(void)
{
	return Read_Register_32_Bit(System_Configuration_Clock_Out_Clock_Source_Update_Register_Address);
}

/*
	功能：写系统配置的时钟输出时钟源更新寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_System_Configuration_Clock_Out_Clock_Source_Update_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(System_Configuration_Clock_Out_Clock_Source_Update_Register_Address, Register_Value);
}

/*
	功能：读系统配置的时钟输出时钟分频器寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_Clock_Out_Clock_Divider_Register(void)
{
	return Read_Register_32_Bit(System_Configuration_Clock_Out_Clock_Divider_Register_Address);
}

/*
	功能：写系统配置的时钟输出时钟分频器寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_System_Configuration_Clock_Out_Clock_Divider_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(System_Configuration_Clock_Out_Clock_Divider_Register_Address, Register_Value);
}

/*
	功能：读系统配置的GPIO复位状态寄存器0
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_GPIO_Reset_Status_Register_0(void)
{
	return Read_Register_32_Bit(System_Configuration_GPIO_Reset_Status_Register_0_Address);
}

/*
	功能：读系统配置的GPIO复位状态寄存器1
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_GPIO_Reset_Status_Register_1(void)
{
	return Read_Register_32_Bit(System_Configuration_GPIO_Reset_Status_Register_1_Address);
}

/*
	功能：读系统配置的掉电检测控制寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_Brown_Out_Detect_Control_Register(void)
{
	return Read_Register_32_Bit(System_Configuration_Brown_Out_Detect_Control_Register_Address);
}

/*
	功能：写系统配置的掉电检测控制寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_System_Configuration_Brown_Out_Detect_Control_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(System_Configuration_Brown_Out_Detect_Control_Register_Address, Register_Value);
}

/*
	功能：读系统配置的系统定时器校准寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_System_Timer_Calibration_Register(void)
{
	return Read_Register_32_Bit(System_Configuration_System_Timer_Calibration_Register_Address);
}

/*
	功能：写系统配置的系统定时器校准寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_System_Configuration_System_Timer_Calibration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(System_Configuration_System_Timer_Calibration_Register_Address, Register_Value);
}

/*
	功能：读系统配置的中断延迟寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_Interrupt_Latency_Register(void)
{
	return Read_Register_32_Bit(System_Configuration_Interrupt_Latency_Register_Address);
}

/*
	功能：写系统配置的中断延迟寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_System_Configuration_Interrupt_Latency_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(System_Configuration_Interrupt_Latency_Register_Address, Register_Value);
}

/*
	功能：读系统配置的动逻辑边沿控制寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_Start_Logic_Edge_Control_Register(void)
{
	return Read_Register_32_Bit(System_Configuration_Start_Logic_Edge_Control_Register_Address);
}

/*
	功能：写系统配置的动逻辑边沿控制寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_System_Configuration_Start_Logic_Edge_Control_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(System_Configuration_Start_Logic_Edge_Control_Register_Address, Register_Value);
}

/*
	功能：读系统配置的启动逻辑信号控制寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_Start_Logic_Signal_Control_Register(void)
{
	return Read_Register_32_Bit(System_Configuration_Start_Logic_Signal_Control_Register_Address);
}

/*
	功能：写系统配置的启动逻辑信号控制寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_System_Configuration_Start_Logic_Signal_Control_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(System_Configuration_Start_Logic_Signal_Control_Register_Address, Register_Value);
}

/*
	功能：写系统配置的启动逻辑复位寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_System_Configuration_Start_Logic_Reset_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(System_Configuration_Start_Logic_Reset_Register_Address, Register_Value);
}

/*
	功能：读系统配置的启动逻辑状态寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_Start_Logic_Status_Register(void)
{
	return Read_Register_32_Bit(System_Configuration_Start_Logic_Status_Register_Address);
}

/*
	功能：读系统配置的深度睡眠配置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_Deep_Sleep_Configuration_Register(void)
{
	return Read_Register_32_Bit(System_Configuration_Deep_Sleep_Configuration_Register_Address);
}

/*
	功能：写系统配置的深度睡眠配置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_System_Configuration_Deep_Sleep_Configuration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(System_Configuration_Deep_Sleep_Configuration_Register_Address, Register_Value);
}

/*
	功能：读系统配置的唤醒配置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_Wake_Up_Configuration_Register(void)
{
	return Read_Register_32_Bit(System_Configuration_Wake_Up_Configuration_Register_Address);
}

/*
	功能：写系统配置的唤醒配置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_System_Configuration_Wake_Up_Configuration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(System_Configuration_Wake_Up_Configuration_Register_Address, Register_Value);
}

/*
	功能：读系统配置的运行配置寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_Run_Configuration_Register(void)
{
	return Read_Register_32_Bit(System_Configuration_Run_Configuration_Register_Address);
}

/*
	功能：写系统配置的运行配置寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_System_Configuration_Run_Configuration_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(System_Configuration_Run_Configuration_Register_Address, Register_Value);
}

/*
	功能：读系统配置的设备标识寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_System_Configuration_Device_ID_Register(void)
{
	return Read_Register_32_Bit(System_Configuration_Device_ID_Register_Address);
}
