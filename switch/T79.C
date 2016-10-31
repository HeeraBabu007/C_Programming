#include<stdio.h>
void main()
{
int a,b;
clrscr();
printf("Enter the value of a & b");
scanf("%d %d",&a,&b);

if(a>b)
{
printf("a is big");
}
else
{
printf("b is big");
}
getch();
}