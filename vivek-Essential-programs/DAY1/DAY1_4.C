#include<stdio.h>
#include<conio.h>
void main()
{
   int a;
   clrscr();
   printf("Enter A number:",a);
   scanf("%d",&a);
     if(a%2==0)
       {
	 printf("Number you entered is even nuber");
       }
     else
       {
	 printf("Number you entered is odd number");
       }
   getch();
}