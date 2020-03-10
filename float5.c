#include <stdio.h>
void main()
{
	float a,b;
	a=123456.789e5;
	b=a+20;
	printf("%f,b=%f\n",a,b);
	printf("a=%e,b=%e\n",a,b);
}