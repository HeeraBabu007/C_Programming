#include<stdio.h>
int add(int *x,int *y);
int main ()
{
int a=10,b=20,c;
c=add(&a,&b);
}


int add(int *x,int *y)
{
int z;
z=*x+*y ;
printf("%d",z);
return 0;
}
