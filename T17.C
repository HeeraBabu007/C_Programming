#include<stdio.h>
void main()
{
int a,b,c,big;
printf("Enter the value of a,b & c\n");
scanf("%d\t%d\t%d",&a,&b,&c);
if(a>b)
{
big=a;
}
else
{
big=b;
}
if(c>big)
{
big=c;
}
printf("the value of big=%d",big);
getch();
}