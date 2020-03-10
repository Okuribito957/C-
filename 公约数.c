#include<stdio.h>
int gys(int a, int b);
void main()
{
	int sub, x, y;
	printf("请输入两个整数：\n");
	scanf("%d %d", &x, &y);
	while ((sub = gys(x, y)) > 0)
	{
		static int counter = 1;
		printf("公约数%d是：%d\n", counter++, sub);
	}
}
int gys(int a, int b)
{
	static int num1 = -1;
	static int num2 = -1;
	static int z;
	if (a < 0 || b < 0)
	{
		return -1;
	}
	if (num1 != a || num2 != b)
	{
		num1 = a;
		num2 = b;
		z = a > b ? b : a;
	}
	while (z > 0)
	{
		if (a%z == 0 && b%z == 0)
		{
			return z--;
		}
		z--;
	}
	return -1;
}