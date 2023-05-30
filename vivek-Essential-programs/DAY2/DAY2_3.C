//Take two values from user and perrform addition, subtraction,
//multiplication, devesion and modulo.
#include<stdio.h>
#include<conio.h>
void main()
{
   float a;
   float b;
   float ans;
   clrscr();
   printf("Enter first no:",a);
   scanf("%f",&a);
   printf("Enter second no:",b);
   scanf("%f",&b);
   ans=a+b;
   printf("Addition of two number is:%f",ans);
   ans=a-b;
   printf("\nSubtraction of two number is:%f",ans);
   ans=a*b;
   printf("\nMultiplication of two number is:%f",ans);
   ans=a/b;
   printf("\nDevesion of two number is:%f",ans);
   (float)ans=(int)a%(int)b;
   printf("\nModulo of two number is:%f",ans);
   getch();
}