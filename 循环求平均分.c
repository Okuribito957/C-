#include<stdio.h>
void main()
{
	int count, i=1;
	float avg,score,sum=0;
	printf("请输入班级人数：");
	scanf("%d", &count);
	while (i <= count)
	{
		printf("请输入第%d个人的成绩", i);
		scanf("%f", &score);
		sum = sum + score;        //sum+=score
		i++;
	}
	avg = sum / count;
	printf("平均成绩为：%f", avg);
}