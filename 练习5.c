#include<stdio.h>
#define X 5
#define Y X+1
#define Z Y*X/2    //x+1*x/2=7
void main()
{
	int a;
	a = Y;
	printf("%d %d", Z, --a);
}