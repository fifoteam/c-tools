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

#include	"NXP_LPC1114_302_M0_Exception.h"

/* ���ݶ��� */

/* �ж��������� */
Integer_Unsigned_8_Bit	Wake_0_Interrupt_Task_Index;
Integer_Unsigned_8_Bit	Wake_1_Interrupt_Task_Index;
Integer_Unsigned_8_Bit	Wake_2_Interrupt_Task_Index;
Integer_Unsigned_8_Bit	Wake_3_Interrupt_Task_Index;
Integer_Unsigned_8_Bit	Wake_4_Interrupt_Task_Index;
Integer_Unsigned_8_Bit	Wake_5_Interrupt_Task_Index;
Integer_Unsigned_8_Bit	Wake_6_Interrupt_Task_Index;
Integer_Unsigned_8_Bit	Wake_7_Interrupt_Task_Index;
Integer_Unsigned_8_Bit	Wake_8_Interrupt_Task_Index;
Integer_Unsigned_8_Bit	Wake_9_Interrupt_Task_Index;
Integer_Unsigned_8_Bit	Wake_10_Interrupt_Task_Index;
Integer_Unsigned_8_Bit	Wake_11_Interrupt_Task_Index;
Integer_Unsigned_8_Bit	Wake_12_Interrupt_Task_Index;
Integer_Unsigned_8_Bit	SPI_0_Interrupt_Task_Index;
Integer_Unsigned_8_Bit	IIC_Interrupt_Task_Index;
Integer_Unsigned_8_Bit	Counter_Timer_16_Bit_0_Interrupt_Task_Index;
Integer_Unsigned_8_Bit	Counter_Timer_16_Bit_1_Interrupt_Task_Index;
Integer_Unsigned_8_Bit	Counter_Timer_32_Bit_0_Interrupt_Task_Index;
Integer_Unsigned_8_Bit	Counter_Timer_32_Bit_1_Interrupt_Task_Index;
Integer_Unsigned_8_Bit	SPI_1_Interrupt_Task_Index;
Integer_Unsigned_8_Bit	UART_Interrupt_Task_Index;
Integer_Unsigned_8_Bit	ADC_Interrupt_Task_Index;
Integer_Unsigned_8_Bit	Watchdog_Timer_Interrupt_Task_Index;
Integer_Unsigned_8_Bit	Brown_Out_Detect_Interrupt_Task_Index;
Integer_Unsigned_8_Bit	GPIO_3_Interrupt_Task_Index;
Integer_Unsigned_8_Bit	GPIO_2_Interrupt_Task_Index;
Integer_Unsigned_8_Bit	GPIO_1_Interrupt_Task_Index;
Integer_Unsigned_8_Bit	GPIO_0_Interrupt_Task_Index;

/* ����жϺ���ָ�� */
Void_Function	*Wake_0_Clear_Interrupt_Function_Pointer;
Void_Function	*Wake_1_Clear_Interrupt_Function_Pointer;
Void_Function	*Wake_2_Clear_Interrupt_Function_Pointer;
Void_Function	*Wake_3_Clear_Interrupt_Function_Pointer;
Void_Function	*Wake_4_Clear_Interrupt_Function_Pointer;
Void_Function	*Wake_5_Clear_Interrupt_Function_Pointer;
Void_Function	*Wake_6_Clear_Interrupt_Function_Pointer;
Void_Function	*Wake_7_Clear_Interrupt_Function_Pointer;
Void_Function	*Wake_8_Clear_Interrupt_Function_Pointer;
Void_Function	*Wake_9_Clear_Interrupt_Function_Pointer;
Void_Function	*Wake_10_Clear_Interrupt_Function_Pointer;
Void_Function	*Wake_11_Clear_Interrupt_Function_Pointer;
Void_Function	*Wake_12_Clear_Interrupt_Function_Pointer;
Void_Function	*SPI_0_Clear_Interrupt_Function_Pointer;
Void_Function	*IIC_Clear_Interrupt_Function_Pointer;
Void_Function	*Counter_Timer_16_Bit_0_Clear_Interrupt_Function_Pointer;
Void_Function	*Counter_Timer_16_Bit_1_Clear_Interrupt_Function_Pointer;
Void_Function	*Counter_Timer_32_Bit_0_Clear_Interrupt_Function_Pointer;
Void_Function	*Counter_Timer_32_Bit_1_Clear_Interrupt_Function_Pointer;
Void_Function	*SPI_1_Clear_Interrupt_Function_Pointer;
Void_Function	*UART_Clear_Interrupt_Function_Pointer;
Void_Function	*ADC_Clear_Interrupt_Function_Pointer;
Void_Function	*Watchdog_Timer_Clear_Interrupt_Function_Pointer;
Void_Function	*Brown_Out_Detect_Clear_Interrupt_Function_Pointer;
Void_Function	*GPIO_3_Clear_Interrupt_Function_Pointer;
Void_Function	*GPIO_2_Clear_Interrupt_Function_Pointer;
Void_Function	*GPIO_1_Clear_Interrupt_Function_Pointer;
Void_Function	*GPIO_0_Clear_Interrupt_Function_Pointer;

