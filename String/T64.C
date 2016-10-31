#include<string.h>
#include<stdio.h>
int main()
{
char a[5],b[5];

gets(a);
gets(b);
strcat(a,b);
puts(a);
return 0;
}
