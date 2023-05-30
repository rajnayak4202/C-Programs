#include<stdio.h>
#include<conio.h>
void main()
{
   int a;
   int b;
   int ans;
   clrscr();
   printf("Enter first no:",a);
   scanf("%d",&a);
   printf("Enter second no:",b);
   scanf("%d",&b);
   ans=a-b;
   printf("Subtraction of two number is:%d",ans);
   ans=a*b;
   printf("\nMultiplication of two number is:%d",ans);
   getch();
}