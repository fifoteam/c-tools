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

#include	"MCU123_LPC1114_Kit_IIC.h"

/* ���ݶ��� */

/* �������� */
Integer_Unsigned_8_Bit	IIC_Library_Transfer_Valid, IIC_Library_Transfer_Mode, IIC_Library_Device_Address;
Integer_Unsigned_8_Bit	*IIC_Library_Receiver_Data_Pointer, *IIC_Library_Transmitter_Data_Pointer;
Integer_Unsigned_32_Bit	IIC_Library_Receiver_Data_Count, IIC_Library_Transmitter_Data_Count;

/* �������� */

/*
	���ܣ���ʼ��
	��������
	���أ���
*/
void	IIC_Library_Initialize(void)
{
	Union_IIC_Serial_Clock_High_Duty_Cycle_Register	IIC_Serial_Clock_High_Duty_Cycle_Register;
	Union_IIC_Serial_Clock_Low_Duty_Cycle_Register	IIC_Serial_Clock_Low_Duty_Cycle_Register;
	
	/* ���ø�ռ�ձ� */
	IIC_Serial_Clock_High_Duty_Cycle_Register.Value = Read_IIC_Serial_Clock_High_Duty_Cycle_Register();
	IIC_Serial_Clock_High_Duty_Cycle_Register.Internal.Counte_Value = 240;
	Write_IIC_Serial_Clock_High_Duty_Cycle_Register(IIC_Serial_Clock_High_Duty_Cycle_Register.Value);
	
	/* ���õ�ռ�ձ� */
	IIC_Serial_Clock_Low_Duty_Cycle_Register.Value = Read_IIC_Serial_Clock_Low_Duty_Cycle_Register();
	IIC_Serial_Clock_Low_Duty_Cycle_Register.Internal.Counte_Value = 240;
	Write_IIC_Serial_Clock_Low_Duty_Cycle_Register(IIC_Serial_Clock_Low_Duty_Cycle_Register.Value);
}

/*
	���ܣ��򿪽ӿ�
	��������
	���أ���
*/
void	IIC_Library_Enable_Interface(void)
{
	Union_IIC_Control_Set_Register	IIC_Control_Set_Register;
	
	/* ���ñ�־ */
	IIC_Control_Set_Register.Value = Read_IIC_Control_Set_Register();
	IIC_Control_Set_Register.Internal.Interface_Enable_Set = 1;
	Write_IIC_Control_Set_Register(IIC_Control_Set_Register.Value);
}

/*
	���ܣ��رսӿ�
	��������
	���أ���
*/
void	IIC_Library_Disable_Interface(void)
{
	Union_IIC_Control_Clear_Register	IIC_Control_Clear_Register;
	
	/* �����־ */
	IIC_Control_Clear_Register.Value = 0;
	IIC_Control_Clear_Register.Internal.Assert_Acknowledge_Clear = 1;
	IIC_Control_Clear_Register.Internal.Serial_Interrupt_Clear = 1;
	IIC_Control_Clear_Register.Internal.Start_Condition_Clear = 1;
	IIC_Control_Clear_Register.Internal.Interface_Enable_Clear = 1;
	Write_IIC_Control_Clear_Register(IIC_Control_Clear_Register.Value);
}

/*
	���ܣ�������������ģʽ
	������Integer_Unsigned_8_Bit Device_Address���豸��ַ
		  Integer_Unsigned_8_Bit *Data_Pointer������ָ��
		  Integer_Unsigned_32_Bit Data_Count����������
	���أ���
*/
void	IIC_Library_Enter_Master_Receiver_Mode(Integer_Unsigned_8_Bit Device_Address, Integer_Unsigned_8_Bit *Data_Pointer, Integer_Unsigned_32_Bit Data_Count)
{
	Union_IIC_Control_Set_Register	IIC_Control_Set_Register;
	
	/* �ж��������� */
	if (Data_Count > 0)
	{
		/* ���ù������� */
		IIC_Library_Transfer_Valid = 1;
		IIC_Library_Transfer_Mode = 1;
		IIC_Library_Device_Address = Device_Address;
		IIC_Library_Receiver_Data_Pointer = Data_Pointer;
		IIC_Library_Receiver_Data_Count = Data_Count;
		
		/* ���ÿ��Ʊ�־ */
		IIC_Control_Set_Register.Value = Read_IIC_Control_Set_Register();
		IIC_Control_Set_Register.Internal.Start_Condition_Set = 1;
		Write_IIC_Control_Set_Register(IIC_Control_Set_Register.Value);
	}
	else
	{
		/* ���� */
	}
}

