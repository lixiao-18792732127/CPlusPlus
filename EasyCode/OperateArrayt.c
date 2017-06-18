#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
void init(int arr[],int len)
{
     int i=0;
     printf("初始化数组->:\n");
     for(i=0;i<len;i++)
     {
          scanf("%d",&arr[i]); 
     } 
}
  
void reverse(int arr[],int len)
{
     int i=0;
     printf("逆置数组->:\n");
     for(i=len-1;i>=0;i--)
     {
          printf("%d ",arr[i]); 
     } 
}
      
void empty(int arr[],int len)
{
     int i=0;
     printf("清空数组->:\n");
     for(i=0;i<len;i++)
     {
         arr[i]=0;
         printf("%d ",arr[i]);
     } 
}
  
int main()
{
     int arr[5];
     int i=0; 
     int len=0;
     len=sizeof(arr)/sizeof(arr[0]);
     init(arr,len);
     reverse(arr,len);
     printf("\n");
     empty(arr,len);
     return 0; 
}
 

 


//int primer(int a)
//{
//	int i=0;
//	for(i = 2;i <= sqrt(a);i++)
//	{
//		if(a%i==0) 
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	int a=0;
//	printf("请输入一个数：");
//	scanf("%d",&a);
//	if (primer(a))
//	{
//		printf("该数是素数！");
//	}
//	else
//	{
//		printf("该数不是素数！");
//	}
//	return 0;
//}