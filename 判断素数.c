#include <stdio.h>
#include<math.h>
void main()
{
	int a, b;
	printf("������һ������һ��������");
	scanf("%d",&b);
	for (a = 2; a <= sqrt(b); a++)
	{ 
		if (b%a == 0)
			break;
	}
	if (a > sqrt(b))
	{
		printf("%d ������", b);
	}
	else
	{
		printf("%d ��������\n", b);
	}
}