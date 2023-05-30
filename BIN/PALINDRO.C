//palindrome program

#include<stdio.h>
#include<conio.h>
void main()
{
int no,sno,rev=0,ans=0;
clrscr();
printf("enter the number=");
scanf("%d",&no);
sno=no;
while(sno>0)
{
rev=sno%10;
sno=sno/10;
//no=sno;
ans=ans*10+rev;
}
if(no==ans)
{
printf("%d is palindrome",ans);
}
else
{
printf("%d is not palindrome",ans);
}
getch();
}