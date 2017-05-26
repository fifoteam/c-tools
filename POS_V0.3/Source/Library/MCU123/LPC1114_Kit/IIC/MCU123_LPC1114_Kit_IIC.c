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

#include	"MCU123_LPC1114_Kit_IIC.h"

/* 数据定义 */

/* 工作参数 */
Integer_Unsigned_8_Bit	IIC_Library_Transfer_Valid, IIC_Library_Transfer_Mode, IIC_Library_Device_Address;
Integer_Unsigned_8_Bit	*IIC_Library_Receiver_Data_Pointer, *IIC_Library_Transmitter_Data_Pointer;
Integer_Unsigned_32_Bit	IIC_Library_Receiver_Data_Count, IIC_Library_Transmitter_Data_Count;

/* 函数定义 */

/*
	功能：初始化
	参数：无
	返回：无
*/
void	IIC_Library_Initialize(void)
{
	Union_IIC_Serial_Clock_High_Duty_Cycle_Register	IIC_Serial_Clock_High_Duty_Cycle_Register;
	Union_IIC_Serial_Clock_Low_Duty_Cycle_Register	IIC_Serial_Clock_Low_Duty_Cycle_Register;
	
	/* 设置高占空比 */
	IIC_Serial_Clock_High_Duty_Cycle_Register.Value = Read_IIC_Serial_Clock_High_Duty_Cycle_Register();
	IIC_Serial_Clock_High_Duty_Cycle_Register.Internal.Counte_Value = 240;
	Write_IIC_Serial_Clock_High_Duty_Cycle_Register(IIC_Serial_Clock_High_Duty_Cycle_Register.Value);
	
	/* 设置低占空比 */
	IIC_Serial_Clock_Low_Duty_Cycle_Register.Value = Read_IIC_Serial_Clock_Low_Duty_Cycle_Register();
	IIC_Serial_Clock_Low_Duty_Cycle_Register.Internal.Counte_Value = 240;
	Write_IIC_Serial_Clock_Low_Duty_Cycle_Register(IIC_Serial_Clock_Low_Duty_Cycle_Register.Value);
}

/*
	功能：打开接口
	参数：无
	返回：无
*/
void	IIC_Library_Enable_Interface(void)
{
	Union_IIC_Control_Set_Register	IIC_Control_Set_Register;
	
	/* 设置标志 */
	IIC_Control_Set_Register.Value = Read_IIC_Control_Set_Register();
	IIC_Control_Set_Register.Internal.Interface_Enable_Set = 1;
	Write_IIC_Control_Set_Register(IIC_Control_Set_Register.Value);
}

/*
	功能：关闭接口
	参数：无
	返回：无
*/
void	IIC_Library_Disable_Interface(void)
{
	Union_IIC_Control_Clear_Register	IIC_Control_Clear_Register;
	
	/* 清除标志 */
	IIC_Control_Clear_Register.Value = 0;
	IIC_Control_Clear_Register.Internal.Assert_Acknowledge_Clear = 1;
	IIC_Control_Clear_Register.Internal.Serial_Interrupt_Clear = 1;
	IIC_Control_Clear_Register.Internal.Start_Condition_Clear = 1;
	IIC_Control_Clear_Register.Internal.Interface_Enable_Clear = 1;
	Write_IIC_Control_Clear_Register(IIC_Control_Clear_Register.Value);
}

