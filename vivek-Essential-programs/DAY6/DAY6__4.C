#include<stdio.h>
#include<conio.h>

void main()
{
	int rem;
	int rev=0;
	int no;
	clrscr();
	printf("Enter the number : ");
	scanf(" %d",&no);
	while(no!=0)
	{
		rem=no%10;
		rev=rev*10+rem;
		no/=10;
	}
	printf("\nreverse  is : %d",rev);
	getch();
}