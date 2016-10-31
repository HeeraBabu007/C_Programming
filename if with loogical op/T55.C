#include<stdio.h>
int fact(int x)
{
if(x==0||x==1)
{
return 1;
}
if(x<0)
{printf("wrong no");
}
return(x*fact(x-1));
}


void main()
{
int n;
printf("Enter the value of n");
scanf("%d",&n);
printf("the factorial:");
printf("%d",fact(n));
getch();
}