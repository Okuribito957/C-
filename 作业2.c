#include<stdio.h>
#include<math.h>
void main()
{
	int x;
	printf("请输入一个数：");
	scanf("%d", &x);
	if (abs(x) < 10)
	{
		printf("这是个一位数");
	}
	else if (abs(x) < 100)
	{
		printf("这是一个两位数");
	}
	else if (abs(x) < 1000)
	{
		printf("这是一个三位数");
	}
	else if (abs(x) < 10000)
	{
		printf("这个数是四位数");
	}
	else
	{
		printf("这是个五位数");
	}
}