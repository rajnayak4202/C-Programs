#include <stdio.h>
#include<conio.h>

void main()
{
	int basic , da , hra , conveyaance , medical ,other , total ;
	clrscr();
	printf(" Enter the Basic  salary ");
	scanf(" %d", &basic);
	da = basic * 0.10 ;
	hra = basic * 0.08 ;
	conveyaance = basic * 0.05 ;
	medical = basic *0.10;
	other = basic * 0.05 ;
	total =  basic +da + hra + conveyaance + medical +other ;
	printf(" your total salary is %d", total );
	getch();
}