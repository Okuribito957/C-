#include<stdio.h>
void main()
{
	int x, y, sum;
	printf("������������X��Y��\n");
	scanf("%d%d", &x, &y);
	sum = add(x,y);
	printf("X+Y=%d\n", sum);
}
int add(int a, int b)
{
	return a + b;
}
//��Ϊ����ֵ��int��������д�������������棬����Ҫ��ǰ���ȶ���