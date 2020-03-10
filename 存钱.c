#include<stdio.h>
void main()
{
	float money,i,sum=0;
	int year;
	printf("请输入存款金额：");
	scanf("%f", &money); 
	printf("请输入存款年限：");
	scanf("%d", &year);
	if (year > 2)
	{
		i = money * 0.0295;
		sum = money+(i*year);
	}
	else if (year == 2)
	{
		i = money * 0.0245;
		sum = money + (i*year);
	}
	else if (year == 1)
	{
		i = money * 0.0178;
		sum = money + (i*year);
	}
	else
	{
		printf("请输入正确的年限！\n");
		return;
	}
	printf("总额为：%f", sum);
}