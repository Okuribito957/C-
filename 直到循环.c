#include<stdio.h>
void main()
{
	int i = 1, sum = 0;
	do
	{
		sum += i;
		i++;
	} while (i <= 100);
	printf("%d", sum);
}