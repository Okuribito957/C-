#include <stdio.h>
void main()
{
	int i, a[10];
	for (i = 0; i < 10; i++)
	{
		printf("a[%d]=",i);
		scanf("%d", &a[i]);
	}
}