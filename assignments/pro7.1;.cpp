#include<stdio.h>
#include<conio.h>
int main()
{
	int xx,yy;
	printf("Enter Price of first cab and second cab:");
	scanf("%d%d",&xx,&yy);
	
	if(xx<yy)
	{
		printf("First Cab");
	}
	else if(xx==yy)
	{
		printf("Any Cab");
	}
	else 
	{
		printf("Second Cab");
	}
	getch();
}
