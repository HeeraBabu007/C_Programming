#include<string.h>
#include<stdio.h>
int main()
{
char a[8],b[8];
int c;
gets(a);
gets(b);
c=strcmp(a,b);
if(c==0)
{
printf("string a and b are equal");
}
else
{
printf("string are not equql");
}
return 0;
}

