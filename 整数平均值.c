#include <stdio.h>
void main()
{
	int a, b, c ;
	float d;
	printf("请输入三个整数：\n");
	scanf("%d%d%d",&a,&b,&c);
	d = (a + b + c) / 3.0;
	printf("这三个数的平均值为：%f\n", d);
}