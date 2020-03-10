#include <stdio.h>
void main()
{
	int m,x, y, z;
	char ch='c';
	double d1 = 1.2, d2 = 1.5;
	x = y = z = 3;
	x = --y + z--;//x=5 y=2 z=2
	printf("%d %d %d\n", x,y,z);
	d1 = d1++ + d2--;
	printf("%.2f  %.2f\n", d1, d2);
	x = -y++ + z++;
	printf("%d %d %d\n", x, y, z);
	ch--;
	printf("%c\n", ch);
	printf("%d\n", ch);
	printf("%c\n", --ch);
	m = ch--;
	printf("%c\n", m);
	printf("%c\n",ch);
}