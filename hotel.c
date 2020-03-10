#include<stdio.h>
#include"hotel.h"
int menu()
{
	int code, status;
	printf("\n%s%s\n", STARTS,STARTS);
	printf("请输入酒店号：\n");
	printf("1.Alexander    2.Richard\n");
	printf("3.Victoria     4.King's Hotel\n");
	printf("5.quit\n");
	printf("\n%s%s\n", STARTS, STARTS);
	while ((status = scanf("%d",&code))!=1||(code<1||code>5))
	{
		if (status != 1)
		{ 
			scanf("%*s");//清空输入流
		}
		printf("请输入1-5之间的数");
	}
	return code;
}
int getdays()
{
	int days;
	printf("您要住多少天？");
	while(scanf("%d", &days) != 1)
	{
		scanf("%*s");
		printf("请输入数字\n");
	}
	return days;
}
void showprice(double rate, int days)
{
	int n;
	double total = 0.0;
	double factor = 1.0;
	for (n = 1; n <= days; n++, factor *= DISCOUNT)
	{
		total += rate * factor;
	}
	printf("需要花费$%0.2f.\n", total);
}