#include<stdio.h>
#include<conio.h>
void main()
{
	int a1,a2,a3;
	printf("Input first angle:");
	scanf("%d",&a1);
	printf("Input Scound angle:");
	scanf("%d",&a2);
	
	a3=180-(a1+a2);
	
	if(a3)
	{
		printf("Third angle :%d",a3);
	}
	else 
	{
		printf("Invail angle :%d",a3);
	}
	getch();
}
