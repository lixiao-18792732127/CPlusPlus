//�����Ҫ�����ݷ�Χ�� 0~1000 ֮���������������
//������Ҫ 1001 ��Ͱ������ʾ 0~1000
//֮��ÿһ�������ֵĴ�����
#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void BucketSort(int *bucket, int n)
{
	int i = 0;
	int t = 0;
	int j = 0;
	for (i = 1; i <= n; i++)
	{
		scanf("%d", &t);
		bucket[t]++;
	}
	printf("Ͱ�����");
	for (i = 0; i <= 1000; i++)
	{
		for (j = 1; j <= bucket[i]; j++)
		{
			printf("%d ", i);
		}
	}
	getchar();
	getchar();
	return;
}
int main()
{
	int bucket[1001];
	for (int i = 0; i <= 1000; i++)
	{
		bucket[i] = 0;
	}
	int n = 0;
	printf("���������ĸ�����\n");
	scanf("%d", &n);
	BucketSort(bucket, n);
	system("pause");
	return 0;
}
