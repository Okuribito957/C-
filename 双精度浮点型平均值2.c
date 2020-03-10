#include <stdio.h>
double average(double x,double y,double z)
{
	return (x + y + z) / 3;
}
void main()
{
	double a, b, c, aver;
	printf("请输入三个双精度数:");
	scanf("%lf%lf%lf",&a,&b,&c);
	average(a, b, c);
	aver = average(a, b, c);
	printf("这三个数的平均值为：%f",aver);
}