// add of two matrix
#include<stdio.h>
#include<conio.h>

void main()
{
	int matrix1[3][3]={0,1,2,3,4,5,6,7,8};
	int matrix2[3][3]={0,1,2,3,4,5,6,7,8};
	int matrix3[3][3];
	int i,j,k,l;
	int temp=0;
	clrscr();
	printf("  matrix 1 : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		       printf("  %d",matrix1[i][j]);
		}
		printf("\n");

	}
	printf("\n");
	printf("  matrix 2 : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		       printf("  %d",matrix2[i][j]);
		}
		printf("\n");

	}
	printf("\n");
	printf("  matrix 3 : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			matrix3[i][j]=matrix1[i][j]+matrix2[i][j];
			printf("   %d",matrix3[i][j]);
		}
		printf("\n");

	}

	getch();
}