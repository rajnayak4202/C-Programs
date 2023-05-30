#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,arr[5]={1,2,3,4,5},prr[5]={6,7,8,9,10},nrr[10]={0};
	clrscr();
	for(i=0;i<5;i++)
	{
		nrr[i]=arr[i];
	}
	for(i=0,j=5;i<5;i++,j++)
	{
		nrr[j]=prr[i];
	}
	for(i=0;i<10;i++)
	{
		printf("\n nrr[%d]=%d",i,nrr[i]);
	}
	getch();
}