#include<stdio.h>
void main()
{
	int count, i=1;
	float avg,score,sum=0;
	printf("������༶������");
	scanf("%d", &count);
	while (i <= count)
	{
		printf("�������%d���˵ĳɼ�", i);
		scanf("%f", &score);
		sum = sum + score;        //sum+=score
		i++;
	}
	avg = sum / count;
	printf("ƽ���ɼ�Ϊ��%f", avg);
}