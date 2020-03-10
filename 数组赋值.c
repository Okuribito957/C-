#include <stdio.h>
void main()
{
	int a[6] = {3,22,44,23,90,100};
	int b[ ] = { 2,3,5 };           //省略时后必须接全部元素
	int c[6] = { 2,33,44 };         //只赋值前三个
	char d[3] = {'a','5','m'};
	printf("%d", c[5]);             //未输入输出为0
	printf("%c", d[2]);
	char e[5] = { '5','a','b' };
}