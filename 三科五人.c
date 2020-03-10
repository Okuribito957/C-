#include<stdio.h>
void main()
{
	int a[5][3], i, j, sum = 0;
	int s[3];
	for (i = 0; i < 3; i++)
	{
		printf("¿ÆÄ¿%d\n", i + 1);
		for (j = 0; j < 5; j++)
		{
			printf("³É¼¨%d:", j + 1);
			scanf("%d", &a[j][i]);
			sum += a[j][i];
		}
		s[i] = sum / 5;
		sum = 0;
	}
}