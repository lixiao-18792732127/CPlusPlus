//��һ�����ֽ���ð������
#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>

void BubbleSort(int *arr, int n)
{
	int i = 0;
	int j = 0;
	int tmp = 0;
	printf("����ð������֮��");
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
	printf("���������ĸ�����\n");
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	BubbleSort(arr, n);
	system("pause");
	return 0;
}