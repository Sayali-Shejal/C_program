#include<stdio.h>
#include<conio.h>
void main()
{
	int age;
	printf("Enter Person to check its is eligible for vote:");
	scanf("%d",&age);
	if(age>21)
	{
		printf("Person is Eligible for casting you vote:%d",age);
	}
	else
	{
		printf("Person is Not Eligible for casting you vote:%d",age);
	}
	
	getch();
}
