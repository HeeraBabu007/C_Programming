#include<stdio.h>
 int swap(int *x,int *y);
int main ()
{
int a=10,b=20,temp;
swap(&a,&b);
}
  int swap(int *x,int *y)
  {
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;

   printf("%d  %d",*x,*y);
   return 0;
}
