#include <stdio.h>
#include<conio.h>

void main()
{
	float a , b , c;
    	float rt1 , rt2 ;
    	float root, denom ;
	clrscr();
  	printf(" Enter The Value of A");
  	scanf("%f", &a);

  	printf(" Enter The Value of B ");
  	scanf("%f", &b);

  	printf(" Enter The Value of c ");
  	scanf("%f", &c);

 	root = sqrt(b*b - 4*a*c );
 	denom = 2*a;

 	rt1= ((-b + root )/ denom);
 	rt2= ((-b - root)/denom);

 	printf("  root1 = %f \n root2 = %f", rt1,rt2);

    	getch();
}