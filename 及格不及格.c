#include<stdio.h>
void main()
{
	int a;
	printf("请输入一个0-100之间的整数：");
	scanf("%d", &a);
	if (a >= 90)
	{
		printf("你的成绩是优秀，你的分数是：%d\n",a); 
	}
	else if (a >= 60)
	{
		printf("你及格了，你的分数是：%d\n", a);
	}
	else
	{
		printf("你没有及格，你的分数是：%d\n", a);
	}
}