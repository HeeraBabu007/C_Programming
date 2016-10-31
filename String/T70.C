#include<string.h>
void main()
{
char a[8],b[8];
int c;
gets(a);
strcpy(b,a);
puts(b);
strrev(a);
if(strcmp(a,b)==0)
{
printf("string is palindrom");
}
else
{
printf("string is not palindrom");
}
getch();
}

