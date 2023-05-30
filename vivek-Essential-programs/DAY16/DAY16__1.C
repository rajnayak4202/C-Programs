#include<stdio.h>
#include<conio.h>

struct employee
{
	char name[20];
    	int id;
    	int salary;
}e[10];

void main()
{
    	int i,n;
    	clrscr();
    	printf("\n\n\n\tHow many number of employee :- ");
    	scanf("%d",&n);
    	printf("...............................................");
  	for(i=0;i<n;i++)
   		{
      			printf("\n\n\tEmployee %d Name:-",i+1);
      			scanf("%s",&e[i].name);
      			printf("\tEmployee %d Id:-",i+1);
      			scanf("%d",&e[i].id);
      			printf("\tEmployee %d Salary:-",i+1);
      			scanf("%d",&e[i].salary);
   		}
	printf("\n\n---------- Employee Details -------------");
  	for(i=0;i<n;i++)
   		{
      			printf("\n\n\tEmployee Name:- %s",e[i].name);
      			printf("\n\tEmployee Id:- %d",e[i].id);
      			printf("\n\tEmployee Salary:- %d",e[i].salary);
   		}
	getch();
}