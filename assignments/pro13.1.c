#include<stdio.h>
#include<conio.h>
void main()
{
	char ch ;
	printf("Enter Character:");
	scanf("%c",&ch);
	
	if((ch=='A'|| ch=='E'||ch=='I'||ch=='O'||ch=='U')||(ch=='a'|| ch=='e'||ch=='i'||ch=='o'||ch=='u'))
	{
		printf("%c is a Vowel",ch);
	}
	else
	{
		printf("%c is a consount.",ch);
	}
	getch();
}