#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j;
	for(i=1;i<=7;i++)
	{
		for(j=0;j<7-i;j++)
		{
			printf(" ");
		}
		for(j=0;j<2*i-1;j++)
		{
			printf("*");
		}
		printf("\n");
	}

	for(i=6;i>0;i--)
	{
		for(j=0;j<=6-i;j++)
		{
			printf(" ");
		}
		for(j=0;j<2*i-1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}