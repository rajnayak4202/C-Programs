#include<stdio.h>
#include<conio.h>

struct employee
{
	char grade;
    	double basic;
    	int allowance;
};


void main()
{
    	struct employee e1,e2;
    	clrscr();
    	printf("\n\n\tEnter Grade of Employee:-");
    	scanf("%s",&e1.grade);
    	printf("\n\tEnter Basic of Employee:-");
    	scanf("%lf",&e1.basic);
    	printf("\n\tEnter Allowance of Employee:-");
    	scanf("%d",&e1.allowance);
    	e2=e1;
    	printf("\n\n\t---------------------Employee information-----------------\n\n");
    	printf("\n\tEmployee1 Grade:- %c",e1.grade);
    	printf("\n\tEmployee1 Basic:- %lf",e1.basic);
    	printf("\n\tEmployee1 Allowance:- %d\n\n",e1.allowance);
    	printf("\n\tEmployee2 Grade:- %c",e2.grade);
    	printf("\n\tEmployee2 Basic:- %lf",e2.basic);
    	printf("\n\tEmployee2 Allowance:- %d",e2.allowance);
    	getch();
}