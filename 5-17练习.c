#include<stdio.h>
double zhouchang(float x,float y)
{
	float a;
	a = (x + y) * 2;
	return a;
}
double mianji(float x, float y)
{
	float b;
	b = x * y;
	return b;
}
void main()
{
	float x, y;
	printf("��������εĳ��Ϳ�");
	scanf("%f%f", &x, &y);
	printf("������ε��ܳ��ǣ�%.2f\n", zhouchang(x, y));
	printf("������ε�����ǣ�%.2f\n", mianji(x, y));
}