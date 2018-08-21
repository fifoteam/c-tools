#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define  STR_LENGTH 300
#define  PIN_NUM 1800

FILE    *fp;
FILE    *fq;
char    str[STR_LENGTH];
char	NET[]="*NET*";
char	SIGNAL[]="*SIGNAL*";
char	UNIT[]="U43.";
char	END[]="*END*";
char	net_name[PIN_NUM][STR_LENGTH];
char	net_loc[PIN_NUM][STR_LENGTH];
char	unit_length;

char 	ucfgen_version[] = "2014 version 1.2";


int main(int argc, char *argv[]) {

	char	ASCFILE[STR_LENGTH];
	char	UCFFILE[STR_LENGTH];
	int		res;
	int		i;


	time_t rawtime;
	struct tm * timeinfo;

	time(&rawtime); /* get the current time */
	timeinfo = localtime(&rawtime);

	printf("The current time is: %s\n", asctime(timeinfo));
	printf("%4d-%02d-%02d %02d:%02d:%02d\n\n",
	1900+timeinfo->tm_year, /* year */
	1+timeinfo->tm_mon, /* month */
	timeinfo->tm_mday, /* date */
	timeinfo->tm_hour, /* hour */
	timeinfo->tm_min, /* minute */
	timeinfo->tm_sec); /* second */

	//��ӡ��ʾ��Ϣ����ȡ��Ϣ
	printf("\tUCF GENERATER\n");
	printf("Copyright XingHaitao %s\n",&ucfgen_version);
	printf("Please input necessary message\n");
	printf("UXX and Sourcefile\n");
	scanf("%s %s",&UNIT,&ASCFILE);

	//��Uxx�����'.'
	for(i=0;i<STR_LENGTH-1;i++) {
		if(UNIT[i]=='u') {
			UNIT[i]='U';
		}
		else if(UNIT[i]=='\0') {
			UNIT[i]	= '.';
			UNIT[i+1] = '\0';
			break;
		}
	}
	unit_length=strlen(UNIT);
	
	//���� UCFFILE
	for(i=0;i<STR_LENGTH-1;i++) {
		if(ASCFILE[i]=='.') {
			UCFFILE[i]='.';
			UCFFILE[i+1]='u';
			UCFFILE[i+2]='c';
			UCFFILE[i+3]='f';
			UCFFILE[i+4]='\0';
			break;
		}
		else {
			UCFFILE[i]=ASCFILE[i];
		}
	}


	res	= 1;
	//��asc�ļ�
	if((fp=(fopen(ASCFILE,"rt")))==NULL) {
		printf("\nerror on open file!");
		getch();
		exit(1);
	}
	else {
		printf("open src file!\n");
	}
	//��.asc�е���Ϣ
	//Ѱ��*NET*
	while(res) {
		fgets(str,STR_LENGTH-1,fp);
		res	= strncmp(str,NET,5);
		if(fp == NULL) {
			printf("there is no net message wrong!!!\n");
			fclose(fp);
			getch();
			return 1;
		}
	}
	//	//���û���ҵ�*SIGNAL*,��ô�����˳�
	//	if(find_signal()) {
	//		return 0;
	//	}
	//	printf("have find *SIGNAL*\n");
	//	//����*SIGNAL*֮����ź���
	//	strcpy(net_name,str+9);
	//	//printf("%s\n",net_name);


	analyze();




	//����ucf�ļ�
	if((fq=(fopen(UCFFILE,"wt+")))==NULL) {
		printf("new file wrong\n");
		getchar();
		return 0;
	}
	else {
		printf("new file OK !!\n");
	}

	printf("The current time is: %s\n", asctime(timeinfo));
	printf("%4d-%02d-%02d %02d:%02d:%02d\n\n",
	1900+timeinfo->tm_year, /* year */
	1+timeinfo->tm_mon, /* month */
	timeinfo->tm_mday, /* date */
	timeinfo->tm_hour, /* hour */
	timeinfo->tm_min, /* minute */
	timeinfo->tm_sec); /* second */

	//д��UCF�ļ�ͷע����Ϣ
	fputs("#----------------------------------------------------\n",fq);
	fprintf(fq,"#	Copyright XingHaitao %s\n",&ucfgen_version),
	fprintf(fq,"#	UCF FILE GENERATED @ %4d-%02d-%02d %02d:%02d:%02d\n",
	1900+timeinfo->tm_year, /* year */
	1+timeinfo->tm_mon, /* month */
	timeinfo->tm_mday, /* date */
	timeinfo->tm_hour, /* hour */
	timeinfo->tm_min, /* minute */
	timeinfo->tm_sec); /* second */
	fprintf(fq,"#	The source file is  %s\n",&ASCFILE),
	fputs("#----------------------------------------------------\n\n",fq);

	write_ucf();




//	fgets(str,STR_LENGTH-1,fp);
//	while(1) {
//		res = test_pin();
//		if(!res) {
//			fgets(str,STR_LENGTH-1,fp);
//		}
//		while(test_signal()) {
//			test_pin();
//			fgets(str,STR_LENGTH-1,fp);
//		}
//		fgets(str,STR_LENGTH-1,fp);
//	}
	
	
	

}//end main program



