#include<stdio.h>
void main()
{
	int a = 100;
	while (a>=100&&a <= 200)
	{
		if (a % 3 != 0)
			printf("%d ", a);
		a++;
	}
	printf("\n");
}