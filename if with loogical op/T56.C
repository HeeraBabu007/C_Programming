#include<stdio.h>
int fab(int n)
for(i=1;i>=n;i++)
{
fab=fab+n;
}
return fab;


void main()
{
int n,i,fab=0;
scanf("%d",&n);
printf("%d",fab);
getch();
}