/*
	���ܣ�������������ģʽ
	������Integer_Unsigned_8_Bit Device_Address���豸��ַ
		  Integer_Unsigned_8_Bit *Data_Pointer������ָ��
		  Integer_Unsigned_32_Bit Data_Count����������
	���أ���
*/
void	IIC_Library_Enter_Master_Transmitter_Mode(Integer_Unsigned_8_Bit Device_Address, Integer_Unsigned_8_Bit *Data_Pointer, Integer_Unsigned_32_Bit Data_Count)
{
	Union_IIC_Control_Set_Register	IIC_Control_Set_Register;
	
	/* �ж��������� */
	if (Data_Count > 0)
	{
		/* ���ù������� */
		IIC_Library_Transfer_Valid = 1;
		IIC_Library_Transfer_Mode = 0;
		IIC_Library_Device_Address = Device_Address;
		IIC_Library_Transmitter_Data_Pointer = Data_Pointer;
		IIC_Library_Transmitter_Data_Count = Data_Count;
		
		/* ���ÿ��Ʊ�־ */
		IIC_Control_Set_Register.Value = Read_IIC_Control_Set_Register();
		IIC_Control_Set_Register.Internal.Start_Condition_Set = 1;
		Write_IIC_Control_Set_Register(IIC_Control_Set_Register.Value);
	}
	else
	{
		/* ���� */
	}
}

/*
	���ܣ��뿪��ģʽ
	��������
	���أ���
*/
void	IIC_Library_Leave_Master_Mode(void)
{
	Union_IIC_Control_Set_Register	IIC_Control_Set_Register;
	
	/* �ȴ�ֹͣ */
	do
	{
		IIC_Control_Set_Register.Value = Read_IIC_Control_Set_Register();
	}
	while ( (IIC_Library_Transfer_Valid) || (IIC_Control_Set_Register.Internal.Stop_Condition_Set == 1) );
}

