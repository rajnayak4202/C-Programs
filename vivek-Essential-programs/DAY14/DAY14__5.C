#include<stdio.h>
#include<conio.h>
#include<string.h>

int i,len=0;
void mychar(char str1[20], char str2[20])
{
	strncat(str1,str2,20);
}

void main()
{
  	char str1[20];
  	char str2[20];
  	clrscr();
 	printf("Enter first string under 20 character:");
  	gets(str1);
  	printf("Enter second string under 20 character:");
  	gets(str2);
  	mychar(str1,str2);
  	printf("Concatineted string is: %s",str1);
  	getch();
}