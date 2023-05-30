#include<stdio.h>
#include<conio.h>
int add()
{
	int n1=10,n2=20,ans;
	ans=n1+n2;
	return ans;
}
void main()
{
	int a;
	clrscr();
	a=add();
	printf("ans=%d",a);
	getch();
}