#include<stdio.h>
#include<conio.h>
void main()
{
	int ans,a,b=0,i,j;
	char c,arr[20],brr[20];
	clrscr();
	do
	{
	scanf("%s",&arr);
	scanf("%s",&brr);
	i=strlen(arr);
	j=strlen(brr);
	if(i==j)
	{
	for(a=0;a<i;a++)
	{
		if(arr[a]!=brr[a])
		{
			b=1;
			break;
		}
	}
	ans=(b==0)?(printf("both string are sam")):(printf("both string are not sam"));
	}
	else
	{
		printf("both string are not sam");
	}
	printf("\nenter y to continue and n to exit=");
	fflush(stdin);
	scanf("%c",&c);
	}while(c!='n');
	getch();
}