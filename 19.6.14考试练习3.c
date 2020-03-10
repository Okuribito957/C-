#include<stdio.h>
void main()
{
	int a, b;
	float ave;
	printf("Please input a,b:");
	scanf("%d%d", &a,&b);
	printf("a=%d,b=%d\n", a, b);
	ave = (a + b) / 2;
	printf("ave=%.2f\n", ave);
}