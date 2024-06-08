
#include<stdio.h>
#include<conio.h>
void main()
{
	int bs , hra,da,gs;
	printf("\nEnter Basic salary of emp:");
	scanf("%d",&bs);
	
	if(bs<=10000)
	{
		hra=bs*0.20/100;
		da=bs*0.80/100;
		printf("\nHRA=%d",hra);
		printf("\nDA=%d",da);
	}
	else if(bs<=20000)
	{
		hra=bs*0.25/100;
		da=bs*0.90/100;
		printf("\nHRA=%d",hra);
		printf("\nDA=%d",da);
	}
	else if(bs>20000)
	{
		hra=bs*0.3/100;
		da=bs*0.95/100;
		printf("\nHRA=%d",hra);
		printf("\nDA=%d",da);
	}
	else
	{

		printf("\nInvalid chiose......");
	}
	gs=bs+hra+da;
	printf("\nGross Salary is = %d",gs);
	getch();
}
