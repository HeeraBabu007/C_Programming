#include<stdio.h>
void main()
{
int m[5],f[7],i,h,total=0,average;
for(i=0;i<=4;i++)
{
scanf("%d",&h);
total=total+h;
average=total/5;
}
for(i=0;i<=4;i++)
{
printf("%d",average);
}
getch();
}