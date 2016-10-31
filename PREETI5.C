#include<stdio.h>
#include<conio.h>
void swap (int*a,int*b)
{
int c;
c=*a;
*a=*b;
*b=c;
}
void main()
{
int x,y;
printf("enter the value of x and y");
scanf("%d%d",&x,&y);
swap(&x,&y);
printf("%d",x,y);
getch();
}
