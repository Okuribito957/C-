#include<stdio.h>
void main()
{
	int a;
	printf("������һ��0-100֮���������");
	scanf("%d", &a);
	if (a >= 90)
	{
		printf("��ĳɼ������㣬��ķ����ǣ�%d\n",a); 
	}
	else if (a >= 60)
	{
		printf("�㼰���ˣ���ķ����ǣ�%d\n", a);
	}
	else
	{
		printf("��û�м�����ķ����ǣ�%d\n", a);
	}
}