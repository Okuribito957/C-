#include <stdio.h>
int GetMax(int a,int b)//比较大小，返回大的值
{
	if(a>b)
		return a;
	return b;
}
void main()
{
	int x,y,max;//定义三个变量
	printf("请输入两个整数:");
	scanf("%d%d",&x,&y);//等待输入，接收用户输入
	max=GetMax(x,y);
	printf("最大的整数是:%d\n",max);
}