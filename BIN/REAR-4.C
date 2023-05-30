#include<stdio.h>
#include<conio.h>
int add(int p1,int p2)
{
	int ans;
	ans=p1+p2;
	return ans;
}
void main()
{
	int a,b,i;
	clrscr();
	scanf("%d",&a);
	scanf("%d",&b);
	i=add(a,b);
	printf("ans=%d",i);
	getch();
}