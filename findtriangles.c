#include<stdio.h>
#include<conio.h>
void main()
{
	int  a1,a2,a3 ;
	printf("Enter Angles of triangle:");
	scanf("%d%d%d",&a1,&a2,&a3);
	if(a1==a2&&a2==a3)
	{
		printf("Triangle is Equilateral ");
		
	}
	else if(a1==a2||a2==a3)
	{
		printf("Triangle is Isoscate ");
	}
	else
	{
		printf("Triangle is Scalene");
	}
	getch();
}
