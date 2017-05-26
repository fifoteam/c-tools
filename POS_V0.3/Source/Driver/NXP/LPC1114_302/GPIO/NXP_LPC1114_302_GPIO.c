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

#include	"NXP_LPC1114_302_GPIO.h"

/* 数据定义 */

/* GPIO端口0的寄存器地址 */
const Integer_Unsigned_32_Bit	GPIO_0_Data_Register_Address					  = 0x50003FFC;
const Integer_Unsigned_32_Bit	GPIO_0_Data_Direction_Register_Address			  = 0x50008000;
const Integer_Unsigned_32_Bit	GPIO_0_Interrupt_Sense_Register_Address			  = 0x50008004;
const Integer_Unsigned_32_Bit	GPIO_0_Interrupt_Both_Edge_Sense_Register_Address = 0x50008008;
const Integer_Unsigned_32_Bit	GPIO_0_Interrupt_Event_Register_Address			  = 0x5000800C;
const Integer_Unsigned_32_Bit	GPIO_0_Interrupt_Mask_Register_Address			  = 0x50008010;
const Integer_Unsigned_32_Bit	GPIO_0_Raw_Interrupt_Status_Register_Address	  = 0x50008014;
const Integer_Unsigned_32_Bit	GPIO_0_Masked_Interrupt_Status_Register_Address	  = 0x50008018;
const Integer_Unsigned_32_Bit	GPIO_0_Interrupt_Clear_Register_Address			  = 0x5000801C;

/* GPIO端口1的寄存器地址 */
const Integer_Unsigned_32_Bit	GPIO_1_Data_Register_Address					  = 0x50013FFC;
const Integer_Unsigned_32_Bit	GPIO_1_Data_Direction_Register_Address			  = 0x50018000;
const Integer_Unsigned_32_Bit	GPIO_1_Interrupt_Sense_Register_Address			  = 0x50018004;
const Integer_Unsigned_32_Bit	GPIO_1_Interrupt_Both_Edge_Sense_Register_Address = 0x50018008;
const Integer_Unsigned_32_Bit	GPIO_1_Interrupt_Event_Register_Address			  = 0x5001800C;
const Integer_Unsigned_32_Bit	GPIO_1_Interrupt_Mask_Register_Address			  = 0x50018010;
const Integer_Unsigned_32_Bit	GPIO_1_Raw_Interrupt_Status_Register_Address	  = 0x50018014;
const Integer_Unsigned_32_Bit	GPIO_1_Masked_Interrupt_Status_Register_Address	  = 0x50018018;
const Integer_Unsigned_32_Bit	GPIO_1_Interrupt_Clear_Register_Address			  = 0x5001801C;

/* GPIO端口2的寄存器地址 */
const Integer_Unsigned_32_Bit	GPIO_2_Data_Register_Address					  = 0x50023FFC;
const Integer_Unsigned_32_Bit	GPIO_2_Data_Direction_Register_Address			  = 0x50028000;
const Integer_Unsigned_32_Bit	GPIO_2_Interrupt_Sense_Register_Address			  = 0x50028004;
const Integer_Unsigned_32_Bit	GPIO_2_Interrupt_Both_Edge_Sense_Register_Address = 0x50028008;
const Integer_Unsigned_32_Bit	GPIO_2_Interrupt_Event_Register_Address			  = 0x5002800C;
const Integer_Unsigned_32_Bit	GPIO_2_Interrupt_Mask_Register_Address			  = 0x50028010;
const Integer_Unsigned_32_Bit	GPIO_2_Raw_Interrupt_Status_Register_Address	  = 0x50028014;
const Integer_Unsigned_32_Bit	GPIO_2_Masked_Interrupt_Status_Register_Address	  = 0x50028018;
const Integer_Unsigned_32_Bit	GPIO_2_Interrupt_Clear_Register_Address			  = 0x5002801C;

/* GPIO端口3的寄存器地址 */
const Integer_Unsigned_32_Bit	GPIO_3_Data_Register_Address					  = 0x50033FFC;
const Integer_Unsigned_32_Bit	GPIO_3_Data_Direction_Register_Address			  = 0x50038000;
const Integer_Unsigned_32_Bit	GPIO_3_Interrupt_Sense_Register_Address			  = 0x50038004;
const Integer_Unsigned_32_Bit	GPIO_3_Interrupt_Both_Edge_Sense_Register_Address = 0x50038008;
const Integer_Unsigned_32_Bit	GPIO_3_Interrupt_Event_Register_Address			  = 0x5003800C;
const Integer_Unsigned_32_Bit	GPIO_3_Interrupt_Mask_Register_Address			  = 0x50038010;
const Integer_Unsigned_32_Bit	GPIO_3_Raw_Interrupt_Status_Register_Address	  = 0x50038014;
const Integer_Unsigned_32_Bit	GPIO_3_Masked_Interrupt_Status_Register_Address	  = 0x50038018;
const Integer_Unsigned_32_Bit	GPIO_3_Interrupt_Clear_Register_Address			  = 0x5003801C;

