//write a program to swap two numbers without using third number.
#include<stdio.h>
#include<conio.h>
void main()
{
   int a;
   int b;
   clrscr();
   printf("Enter value for a:");
   scanf("%d",&a);
   printf("Enter value for b:");
   scanf("%d",&b);
   a=a+b;
   b=a-b;
   a=a-b;
   printf("valu of a is:%d",a);
   printf("\nvalue of b is:%d",b);
   getch();
}