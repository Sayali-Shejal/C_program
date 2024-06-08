#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	printf("Enter vlaues for a and b number :");
	scanf("%d%d ",&a,&b);
	if(a>b)
	{
		printf("Maximum Number is a:%d",a);
	}
	if(b>a)
	{
		printf("Maximum Number is b:%d",b);
	}
	printf("Number is equale:%d %d",a,b);
	getch();
	
}
