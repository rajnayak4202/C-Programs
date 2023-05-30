#include <stdio.h>
#include<coni.h>

void main()
{
	int l , b , area ;
	clrscr();
	printf(" enter the length of triangle");
    	scanf(" %d", &l);

   	printf(" enter the breadth of traingle");
    	scanf(" %d", &b);

    	area = (l*b)/2;
	printf(" the area of traingle is %d", area );
	getch();
}