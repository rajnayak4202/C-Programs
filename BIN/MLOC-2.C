#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int no;
	char *ptr;
	clrscr();
	printf("enter the number=");
	scanf("%d",&no);
	ptr=(char*)malloc(no*sizeof(char));
	printf("enter the name=");
	scanf("%s",ptr);
	printf("%s",ptr);
	getch();
}