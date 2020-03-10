#include<stdio.h>
void main()
{
	int *pn, n = 10, m = 20;
	float *pf, px = 3.14159, py = 2.71828;
	pn = &n;
	*pn += m;
	printf("*pn现在的值是：%f\n", *pn);
	pf = &px;
	py += 5 * (*pf);
	printf("*py现在的值是：%f\n", py);
}