#include<stdio.h>
#include<conio.h>
void main()
{
	int week;
	printf("Input week Number(1-7):");
	scanf("%d",&week);
	switch(week)
	{
		case 1:
			printf("Monday");
		break;
		case 2:
		    printf("Tuesday");
		break;
		case 3:
		    printf("Wenusday");
		break;
		case 4:
		    printf("Thuseday");
		break ;
		case 5:
		    printf("Friend");
		break;
		case 6:
		    printf("Saturday");
		break;
		case 7:
		    printf("Sunday");
		break;
		case 0:
		    printf("Invaild choise of a day..");
		break;							
	}
	getch();
}
