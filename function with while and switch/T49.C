#include<stdio.h>
int add(int x,int y)
{
int z;
z=x*y;
return z;
}

void main()
{
int a=7,b=9,c;
c=add(a,b);
printf("%d",c)
getch();
}