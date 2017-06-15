//对一组数字进行冒泡排序
#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>

void BubbleSort(int *arr, int n)
{
	int i = 0;
	int j = 0;
	int tmp = 0;
	printf("进行冒泡排序之后：");
	for (i = 0; i <= n-1; i++)
	{
		for (j = 0; j <= n-i; j++)
		{
			if (arr[j] < arr[j+1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j+1] = tmp;
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	getchar();
	getchar();

}
int main()
{
	int arr[100];
	int n = 0;
	printf("请输入数的个数：\n");
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	BubbleSort(arr, n);
	system("pause");
	return 0;
}