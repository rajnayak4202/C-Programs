#include<stdio.h>
#include<conio.h>
void add(int p1,int p2)
{
	int ans;
	ans=p1+p2;
	printf("%d",ans);
}
void main()
{
	int a,b;
	clrscr();
	add(10,20);
	scanf("%d",&a);
	scanf("%d",&b);
	add(a,b);
	getch();
}