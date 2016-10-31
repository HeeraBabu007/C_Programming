#include<stdio.h>
void main()
{
int a[5],i,big=0;
clrscr();
for(i=0;i<=4;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<=4;i++)
if(a[i]>big)
{
big=a[i];

}
printf("Big no is=%d",big);

getch();
}