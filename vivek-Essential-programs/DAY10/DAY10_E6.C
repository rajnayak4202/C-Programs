//Palindrome
#include <stdio.h>
#include <conio.h>
#include <string.h>

// This Function to check if a string s is Palindrome

void main()
{
	char s[10]="abba";
	// Start from leftmost and rightmost corners of str
	int l = 0;
	int h = strlen(str) - 1;
	clrscr();
	// Keep comparing characters while they are same
	while (h > l)
	{
		if (s[l++] != s[h--])
		{
			printf("%s is not a Palindrome\n", s);
			return;
		}
	}
	printf("%s is a Palindrome\n", s);
	getch();
}
