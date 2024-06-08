#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	printf("Enter number to check positive or nagetive:");
	scanf("%d",&n);
	if(n>0)
	{
		printf("Number is positive: %d",n);
	}
	else
    {
		printf("Number is negative: %d",n);
	}
	getch();
}
