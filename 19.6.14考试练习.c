#include<stdio.h>
void main()
{
	int i = 1, s = 0;
	while (i < 50)
	{
		s = s + i;
		i = i + 2;
	}
	printf("%d", s);
}