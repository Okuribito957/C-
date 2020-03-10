#include<stdio.h>
void main()
{
	int a; 
	long b;
	char c;
	float x;
	a = 35.67;
	b = 65537;
	c = 321;
	x = 120;
	printf("a=%d,n=%ld\n", a, b);
	printf("c=%c,x=%f\n",c, x);
	a = c; c = b; b = a;
	printf("a=%d,b=%ld,c=%d\n", a, b, c);
}