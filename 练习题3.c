#include<stdio.h>
void main()
{
	int a;
	printf("请输入一个整数：");
	scanf("%d", &a);
	if (a % 2 == 0)
	{
		printf("是偶数\n");
	}
	else
	{
		printf("是奇数\n");
	}
}