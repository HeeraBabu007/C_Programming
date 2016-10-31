#include<stdio.h>
main()
{
int a[10][10],[10][10],c[10][10],i,j,m,n;
printf("enter the order of first matrix\n");
scanf("%d%d",&m,n);
printf("enter the elements of first matrix\n");
for(i=0;i<=m-1;i++)
for(j=0;j<=n-1;j++)
scanf("%d",&a[i][j]);
printf("enter the elements of second matrix\n");
for(i=0;i<=m-1;i++)
for(j=0;j<=n-1;j++)
scanf("%d",&b[i][j]);
/* to add two matrix */
for(i=0;i<=m-1;i++)
for(j=0;j<=n-1;j++)
c[i][j]=a[i][j]+b[i][j];
printf("resultant matrix is\n");
for(i=0;i<=m-1;i++)
{
for(j=0;j<=n-1;j++)
printf("%d",c[i][j]);
printf("\n");
}
}