#include<stdio.h>
#include<conio.h>

void main()
{
	char str[20]="RAVINDRA";
  	char *p;
  	int i=0;
  	clrscr();
  	printf("Enter any string under 20 character:");
  	gets(str);
  	p=str;
  	while (*p != '\0')
  		{
     			i++;
     			p++;
  		}
  	printf("Length of the string is: %d",i);

  	getch();
}