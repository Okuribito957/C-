#include <stdio.h>
#include<math.h>
void main()
{
	int a, b;
	printf("请输入一个大于一的整数：");
	scanf("%d",&b);
	for (a = 2; a <= sqrt(b); a++)
	{ 
		if (b%a == 0)
			break;
	}
	if (a > sqrt(b))
	{
		printf("%d 是素数", b);
	}
	else
	{
		printf("%d 不是素数\n", b);
	}
}