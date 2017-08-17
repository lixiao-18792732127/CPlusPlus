#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>

int BinarySearch(char data[], const int x, int beg, int last)
{
	int mid;//中间位置
	if (beg > last)
	{
		return -1;
	}
	while (beg <= last)
	{
		mid = (beg + last) / 2;
		if (x == data[mid])
		{
			return mid;
		}
		else if (data[mid] < x)
		{
			beg = mid + 1;
		}
		else if (data[mid] > x)
		{
			last = mid - 1;
		}
	}
	return -1;
}

int main()
{
	char arr[] = { 1, 2, 4, 6, 7, 8, 9 };
	int key = 0;
	int len = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < len; i++)
	{
		printf("%d", arr[i]);
	}
	printf("\n请输入要查找的数字\n");
	scanf("%d", &key);
	int ret = BinarySearch(arr, key, 0, len);
	if (ret == -1)
	{
		printf("没有找到！");
	}
	else
	{
		printf("找到了");
		printf("下标为：%d\n", ret);
	}
	system("pause");
	return 0;
}