/* ϵͳ��ʱ����ʱ�жϴ��� */
Integer_Unsigned_32_Bit	System_Timer_Tick_Interrupt_Count;

/* �������� */

/*
	���ܣ�Ӳ�����쳣��������ڲ���
	������Structure_Process_Context *Process_Context_Pointer�����̻���ָ��
		  Structure_Main_Context *Main_Context_Pointer��������ָ��
	���أ���
*/
void	Hard_Fault_Exception_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer)
{
	/* ���� */
}

/*
	���ܣ���������쳣��������ڲ���
	������Structure_Process_Context *Process_Context_Pointer�����̻���ָ��
		  Structure_Main_Context *Main_Context_Pointer��������ָ��
	���أ���
*/
void	Supervisor_Call_Exception_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer)
{
	Enumeration_API_Name	*API_Name_Pointer;
	Union_API_Parameter		*API_Parameter_Pointer;
	
	/* ȡ��API����ָ���API����ָ�� */
	API_Name_Pointer = (Enumeration_API_Name *) (Process_Context_Pointer->R0);
	API_Parameter_Pointer = (Union_API_Parameter *) (Process_Context_Pointer->R1);
	
	/* ���API���� */
	switch (*API_Name_Pointer)
	{
		/* ��ʼ������ */
		case API_Initialize_Schedule :
		{
			Initialize_Schedule(Process_Context_Pointer, Main_Context_Pointer);
			
			break;
		}
		
		/* �������� */
		case API_Create_Task :
		{
			API_Parameter_Pointer->Create_Task_Parameter.Task_Index = Create_Task(API_Parameter_Pointer->Create_Task_Parameter.Function_Address,
				API_Parameter_Pointer->Create_Task_Parameter.Stack_Address);
			
			break;
		}
		
		/* �л����� */
		case API_Yield_Task :
		{
			Yield_Task(Process_Context_Pointer, Main_Context_Pointer);
			
			break;
		}
		
		/* �������� */
		case API_Suspend_Task :
		{
			Suspend_Task(Process_Context_Pointer, Main_Context_Pointer, API_Parameter_Pointer->Suspend_Task_Parameter.Time_Limitation);
			
			break;
		}
		
		/* �������� */
		case API_Wake_Task :
		{
			Wake_Task(API_Parameter_Pointer->Wake_Task_Parameter.Task_Index);
			
			break;
		}
		
		/* ɾ������ */
		case API_Delete_Task :
		{
			Delete_Task(Process_Context_Pointer, Main_Context_Pointer);
			
			break;
		}
		
		/* ������Ϣ */
		case API_Receive_Message :
		{
			API_Parameter_Pointer->Receive_Message_Parameter.Message_Count = Receive_Message(API_Parameter_Pointer->Receive_Message_Parameter.Message_Pointer);
			
			break;
		}
		
		/* ������Ϣ */
		case API_Transmit_Message :
		{
			API_Parameter_Pointer->Transmit_Message_Parameter.Message_Count = Transmit_Message(API_Parameter_Pointer->Transmit_Message_Parameter.Message_Pointer);
			
			break;
		}
		
		/* ���ź��� */
		case API_Down_Semaphore :
		{
			Down_Semaphore(Process_Context_Pointer, Main_Context_Pointer, API_Parameter_Pointer->Down_Semaphore_Parameter.Semaphore_Pointer);
			
			break;
		}
		
		/* ���ź��� */
		case API_Up_Semaphore :
		{
			Up_Semaphore(API_Parameter_Pointer->Up_Semaphore_Parameter.Semaphore_Pointer, API_Parameter_Pointer->Up_Semaphore_Parameter.Task_Index);
			
			break;
		}
		
		/* Ĭ�� */
		default :
		{
			/* ���� */
			
			break;
		}
	}
}

