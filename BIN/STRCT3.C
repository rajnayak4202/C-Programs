#include<stdio.h>
#include<conio.h>
struct student
{
	int rollno;
	char name[10];
	float per;
};
void sinfo(int s1,char s2[10],float s3)
{
	printf("rollno=%d\n",s1);
	printf("name=%s\n",s2);
	printf("per=%f",s3);
}
void main()
{
	struct student s;
	clrscr();
	printf("enter the rollno=");
	scanf("%d",&s.rollno);
	printf("enter the name=");
	scanf("%s",&s.name);
	printf("enter the per=");
	scanf("%f",&s.per);
	sinfo(s.rollno,s.name,s.per);
	getch();
}