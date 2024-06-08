#include<stdio.h>
#include<conio.h>
int main()
{
	int num;
	printf("Enter Number to check divisible by 5 and 11:");
	scanf("%d",&num);
	
	switch(num%5==0 && num%11==0)
	{
		case 0:
			printf("Number is Not divisible by 5 and 11....");
			break;
		case 1:
		    printf("Yes Number is divisible by 5 and 11....");
			break;
		default:
		    printf("Invaild Input....");
					
	}
	return 0;
}
