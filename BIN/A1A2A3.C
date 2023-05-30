#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[2][2],brr[2][2],crr[2][2],a,b;
	clrscr();
	for(a=0;a<2;a++)
	{
		for(b=0;b<2;b++)
		{
			printf("arr[%d][%d]=",a,b);
			scanf("%d",&arr[a][b]);
			printf("brr[%d][%d]=",a,b);
			scanf("%d",&brr[a][b]);
			crr[a][b]=arr[a][b]+brr[a][b];
		}
	}
	for(a=0;a<2;a++)
	{
		printf("\n");
		for(b=0;b<2;b++)
		{
			printf("%d ",crr[a][b]);
		}
	}
	getch();
}