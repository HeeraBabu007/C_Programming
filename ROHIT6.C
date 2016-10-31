#include<stdio.h>
#include<string.h>
void main()
{
char a[30],b[10],s;
printf("enter string");
gets(a);
printf("enter the string");
gets(b);
strcat(a,b);
printf("%s",s);
}