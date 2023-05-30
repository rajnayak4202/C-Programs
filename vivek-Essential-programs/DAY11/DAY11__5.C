
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char stu[10];
	int i;
	clrscr();
	for(i=1;i<7;i++)
	{
		printf("Enter the name of six students : %d \n",i);
		scanf("%s",stu);


	}
	printf("%s",stu);
	getch();
}