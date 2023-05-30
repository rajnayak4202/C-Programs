//2-sum of 1 element to 2 element
#include<stdio.h>
#include<conio.h>
void main()
{
	int start=3,end=6,sum=0,i=0,arr1[10]={1,3,2,8,2,6,4,9,4,5};
	clrscr();
	for(i=start;i<=end;i++)
	{
		sum = sum + arr1[i];
	}
	printf("sum of start to end is : %d",sum);
	getch();
}