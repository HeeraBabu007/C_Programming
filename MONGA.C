#include<stdio.h>
void main()
{
int a[10][10],b[10][10],c[10][10],i,j,k,row1,col1,row2,col2;
printf("enter the order of first matrix\n");
scanf("%d%d",&row1,&col1);
printf("enter the order of second matrix\n");
scanf("%d%d",&row2,&col2);
if(row1!=col2)
{
printf("multiplication is not possible");
}
else
{
printf("enter the elements of first matrix");
for(i=0;i<row1;i++)
{
for(j=0;j<col1;j++)
scanf("%d",&a[i][j]);
}
printf("enter the elements of second matrix");
for(i=0;i<row2;i++)
{
for(j=0;j<col2;j++)
scanf("%d",&b[i][j]);
}
printf("the resultant matrix is \n");
for(i=0;i<row1;i++)
{
for(j=0;j<col2;j++)
{
c[i][j]=0;
for(k=0;k<col1;k++)
{
c[i][j]=c[i][j]+a[i][j]*b[i][j];
scanf("%d",c[i][j]);
}
printf("\n");
}
}
}}
