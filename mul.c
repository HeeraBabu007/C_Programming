#include<stdio.h>
#include<conio.h>
int mul(int x,int y);
int main()
{
int a=7,b=9;
int c=mul(a,b);
printf("%d",c);
return 0;
}
int mul(int x,int y)
{
	int z=x*y;
	return z;
}
