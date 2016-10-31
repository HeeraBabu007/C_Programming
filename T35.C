#include<stdio.h>
void main()
{
int a[5],i,j,temp=0;
for(i=0;i<=4;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=4;i++)
{
for(j=i;j<=4;j++)
{
if(a[i]<a[j])
{

temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}

printf("%d%d",a[0],a[1]);



getch();
}