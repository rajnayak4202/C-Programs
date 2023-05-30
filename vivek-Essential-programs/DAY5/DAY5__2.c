#include <stdio.h>
#include<conio.h>

void main()
{
	float a , b ;
    	char c ;
	clrscr();
    	printf(" enter the value 1 ");
    	scanf(" %f", &a);

    	printf(" enter the operator ");
    	scanf(" %c", &c);

      	printf(" enter the value 2 ");
    	scanf(" %f", &b);

      

    	if (c == '+' )
    		{
    			printf(" your ans is %f", a + b );
    		}
    
    	else if (c == '-' )
    		{
        			printf(" your ans is %f", a - b );
    		}

     	else if (c == '*' )
    		{
       	 		printf(" your ans is %f", a * b );
    		}

     	else if (c == '/' )
    		{
        			printf(" your ans is %f", a / b );
    		}
    	getch();
}