#include<stdio.h>
void main()
{
	int a = 3, b;
	b = (a = 3 * 5, a * 4);
	printf("%d\n", b);
}