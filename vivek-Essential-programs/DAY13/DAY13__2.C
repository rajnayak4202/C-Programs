#include<stdio.h>
#include<conio.h>
void main()
{
	int no;
   	int ans=0;
   	int i,dig;
   	int flg;
   	clrscr();
   	flushall();
   	printf("Enter 4 digit no:");
   	scanf(" %d",&no);
              for(i=0;i<=no;i++)
      		{
			ans=i+0;
	 		ans=ans+i;
      		}

   	printf("\n Ans is: %d",ans);
   	getch();
}






















/*if(no!=0)
      {
	  ans=(no%10+(no/10));
      }
      else
      {
	  printf("there is no number entered");
      } */
