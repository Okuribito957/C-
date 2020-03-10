#include<stdio.h>
int fun(int n,int a)
{
	int a,n;
	for (a= 2; a <= sqrt(n); a++)
	{
		if (n%a == 0)
			break;
	}
	if (a > sqrt(n))
	{
		printf("%d",n);
	}
	else
	{
		return 0;
	}
}
void main()
{
	int i;
	for (i = 1, i < 1001, i++)
	{
		
	}
}