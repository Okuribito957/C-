#include<stdio.h>
void main()
{
	int a, b, c;
	float average;
	printf("please int a,b,c:");
	scanf("%d%d%d", &a, &b, &c);
	printf("a=%d,b=%d,c=%d\n", a, b, c);
	average = (a + b + c)/3;
	printf("average=%.2f\n", average);
}