#include<stdio.h>
#include<conio.h>

void swap(int *a,int *b)
{
	int c;
    	clrscr();
    	c=*a;
    	*a=*b;
    	*b=c;
    	printf("Value of first no after swaping: %d",*a);
    	printf("\nValue of Second no after swaping: %d",*b);
}


void main()
{
  	int a=10;
  	int b=20;
  	clrscr();
  	swap(&a,&b);
  	printf("\nValue of first no after swaping: %d",a);
  	printf("\nValue of Second no after swaping: %d",b);
  	getch();
}