/*
	���ܣ��ȴ������쳣��������ڲ���
	������Structure_Process_Context *Process_Context_Pointer�����̻���ָ��
		  Structure_Main_Context *Main_Context_Pointer��������ָ��
	���أ���
*/
void	Pend_Supervisor_Exception_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer)
{
	/* ���� */
}

/*
	���ܣ�ϵͳ��ʱ���жϴ�������ڲ���
	������Structure_Process_Context *Process_Context_Pointer�����̻���ָ��
		  Structure_Main_Context *Main_Context_Pointer��������ָ��
	���أ���
*/
void	System_Timer_Interrupt_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer)
{
	/* ɨ������ */
	Scan_Task();
	
	/* �ж�ϵͳ��ʱ����ʱ�жϴ��� */
	System_Timer_Tick_Interrupt_Count += 1;
	if (System_Timer_Tick_Interrupt_Count < System_Timer_Tick_Interrupt_Count_Limitation)
	{
		/* ���� */
	}
	else
	{
		/* �л����� */
		System_Timer_Tick_Interrupt_Count = 0;
		Yield_Task(Process_Context_Pointer, Main_Context_Pointer);
	}
}

/*
	���ܣ�����0�жϴ�������ڲ���
	������Structure_Process_Context *Process_Context_Pointer�����̻���ָ��
		  Structure_Main_Context *Main_Context_Pointer��������ָ��
	���أ���
*/
void	Wake_0_Interrupt_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer)
{
	/* �������� */
	Run_Task(Process_Context_Pointer, Main_Context_Pointer, Wake_0_Interrupt_Task_Index);
	
	/* ����ж� */
	if (Wake_0_Clear_Interrupt_Function_Pointer != 0)
	{
		Wake_0_Clear_Interrupt_Function_Pointer();
	}
	else
	{
		/* ���� */
	}
}

/*
	���ܣ�����1�жϴ�������ڲ���
	������Structure_Process_Context *Process_Context_Pointer�����̻���ָ��
		  Structure_Main_Context *Main_Context_Pointer��������ָ��
	���أ���
*/
void	Wake_1_Interrupt_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer)
{
	/* �������� */
	Run_Task(Process_Context_Pointer, Main_Context_Pointer, Wake_1_Interrupt_Task_Index);
	
	/* ����ж� */
	if (Wake_1_Clear_Interrupt_Function_Pointer != 0)
	{
		Wake_1_Clear_Interrupt_Function_Pointer();
	}
	else
	{
		/* ���� */
	}
}

/*
	���ܣ�����2�жϴ�������ڲ���
	������Structure_Process_Context *Process_Context_Pointer�����̻���ָ��
		  Structure_Main_Context *Main_Context_Pointer��������ָ��
	���أ���
*/
void	Wake_2_Interrupt_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer)
{
	/* �������� */
	Run_Task(Process_Context_Pointer, Main_Context_Pointer, Wake_2_Interrupt_Task_Index);
	
	/* ����ж� */
	if (Wake_2_Clear_Interrupt_Function_Pointer != 0)
	{
		Wake_2_Clear_Interrupt_Function_Pointer();
	}
	else
	{
		/* ���� */
	}
}

/*
	���ܣ�����3�жϴ�������ڲ���
	������Structure_Process_Context *Process_Context_Pointer�����̻���ָ��
		  Structure_Main_Context *Main_Context_Pointer��������ָ��
	���أ���
*/
void	Wake_3_Interrupt_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer)
{
	/* �������� */
	Run_Task(Process_Context_Pointer, Main_Context_Pointer, Wake_3_Interrupt_Task_Index);
	
	/* ����ж� */
	if (Wake_3_Clear_Interrupt_Function_Pointer != 0)
	{
		Wake_3_Clear_Interrupt_Function_Pointer();
	}
	else
	{
		/* ���� */
	}
}

