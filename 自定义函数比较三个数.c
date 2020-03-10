#include<stdio.h>
int max(int x, int y)
{
	int z;
	z = x > y ? x : y;
	return z;
}
void main()
{
	int a, b;//int c;
	scanf("%d%d", &a, &b);//c=max(a,b);
	printf("%d\n", max(a, b));
}