
#include<stdio.h>
#include<conio.h>
void main()
{
	int phy,chem,bio,math,comp,tot,per;
	
	printf("Enter Five Subject Marks (phy,chem,bio,math,comp):");
	scanf("%d%d%d%d%d",&phy,&chem,&bio,&math,&comp);
	tot=phy+chem+bio+math+comp;
	per=tot/5;
	if(per>=90)
	{
		printf("Student Grade is A");
	}
	else if(per>=80)
	{
		printf("Student Grade is B");
	}
	else if(per>=70)
	{
		printf("Student Grade is C");
	}
	else if(per>=60)
	{
		printf("Student Grade is D");
	}
	else if(per>=40)
	{
		printf("Student Grade is E");
	}
	else
	{
		printf("Student Grade is F");
	}
	
	getch();
}
