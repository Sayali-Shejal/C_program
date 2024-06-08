#include<stdio.h>
#include<conio.h>
void main()
{
	int a1,a2,a3;
	printf("Input first angle:");
	scanf("%d",&a1);
	printf("Input Scound angle:");
	scanf("%d",&a2);
	printf("Input Third angle:");
	scanf("%d",&a3);
	if(a1==a2 && a2==a3)
	{
		printf("Triangle is Equilateral..");
	}
	else if(a1==a2||a2==a3)
	{
		printf("Triangle is isosceles..");
	}
	else
	{
		printf("Triangle scalene..");
	}
	getch();
}

