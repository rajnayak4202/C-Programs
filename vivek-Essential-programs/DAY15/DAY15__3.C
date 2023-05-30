#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[4][3];
  	int i,j,n;
  	clrscr();
  	printf("Enter the number of columns:");
  	scanf("%d",&n);
  	for(i=0;i<n;i++)
  		{
   			for(j=0;j<4;j++)
   				{
       					scanf("%d",&arr[i][j]);
   				}
  		}
  	printf("\nPrinted element is:\n\n");
  	for(i=0;i<n;i++)
  		{
     			for(j=0;j<4;j++)
     				{
       					printf("%d   ",arr[i][j]);
     				}
     			printf("\n");
  		}
  	getch();
}