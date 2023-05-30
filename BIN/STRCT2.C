#include<stdio.h>
#include<conio.h>
struct student
{
	int rollno;
	char name[10];
	float per;
};
struct employee
{
	int id;
	float salary;
};
void main()
{
	struct student s;
	struct employee e;
	clrscr();
	printf("enter student rollno=");
	scanf("%d",&s.rollno);
	printf("enter student name=");
	scanf("%s",&s.name);
	printf("enter student per=");
	scanf("%f",&s.per);
	printf("enter employee id=");
	scanf("%d",&e.id);
	printf("enter employee salary=");
	scanf("%f",&e.salary);
	printf("student rollno=%d\n",s.rollno);
	printf("student name=%s\n",s.name);
	printf("student per=%f\n",s.per);
	printf("employee id=%d\n",e.id);
	printf("employee salary=%f",e.salary);
	getch();
}