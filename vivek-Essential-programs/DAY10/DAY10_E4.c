#include<stdio.h>

#include<conio.h>

#include<string.h>


int main() 
{
    
	char s1[20]="SharadVaghela";
    
	char s2[20]="SharadVaghela";
    
	int n;
    
	clrscr();
    
	n=strcmp(s1,s2);
    
	printf("%d",n);
    
	getch();
    
	return 0;

}