#include<stdio.h>
void main()
{
int n,i=1;
printf("Enter the value of n");
scanf("%d",&n);
while(i<=n-1)
{
if(n%i==0)
{
printf("It is not a prime no.");
}
i++;
break;
}
if(i==n)
{
printf("It is a prime no.");
}
getch();
}