#include<stdio.h>
#include<conio.h>
void main()
{
	int n=10,k=5,m;
	printf("Enter the Condies sold:");
	scanf("%d",&m);
	if(m<k && m<n)
	{
		
		printf("\nCondies sold =%d",m);
		printf("\nCondies Available=%d",n-m);
	}
	else
	{
	   printf("Invaild Input....");	
	}
	getch();
}
