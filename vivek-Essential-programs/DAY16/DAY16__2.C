#include<stdio.h>
#include<conio.h>

struct Employee
{
	float salary;
};

void main()
{
    	struct Employee e;
    	float basic,hra,da,pf,net_salary;
    	clrscr();
    	printf("\n\n\n<----------Employee salary calculation----------->");
    	printf("\n\nEnter the basic salary :");
    	scanf("%f",&basic);
    	hra=basic*10/100;
    	da=basic*5/100;
    	pf=basic*12/100;
    	net_salary=basic+hra+da-pf;
    	printf("\n\nEmployee hra is = %.2f",hra);
    	printf("\nEmployee da is = %.2f",da);
    	printf("\nEmployee pf is = %.2f",pf);
    	printf("\nEmployee net salary is = %.2f",net_salary);
    	getch();
}
