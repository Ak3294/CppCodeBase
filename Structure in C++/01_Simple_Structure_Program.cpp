#include<stdio.h>
struct student
{
	char name[30];
	int rollno;
	float per;
}s={"Akshay",10,74.6};
int main()
{
	printf("%s\t%d\t%f\n",s.name,s.rollno,s.per);
	return 0;
}
