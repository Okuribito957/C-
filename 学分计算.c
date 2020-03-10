#include<stdio.h>
void main()
{
	int score;
	float credit;
	printf("请输入百分制成绩：");
	scanf("%d", &score);
	switch (score / 10)
	{
		case 10:
		case 9:
			credit = 4.5;
			break;
		case 8:
			credit = 4.0;
			break;
		case 7:
			credit = 3.5;
		case 6:
			credit = 3.0;
		default:
			credit = 0;
	}
	printf("score=%dcredit=%3.1f\n", &score, &credit);
}