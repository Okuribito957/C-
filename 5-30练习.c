#include<stdio.h>
int a, b;
void fun()
{
	a = 10; b = 20;
}
void main()
{
	int a = 3, b = 9;
	fun();
	printf("%d,%d\n", a, b);
}