#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<string.h>
#include<windows.h>
int main()
{
	int i=0;
	char mima[10]={0};
	for(i=0;i<3;i++)
	{
		printf("���������룺\n");
	    scanf("%s",mima);
		if(strcmp(mima,"88888888")==0)
		{
			printf("login success\n");
			break;
		}
	}
	if(i==3)
	{
		printf("������������˳�����\n");
		exit(1);
	}
	printf("��ϲ�㣬��ɹ���\n");
	return 0;
}