#include<stdio.h>
int fabonacci(int X);
if(x==0||x==1)
{
return 1;
}
if(x>1)
{
return(x+fabonacci(x-1));
}
void main()
{
int n;
scanf("%d",&n);
printf("%d",fabonacci(n));
getch();
}
