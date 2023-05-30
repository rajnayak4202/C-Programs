
#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n,j;
	clrscr();
	printf("Enter the Number :");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
		{
			for(j=1;j<=i;j++)
				{
					printf("%d",i);
				}

			printf("\n");
		}
	getch();
}