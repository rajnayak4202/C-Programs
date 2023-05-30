//write a program to find area of circle.
#include<stdio.h>
#include<conio.h>
void main()
{
   float r;
   float ans;
   clrscr();
   printf("Enter radius:");
   scanf("%f",&r);
   ans=3.14f*r*r;
   printf("Area of circle is:%f",ans);
   getch();
}