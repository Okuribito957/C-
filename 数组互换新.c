#include <stdio.h>
#define N 10
void main()
{
	char a[N],t;        //�ַ��ͱ��������ַ���enter�ո񶼻ᱻ����
	int i;
	printf("������10���ַ���\n");
	for (i = 0; i < N; i++)
	{
		printf("a[%d]=", i);
		scanf("\n%c",&a[i]);    //�ո�   enter
	}
	for (i = 0; i < N/2; i++)   //����
	{
		t = a[i];
		a[i] = a[N-1-i];
		a[N - 1 - i] = t;
	}
	for (i = 0; i < N;i++)    //���������
	{
		printf("%c", a[i]);
	}
}