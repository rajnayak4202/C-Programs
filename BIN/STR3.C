#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int ans;
	char a[10];
	clrscr();
	printf("enter=");
	gets(a);
	//printf("enter=");
	//scanf("%s",&b);
	ans=strlen(a);
	printf("%d",ans);
	getch();
}