/*
	功能：进入主接收器模式
	参数：Integer_Unsigned_8_Bit Device_Address，设备地址
		  Integer_Unsigned_8_Bit *Data_Pointer，数据指针
		  Integer_Unsigned_32_Bit Data_Count，数据数量
	返回：无
*/
void	IIC_Library_Enter_Master_Receiver_Mode(Integer_Unsigned_8_Bit Device_Address, Integer_Unsigned_8_Bit *Data_Pointer, Integer_Unsigned_32_Bit Data_Count)
{
	Union_IIC_Control_Set_Register	IIC_Control_Set_Register;
	
	/* 判断数据数量 */
	if (Data_Count > 0)
	{
		/* 设置工作参数 */
		IIC_Library_Transfer_Valid = 1;
		IIC_Library_Transfer_Mode = 1;
		IIC_Library_Device_Address = Device_Address;
		IIC_Library_Receiver_Data_Pointer = Data_Pointer;
		IIC_Library_Receiver_Data_Count = Data_Count;
		
		/* 设置控制标志 */
		IIC_Control_Set_Register.Value = Read_IIC_Control_Set_Register();
		IIC_Control_Set_Register.Internal.Start_Condition_Set = 1;
		Write_IIC_Control_Set_Register(IIC_Control_Set_Register.Value);
	}
	else
	{
		/* 忽略 */
	}
}

/*
	功能：进入主发送器模式
	参数：Integer_Unsigned_8_Bit Device_Address，设备地址
		  Integer_Unsigned_8_Bit *Data_Pointer，数据指针
		  Integer_Unsigned_32_Bit Data_Count，数据数量
	返回：无
*/
void	IIC_Library_Enter_Master_Transmitter_Mode(Integer_Unsigned_8_Bit Device_Address, Integer_Unsigned_8_Bit *Data_Pointer, Integer_Unsigned_32_Bit Data_Count)
{
	Union_IIC_Control_Set_Register	IIC_Control_Set_Register;
	
	/* 判断数据数量 */
	if (Data_Count > 0)
	{
		/* 设置工作参数 */
		IIC_Library_Transfer_Valid = 1;
		IIC_Library_Transfer_Mode = 0;
		IIC_Library_Device_Address = Device_Address;
		IIC_Library_Transmitter_Data_Pointer = Data_Pointer;
		IIC_Library_Transmitter_Data_Count = Data_Count;
		
		/* 设置控制标志 */
		IIC_Control_Set_Register.Value = Read_IIC_Control_Set_Register();
		IIC_Control_Set_Register.Internal.Start_Condition_Set = 1;
		Write_IIC_Control_Set_Register(IIC_Control_Set_Register.Value);
	}
	else
	{
		/* 忽略 */
	}
}

/*
	功能：离开主模式
	参数：无
	返回：无
*/
void	IIC_Library_Leave_Master_Mode(void)
{
	Union_IIC_Control_Set_Register	IIC_Control_Set_Register;
	
	/* 等待停止 */
	do
	{
		IIC_Control_Set_Register.Value = Read_IIC_Control_Set_Register();
	}
	while ( (IIC_Library_Transfer_Valid) || (IIC_Control_Set_Register.Internal.Stop_Condition_Set == 1) );
}

