#include<stdio.h>
void main()
{
	float money,i,sum=0;
	int year;
	printf("���������");
	scanf("%f", &money); 
	printf("�����������ޣ�");
	scanf("%d", &year);
	if (year > 2)
	{
		i = money * 0.0295;
		sum = money+(i*year);
	}
	else if (year == 2)
	{
		i = money * 0.0245;
		sum = money + (i*year);
	}
	else if (year == 1)
	{
		i = money * 0.0178;
		sum = money + (i*year);
	}
	else
	{
		printf("��������ȷ�����ޣ�\n");
		return;
	}
	printf("�ܶ�Ϊ��%f", sum);
}