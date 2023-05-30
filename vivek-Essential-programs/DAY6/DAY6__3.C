#include<stdio.h>
#include<conio.h>

void main()
{
	int i;
	int sum=0;
	int no;
	clrscr();
	printf("Enter the number : ");
	scanf(" %d",&no);
	for(i=1;i<5;i++,no=no/10)
	{
		sum=sum+(no%10);
	}
	printf("\nsum is : %d",sum);
	getch();
}