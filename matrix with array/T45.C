#include<stdio.h>
void main()
{
int a[3][3], b[3][3],c[3][3],i,j;
clrscr();
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
scanf("%d",&a[i][j]);
}
}
for(i=0;i<=2;i++)
{
printf("\n");
for(j=0;j<=2;j++)
{
printf("%d",a[i][j]);
}
printf("\t");
}

for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
scanf("%d",&b[i][j]);
}
}
for(i=0;i<=2;i++)
{
printf("\n");
for(j=0;j<=2;j++)
{
printf("%d",b[i][j]);
}
printf("\t");
}

for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
c[i][j]=a[i][j]+b[i][j];
}
}

for(i=0;i<=2;i++)
{
printf("\n");
for(j=0;j<=2;j++)
{
printf("%d",c[i][j]);
}
printf("\t");
}
getch();
}