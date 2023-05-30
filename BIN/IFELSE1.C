#include<stdio.h>
#include<conio.h>
void main()
{
int i,no;
no=12;
clrscr();
for(i=10;i<=15;i=i+5)
{
if(i<no)
{
printf("10 is < 15");
}
else
{
printf("\n15 is > 10");
}
}
getch();
}