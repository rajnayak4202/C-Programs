#include<stdio.h>
#include<conio.h>
void main()
{
	int i,rno[5];
	clrscr();
	for(i=0;i<5;i++)
	{
		printf("enter roll no=");
		scanf("%d",&rno[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("roll no=%d\n",rno[i]);
	}
	getch();
}