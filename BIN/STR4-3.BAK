#include<stdio.h>
#include<conio.h>
void main()
{
	int c=0,d=0,e=0,ans;
	//char a[10]={'n','a','y','a','k','\0'},b[5]={'r','a','j','\0'};
	char a[10],b[5],r='y';
	clrscr();
	do
	{
		scanf("%s",&a);
		scanf("%s",&b);
		while(a[c]!='\0')
		{
			c++;
		}
		while(b[e]!='\0')
		{
			e++;
		}
		ans=c+e;
		if(ans<10)
		{
		a[c]=' ';
		c=c+1;
		while(b[d]!='\0')
		{
			a[c]=b[d];
			c++;
			d++;
		}
		a[c]='\0';
		printf("%s",a);
		}
		else
		{
			printf("this is not valid");
		}
		printf("\npress y to cotinue=");
		fflush(stdin);
		scanf("%c",&r);
	}while(r=='y');
		getch();
}