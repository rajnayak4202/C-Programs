#include<stdio.h>
#include<conio.h>

void main()
{
	FILE *fp1 , *fp2;
   	char filename[20] , c;
   	clrscr();
   	printf("\n Enter file name you want to read :");
   	scanf("%s",filename);
   	fp1=fopen(filename,"r");
   	printf("\n Enter second file name to open for writing :");
   	scanf("%s",filename);
   	fp2=fopen(filename,"w");
   	c=fgetc(fp1);
   	while((c=fgetc(fp1))!= EOF)
     		{
	 		fputc(c,fp2);
     		}
   	printf("\n Content copied to %s",filename);
   	fclose(fp1);
   	fclose(fp2);
   	getch();
}