#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n2,*p,*q,ans;
    	clrscr();
    	printf("Enter the first no.:");
    	scanf(" %d",&n1);
    	printf("Enter the second no.:");
    	scanf(" %d",&n2);

    	p=&n1;
    	q=&n2;

    	ans=*p+*q;
    	printf("Sum of two numbers using pointer is: %d",ans);
    	getch();
}