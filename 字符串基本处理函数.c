#include<string.h>                        //gets
#include<stdio.h>
void main()
{ 
	char c[10];
	int i = 0, n;
	gets(c);
	strcat(c, "ee");
	puts(c);
	i = strcmp(c, "gh");
	n = strlen(c);
	printf("%d,%d\n",i,n);
	strcpy(c,"nihao");
	printf("%c", c);
	strcpy(c,"hellow");
	puts(c);
}