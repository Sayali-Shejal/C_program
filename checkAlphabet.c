#include<stdio.h>
#include<conio.h>
void main()
{
	char ch,alpha;
	printf("Enter value  :");
	scanf("%c",&ch);
	alpha=(ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z');
	if(alpha)
	{
		printf("It is a Alphabet:%c",ch);
	}
	else
	{
		printf("It is Not a Alphabet:%c",ch);
		
	}
	getch();
	
}
