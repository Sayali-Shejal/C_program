#include<stdio.h>
int main()
{
	char ch;
	printf("Enter any character=");
	scanf("%c",&ch);
	switch(ch>='A' && ch<='Z'||ch>='a' &&ch<='z')
	{
		
		case 1:
			printf("character is Alphabet:%c",ch);
			break;
		case 0:
		switch(ch>='0' && ch<='9')
		{
			case 1:
				printf("character is digit :%d",ch);
				break;
			case 0:
			printf("character is special symbol.");
			break;
			
		}
		break;
		default:
			printf("Invalid character.");	
	}
}
