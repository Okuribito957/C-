#include<stdio.h>
void main()
{
	int s = 0,x;
	scanf("%d", &x);
	while (x++<=10)
	{
		s = s + x;
	}
	printf("%d", s);
}