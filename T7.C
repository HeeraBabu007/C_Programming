#include<stdio.h>
void main()
{
int  a,b;
printf("Enter two number a & b\n");
scanf("%d%d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("the values of a & b=%d %d");
getch();
}