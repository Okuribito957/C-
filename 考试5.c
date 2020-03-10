#include<stdio.h>
void main()
{
	float x, y;
	printf("请输入x的值：");
	scanf("%f", &x);
	if (x > 0)
	{
		y= 3*x + 1;
	}
	else if (x < 0)
	{
		y = x - 8;
	}
	else
	{
		y = 0;
	}
	printf("x所对应的y值为：%.2f\n", y);
}