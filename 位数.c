#include<stdio.h>
int weishu(int n);
void main()
{
	int n;
	printf("请输入一个不超过10位的整数：");
	scanf("%d", &n);
	printf("这个数有%d位\n",weishu(n));
}
int weishu(int n)
{
	int count = 1;
	if (n < 0)
	{
		n = -n;
	}
	do
	{
		n = n / 10;
		if (n > 0)
		{
			count++;
		}
	} 
	while (n);
	return count;
}