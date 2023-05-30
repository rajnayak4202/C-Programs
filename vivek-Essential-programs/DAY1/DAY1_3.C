#include<stdio.h>
#include<conio.h>
void main()
{
   int C;
   float F;
   clrscr();
   printf("Enter Celsious:",C);
   scanf("%d",&C);
   F=1.8*C+32;
   printf("conversion of celcious into Fahrenhit is:%f",F);
   getch();
}