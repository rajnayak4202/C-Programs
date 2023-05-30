#include<stdio.h>
#include<conio.h>
void main()
{
	int i,min,arr[5]={1,9,8,3,6};;
	min=arr[0];
	clrscr();
	for(i=0;i<5;i++)
	{
		if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	printf("min=%d",min);
	getch();
}