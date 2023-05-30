#include <stdio.h>
#include<conio.h>

void main()
{
	int marks ;
	clrscr();
    	printf(" Enter the marks you got");
    	scanf(" %d", &marks);

    	if ( marks<= 100 && marks>= 80)
    		{
    			printf(" You got Distriction ");
    		}
      	else if ( marks<= 79 && marks>= 60)
      		{
    			printf(" You got First class");
      		}
	else if ( marks<= 59 && marks>= 35)
    		{
    			printf(" You got Second class");
     		}

     	else if ( marks<= 34 && marks>= 0)
     		{
   			printf(" you got fail ");
     		}
     
    	getch();
}