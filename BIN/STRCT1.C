#include<stdio.h>
#include<conio.h>
struct book
{
	int id;
	float price;
};
void main()
{
	struct book b;
	clrscr();
	printf("enter your book id=");
	scanf("%d",&b.id);
	printf("enter your book price=");
	scanf("%f",&b.price);
	printf("book id is=%d\nbook price is=%f",b.id,b.price);
	getch();
}