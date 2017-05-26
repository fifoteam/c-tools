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

#ifndef	NXP_LPC1114_302_M0_EXCEPTION_H
#define	NXP_LPC1114_302_M0_EXCEPTION_H

#include	"NXP_LPC1114_302_M0_Schedule.h"

/* �������� */

/* �ж��������� */
extern Integer_Unsigned_8_Bit	Wake_0_Interrupt_Task_Index;
extern Integer_Unsigned_8_Bit	Wake_1_Interrupt_Task_Index;
extern Integer_Unsigned_8_Bit	Wake_2_Interrupt_Task_Index;
extern Integer_Unsigned_8_Bit	Wake_3_Interrupt_Task_Index;
extern Integer_Unsigned_8_Bit	Wake_4_Interrupt_Task_Index;
extern Integer_Unsigned_8_Bit	Wake_5_Interrupt_Task_Index;
extern Integer_Unsigned_8_Bit	Wake_6_Interrupt_Task_Index;
extern Integer_Unsigned_8_Bit	Wake_7_Interrupt_Task_Index;
extern Integer_Unsigned_8_Bit	Wake_8_Interrupt_Task_Index;
extern Integer_Unsigned_8_Bit	Wake_9_Interrupt_Task_Index;
extern Integer_Unsigned_8_Bit	Wake_10_Interrupt_Task_Index;
extern Integer_Unsigned_8_Bit	Wake_11_Interrupt_Task_Index;
extern Integer_Unsigned_8_Bit	Wake_12_Interrupt_Task_Index;
extern Integer_Unsigned_8_Bit	SPI_0_Interrupt_Task_Index;
extern Integer_Unsigned_8_Bit	IIC_Interrupt_Task_Index;
extern Integer_Unsigned_8_Bit	Counter_Timer_16_Bit_0_Interrupt_Task_Index;
extern Integer_Unsigned_8_Bit	Counter_Timer_16_Bit_1_Interrupt_Task_Index;
extern Integer_Unsigned_8_Bit	Counter_Timer_32_Bit_0_Interrupt_Task_Index;
extern Integer_Unsigned_8_Bit	Counter_Timer_32_Bit_1_Interrupt_Task_Index;
extern Integer_Unsigned_8_Bit	SPI_1_Interrupt_Task_Index;
extern Integer_Unsigned_8_Bit	UART_Interrupt_Task_Index;
extern Integer_Unsigned_8_Bit	ADC_Interrupt_Task_Index;
extern Integer_Unsigned_8_Bit	Watchdog_Timer_Interrupt_Task_Index;
extern Integer_Unsigned_8_Bit	Brown_Out_Detect_Interrupt_Task_Index;
extern Integer_Unsigned_8_Bit	GPIO_3_Interrupt_Task_Index;
extern Integer_Unsigned_8_Bit	GPIO_2_Interrupt_Task_Index;
extern Integer_Unsigned_8_Bit	GPIO_1_Interrupt_Task_Index;
extern Integer_Unsigned_8_Bit	GPIO_0_Interrupt_Task_Index;

/* ����жϺ���ָ�� */
extern Void_Function	*Wake_0_Clear_Interrupt_Function_Pointer;
extern Void_Function	*Wake_1_Clear_Interrupt_Function_Pointer;
extern Void_Function	*Wake_2_Clear_Interrupt_Function_Pointer;
extern Void_Function	*Wake_3_Clear_Interrupt_Function_Pointer;
extern Void_Function	*Wake_4_Clear_Interrupt_Function_Pointer;
extern Void_Function	*Wake_5_Clear_Interrupt_Function_Pointer;
extern Void_Function	*Wake_6_Clear_Interrupt_Function_Pointer;
extern Void_Function	*Wake_7_Clear_Interrupt_Function_Pointer;
extern Void_Function	*Wake_8_Clear_Interrupt_Function_Pointer;
extern Void_Function	*Wake_9_Clear_Interrupt_Function_Pointer;
extern Void_Function	*Wake_10_Clear_Interrupt_Function_Pointer;
extern Void_Function	*Wake_11_Clear_Interrupt_Function_Pointer;
extern Void_Function	*Wake_12_Clear_Interrupt_Function_Pointer;
extern Void_Function	*SPI_0_Clear_Interrupt_Function_Pointer;
extern Void_Function	*IIC_Clear_Interrupt_Function_Pointer;
extern Void_Function	*Counter_Timer_16_Bit_0_Clear_Interrupt_Function_Pointer;
extern Void_Function	*Counter_Timer_16_Bit_1_Clear_Interrupt_Function_Pointer;
extern Void_Function	*Counter_Timer_32_Bit_0_Clear_Interrupt_Function_Pointer;
extern Void_Function	*Counter_Timer_32_Bit_1_Clear_Interrupt_Function_Pointer;
extern Void_Function	*SPI_1_Clear_Interrupt_Function_Pointer;
extern Void_Function	*UART_Clear_Interrupt_Function_Pointer;
extern Void_Function	*ADC_Clear_Interrupt_Function_Pointer;
extern Void_Function	*Watchdog_Timer_Clear_Interrupt_Function_Pointer;
extern Void_Function	*Brown_Out_Detect_Clear_Interrupt_Function_Pointer;
extern Void_Function	*GPIO_3_Clear_Interrupt_Function_Pointer;
extern Void_Function	*GPIO_2_Clear_Interrupt_Function_Pointer;
extern Void_Function	*GPIO_1_Clear_Interrupt_Function_Pointer;
extern Void_Function	*GPIO_0_Clear_Interrupt_Function_Pointer;

