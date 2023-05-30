#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d,e,ans=1;
	int row,count;
	clrscr();
	printf("enter=");
	scanf("%d",&row);
	count=row-1;
	for(a=0;a<row;a++)
	{       e=a+a;
		for(b=0;b<count;b++)
		{
			printf(" ");
		}
		for(c=0;c<=e;c++)
		{       printf("%d",ans);
			ans=(ans==1)?0:1;
		}
		for(d=0;d<count;d++)
		{
			printf(" ");
		}
		count=count-1;
		printf("\n");
	}
	getch();
}