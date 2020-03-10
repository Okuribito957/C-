#include<stdio.h>
int b[4][4] = { {10,11,12,13},{14,15,16,17},{18,19,20,21},{22,23,24,25} };
void main()
{
	int(*a)[4], *p;
	a = b;
	p = a[1];
	for (int i = 1; i <= 4; p = p + 1, i++)
	{
		printf("%d\t", *p);
	}
	printf("\n");
	for (int i = 0; i <= 3; i++)
	{
		printf("%d\t", *(*a + 1));
		a++;
	}
	printf("\n");
}