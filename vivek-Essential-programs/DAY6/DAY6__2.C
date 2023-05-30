#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int i,no1;
	int value=1;
	clrscr();
	printf("Enter the number: ");
	scanf("%d",&no1);
	for(i=1;i<=no1;i++){

		  value=value*i;
	}
	printf("factorial of %d is %d ",no1,value);
	getch();


}