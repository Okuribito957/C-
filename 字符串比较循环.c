#include<stdio.h>
#include<string.h>
void main()
{
	char s[3][20] = { "1234","234567","6789" };
	int i, k;
	for (k = 0, i = 1; i < 3; i++)
	{
		if (strcmp(s[k], s[i]) < 0)
		{
			k = i;
		}
	}
	puts(s[k]);
}