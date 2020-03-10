#include <stdio.h>
 void main()
{
	int a,b,c;
	 a=2;
	 b=3;
     printf("交换前：a等于%d b等于%d\n",a,b);
	 c=a;  //c=b
	 a=b;  //b=c
	 b=c;  //a=c
	 printf("交换后：a等于%d b等于%d\n",a,b);
}