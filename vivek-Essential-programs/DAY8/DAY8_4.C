#include<stdio.h>
#include<conio.h>
void main()
{
  int i,no,sum=0;
  clrscr();
  printf("Enter the number:");
  scanf("%d",&no);
  for(i=0;i<=no;i++)
    {
      sum=sum+i;
    }
    printf("Sum of n numbers:%d",sum);
  getch();
}