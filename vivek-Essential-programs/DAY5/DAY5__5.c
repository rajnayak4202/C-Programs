#include <stdio.h>
#include<conio.h>

void main()
{    
	int a , b ,c ;
	clrscr();
  	printf(" Enter The Number 1 ");
  	scanf(" %d", &a);

  	printf(" Enter the 2 num");
  	scanf(" %d", &b);

  	printf(" Enter the 3 num ");
  	scanf(" %d", &c);

  	if ( a>b && a>c)
		{
    			printf(" A is bigger");
    		}

    	else if ( b>c && b>a)
		{
        			printf(" B is bigger");
		}



 	else
		{
    			printf(" C is bigger");
 		}

	getch();
    }
  

   
