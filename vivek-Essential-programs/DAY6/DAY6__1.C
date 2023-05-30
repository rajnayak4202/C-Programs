#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int no1;
	int no2;
	int ans=0;
	char op;
	clrscr();
	printf("Enter the number 1 : ");
	scanf(" %d",&no1);
	printf("Enter the number 2 : ");
	scanf(" %d",&no2);
	printf("Enter opration(+,-,/,*) : ");
	scanf(" %c",&op);

	printf("\n");

	switch(op)
	{
		case '+': ans = no1 + no2;
			  printf("Number 1 is : %d \n",no1);
			  printf("Number 2 is : %d \n",no2);
			  printf("Answer (%c) is : %d",op,ans);
			  break;
		case '*': ans = no1 * no2;
			  printf("Number 1 is : %d \n",no1);
			  printf("Number 2 is : %d \n",no2);
			  printf("Answer (%c) is : %d",op,ans);
			  break;
		case '/': ans = no1 / no2;
			  printf("Number 1 is : %d \n",no1);
			  printf("Number 2 is : %d \n",no2);
			  printf("Answer (%c) is : %d",op,ans);
			  break;
		case '-': ans = no1 - no2;
			  printf("Number 1 is : %d \n",no1);
			  printf("Number 2 is : %d \n",no2);
			  printf("Answer (%c) is : %d",op,ans);
			  break;
		default : printf("invalid opration");
			  break;
	}
	getch();


}