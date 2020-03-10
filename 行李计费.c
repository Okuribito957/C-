#include <stdio.h>
void main()
{
	double a, b;
	printf("请输入您行李的重量：");
	scanf("%lf",&a);
	if (a < 0)
	{
		printf("您输入的数据错误！");
	}
	else if (a <= 20)
	{
		printf("您的行李免费托运！");
	}
	else if (a <= 30)
	{
		b = 30 * (a - 20);
		printf("您的托运费为%.2lf元！",b);
	}
	else if (a <= 40)
	{
		b = 300 + (a - 30) * 40;
		printf("您的托运费用为%.2lf元！",b);
	}
	else if (a <= 50)
	{
		b = 300 + 400 + (a - 40) * 50;
		printf("您的托运费用为%.2lf元！",b);
	}
	else
	{
		printf("您托运的行李超出了最高上限！不允许托运！");
	}
}