//1-print highest mark in array.
#include<stdio.h>
#include<conio.h>
void main()
{
	int max=0,i=0,arr1[10]={1,3,2,8,2,6,4,9,4,5};
	clrscr();
	for(i=0;i<10;i++)
	{
		if(max < arr1[i])
		{
			max = arr1[i];
		}
	}
	printf("highest marks is : %d",max);
	getch();
}