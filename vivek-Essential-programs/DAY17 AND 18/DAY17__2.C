#include<stdio.h>
#include<conio.h>

struct name
{
	char fname[20];
    	char mname[20];
    	char lname[20];
};

struct student
{
    	int id;
    	int age;
    	char mobile_no[20];
    	int marks;
    	struct name n;
};

void main()
{
    	struct student s1[5];
    	int i;
    	clrscr();
    	for(i=0;i<5;i++)
     		{
	  		printf("\n Enter id of student %d : ",i+1);
	  		scanf("%d",&s1[i].id);
	  		printf(" Enter first_name of student %d : ",i+1);
	  		scanf("%s",&s1[i].n.fname);
	  		printf(" Enter middle_name of student %d : ",i+1);
	  		scanf("%s",&s1[i].n.mname);
	  		printf(" Enter last_name of student %d : ",i+1);
	  		scanf("%s",&s1[i].n.lname);
	  		printf(" Enter age of student %d : ",i+1);
	  		scanf("%d",&s1[i].age);
	  		printf(" Enter mobile_no of student %d : ",i+1);
	  		scanf("%s",&s1[i].mobile_no);
	  		printf(" Enter marks of student %d : ",i+1);
	  		scanf("%d",&s1[i].marks);
     		}
    	for(i=0;i<5;i++)
     		{
	   		printf("\n Id of student %d is : %d",i+1,s1[i].id);
	   		printf("\n First_name of student %d is : %s",i+1,s1[i].n.fname);
	   		printf("\n Middle_name of student %d is :%s",i+1,s1[i].n.mname);
	   		printf("\n Last_name of student %d is : %s",i+1,s1[i].n.lname);
	   		printf("\n Age of student %d is : %d",i+1,s1[i].age);
	   		printf("\n Mobile_no of student %d is :%s",i+1,s1[i].mobile_no);
	   		printf("\n Marks of student %d is : %d\n",i+1,s1[i].marks);
     		}
   	getch();
}