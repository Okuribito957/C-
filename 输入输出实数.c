#include<stdio.h>
void main()
{
	float a[10],x=0;
	int i;
	printf("������ʮ��ʵ����");
	for (i = 0; i < 10; i++)
	{
		scanf("%f", &a[i]);
	}
	for (i = 0; i < 10; i++)
	{
		x += a[i];
		printf("ǰ%d�����ĺ�Ϊ��%.2f\n", i+1,x);
	}
} 