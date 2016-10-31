#include<stdio.h>
#include<conio.h>
main()
{
int i,n;
float a[50],large;
clrscr();
printf("enter the size of array");
scanf("%d",&n);
for(i=1;i<=n;i++)
scanf("%d",&a[i]);
large=a[i];
for(i=2;i<=n;i++)
{
if(a[i]>large)
large=a[i];
}
printf("largest value is %d",large);
getch();
}

