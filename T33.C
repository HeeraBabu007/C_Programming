#include<stdio.h>
void main()
{
int a[5],i;
clrscr();
for(i=0;i<=4;i++)
{
scanf("%d",&a[i]);
}
i=0;
while(i<=4)
{
printf("%d",a[i]);
i++;
}
getch();
}