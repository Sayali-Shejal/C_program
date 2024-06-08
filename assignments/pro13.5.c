#include<stdio.h>
#include<conio.h>
void main()
{
	float a,b,c,root1,root2,d;
	printf("Input a:");
	scanf("%f",&a);
	printf("Input b:");
	scanf("%f",&b);
	printf("Input c:");
	scanf("%f",&c);
	d=b*b-4*a*c;
	
	if(d>0)
	{
		root1=(-b+sqrt(d))/(2*a);
		root2=(-b-sqrt(d))/(2*a);
		printf("\nRoot1:%f",root1);
		printf("\nRoot2:%f",root2);
	}
	else if(d==0)
	{
		root1=-b/(2*a);
		root2=-b/(2*a);
		printf("\nRoot1:%f",root1);
		printf("\nRoot2:%f
		
		",root2);
	}
	else
	{
			printf("Invaild ");
	}
	getch();
}
