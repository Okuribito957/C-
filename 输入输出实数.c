#include<stdio.h>
void main()
{
	float a[10],x=0;
	int i;
	printf("请输入十个实数：");
	for (i = 0; i < 10; i++)
	{
		scanf("%f", &a[i]);
	}
	for (i = 0; i < 10; i++)
	{
		x += a[i];
		printf("前%d个数的和为：%.2f\n", i+1,x);
	}
} 