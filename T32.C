#include<stdio.h>
void main()
{
int i,j,k;
clrscr();
for(i=1;i<=5;i++)
{
printf("\t");
for(j=1;j<=i;j++,k=j,k<=1,k--)
{

printf("%d%d ",j,k);
}

printf("\n");
}
getch();
}