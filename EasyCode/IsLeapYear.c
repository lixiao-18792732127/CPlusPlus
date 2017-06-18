#include<iostream>
#include<stdlib.h>
using namespace std;
int isleap(int year);
void jisuan(int year,int month,int day);
int main()
{
	iny year,month,day,sum;
	cout<<"请输入日期："<<endl;
	cin>>year>>month>>day;
	isleap(year);
	jisuan(year,month,day);
	system("pause");
}

int isleap(int year)
{
	if((year%4==0&&year%100!=0)||year%400==0)
	{
		return 1;
		cout<<"改年是闰年"<<endl;
	}
	else
	{
		return 0;
		cout<<"改年不是闰年"<<endl;
	}
}

void jisuan(int year,int month,int day)
{
	int sum=0;
	int k=isleap(year);
	int i,a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	for(i=1;i<month;i++)
	{
		sum=sum+a[i];
	}
	sum=sum+day;
	if(k==1&&month>2)
	{
		sum=sum+1;
	}
	cout<<"这是一年中的第"<<sum<<"天"<<endl;
	system("pause");
}

