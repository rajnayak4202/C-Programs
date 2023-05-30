#include<stdio.h>
#include<conio.h>

void main()
{
	char str[20];
  	char *p;
  	int vcount=0;
  	clrscr();
  	printf("Enter any string under 20 character:");
  	gets(str);
  	p=str;
  	while (*p != '\0')
  		{
        			p++;
     			if(*p=='a' || *p=='e' || *p=='i' || *p=='o' || *p=='u'|| *p=='A' || *p=='E' || *p=='I' || *p=='O' || *p=='U')
     				{
					vcount++;
     				}
     			p++;
  		}
  	printf("Length of the string is: %d",vcount);

  	getch();
}
