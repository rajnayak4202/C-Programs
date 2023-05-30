#include<stdio.h>
#include<conio.h>

void mat()
{
	int a[3][3]={1,2,3,4,4,3,2,1,3};
   	int b[3][3]={1,2,3,4,4,3,2,1,3};
   	int sum[3][3];
   	int i,j,*p,*q;
   	printf("Value of first matrices:\n");
   	for(i=0;i<3;i++)
   		{
     			for(j=0;j<3;j++)
     				{
       					printf("%d ",a[i][j]);
     				}
     			printf("\n");
   		}
   	printf("\n\n");
   	printf("Value of second metrices:\n");
   	for(i=0;i<3;i++)
   		{
     			for(j=0;j<3;j++)
     				{
       					printf("%d ",b[i][j]);
     				}
     			printf("\n");
   		}
   	printf("\n\n");
   	p=&a[i][j];
   	q=&b[i][j];
   	printf("Value of second metrices:\n");
   	for(i=0;i<3;i++)
   		{
     			for(j=0;j<3;j++)
     				{
       					sum[i][j]=a[i][j]+b[i][j];
       					printf("%d ",sum[i][j]);
     				}
     			printf("\n");
   		}
}


void main()
{
   	clrscr();
   	mat();
   	getch();
}