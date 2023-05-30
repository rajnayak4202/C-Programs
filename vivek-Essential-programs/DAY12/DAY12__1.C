#include<stdio.h>
#include<conio.h>

int circle(int r)
{
	float pi=3.14;
	int area;

	area= 2*pi*r;
	printf("area of circle is  %d",area);
}
void main()
{
	clrscr();
	circle(6);
	getch();
}