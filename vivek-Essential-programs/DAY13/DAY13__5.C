#include<stdio.h>
#include<conio.h>
int a=30;
void fun()
{
	int b=10;
   	int ans;
   	ans=a+b;
   	printf("Addition of two number is: %d",ans);
}


void main()
{
   	int c=20;
   	int sum;
   	sum=a-c;
   	clrscr();
   	fun();
   	printf("\nSutraction of two number is: %d",sum);
   	getch();
}