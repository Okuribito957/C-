#include <stdio.h>
void main()
{
	int a[10];
	//a[2] = 3;
	int b;
	int c;
	for(b = 0;b < 10; b++)
	{
		a[b] = b;
	}
	for	(c=9;c>=0;c--)
	{
		printf("%d", a[c]);
	}

}