/*
	���ܣ�����4�жϴ�������ڲ���
	������Structure_Process_Context *Process_Context_Pointer�����̻���ָ��
		  Structure_Main_Context *Main_Context_Pointer��������ָ��
	���أ���
*/
void	Wake_4_Interrupt_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer)
{
	/* �������� */
	Run_Task(Process_Context_Pointer, Main_Context_Pointer, Wake_4_Interrupt_Task_Index);
	
	/* ����ж� */
	if (Wake_4_Clear_Interrupt_Function_Pointer != 0)
	{
		Wake_4_Clear_Interrupt_Function_Pointer();
	}
	else
	{
		/* ���� */
	}
}

/*
	���ܣ�����5�жϴ�������ڲ���
	������Structure_Process_Context *Process_Context_Pointer�����̻���ָ��
		  Structure_Main_Context *Main_Context_Pointer��������ָ��
	���أ���
*/
void	Wake_5_Interrupt_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer)
{
	/* �������� */
	Run_Task(Process_Context_Pointer, Main_Context_Pointer, Wake_5_Interrupt_Task_Index);
	
	/* ����ж� */
	if (Wake_5_Clear_Interrupt_Function_Pointer != 0)
	{
		Wake_5_Clear_Interrupt_Function_Pointer();
	}
	else
	{
		/* ���� */
	}
}

/*
	���ܣ�����6�жϴ�������ڲ���
	������Structure_Process_Context *Process_Context_Pointer�����̻���ָ��
		  Structure_Main_Context *Main_Context_Pointer��������ָ��
	���أ���
*/
void	Wake_6_Interrupt_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer)
{
	/* �������� */
	Run_Task(Process_Context_Pointer, Main_Context_Pointer, Wake_6_Interrupt_Task_Index);
	
	/* ����ж� */
	if (Wake_6_Clear_Interrupt_Function_Pointer != 0)
	{
		Wake_6_Clear_Interrupt_Function_Pointer();
	}
	else
	{
		/* ���� */
	}
}

/*
	���ܣ�����7�жϴ�������ڲ���
	������Structure_Process_Context *Process_Context_Pointer�����̻���ָ��
		  Structure_Main_Context *Main_Context_Pointer��������ָ��
	���أ���
*/
void	Wake_7_Interrupt_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer)
{
	/* �������� */
	Run_Task(Process_Context_Pointer, Main_Context_Pointer, Wake_7_Interrupt_Task_Index);
	
	/* ����ж� */
	if (Wake_7_Clear_Interrupt_Function_Pointer != 0)
	{
		Wake_7_Clear_Interrupt_Function_Pointer();
	}
	else
	{
		/* ���� */
	}
}

/*
	���ܣ�����8�жϴ�������ڲ���
	������Structure_Process_Context *Process_Context_Pointer�����̻���ָ��
		  Structure_Main_Context *Main_Context_Pointer��������ָ��
	���أ���
*/
void	Wake_8_Interrupt_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer)
{
	/* �������� */
	Run_Task(Process_Context_Pointer, Main_Context_Pointer, Wake_8_Interrupt_Task_Index);
	
	/* ����ж� */
	if (Wake_8_Clear_Interrupt_Function_Pointer != 0)
	{
		Wake_8_Clear_Interrupt_Function_Pointer();
	}
	else
	{
		/* ���� */
	}
}

/*
	���ܣ�����9�жϴ�������ڲ���
	������Structure_Process_Context *Process_Context_Pointer�����̻���ָ��
		  Structure_Main_Context *Main_Context_Pointer��������ָ��
	���أ���
*/
void	Wake_9_Interrupt_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer)
{
	/* �������� */
	Run_Task(Process_Context_Pointer, Main_Context_Pointer, Wake_9_Interrupt_Task_Index);
	
	/* ����ж� */
	if (Wake_9_Clear_Interrupt_Function_Pointer != 0)
	{
		Wake_9_Clear_Interrupt_Function_Pointer();
	}
	else
	{
		/* ���� */
	}
}

