#include<stdio.h>
void main()
{
int i,j,k,space,n=9;
for(i=1;i<=n;i++)
{
for(j=1;j<=n-1;j++)
putchar(' ');
for(j=1,k=2*i-1;j<=i-1;j++,k--)
{
if(j<=k)
printf("%d",j);
else
printf("%d",k);
}
putchar('\n');
}
getch();
}