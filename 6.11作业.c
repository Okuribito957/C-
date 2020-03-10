#include<stdio.h>
void main()
{
	float x, y,z;
	printf("请输入x的值：");
	scanf("%f", &x);
	if (x > 0)
	{
		z = 2*x + 3;
	}
	else if (x < 0)
	{
		z = x - 5;
	}
	else
	{
		z = 0;
	}
	printf("x所对应的y值为：%.2f\n", z);
}