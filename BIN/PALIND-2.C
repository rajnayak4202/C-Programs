#include<stdio.h>
#include<conio.h>
int palindrome(int no)
{
	int sno,rev=0,ans=0;
	sno=no;
	while(sno>0)
	{
		rev=sno%10;
		sno=sno/10;
		ans=ans*10+rev;
	}
	return ans;
}
void main()
{
	int num,mainans;
	char c;
	clrscr();
	do
	{
	fflush(stdin);
	printf("enter the any number=");
	scanf("%d",&num);
	mainans=palindrome(num);
	if(num==mainans)
	{
		printf("%d is palindrome",mainans);
	}
	else
	{
		printf("%d is not palindrome",mainans);
	}
	fflush(stdin);
	printf("\ny to continue - n to exit=");
	scanf("%c",&c);
	}while(c!='n');
}