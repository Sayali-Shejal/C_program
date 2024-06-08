#include<stdio.h>
#include<conio.h>
void main()
{
	int cp,sp;
	printf("Enter cost price and selling price :");
	scanf("%d%d",&cp,&sp);
	if(sp>cp)
	{
		printf("Profit :");
	}
	else
	{
		printf("Loss :");
	}
	getch();
}
