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

#include	"MCU123_LPC1114_Kit_Temperature_EEPROM.h"

/* 数据定义 */

/* 温度和EEPROM任务索引 */
Integer_Unsigned_8_Bit	Temperature_EEPROM_Task_Index;

/* 温度和EEPROM任务栈 */
Integer_Unsigned_32_Bit	Temperature_EEPROM_Task_Stack[Temperature_EEPROM_Task_Stack_Capacity];

/* 温度和EEPROM设备地址 */
const Integer_Unsigned_8_Bit	Temperature_Device_Address = 0x48;
const Integer_Unsigned_8_Bit	EEPROM_Device_Address	   = 0x50;

/* EEPROM总线空闲时间和EEPROM写延迟时间，单位：毫秒 */
const Integer_Unsigned_32_Bit	EEPROM_Bus_Free_Time	= 1;
const Integer_Unsigned_32_Bit	EEPROM_Write_Delay_Time	= 10;

/* 温度和EEPROM任务间隔时间，单位：毫秒 */
const Integer_Unsigned_32_Bit	Temperature_EEPROM_Task_Interval_Time = 3000;

/* 温度和EEPROM值 */
Integer_Signed_8_Bit	Temperature_Value, Temperature_Value_Integer_Part, Temperature_Value_Fractional_Part;
Integer_Unsigned_8_Bit	EEPROM_Transmitter_Buffer[1 + 16], EEPROM_Receiver_Buffer[16];

/* 函数定义 */

/*
	功能：温度和EEPROM任务
	参数：无
	返回：无
*/
void	Temperature_EEPROM_Task(void)
{
	Integer_Unsigned_8_Bit	Page_Index, Byte_Index;
	Integer_Unsigned_8_Bit	Device_Address;
	
	/* 打开接口 */
	IIC_Library_Enable_Interface();
	
	/* 写EEPROM */
	for (Page_Index = 0; Page_Index < 16; Page_Index += 1)
	{
		Device_Address = EEPROM_Device_Address | (Page_Index >> 4);
		EEPROM_Transmitter_Buffer[0] = Page_Index << 4;
		for (Byte_Index = 1; Byte_Index < sizeof(EEPROM_Transmitter_Buffer); Byte_Index += 1)
		{
			EEPROM_Transmitter_Buffer[Byte_Index] = Page_Index;
		}
		Core_Library_Suspend_Task(EEPROM_Bus_Free_Time);
		IIC_Library_Enter_Master_Transmitter_Mode(Device_Address, EEPROM_Transmitter_Buffer, sizeof(EEPROM_Transmitter_Buffer));
		Core_Library_Suspend_Task(EEPROM_Write_Delay_Time);
		IIC_Library_Leave_Master_Mode();
	}
	
	/* 进入主发送器模式，设置EEPROM数据地址 */
	Page_Index = 0;
	Device_Address = EEPROM_Device_Address | (Page_Index >> 4);
	EEPROM_Transmitter_Buffer[0] = Page_Index << 4;
	Core_Library_Suspend_Task(EEPROM_Bus_Free_Time);
	IIC_Library_Enter_Master_Transmitter_Mode(Device_Address, EEPROM_Transmitter_Buffer, 1);
	Core_Library_Suspend_Task(EEPROM_Write_Delay_Time);
	IIC_Library_Leave_Master_Mode();
	
	/* 循环处理 */
	while (1)
	{
		/* 进入主接收器模式，读温度值 */
		IIC_Library_Enter_Master_Receiver_Mode(Temperature_Device_Address, (Integer_Unsigned_8_Bit *) &Temperature_Value, 1);
		IIC_Library_Leave_Master_Mode();
		Temperature_Value_Integer_Part = Temperature_Value / 2;
		Temperature_Value_Fractional_Part = (Temperature_Value % 2) * 5;
		
		/* 清除数据缓冲区 */
		for (Byte_Index = 0; Byte_Index < sizeof(EEPROM_Receiver_Buffer); Byte_Index += 1)
		{
			EEPROM_Receiver_Buffer[Byte_Index] = 0;
		}
		
		/* 进入主接收器模式，读EEPROM */
		Core_Library_Suspend_Task(EEPROM_Bus_Free_Time);
		IIC_Library_Enter_Master_Receiver_Mode(EEPROM_Device_Address, EEPROM_Receiver_Buffer, sizeof(EEPROM_Receiver_Buffer));
		IIC_Library_Leave_Master_Mode();
		
		/* 挂起任务 */
		Core_Library_Suspend_Task(Temperature_EEPROM_Task_Interval_Time);
	}
}
