#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("enter the number a value=");
scanf("%d",&a);
printf("enter the number b value=");
scanf("%d",&b);
printf("\na=%d\nb=%d\n",a,b);

if(a<b)
{
printf("\na is < b\n");
}
else
{
printf("\nb is < a\n");
}
getch();
}