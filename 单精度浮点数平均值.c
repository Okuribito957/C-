#include <stdio.h>
void main()
{
	double a,b,c,d;
	printf("请输入三个整数：\n");
	scanf("%f%f%f", &a, &b, &c);
	d = (a + b + c) / 3.0;
	printf("这三个数的平均值为：%f\n", d);
}