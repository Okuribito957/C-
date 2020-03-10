#include<stdio.h>
void main()
{
	int i = 1, s = 0;
	while (i < 100)
	{
		s = s + i;
		i = i + 1;
	}
	printf("%d", s);
}