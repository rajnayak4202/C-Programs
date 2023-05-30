//3-create 3 array and and make total of 2 subjects.
#include<stdio.h>
#include<conio.h>
void main()
{
	int i=0,sub1[10]={1,3,2,8,2,6,4,9,4,5};
	int sub2[10]={3,7,4,6,5,1,9,2,9,2};
	int total[10]={0};
	clrscr();
	printf("student no.    total marks\n");
	for(i=0;i<10;i++)
	{
		total[i]=sub1[i]+sub2[i];
		printf("%d              %d\n",i+1,total[i]);
	}
	getch();
}