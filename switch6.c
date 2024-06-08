#include<stdio.h>
#include<conio.h>
void main()
{
	char ch ;
	printf("Enter Character:");
	scanf("%c",&ch);
	if (ch>=65&&ch<=90)
	{
		ch=ch+32;
	}
	switch(ch)
	{
		case a:
			 printf("Vowel..");
			 break;
		case e:
			 printf("Vowel..");
			 break;
		case i:
			 printf("Vowel..");
			 break;
		case o:
			 printf("Vowel..");
			 break;
	    case u:
	         printf("Vowel..");
	         break;
	    default:
		     printf("Consonaut..") ;   
						
	}
	getch();
}
