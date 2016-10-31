#include<stdio.h>
#include<string.h>
void main ()
{
char a[20],b[10];
printf("enter string1");
gets(a);
printf("enter string2");
gets(b);
strcat(a,b);
puts(a);
}