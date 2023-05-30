#include<stdio.h>
#include<conio.h>
void main()
{
	int ans,i,temp,count=0,arr[6]={1,8,6,15,9,3};
	clrscr();
	for(i=5;i>=0;i--)
	{       ans=6%2;
		if(ans==0)
		{
			if(i==count-1)
			{
				break;
			}
		}
		else
		{
			if(i==count)
			{
				break;
			}
		}
			temp=arr[i];
			arr[i]=arr[count];
			arr[count]=temp;
			count++;
	}
	for(i=0;i<6;i=i+1)
	{
		printf("\n%d",arr[i]);
	}
	getch();
}