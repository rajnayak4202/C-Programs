#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	printf("enter the a value=");
	scanf("%d",&a);
	printf("enter the b value=");
	scanf("%d",&b);
	printf("  a=%d\n  b=%d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\n\t__AFTER SWAP__\n");
	printf("  a=%d\n  b=%d",a,b);
	getch();
}