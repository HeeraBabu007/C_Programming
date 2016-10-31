#include<stdio.h>
void main()
{
int a,b,temp;
printf("enter the value of a and b");
scanf("%d\t%d",&a,&b);
temp=a;
a=b;
b=temp;
printf("enter the value of a and b %d%d",a,b);
getch();
}