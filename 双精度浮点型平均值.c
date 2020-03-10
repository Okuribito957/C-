#include <stdio.h>
void main()
{
	float a, b, c, d;
	long  temp;
	printf("请输入三个数：\n");
	scanf("%lf%lf%lf", &a, &b, &c);
	d = (a + b + c) / 3.0;
	printf("这三个数的平均值为：%f\n", d);
}