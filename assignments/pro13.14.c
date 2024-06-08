#include<stdio.h>
#include<conio.h>
void main ()
{
	int weight;
	printf("Enter Weight of Cloth:");
	scanf("%d",&weight);
	if(weight>=1&&weight<=2000)
	{
		printf("Time required 25 min...");
	}
	else if(weight >=2001 && weight<=4000)
	{
		printf("Time required 35 min...");
	}
	else if(weight>=4001&& weight<=7000)
	{
		printf("Time required 35 min...");
	}
	else if(weight>7000)
	{
		printf("Overloaded....");
	}
	else
	{
		printf("Invaild Input...");
	}
	getch();
}
