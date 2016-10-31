#include<stdio.h>
void main()
{
int a,b,c;
clrscr();
printf("enter the three no");
scanf ("%d%d%d",&a,&b,&c);
if(a>b)
{
printf("a is greater");
printf("c is greater");
}
else
{
if(b>c)
printf("b is greater");
else
printf("c is greater");
}
getch();
}