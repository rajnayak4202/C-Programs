#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int a;
	char arr[5]={'r','a','j','\0'},brr[5]={'r','a','j','\0'};
	clrscr();
	a=strcmp(arr,brr);
	printf("%d",a);
	getch();
}