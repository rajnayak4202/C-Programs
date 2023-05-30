#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char a[10],b[5];
	clrscr();
	printf("enter=");
	scanf("%s",&a);
	printf("enter=");
	scanf("%s",&b);
	strcat(a,b);
	printf("%s\n,%s",a,b);
	getch();
}