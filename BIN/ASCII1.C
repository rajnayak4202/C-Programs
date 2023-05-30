#include<stdio.h>
#include<conio.h>
void main()
{
	char a,b;
	clrscr();
	do
	{
		fflush(stdin);
		printf("enter any char=");
		scanf("%c",&a);
		printf("%c ascii value is=%d",a,a);
		printf("\npress y to continue=");
		fflush(stdin);
		scanf("%c",&b);
	}while(b=='y');
	getch();
}