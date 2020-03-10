#include<stdio.h>
struct student
{
	char *name;
	long stu_no;
	int Math, C_language, English;
};
void main()
{
	struct student
		s1 = { "Wang ping",050011,90,95,99},
		s2 = { "Ma li li",050012,95,93,91 };
	double a1, a2;
	a1 = (s1.Math + s1.C_language + s1.English) / 3.0;
	a2 = (s1.Math + s2.C_language + s2.English) / 3.0;
	printf("%s\t%.2lf\n", s1.name, a1);
	printf("%s\t%.2lf\n", s2.name, a2);
}