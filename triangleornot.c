

#include<stdio.h>
#include<conio.h>
void main()
{
	int a1,a2,a3,tri;
	printf("Enter Angles of a triangle:");
	scanf("%d%d%d",&a1,&a2,&a3);
	tri=a1+a2+a3;
	if(tri==180)
	{
		printf("It is a Triangle");
	}
	else
	{
		printf("It is Not a Triangle");
	}
	getch();
}
