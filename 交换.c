#include <stdio.h>
 void main()
{
	int a,b,c;
	 a=2;
	 b=3;
     printf("����ǰ��a����%d b����%d\n",a,b);
	 c=a;  //c=b
	 a=b;  //b=c
	 b=c;  //a=c
	 printf("������a����%d b����%d\n",a,b);
}