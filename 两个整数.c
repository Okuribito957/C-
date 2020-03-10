#include <stdio.h>
void main()
{
	int a,b,sum,cha,ji,shang;
	printf("请输入两个整数：\n");
	scanf("%d%d",&a,&b);
	sum=a+b;
	cha=a-b;
	ji=a*b;
	shang=a/b;
	printf("两个数的和是：%d\n",sum);
	printf("两个数的差是：%d\n",cha);
	printf("两个数的积是：%d\n",ji);
	printf("两个数的商是：%d\n",shang);
}