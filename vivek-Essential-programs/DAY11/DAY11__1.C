#include<stdio.h>
#include<conio.h>

void main()
{
	int matrix1[3][3];
	int matrix2[3][3];
	int matrix3[3][3];
	int i,j,k,l;
	int temp=0;
	clrscr();
	printf("  matrix 1 : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("  %d",temp);
			temp++;
		}
		printf("\n");

	}
	printf("\n");

	temp=0;
	printf("  matrix 2 : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("  %d",temp);
			temp++;
		}
		printf("\n");
	}
	getch();
}