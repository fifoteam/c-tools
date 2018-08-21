
##功能介绍
ucf_gen 可以提取出 cadence网表文件中的引脚信息，然后写成ucf的格式

##使用须知
在新版本的cadence OrCAD Capture 16.3 软件中，已经有了 自动生成ucf的功能。
最方便的方式是使用cadence自带的功能。

##使用方法
### step 1
cadence 保存网表文件 ，格式为orpads2k的格式

### step 2
在命令行下，输入 ucf_gen。会显示提示信息，提示用户输入 FPGA的unit num和网表文件的路径
如果使用示例的网表文件，可以填写 u4 c:\test\example.NET

### step 3
执行命令，会在c:\test目录下面的到example.ucf

### step 4
文件分析

***example.NET***
网表中部分内容
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
解析后的ucf文件中的部分内容
```
NET	"CLK_40M_IN"	LOC = F1	| IOSTANDARD = "LVCMOS33";	#CLK_40M_IN
NET	"DDR3_VREF"	LOC = E12	| IOSTANDARD = "LVCMOS33";	#DDR3_VREF
NET	"DDR3_VREF"	LOC = L13	| IOSTANDARD = "LVCMOS33";	#DDR3_VREF
NET	"FDDR_A0"	LOC = H15	| IOSTANDARD = "LVCMOS33";	#FDDR_A0
NET	"FDDR_A1"	LOC = H16	| IOSTANDARD = "LVCMOS33";	#FDDR_A1
NET	"FDDR_A10"	LOC = C15	| IOSTANDARD = "LVCMOS33";	#FDDR_A10
NET	"FDDR_A11"	LOC = G11	| IOSTANDARD = "LVCMOS33";	#FDDR_A11
```
