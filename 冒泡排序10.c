#include<stdio.h>
void main()
{
	int a[11];
	int i,j,k;
	printf("������ʮ��������\n");
	for (i = 1; i < 11; i++)
	{
		scanf("%d",&a[i]);
	}
	for (j = 1; j < 10;j++)              //��ʾ����ѭ�� 9��
	{
		for (i = 1; i < 10 - j;i++)          //��ʾÿ�ֱȽϴ���
		{
			if (a[i] > a[i + 1])
			{
				k = a[i];
				a[i] = a[i + 1];
				a[i + 1] = k;
			}
		}
	}
	printf("��С�����˳���ǣ�");
	for (i = 1; i < 11; i++)
	{
		printf("%d ", a[i]);
	}
}