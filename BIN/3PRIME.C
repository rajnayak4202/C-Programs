//prime number 1 to 100
#include<stdio.h>
#include<conio.h>
void prime(int no)
{
	int a,b,ans;
	for(a=1;a<=no;a=a+1)
	{
		for(b=2;b<a;b=b+1)
		{
			ans=a%b;
			if(ans==0)
			{
				break;
			}
		}
		if(ans!=0)
		{
			printf("%d\n",a);
		}
	}
}
void main()
{
	int num;
	char c;
	clrscr();
	do
	{
	fflush(stdin);
	printf("enter number=");
	scanf("%d",&num);
	prime(num);
	fflush(stdin);
	printf("\ny to continue and n to exit=");
	scanf("%c",&c);
	}while(c!='n');
}