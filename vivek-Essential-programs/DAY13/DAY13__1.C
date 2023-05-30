#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
  	int a=0;
  	int b=1;
  	int c;
  	clrscr();
  	printf("%d ",a);
  	printf("%d ",b);
  	for(i=0;i<=7;i++)
  		{
     			c=a+b;
    			printf("%d ",c);
     			a=b;
     			b=c;
  		}
  	getch();
}