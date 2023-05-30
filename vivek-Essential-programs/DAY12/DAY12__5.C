#include<stdio.h>
#include<conio.h>


void main()
{
	int num,i,sum=0;
	clrscr();
	printf("Enter number : ");
	scanf("%d",&num);

	for(i=1;i<num;i++)
	{
		if(num%2 == 0)
		{
			sum += i;
		}
	}
	if(sum==num)
	{
		printf("%d is perfect number",num);
	}
	else
	{
		printf("%d is not a perfect number",num);
	}
	getch();
}