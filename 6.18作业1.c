#include<stdio.h>
void main()
{
	int *pn, n = 10, m = 20;
	float *pf, px = 3.14159, py = 2.71828;
	pn = &n;
	*pn += m;
	printf("*pn���ڵ�ֵ�ǣ�%f\n", *pn);
	pf = &px;
	py += 5 * (*pf);
	printf("*py���ڵ�ֵ�ǣ�%f\n", py);
}