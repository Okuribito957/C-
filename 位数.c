#include<stdio.h>
int weishu(int n);
void main()
{
	int n;
	printf("������һ��������10λ��������");
	scanf("%d", &n);
	printf("�������%dλ\n",weishu(n));
}
int weishu(int n)
{
	int count = 1;
	if (n < 0)
	{
		n = -n;
	}
	do
	{
		n = n / 10;
		if (n > 0)
		{
			count++;
		}
	} 
	while (n);
	return count;
}