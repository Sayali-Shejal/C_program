#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	printf("Enter Charater :");
	scanf("%c",&ch);
	if (ch=='A'||ch=='Z')
	{
		printf("Its is an UpperCase:%c",ch);
	}
	else if(ch=='a'||ch=='z')
	{
		printf("Its is an LowerCase:%c",ch);
	}
	else
	{
	   printf("Its is not a charater:%c",ch);	
	}
	getch();
}
