#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,ans,i;
	a=0;
	b=1;
	clrscr();
	printf("%d,%d",a,b);
	for(i=0;i<22;i++)
	{
		ans=a+b;
		printf(",%d",ans);
		a=b;
		b=ans;
	}
	getch();
}