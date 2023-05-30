#include <stdio.h>

int main(){
    int a , b ,c , ans ;

    printf(" enter the value 1");
    scanf(" %d", &a);

    printf(" enter the value 2");
    scanf(" %d", &b);

    printf(" enter the value 3");
    scanf(" %d", &c);

    ans= (a>b && a>c )?a:((b>c)?b:c) ;
    printf(" the bigger number is %d ", ans);

    

    
    

    return 0;
}