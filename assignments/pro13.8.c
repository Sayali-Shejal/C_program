#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	float pria,rate,time,ci;
	printf("Enter Principal:");
	scanf("%f",&pria);
	
	printf("Enter Time:");
	scanf("%f",&time);
	
	printf("Enter Rate:");
	scanf("%f",&rate);
	
	ci= pria*(pow((1+rate/100),time));
	
	if(ci)
	{
		printf("\nCompound Interest:%f",ci);
	}
	else
	{
		printf("\nInvaild Inputs...");
	}
	getch();
}
