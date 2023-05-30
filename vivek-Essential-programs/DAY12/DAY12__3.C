#include<stdio.h>
#include<conio.h>

int prime(int num)
{
	int temp=1;
	int i;
	for(i=2;i<=num/2;i++)
	{
		if(num%i==0)
		{
			printf(" is not a prime number");
			temp=0;
			break;
		}
	}
	if(temp==1)
	{
		printf("is a prime number");
	}

}



void main()
{
	clrscr();
	prime(5);
	getch();
}