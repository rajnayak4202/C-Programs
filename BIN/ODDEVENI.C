#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("enter the number a=");
scanf("%d",&a);
b=a%2;
if(b==0)
{
printf("this number is even");
}
else
{
printf("this number is odd");
}
getch();
}
