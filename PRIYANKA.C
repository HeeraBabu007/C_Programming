#include<stdio.h>
void main()
{
int a,b,c;
clrscr();
printf("enter the two no");
scanf("%d%d",&a,&b);
c=a;
a=b;
b=c;
printf("value of a is %d\n",a);
printf("value of b is %d\n",b);
getch();
}

