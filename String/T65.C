#include<string.h>
int main()
{
char a[5],b[5],c[5];

gets(a);
gets(b);
gets(c);
strcat(a,b,c);
puts(a);
return 0;
}
