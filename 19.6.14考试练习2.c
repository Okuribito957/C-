#include<stdio.h>
void main()
{
	int i = 1, sum = 0;
	while (i <= 50)
	{
		sum = sum + i;
		i = i + 1;
	}
	printf("%d", sum);
}