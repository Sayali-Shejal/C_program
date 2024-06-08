#include<stdio.h>
#include<conio.h>
void main()
{
	int a ,b,c;
	printf("Enter Three Number to Chech maximum:");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c)
	{
		printf("A is maximum Number :%d",a);
	}
	else if(b>a&&b>c)
	{
		printf("B is maximum Number:%d",b);
	}
	else
	{
		printf("C is maximum Number :%d",c);
	}
	getch();
}
