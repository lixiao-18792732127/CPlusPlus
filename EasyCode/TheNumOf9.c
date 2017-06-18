#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	int i;
	int count=0;
	char a[100]={0};
	for(i=0;i<100;i++)
	{
		a[i]=i+1;
	    if ((a[i]%10==9)||((a[i]-(a[i]%10))/10==9))
	    {
			count++;
			printf("%d\n",a[i]);
	    }
	}
	 printf("一共出现了%d次9",count);
	return 0;
}