#include<stdio.h>
#include<conio.h>
void main()
{
	int a1,a2,a3;
	printf("Enter first angle:");
	scanf("%d",&a1);
	printf("Enter Secound angle:");
	scanf("%d",&a2);
	printf("Enter Third angle:");
	scanf("%d",&a3);
	
	if(a1+a2+a3==180)
	{
		printf("The Triangle is vaild..");
	}
    else
    {
    	printf("The Triangle is not vaild..");
	}
	getch();
}
