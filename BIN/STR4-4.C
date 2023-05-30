#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,ans;
	char d;
	clrscr();
	do
	{
	fflush(stdin);
	printf("enter a,b and c value=\n");
	printf("enter a=");
	scanf("%d",&a);
	printf("enter b=");
	scanf("%d",&b);
	printf("enter c=");
	scanf("%d",&c);
	printf("\n");
	ans=(a>b)?((a>c)?a:c):((b>c)?b:c);
	printf("max number is %d",ans);
	printf("\nenter y to continue and n to exit=");
	fflush(stdin);
	scanf("%c",&d);
	}while(d!='n');
}