//sub functions

//return 1 -> not find
//return 0 -> find
int find_signal(void) {
	//Ѱ��*SIGNAL*
	int res_signal = 1;
	while(res_signal) {
		fgets(str,STR_LENGTH-1,fp);
		if(!strncmp(str,END,5)) {
			printf("there is no signal message wrong!!!\n");
			fclose(fp);
			return 1;
		}
		if(fp == NULL) {
			printf("there is no signal message wrong!!!\n");
			fclose(fp);
			return 1;
		}
		res_signal	= strncmp(str,SIGNAL,8);
	}
	return 0;
}


//res_test_pin = 0 -> find U43
//res_test_pin = 1 -> not find U43
//int test_pin(void) {
//	int	res_test_pin=1;
//	int i,j;
//	int	strLength;
//
//	//����һ���Ƿ���U43.
//	i = 0;
//	j = 0;
//	strLength	= strlen(str);
//
//	while(i < strLength-2) {
//		res_test_pin = strncmp(str+i,UNIT,unit_length);
//
//		//�����ַ�����ȣ�����0
//		if(res_test_pin == 0) {
//			strcpy(net_loc,str+i+unit_length+1);
//			//printf("have find U43.\n");
//			//printf("the pin is %s\n",net_loc);
//			//д������Լ����Ϣ
//			j=0;
//			while(j<strlen(net_name)) {
//				if(net_name[j]=='\r'|net_name[j]=='\n') {
//					net_name[j] = '\0';
//				}
//				j++;
//			}
//			j=0;
//			while(j<strlen(net_loc)) {
//				if(net_loc[j]=='\r'|net_loc[j]=='\n'|net_loc[j]==' ') {
//					net_loc[j] = '\0';
//				}
//				j++;
//			}
//			fprintf(fq,"NET\t\"%s\"\tLOC = %s\t| IOSTANDARD = \"LVCMOS33\";\t#%s\n",net_name,net_loc,net_name);
//			break;
//		}
//		i++;
//	}
//	return res_test_pin;
//}


int analyze(void) {

	int i = 0;
	int j = 0;
	int k = 0;
	int strLength = 0;
	int res_test_pin = 1;

	while(i<PIN_NUM) {
		
		//����Ѿ������ļ�β������
		if(fp == NULL) {
			fclose(fp);
			//�����һ�����ҵ���U43
			if (!res_test_pin) {
				i++;
				net_name[i][0]	= '\0';
				net_loc[i][0]	= '\0';
			}
			//�����һ����û���ҵ�U43,������
			else {
				net_name[i][0]	= '\0';
				net_loc[i][0]	= '\0';
			}
			return;
		}
		
		//�ڴ��ļ���ץȡһ������
		fgets(str,STR_LENGTH-1,fp);
		strLength	= strlen(str);

		//�����һ����end����ô�ͽ�����������
		if(!strncmp(str,END,5)) {
			fclose(fp);
			//�����һ�����ҵ���U43
			if (!res_test_pin) {
				i++;
				net_name[i][0]	= '\0';
				net_loc[i][0]	= '\0';
			}
			//�����һ����û���ҵ�U43,������
			else {
				net_name[i][0]	= '\0';
				net_loc[i][0]	= '\0';
			}
			return;
		}

		//�����һ����signal������net name
		if(!strncmp(str,SIGNAL,8)) {
			strcpy(net_name[i],str+9);
			//ȥ�� net name �Ľ�����
			k=0;
			while(k<strlen(net_name[i])) {
				if(net_name[i][k]=='\r'|net_name[i][k]=='\n') {
					net_name[i][k] = '\0';
				}
				k++;
			}
		}

		//�����һ�а���u43������net loc,i++,����net name.����������Ļ���ʲô������
		else {

			j=0;
			res_test_pin=1;
			//�����Ƿ���U43����Ϣ
			while(j < strLength-2) {
				res_test_pin = strncmp(str+j,UNIT,unit_length);		//�����ַ�����ȣ�����0
				//�����ַ�����ȣ�˵����һ�е����λ����U43
				if(res_test_pin == 0) {
					//����һ��ʣ����ַ�������net loc��
					strcpy(net_loc[i],str+j+unit_length);
					//�����س��� �ո����ʱ��˵�����ַ���������
					k=0;
					while(k<strlen(net_loc[i])) {
						if(net_loc[i][k]=='\r'|net_loc[i][k]=='\n'|net_loc[i][k]==' ') {
							net_loc[i][k] = '\0';
						}
						k++;
					}
					
					//Ĭ�ϵ�net name����һ��net name
					for(k=0;k<strlen(net_name[i]);k++) {
						net_name[i+1][k] = net_name[i][k];
					}
					//λ�ü�1
					i++;
				}
				//������û���ҵ�u43����Ҫj++
				j++;
			}
		}

	}
	return;

}


