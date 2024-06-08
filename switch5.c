#include<stdio.h>
#include<conio.h>
void main()
{
	int year;
	printf("Enter Year to check leap or not:");
	scanf("%d",&year);
	
	switch(year)
	{
		case 1:
			if(year%400==0  )
			{
				if(year%4==0)
				{
					if(year%100!=0)
					{
						printf("Year is Leap:%d",year);	
					}
				}
				
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
