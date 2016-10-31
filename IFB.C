#include<stdio.h>
void main()
{
int i,temp,j,n;
printf("enter the number of elements\n");
scanf("%d",&n);
for(i=0;i<=n-1;i++)
{
for(j=0;j<=n-1;j++)
{
if (a[i] >a[j+1]) ;
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
printf("sorted elements are\n");
for(i=0;i<=n-1;i++)
printf("%d",a[i]);
}
}
}