int write_ucf(void) {
	int	i = 0;
	
//	for(i=0;i<strlen(net_name);i++) {
//		fprintf(fq,"NET\t\"%s\"\tLOC = %s\t| IOSTANDARD = \"LVCMOS33\";\t#%s\n",net_name[i],net_loc[i],net_name[i]);
//	}
	
	while(1) {
		if(net_name[i][0] != '\0') {
			fprintf(fq,"NET\t\"%s\"\tLOC = %s\t| IOSTANDARD = \"LVCMOS33\";\t#%s\n",net_name[i],net_loc[i],net_name[i]);
			i++;
		}
		else {
			return;
		}
	}
}



int test_signal(void) {
	int res_signal = 1;
	if(!strncmp(str,END,5)) {
		//		fputs("#--ref 2 clk constraint\n",fq);
		//		fputs("#--1 PERIOD\n",fq);
		//		fputs("#LOCAL CLK\n",fq);
		//		fputs("NET \"clk_osc\" TNM_NET = \"LOC_CLK62M5\";\n",fq);
		//		fputs("TIMESPEC TS_LOC_CLK62M5 = PERIOD \"LOC_CLK62M5\" 16 ns HIGH 50 %;\n\n",fq);
		//		fputs("#RECOVERY CLK\n",fq);
		//		fputs("NET \"clk_rec\" TNM_NET = \"REC_CLK62M5\";\n",fq);
		//		fputs("TIMESPEC TS_REC_CLK62M5 = PERIOD \"REC_CLK62M5\" 16 ns HIGH 50 %;\n\n",fq);
		//		fputs("#--2 DCM PHASE_SHIFT\n",fq);
		//		fputs("INST \"inst_dcm_XXX/DCM_SP_INST\" CLKOUT_PHASE_SHIFT = fixed;\n",fq);
		//		fputs("INST \"inst_dcm_eth_25m/DCM_SP_INST\" PHASE_SHIFT = -255~255;\n\n",fq);
		//		fputs("#--ref 3 loc constraint\n",fq);
		//		fputs("#--1 IOB\n",fq);
		//		fputs("INST \"xx_reg_?\" IOB =TRUE;\n\n",fq);
		//		fputs("#--2 DCM LOC\n",fq);
		//		fputs("#250E\n",fq);
		//		fputs("#				DCMX0Y1		DCMX1Y1\n",fq);
		//		fputs("#				DCMX0Y0		DCMX1Y0\n",fq);
		//		fputs("#100E\n",fq);
		//		fputs("#				NA			DCMX0Y1\n",fq);
		//		fputs("#				NA			DCMX0Y0\n",fq);
		//		fputs("INST \"inst_dcm_xx/DCM_SP_INST\" LOC = DCM_X?Y?;\n\n",fq);
		//		fputs("#--2 BUFGMUX LOC\n",fq);
		//		fputs("#			X1Y10	X1Y11	X2Y10	X2Y11\n",fq);
		//		fputs("#	X0Y9									X3Y9\n",fq);
		//		fputs("#	X0Y8									X3Y8\n",fq);
		//		fputs("#	X0Y7									X3Y7\n",fq);
		//		fputs("#	X0Y6									X3Y6\n",fq);
		//		fputs("#	X0Y5									X3Y5\n",fq);
		//		fputs("#	X0Y4									X3Y4\n",fq);
		//		fputs("#	X0Y3									X3Y2\n",fq);
		//		fputs("#	X0Y2									X3Y1\n",fq);
		//		fputs("#			X1Y0	X1Y1	X2Y0	X2Y1\n",fq);
		//		fputs("INST \"inst_dcm_XX/CLK0_BUFG_INST\" LOC = BUFGMUX_X?Y?;\n",fq);
		//		fputs("INST \"inst_dcm_XX/CLKDV_BUFG_INST\" LOC = BUFGMUX_X?Y?;\n",fq);
		//		fputs("INST \"inst_dcm_XX/CLKFX_BUFG_INST\" LOC = BUFGMUX_X?Y?;\n",fq);
		//		fputs("INST \"inst_dcm_XX/CLK2X_BUFG_INST\" LOC = BUFGMUX_X?Y?;\n\n",fq);
		//		fputs("#--3 PBLOCK LOC\n\n",fq);
		//		fputs("#--4 REG&LUT LOC\n\n",fq);
		//		fputs("#--5 KEY ROUTE\n\n",fq);
		fclose(fp);
		exit(1);
	}

	res_signal	= strncmp(str,SIGNAL,8);
	if(!res_signal) {
		strcpy(net_name,str+9);
	}

	return res_signal;
}

