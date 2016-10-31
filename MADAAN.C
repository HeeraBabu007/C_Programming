#include <stdio.h>
#include <conio.h>
void main()
{
long n,a=1;

printf("enter the  number") ;
scanf("%lu",&n);
while(n>=1)
{
a=a*n ;
n--;
}
printf("%lu",a);
getch();
}