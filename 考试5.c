#include<stdio.h>
void main()
{
	float x, y;
	printf("������x��ֵ��");
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
	printf("x����Ӧ��yֵΪ��%.2f\n", y);
}