#include<stdio.h>
#include<conio.h>
void main()
{
	int i,temp,arr[5]={2,8,4,9,6};;
	clrscr();
	for(i=0;i<5;i++)
	{
		if(arr[0]<arr[i+1])
		{
			temp=arr[0];
			arr[0]=arr[i+1];
			arr[i+1]=temp;
		}
	}
	printf("arr[0]=%d",arr[0]);
	for(i=0;i<5;i++)
	{
		printf("\n%d",arr[i]);
	}
	getch();
}