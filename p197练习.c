#include<stdio.h>
void main()
{
	char ch[3][4] = { "AAA","BB","CC" }, (*q)[4] = ch, *p;
	int i;
	p = new char;
	*p = 'b';
	*(*q + 3) = *p;
	for (i = 0; i < 3; i++)
	{
		printf("%s\n", q[i]);
	}
}