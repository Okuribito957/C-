#include<stdio.h>
void main()
{
	int a, b, c;
	printf("%d,%d\n", a = 18, b = 27);
	c = (a = 31) + (b = -3);
	printf("%d\n", c);
	a = b = c = 10;
	a += b -= c /= a - 2;
	printf("%d,%d,%d", a, b, c);
}