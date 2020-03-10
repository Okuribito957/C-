#include<stdio.h>
void main()
{
	int a = 1;
	while (a <= 100)
	{
		if (a % 3 == 0)
			printf("%d", a);
		a++;
	}
	printf("\n");
}