/* ϵͳ��ʱ����ʱ�жϴ��� */
extern Integer_Unsigned_32_Bit	System_Timer_Tick_Interrupt_Count;

/* �������� */

/*
	���ܣ�Ӳ�����쳣��������ڲ���
	������Structure_Process_Context *Process_Context_Pointer�����̻���ָ��
		  Structure_Main_Context *Main_Context_Pointer��������ָ��
	���أ���
*/
void	Hard_Fault_Exception_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer);

/*
	���ܣ���������쳣��������ڲ���
	������Structure_Process_Context *Process_Context_Pointer�����̻���ָ��
		  Structure_Main_Context *Main_Context_Pointer��������ָ��
	���أ���
*/
void	Supervisor_Call_Exception_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer);

/*
	���ܣ��ȴ������쳣��������ڲ���
	������Structure_Process_Context *Process_Context_Pointer�����̻���ָ��
		  Structure_Main_Context *Main_Context_Pointer��������ָ��
	���أ���
*/
void	Pend_Supervisor_Exception_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer);

/*
	���ܣ�ϵͳ��ʱ���жϴ�������ڲ���
	������Structure_Process_Context *Process_Context_Pointer�����̻���ָ��
		  Structure_Main_Context *Main_Context_Pointer��������ָ��
	���أ���
*/
void	System_Timer_Interrupt_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer);

/*
	���ܣ�����0�жϴ�������ڲ���
	������Structure_Process_Context *Process_Context_Pointer�����̻���ָ��
		  Structure_Main_Context *Main_Context_Pointer��������ָ��
	���أ���
*/
void	Wake_0_Interrupt_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer);

/*
	���ܣ�����1�жϴ�������ڲ���
	������Structure_Process_Context *Process_Context_Pointer�����̻���ָ��
		  Structure_Main_Context *Main_Context_Pointer��������ָ��
	���أ���
*/
void	Wake_1_Interrupt_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer);

/*
	���ܣ�����2�жϴ�������ڲ���
	������Structure_Process_Context *Process_Context_Pointer�����̻���ָ��
		  Structure_Main_Context *Main_Context_Pointer��������ָ��
	���أ���
*/
void	Wake_2_Interrupt_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer);

/*
	���ܣ�����3�жϴ�������ڲ���
	������Structure_Process_Context *Process_Context_Pointer�����̻���ָ��
		  Structure_Main_Context *Main_Context_Pointer��������ָ��
	���أ���
*/
void	Wake_3_Interrupt_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer);

/*
	���ܣ�����4�жϴ�������ڲ���
	������Structure_Process_Context *Process_Context_Pointer�����̻���ָ��
		  Structure_Main_Context *Main_Context_Pointer��������ָ��
	���أ���
*/
void	Wake_4_Interrupt_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer);

/*
	���ܣ�����5�жϴ�������ڲ���
	������Structure_Process_Context *Process_Context_Pointer�����̻���ָ��
		  Structure_Main_Context *Main_Context_Pointer��������ָ��
	���أ���
*/
void	Wake_5_Interrupt_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer);

/*
	���ܣ�����6�жϴ�������ڲ���
	������Structure_Process_Context *Process_Context_Pointer�����̻���ָ��
		  Structure_Main_Context *Main_Context_Pointer��������ָ��
	���أ���
*/
void	Wake_6_Interrupt_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer);

/*
	���ܣ�����7�жϴ�������ڲ���
	������Structure_Process_Context *Process_Context_Pointer�����̻���ָ��
		  Structure_Main_Context *Main_Context_Pointer��������ָ��
	���أ���
*/
void	Wake_7_Interrupt_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer);

/*
	���ܣ�����8�жϴ�������ڲ���
	������Structure_Process_Context *Process_Context_Pointer�����̻���ָ��
		  Structure_Main_Context *Main_Context_Pointer��������ָ��
	���أ���
*/
void	Wake_8_Interrupt_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer);

/*
	���ܣ�����9�жϴ�������ڲ���
	������Structure_Process_Context *Process_Context_Pointer�����̻���ָ��
		  Structure_Main_Context *Main_Context_Pointer��������ָ��
	���أ���
*/
void	Wake_9_Interrupt_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer);

/*
	���ܣ�����10�жϴ�������ڲ���
	������Structure_Process_Context *Process_Context_Pointer�����̻���ָ��
		  Structure_Main_Context *Main_Context_Pointer��������ָ��
	���أ���
*/
void	Wake_10_Interrupt_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer);