/*
	���ܣ�����10�жϴ�������ڲ���
	������Structure_Process_Context *Process_Context_Pointer�����̻���ָ��
		  Structure_Main_Context *Main_Context_Pointer��������ָ��
	���أ���
*/
void	Wake_10_Interrupt_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer)
{
	/* �������� */
	Run_Task(Process_Context_Pointer, Main_Context_Pointer, Wake_10_Interrupt_Task_Index);
	
	/* ����ж� */
	if (Wake_10_Clear_Interrupt_Function_Pointer != 0)
	{
		Wake_10_Clear_Interrupt_Function_Pointer();
	}
	else
	{
		/* ���� */
	}
}

/*
	���ܣ�����11�жϴ�������ڲ���
	������Structure_Process_Context *Process_Context_Pointer�����̻���ָ��
		  Structure_Main_Context *Main_Context_Pointer��������ָ��
	���أ���
*/
void	Wake_11_Interrupt_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer)
{
	/* �������� */
	Run_Task(Process_Context_Pointer, Main_Context_Pointer, Wake_11_Interrupt_Task_Index);
	
	/* ����ж� */
	if (Wake_11_Clear_Interrupt_Function_Pointer != 0)
	{
		Wake_11_Clear_Interrupt_Function_Pointer();
	}
	else
	{
		/* ���� */
	}
}

/*
	���ܣ�����12�жϴ�������ڲ���
	������Structure_Process_Context *Process_Context_Pointer�����̻���ָ��
		  Structure_Main_Context *Main_Context_Pointer��������ָ��
	���أ���
*/
void	Wake_12_Interrupt_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer)
{
	/* �������� */
	Run_Task(Process_Context_Pointer, Main_Context_Pointer, Wake_12_Interrupt_Task_Index);
	
	/* ����ж� */
	if (Wake_12_Clear_Interrupt_Function_Pointer != 0)
	{
		Wake_12_Clear_Interrupt_Function_Pointer();
	}
	else
	{
		/* ���� */
	}
}

/*
	���ܣ�SPI0�жϴ�������ڲ���
	������Structure_Process_Context *Process_Context_Pointer�����̻���ָ��
		  Structure_Main_Context *Main_Context_Pointer��������ָ��
	���أ���
*/
void	SPI_0_Interrupt_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer)
{
	/* �������� */
	Run_Task(Process_Context_Pointer, Main_Context_Pointer, SPI_0_Interrupt_Task_Index);
	
	/* ����ж� */
	if (SPI_0_Clear_Interrupt_Function_Pointer != 0)
	{
		SPI_0_Clear_Interrupt_Function_Pointer();
	}
	else
	{
		/* ���� */
	}
}

/*
	���ܣ�IIC�жϴ�������ڲ���
	������Structure_Process_Context *Process_Context_Pointer�����̻���ָ��
		  Structure_Main_Context *Main_Context_Pointer��������ָ��
	���أ���
*/
void	IIC_Interrupt_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer)
{
	/* �������� */
	Run_Task(Process_Context_Pointer, Main_Context_Pointer, IIC_Interrupt_Task_Index);
	
	/* ����ж� */
	if (IIC_Clear_Interrupt_Function_Pointer != 0)
	{
		IIC_Clear_Interrupt_Function_Pointer();
	}
	else
	{
		/* ���� */
	}
}

/*
	���ܣ�16λ��������ʱ��0�жϴ�������ڲ���
	������Structure_Process_Context *Process_Context_Pointer�����̻���ָ��
		  Structure_Main_Context *Main_Context_Pointer��������ָ��
	���أ���
*/
void	Counter_Timer_16_Bit_0_Interrupt_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer)
{
	/* �������� */
	Run_Task(Process_Context_Pointer, Main_Context_Pointer, Counter_Timer_16_Bit_0_Interrupt_Task_Index);
	
	/* ����ж� */
	if (Counter_Timer_16_Bit_0_Clear_Interrupt_Function_Pointer != 0)
	{
		Counter_Timer_16_Bit_0_Clear_Interrupt_Function_Pointer();
	}
	else
	{
		/* ���� */
	}
}

