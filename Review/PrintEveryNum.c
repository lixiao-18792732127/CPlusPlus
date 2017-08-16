#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>

void Print_num(int num)
{
	if (num > 9)
	{
		Print_num(num / 10);
	}
	printf("%d\n", num % 10);
}
int main()
{
	int num = 0;
	printf("请输入一个数字->");
	scanf("%d", &num);
	Print_num(num);
	system("pause");
	return 0;
}