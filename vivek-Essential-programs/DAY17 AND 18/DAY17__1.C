#include<stdio.h>
#include<conio.h>

struct student
{
	int id;
  	char name[20];
  	int age;
  	char mobile_num[11];
  	int marks[5];
}s[5];

void main()
{
  	int i,j,n;
  	clrscr();
  	printf("\n\n----------------Enter Student Details------------------");
  	printf("\n\tHow many number of Student ?? ");
  	scanf("%d",&n);
  	for(i=0;i<n;i++)
     		{
			printf("\n\n\tEnter Student ID :- ",i+1);
			scanf("%d",&s[i].id);
		printf("\tEnter Student Name :- ",i+1);
		scanf("%s",&s[i].name);
		printf("\tEnter Student Age :- ",i+1);
		scanf("%d",&s[i].age);
		printf("\tEnter Student Mobile Number :- ",i+1);
		scanf("%s",&s[i].mobile_num);
		for(j=0;j<5;j++)
	  		{
	      			printf("\n\tEnter Student[%d] Marks :- ",i+1,i+1);
	      			scanf("%d",&s[i].marks[i]);
	  		}
      		}
     		printf("\n\n-----------------Student Information-----------------");
 		for(i=0;i<n;i++)
  			{
      				printf("\n\n\tStudent ID is %d ",s[i].id);
      				printf("\n\tStudent Name is %s ",s[i].name);
      				printf("\n\tStudent Age is %d ",s[i].age);
      				printf("\n\tStudent Mobile number is %s",s[i].mobile_num);
	  			for(j=0;j<5;j++)
	   				{
	     					printf("\n\tStudent[%d] Marks is %d",i+1,s[i].marks[i]);
	   				}
  			}
 	getch();
}
