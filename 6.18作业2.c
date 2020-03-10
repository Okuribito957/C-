#include<stdio.h>
void main()
{
	int i, *p, a[] = { 10,20,30,40,50,60 };
	p = a;
	for (i = 0; i <= 5; i++)
	{
		printf("a[%d]=%d\t*(a+%d)=%d\t", i, a[i], i, *(a + i));
		printf("\t*(p+%d)=%d\tp[%d]=%d\n",i,*(p+i),i,p[i]);
	}
}