#include<stdio.h>
#include"hotel.h"
int menu()
{
	int code, status;
	printf("\n%s%s\n", STARTS,STARTS);
	printf("������Ƶ�ţ�\n");
	printf("1.Alexander    2.Richard\n");
	printf("3.Victoria     4.King's Hotel\n");
	printf("5.quit\n");
	printf("\n%s%s\n", STARTS, STARTS);
	while ((status = scanf("%d",&code))!=1||(code<1||code>5))
	{
		if (status != 1)
		{ 
			scanf("%*s");//���������
		}
		printf("������1-5֮�����");
	}
	return code;
}
int getdays()
{
	int days;
	printf("��Ҫס�����죿");
	while(scanf("%d", &days) != 1)
	{
		scanf("%*s");
		printf("����������\n");
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
	printf("��Ҫ����$%0.2f.\n", total);
}