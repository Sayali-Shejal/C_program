#include<stdio.h>
#include<conio.h>
void main()
{
	int n ;
	printf("Enter Number to check its divisible by 5 and 11:");
	scanf("%d",&n);
	if(n%5==0&&n%11==0)
	{
		printf("Number is Divisible by 5 and 11");
	}
	else
	{
		printf("Number is Not Divisible by 5 and 11");	
	}
	getch();
}
