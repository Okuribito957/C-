#include<stdio.h>
void main()
{
	float x, y;
	printf("������һ������");
	scanf("%f", &x);
	if (x > 0)
	{
		y = 3 * x;
	}
	else if (x == 0)
	{
		y = x;
	}
	else
	{
		y = 3 * x + 1;
	}
	printf("%.2f", y);
}