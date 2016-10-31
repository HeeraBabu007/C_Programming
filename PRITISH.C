#include <stdio.h>
#include <conio.h>
void main()
{
 double n,a=1;

printf("enter the  number") ;
scanf("%ld",&n);
while(n>=1)
{
a=a*n ;
n--;
}
printf("%ld",a);
getch();
}