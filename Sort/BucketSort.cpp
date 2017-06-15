//如果需要对数据范围在 0~1000 之间的整数进行排序，
//我们需要 1001 个桶，来表示 0~1000
//之间每一个数出现的次数，
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
	printf("桶排序后：");
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
	printf("请输入数的个数：\n");
	scanf("%d", &n);
	BucketSort(bucket, n);
	system("pause");
	return 0;
}
