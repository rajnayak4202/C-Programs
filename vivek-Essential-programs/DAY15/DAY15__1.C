#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[10]={0};
 	int i;
 	clrscr();
 	printf("Read and print array elements:");
 	printf("\n------------------------------------------");
 	printf("\nInput 10 elements in array:\n");
 	for(i=0;i<=10;i++)
 		{
    			printf("Element %d:",i);
    			scanf(" %d",&arr[i]);
 		}
 	printf("Array is:");
 	for(i=0;i<=10;i++)
 		{
    			printf("%d ",arr[i]);
 		}	
 	printf("\n");
 	getch();
}