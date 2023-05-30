#include<stdio.h>
#include<conio.h>


void main()
{
	int i,sum=0,start,end;
	clrscr();
	printf("Enter starting point : ");
	scanf(" %d",&start);
	printf("Enter ending point : ");
	scanf(" %d",&end);

	for(i=start;i<=end;i++)
	{
		if(i%7==0)
		{
			sum=sum+i;
		}
	}
	printf("\nsum of integer : %d",sum);
	getch();
}