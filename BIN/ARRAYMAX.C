#include<stdio.h>
#include<conio.h>
void main()
{
	int i,no,max=0,*arr;
	char c;
	clrscr();
	do
	{
	fflush(stdin);
	printf("enter the sizeof array=");
	scanf("%d",&no);
	arr=(int*)malloc(no*sizeof(int));
	for(i=0;i<no;i++)
	{
		printf("enter arr[%d] value=",i+1);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<no;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	printf("max=%d",max);
	fflush(stdin);
	printf("\nenter 'y' to continue & 'n' to exit=");
	scanf("%c",&c);
	}while(c!='n');
}