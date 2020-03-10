#include<stdio.h>
void main()
{
	int i, j, k;
	for (i = 1;i < 5;i++)
	{
		for (j = 1;j < 5;j++)
		{
			for (k = 1; k < 5; k++)
			{
				if (i!=j && j!=k && i!=k) 
				{
					printf("%d%d%d  ", i, j, k);
				}
			}
			printf("\n");
		}
	}
}