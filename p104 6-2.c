#include<stdio.h>
void swap(int a, int b);
void main()
{
	int x = 7, y = 11;
	printf("x=%dt\y=%d\n", x, y);
	printf("swapped:\n");
	swap(x, y);
	printf("x=%d,\ty=%d\n", x, y);
}
void swap(int a, int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
	printf("a=%d,\tb=%d\n", a, b);
}