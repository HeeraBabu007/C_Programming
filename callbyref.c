#include<stdio.h>
#include<conio.h>
int add(int *x,int *y);
int main()
{
int a=7,b=9;
int c=add(&a,&b);
printf("%d",c);
printf("address of C %d",&c);
return 0;
}
int add(int *x,int *y)
{
	int z=*x+*y;
	return z;
}
