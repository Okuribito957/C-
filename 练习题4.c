#include <stdio.h>
void main()
{
	int a, b,num;
	printf("请输入两个数：");
	scanf("%d%d",&a,&b);
	if (a < b)
	{
		num=a;
		a = b;
		b = num;
		printf("%d%d", a, b);
	}
}