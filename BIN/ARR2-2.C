#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,arr[5][5];
	clrscr();
	for(a=0;a<5;a++)
	{
		printf("\n");
		for(b=0;b<5;b++)
		{
			if(a<=b)
			{
				printf("*");
			}
		}
	}
	getch();
}