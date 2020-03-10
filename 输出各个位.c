#include<stdio.h>
void main()
{
	int x;
	int a, b, c;
	printf("请输入一个三位整数：");
	scanf("%d", &x);
	a = x / 100;
	b = (x - a * 100) / 10;
	c = x % 10;
	printf("百位是：%d,十位是：%d，个位是：%d", a, b, c);
}