#include<stdio.h>
#include<conio.h>
void main()
{
	int i,count;
	//char arr[15]={'r','c','c','v','v','n','n','p','p','c','c','c','\0'};
	char arr[30],j;
	clrscr();
	do
	{
	fflush(stdin);
	i=0;
	printf("enter string=");
	scanf("%s",&arr);
	printf("%s=",arr);
	while(arr[i]!='\0')
	{
		count=0;
		while(arr[i]==arr[i+1])
		{
			count++;
			i++;
		}
		count++;
		printf("%d%c",count,arr[i]);
		i++;
	}
	fflush(stdin);
	printf("\nenter j=");
	scanf("%c",&j);
	}while(j!='n');
}