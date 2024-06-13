//wap to print the year is leap or not?
#include<stdio.h>
int main()
{
	int year;
	printf("Enter the year\n");
	scanf("%d",&year);
	if(year%400==0 || year%100!=0 && year%4==0)
	printf("Year is leap year\n");
	else
	printf("year is not leap year\n");
	return 0;
}
