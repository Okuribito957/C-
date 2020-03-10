#include<stdio.h>
void main()
{
	int a[11];
	int i,j,k;
	printf("请输入十个整数：\n");
	for (i = 1; i < 11; i++)
	{
		scanf("%d",&a[i]);
	}
	for (j = 1; j < 10;j++)              //表示几轮循环 9轮
	{
		for (i = 1; i < 10 - j;i++)          //表示每轮比较次数
		{
			if (a[i] > a[i + 1])
			{
				k = a[i];
				a[i] = a[i + 1];
				a[i + 1] = k;
			}
		}
	}
	printf("从小到大的顺序是：");
	for (i = 1; i < 11; i++)
	{
		printf("%d ", a[i]);
	}
}