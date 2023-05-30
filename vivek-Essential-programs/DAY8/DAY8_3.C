#include<stdio.h>
#include<conio.h>
void main()
{
  int no;
  int count;
  int sum;
  clrscr();
  printf("Enter the number:");
  scanf("%d",&no);
  while(count<=no)
  {
   if(count%2==0)
   {
    sum=sum+count;
   }
   count++;
  }
  printf("Sum of all even no. is: %d",sum);
  getch();
}