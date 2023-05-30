#include<stdio.h>
#include<conio.h>
void main()
{
	int a=10,*p;
	clrscr();
	p=&a;
	printf("%d\n%d\n%x\n%x\n%x\n",a,*p,p,&a,&p);
	*p=20;
	printf("\n%d\n%d\n%x\n%x\n%x\n",a,*p,p,&a,&p);
	getch();
}