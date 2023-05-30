#include<stdio.h>
#include<conio.h>
void main()
{
	int a=0;
	char b[10];
	clrscr();
	printf("enter=");
	//scanf("%s",&b);
	gets(b);
	while(b[a]!='\0')
	{
		a++;
	}
	printf("%d",a);
	getch();
}