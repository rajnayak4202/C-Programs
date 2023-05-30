#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int c;
	float f;
	printf("enter c=");
	scanf("%d",&c);
	f=c*1.8+32;
	printf("%d celsius = %f fahrenheit",c,f);
	getch();
}