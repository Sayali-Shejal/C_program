#include<stdio.h>
#include<conio.h>
void main()
{
	float pri,rate,time,si;
	printf("Enter Principal:");
	scanf("%f",&pri);
	
	printf("Enter Time:");
	scanf("%f",&time);
	
	printf("Enter Rate:");
	scanf("%f",&rate);
	
	si=pri+time+rate/100;
	
	if(si)
	{
		printf("\nSimple Intrest:%f",si);
	}
	else
	{
		printf("\nInvaild Inputs...");
	}
	getch();
}
