#include<stdio.h>
#include<conio.h>
void main()
{
int n,r;
int s=0;
clrscr();
printf("enter the values");
scanf("%d",&n);
do
{
r=n%10;
s=s+r;
n=n/10;
}
while(n>0);
printf("%d",s);
getch();
}
