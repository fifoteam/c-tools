
##���ܽ���
ucf_gen ������ȡ�� cadence�����ļ��е�������Ϣ��Ȼ��д��ucf�ĸ�ʽ

##ʹ����֪
���°汾��cadence OrCAD Capture 16.3 ����У��Ѿ����� �Զ�����ucf�Ĺ��ܡ�
���ķ�ʽ��ʹ��cadence�Դ��Ĺ��ܡ�

##ʹ�÷���
### step 1
cadence ���������ļ� ����ʽΪorpads2k�ĸ�ʽ

### step 2
���������£����� ucf_gen������ʾ��ʾ��Ϣ����ʾ�û����� FPGA��unit num�������ļ���·��
���ʹ��ʾ���������ļ���������д u4 c:\test\example.NET

### step 3
ִ���������c:\testĿ¼����ĵ�example.ucf

### step 4
�ļ�����

***example.NET***
�����в�������
```
*NET*
*SIGNAL* CLK_26M
X3.3 R50.1
*SIGNAL* CLK_40M_IN
R24.2 U4.F1
*SIGNAL* CLK_40M_INR
R24.1 X1.3
*SIGNAL* DDR3_VREF
C52.1 U6.H1 U6.M8 R28.2 R29.1 C50.1 U4.E12 U4.L13
C47.1 C48.1 C51.1
*SIGNAL* DDR3_ZQ
U6.L8 R30.1
*SIGNAL* FDDR_A0
U6.N3 U4.H15
*SIGNAL* FDDR_A1
U6.P7 U4.H16
```

***example.ucf***
�������ucf�ļ��еĲ�������
```
NET	"CLK_40M_IN"	LOC = F1	| IOSTANDARD = "LVCMOS33";	#CLK_40M_IN
NET	"DDR3_VREF"	LOC = E12	| IOSTANDARD = "LVCMOS33";	#DDR3_VREF
NET	"DDR3_VREF"	LOC = L13	| IOSTANDARD = "LVCMOS33";	#DDR3_VREF
NET	"FDDR_A0"	LOC = H15	| IOSTANDARD = "LVCMOS33";	#FDDR_A0
NET	"FDDR_A1"	LOC = H16	| IOSTANDARD = "LVCMOS33";	#FDDR_A1
NET	"FDDR_A10"	LOC = C15	| IOSTANDARD = "LVCMOS33";	#FDDR_A10
NET	"FDDR_A11"	LOC = G11	| IOSTANDARD = "LVCMOS33";	#FDDR_A11
```
