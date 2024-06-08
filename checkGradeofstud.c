
#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	printf("Enter Grade of a Student:");
	scanf("%c",&ch);
	
	if(ch=='E')
	{
		printf("Excellent");
	}
	else if(ch=='V')
	{
		printf("Very Good");
	}
	else if(ch=='G')
	{
		printf("Good");
	}
	else if(ch=='E')
	{
		printf("Average");
	}
	else if(ch=='F')
    {
    	printf("Fail");
		
	}
	else 
	{
		printf("Invaild Chiose...");
	}
	getch();

}
