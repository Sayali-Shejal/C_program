#include<stdio.h>
#include<conio.h>
void main()
{
	int year;
	printf("Enter Year :");
	scanf("%d",&year);
	if(year%400==0 || year%4==0 && year%100!=0)
	{
		printf("Year is leap :%d",year);
	}
	else
	{
		printf("Year is not a leap year :%d",year);
	}
	
	getch();
}