/*
	���ܣ�����11�жϴ�������ڲ���
	������Structure_Process_Context *Process_Context_Pointer�����̻���ָ��
		  Structure_Main_Context *Main_Context_Pointer��������ָ��
	���أ���
*/
void	Wake_11_Interrupt_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer);

/*
	���ܣ�����12�жϴ�������ڲ���
	������Structure_Process_Context *Process_Context_Pointer�����̻���ָ��
		  Structure_Main_Context *Main_Context_Pointer��������ָ��
	���أ���
*/
void	Wake_12_Interrupt_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer);

/*
	���ܣ�SPI0�жϴ�������ڲ���
	������Structure_Process_Context *Process_Context_Pointer�����̻���ָ��
		  Structure_Main_Context *Main_Context_Pointer��������ָ��
	���أ���
*/
void	SPI_0_Interrupt_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer);

/*
	���ܣ�IIC�жϴ�������ڲ���
	������Structure_Process_Context *Process_Context_Pointer�����̻���ָ��
		  Structure_Main_Context *Main_Context_Pointer��������ָ��
	���أ���
*/
void	IIC_Interrupt_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer);

/*
	���ܣ�16λ��������ʱ��0�жϴ�������ڲ���
	������Structure_Process_Context *Process_Context_Pointer�����̻���ָ��
		  Structure_Main_Context *Main_Context_Pointer��������ָ��
	���أ���
*/
void	Counter_Timer_16_Bit_0_Interrupt_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer);

/*
	���ܣ�16λ��������ʱ��1�жϴ�������ڲ���
	������Structure_Process_Context *Process_Context_Pointer�����̻���ָ��
		  Structure_Main_Context *Main_Context_Pointer��������ָ��
	���أ���
*/
void	Counter_Timer_16_Bit_1_Interrupt_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer);

/*
	���ܣ�32λ��������ʱ��0�жϴ�������ڲ���
	������Structure_Process_Context *Process_Context_Pointer�����̻���ָ��
		  Structure_Main_Context *Main_Context_Pointer��������ָ��
	���أ���
*/
void	Counter_Timer_32_Bit_0_Interrupt_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer);

/*
	���ܣ�32λ��������ʱ��1�жϴ�������ڲ���
	������Structure_Process_Context *Process_Context_Pointer�����̻���ָ��
		  Structure_Main_Context *Main_Context_Pointer��������ָ��
	���أ���
*/
void	Counter_Timer_32_Bit_1_Interrupt_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer);

/*
	���ܣ�SPI1�жϴ�������ڲ���
	������Structure_Process_Context *Process_Context_Pointer�����̻���ָ��
		  Structure_Main_Context *Main_Context_Pointer��������ָ��
	���أ���
*/
void	SPI_1_Interrupt_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer);

/*
	���ܣ�UART�жϴ�������ڲ���
	������Structure_Process_Context *Process_Context_Pointer�����̻���ָ��
		  Structure_Main_Context *Main_Context_Pointer��������ָ��
	���أ���
*/
void	UART_Interrupt_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer);

/*
	���ܣ�ADC�жϴ�������ڲ���
	������Structure_Process_Context *Process_Context_Pointer�����̻���ָ��
		  Structure_Main_Context *Main_Context_Pointer��������ָ��
	���أ���
*/
void	ADC_Interrupt_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer);

/*
	���ܣ���춨ʱ���жϴ�������ڲ���
	������Structure_Process_Context *Process_Context_Pointer�����̻���ָ��
		  Structure_Main_Context *Main_Context_Pointer��������ָ��
	���أ���
*/
void	Watchdog_Timer_Interrupt_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer);

/*
	���ܣ�Ƿѹ����жϴ�������ڲ���
	������Structure_Process_Context *Process_Context_Pointer�����̻���ָ��
		  Structure_Main_Context *Main_Context_Pointer��������ָ��
	���أ���
*/
void	Brown_Out_Detect_Interrupt_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer);

/*
	���ܣ�GPIO3�жϴ�������ڲ���
	������Structure_Process_Context *Process_Context_Pointer�����̻���ָ��
		  Structure_Main_Context *Main_Context_Pointer��������ָ��
	���أ���
*/
void	GPIO_3_Interrupt_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer);

/*
	���ܣ�GPIO2�жϴ�������ڲ���
	������Structure_Process_Context *Process_Context_Pointer�����̻���ָ��
		  Structure_Main_Context *Main_Context_Pointer��������ָ��
	���أ���
*/
void	GPIO_2_Interrupt_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer);

/*
	���ܣ�GPIO1�жϴ�������ڲ���
	������Structure_Process_Context *Process_Context_Pointer�����̻���ָ��
		  Structure_Main_Context *Main_Context_Pointer��������ָ��
	���أ���
*/
void	GPIO_1_Interrupt_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer);

/*
	���ܣ�GPIO0�жϴ�������ڲ���
	������Structure_Process_Context *Process_Context_Pointer�����̻���ָ��
		  Structure_Main_Context *Main_Context_Pointer��������ָ��
	���أ���
*/
void	GPIO_0_Interrupt_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer);

#endif
