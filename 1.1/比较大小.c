#include <stdio.h>
int GetMax(int a,int b)//�Ƚϴ�С�����ش��ֵ
{
	if(a>b)
		return a;
	return b;
}
void main()
{
	int x,y,max;//������������
	printf("��������������:");
	scanf("%d%d",&x,&y);//�ȴ����룬�����û�����
	max=GetMax(x,y);
	printf("����������:%d\n",max);
}