#include<stdio.h>
#include<math.h>
void main()
{
	int x;
	printf("������һ������");
	scanf("%d", &x);
	if (abs(x) < 10)
	{
		printf("���Ǹ�һλ��");
	}
	else if (abs(x) < 100)
	{
		printf("����һ����λ��");
	}
	else if (abs(x) < 1000)
	{
		printf("����һ����λ��");
	}
	else if (abs(x) < 10000)
	{
		printf("���������λ��");
	}
	else
	{
		printf("���Ǹ���λ��");
	}
}