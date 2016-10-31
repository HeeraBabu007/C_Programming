#include<stdio.h>
#include<math.h>
int main()
{
int n,sq;
s: printf("Enter any number n= ");
scanf("%d",&n);
if(n==0)
{
sq=0;
}
if(n<0)
{
printf("wrong choice");
goto s;
}
sq=sqrt(n);

printf("%d",sq);
return 0;
}
