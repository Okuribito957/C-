#include<stdio.h>
void main()
{
	int x;
	int a, b, c;
	printf("������һ����λ������");
	scanf("%d", &x);
	a = x / 100;
	b = (x - a * 100) / 10;
	c = x % 10;
	printf("��λ�ǣ�%d,ʮλ�ǣ�%d����λ�ǣ�%d", a, b, c);
}