#include <stdio.h>

int main(){
    int x , a, b ,c ;

    a= 4, b = 10 ,c= 50;

    x = a-- + b++ - ++c ;

    printf("x:%d",x);
    return 0;
}