#include<stdio.h>
void main()
{
	char s[3][4] = { {'a','b','c','\0'},{'1','2','3','\0'},{'m','n','p','\0'} };
	printf("%s\n", s[0]);
	printf("%s\n", s[1]);           //printf("%s\n%s\n%s\n",s[0],s[1],s[2];
	printf("%s\n", s[2]);
}