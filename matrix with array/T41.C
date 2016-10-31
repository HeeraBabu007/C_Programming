#include<stdio.h>
void main()
{
int m[5],n,i;
printf("\nEnter the size of array");
scanf("%d",&n);
printf("Enter  the elements of array");
for(i=0;i<=n;i++)
{
scanf("%d",&m[i]);
}
for(i=0;i<=n;i++)
{
printf("%d",m[i]);
}
getch();
}