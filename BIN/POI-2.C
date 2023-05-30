#include<stdio.h>
#include<conio.h>
void main()
{
	char a='r',*q;
	q=&a;
	clrscr();
	printf("%c",*q);
	getch();
}