/*
	功能：清除中断
	参数：无
	返回：无
*/
void	IIC_Library_Clear_Interrupt(void)
{
	Union_IIC_Status_Register			IIC_Status_Register;
	Union_IIC_Data_Register				IIC_Data_Register;
	Union_IIC_Control_Clear_Register	IIC_Control_Clear_Register;
	Union_IIC_Control_Set_Register		IIC_Control_Set_Register;
	
	/* 判断状态 */
	IIC_Status_Register.Value = Read_IIC_Status_Register();
	switch (IIC_Status_Register.Internal.Status_Code)
	{
		/* 已经启动 */
		case 0x08 :
		{
			/* 设置设备地址和传输模式 */
			IIC_Data_Register.Value = Read_IIC_Data_Register();
			IIC_Data_Register.Internal.Data_Code = (IIC_Library_Device_Address << 1) | IIC_Library_Transfer_Mode;
			Write_IIC_Data_Register(IIC_Data_Register.Value);
			
			/* 清除控制标志 */
			IIC_Control_Clear_Register.Value = 0;
			IIC_Control_Clear_Register.Internal.Start_Condition_Clear = 1;
			Write_IIC_Control_Clear_Register(IIC_Control_Clear_Register.Value);
			
			break;
		}
		
		/* 已经发送设备地址和写传输模式，收到确认 */
		case 0x18 :
		{
			/* 设置数据地址 */
			IIC_Data_Register.Value = Read_IIC_Data_Register();
			IIC_Data_Register.Internal.Data_Code = *IIC_Library_Transmitter_Data_Pointer;
			Write_IIC_Data_Register(IIC_Data_Register.Value);
			
			break;
		}
		
		/* 已经发送数据，收到确认 */
		case 0x28 :
		{
			/* 设置数据指针和数据数量 */
			IIC_Library_Transmitter_Data_Pointer += 1;
			IIC_Library_Transmitter_Data_Count -= 1;
			
			/* 判断数据数量 */
			if (IIC_Library_Transmitter_Data_Count > 0)
			{
				/* 设置数据 */
				IIC_Data_Register.Value = Read_IIC_Data_Register();
				IIC_Data_Register.Internal.Data_Code = *IIC_Library_Transmitter_Data_Pointer;
				Write_IIC_Data_Register(IIC_Data_Register.Value);
			}
			else
			{
				/* 设置控制标志 */
				IIC_Control_Set_Register.Value = Read_IIC_Control_Set_Register();
				IIC_Control_Set_Register.Internal.Stop_Condition_Set = 1;
				Write_IIC_Control_Set_Register(IIC_Control_Set_Register.Value);
				
				/* 设置工作参数 */
				IIC_Library_Transfer_Valid = 0;
			}
			
			break;
		}
		
		/* 已经发送设备地址和读传输模式，收到确认 */
		case 0x40 :
		{
			/* 设置控制标志 */
			if (IIC_Library_Receiver_Data_Count > 1)
			{
				/* 设置控制标志 */
				IIC_Control_Set_Register.Value = Read_IIC_Control_Set_Register();
				IIC_Control_Set_Register.Internal.Assert_Acknowledge_Set = 1;
				Write_IIC_Control_Set_Register(IIC_Control_Set_Register.Value);
			}
			else
			{
				/* 忽略 */
			}
			
			break;
		}
		
		/* 已经接收数据，返回确认 */
		case 0x50 :
		{
			/* 取得数据，设置数据指针和数据数量 */
			*IIC_Library_Receiver_Data_Pointer = Read_IIC_Data_Register();
			IIC_Library_Receiver_Data_Pointer += 1;
			IIC_Library_Receiver_Data_Count -= 1;
			
			/* 判断数据数量 */
			if (IIC_Library_Receiver_Data_Count == 1)
			{
				/* 清除控制标志 */
				IIC_Control_Clear_Register.Value = 0;
				IIC_Control_Clear_Register.Internal.Assert_Acknowledge_Clear = 1;
				Write_IIC_Control_Clear_Register(IIC_Control_Clear_Register.Value);
			}
			else
			{
				/* 忽略 */
			}
			
			break;
		}
		
		/* 已经接收数据，不返回确认 */
		case 0x58 :
		{
			/* 取得数据 */
			*IIC_Library_Receiver_Data_Pointer = Read_IIC_Data_Register();
			
			/* 设置控制标志 */
			IIC_Control_Set_Register.Value = Read_IIC_Control_Set_Register();
			IIC_Control_Set_Register.Internal.Stop_Condition_Set = 1;
			Write_IIC_Control_Set_Register(IIC_Control_Set_Register.Value);
			
			/* 设置工作参数 */
			IIC_Library_Transfer_Valid = 0;
			
			break;
		}
		
		/* 默认 */
		default :
		{
			/* 设置控制标志 */
			IIC_Control_Set_Register.Value = Read_IIC_Control_Set_Register();
			IIC_Control_Set_Register.Internal.Stop_Condition_Set = 1;
			Write_IIC_Control_Set_Register(IIC_Control_Set_Register.Value);
			
			/* 设置工作参数 */
			IIC_Library_Transfer_Valid = 0;
			
			break;
		}
	}
	
	/* 清除控制标志 */
	IIC_Control_Clear_Register.Value = 0;
	IIC_Control_Clear_Register.Internal.Serial_Interrupt_Clear = 1;
	Write_IIC_Control_Clear_Register(IIC_Control_Clear_Register.Value);
}
