#include<stdio.h>
#include<conio.h>
void main()
{
	char ch , check;
	printf("Enter Character:");
	scanf("%c",&ch);
	ch=(ch=='A'||ch=='E'|| ch=='I'||ch=='O'||ch=='U')|| (ch=='a'||ch=='e'|| ch=='i'||ch=='o'||ch=='u');
	switch(ch)
	{
		case 1:
			printf("Vowel....");
			break;
		case 0:
		    printf("Consonaut...");
			break;
		default:
		  printf("Invaild character....");		
	}
}
