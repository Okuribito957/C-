#include <stdio.h>
void main()
{
	double a, b;
	printf("�������������������");
	scanf("%lf",&a);
	if (a < 0)
	{
		printf("����������ݴ���");
	}
	else if (a <= 20)
	{
		printf("��������������ˣ�");
	}
	else if (a <= 30)
	{
		b = 30 * (a - 20);
		printf("�������˷�Ϊ%.2lfԪ��",b);
	}
	else if (a <= 40)
	{
		b = 300 + (a - 30) * 40;
		printf("�������˷���Ϊ%.2lfԪ��",b);
	}
	else if (a <= 50)
	{
		b = 300 + 400 + (a - 40) * 50;
		printf("�������˷���Ϊ%.2lfԪ��",b);
	}
	else
	{
		printf("�����˵��������������ޣ����������ˣ�");
	}
}