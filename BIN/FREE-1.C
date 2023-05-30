#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int *ptr,i,no,n;
	clrscr();
	printf("enter size of array=");
	scanf("%d",&no);
	ptr=(int*)malloc(no*sizeof(int));
	for(i=0;i<no;i++)
	{
		printf("enter=");
		scanf("%d",&ptr[i]);
	}
	for(i=0;i<no;i++)
	{
		printf("%d\n",ptr[i]);
	}
	free(ptr);
	printf("enter size of array=");
	scanf("%d",&no);
	ptr=(int*)realloc(ptr,no*sizeof(int));
	for(i=0;i<no;i++)
	{
		printf("enter=");
		scanf("%d",&ptr[i]);
	}
	for(i=0;i<no;i++)
	{
		printf("%d\n",ptr[i]);
	}
	free(ptr);
	getch();
}