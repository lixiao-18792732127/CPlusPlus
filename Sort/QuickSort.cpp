#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>
int arr[101];
int n = 0;
void QuickSort(int left, int right)
{
	int i, j, t, tmp;
	if (left > right)//�����ߵĴ����ұߵģ�ֱ�ӷ���
	{
		return;
	}
	tmp = arr[left];
	i = left;
	j = right;
	while (i != j)
	{
		while (arr[j] >= tmp && i < j)
		{
			j--;
		}
		while (arr[i] <= tmp && i < j)
		{
			i++;
		}
		if (i < j)
		{
			t = arr[i];
			arr[i] = arr[j];
			arr[j] = t;
		}
	}
	//���ս���׼����λ
	arr[left] = arr[i];
	arr[i] = tmp;

	QuickSort(left, i - 1);
	QuickSort(i + 1, right);
}

int main()
{
	printf("���������ĸ�����\n");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("��������֮����Ϊ��");
	QuickSort(1, n);
	for (int i = 1; i <= n; i++)
	{
		printf("%d ", arr[i]);
	}
	getchar();
	getchar();
	system("pause");
	return 0;
}