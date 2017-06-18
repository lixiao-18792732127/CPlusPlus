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
		printf("ÇëÊäÈëÃÜÂë£º\n");
	    scanf("%s",mima);
		if(strcmp(mima,"88888888")==0)
		{
			printf("login success\n");
			break;
		}
	}
	if(i==3)
	{
		printf("Èý´ÎÃÜÂë´íÎó£¬ÍË³ö³ÌÐò\n");
		exit(1);
	}
	printf("¹§Ï²Äã£¬Äã³É¹¦ÁË\n");
	return 0;
}