
#include<stdio.h>
#include<conio.h>
void main()
{
	float perh;
	printf("Enter Person Height:");
	scanf("%f",&perh);
	
	if(perh<150)
	{
		printf("Person is Dwarf : %f",perh);
	}
	else if(perh>=150 && perh<=165)
	{
		printf("Person is Average Heighted : %f",perh);
	}
	else if(perh>=165 && perh<=195)
	{
		printf("Person is Taller : %f",perh);
	}
	else 
	{
		printf("Invaild Height..");
	}
	getch();
}
