#include<stdio.h>
void main()
{
	int x, y, z;
	printf("请输入三个整数：");
	scanf("%d%d%d",&x,&y,&z);
	max(x, y, z);
	printf("%d", max(x,y,z));
}
int max(int x, int y, int z)
{
	int m;
	if (x > y)
	{
		m = x;
	}
	else
	{
		m = y;
	}
	if (m < z)
	{
		m = z;
	}
	return m;
}