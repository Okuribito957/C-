#include<stdio.h>
void main()
{
	int a, b, c, d, e, max, min;
	printf("�����������ͬ��������");
	scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
	max = min = a;
	if (b > a)
	{
		max = b;
	}
	if (b < a)
	{
		min = b;
	}
	if (c > max)
	{
		max = c;
	}
	if (c < min)
	{
		min = c;
	}
	if (d > max)
	{
		max = d;
	}
	if (d < min)
	{
		min = d;
	}
	if (e > max)
	{
		max = e;
	}
	if (e < min)
	{
		min = e;
	}
	printf("���ֵΪ��%d��СֵΪ��%d\n", max, min);
}