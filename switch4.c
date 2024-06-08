#include<stdio.h>
#include<conio.h>
void main()
{
	int a1, a2, a3;
	printf("Enter Angles of a triangle:");
	scanf("%d%d%d",&a1,&a2,&a3);
	 switch(a1==a2 && a2==a3 )
	 {
	 	case 1:
	 		printf("Triangle is Equailateral....");
	 		break;
	 	case 0:
		    switch(a1==a2||a2==a3)
			{
				case 1:
					printf("Triangle is isoscale....");
					break ;
				case 0:
				    printf("Triangle is Scalene...");
					break;	
			}	
			break;
		default:
		   printf("Invaild Input....");	
	 }
}
