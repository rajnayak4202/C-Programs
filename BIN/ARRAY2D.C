#include<stdio.h>
#include<conio.h>
void main()
{
	int r,c,arr[2][3];
	clrscr();
	for(r=0;r<2;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("enter the number=");
			scanf("%d",&arr[r][c]);
		}
	}
	for(r=0;r<2;r++)
	{       printf("\n");
		for(c=0;c<3;c++)
		{
			printf("%d\t",arr[r][c]);
		}
	}
	getch();
}