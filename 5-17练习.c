#include<stdio.h>
double zhouchang(float x,float y)
{
	float a;
	a = (x + y) * 2;
	return a;
}
double mianji(float x, float y)
{
	float b;
	b = x * y;
	return b;
}
void main()
{
	float x, y;
	printf("请输入矩形的长和宽：");
	scanf("%f%f", &x, &y);
	printf("这个矩形的周长是：%.2f\n", zhouchang(x, y));
	printf("这个矩形的面积是：%.2f\n", mianji(x, y));
}