/*
	���ܣ�16λ��������ʱ��1�жϴ�������ڲ���
	������Structure_Process_Context *Process_Context_Pointer�����̻���ָ��
		  Structure_Main_Context *Main_Context_Pointer��������ָ��
	���أ���
*/
void	Counter_Timer_16_Bit_1_Interrupt_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer)
{
	/* �������� */
	Run_Task(Process_Context_Pointer, Main_Context_Pointer, Counter_Timer_16_Bit_1_Interrupt_Task_Index);
	
	/* ����ж� */
	if (Counter_Timer_16_Bit_1_Clear_Interrupt_Function_Pointer != 0)
	{
		Counter_Timer_16_Bit_1_Clear_Interrupt_Function_Pointer();
	}
	else
	{
		/* ���� */
	}
}

/*
	���ܣ�32λ��������ʱ��0�жϴ�������ڲ���
	������Structure_Process_Context *Process_Context_Pointer�����̻���ָ��
		  Structure_Main_Context *Main_Context_Pointer��������ָ��
	���أ���
*/
void	Counter_Timer_32_Bit_0_Interrupt_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer)
{
	/* �������� */
	Run_Task(Process_Context_Pointer, Main_Context_Pointer, Counter_Timer_32_Bit_0_Interrupt_Task_Index);
	
	/* ����ж� */
	if (Counter_Timer_32_Bit_0_Clear_Interrupt_Function_Pointer != 0)
	{
		Counter_Timer_32_Bit_0_Clear_Interrupt_Function_Pointer();
	}
	else
	{
		/* ���� */
	}
}

/*
	���ܣ�32λ��������ʱ��1�жϴ�������ڲ���
	������Structure_Process_Context *Process_Context_Pointer�����̻���ָ��
		  Structure_Main_Context *Main_Context_Pointer��������ָ��
	���أ���
*/
void	Counter_Timer_32_Bit_1_Interrupt_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer)
{
	/* �������� */
	Run_Task(Process_Context_Pointer, Main_Context_Pointer, Counter_Timer_32_Bit_1_Interrupt_Task_Index);
	
	/* ����ж� */
	if (Counter_Timer_32_Bit_1_Clear_Interrupt_Function_Pointer != 0)
	{
		Counter_Timer_32_Bit_1_Clear_Interrupt_Function_Pointer();
	}
	else
	{
		/* ���� */
	}
}

/*
	���ܣ�SPI1�жϴ�������ڲ���
	������Structure_Process_Context *Process_Context_Pointer�����̻���ָ��
		  Structure_Main_Context *Main_Context_Pointer��������ָ��
	���أ���
*/
void	SPI_1_Interrupt_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer)
{
	/* �������� */
	Run_Task(Process_Context_Pointer, Main_Context_Pointer, SPI_1_Interrupt_Task_Index);
	
	/* ����ж� */
	if (SPI_1_Clear_Interrupt_Function_Pointer != 0)
	{
		SPI_1_Clear_Interrupt_Function_Pointer();
	}
	else
	{
		/* ���� */
	}
}

/*
	���ܣ�UART�жϴ�������ڲ���
	������Structure_Process_Context *Process_Context_Pointer�����̻���ָ��
		  Structure_Main_Context *Main_Context_Pointer��������ָ��
	���أ���
*/
void	UART_Interrupt_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer)
{
	/* �������� */
	Run_Task(Process_Context_Pointer, Main_Context_Pointer, UART_Interrupt_Task_Index);
	
	/* ����ж� */
	if (UART_Clear_Interrupt_Function_Pointer != 0)
	{
		UART_Clear_Interrupt_Function_Pointer();
	}
	else
	{
		/* ���� */
	}
}

/*
	���ܣ�ADC�жϴ�������ڲ���
	������Structure_Process_Context *Process_Context_Pointer�����̻���ָ��
		  Structure_Main_Context *Main_Context_Pointer��������ָ��
	���أ���
*/
void	ADC_Interrupt_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer)
{
	/* �������� */
	Run_Task(Process_Context_Pointer, Main_Context_Pointer, ADC_Interrupt_Task_Index);
	
	/* ����ж� */
	if (ADC_Clear_Interrupt_Function_Pointer != 0)
	{
		ADC_Clear_Interrupt_Function_Pointer();
	}
	else
	{
		/* ���� */
	}
}

