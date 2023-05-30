#include<stdio.h>
#include<conio.h>
void main()
{
	int c=0,d=0;
	char a[10],b[15];
	clrscr();
	scanf("%s",&b);
	while(b[d]!='\0')
	{
		d++;
	}
	if(d<10)
	{
	while(b[c]!='\0')
	{
		a[c]=b[c];
		c++;
	}
	a[c]='\0';
	printf("%s",a);
	}
	else
	{
		printf("this is not copy");
	}
	getch();
}