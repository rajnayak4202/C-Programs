#include<stdio.h>
#include<conio.h>

int prime(int no1,int no2)
{
	int lcm=0;
	int max;
	int step;

	if(no1>no2)
	{
		max=step=no1;
	}
	else
	{
		max=step=no2;
	}
	while(1)
	{
		if(max%no1==0 && max%no2==0)
		{
			lcm=max;
			break;
		}
		max +=step;
	}
	printf("LCM is %d",lcm);

}

void main()
{
	clrscr();
	lcm(3,4);
	getch();
}