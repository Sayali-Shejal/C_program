#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	printf("Input Mounth Number:");
	scanf("%d",&n);
	
	switch(n)
	{
		case 1:
			printf("Total Number of Days:31");
		break;
		case 2:
			printf("Total Number of Days:28/29");
		break;
		case 3:
			printf("Total Number of Days:31");
		break;
		case 4:
			printf("Total Number of Days:30");
		break;
		case 5:
			printf("Total Number of Days:31");
		break;
		case 6:
			printf("Total Number of Days:30");
		break;
		case 7:
			printf("Total Number of Days:31");
		break;
		case 8:
			printf("Total Number of Days:31");
		break;
		case 9:
			printf("Total Number of Days:30");
		break;
		case 10:
			printf("Total Number of Dyas:31");
		break;
		case 11:
			printf("Total Number of Dyas:30");
		break;
		case 12:
			printf("Total Number of Dyas:31");
		break;		
	}
	getch();
}
