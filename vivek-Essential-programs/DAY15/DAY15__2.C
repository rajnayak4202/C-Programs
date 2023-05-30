#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10];
 	int i,num,smallest,position;
 	clrscr();
 	printf("Enter no of elements:");
 	scanf("%d",&num);
 	for(i=0;i<num;i++)
 		{
    			scanf("%d ",&a[i]);
 		}
    	smallest=a[0];
    	for(i=0;i<num;i++)
    		{
       			if(a[i]<smallest)
       				{
					smallest=a[i];
					position=i;
       				}
    		}
 	printf("\nSmallest Element : %d",smallest);
 	getch();
}