/*
	���ܣ���춨ʱ���жϴ�������ڲ���
	������Structure_Process_Context *Process_Context_Pointer�����̻���ָ��
		  Structure_Main_Context *Main_Context_Pointer��������ָ��
	���أ���
*/
void	Watchdog_Timer_Interrupt_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer)
{
	/* �������� */
	Run_Task(Process_Context_Pointer, Main_Context_Pointer, Watchdog_Timer_Interrupt_Task_Index);
	
	/* ����ж� */
	if (Watchdog_Timer_Clear_Interrupt_Function_Pointer != 0)
	{
		Watchdog_Timer_Clear_Interrupt_Function_Pointer();
	}
	else
	{
		/* ���� */
	}
}

/*
	���ܣ�Ƿѹ����жϴ�������ڲ���
	������Structure_Process_Context *Process_Context_Pointer�����̻���ָ��
		  Structure_Main_Context *Main_Context_Pointer��������ָ��
	���أ���
*/
void	Brown_Out_Detect_Interrupt_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer)
{
	/* �������� */
	Run_Task(Process_Context_Pointer, Main_Context_Pointer, Brown_Out_Detect_Interrupt_Task_Index);
	
	/* ����ж� */
	if (Brown_Out_Detect_Clear_Interrupt_Function_Pointer != 0)
	{
		Brown_Out_Detect_Clear_Interrupt_Function_Pointer();
	}
	else
	{
		/* ���� */
	}
}

/*
	���ܣ�GPIO3�жϴ�������ڲ���
	������Structure_Process_Context *Process_Context_Pointer�����̻���ָ��
		  Structure_Main_Context *Main_Context_Pointer��������ָ��
	���أ���
*/
void	GPIO_3_Interrupt_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer)
{
	/* �������� */
	Run_Task(Process_Context_Pointer, Main_Context_Pointer, GPIO_3_Interrupt_Task_Index);
	
	/* ����ж� */
	if (GPIO_3_Clear_Interrupt_Function_Pointer != 0)
	{
		GPIO_3_Clear_Interrupt_Function_Pointer();
	}
	else
	{
		/* ���� */
	}
}

/*
	���ܣ�GPIO2�жϴ�������ڲ���
	������Structure_Process_Context *Process_Context_Pointer�����̻���ָ��
		  Structure_Main_Context *Main_Context_Pointer��������ָ��
	���أ���
*/
void	GPIO_2_Interrupt_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer)
{
	/* �������� */
	Run_Task(Process_Context_Pointer, Main_Context_Pointer, GPIO_2_Interrupt_Task_Index);
	
	/* ����ж� */
	if (GPIO_2_Clear_Interrupt_Function_Pointer != 0)
	{
		GPIO_2_Clear_Interrupt_Function_Pointer();
	}
	else
	{
		/* ���� */
	}
}

/*
	���ܣ�GPIO1�жϴ�������ڲ���
	������Structure_Process_Context *Process_Context_Pointer�����̻���ָ��
		  Structure_Main_Context *Main_Context_Pointer��������ָ��
	���أ���
*/
void	GPIO_1_Interrupt_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer)
{
	/* �������� */
	Run_Task(Process_Context_Pointer, Main_Context_Pointer, GPIO_1_Interrupt_Task_Index);
	
	/* ����ж� */
	if (GPIO_1_Clear_Interrupt_Function_Pointer != 0)
	{
		GPIO_1_Clear_Interrupt_Function_Pointer();
	}
	else
	{
		/* ���� */
	}
}

/*
	���ܣ�GPIO0�жϴ�������ڲ���
	������Structure_Process_Context *Process_Context_Pointer�����̻���ָ��
		  Structure_Main_Context *Main_Context_Pointer��������ָ��
	���أ���
*/
void	GPIO_0_Interrupt_Handle_Middle_Operation(Structure_Process_Context *Process_Context_Pointer, Structure_Main_Context *Main_Context_Pointer)
{
	/* �������� */
	Run_Task(Process_Context_Pointer, Main_Context_Pointer, GPIO_0_Interrupt_Task_Index);
	
	/* ����ж� */
	if (GPIO_0_Clear_Interrupt_Function_Pointer != 0)
	{
		GPIO_0_Clear_Interrupt_Function_Pointer();
	}
	else
	{
		/* ���� */
	}
}
