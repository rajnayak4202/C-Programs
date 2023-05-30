#include<stdio.h>
#include<conio.h>

int find()
{
	int arr[8]={0,1,2,3,4,5,6,7},bol=0,i,no;
	printf("Enter integer : ");
	scanf("%d",&no);

	for(i=0;i<8;i++){

		if(arr[i] == no)
		{
			bol = 1 ;
			break;
		}
	}

	if(bol == 1)
	{
		printf("Element found");
	}
	else
	{
		printf("Element not found");
	}
}
void main()
{
	clrscr();
	find();
	getch();
}