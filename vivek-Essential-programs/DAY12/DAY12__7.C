#include<stdio.h>
#include<conio.h>

int matrix()
{
	int mat1[3][3]={0,1,2,3,4,5,6,7,8};
	int mat2[3][3]={0,1,2,3,4,5,6,7,8};
	int mat3[3][3];
	int i,j;

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			mat3[i][j]=mat1[i][j]+mat2[i][j];
			printf("  %d",mat3[i][j]);
		}
		printf("\n");
	}
}

void main()
{
	clrscr();
	matrix();
	getch();
}