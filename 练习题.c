#include<stdio.h>
void main()
{
	char ch;
	printf("ÇëÊäÈëÒ»¸ö×Ö·û£º");
	scanf("%c", &ch);
	switch (ch)
	{
	case '1':
		printf("Excellent\n");
		break;
	case '2':
		printf("Good\n");
		break;
	case '3':
		printf("Pass\n");
		break;
	case '4':
		printf("Fall\n");
		break;
	default:
		printf("Error\n");
	}
}