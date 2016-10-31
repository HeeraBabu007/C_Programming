#include<stdio.h>
void main()
{
int a[5],b[10],i,j;
for(i=0;i<=4;i++)
{
scanf("%d",&a[i]);
}

for(i=0;i<=4;i++)
{
b[i]=a[i];
}
for(i=0;i<=4;i++)
printf("%d",b[i]);
getch();
}
