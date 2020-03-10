#include <stdio.h>
#define N 10
void main()
{
	char a[N],t;        //字符型报错输入字符型enter空格都会被接收
	int i;
	printf("请输入10个字符：\n");
	for (i = 0; i < N; i++)
	{
		printf("a[%d]=", i);
		scanf("\n%c",&a[i]);    //空格   enter
	}
	for (i = 0; i < N/2; i++)   //交换
	{
		t = a[i];
		a[i] = a[N-1-i];
		a[N - 1 - i] = t;
	}
	for (i = 0; i < N;i++)    //输出交换后
	{
		printf("%c", a[i]);
	}
}