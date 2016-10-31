#include<string.h>
void main()
{
char a[10][10],b[10][10];
int i;
for(i=0;i<=5;i++)
{
gets(a[i]);
}
for(i=0;i<=5;i++)
{
gets(b[i]);
}
for(i=0;i<=5;i++)
{
puts(a[i]);
}
for(i=0;i<=5;i++)
{
puts(b[i]);
}
getch();
}
