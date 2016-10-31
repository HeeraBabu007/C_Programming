#include<stdio.h>
void main()
{
int a,b,c,i;
clrscr();
printf("enter the value of a& b");
scanf("%d %d",&a,&b);
printf("enter case");
scanf("%d",&i);
switch(i)
{
case 1:
c=a+b;
break;
case 2:
c=a-b;
break;
case 3:
c=a*b;
break;
case 4:
c=a%b;
break;
default:
printf("wrong choice");
break;
}
printf("%d",c);
getch();
}

