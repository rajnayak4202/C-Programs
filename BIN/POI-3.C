#include<stdio.h>
#include<conio.h>
void swap(int *p,int *q)
{
	printf("\na=%d\nb=%d",*p,*q);
	*p=*p+*q;
	*q=*p-*q;
	*p=*p-*q;
}
void main()
{
	int a,b;
	clrscr();
	scanf("%d",&a);
	scanf("%d",&b);
	swap(&a,&b);
	printf("\na=%d\nb=%d",a,b);
	getch();
}
