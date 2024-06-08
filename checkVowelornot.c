#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	printf("Enter Alphabet to check it is vowel or consount:");
	scanf("%c",&ch);
	
	if((ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'||ch=='u' )||( ch=='A' ||ch=='E'||ch=='I'||ch=='O'|| ch=='U'))
	{
		printf("Alphabet is a vowel:%c",ch);
	}
	else
	{
		printf("Alphabet is a Consount:%c",ch);
	}
	getch();
}
