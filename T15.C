#include<stdio.h>
void main()
{
int a,b,c;
printf("Enter the values of a,b & c=\t");
scanf("%d%d%d%",&a,&b,&c);
if(a>b && a>c)
{
printf("a is big\n");
}
if(b>c && b>a)
{
printf("b is big\n");
}
if(c>a && c>b)
{
printf("c is big\n");
}
getch();
}