/* 函数定义 */

/*
	功能：读GPIO端口0的数据寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_GPIO_0_Data_Register(void)
{
	return Read_Register_32_Bit(GPIO_0_Data_Register_Address);
}

/*
	功能：写GPIO端口0的数据寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_GPIO_0_Data_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(GPIO_0_Data_Register_Address, Register_Value);
}

/*
	功能：读GPIO端口0的数据方向寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_GPIO_0_Data_Direction_Register(void)
{
	return Read_Register_32_Bit(GPIO_0_Data_Direction_Register_Address);
}

/*
	功能：写GPIO端口0的数据方向寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_GPIO_0_Data_Direction_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(GPIO_0_Data_Direction_Register_Address, Register_Value);
}

/*
	功能：读GPIO端口0的中断检测寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_GPIO_0_Interrupt_Sense_Register(void)
{
	return Read_Register_32_Bit(GPIO_0_Interrupt_Sense_Register_Address);
}

/*
	功能：写GPIO端口0的中断检测寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_GPIO_0_Interrupt_Sense_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(GPIO_0_Interrupt_Sense_Register_Address, Register_Value);
}

/*
	功能：读GPIO端口0的中断双沿检测寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_GPIO_0_Interrupt_Both_Edge_Sense_Register(void)
{
	return Read_Register_32_Bit(GPIO_0_Interrupt_Both_Edge_Sense_Register_Address);
}

/*
	功能：写GPIO端口0的中断双沿检测寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_GPIO_0_Interrupt_Both_Edge_Sense_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(GPIO_0_Interrupt_Both_Edge_Sense_Register_Address, Register_Value);
}

/*
	功能：读GPIO端口0的中断事件寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_GPIO_0_Interrupt_Event_Register(void)
{
	return Read_Register_32_Bit(GPIO_0_Interrupt_Event_Register_Address);
}

/*
	功能：写GPIO端口0的中断事件寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_GPIO_0_Interrupt_Event_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(GPIO_0_Interrupt_Event_Register_Address, Register_Value);
}

/*
	功能：读GPIO端口0的中断屏蔽寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_GPIO_0_Interrupt_Mask_Register(void)
{
	return Read_Register_32_Bit(GPIO_0_Interrupt_Mask_Register_Address);
}

/*
	功能：写GPIO端口0的中断屏蔽寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_GPIO_0_Interrupt_Mask_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(GPIO_0_Interrupt_Mask_Register_Address, Register_Value);
}

/*
	功能：读GPIO端口0的原始中断状态寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_GPIO_0_Raw_Interrupt_Status_Register(void)
{
	return Read_Register_32_Bit(GPIO_0_Raw_Interrupt_Status_Register_Address);
}

/*
	功能：读GPIO端口0的屏蔽中断状态寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_GPIO_0_Masked_Interrupt_Status_Register(void)
{
	return Read_Register_32_Bit(GPIO_0_Masked_Interrupt_Status_Register_Address);
}

/*
	功能：写GPIO端口0的中断清除寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_GPIO_0_Interrupt_Clear_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(GPIO_0_Interrupt_Clear_Register_Address, Register_Value);
}

/*
	功能：读GPIO端口1的数据寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_GPIO_1_Data_Register(void)
{
	return Read_Register_32_Bit(GPIO_1_Data_Register_Address);
}

/*
	功能：写GPIO端口1的数据寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_GPIO_1_Data_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(GPIO_1_Data_Register_Address, Register_Value);
}

/*
	功能：读GPIO端口1的数据方向寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_GPIO_1_Data_Direction_Register(void)
{
	return Read_Register_32_Bit(GPIO_1_Data_Direction_Register_Address);
}

/*
	功能：写GPIO端口1的数据方向寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_GPIO_1_Data_Direction_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(GPIO_1_Data_Direction_Register_Address, Register_Value);
}

/*
	功能：读GPIO端口1的中断检测寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_GPIO_1_Interrupt_Sense_Register(void)
{
	return Read_Register_32_Bit(GPIO_1_Interrupt_Sense_Register_Address);
}

/*
	功能：写GPIO端口1的中断检测寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_GPIO_1_Interrupt_Sense_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(GPIO_1_Interrupt_Sense_Register_Address, Register_Value);
}

/*
	功能：读GPIO端口1的中断双沿检测寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_GPIO_1_Interrupt_Both_Edge_Sense_Register(void)
{
	return Read_Register_32_Bit(GPIO_1_Interrupt_Both_Edge_Sense_Register_Address);
}

/*
	功能：写GPIO端口1的中断双沿检测寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_GPIO_1_Interrupt_Both_Edge_Sense_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(GPIO_1_Interrupt_Both_Edge_Sense_Register_Address, Register_Value);
}

/*
	功能：读GPIO端口1的中断事件寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_GPIO_1_Interrupt_Event_Register(void)
{
	return Read_Register_32_Bit(GPIO_1_Interrupt_Event_Register_Address);
}

/*
	功能：写GPIO端口1的中断事件寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_GPIO_1_Interrupt_Event_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(GPIO_1_Interrupt_Event_Register_Address, Register_Value);
}

/*
	功能：读GPIO端口1的中断屏蔽寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_GPIO_1_Interrupt_Mask_Register(void)
{
	return Read_Register_32_Bit(GPIO_1_Interrupt_Mask_Register_Address);
}

/*
	功能：写GPIO端口1的中断屏蔽寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_GPIO_1_Interrupt_Mask_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(GPIO_1_Interrupt_Mask_Register_Address, Register_Value);
}

/*
	功能：读GPIO端口1的原始中断状态寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_GPIO_1_Raw_Interrupt_Status_Register(void)
{
	return Read_Register_32_Bit(GPIO_1_Raw_Interrupt_Status_Register_Address);
}

/*
	功能：读GPIO端口1的屏蔽中断状态寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_GPIO_1_Masked_Interrupt_Status_Register(void)
{
	return Read_Register_32_Bit(GPIO_1_Masked_Interrupt_Status_Register_Address);
}

/*
	功能：写GPIO端口1的中断清除寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_GPIO_1_Interrupt_Clear_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(GPIO_1_Interrupt_Clear_Register_Address, Register_Value);
}

/*
	功能：读GPIO端口2的数据寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_GPIO_2_Data_Register(void)
{
	return Read_Register_32_Bit(GPIO_2_Data_Register_Address);
}

/*
	功能：写GPIO端口2的数据寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_GPIO_2_Data_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(GPIO_2_Data_Register_Address, Register_Value);
}

/*
	功能：读GPIO端口2的数据方向寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_GPIO_2_Data_Direction_Register(void)
{
	return Read_Register_32_Bit(GPIO_2_Data_Direction_Register_Address);
}

/*
	功能：写GPIO端口2的数据方向寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_GPIO_2_Data_Direction_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(GPIO_2_Data_Direction_Register_Address, Register_Value);
}

/*
	功能：读GPIO端口2的中断检测寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_GPIO_2_Interrupt_Sense_Register(void)
{
	return Read_Register_32_Bit(GPIO_2_Interrupt_Sense_Register_Address);
}

/*
	功能：写GPIO端口2的中断检测寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_GPIO_2_Interrupt_Sense_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(GPIO_2_Interrupt_Sense_Register_Address, Register_Value);
}

/*
	功能：读GPIO端口2的中断双沿检测寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_GPIO_2_Interrupt_Both_Edge_Sense_Register(void)
{
	return Read_Register_32_Bit(GPIO_2_Interrupt_Both_Edge_Sense_Register_Address);
}

/*
	功能：写GPIO端口2的中断双沿检测寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_GPIO_2_Interrupt_Both_Edge_Sense_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(GPIO_2_Interrupt_Both_Edge_Sense_Register_Address, Register_Value);
}

/*
	功能：读GPIO端口2的中断事件寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_GPIO_2_Interrupt_Event_Register(void)
{
	return Read_Register_32_Bit(GPIO_2_Interrupt_Event_Register_Address);
}

/*
	功能：写GPIO端口2的中断事件寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_GPIO_2_Interrupt_Event_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(GPIO_2_Interrupt_Event_Register_Address, Register_Value);
}

/*
	功能：读GPIO端口2的中断屏蔽寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_GPIO_2_Interrupt_Mask_Register(void)
{
	return Read_Register_32_Bit(GPIO_2_Interrupt_Mask_Register_Address);
}

/*
	功能：写GPIO端口2的中断屏蔽寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_GPIO_2_Interrupt_Mask_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(GPIO_2_Interrupt_Mask_Register_Address, Register_Value);
}

/*
	功能：读GPIO端口2的原始中断状态寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_GPIO_2_Raw_Interrupt_Status_Register(void)
{
	return Read_Register_32_Bit(GPIO_2_Raw_Interrupt_Status_Register_Address);
}

/*
	功能：读GPIO端口2的屏蔽中断状态寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_GPIO_2_Masked_Interrupt_Status_Register(void)
{
	return Read_Register_32_Bit(GPIO_2_Masked_Interrupt_Status_Register_Address);
}

/*
	功能：写GPIO端口2的中断清除寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_GPIO_2_Interrupt_Clear_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(GPIO_2_Interrupt_Clear_Register_Address, Register_Value);
}

/*
	功能：读GPIO端口3的数据寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_GPIO_3_Data_Register(void)
{
	return Read_Register_32_Bit(GPIO_3_Data_Register_Address);
}

/*
	功能：写GPIO端口3的数据寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_GPIO_3_Data_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(GPIO_3_Data_Register_Address, Register_Value);
}

/*
	功能：读GPIO端口3的数据方向寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_GPIO_3_Data_Direction_Register(void)
{
	return Read_Register_32_Bit(GPIO_3_Data_Direction_Register_Address);
}

/*
	功能：写GPIO端口3的数据方向寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_GPIO_3_Data_Direction_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(GPIO_3_Data_Direction_Register_Address, Register_Value);
}

/*
	功能：读GPIO端口3的中断检测寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_GPIO_3_Interrupt_Sense_Register(void)
{
	return Read_Register_32_Bit(GPIO_3_Interrupt_Sense_Register_Address);
}

/*
	功能：写GPIO端口3的中断检测寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_GPIO_3_Interrupt_Sense_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(GPIO_3_Interrupt_Sense_Register_Address, Register_Value);
}

/*
	功能：读GPIO端口3的中断双沿检测寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_GPIO_3_Interrupt_Both_Edge_Sense_Register(void)
{
	return Read_Register_32_Bit(GPIO_3_Interrupt_Both_Edge_Sense_Register_Address);
}

/*
	功能：写GPIO端口3的中断双沿检测寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_GPIO_3_Interrupt_Both_Edge_Sense_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(GPIO_3_Interrupt_Both_Edge_Sense_Register_Address, Register_Value);
}

/*
	功能：读GPIO端口3的中断事件寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_GPIO_3_Interrupt_Event_Register(void)
{
	return Read_Register_32_Bit(GPIO_3_Interrupt_Event_Register_Address);
}

/*
	功能：写GPIO端口3的中断事件寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_GPIO_3_Interrupt_Event_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(GPIO_3_Interrupt_Event_Register_Address, Register_Value);
}

/*
	功能：读GPIO端口3的中断屏蔽寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_GPIO_3_Interrupt_Mask_Register(void)
{
	return Read_Register_32_Bit(GPIO_3_Interrupt_Mask_Register_Address);
}

/*
	功能：写GPIO端口3的中断屏蔽寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_GPIO_3_Interrupt_Mask_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(GPIO_3_Interrupt_Mask_Register_Address, Register_Value);
}

/*
	功能：读GPIO端口3的原始中断状态寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_GPIO_3_Raw_Interrupt_Status_Register(void)
{
	return Read_Register_32_Bit(GPIO_3_Raw_Interrupt_Status_Register_Address);
}

/*
	功能：读GPIO端口3的屏蔽中断状态寄存器
	参数：无
	返回：Integer_Unsigned_32_Bit，寄存器的值
*/
Integer_Unsigned_32_Bit	Read_GPIO_3_Masked_Interrupt_Status_Register(void)
{
	return Read_Register_32_Bit(GPIO_3_Masked_Interrupt_Status_Register_Address);
}

/*
	功能：写GPIO端口3的中断清除寄存器
	参数：Integer_Unsigned_32_Bit Register_Value，寄存器的值
	返回：无
*/
void	Write_GPIO_3_Interrupt_Clear_Register(Integer_Unsigned_32_Bit Register_Value)
{
	Write_Register_32_Bit(GPIO_3_Interrupt_Clear_Register_Address, Register_Value);
}
