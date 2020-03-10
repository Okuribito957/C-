#include<stdio.h>
void main()
{
	int y;
	printf("请输入月份：");
	scanf("%d", &y);
	if (y < 1 || y > 12)
	{
		printf("输入错误！");
	}
	else
	{
		switch (y)
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("这个月有31天");
			break;
		case 2:
			printf("这个月有28天");
			break;
		default:
			printf("这个月有30天");
		}
	}
}