#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int Prime(int a)
{
	int j = 0;
	for (j = 2; j<a/2; j++)
	{
		if (a%j == 0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int i = 0;
	int res = 0;
	for (i = 101; i<=200; i++)
	{
		res = Prime(i);
		if (res == 1)
		{
			printf("%4d", i);
		}
	}
	system("pause");
	return 0;
}