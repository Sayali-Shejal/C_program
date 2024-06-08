
#include<stdio.h>
#include<conio.h>
void main()
{
	int ch,n1,a,b,c;
	printf("\n1:Check Number is +ve ,-ve or Zero..");
	printf("\n2:Check Number is even or odd..");
	printf("\n2:Chech  Maximum  Number ..");
	
	printf("\nEnter Your Choise :");
	scanf("%d",&ch);
	
	switch (ch)
	{
		case 1:
			
			printf("Enter Number :\n");
	        scanf("%d",&n1);
			if(n1>0)
			{
				printf("Number is  Positive..");
			}
			else if(n1=0)
			{
				printf("Number is Equal..");
			}
			else
			{
				printf("Number is Negative");
			}
		break ;
		case 2:
			
			printf("Enter Number :\n");
            scanf("%d",&n1);
		    if(n1%2==0)
			{
				printf("Number is Even ...");
			}
			else
			{
				printf("Number is Odd...");
			}
		break;
		case 3:
			
			printf("Enter Three Number to check maximum:\n");
	        scanf("%d%d%d",&a,&b,&c);
	        if(a>b && a>c)
	        {
	        	printf("Maximum Number A:%",a);
			}
			else if(b>a && b>c)
	        {
	        	printf("Maximum Number B:%",b);
			}
			else 
	        {
	        	printf("Maximum Number C:%",c);
			}
			break;
		default:
		    printf("Invaild Choice....");		
	}
}

