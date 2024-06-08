#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,ch;
	printf("Enter values for a and b\n:");
	scanf("%d%d",&a,&b);
	
    printf(" \n1] Addition");
    printf(" \n2] Subtraction");
    printf(" \n3] Multipliction");
    printf(" \n4] Division");
    printf("Enter a Choice:");
    scanf("%d",&ch);
    switch (ch)
    {
    	case 1:
    		printf("Addition = %d",a+b);
    	break;
		case 2:
		    printf("Subtraction=%d",a-b);
		break;
		case 3:
		    printf("Multipliction=%d",a*b);
		break;
		case 4:
		    printf("Division=%d",a/b);
		break ;
				
	}
	getch();
}
