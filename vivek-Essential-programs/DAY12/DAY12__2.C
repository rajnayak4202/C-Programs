#include<stdio.h>
#include<conio.h>

int greatest(int num1,int num2,int num3)
{
	if(num1>num2 && num1>num3)
	{
		printf(" num1, %d is big",num1);
	}
	else if(num2>num1 && num2>num3)
	{
		printf("num2, %d is big",num2);
	}
	else
	{
		printf("num3, %d is big",num3);
	}

}

void main()
{
	clrscr();
	greatest(2,6,10);
	getch();
}