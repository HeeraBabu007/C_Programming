#include<stdio.h>
void main()
{
int a[5][5],b[5][5],i,j;
printf("Enter the elements of matrix");
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
printf("\n");
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
b[i][j]=a[j][i];
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
getch();
}