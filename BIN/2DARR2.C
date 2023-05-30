#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,l;
	int row,cnt;
	clrscr();
	printf("length of pyramid:");
	scanf("%d",&row);
	cnt = (row*2)-2;
	for(i=0;i<row;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("*");
		}
		for(k=cnt;k>=0;k--)
		{
			printf(" ");
		}
		for(l=0;l<=i;l++)
		{
			printf("*");
		}
		cnt=cnt-2;
		printf("\n");
	}
	getch();
}