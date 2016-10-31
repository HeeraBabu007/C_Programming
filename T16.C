#include<stdio.h>
void main()
{
int a,b,c;
printf("Enter the value of a,b & c");
scanf("%d%d%d",&a,&b,&c);
if(a>b)
{
printf("a is big");
}
else
{
printf("b is big");
}
if(a>c)
{
printf(" a is big");
}
else
{
printf("c is big");
}
if(b>c)
{
printf("b is big");
}
else
{
printf("c is big");
}
getch();
}