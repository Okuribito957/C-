#include<stdio.h>
void main()
{
	float x, y,z;
	printf("������x��ֵ��");
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
	printf("x����Ӧ��yֵΪ��%.2f\n", z);
}