/*
	���ܣ�����ж�
	��������
	���أ���
*/
void	IIC_Library_Clear_Interrupt(void)
{
	Union_IIC_Status_Register			IIC_Status_Register;
	Union_IIC_Data_Register				IIC_Data_Register;
	Union_IIC_Control_Clear_Register	IIC_Control_Clear_Register;
	Union_IIC_Control_Set_Register		IIC_Control_Set_Register;
	
	/* �ж�״̬ */
	IIC_Status_Register.Value = Read_IIC_Status_Register();
	switch (IIC_Status_Register.Internal.Status_Code)
	{
		/* �Ѿ����� */
		case 0x08 :
		{
			/* �����豸��ַ�ʹ���ģʽ */
			IIC_Data_Register.Value = Read_IIC_Data_Register();
			IIC_Data_Register.Internal.Data_Code = (IIC_Library_Device_Address << 1) | IIC_Library_Transfer_Mode;
			Write_IIC_Data_Register(IIC_Data_Register.Value);
			
			/* ������Ʊ�־ */
			IIC_Control_Clear_Register.Value = 0;
			IIC_Control_Clear_Register.Internal.Start_Condition_Clear = 1;
			Write_IIC_Control_Clear_Register(IIC_Control_Clear_Register.Value);
			
			break;
		}
		
		/* �Ѿ������豸��ַ��д����ģʽ���յ�ȷ�� */
		case 0x18 :
		{
			/* �������ݵ�ַ */
			IIC_Data_Register.Value = Read_IIC_Data_Register();
			IIC_Data_Register.Internal.Data_Code = *IIC_Library_Transmitter_Data_Pointer;
			Write_IIC_Data_Register(IIC_Data_Register.Value);
			
			break;
		}
		
		/* �Ѿ��������ݣ��յ�ȷ�� */
		case 0x28 :
		{
			/* ��������ָ����������� */
			IIC_Library_Transmitter_Data_Pointer += 1;
			IIC_Library_Transmitter_Data_Count -= 1;
			
			/* �ж��������� */
			if (IIC_Library_Transmitter_Data_Count > 0)
			{
				/* �������� */
				IIC_Data_Register.Value = Read_IIC_Data_Register();
				IIC_Data_Register.Internal.Data_Code = *IIC_Library_Transmitter_Data_Pointer;
				Write_IIC_Data_Register(IIC_Data_Register.Value);
			}
			else
			{
				/* ���ÿ��Ʊ�־ */
				IIC_Control_Set_Register.Value = Read_IIC_Control_Set_Register();
				IIC_Control_Set_Register.Internal.Stop_Condition_Set = 1;
				Write_IIC_Control_Set_Register(IIC_Control_Set_Register.Value);
				
				/* ���ù������� */
				IIC_Library_Transfer_Valid = 0;
			}
			
			break;
		}
		
		/* �Ѿ������豸��ַ�Ͷ�����ģʽ���յ�ȷ�� */
		case 0x40 :
		{
			/* ���ÿ��Ʊ�־ */
			if (IIC_Library_Receiver_Data_Count > 1)
			{
				/* ���ÿ��Ʊ�־ */
				IIC_Control_Set_Register.Value = Read_IIC_Control_Set_Register();
				IIC_Control_Set_Register.Internal.Assert_Acknowledge_Set = 1;
				Write_IIC_Control_Set_Register(IIC_Control_Set_Register.Value);
			}
			else
			{
				/* ���� */
			}
			
			break;
		}
		
		/* �Ѿ��������ݣ�����ȷ�� */
		case 0x50 :
		{
			/* ȡ�����ݣ���������ָ����������� */
			*IIC_Library_Receiver_Data_Pointer = Read_IIC_Data_Register();
			IIC_Library_Receiver_Data_Pointer += 1;
			IIC_Library_Receiver_Data_Count -= 1;
			
			/* �ж��������� */
			if (IIC_Library_Receiver_Data_Count == 1)
			{
				/* ������Ʊ�־ */
				IIC_Control_Clear_Register.Value = 0;
				IIC_Control_Clear_Register.Internal.Assert_Acknowledge_Clear = 1;
				Write_IIC_Control_Clear_Register(IIC_Control_Clear_Register.Value);
			}
			else
			{
				/* ���� */
			}
			
			break;
		}
		
		/* �Ѿ��������ݣ�������ȷ�� */
		case 0x58 :
		{
			/* ȡ������ */
			*IIC_Library_Receiver_Data_Pointer = Read_IIC_Data_Register();
			
			/* ���ÿ��Ʊ�־ */
			IIC_Control_Set_Register.Value = Read_IIC_Control_Set_Register();
			IIC_Control_Set_Register.Internal.Stop_Condition_Set = 1;
			Write_IIC_Control_Set_Register(IIC_Control_Set_Register.Value);
			
			/* ���ù������� */
			IIC_Library_Transfer_Valid = 0;
			
			break;
		}
		
		/* Ĭ�� */
		default :
		{
			/* ���ÿ��Ʊ�־ */
			IIC_Control_Set_Register.Value = Read_IIC_Control_Set_Register();
			IIC_Control_Set_Register.Internal.Stop_Condition_Set = 1;
			Write_IIC_Control_Set_Register(IIC_Control_Set_Register.Value);
			
			/* ���ù������� */
			IIC_Library_Transfer_Valid = 0;
			
			break;
		}
	}
	
	/* ������Ʊ�־ */
	IIC_Control_Clear_Register.Value = 0;
	IIC_Control_Clear_Register.Internal.Serial_Interrupt_Clear = 1;
	Write_IIC_Control_Clear_Register(IIC_Control_Clear_Register.Value);
}
