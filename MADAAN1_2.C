





#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,n,i;
clrscr();
printf("enter number");
scanf("%d",&n);
a=n;
b=n;

 for(i=1;i<=9;i++)
 {
 printf("enter the number");
 scanf("%d",&n);
 if(a>n)
 a=n;
 if(b>n)
 b=n;
 }
 printf("the bigest no of the series is %d\n",a);
 printf("the smallest no the series is %d \n",b);
 getch();
 }
