#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	printf("Enter Number to  check Even or Odd:");
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("Number is Even :%d",n);
	}
	else
	{
		printf("Number is Odd");
	}
	getch();
}
