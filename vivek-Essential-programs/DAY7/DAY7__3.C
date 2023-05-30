#include<stdio.h>
#include<conio.h>

void main()
{
	int num,i,sum=0;
	clrscr();
	printf("Enter the number : ");
	scanf(" %d",&num);
	for(i=12;i>=num;i=i+10)
	{
		sum=sum+i;
	}
	printf("\nsum is : %d",sum);
	getch();
}