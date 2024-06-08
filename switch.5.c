#include<stdio.h>
#include<conio.h>
void main()
{
	int year;
	printf("Enter Year to check leap or not:");
	scanf("%d",&year);
	
	switch(year%400==0)
	{
		case 1:
			switch(year%4==0 )
			{
				case 1:
					switch(year%100!=0)
					{
						case 1:
							printf("Year is Leap:%d",year);
							break;
					}
				break;	
			}
		break;
		case 0:
		    printf("Year is Not a leap :%d",year);
			break;
		default:
		 printf("Invaild input....");		
	}
	getch();
}
