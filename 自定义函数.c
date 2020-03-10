#include<stdio.h>
void main()
{
	int x, y, sum;
	printf("输入两个整数X和Y：\n");
	scanf("%d%d", &x, &y);
	sum = add(x,y);
	printf("X+Y=%d\n", sum);
}
int add(int a, int b)
{
	return a + b;
}
//因为返回值是int类型所以写在了主函数后面，否则要在前面先定义