#include <stdio.h>
void main()
{
	int a, b,num;
	printf("��������������");
	scanf("%d%d",&a,&b);
	if (a < b)
	{
		num=a;
		a = b;
		b = num;
		printf("%d%d", a, b);
	}
}