#include <stdio.h>
double average(double x,double y,double z)
{
	return (x + y + z) / 3;
}
void main()
{
	double a, b, c, aver;
	printf("����������˫������:");
	scanf("%lf%lf%lf",&a,&b,&c);
	average(a, b, c);
	aver = average(a, b, c);
	printf("����������ƽ��ֵΪ��%f",aver);
}