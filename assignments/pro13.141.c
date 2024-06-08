#include<stdio.h>

#include<conio.h>
void main()
{
	int m,k,j,p,n,a,b,c;
	printf("Enter Total Number of Monkay..");
	scanf("%d",&n);
	printf("Enter Total Number of Bananas..");
	scanf("%d",&m);
	printf("Total Number of Peanuts..");
	scanf("%d",&p);
	printf("Enter  Number of estables bananas..");
	scanf("%d",&k);
	printf("Enter  Number of estables Peanuts..");
	scanf("%d",&j);
	a=k/m;
	b=j/p;
	c=a+b;
	if(c<=n)
	{
		printf("Total Number Of Monkey..%d",c);
	}
	else
	{
		printf("Invaild ");
	}
	getch();
}
