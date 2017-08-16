#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>
int CountToN(int n)
{
	double a = 0;
	double b = 0;
	for (int i = 1; i < n; i++)
	{
		if (i % 2 == 0)
		{
			a = a - 1 / i;
		}
		else
		{
			b = b + 1 / i;
		}
	}

	return a + b;
}
int main()
{
	int n = 0;
	printf("请输入一个数字->");
	scanf("%d", &n);
	int ret = CountToN(n);
	printf("%d\n", ret);
	system("pause");
	return 0;
}