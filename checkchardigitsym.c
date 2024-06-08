#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	printf("Enter Character :");
	scanf("%c",&ch);
	
	if(ch>=48 && ch<=57)
	{
		printf("Character is Digit :%c",ch);
	}
	else if((ch>=97 &&ch<=122)||(ch>=65 && ch<=90 ))
	{
		printf("Character is Alphabate : %c",ch);
	}
	else
	{
		printf("Character is special character: %c",ch);
	}
	getch();
}
