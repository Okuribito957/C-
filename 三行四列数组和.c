#include<stdio.h>
#include<string.h>
void main()
{
	int a[3][4], b[3][4], c[3][4];
	int i, j;
	for (j = 0; j < 4; j++)
	{
		scanf("%d", &a[i][j]);
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			scanf("%d", &b[i][j]);
			c[i][j] = a[i][j] + b[i][j];
		}//Êä³öC
		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 4; j++)
			{
				printf("%d", c[i][j]);
			}
			printf("\n");
		}
	}
}