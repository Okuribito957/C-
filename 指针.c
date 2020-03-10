#include<stdio.h>
void main()
{
	int i, *p = &i;
	int *x;
	x = p;
	p++;
	printf("%d\n", x);
	printf("%d\n", p);
	printf("%d", sizeof(int));
}