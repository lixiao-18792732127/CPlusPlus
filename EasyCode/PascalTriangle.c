
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int a[11][20],i,j;    //��ʼ��   
	for(i=0;i<11;i++)     
		for(j=0;j<20;j++)     
			a[i][j]=0;     //�����鸽ֵ   
	for(i=0;i<10;i++)  
	{    
		for(j=0;j<=i;j++)  
		{     
			if(j<1)a[i][j]=1;//��ͷ�ĵ�һ����Ϊ1     
			else if(i==0)break;     
			else     
				a[i][j]=a[i-1][j-1]+a[i-1][j]; //������ǵĹ���    
		}  
	}    //���   
	for(i=0;i<10;i++)  
	{     
		for(j=0;j<=i;j++)     
			printf("%d ",a[i][j]);  
		printf("\n");  
	}
	return 0;
}