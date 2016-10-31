#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[20],b[20];
clrscr();
printf("enter the string");
scanf("");
strcpy(b,a);
strrev(b);
if(strcmp(a,b)==0)
printf("string is palindrome");
else
printf("string is not palindrome");
getch();
}